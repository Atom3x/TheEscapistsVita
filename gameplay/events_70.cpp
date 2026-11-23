#include "vitaframetime.h"
#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_5875 processes event block(s) 555_11. Actions/conditions:
//        555_11: sets the selected object's direction to 24; sets the object position in the world; sets the selected
//        object's visibility to true.
void Frames::event_func_5875()
{
    // event 555_11 : sets the selected object's direction to 24; sets the object position in the world; sets the selected object's visibility to true
    {
        if (!(group_code_1)) goto event_555_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (11))) goto event_555_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_555_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(13))) goto event_555_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_outfit_450))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_555_11_end;
        ((Active*)get_instance(tutorialArrow_instances))->set_direction(24);
        {
            FrameObject * parent = ((Active*)get_single(hudItem_instances));
            if (parent == NULL) goto pos_end_555_11_0;
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + -12);
            pos_end_555_11_0: ;
        }
        ((Active*)get_instance(tutorialArrow_instances))->set_visible(true);
    }
    event_555_11_end: ;
}
// Function purpose: generated callback event_func_5876 processes event block(s) 556_11. Actions/conditions:
//        556_11: sets the selected object's visibility to false.
void Frames::event_func_5876()
{
    // event 556_11 : sets the selected object's visibility to false
    {
        if (!(group_code_1)) goto event_556_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (11))) goto event_556_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_556_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->test_animation(13)) goto event_556_11_end;
        ((Active*)get_instance(tutorialArrow_instances))->set_visible(false);
    }
    event_556_11_end: ;
}
// Function purpose: generated callback event_func_5877 processes event block(s) 557_11. Actions/conditions:
//        557_11: sets popup_timer to 1; increments popup_num by 1.
void Frames::event_func_5877()
{
    // event 557_11 : sets popup_timer to 1; increments popup_num by 1
    {
        if (!(group_code_1)) goto event_557_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (11))) goto event_557_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_3_1257, 0)) != (-1))) goto event_557_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(978, str_popup_num_2542, 1);
    }
    event_557_11_end: ;
}
// Function purpose: generated callback event_func_5878 processes event block(s) 558_11. Actions/conditions:
//        558_11: sets strNum to 14; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 7 more
//        actions.
void Frames::event_func_5878()
{
    VITA_LEGACY_EVENT();
    // event 558_11 : sets strNum to 14; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 7 more actions
    {
        if (!(group_code_1)) goto event_558_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (12))) goto event_558_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(979, str_popup_timer_2543)) == (1))) goto event_558_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(966, str_strnum_2442, 14);
        {
            loop_os_check_running = true;
            int times = int(1);
            loop_os_check_index = 0;
            while (loop_os_check_index < times) {
                loop_os_check_11();
                if (!loop_os_check_running) break;
                loop_os_check_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345), str__346, str__198));
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        popupCloudText_instances.clear_selection();
        for (ObjectIterator it(popupCloudText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(356, str_tutstrlen_1150, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        {
            loop_lolol_running = true;
            int times = int(1);
            loop_lolol_index = 0;
            while (loop_lolol_index < times) {
                loop_lolol_11();
                if (!loop_lolol_running) break;
                loop_lolol_index++;
            }
        }
        {
            loop_flash_tut_running = true;
            int times = int(1);
            loop_flash_tut_index = 0;
            while (loop_flash_tut_index < times) {
                loop_flash_tut_11();
                if (!loop_flash_tut_running) break;
                loop_flash_tut_index++;
            }
        }
    }
    event_558_11_end: ;
}
// Function purpose: generated callback event_func_5879 processes event block(s) 559_11. Actions/conditions:
//        559_11: saves the current object selection; sets the selected object's direction to 0; sets the object
//        position in the world; plus 5 more actions.
void Frames::event_func_5879()
{
    // event 559_11 : saves the current object selection; sets the selected object's direction to 0; sets the object position in the world; plus 5 more actions
    bool or_result_559_11 = false;
    bool or_temp_result_559_11_0 = false;
    {
        if (!(group_code_1)) goto or_event_559_11_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(978, str_popup_num_2542)) == (12))) goto or_event_559_11_0_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_559_11_0_end;
        or_result_559_11 = true;
        or_temp_result_559_11_0 = true;
    }
    or_event_559_11_0_end: ;
    dialogPanel_instances.clear_saved_selection();
    if (or_temp_result_559_11_0) {
        dialogPanel_instances.save_selection();
    }
    // event 559_11 : saves the current object selection; sets the selected object's direction to 0; sets the object position in the world; plus 5 more actions
    bool or_temp_result_559_11_1 = false;
    {
        if (!(group_code_1)) goto or_event_559_11_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(978, str_popup_num_2542)) == (12))) goto or_event_559_11_1_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(19)) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_559_11_1_end;
        or_result_559_11 = true;
        or_temp_result_559_11_1 = true;
        or_event_559_11_1_end: ;
        if (or_temp_result_559_11_1) {
            dialogPanel_instances.save_selection();
        }
        if (!or_result_559_11) goto or_final_or_event_559_11_1_end;
        dialogPanel_instances.empty_selection();
        if (or_temp_result_559_11_0 || or_temp_result_559_11_1) {
            dialogPanel_instances.restore_selection();
        }
        tutorialArrow_instances.clear_selection();
        for (ObjectIterator it(tutorialArrow_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(tutorialArrow_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(interfaceButtons_instances, it.current_index));
            if (parent == NULL) goto pos_end_559_11_0;
            ((Active*)*it)->set_global_position(parent->get_box_index(0), parent->get_box_index(1) + (parent->get_box_index(3) - parent->get_box_index(1)) / 8);
            pos_end_559_11_0: ;
        }
        for (ObjectIterator it(tutorialArrow_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
            ((Active*)*it)->set_layer(6-1);
        }
    }
    or_final_or_event_559_11_1_end: ;
}
// Function purpose: generated callback event_func_5880 processes event block(s) 560_11. Actions/conditions:
//        560_11: sets the selected object's direction to 0; sets the object position in the world; sets the selected
//        object's visibility to true.
void Frames::event_func_5880()
{
    // event 560_11 : sets the selected object's direction to 0; sets the object position in the world; sets the selected object's visibility to true
    {
        if (!(group_code_1)) goto event_560_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (12))) goto event_560_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_560_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(19))) goto event_560_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (3))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_560_11_end;
        ((Active*)get_instance(tutorialArrow_instances))->set_direction(0);
        {
            FrameObject * parent = ((Active*)get_single(hudItem_instances));
            if (parent == NULL) goto pos_end_560_11_0;
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(parent->get_x() + -12, parent->get_y() + 0);
            pos_end_560_11_0: ;
        }
        ((Active*)get_instance(tutorialArrow_instances))->set_visible(true);
    }
    event_560_11_end: ;
}
// Function purpose: generated callback event_func_5881 processes event block(s) 561_11. Actions/conditions:
//        561_11: sets the selected object's direction to 24; sets the object position in the world; sets the selected
//        object's visibility to true.
void Frames::event_func_5881()
{
    // event 561_11 : sets the selected object's direction to 24; sets the object position in the world; sets the selected object's visibility to true
    {
        if (!(group_code_1)) goto event_561_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (12))) goto event_561_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_561_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(19))) goto event_561_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_outfit_505))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_561_11_end;
        ((Active*)get_instance(tutorialArrow_instances))->set_direction(24);
        {
            FrameObject * parent = ((Active*)get_single(hudItem_instances));
            if (parent == NULL) goto pos_end_561_11_0;
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + -12);
            pos_end_561_11_0: ;
        }
        ((Active*)get_instance(tutorialArrow_instances))->set_visible(true);
    }
    event_561_11_end: ;
}
// Function purpose: generated callback event_func_5882 processes event block(s) 562_11. Actions/conditions:
//        562_11: sets popup_timer to 1; increments popup_num by 1.
void Frames::event_func_5882()
{
    // event 562_11 : sets popup_timer to 1; increments popup_num by 1
    {
        if (!(group_code_1)) goto event_562_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (12))) goto event_562_11_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 2)) == (str_3_644))) goto event_562_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(978, str_popup_num_2542, 1);
    }
    event_562_11_end: ;
}
// Function purpose: generated callback event_func_5883 processes event block(s) 563_11. Actions/conditions:
//        563_11: sets strNum to 15; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 9 more
//        actions.
void Frames::event_func_5883()
{
    VITA_LEGACY_EVENT();
    // event 563_11 : sets strNum to 15; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 9 more actions
    {
        if (!(group_code_1)) goto event_563_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (13))) goto event_563_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(979, str_popup_timer_2543)) == (1))) goto event_563_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(966, str_strnum_2442, 15);
        {
            loop_os_check_running = true;
            int times = int(1);
            loop_os_check_index = 0;
            while (loop_os_check_index < times) {
                loop_os_check_11();
                if (!loop_os_check_running) break;
                loop_os_check_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345), str__346, str__198));
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
        popupCloudText_instances.clear_selection();
        for (ObjectIterator it(popupCloudText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(356, str_tutstrlen_1150, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        {
            ((Active*)get_instance(active3_284_instances))->set_global_position(808, 264);
            pos_end_563_11_0: ;
        }
        ((Active*)get_instance(destarrow_283_instances))->set_visible(true);
        {
            loop_lolol_running = true;
            int times = int(1);
            loop_lolol_index = 0;
            while (loop_lolol_index < times) {
                loop_lolol_11();
                if (!loop_lolol_running) break;
                loop_lolol_index++;
            }
        }
        {
            loop_flash_tut_running = true;
            int times = int(1);
            loop_flash_tut_index = 0;
            while (loop_flash_tut_index < times) {
                loop_flash_tut_11();
                if (!loop_flash_tut_running) break;
                loop_flash_tut_index++;
            }
        }
    }
    event_563_11_end: ;
}
// Function purpose: generated callback event_func_5884 processes event block(s) 564_11. Actions/conditions:
//        564_11: sets the selected object's direction to 24; sets the object position in the world; moves the
//        selected object to the front; plus 1 more actions.
void Frames::event_func_5884()
{
    // event 564_11 : sets the selected object's direction to 24; sets the object position in the world; moves the selected object to the front; plus 1 more actions
    {
        if (!(group_code_1)) goto event_564_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (13))) goto event_564_11_end;
        ((Active*)get_instance(tutorialArrow_instances))->set_direction(24);
        {
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(808, 254);
            pos_end_564_11_0: ;
        }
        ((Active*)get_instance(tutorialArrow_instances))->move_front();
        ((Active*)get_instance(tutorialArrow_instances))->set_layer(6-1);
    }
    event_564_11_end: ;
}
// Function purpose: generated callback event_func_5885 processes event block(s) 565_11. Actions/conditions:
//        565_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_5885()
{
    // event 565_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1)) goto event_565_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (13))) goto event_565_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(active3_284_instances));
            if (obj1 == NULL) goto compare_565_11_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_565_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (get_distance(x1, y1, x2, y2) <= 50) goto event_565_11_end;
        }
        compare_565_11_0_end: ;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(true);
    }
    event_565_11_end: ;
}
// Function purpose: generated callback event_func_5886 processes event block(s) 566_11. Actions/conditions:
//        566_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_5886()
{
    // event 566_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1)) goto event_566_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (13))) goto event_566_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(active3_284_instances));
            if (obj1 == NULL) goto compare_566_11_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_566_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 50)) goto event_566_11_end;
        }
        compare_566_11_0_end: ;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(false);
    }
    event_566_11_end: ;
}
// Function purpose: generated callback event_func_5887 processes event block(s) 567_11. Actions/conditions:
//        567_11: sets popup_timer to 1; increments popup_num by 1.
void Frames::event_func_5887()
{
    // event 567_11 : sets popup_timer to 1; increments popup_num by 1
    {
        if (!(group_code_1)) goto event_567_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (13))) goto event_567_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_567_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(978, str_popup_num_2542, 1);
    }
    event_567_11_end: ;
}
// Function purpose: generated callback event_func_5888 processes event block(s) 568_11. Actions/conditions:
//        568_11: sets strNum to 16; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 10 more
//        actions.
void Frames::event_func_5888()
{
    VITA_LEGACY_EVENT();
    // event 568_11 : sets strNum to 16; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 10 more actions
    {
        if (!(group_code_1)) goto event_568_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (14))) goto event_568_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(979, str_popup_timer_2543)) == (1))) goto event_568_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_568_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(966, str_strnum_2442, 16);
        {
            loop_os_check_running = true;
            int times = int(1);
            loop_os_check_index = 0;
            while (loop_os_check_index < times) {
                loop_os_check_11();
                if (!loop_os_check_running) break;
                loop_os_check_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345), str__346, str__198));
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
        popupCloudText_instances.clear_selection();
        for (ObjectIterator it(popupCloudText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(356, str_tutstrlen_1150, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        ((Active*)get_instance(destarrow_283_instances))->set_visible(false);
        ((Active*)get_instance(tutarrow2_773_instances))->set_direction(16);
        ((Active*)get_instance(tutarrow2_773_instances))->blend_color.set_alpha_coefficient(180);
        {
            loop_flash_tut_running = true;
            int times = int(1);
            loop_flash_tut_index = 0;
            while (loop_flash_tut_index < times) {
                loop_flash_tut_11();
                if (!loop_flash_tut_running) break;
                loop_flash_tut_index++;
            }
        }
        {
            loop_lolol_running = true;
            int times = int(1);
            loop_lolol_index = 0;
            while (loop_lolol_index < times) {
                loop_lolol_11();
                if (!loop_lolol_running) break;
                loop_lolol_index++;
            }
        }
    }
    event_568_11_end: ;
}
// Function purpose: generated callback event_func_5889 processes event block(s) 569_11. Actions/conditions:
//        569_11: sets the selected object's direction to 24; sets the object position in the world; sets the selected
//        object's visibility to true.
void Frames::event_func_5889()
{
    // event 569_11 : sets the selected object's direction to 24; sets the object position in the world; sets the selected object's visibility to true
    {
        if (!(group_code_1)) goto event_569_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (14))) goto event_569_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_569_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_569_11_end;
        items_184_instances.clear_selection();
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (5))) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_569_11_end;
        ((Active*)get_instance(tutorialArrow_instances))->set_direction(24);
        {
            FrameObject * parent = ((Active*)get_single(items_184_instances));
            if (parent == NULL) goto pos_end_569_11_0;
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + -10);
            pos_end_569_11_0: ;
        }
        ((Active*)get_instance(tutorialArrow_instances))->set_visible(true);
    }
    event_569_11_end: ;
}
// Function purpose: generated callback event_func_5890 processes event block(s) 570_11. Actions/conditions:
//        570_11: sets the selected object's direction to 0; sets the object position in the world; sets the selected
//        object's visibility to true.
void Frames::event_func_5890()
{
    // event 570_11 : sets the selected object's direction to 0; sets the object position in the world; sets the selected object's visibility to true
    {
        if (!(group_code_1)) goto event_570_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (14))) goto event_570_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_570_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_570_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (5))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_570_11_end;
        ((Active*)get_instance(tutorialArrow_instances))->set_direction(0);
        {
            FrameObject * parent = ((Active*)get_single(hudItem_instances));
            if (parent == NULL) goto pos_end_570_11_0;
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(parent->get_x() + -10, parent->get_y() + 0);
            pos_end_570_11_0: ;
        }
        ((Active*)get_instance(tutorialArrow_instances))->set_visible(true);
    }
    event_570_11_end: ;
}
// Function purpose: generated callback event_func_5891 processes event block(s) 571_11. Actions/conditions:
//        571_11: sets the object position in the world.
void Frames::event_func_5891()
{
    // event 571_11 : sets the object position in the world
    {
        if (!(group_code_1)) goto event_571_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (14))) goto event_571_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_571_11_end;
        {
            ((Active*)get_instance(tutarrow2_773_instances))->set_global_position(-50, -50);
            pos_end_571_11_0: ;
        }
    }
    event_571_11_end: ;
}
// Function purpose: generated callback event_func_5892 processes event block(s) 572_11. Actions/conditions:
//        572_11: sets the object position in the world; sets the selected object's direction to 24; sets the object
//        position in the world; plus 1 more actions.
void Frames::event_func_5892()
{
    // event 572_11 : sets the object position in the world; sets the selected object's direction to 24; sets the object position in the world; plus 1 more actions
    {
        if (!(group_code_1)) goto event_572_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (14))) goto event_572_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (5))) goto event_572_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_572_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_572_11_end;
        {
            ((Active*)get_instance(tutarrow2_773_instances))->set_global_position(800, 224);
            pos_end_572_11_0: ;
        }
        ((Active*)get_instance(tutorialArrow_instances))->set_direction(24);
        {
            FrameObject * parent = ((Active*)get_instance(tutarrow2_773_instances));
            if (parent == NULL) goto pos_end_572_11_1;
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + -2);
            pos_end_572_11_1: ;
        }
        ((Active*)get_instance(tutorialArrow_instances))->set_visible(true);
    }
    event_572_11_end: ;
}
// Function purpose: generated callback event_func_5893 processes event block(s) 573_11. Actions/conditions:
//        573_11: sets the object position in the world; sets the object position in the world.
void Frames::event_func_5893()
{
    // event 573_11 : sets the object position in the world; sets the object position in the world
    {
        if (!(group_code_1)) goto event_573_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (14))) goto event_573_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) > (0))) goto event_573_11_end;
        {
            ((Active*)get_instance(tutarrow2_773_instances))->set_global_position(-50, -50);
            pos_end_573_11_0: ;
        }
        {
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(-50, -50);
            pos_end_573_11_1: ;
        }
    }
    event_573_11_end: ;
}
// Function purpose: generated callback event_func_5894 processes event block(s) 574_11. Actions/conditions:
//        574_11: sets the selected object's direction to 24; sets the object position in the world; moves the
//        selected object to the front; plus 5 more actions.
void Frames::event_func_5894()
{
    // event 574_11 : sets the selected object's direction to 24; sets the object position in the world; moves the selected object to the front; plus 5 more actions
    {
        if (!(group_code_1)) goto event_574_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (14))) goto event_574_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_574_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) != (1))) goto event_574_11_end;
        ((Active*)get_instance(tutorialArrow_instances))->set_direction(24);
        {
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(808, 254);
            pos_end_574_11_0: ;
        }
        ((Active*)get_instance(tutorialArrow_instances))->move_front();
        ((Active*)get_instance(tutorialArrow_instances))->set_layer(6-1);
        {
            ((Active*)get_instance(tutarrow2_773_instances))->set_global_position(-50, -50);
            pos_end_574_11_1: ;
        }
    }
    event_574_11_end: ;
}
// Function purpose: generated callback event_func_5895 processes event block(s) 575_11. Actions/conditions:
//        575_11: sets popup_timer to 1; increments popup_num by 1.
void Frames::event_func_5895()
{
    VITA_LEGACY_EVENT();
    // event 575_11 : sets popup_timer to 1; increments popup_num by 1
    {
        if (!(group_code_1)) goto event_575_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (14))) goto event_575_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) == (1))) goto event_575_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(978, str_popup_num_2542, 1);
    }
    event_575_11_end: ;
}
// Function purpose: generated callback event_func_5896 processes event block(s) 576_11. Actions/conditions:
//        576_11: sets strNum to 17; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 8 more
//        actions.
void Frames::event_func_5896()
{
    VITA_LEGACY_EVENT();
    // event 576_11 : sets strNum to 17; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 8 more actions
    {
        if (!(group_code_1)) goto event_576_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (15))) goto event_576_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(979, str_popup_timer_2543)) == (1))) goto event_576_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_576_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(966, str_strnum_2442, 17);
        {
            loop_os_check_running = true;
            int times = int(1);
            loop_os_check_index = 0;
            while (loop_os_check_index < times) {
                loop_os_check_11();
                if (!loop_os_check_running) break;
                loop_os_check_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345), str__346, str__198));
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
        popupCloudText_instances.clear_selection();
        for (ObjectIterator it(popupCloudText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(356, str_tutstrlen_1150, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        {
            ((Active*)get_instance(tutarrow2_773_instances))->set_global_position(-50, -50);
            pos_end_576_11_0: ;
        }
        {
            loop_lolol_running = true;
            int times = int(1);
            loop_lolol_index = 0;
            while (loop_lolol_index < times) {
                loop_lolol_11();
                if (!loop_lolol_running) break;
                loop_lolol_index++;
            }
        }
        {
            loop_flash_tut_running = true;
            int times = int(1);
            loop_flash_tut_index = 0;
            while (loop_flash_tut_index < times) {
                loop_flash_tut_11();
                if (!loop_flash_tut_running) break;
                loop_flash_tut_index++;
            }
        }
    }
    event_576_11_end: ;
}
// Function purpose: generated callback event_func_5897 processes event block(s) 577_11. Actions/conditions:
//        577_11: sets the selected object's direction to 0; sets the object position in the world; sets the selected
//        object's visibility to true.
void Frames::event_func_5897()
{
    // event 577_11 : sets the selected object's direction to 0; sets the object position in the world; sets the selected object's visibility to true
    {
        if (!(group_code_1)) goto event_577_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (15))) goto event_577_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_577_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_577_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (5))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_577_11_end;
        ((Active*)get_instance(tutorialArrow_instances))->set_direction(0);
        {
            FrameObject * parent = ((Active*)get_single(hudItem_instances));
            if (parent == NULL) goto pos_end_577_11_0;
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(parent->get_x() + -10, parent->get_y() + 0);
            pos_end_577_11_0: ;
        }
        ((Active*)get_instance(tutorialArrow_instances))->set_visible(true);
    }
    event_577_11_end: ;
}
// Function purpose: generated callback event_func_5898 processes event block(s) 578_11. Actions/conditions:
//        578_11: sets the object position in the world.
void Frames::event_func_5898()
{
    // event 578_11 : sets the object position in the world
    {
        if (!(group_code_1)) goto event_578_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (15))) goto event_578_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_578_11_end;
        {
            ((Active*)get_instance(tutarrow2_773_instances))->set_global_position(-50, -50);
            pos_end_578_11_0: ;
        }
    }
    event_578_11_end: ;
}
// Function purpose: generated callback event_func_5899 processes event block(s) 579_11. Actions/conditions:
//        579_11: sets the object position in the world; sets the selected object's direction to 24; sets the object
//        position in the world; plus 1 more actions.
void Frames::event_func_5899()
{
    // event 579_11 : sets the object position in the world; sets the selected object's direction to 24; sets the object position in the world; plus 1 more actions
    {
        if (!(group_code_1)) goto event_579_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (15))) goto event_579_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (5))) goto event_579_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_579_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_579_11_end;
        {
            ((Active*)get_instance(tutarrow2_773_instances))->set_global_position(800, 224);
            pos_end_579_11_0: ;
        }
        ((Active*)get_instance(tutorialArrow_instances))->set_direction(24);
        {
            FrameObject * parent = ((Active*)get_instance(tutarrow2_773_instances));
            if (parent == NULL) goto pos_end_579_11_1;
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + -2);
            pos_end_579_11_1: ;
        }
        ((Active*)get_instance(tutorialArrow_instances))->set_visible(true);
    }
    event_579_11_end: ;
}
// Function purpose: generated callback event_func_5900 processes event block(s) 580_11. Actions/conditions:
//        580_11: sets the selected object's direction to 24; sets the object position in the world; moves the
//        selected object to the front; plus 5 more actions.
void Frames::event_func_5900()
{
    // event 580_11 : sets the selected object's direction to 24; sets the object position in the world; moves the selected object to the front; plus 5 more actions
    {
        if (!(group_code_1)) goto event_580_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (15))) goto event_580_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_580_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) != (1))) goto event_580_11_end;
        ((Active*)get_instance(tutorialArrow_instances))->set_direction(24);
        {
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(808, 254);
            pos_end_580_11_0: ;
        }
        ((Active*)get_instance(tutorialArrow_instances))->move_front();
        ((Active*)get_instance(tutorialArrow_instances))->set_layer(6-1);
        {
            ((Active*)get_instance(tutarrow2_773_instances))->set_global_position(-50, -50);
            pos_end_580_11_1: ;
        }
    }
    event_580_11_end: ;
}
// Function purpose: generated callback event_func_5901 processes event block(s) 581_11. Actions/conditions:
//        581_11: sets the object position in the world.
void Frames::event_func_5901()
{
    // event 581_11 : sets the object position in the world
    bool or_result_581_11 = false;
    bool or_temp_result_581_11_0 = false;
    {
        if (!(group_code_1)) goto or_event_581_11_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(978, str_popup_num_2542)) == (15))) goto or_event_581_11_0_end;
        if (!((dighole_207_instances.size()) >= (3))) goto or_event_581_11_0_end;
        or_result_581_11 = true;
        or_temp_result_581_11_0 = true;
    }
    or_event_581_11_0_end: ;
    // event 581_11 : sets the object position in the world
    bool or_temp_result_581_11_1 = false;
    {
        if (!(group_code_1)) goto or_event_581_11_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(978, str_popup_num_2542)) == (15))) goto or_event_581_11_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(153, str_digging_726)) > (0))) goto or_event_581_11_1_end;
        or_result_581_11 = true;
        or_temp_result_581_11_1 = true;
        or_event_581_11_1_end: ;
        if (!or_result_581_11) goto or_final_or_event_581_11_1_end;
        tutorialArrow_instances.clear_selection();
        for (ObjectIterator it(tutorialArrow_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(-50, -50);
            pos_end_581_11_0: ;
        }
        tutarrow2_773_instances.clear_selection();
        for (ObjectIterator it(tutarrow2_773_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(-50, -50);
            pos_end_581_11_1: ;
        }
    }
    or_final_or_event_581_11_1_end: ;
}
// Function purpose: generated callback event_func_5902 processes event block(s) 582_11. Actions/conditions:
//        582_11: sets popup_timer to 1; increments popup_num by 1.
void Frames::event_func_5902()
{
    // event 582_11 : sets popup_timer to 1; increments popup_num by 1
    {
        if (!(group_code_1)) goto event_582_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (15))) goto event_582_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_582_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(978, str_popup_num_2542, 1);
    }
    event_582_11_end: ;
}
// Function purpose: generated callback event_func_5903 processes event block(s) 583_11. Actions/conditions:
//        583_11: sets strNum to 18; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 15 more
//        actions.
void Frames::event_func_5903()
{
    VITA_LEGACY_EVENT();
    // event 583_11 : sets strNum to 18; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 15 more actions
    {
        if (!(group_code_1)) goto event_583_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (16))) goto event_583_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(979, str_popup_timer_2543)) == (1))) goto event_583_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_583_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(966, str_strnum_2442, 18);
        {
            loop_os_check_running = true;
            int times = int(1);
            loop_os_check_index = 0;
            while (loop_os_check_index < times) {
                loop_os_check_11();
                if (!loop_os_check_running) break;
                loop_os_check_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345), str__346, str__198));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(356, str_tutstrlen_1150, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
        popupCloudText_instances.clear_selection();
        for (ObjectIterator it(popupCloudText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345));
        }
        ((Active*)get_instance(tutorialArrow_instances))->set_visible(false);
        ((Active*)get_instance(tutarrow2_773_instances))->set_visible(false);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(523, str_inv_1_1423, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(524, str_inv_2_1424, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(525, str_inv_3_1425, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(526, str_inv_4_1426, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(527, str_inv_5_1427, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(528, str_inv_6_1428, empty_string);
        {
            loop_inv_clear_running = true;
            int times = int(1);
            loop_inv_clear_index = 0;
            while (loop_inv_clear_index < times) {
                loop_inv_clear_11();
                if (!loop_inv_clear_running) break;
                loop_inv_clear_index++;
            }
        }
        {
            loop_lolol_running = true;
            int times = int(1);
            loop_lolol_index = 0;
            while (loop_lolol_index < times) {
                loop_lolol_11();
                if (!loop_lolol_running) break;
                loop_lolol_index++;
            }
        }
    }
    event_583_11_end: ;
}
// Function purpose: generated callback event_func_5904 processes event block(s) 587_11. Actions/conditions:
//        587_11: sets the selected object's horizontal position to ((Active*)get_instance(popupClouds_instances,
//        it.current_index, default_active_instance))->get_box_index(0)+5; sets the selected object's vertical
//        position to ((Active*)get_instance(popupClouds_instances, it.current_index,
//        default_active_instance))->get_box_index(1)+3.
void Frames::event_func_5904()
{
    // event 587_11 : sets the selected object's horizontal position to ((Active*)get_instance(popupClouds_instances, it.current_index, default_active_instance))->get_box_index(0)+5; sets the selected object's vertical position to ((Active*)get_instance(popupClouds_instances, it.current_index, default_active_instance))->get_box_index(1)+3
    {
        if (!(group_code_1)) goto event_587_11_end;
        if (!((popupCloudText_instances.size()) > (0))) goto event_587_11_end;
        popupCloudText_instances.clear_selection();
        for (ObjectIterator it(popupCloudText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(((Active*)get_instance(popupClouds_instances, it.current_index, default_active_instance))->get_box_index(0)+5);
            ((Text*)*it)->set_y(((Active*)get_instance(popupClouds_instances, it.current_index, default_active_instance))->get_box_index(1)+3);
        }
    }
    event_587_11_end: ;
}
// Function purpose: generated callback event_func_5905 processes event block(s) 592_11. Actions/conditions:
//        592_11: increments popup_timer by 1.
void Frames::event_func_5905()
{
    VITA_LEGACY_EVENT();
    // event 592_11 : increments popup_timer by 1
    {
        if (!(group_code_1)) goto event_592_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_592_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (1))) goto event_592_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(979, str_popup_timer_2543, 1);
    }
    event_592_11_end: ;
}
// Function purpose: generated callback event_func_5906 processes event block(s) 593_11. Actions/conditions:
//        593_11: sets LClick to 1; sets the selected object's visibility to false; removes the selected object; plus
//        1 more actions.
void Frames::event_func_5906()
{
    // event 593_11 : sets LClick to 1; sets the selected object's visibility to false; removes the selected object; plus 1 more actions
    {
        if (!(group_code_1)) goto event_593_11_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(7))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_593_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) != (-1))) goto event_593_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(22))) goto event_593_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_593_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_593_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
        buttontext_445_instances.clear_selection();
        for (ObjectIterator it(buttontext_445_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_593_11_end: ;
}
// Function purpose: generated callback event_func_5907 processes event block(s) 594_11. Actions/conditions:
//        594_11: sets the selected object's text.
void Frames::event_func_5907()
{
    // event 594_11 : sets the selected object's text
    {
        if (!(group_code_1)) goto event_594_11_end;
        mouse2_713_instances.clear_selection();
        for (ObjectIterator it(mouse2_713_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(356, str_tutstrlen_1150)));
        }
    }
    event_594_11_end: ;
}
// Function purpose: generated callback event_func_5908 processes event block(s) 604_11. Actions/conditions:
//        604_11: sets the selected object's numeric value to 0; sets the selected object's visibility to false; sets
//        SpeakText to You are too fatigued; plus 1 more actions.
void Frames::event_func_5908()
{
    // event 604_11 : sets the selected object's numeric value to 0; sets the selected object's visibility to false; sets SpeakText to You are too fatigued; plus 1 more actions
    {
        if (!(group_code_1)) goto event_604_11_end;
        if (!((((Active*)get_instance(target_177_instances))->alterables->values.get(0)) != (0))) goto event_604_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) >= (100))) goto event_604_11_end;
        ((Active*)get_instance(target_177_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(target_177_instances))->set_visible(false);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, str_you_are_too_fatigued_2454);
        {
            loop_notice_running = true;
            int times = int(1);
            loop_notice_index = 0;
            while (loop_notice_index < times) {
                loop_notice_11();
                if (!loop_notice_running) break;
                loop_notice_index++;
            }
        }
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_604_11_end: ;
}
// Function purpose: generated callback event_func_5909 processes event block(s) 606_11. Actions/conditions:
//        606_11: checks scene is active; the event-specific game state condition is met; dialog is open; this handler
//        gates a game event without a direct value/object action.
void Frames::event_func_5909()
{
    // event 606_11 : checks scene is active; the event-specific game state condition is met; dialog is open; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_606_11_end;
        if (!((((Active*)get_instance(target_177_instances))->alterables->values.get(0)) == (1))) goto event_606_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(3)) == (0))) goto event_606_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_606_11_end;
        {
            loop_you_attack_running = true;
            int times = int(1);
            loop_you_attack_index = 0;
            while (loop_you_attack_index < times) {
                loop_you_attack_11();
                if (!loop_you_attack_running) break;
                loop_you_attack_index++;
            }
        }
    }
    event_606_11_end: ;
}
// Function purpose: generated callback event_func_5910 processes event block(s) 617_11. Actions/conditions:
//        617_11: sets the object position in the world; sets the object position in the world.
void Frames::event_func_5910()
{
    // event 617_11 : sets the object position in the world; sets the object position in the world
    {
        if (!(group_code_1)) goto event_617_11_end;
        playerBase_instances.clear_selection();
        qualifier_6.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_6)) goto event_617_11_end;
        if (!check_not_overlap(playerBase_instances, qualifier_18)) goto event_617_11_end;
        if (!((number_to_string(((Active*)get_instance(playerBase_instances))->get_x())+str_x_437+number_to_string(((Active*)get_instance(playerBase_instances))->get_y())) != (number_to_string(((Active*)get_single(qualifier_6, default_active_instance))->get_x())+str_x_437+number_to_string(((Active*)get_single(qualifier_6, default_active_instance))->get_y())))) goto event_617_11_end;
        {
            FrameObject * parent = ((Active*)get_single(qualifier_6));
            if (parent == NULL) goto pos_end_617_11_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_617_11_0: ;
        }
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_617_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_617_11_1: ;
        }
    }
    event_617_11_end: ;
}
// Function purpose: generated callback event_func_5911 processes event block(s) 627_11. Actions/conditions:
//        627_11: creates a textbuddies 393 object.
void Frames::event_func_5911()
{
    // event 627_11 : creates a textbuddies 393 object
    {
        if (!(group_code_1)) goto event_627_11_end;
        if (!((buddiesText_instances.size()) == (0))) goto event_627_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(618, str_buddies_39)) > (0))) goto event_627_11_end;
        FrameObject * single_instance_627_11_0; single_instance_627_11_0 = NULL;
        // select single: true false false
        fatigueText_instances.clear_selection();
        for (ObjectIterator p_it(fatigueText_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((TextBlitter*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buddiesText(parent->x + 0, parent->y + 12), parent->layer);
                if (single_instance_627_11_0 == NULL)
                    single_instance_627_11_0 = new_obj;
            }
        }
    }
    event_627_11_end: ;
}
// Function purpose: generated callback event_func_5912 processes event block(s) 629_11. Actions/conditions:
//        629_11: sets the displayed text; sets the displayed text; sets the displayed text; plus 5 more actions.
void Frames::event_func_5912()
{
    // event 629_11 : sets the displayed text; sets the displayed text; sets the displayed text; plus 5 more actions
    {
        if (!(group_code_1)) goto event_629_11_end;
        every_629_11 += manager.dt;
        if (every_629_11 < 0.25) goto event_629_11_end;
        every_629_11 -= 0.25;
        cashText_instances.clear_selection();
        for (ObjectIterator it(cashText_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_text(str__1132+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(219, str_cash_11)));
        }
        healthText_instances.clear_selection();
        for (ObjectIterator it(healthText_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_text(str__859+number_to_string(get_max(0, get_floor(((Active*)get_instance(playerBase_instances))->alterables->values.get(7)))));
        }
        heatText_instances.clear_selection();
        for (ObjectIterator it(heatText_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_text(str__859+number_to_string(get_floor(((AssociateArray*)get_instance(gameVariables_instances))->get_value(32, str_heat_495)))+str__2050);
        }
        fatigueText_instances.clear_selection();
        for (ObjectIterator it(fatigueText_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_text(str__859+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36))+str__2050);
        }
        buddiesText_instances.clear_selection();
        for (ObjectIterator it(buddiesText_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_text(str_x_2051+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(618, str_buddies_39)));
        }
    }
    event_629_11_end: ;
}
// Function purpose: generated callback event_func_5913 processes event block(s) 640_11. Actions/conditions:
//        640_11: saves the current object selection; saves the current object selection; saves the current object
//        selection; plus 8 more actions.
void Frames::event_func_5913()
{
    // event 640_11 : saves the current object selection; saves the current object selection; saves the current object selection; plus 8 more actions
    bool or_result_640_11 = false;
    bool or_temp_result_640_11_0 = false;
    {
        if (!(group_code_1)) goto or_event_640_11_0_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(1))) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto or_event_640_11_0_end;
        if (!((((Active*)get_instance(playerBase_instances, default_active_instance))->layer->index+1) == (2))) goto or_event_640_11_0_end;
        mouse_9_instances.clear_selection();
        for (ObjectIterator it(mouse_9_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(12)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(13)) { it.deselect(); continue; }
        }
        if (!mouse_9_instances.has_selection()) goto or_event_640_11_0_end;
        playerBase_instances.clear_selection();
        qualifier_18.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_18)) goto or_event_640_11_0_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_640_11_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(151, str_carrying_724)) == (0))) goto or_event_640_11_0_end;
        or_result_640_11 = true;
        or_temp_result_640_11_0 = true;
    }
    or_event_640_11_0_end: ;
    qualifier_18.clear_saved_selection();
    mouse_9_instances.clear_saved_selection();
    ventCover_instances.clear_saved_selection();
    playerBase_instances.clear_saved_selection();
    dialogPanel_instances.clear_saved_selection();
    if (or_temp_result_640_11_0) {
        qualifier_18.save_selection();
        mouse_9_instances.save_selection();
        ventCover_instances.save_selection();
        playerBase_instances.save_selection();
        dialogPanel_instances.save_selection();
    }
    // event 640_11 : saves the current object selection; saves the current object selection; saves the current object selection; plus 8 more actions
    bool or_temp_result_640_11_1 = false;
    {
        if (!(group_code_1)) goto or_event_640_11_1_end;
        ladders_336_instances.clear_selection();
        for (ObjectIterator it(ladders_336_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(256))) { it.deselect(); continue; }
        }
        if (!ladders_336_instances.has_selection()) goto or_event_640_11_1_end;
        if (!((((Active*)get_single(ladders_336_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances, default_active_instance))->layer->index+1))) goto or_event_640_11_1_end;
        mouse_9_instances.clear_selection();
        for (ObjectIterator it(mouse_9_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(12)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(13)) { it.deselect(); continue; }
        }
        if (!mouse_9_instances.has_selection()) goto or_event_640_11_1_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_640_11_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(151, str_carrying_724)) == (0))) goto or_event_640_11_1_end;
        or_result_640_11 = true;
        or_temp_result_640_11_1 = true;
        or_event_640_11_1_end: ;
        ladders_336_instances.clear_saved_selection();
        if (or_temp_result_640_11_1) {
            mouse_9_instances.save_selection();
            ladders_336_instances.save_selection();
            dialogPanel_instances.save_selection();
        }
        if (!or_result_640_11) goto or_final_or_event_640_11_1_end;
        dialogPanel_instances.empty_selection();
        ladders_336_instances.empty_selection();
        ventCover_instances.empty_selection();
        qualifier_18.empty_selection();
        playerBase_instances.empty_selection();
        mouse_9_instances.empty_selection();
        if (or_temp_result_640_11_0 || or_temp_result_640_11_1) {
            dialogPanel_instances.restore_selection();
        }
        if (or_temp_result_640_11_1) {
            ladders_336_instances.restore_selection();
        }
        if (or_temp_result_640_11_0) {
            ventCover_instances.restore_selection();
        }
        if (or_temp_result_640_11_0) {
            qualifier_18.restore_selection();
        }
        if (or_temp_result_640_11_0) {
            playerBase_instances.restore_selection();
        }
        if (or_temp_result_640_11_0 || or_temp_result_640_11_1) {
            mouse_9_instances.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(872, str_lastcursor_2054, ((Active*)get_single(mouse_9_instances, it.current_index, default_active_instance))->current_animation);
        }
        for (ObjectIterator it(mouse_9_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
        }
    }
    or_final_or_event_640_11_1_end: ;
}
// Function purpose: generated callback event_func_5914 processes event block(s) 642_11. Actions/conditions:
//        642_11: sets LastCursor to mouse_9->current_animation; sets the object's animation to 14.
void Frames::event_func_5914()
{
    // event 642_11 : sets LastCursor to mouse_9->current_animation; sets the object's animation to 14
    {
        if (!(group_code_1)) goto event_642_11_end;
        dighole_207_instances.clear_selection();
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_642_11_end;
        if (!check_not_overlap(dighole_207_instances, desks_717_instances)) goto event_642_11_end;
        if (!check_not_overlap(dighole_207_instances, qualifier_17)) goto event_642_11_end;
        if (!check_not_overlap(dighole_207_instances, qualifier_7)) goto event_642_11_end;
        if (!check_not_overlap(dighole_207_instances, qualifier_19)) goto event_642_11_end;
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_642_11_end;
        if (!((((Active*)get_single(dighole_207_instances, default_active_instance))->layer->index+1) == (2))) goto event_642_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_642_11_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_18)) goto event_642_11_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(14)) goto event_642_11_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_642_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_642_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_642_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(872, str_lastcursor_2054, ((Active*)get_instance(mouse_9_instances))->current_animation);
        ((Active*)get_instance(mouse_9_instances))->force_animation(14);
    }
    event_642_11_end: ;
}
// Function purpose: generated callback event_func_5915 processes event block(s) 648_11. Actions/conditions:
//        648_11: sets a game or interface text string.
void Frames::event_func_5915()
{
    // event 648_11 : sets a game or interface text string
    {
        if (!(group_code_1)) goto event_648_11_end;
        if (!group_check_group_code_hud_1_0) goto event_648_11_end;
        group_check_group_code_hud_1_0 = false;
        ((Text*)get_instance(lessonTimerText_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_tut_2441, str_1_97));
    }
    event_648_11_end: ;
}
// Function purpose: generated callback event_func_5916 processes event block(s) 649_11. Actions/conditions:
//        649_11: sets the selected object's horizontal position to frame_left(); sets the selected object's vertical
//        position to frame_top(); sets the selected object's layer to playerBase->layer->index+1-1.
void Frames::event_func_5916()
{
    // event 649_11 : sets the selected object's horizontal position to frame_left(); sets the selected object's vertical position to frame_top(); sets the selected object's layer to playerBase->layer->index+1-1
    {
        if (!(group_code_1)) goto event_649_11_end;
        every_649_11 += manager.dt;
        if (every_649_11 < 0.5) goto event_649_11_end;
        every_649_11 -= 0.5;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_649_11_end;
        ((Active*)get_instance(scan_187_instances))->set_x(VITA_VIEW_LEFT(((Active*)get_instance(scan_187_instances)), frame_left()));
        ((Active*)get_instance(scan_187_instances))->set_y(VITA_VIEW_TOP(((Active*)get_instance(scan_187_instances)), frame_top()));
        ((Active*)get_instance(scan_187_instances))->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
        {
            loop_scan_running = true;
            int times = int(240);
            loop_scan_index = 0;
            while (loop_scan_index < times) {
                loop_scan_11();
                if (!loop_scan_running) break;
                loop_scan_index++;
            }
        }
    }
    event_649_11_end: ;
}
// Function purpose: generated callback event_func_5917 processes event block(s) 658_11. Actions/conditions:
//        658_11: moves the selected object behind other objects; moves the selected object to the front.
void Frames::event_func_5917()
{
    // event 658_11 : moves the selected object behind other objects; moves the selected object to the front
    {
        if (!(group_code_1)) goto event_658_11_end;
        every_658_11 += manager.dt;
        if (every_658_11 < 0.25) goto event_658_11_end;
        every_658_11 -= 0.25;
        shower_183_instances.clear_selection();
        for (ObjectIterator it(shower_183_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        fx_185_instances.clear_selection();
        for (ObjectIterator it(fx_185_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        qualifier_6.clear_selection();
        for (QualifierIterator it(qualifier_6); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        qualifier_7.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        metaldetector_231_instances.clear_selection();
        for (ObjectIterator it(metaldetector_231_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        // icache destruction
        truck_388_instances.clear_selection();
        licenseprints_329_instances.clear_selection();
        powergen_360_instances.clear_selection();
        containerdeliveries2_398_instances.clear_selection();
        containertailorout_395_instances.clear_selection();
        containerlaundrydirty_274_instances.clear_selection();
        licenseprints_729_instances.clear_selection();
        library2_316_instances.clear_selection();
        containerdeliveries2_757_instances.clear_selection();
        containertailorin_396_instances.clear_selection();
        containerkitchen_229_instances.clear_selection();
        kitchensink_236_instances.clear_selection();
        containertimber2_325_instances.clear_selection();
        phone_235_instances.clear_selection();
        interwebs_380_instances.clear_selection();
        containermail_399_instances.clear_selection();
        library_233_instances.clear_selection();
        containerdeliveries_756_instances.clear_selection();
        payphone_386_instances.clear_selection();
        interwebs_749_instances.clear_selection();
        containerbookchest_273_instances.clear_selection();
        containertimber_267_instances.clear_selection();
        metalshop_326_instances.clear_selection();
        containerlaundryclean_275_instances.clear_selection();
        containerdeliveries_397_instances.clear_selection();
        metalshop2_327_instances.clear_selection();
        for (QualifierIterator it(qualifier_4); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        cashText_instances.clear_selection();
        for (ObjectIterator it(cashText_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->move_front();
        }
        healthText_instances.clear_selection();
        for (ObjectIterator it(healthText_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->move_front();
        }
        heatText_instances.clear_selection();
        for (ObjectIterator it(heatText_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->move_front();
        }
        fatigueText_instances.clear_selection();
        for (ObjectIterator it(fatigueText_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->move_front();
        }
        buddiesText_instances.clear_selection();
        for (ObjectIterator it(buddiesText_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->move_front();
        }
        qualifier_9.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_658_11_end: ;
}
// Function purpose: generated callback event_func_5918 processes event block(s) 661_11. Actions/conditions:
//        661_11: moves the selected object to the front; moves the selected object to the front.
void Frames::event_func_5918()
{
    // event 661_11 : moves the selected object to the front; moves the selected object to the front
    {
        if (!(group_code_1)) goto event_661_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_661_11_end;
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        ((Active*)get_instance(dialogPanel_instances))->move_front();
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        settingsSlider_instances.clear_selection();
        for (ObjectIterator it(settingsSlider_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_661_11_end: ;
}
// Function purpose: generated callback event_func_5919 processes event block(s) 663_11. Actions/conditions:
//        663_11: moves the selected object to the front; moves the selected object to the front; moves the selected
//        object behind other objects.
void Frames::event_func_5919()
{
    // event 663_11 : moves the selected object to the front; moves the selected object to the front; moves the selected object behind other objects
    {
        if (!(group_code_1)) goto event_663_11_end;
        activityProgress_instances.clear_selection();
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        {
            qualifier_4.clear_selection();
            QualifierIterator other_it(qualifier_4);
            for (ObjectIterator it(oven2_314_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_663_11_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_663_11_0_end: ;
        {
            QualifierIterator other_it(qualifier_4);
            for (ObjectIterator it(washing2_313_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_663_11_1_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_663_11_1_end: ;
        water_715_instances.clear_selection();
        for (ObjectIterator it(water_715_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        givecash_261_instances.clear_selection();
        for (ObjectIterator it(givecash_261_instances); !it.end(); ++it) {
            ((Text*)*it)->move_front();
        }
    }
    event_663_11_end: ;
}
// Function purpose: generated callback event_func_5920 processes event block(s) 666_11. Actions/conditions:
//        666_11: moves the selected object to the front.
void Frames::event_func_5920()
{
    // event 666_11 : moves the selected object to the front
    {
        if (!(group_code_1)) goto event_666_11_end;
        ((Active*)get_instance(tutorialArrow_instances))->move_front();
    }
    event_666_11_end: ;
}
// Function purpose: generated callback event_func_5921 processes event block(s) 669_11. Actions/conditions:
//        669_11: moves the selected object behind other objects.
void Frames::event_func_5921()
{
    // event 669_11 : moves the selected object behind other objects
    {
        if (!(group_code_1)) goto event_669_11_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_off(10))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_669_11_end;
        ((SystemBox*)get_single(activesystembox_450_instances, default_systembox_instance))->move_back(((Active*)get_instance(sidePanel_instances)));
    }
    event_669_11_end: ;
}
// Function purpose: generated callback event_func_5922 processes event block(s) 676_11. Actions/conditions:
//        676_11: checks scene is active; skips if the event-specific game state condition is met; this handler gates
//        a game event without a direct value/object action.
void Frames::event_func_5922()
{
    // event 676_11 : checks scene is active; skips if the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_676_11_end;
        every_676_11 += manager.dt;
        if (every_676_11 < 60.0) goto event_676_11_end;
        every_676_11 -= 60.0;
        {
            loop_sort_holes_running = true;
            int times = int(dighole_207_instances.size());
            loop_sort_holes_index = 0;
            while (loop_sort_holes_index < times) {
                loop_sort_holes_11();
                if (!loop_sort_holes_running) break;
                loop_sort_holes_index++;
            }
        }
    }
    event_676_11_end: ;
}
// Function purpose: generated callback event_func_5923 processes event block(s) 679_11. Actions/conditions:
//        679_11: sets NoticeText to 150; adds a noticetext 363 instance; sets the selected object's horizontal
//        position to frame_left()+50; plus 5 more actions.
void Frames::event_func_5923()
{
    // event 679_11 : sets NoticeText to 150; adds a noticetext 363 instance; sets the selected object's horizontal position to frame_left()+50; plus 5 more actions
    {
        if (!(group_code_1)) goto event_679_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (21))) goto event_679_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(522, str_t_min_1422)) >= (30))) goto event_679_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) != (str_camp_504))) goto event_679_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(20, str_zone_safe1_482)) == (0))) goto event_679_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(21, str_zone_safe2_483)) == (0))) goto event_679_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(22, str_zone_safe3_484)) == (0))) goto event_679_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(729, str_noticetext_1901)) == (0))) goto event_679_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(23, str_outsidegroundtiles_485), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) != (-1))) goto event_679_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_679_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(729, str_noticetext_1901, 150);
        noticetext_363_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_noticetext_363(50, 5), 5);
            noticetext_363_instances.add_back();
        }
        for (ObjectIterator it(noticetext_363_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+50);
            ((Text*)*it)->set_y(VITA_VIEW_TOP(((Text*)*it), frame_top())+5);
            ((Text*)*it)->set_string(str_warning_outer_doors_lock_at_22_00_2556);
        }
    }
    event_679_11_end: ;
}
// Function purpose: generated callback event_func_5924 processes event block(s) 695_11. Actions/conditions:
//        695_11: stops the object's movement.
void Frames::event_func_5924()
{
    // event 695_11 : stops the object's movement
    {
        if (!(group_code_1)) goto event_695_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_695_11_end;
        patroljeep_416_instances.clear_selection();
        for (ObjectIterator it(patroljeep_416_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
    }
    event_695_11_end: ;
}
// Function purpose: generated callback event_func_5925 processes event block(s) 696_11. Actions/conditions:
//        696_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_5925()
{
    // event 696_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1)) goto event_696_11_end;
        every_696_11 += manager.dt;
        if (every_696_11 < 1.0) goto event_696_11_end;
        every_696_11 -= 1.0;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(playerBase_instances));
            if (obj1 == NULL) goto compare_696_11_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(patroljeep_416_instances));
            if (obj2 == NULL) goto compare_696_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 120)) goto event_696_11_end;
        }
        compare_696_11_0_end: ;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) != (-1))) goto event_696_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_696_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_696_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(32, str_heat_495, 3);
    }
    event_696_11_end: ;
}
// Function purpose: generated callback event_func_5926 processes event block(s) 697_11. Actions/conditions:
//        697_11: sets the audio channel volume.
void Frames::event_func_5926()
{
    // event 697_11 : sets the audio channel volume
    {
        if (!(group_code_1)) goto event_697_11_end;
        if (!((media.get_channel_volume(-1 +11)) > (media.get_channel_volume(-1 +1)))) goto event_697_11_end;
        media.set_channel_volume(11-1, media.get_channel_volume(-1 +1));
    }
    event_697_11_end: ;
}
// Function purpose: generated callback event_func_5927 processes event block(s) 701_11. Actions/conditions:
//        701_11: sets the object position in the world.
void Frames::event_func_5927()
{
    // event 701_11 : sets the object position in the world
    {
        if (!(group_code_1)) goto event_701_11_end;
        serviceNpc_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(serviceNpc_instances, qualifier_8)) goto event_701_11_end;
        {
            FrameObject * parent = ((Active*)get_instance(serviceNpc_instances));
            if (parent == NULL) goto pos_end_701_11_0;
            ((Active*)get_instance(doorcheck_364_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_701_11_0: ;
        }
        {
            loop_open_door_check_running = true;
            int times = int(1);
            loop_open_door_check_index = 0;
            while (loop_open_door_check_index < times) {
                loop_open_door_check_6();
                if (!loop_open_door_check_running) break;
                loop_open_door_check_index++;
            }
        }
    }
    event_701_11_end: ;
}
// Function purpose: generated callback event_func_5928 processes event block(s) 707_11. Actions/conditions:
//        707_11: saves the current object selection; saves the current object selection; saves the current object
//        selection; plus 10 more actions.
void Frames::event_func_5928()
{
    // event 707_11 : saves the current object selection; saves the current object selection; saves the current object selection; plus 10 more actions
    bool or_result_707_11 = false;
    bool or_temp_result_707_11_0 = false;
    {
        if (!(group_code_1)) goto or_event_707_11_0_end;
        every_707_11 += manager.dt;
        if (every_707_11 < 1.0) goto or_event_707_11_0_end;
        every_707_11 -= 1.0;
        playerBase_instances.clear_selection();
        qualifier_6.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_6)) goto or_event_707_11_0_end;
        if (!check_not_overlap(playerBase_instances, qualifier_18)) goto or_event_707_11_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(358, str_fatigue_36)) > (0))) goto or_event_707_11_0_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_707_11_0_end;
        loadingCurtain_instances.clear_selection();
        if (loadingCurtain_instances.size() != 0) goto or_event_707_11_0_end;
        if (!((screenFade_instances.size()) == (0))) goto or_event_707_11_0_end;
        or_result_707_11 = true;
        or_temp_result_707_11_0 = true;
    }
    or_event_707_11_0_end: ;
    loadingCurtain_instances.clear_saved_selection();
    dialogPanel_instances.clear_saved_selection();
    playerBase_instances.clear_saved_selection();
    qualifier_6.clear_saved_selection();
    if (or_temp_result_707_11_0) {
        qualifier_6.save_selection();
        dialogPanel_instances.save_selection();
        loadingCurtain_instances.save_selection();
        playerBase_instances.save_selection();
    }
    // event 707_11 : saves the current object selection; saves the current object selection; saves the current object selection; plus 10 more actions
    bool or_temp_result_707_11_1 = false;
    {
        if (!(group_code_1)) goto or_event_707_11_1_end;
        every_707_11 += manager.dt;
        if (every_707_11 < 1.0) goto or_event_707_11_1_end;
        every_707_11 -= 1.0;
        playerBase_instances.clear_selection();
        canteenchair_312_instances.clear_selection();
        if (!check_overlap(playerBase_instances, canteenchair_312_instances)) goto or_event_707_11_1_end;
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(75))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto or_event_707_11_1_end;
        if (!check_not_overlap(playerBase_instances, qualifier_18)) goto or_event_707_11_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(358, str_fatigue_36)) > (0))) goto or_event_707_11_1_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_707_11_1_end;
        if (!((screenFade_instances.size()) == (0))) goto or_event_707_11_1_end;
        or_result_707_11 = true;
        or_temp_result_707_11_1 = true;
        or_event_707_11_1_end: ;
        canteenchair_312_instances.clear_saved_selection();
        if (or_temp_result_707_11_1) {
            canteenchair_312_instances.save_selection();
            dialogPanel_instances.save_selection();
            playerBase_instances.save_selection();
        }
        if (!or_result_707_11) goto or_final_or_event_707_11_1_end;
        loadingCurtain_instances.empty_selection();
        qualifier_6.empty_selection();
        canteenchair_312_instances.empty_selection();
        dialogPanel_instances.empty_selection();
        playerBase_instances.empty_selection();
        if (or_temp_result_707_11_1) {
            canteenchair_312_instances.restore_selection();
        }
        if (or_temp_result_707_11_0) {
            qualifier_6.restore_selection();
        }
        if (or_temp_result_707_11_0) {
            loadingCurtain_instances.restore_selection();
        }
        if (or_temp_result_707_11_0 || or_temp_result_707_11_1) {
            dialogPanel_instances.restore_selection();
        }
        if (or_temp_result_707_11_0 || or_temp_result_707_11_1) {
            playerBase_instances.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->sub_value(358, str_fatigue_36, 2);
        }
        stats_340_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_stats_340(0, 0), 5);
            stats_340_instances.add_back();
        }
        for (ObjectIterator it(stats_340_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(playerBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_707_11_1;
            ((TextBlitter*)*it)->set_global_position(parent->get_x() + -20, parent->get_y() + -16);
            pos_end_707_11_1: ;
        }
        for (ObjectIterator it(stats_340_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_text(str_fat_2167);
            ((TextBlitter*)*it)->set_text(str__254);
        }
    }
    or_final_or_event_707_11_1_end: ;
}
// Function purpose: generated callback event_func_5929 processes event block(s) 713_11. Actions/conditions:
//        713_11: adds a dighole 207 instance.
void Frames::event_func_5929()
{
    // event 713_11 : adds a dighole 207 instance
    {
        if (!(group_code_1)) goto event_713_11_end;
        if (!((dighole_207_instances.size()) == (0))) goto event_713_11_end;
        dighole_207_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dighole_207(-100, -100), 1);
            dighole_207_instances.add_back();
        }
    }
    event_713_11_end: ;
}
// Function purpose: generated callback event_func_5930 processes event block(s) 729_11. Actions/conditions:
//        729_11: moves the selected object behind other objects; moves the selected object behind other objects;
//        moves the selected object to the front.
void Frames::event_func_5930()
{
    // event 729_11 : moves the selected object behind other objects; moves the selected object behind other objects; moves the selected object to the front
    {
        if (!(group_code_1)) goto event_729_11_end;
        if (!((popupClouds_instances.size()) > (0))) goto event_729_11_end;
        ((Active*)get_instance(popupClouds_instances, default_active_instance))->move_back(((Active*)get_instance(dialogPanel_instances)));
        ((Text*)get_instance(popupCloudText_instances))->move_back(((Active*)get_instance(dialogPanel_instances)));
        ((Active*)get_instance(tutorialArrow_instances))->move_front();
    }
    event_729_11_end: ;
}
// Function purpose: generated callback event_func_5931 processes event block(s) 738_11. Actions/conditions:
//        738_11: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        7 more actions.
void Frames::event_func_5931()
{
    // event 738_11 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 7 more actions
    {
        if (!(group_code_1)) goto event_738_11_end;
        items_184_instances.clear_selection();
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_738_11_end;
        if (!((((Active*)get_single(items_184_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_738_11_end;
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_738_11_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_738_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(itemData_instances))->get_string(number_to_string(((Active*)get_single(items_184_instances, default_active_instance))->alterables->values.get(2)), str_name_103));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_738_11_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_738_11_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(0, 255, 0));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(itemData_instances))->get_string(number_to_string(((Active*)get_single(items_184_instances, it.current_index, default_active_instance))->alterables->values.get(2)), str_name_103));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_738_11_end: ;
}
// Function purpose: generated callback event_func_5932 processes event block(s) 739_11. Actions/conditions:
//        739_11: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        9 more actions.
void Frames::event_func_5932()
{
    // event 739_11 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 9 more actions
    {
        if (!(group_code_1)) goto event_739_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_739_11_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_739_11_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) != (str_craftnote_716))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(-1))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_739_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(itemData_instances))->get_string(number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2)), str_name_103)+str__2057+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7))+str__2176);
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_739_11_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_739_11_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(255, 0, 0));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(itemData_instances))->get_string(number_to_string(((Active*)get_single(hudItem_instances, it.current_index, default_active_instance))->alterables->values.get(2)), str_name_103)+str__2057+number_to_string(((Active*)get_single(hudItem_instances, it.current_index, default_active_instance))->alterables->values.get(7))+str__2176);
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->alterables->flags.enable(100);
            ((SystemBox*)*it)->alterables->flags.enable(10);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_739_11_end: ;
}
// Function purpose: generated callback event_func_5933 processes event block(s) 740_11. Actions/conditions:
//        740_11: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        9 more actions.
void Frames::event_func_5933()
{
    // event 740_11 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 9 more actions
    {
        if (!(group_code_1)) goto event_740_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_740_11_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_740_11_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (-100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) != (str_craftnote_716))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(-1))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_740_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(itemData_instances))->get_string(number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2)), str_name_103));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_740_11_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_740_11_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(255, 0, 0));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(itemData_instances))->get_string(number_to_string(((Active*)get_single(hudItem_instances, it.current_index, default_active_instance))->alterables->values.get(2)), str_name_103));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->alterables->flags.enable(100);
            ((SystemBox*)*it)->alterables->flags.enable(10);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_740_11_end: ;
}
// Function purpose: generated callback event_func_5934 processes event block(s) 741_11. Actions/conditions:
//        741_11: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        7 more actions.
void Frames::event_func_5934()
{
    // event 741_11 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 7 more actions
    {
        if (!(group_code_1)) goto event_741_11_end;
        items_184_instances.clear_selection();
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_741_11_end;
        if (!((((Active*)get_single(items_184_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_741_11_end;
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_741_11_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_741_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(itemData_instances))->get_string(number_to_string(((Active*)get_single(items_184_instances, default_active_instance))->alterables->values.get(2)), str_name_103));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_741_11_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_741_11_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(255, 0, 0));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(itemData_instances))->get_string(number_to_string(((Active*)get_single(items_184_instances, it.current_index, default_active_instance))->alterables->values.get(2)), str_name_103));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_741_11_end: ;
}
// Function purpose: generated callback event_func_5935 processes event block(s) 743_11. Actions/conditions:
//        743_11: updates the displayed text layout; sets the displayed text; sets the target size.
void Frames::event_func_5935()
{
    // event 743_11 : updates the displayed text layout; sets the displayed text; sets the target size
    {
        if (!(group_code_1)) goto event_743_11_end;
        items_184_instances.clear_selection();
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_743_11_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_743_11_end;
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(1)) != (empty_string))) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_743_11_end;
    CalcRect::set_text(((Active*)get_single(items_184_instances, default_active_instance))->alterables->strings.get(1)+str_s_1282+((SystemBox*)get_single(activesystembox_450_instances, default_systembox_instance))->text);
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_text(((Active*)get_single(items_184_instances, it.current_index, default_active_instance))->alterables->strings.get(1)+str_s_1282+((SystemBox*)*it)->text);
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
        }
    }
    event_743_11_end: ;
}
// Function purpose: generated callback event_func_5936 processes event block(s) 744_11. Actions/conditions:
//        744_11: sets ItemID to ((Active*)get_single(hudItem_instances,
//        default_active_instance))->alterables->values.get(2); sets ItemHP to
//        ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7); sets
//        ItemStr to empty_string.
void Frames::event_func_5936()
{
    // event 744_11 : sets ItemID to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2); sets ItemHP to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7); sets ItemStr to empty_string
    {
        if (!(group_code_1 && group_code_mouseovers_item_hovers_holding_shift_1)) goto event_744_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_744_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(480, str_itemhp_1355, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(235, str_itemstr_854, empty_string);
        {
            loop_make_item_str_running = true;
            int times = int(1);
            loop_make_item_str_index = 0;
            while (loop_make_item_str_index < times) {
                loop_make_item_str_11();
                if (!loop_make_item_str_running) break;
                loop_make_item_str_index++;
            }
        }
    }
    event_744_11_end: ;
}
// Function purpose: generated callback event_func_5937 processes event block(s) 745_11. Actions/conditions:
//        745_11: sets ItemID to ((Active*)get_single(items_184_instances,
//        default_active_instance))->alterables->values.get(2); sets ItemHP to
//        ((Active*)get_single(items_184_instances, default_active_instance))->alterables->values.get(7); sets ItemStr
//        to empty_string.
void Frames::event_func_5937()
{
    // event 745_11 : sets ItemID to ((Active*)get_single(items_184_instances, default_active_instance))->alterables->values.get(2); sets ItemHP to ((Active*)get_single(items_184_instances, default_active_instance))->alterables->values.get(7); sets ItemStr to empty_string
    {
        if (!(group_code_1 && group_code_mouseovers_item_hovers_holding_shift_1)) goto event_745_11_end;
        items_184_instances.clear_selection();
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_745_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, ((Active*)get_single(items_184_instances, default_active_instance))->alterables->values.get(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(480, str_itemhp_1355, ((Active*)get_single(items_184_instances, default_active_instance))->alterables->values.get(7));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(235, str_itemstr_854, empty_string);
        {
            loop_make_item_str_running = true;
            int times = int(1);
            loop_make_item_str_index = 0;
            while (loop_make_item_str_index < times) {
                loop_make_item_str_11();
                if (!loop_make_item_str_running) break;
                loop_make_item_str_index++;
            }
        }
    }
    event_745_11_end: ;
}
// Function purpose: generated callback event_func_5938 processes event block(s) 756_11. Actions/conditions:
//        756_11: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        8 more actions.
void Frames::event_func_5938()
{
    // event 756_11 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 8 more actions
    {
        if (!(group_code_1 && group_code_mouseovers_item_hovers_holding_shift_1)) goto event_756_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_756_11_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_756_11_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) != (str_craftnote_716))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(-1))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_756_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854)) != (empty_string))) goto event_756_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_756_11_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_756_11_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854));
            ((SystemBox*)*it)->alterables->flags.enable(10);
            ((SystemBox*)*it)->alterables->flags.enable(100);
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_756_11_end: ;
}
// Function purpose: generated callback event_func_5939 processes event block(s) 757_11. Actions/conditions:
//        757_11: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        8 more actions.
void Frames::event_func_5939()
{
    // event 757_11 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 8 more actions
    {
        if (!(group_code_1 && group_code_mouseovers_item_hovers_holding_shift_1)) goto event_757_11_end;
        items_184_instances.clear_selection();
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_757_11_end;
        if (!((((Active*)get_single(items_184_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_757_11_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_757_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854)) != (empty_string))) goto event_757_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_757_11_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_757_11_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854));
            ((SystemBox*)*it)->alterables->flags.enable(10);
            ((SystemBox*)*it)->alterables->flags.enable(100);
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_757_11_end: ;
}
// Function purpose: generated callback event_func_5940 processes event block(s) 758_11. Actions/conditions:
//        758_11: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        8 more actions.
void Frames::event_func_5940()
{
    // event 758_11 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 8 more actions
    {
        if (!(group_code_1)) goto event_758_11_end;
        activityProgress_instances.clear_selection();
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(1)) != (empty_string))) { it.deselect(); continue; }
        }
        if (!activityProgress_instances.has_selection()) goto event_758_11_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_758_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((Active*)get_single(activityProgress_instances, default_active_instance))->alterables->strings.get(1));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_758_11_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_758_11_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((Active*)get_single(activityProgress_instances, it.current_index, default_active_instance))->alterables->strings.get(1));
            ((SystemBox*)*it)->alterables->flags.enable(10);
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_758_11_end: ;
}
// Function purpose: generated callback event_func_5941 processes event block(s) 759_11. Actions/conditions:
//        759_11: sets ShowCursor to 1; sets string to Hovers entry 2; sets a game or interface text string; plus 9
//        more actions.
void Frames::event_func_5941()
{
    // event 759_11 : sets ShowCursor to 1; sets string to Hovers entry 2; sets a game or interface text string; plus 9 more actions
    {
        if (!(group_code_1)) goto event_759_11_end;
        desks_717_instances.clear_selection();
        for (ObjectIterator it(desks_717_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(16777216))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (20))) { it.deselect(); continue; }
        }
        if (!desks_717_instances.has_selection()) goto event_759_11_end;
        if (!((((Active*)get_single(desks_717_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_759_11_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(desks_717_instances, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_759_11_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_759_11_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_759_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_759_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, ((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_2_155));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345), str_inmate_1199, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(0)));
    CalcRect::set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_759_11_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_759_11_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_759_11_end: ;
}
// Function purpose: generated callback event_func_5942 processes event block(s) 760_11. Actions/conditions:
//        760_11: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        7 more actions.
void Frames::event_func_5942()
{
    // event 760_11 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 7 more actions
    {
        if (!(group_code_1)) goto event_760_11_end;
        desks_717_instances.clear_selection();
        for (ObjectIterator it(desks_717_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(16777216))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (20))) { it.deselect(); continue; }
        }
        if (!desks_717_instances.has_selection()) goto event_760_11_end;
        if (!((((Active*)get_single(desks_717_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_760_11_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_760_11_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_760_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_760_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_41_825));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_760_11_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_760_11_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_41_825));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_760_11_end: ;
}
// Function purpose: generated callback event_func_5943 processes event block(s) 761_11. Actions/conditions:
//        761_11: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        7 more actions.
void Frames::event_func_5943()
{
    // event 761_11 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 7 more actions
    {
        if (!(group_code_1)) goto event_761_11_end;
        desks_717_instances.clear_selection();
        for (ObjectIterator it(desks_717_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(256))) { it.deselect(); continue; }
        }
        if (!desks_717_instances.has_selection()) goto event_761_11_end;
        if (!((((Active*)get_single(desks_717_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_761_11_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_761_11_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_761_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_761_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_7_323));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_761_11_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_761_11_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_7_323));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_761_11_end: ;
}
// Function purpose: generated callback event_func_5944 processes event block(s) 764_11. Actions/conditions:
//        764_11: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        7 more actions.
void Frames::event_func_5944()
{
    // event 764_11 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 7 more actions
    {
        if (!(group_code_1)) goto event_764_11_end;
        camera_237_instances.clear_selection();
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!camera_237_instances.has_selection()) goto event_764_11_end;
        if (!((((Active*)get_single(camera_237_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_764_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_764_11_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_764_11_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_764_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_1_97));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_764_11_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_764_11_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_1_97));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_764_11_end: ;
}
// Function purpose: generated callback event_func_5945 processes event block(s) 768_11. Actions/conditions:
//        768_11: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        7 more actions.
void Frames::event_func_5945()
{
    // event 768_11 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 7 more actions
    {
        if (!(group_code_1)) goto event_768_11_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), ((Active*)get_instance(playerBase_instances))->layer->index+1)) == (92))) goto event_768_11_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_768_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_768_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_52_2270));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_768_11_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_768_11_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_52_2270));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_768_11_end: ;
}
// Function purpose: generated callback event_func_5946 processes event block(s) 769_11. Actions/conditions:
//        769_11: sets ShowCursor to 1; sets input to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(12); updates the displayed text layout; plus 7 more
//        actions.
void Frames::event_func_5946()
{
    // event 769_11 : sets ShowCursor to 1; sets input to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(12); updates the displayed text layout; plus 7 more actions
    {
        if (!(group_code_1)) goto event_769_11_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_769_11_end;
        if (!((((Active*)get_single(inmateBase_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_769_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_769_11_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_769_11_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_769_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(347, str_input_170, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(12));
    CalcRect::set_text(((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(0));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_769_11_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_769_11_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->strings.get(0));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
        }
        if (!group_align_color_1) {
            group_align_color_1 = true;
        }
        {
            loop_align_color_running = true;
            int times = int(1);
            loop_align_color_index = 0;
            while (loop_align_color_index < times) {
                loop_align_color_6();
                if (!loop_align_color_running) break;
                loop_align_color_index++;
            }
        }
        {
            loop_set_align_running = true;
            int times = int(1);
            loop_set_align_index = 0;
            while (loop_set_align_index < times) {
                loop_set_align_6();
                if (!loop_set_align_running) break;
                loop_set_align_index++;
            }
        }
    }
    event_769_11_end: ;
}
// Function purpose: generated callback event_func_5947 processes event block(s) 770_11. Actions/conditions:
//        770_11: splits saved text into fields; sets source to StringReplace::replace(translationData->get_string(Misc,
//        43), $name, stringtokenizer_81->get(1)); sets ShowCursor to 1; plus 9 more actions.
void Frames::event_func_5947()
{
    // event 770_11 : splits saved text into fields; sets source to StringReplace::replace(translationData->get_string(Misc, 43), $name, stringtokenizer_81->get(1)); sets ShowCursor to 1; plus 9 more actions
    {
        if (!(group_code_1)) goto event_770_11_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_770_11_end;
        if (!((((Active*)get_single(guardBase_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_770_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_770_11_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_770_11_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_770_11_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->strings.get(0), str__189);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_43_695), str_name_693, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_770_11_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_770_11_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(155, 196, 243));
            ((SystemBox*)*it)->set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_770_11_end: ;
}
// Function purpose: generated callback event_func_5948 processes event block(s) 777_11. Actions/conditions:
//        777_11: checks scene is active; skips if the event-specific game state condition is met; the event-specific
//        game state condition is met; this handler gates a game ev.
void Frames::event_func_5948()
{
    // event 777_11 : checks scene is active; skips if the event-specific game state condition is met; the event-specific game state condition is met; this handler gates a game ev
    {
        if (!(group_code_1)) goto event_777_11_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(100))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_777_11_end;
        if (!((((SystemBox*)get_single(activesystembox_450_instances, default_systembox_instance))->get_box_index(2)) > (frame_right()))) goto event_777_11_end;
        {
            loop_tip_left_running = true;
            int times = int(80);
            loop_tip_left_index = 0;
            while (loop_tip_left_index < times) {
                loop_tip_left_6();
                if (!loop_tip_left_running) break;
                loop_tip_left_index++;
            }
        }
    }
    event_777_11_end: ;
}
// Function purpose: generated callback event_func_5949 processes event block(s) 807_11. Actions/conditions:
//        807_11: sets Pressed_C to 1; sets LClick to 1.
void Frames::event_func_5949()
{
    // event 807_11 : sets Pressed_C to 1; sets LClick to 1
    {
        if (!(group_code_1)) goto event_807_11_end;
        interfaceButtons_instances.clear_selection();
        for (ObjectIterator it(interfaceButtons_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!interfaceButtons_instances.has_selection()) goto event_807_11_end;
        if (!((get_mouse_y()) > (((Active*)get_single(interfaceButtons_instances, default_active_instance))->get_box_index(1)+44))) goto event_807_11_end;
        if (!((get_mouse_y()) < (((Active*)get_single(interfaceButtons_instances, default_active_instance))->get_box_index(1)+66))) goto event_807_11_end;
        if (group_code_1 && group_code_crafting_1) goto event_807_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(57, str_lclick_203)) == (0))) goto event_807_11_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto event_807_11_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(910, str_pressed_c_2225, 1);
            ((AssociateArray*)*it)->set_value(57, str_lclick_203, 1);
        }
        if (!group_code_crafting_1) {
            group_code_crafting_1 = true;
            group_check_group_code_crafting_1_0 = true;
        }
    }
    event_807_11_end: ;
}
// Function purpose: generated callback event_func_5950 processes event block(s) 808_11. Actions/conditions:
//        808_11: sets Pressed_C to 1; sets LClick to 1.
void Frames::event_func_5950()
{
    // event 808_11 : sets Pressed_C to 1; sets LClick to 1
    {
        if (!(group_code_1)) goto event_808_11_end;
        if (!(is_key_pressed_once(SDLK_9))) goto event_808_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(910, str_pressed_c_2225)) == (0))) goto event_808_11_end;
        if (group_code_1 && group_code_crafting_1) goto event_808_11_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto event_808_11_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(910, str_pressed_c_2225, 1);
            ((AssociateArray*)*it)->set_value(57, str_lclick_203, 1);
        }
        if (!group_code_crafting_1) {
            group_code_crafting_1 = true;
            group_check_group_code_crafting_1_0 = true;
        }
    }
    event_808_11_end: ;
}
// Function purpose: generated callback event_func_5951 processes event block(s) 809_11. Actions/conditions:
//        809_11: sets the object's animation to 15; sets the selected object's direction to 0; sets the selected
//        object's visibility to true; plus 12 more actions.
void Frames::event_func_5951()
{
    // event 809_11 : sets the object's animation to 15; sets the selected object's direction to 0; sets the selected object's visibility to true; plus 12 more actions
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_809_11_end;
        if (!group_check_group_code_crafting_1_0) goto event_809_11_end;
        group_check_group_code_crafting_1_0 = false;
        ((Active*)get_instance(dialogPanel_instances))->force_animation(15);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(0);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        FrameObject * single_instance_809_11_0; single_instance_809_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buttons_699(parent->x + -66, parent->y + 14), parent->layer);
                if (single_instance_809_11_0 == NULL)
                    single_instance_809_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_809_11_0))->force_animation(22);
        {
            loop_build_craft_slots_running = true;
            int times = int(3);
            loop_build_craft_slots_index = 0;
            while (loop_build_craft_slots_index < times) {
                loop_build_craft_slots_6();
                if (!loop_build_craft_slots_running) break;
                loop_build_craft_slots_index++;
            }
        }
        {
            loop_build_craft_output_running = true;
            int times = int(1);
            loop_build_craft_output_index = 0;
            while (loop_build_craft_output_index < times) {
                loop_build_craft_output_6();
                if (!loop_build_craft_output_running) break;
                loop_build_craft_output_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(911, str_c_603, 1);
        media.play_id(SOUND_OPEN_5, 1-1);
        FrameObject * single_instance_809_11_1; single_instance_809_11_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -52), parent->layer);
                if (single_instance_809_11_1 == NULL)
                    single_instance_809_11_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_809_11_1))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_809_11_1)), frame_left())+5);
        ((Text*)((Text*)single_instance_809_11_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_hud_2171, str_7_323)));
        ((Text*)((Text*)single_instance_809_11_1))->blend_color.set(Color(255, 128, 0));
        ((Text*)((Text*)single_instance_809_11_1))->set_bold(1);
    }
    event_809_11_end: ;
}
// Function purpose: generated callback event_func_5952 processes event block(s) 814_11. Actions/conditions:
//        814_11: saves the current object selection; saves the current object selection; saves the current object
//        selection; plus 7 more actions.
void Frames::event_func_5952()
{
    // event 814_11 : saves the current object selection; saves the current object selection; saves the current object selection; plus 7 more actions
    bool or_result_814_11 = false;
    bool or_temp_result_814_11_0 = false;
    {
        if (!(group_code_1 && group_code_crafting_1)) goto or_event_814_11_0_end;
        interfaceButtons_instances.clear_selection();
        for (ObjectIterator it(interfaceButtons_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!interfaceButtons_instances.has_selection()) goto or_event_814_11_0_end;
        if (!((get_mouse_y()) >= (((Active*)get_single(interfaceButtons_instances, default_active_instance))->get_box_index(1)+23))) goto or_event_814_11_0_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(15))) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_814_11_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(57, str_lclick_203)) == (0))) goto or_event_814_11_0_end;
        or_result_814_11 = true;
        or_temp_result_814_11_0 = true;
    }
    or_event_814_11_0_end: ;
    interfaceButtons_instances.clear_saved_selection();
    dialogPanel_instances.clear_saved_selection();
    if (or_temp_result_814_11_0) {
        interfaceButtons_instances.save_selection();
        dialogPanel_instances.save_selection();
    }
    // event 814_11 : saves the current object selection; saves the current object selection; saves the current object selection; plus 7 more actions
    bool or_temp_result_814_11_2 = false;
    {
        if (!(group_code_1 && group_code_crafting_1)) goto or_event_814_11_2_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto or_event_814_11_2_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(15))) { it.deselect(); continue; }
            if (((Active*)(*it))->mouse_over()) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_814_11_2_end;
        sidePanel_instances.clear_selection();
        for (ObjectIterator it(sidePanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) { it.deselect(); continue; }
        }
        if (!sidePanel_instances.has_selection()) goto or_event_814_11_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(57, str_lclick_203)) == (0))) goto or_event_814_11_2_end;
        or_result_814_11 = true;
        or_temp_result_814_11_2 = true;
        or_event_814_11_2_end: ;
        sidePanel_instances.clear_saved_selection();
        if (or_temp_result_814_11_2) {
            dialogPanel_instances.save_selection();
            sidePanel_instances.save_selection();
        }
        if (!or_result_814_11) goto or_final_or_event_814_11_2_end;
        interfaceButtons_instances.empty_selection();
        sidePanel_instances.empty_selection();
        dialogPanel_instances.empty_selection();
        if (or_temp_result_814_11_2) {
            sidePanel_instances.restore_selection();
        }
        if (or_temp_result_814_11_0) {
            interfaceButtons_instances.restore_selection();
        }
        if (or_temp_result_814_11_0 || or_temp_result_814_11_2) {
            dialogPanel_instances.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(910, str_pressed_c_2225, 1);
            ((AssociateArray*)*it)->set_value(57, str_lclick_203, 1);
        }
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        {
            loop_close_craft_running = true;
            int times = int(1);
            loop_close_craft_index = 0;
            while (loop_close_craft_index < times) {
                loop_close_craft_6();
                if (!loop_close_craft_running) break;
                loop_close_craft_index++;
            }
        }
            group_code_crafting_1 = false;
    
        media.play_id(SOUND_CLOSE_6, 1-1);
    }
    or_final_or_event_814_11_2_end: ;
}
// Function purpose: generated callback event_func_5953 processes event block(s) 823_11. Actions/conditions:
//        823_11: sets LClick to 1; sets Craft_GiveBack to -1; sets CraftOutput to -1; plus 1 more actions.
void Frames::event_func_5953()
{
    // event 823_11 : sets LClick to 1; sets Craft_GiveBack to -1; sets CraftOutput to -1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_823_11_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(22))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_823_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_823_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(15))) goto event_823_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_823_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(611, str_craft_giveback_1593, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 0);
        {
            loop_craft_check_running = true;
            int times = int(1);
            loop_craft_check_index = 0;
            while (loop_craft_check_index < times) {
                loop_craft_check_11();
                if (!loop_craft_check_running) break;
                loop_craft_check_index++;
            }
        }
    }
    event_823_11_end: ;
}
// Function purpose: generated callback event_func_5954 processes event block(s) 905_11. Actions/conditions:
//        905_11: sets Pressed_P to 1; sets LClick to 1.
void Frames::event_func_5954()
{
    // event 905_11 : sets Pressed_P to 1; sets LClick to 1
    {
        if (!(group_code_1)) goto event_905_11_end;
        interfaceButtons_instances.clear_selection();
        for (ObjectIterator it(interfaceButtons_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!interfaceButtons_instances.has_selection()) goto event_905_11_end;
        if (!((get_mouse_y()) < (((Active*)get_single(interfaceButtons_instances, default_active_instance))->get_box_index(1)+22))) goto event_905_11_end;
        if (group_code_1 && group_code_my_stats_1) goto event_905_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(57, str_lclick_203)) == (0))) goto event_905_11_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto event_905_11_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(560, str_pressed_p_1469, 1);
            ((AssociateArray*)*it)->set_value(57, str_lclick_203, 1);
        }
        if (!group_code_my_stats_1) {
            group_code_my_stats_1 = true;
            group_check_group_code_my_stats_1_3 = true;
            group_check_group_code_my_stats_1_2 = true;
            group_check_group_code_my_stats_1_1 = true;
            group_check_group_code_my_stats_1_0 = true;
            group_check_group_code_my_stats_1_4 = true;
        }
    }
    event_905_11_end: ;
}
// Function purpose: generated callback event_func_5955 processes event block(s) 906_11. Actions/conditions:
//        906_11: sets Pressed_P to 1; sets LClick to 1.
void Frames::event_func_5955()
{
    // event 906_11 : sets Pressed_P to 1; sets LClick to 1
    {
        if (!(group_code_1)) goto event_906_11_end;
        if (!(is_key_pressed_once(SDLK_7))) goto event_906_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(560, str_pressed_p_1469)) == (0))) goto event_906_11_end;
        if (group_code_1 && group_code_my_stats_1) goto event_906_11_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto event_906_11_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(560, str_pressed_p_1469, 1);
            ((AssociateArray*)*it)->set_value(57, str_lclick_203, 1);
        }
        if (!group_code_my_stats_1) {
            group_code_my_stats_1 = true;
            group_check_group_code_my_stats_1_3 = true;
            group_check_group_code_my_stats_1_2 = true;
            group_check_group_code_my_stats_1_1 = true;
            group_check_group_code_my_stats_1_0 = true;
            group_check_group_code_my_stats_1_4 = true;
        }
    }
    event_906_11_end: ;
}
// Function purpose: generated callback event_func_5956 processes event block(s) 908_11. Actions/conditions:
//        908_11: sets the selected object's visibility to true; sets the object's animation to 19; plays a sound or
//        music track; plus 5 more actions.
void Frames::event_func_5956()
{
    // event 908_11 : sets the selected object's visibility to true; sets the object's animation to 19; plays a sound or music track; plus 5 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_908_11_end;
        if (!group_check_group_code_my_stats_1_1) goto event_908_11_end;
        group_check_group_code_my_stats_1_1 = false;
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(19);
        media.play_id(SOUND_OPEN_5, 1-1);
        FrameObject * single_instance_908_11_0; single_instance_908_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_profilestats_432(parent->x + -106, parent->y + -34), parent->layer);
                if (single_instance_908_11_0 == NULL)
                    single_instance_908_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_908_11_0))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_stats_609, str_1_97)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_stats_609, str_2_155)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_stats_609, str_3_158));
    }
    event_908_11_end: ;
}
// Function purpose: generated callback event_func_5957 processes event block(s) 909_11. Actions/conditions:
//        909_11: adds a dchar 214 instance; sets the selected object's horizontal position to frame_left()+5; sets
//        the selected object's vertical position to dialogPanel->get_box_index(1)+7; plus 5 more actions.
void Frames::event_func_5957()
{
    // event 909_11 : adds a dchar 214 instance; sets the selected object's horizontal position to frame_left()+5; sets the selected object's vertical position to dialogPanel->get_box_index(1)+7; plus 5 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_909_11_end;
        if (!group_check_group_code_my_stats_1_2) goto event_909_11_end;
        group_check_group_code_my_stats_1_2 = false;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_688(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+7);
            ((Text*)*it)->set_string(((Active*)get_instance(playerBase_instances))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(234, 140, 0));
        }
    }
    event_909_11_end: ;
}
// Function purpose: generated callback event_func_5958 processes event block(s) 910_11. Actions/conditions:
//        910_11: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 5 more actions.
void Frames::event_func_5958()
{
    // event 910_11 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 5 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_910_11_end;
        if (!group_check_group_code_my_stats_1_3) goto event_910_11_end;
        group_check_group_code_my_stats_1_3 = false;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_688(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_11_331)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+15);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
    }
    event_910_11_end: ;
}
// Function purpose: generated callback event_func_5959 processes event block(s) 911_11. Actions/conditions:
//        911_11: checks scene is active; skips if my stats 1 4 event group is active; this handler gates a game event
//        without a direct value/object action.
void Frames::event_func_5959()
{
    // event 911_11 : checks scene is active; skips if my stats 1 4 event group is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_911_11_end;
        if (!group_check_group_code_my_stats_1_4) goto event_911_11_end;
        group_check_group_code_my_stats_1_4 = false;
        {
            loop_create_stat_bars_running = true;
            int times = int(3);
            loop_create_stat_bars_index = 0;
            while (loop_create_stat_bars_index < times) {
                loop_create_stat_bars_6();
                if (!loop_create_stat_bars_running) break;
                loop_create_stat_bars_index++;
            }
        }
        {
            loop_stats_gear_running = true;
            int times = int(1);
            loop_stats_gear_index = 0;
            while (loop_stats_gear_index < times) {
                loop_stats_gear_11();
                if (!loop_stats_gear_running) break;
                loop_stats_gear_index++;
            }
        }
    }
    event_911_11_end: ;
}
// Function purpose: generated callback event_func_5960 processes event block(s) 921_11. Actions/conditions:
//        921_11: checks scene is active; the event-specific game state condition is met; game state LClick; this
//        handler gates a game event without a direct value/object acti.
void Frames::event_func_5960()
{
    // event 921_11 : checks scene is active; the event-specific game state condition is met; game state LClick; this handler gates a game event without a direct value/object acti
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_921_11_end;
        if (!(((Active*)get_instance(interfaceButtons_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_921_11_end;
        if (!((get_mouse_y()) < (((Active*)get_instance(interfaceButtons_instances))->get_box_index(1)+23))) goto event_921_11_end;
        if (!(group_code_1 && group_code_my_stats_1)) goto event_921_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_921_11_end;
        {
            loop_cl_profile_running = true;
            int times = int(1);
            loop_cl_profile_index = 0;
            while (loop_cl_profile_index < times) {
                loop_cl_profile_11();
                if (!loop_cl_profile_running) break;
                loop_cl_profile_index++;
            }
        }
    }
    event_921_11_end: ;
}
// Function purpose: generated callback event_func_5961 processes event block(s) 922_11. Actions/conditions:
//        922_11: checks scene is active; the event-specific game state condition is met; skips if the event-specific
//        game state condition is met; game state LClick; this hand.
void Frames::event_func_5961()
{
    // event 922_11 : checks scene is active; the event-specific game state condition is met; skips if the event-specific game state condition is met; game state LClick; this hand
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_922_11_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_922_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->mouse_over()) goto event_922_11_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_922_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_922_11_end;
        if (!(group_code_1 && group_code_my_stats_1)) goto event_922_11_end;
        {
            loop_cl_profile_running = true;
            int times = int(1);
            loop_cl_profile_index = 0;
            while (loop_cl_profile_index < times) {
                loop_cl_profile_11();
                if (!loop_cl_profile_running) break;
                loop_cl_profile_index++;
            }
        }
    }
    event_922_11_end: ;
}
// Function purpose: generated callback event_func_5962 processes event block(s) 923_11. Actions/conditions:
//        923_11: checks scene is active; the required game action is held; the event-specific game state condition is
//        met; dialog is open; this handler gates a game event wit.
void Frames::event_func_5962()
{
    // event 923_11 : checks scene is active; the required game action is held; the event-specific game state condition is met; dialog is open; this handler gates a game event wit
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_923_11_end;
        if (!(is_key_pressed_once(SDLK_ESCAPE))) goto event_923_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(19))) goto event_923_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_923_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(561, str_esc_202)) == (0))) goto event_923_11_end;
        {
            loop_cl_profile_running = true;
            int times = int(1);
            loop_cl_profile_index = 0;
            while (loop_cl_profile_index < times) {
                loop_cl_profile_11();
                if (!loop_cl_profile_running) break;
                loop_cl_profile_index++;
            }
        }
    }
    event_923_11_end: ;
}
// Function purpose: generated callback event_func_5963 processes event block(s) 924_11. Actions/conditions:
//        924_11: checks scene is active; the required game action is held; game state Pressed_P; the event-specific
//        game state condition is met; this handler gates a game eve.
void Frames::event_func_5963()
{
    // event 924_11 : checks scene is active; the required game action is held; game state Pressed_P; the event-specific game state condition is met; this handler gates a game eve
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_924_11_end;
        if (!(is_key_pressed_once(SDLK_7))) goto event_924_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(560, str_pressed_p_1469)) == (0))) goto event_924_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(19))) goto event_924_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_924_11_end;
        {
            loop_cl_profile_running = true;
            int times = int(1);
            loop_cl_profile_index = 0;
            while (loop_cl_profile_index < times) {
                loop_cl_profile_11();
                if (!loop_cl_profile_running) break;
                loop_cl_profile_index++;
            }
        }
    }
    event_924_11_end: ;
}
// Function purpose: generated callback event_func_5964 processes event block(s) 934_11. Actions/conditions:
//        934_11: sets hmm to 0.
void Frames::event_func_5964()
{
    // event 934_11 : sets hmm to 0
    {
        if (!(group_code_1)) goto event_934_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(559, str_hmm_1468)) == (1))) goto event_934_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_934_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(559, str_hmm_1468, 0);
        {
            loop_gimme_outfit_running = true;
            int times = int(1);
            loop_gimme_outfit_index = 0;
            while (loop_gimme_outfit_index < times) {
                loop_gimme_outfit_11();
                if (!loop_gimme_outfit_running) break;
                loop_gimme_outfit_index++;
            }
        }
    }
    event_934_11_end: ;
}
// Function purpose: generated callback event_func_5965 processes event block(s) 946_11. Actions/conditions:
//        946_11: plays a sound or music track.
void Frames::event_func_5965()
{
    // event 946_11 : plays a sound or music track
    {
        if (!(group_code_1)) goto event_946_11_end;
        if (!(((Active*)get_instance(interfaceButtons_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_946_11_end;
        if (!((get_mouse_y()) > (((Active*)get_instance(interfaceButtons_instances))->get_box_index(1)+22))) goto event_946_11_end;
        if (!((get_mouse_y()) < (((Active*)get_instance(interfaceButtons_instances))->get_box_index(1)+44))) goto event_946_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_946_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_946_11_end;
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_946_11_end: ;
}
// Function purpose: generated callback event_func_5966 processes event block(s) 947_11. Actions/conditions:
//        947_11: plays a sound or music track.
void Frames::event_func_5966()
{
    // event 947_11 : plays a sound or music track
    {
        if (!(group_code_1)) goto event_947_11_end;
        if (!(is_key_pressed_once(SDLK_8))) goto event_947_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(321, str_pressed_j_1102)) == (0))) goto event_947_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_947_11_end;
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_947_11_end: ;
}
// Function purpose: generated callback event_func_5967 processes event block(s) 949_11. Actions/conditions:
//        949_11: sets Pressed_L to 1; sets LClick to 1; plays a sound or music track.
void Frames::event_func_5967()
{
    // event 949_11 : sets Pressed_L to 1; sets LClick to 1; plays a sound or music track
    {
        if (!(group_code_1)) goto event_949_11_end;
        interfaceButtons_instances.clear_selection();
        for (ObjectIterator it(interfaceButtons_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!interfaceButtons_instances.has_selection()) goto event_949_11_end;
        if (!((get_mouse_y()) > (((Active*)get_single(interfaceButtons_instances, default_active_instance))->get_box_index(1)+66))) goto event_949_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(57, str_lclick_203)) == (0))) goto event_949_11_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto event_949_11_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(912, str_pressed_l_2227, 1);
            ((AssociateArray*)*it)->set_value(57, str_lclick_203, 1);
        }
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_949_11_end: ;
}
// Function purpose: generated callback event_func_5968 processes event block(s) 950_11. Actions/conditions:
//        950_11: sets Pressed_L to 1; sets LClick to 1; plays a sound or music track.
void Frames::event_func_5968()
{
    // event 950_11 : sets Pressed_L to 1; sets LClick to 1; plays a sound or music track
    {
        if (!(group_code_1)) goto event_950_11_end;
        if (!(is_key_pressed_once(SDLK_0))) goto event_950_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(912, str_pressed_l_2227)) == (0))) goto event_950_11_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto event_950_11_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(912, str_pressed_l_2227, 1);
            ((AssociateArray*)*it)->set_value(57, str_lclick_203, 1);
        }
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_950_11_end: ;
}
// Function purpose: generated callback event_func_5969 processes event block(s) 955_11. Actions/conditions:
//        955_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 7 more actions.
void Frames::event_func_5969()
{
    // event 955_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_955_11_end;
        dighole_207_instances.clear_selection();
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_955_11_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(14))) goto event_955_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(dighole_207_instances));
            if (obj1 == NULL) goto compare_955_11_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_955_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_955_11_end;
        }
        compare_955_11_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_955_11_end;
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_955_11_end;
        if (!check_not_overlap(dighole_207_instances, qualifier_6)) goto event_955_11_end;
        if (!check_not_overlap(dighole_207_instances, qualifier_7)) goto event_955_11_end;
        if (!check_not_overlap(dighole_207_instances, qualifier_19)) goto event_955_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_955_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) == (0))) goto event_955_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(155, str_chipping_728)) == (0))) goto event_955_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(154, str_cutting_727)) == (0))) goto event_955_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_955_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_955_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(353, str_holex_1147, ((Active*)get_single(dighole_207_instances, default_active_instance))->get_x()-8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(354, str_holey_1148, ((Active*)get_single(dighole_207_instances, default_active_instance))->get_y()-8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_enter_hole_running = true;
            int times = int(1);
            loop_enter_hole_index = 0;
            while (loop_enter_hole_index < times) {
                loop_enter_hole_11();
                if (!loop_enter_hole_running) break;
                loop_enter_hole_index++;
            }
        }
    }
    event_955_11_end: ;
}
// Function purpose: generated callback event_func_5970 processes event block(s) 960_11. Actions/conditions:
//        960_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_5970()
{
    // event 960_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_960_11_end;
        dighole_207_instances.clear_selection();
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_960_11_end;
        if (!((number_to_string(((Active*)get_single(dighole_207_instances, default_active_instance))->get_x())+str_x_437+number_to_string(((Active*)get_single(dighole_207_instances, default_active_instance))->get_y())) == (str_808x264_2557))) goto event_960_11_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(12))) goto event_960_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(dighole_207_instances));
            if (obj1 == NULL) goto compare_960_11_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_960_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_960_11_end;
        }
        compare_960_11_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_960_11_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(250))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_960_11_end;
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(2147483648)) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_960_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_960_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_960_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) == (0))) goto event_960_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(155, str_chipping_728)) == (0))) goto event_960_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_960_11_end: ;
}
// Function purpose: generated callback event_func_5971 processes event block(s) 961_11. Actions/conditions:
//        961_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 7 more actions.
void Frames::event_func_5971()
{
    // event 961_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_961_11_end;
        dighole_207_instances.clear_selection();
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_961_11_end;
        if (!((number_to_string(((Active*)get_single(dighole_207_instances, default_active_instance))->get_x())+str_x_437+number_to_string(((Active*)get_single(dighole_207_instances, default_active_instance))->get_y())) != (str_808x264_2557))) goto event_961_11_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(12))) goto event_961_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(dighole_207_instances));
            if (obj1 == NULL) goto compare_961_11_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_961_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_961_11_end;
        }
        compare_961_11_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_961_11_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(250))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_961_11_end;
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(2147483648)) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_961_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_961_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_961_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) == (0))) goto event_961_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(155, str_chipping_728)) == (0))) goto event_961_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(353, str_holex_1147, ((Active*)get_single(dighole_207_instances, default_active_instance))->get_x()-8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(354, str_holey_1148, ((Active*)get_single(dighole_207_instances, default_active_instance))->get_y()-8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_exit_hole_running = true;
            int times = int(1);
            loop_exit_hole_index = 0;
            while (loop_exit_hole_index < times) {
                loop_exit_hole_11();
                if (!loop_exit_hole_running) break;
                loop_exit_hole_index++;
            }
        }
    }
    event_961_11_end: ;
}
// Function purpose: generated callback event_func_5972 processes event block(s) 966_11. Actions/conditions:
//        966_11: sets LClick to 1; plays a sound or music track.
void Frames::event_func_5972()
{
    // Vita tutorial: enable the original toilet action.
    event_func_4359();
}

// Function purpose: generated callback event_func_5973 processes event block(s) 974_11. Actions/conditions:
//        974_11: sets LClick to 1.
void Frames::event_func_5973()
{
    // Vita tutorial: enable the original toilet action.
    event_func_4361();
}

// Function purpose: generated callback event_func_5974 processes event block(s) 979_11. Actions/conditions:
//        979_11: sets OnMount to 0.
void Frames::event_func_5974()
{
    // event 979_11 : sets OnMount to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_979_11_end;
        qualifier_1.clear_selection();
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!qualifier_1.has_selection()) goto event_979_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(129, str_onmount_691, 0);
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
    event_979_11_end: ;
}
