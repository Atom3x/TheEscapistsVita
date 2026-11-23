#include "vitaframetime.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_4464 processes event block(s) 3217_6. Actions/conditions:
//        3217_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 11 more actions.
void Frames::event_func_4464()
{
    // event 3217_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 11 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3217_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3217_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(qualifier_14));
            if (obj1 == NULL) goto compare_3217_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3217_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3217_6_end;
        }
        compare_3217_6_0_end: ;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(25))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3217_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3217_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(933, str_binditem_2268)) == (1))) goto event_3217_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3217_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3217_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(322, str_npc_z_1103, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25));
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, -6000);
            ((Active*)*it)->alterables->values.sub(12, 30);
            ((Active*)*it)->alterables->flags.enable(25);
        }
        FrameObject * single_instance_3217_6_1; single_instance_3217_6_1 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3217_6_1 == NULL)
                    single_instance_3217_6_1 = new_obj;
            }
        }
        {
            loop_del_dizzy_running = true;
            int times = int(1);
            loop_del_dizzy_index = 0;
            while (loop_del_dizzy_index < times) {
                loop_del_dizzy_6();
                if (!loop_del_dizzy_running) break;
                loop_del_dizzy_index++;
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
        media.play_id(SOUND_THROW_4, 1-1);
    }
    event_3217_6_end: ;
}
// Function purpose: generated callback event_func_4465 processes event block(s) 3219_6. Actions/conditions:
//        3219_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 10 more actions.
void Frames::event_func_4465()
{
    // event 3219_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3219_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3219_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (68))) goto event_3219_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3219_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3219_6_end;
        if (((Active*)get_instance(cursor_178_instances))->overlaps_background()) goto event_3219_6_end;
        cursor_178_instances.clear_selection();
        if (!check_not_overlap(cursor_178_instances, items_184_instances)) goto event_3219_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_4)) goto event_3219_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_18)) goto event_3219_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_8)) goto event_3219_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_19)) goto event_3219_6_end;
        if (!check_not_overlap(cursor_178_instances, dighole_207_instances)) goto event_3219_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_22)) goto event_3219_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_1)) goto event_3219_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_3219_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3219_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_3219_6_end;
        }
        compare_3219_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3219_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3219_6_end;
        FrameObject * single_instance_3219_6_1; single_instance_3219_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_active9_291(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3219_6_1 == NULL)
                    single_instance_3219_6_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3219_6_1))->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
        FrameObject * single_instance_3219_6_2; single_instance_3219_6_2 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 16), parent->layer);
                if (single_instance_3219_6_2 == NULL)
                    single_instance_3219_6_2 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3219_6_2))->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
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
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        media.play_id(SOUND_HIT_2, 1-1);
    }
    event_3219_6_end: ;
}
// Function purpose: generated callback event_func_4466 processes event block(s) 3220_6. Actions/conditions:
//        3220_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 8 more actions.
void Frames::event_func_4466()
{
    // event 3220_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 8 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3220_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3220_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (72))) goto event_3220_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3220_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_3220_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3220_6_end;
        if (((Active*)get_instance(cursor_178_instances))->overlaps_background()) goto event_3220_6_end;
        cursor_178_instances.clear_selection();
        if (!check_not_overlap(cursor_178_instances, items_184_instances)) goto event_3220_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_3220_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3220_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_3220_6_end;
        }
        compare_3220_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3220_6_end;
        FrameObject * single_instance_3220_6_1; single_instance_3220_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_brace_412(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_3220_6_1 == NULL)
                    single_instance_3220_6_1 = new_obj;
            }
        }
        FrameObject * single_instance_3220_6_2; single_instance_3220_6_2 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 16), parent->layer);
                if (single_instance_3220_6_2 == NULL)
                    single_instance_3220_6_2 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3220_6_2))->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
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
        media.play_id(SOUND_HIT_2, 1-1);
    }
    event_3220_6_end: ;
}
// Function purpose: generated callback event_func_4467 processes event block(s) 3221_6. Actions/conditions:
//        3221_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 7 more actions.
void Frames::event_func_4467()
{
    // event 3221_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3221_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3221_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (113))) goto event_3221_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3221_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3221_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_3221_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3221_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3221_6_end;
        }
        compare_3221_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3221_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_48_2196));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_notice_running = true;
            int times = int(1);
            loop_notice_index = 0;
            while (loop_notice_index < times) {
                loop_notice_6();
                if (!loop_notice_running) break;
                loop_notice_index++;
            }
        }
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_3221_6_end: ;
}
// Function purpose: generated callback event_func_4468 processes event block(s) 3222_6. Actions/conditions:
//        3222_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_4468()
{
    // event 3222_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3222_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3222_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (113))) goto event_3222_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3222_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (5))) goto event_3222_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), 5)) == (33))) goto event_3222_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_3222_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3222_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3222_6_end;
        }
        compare_3222_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3222_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3222_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_grap_horiz_check_running = true;
            int times = int(1);
            loop_grap_horiz_check_index = 0;
            while (loop_grap_horiz_check_index < times) {
                loop_grap_horiz_check_6();
                if (!loop_grap_horiz_check_running) break;
                loop_grap_horiz_check_index++;
            }
        }
    }
    event_3222_6_end: ;
}
// Function purpose: generated callback event_func_4469 processes event block(s) 3223_6. Actions/conditions:
//        3223_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_4469()
{
    // event 3223_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3223_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3223_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (113))) goto event_3223_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3223_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (5))) goto event_3223_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), 5)) == (77))) goto event_3223_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_3223_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3223_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3223_6_end;
        }
        compare_3223_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3223_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3223_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_grap_horiz_check_running = true;
            int times = int(1);
            loop_grap_horiz_check_index = 0;
            while (loop_grap_horiz_check_index < times) {
                loop_grap_horiz_check_6();
                if (!loop_grap_horiz_check_running) break;
                loop_grap_horiz_check_index++;
            }
        }
    }
    event_3223_6_end: ;
}
// Function purpose: generated callback event_func_4470 processes event block(s) 3234_6. Actions/conditions:
//        3234_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_4470()
{
    // event 3234_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3234_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3234_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (113))) goto event_3234_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3234_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (5))) goto event_3234_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), 5)) == (32))) goto event_3234_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_3234_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3234_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3234_6_end;
        }
        compare_3234_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3234_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3234_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_grap_vert_check_running = true;
            int times = int(1);
            loop_grap_vert_check_index = 0;
            while (loop_grap_vert_check_index < times) {
                loop_grap_vert_check_6();
                if (!loop_grap_vert_check_running) break;
                loop_grap_vert_check_index++;
            }
        }
    }
    event_3234_6_end: ;
}
// Function purpose: generated callback event_func_4471 processes event block(s) 3235_6. Actions/conditions:
//        3235_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_4471()
{
    // event 3235_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3235_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3235_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (113))) goto event_3235_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3235_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (5))) goto event_3235_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), 5)) == (84))) goto event_3235_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_3235_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3235_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3235_6_end;
        }
        compare_3235_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3235_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3235_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_grap_vert_check_running = true;
            int times = int(1);
            loop_grap_vert_check_index = 0;
            while (loop_grap_vert_check_index < times) {
                loop_grap_vert_check_6();
                if (!loop_grap_vert_check_running) break;
                loop_grap_vert_check_index++;
            }
        }
    }
    event_3235_6_end: ;
}
// Function purpose: generated callback event_func_4472 processes event block(s) 3247_6. Actions/conditions:
//        3247_6: sets IsRope? to 0.
void Frames::event_func_4472()
{
    // event 3247_6 : sets IsRope? to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3247_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(934, str_isrope_2269)) != (0))) goto event_3247_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (5))) goto event_3247_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(934, str_isrope_2269, 0);
    }
    event_3247_6_end: ;
}
// Function purpose: generated callback event_func_4473 processes event block(s) 3248_6. Actions/conditions:
//        3248_6: sets IsRope? to 1.
void Frames::event_func_4473()
{
    // event 3248_6 : sets IsRope? to 1
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3248_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3248_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (44))) goto event_3248_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (5))) goto event_3248_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(934, str_isrope_2269, 1);
    }
    event_3248_6_end: ;
}
// Function purpose: generated callback event_func_4474 processes event block(s) 3249_6. Actions/conditions:
//        3249_6: sets IsRope? to 1.
void Frames::event_func_4474()
{
    // event 3249_6 : sets IsRope? to 1
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3249_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3249_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (81))) goto event_3249_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (5))) goto event_3249_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(934, str_isrope_2269, 1);
    }
    event_3249_6_end: ;
}
// Function purpose: generated callback event_func_4475 processes event block(s) 3250_6. Actions/conditions:
//        3250_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_4475()
{
    // event 3250_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3250_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3250_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (5))) goto event_3250_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3250_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(934, str_isrope_2269)) == (1))) goto event_3250_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), 5)) == (33))) goto event_3250_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_3250_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3250_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3250_6_end;
        }
        compare_3250_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3250_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3250_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_rope_horiz_check_running = true;
            int times = int(1);
            loop_rope_horiz_check_index = 0;
            while (loop_rope_horiz_check_index < times) {
                loop_rope_horiz_check_6();
                if (!loop_rope_horiz_check_running) break;
                loop_rope_horiz_check_index++;
            }
        }
    }
    event_3250_6_end: ;
}
// Function purpose: generated callback event_func_4476 processes event block(s) 3262_6. Actions/conditions:
//        3262_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_4476()
{
    // event 3262_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3262_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3262_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (5))) goto event_3262_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3262_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(934, str_isrope_2269)) == (1))) goto event_3262_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), 5)) == (32))) goto event_3262_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_3262_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3262_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3262_6_end;
        }
        compare_3262_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3262_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3262_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_rope_vert_check_running = true;
            int times = int(1);
            loop_rope_vert_check_index = 0;
            while (loop_rope_vert_check_index < times) {
                loop_rope_vert_check_6();
                if (!loop_rope_vert_check_running) break;
                loop_rope_vert_check_index++;
            }
        }
    }
    event_3262_6_end: ;
}
// Function purpose: generated callback event_func_4477 processes event block(s) 3277_6. Actions/conditions:
//        3277_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_4477()
{
    // event 3277_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3277_6_end;
        zipstart_389_instances.clear_selection();
        for (ObjectIterator it(zipstart_389_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!zipstart_389_instances.has_selection()) goto event_3277_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) != (189))) goto event_3277_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(zipstart_389_instances));
            if (obj1 == NULL) goto compare_3277_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3277_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3277_6_end;
        }
        compare_3277_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3277_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3277_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(756, str_zip_1932)) == (empty_string))) goto event_3277_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_3277_6_end: ;
}
// Function purpose: generated callback event_func_4478 processes event block(s) 3278_6. Actions/conditions:
//        3278_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 8 more actions.
void Frames::event_func_4478()
{
    // event 3278_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 8 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3278_6_end;
        zipstart_389_instances.clear_selection();
        for (ObjectIterator it(zipstart_389_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!zipstart_389_instances.has_selection()) goto event_3278_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (189))) goto event_3278_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(zipstart_389_instances));
            if (obj1 == NULL) goto compare_3278_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3278_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3278_6_end;
        }
        compare_3278_6_0_end: ;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3278_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3278_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3278_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(756, str_zip_1932)) == (empty_string))) goto event_3278_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(756, str_zip_1932, ((Active*)get_single(zipstart_389_instances, default_active_instance))->alterables->strings.get(0));
        ((Active*)get_instance(playerBase_instances))->set_x(((Active*)get_single(zipstart_389_instances, default_active_instance))->get_x()+8);
        ((Active*)get_instance(playerBase_instances))->set_y(((Active*)get_single(zipstart_389_instances, default_active_instance))->get_y()+8);
    }
    event_3278_6_end: ;
}
// Function purpose: generated callback event_func_4479 processes event block(s) 3279_6. Actions/conditions:
//        3279_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_4479()
{
    // event 3279_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3279_6_end;
        checkpointguard_423_instances.clear_selection();
        for (ObjectIterator it(checkpointguard_423_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!checkpointguard_423_instances.has_selection()) goto event_3279_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3279_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (152))) goto event_3279_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3279_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(checkpointguard_423_instances));
            if (obj1 == NULL) goto compare_3279_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3279_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 40)) goto event_3279_6_end;
        }
        compare_3279_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3279_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3279_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_52_2270));
        {
            loop_checkpoint_speak_running = true;
            int times = int(1);
            loop_checkpoint_speak_index = 0;
            while (loop_checkpoint_speak_index < times) {
                loop_checkpoint_speak_6();
                if (!loop_checkpoint_speak_running) break;
                loop_checkpoint_speak_index++;
            }
        }
    }
    event_3279_6_end: ;
}
// Function purpose: generated callback event_func_4480 processes event block(s) 3280_6. Actions/conditions:
//        3280_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 9 more actions.
void Frames::event_func_4480()
{
    // event 3280_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3280_6_end;
        checkpointguard_423_instances.clear_selection();
        for (ObjectIterator it(checkpointguard_423_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!checkpointguard_423_instances.has_selection()) goto event_3280_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3280_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (153))) goto event_3280_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3280_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(checkpointguard_423_instances));
            if (obj1 == NULL) goto compare_3280_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3280_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 40)) goto event_3280_6_end;
        }
        compare_3280_6_0_end: ;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) != (-1))) goto event_3280_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3280_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3280_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        FrameObject * single_instance_3280_6_1; single_instance_3280_6_1 = NULL;
        // select single: true false false
        checkpoint_422_instances.clear_selection();
        for (ObjectIterator p_it(checkpoint_422_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_3280_6_1 == NULL)
                    single_instance_3280_6_1 = new_obj;
            }
        }
        for (ObjectIterator it(checkpoint_422_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_53_2206));
        {
            loop_checkpoint_speak_running = true;
            int times = int(1);
            loop_checkpoint_speak_index = 0;
            while (loop_checkpoint_speak_index < times) {
                loop_checkpoint_speak_6();
                if (!loop_checkpoint_speak_running) break;
                loop_checkpoint_speak_index++;
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
        media.play_id(SOUND_PICKUP_3, 1-1);
    }
    event_3280_6_end: ;
}
// Function purpose: generated callback event_func_4481 processes event block(s) 3281_6. Actions/conditions:
//        3281_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 10 more actions.
void Frames::event_func_4481()
{
    // event 3281_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3281_6_end;
        bedplayer_338_instances.clear_selection();
        for (ObjectIterator it(bedplayer_338_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!bedplayer_338_instances.has_selection()) goto event_3281_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3281_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (126))) goto event_3281_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3281_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(bedplayer_338_instances));
            if (obj1 == NULL) goto compare_3281_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3281_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_3281_6_end;
        }
        compare_3281_6_0_end: ;
        cursor_178_instances.clear_selection();
        if (!check_not_overlap(cursor_178_instances, qualifier_19)) goto event_3281_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3281_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3281_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(311, str_beddummy_1088, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        FrameObject * single_instance_3281_6_1; single_instance_3281_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bedplayer_338_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dummies_374(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3281_6_1 == NULL)
                    single_instance_3281_6_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3281_6_1))->set_direction(((Active*)get_single(bedplayer_338_instances, default_active_instance))->get_direction());
        FrameObject * single_instance_3281_6_2; single_instance_3281_6_2 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bedplayer_338_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 16), parent->layer);
                if (single_instance_3281_6_2 == NULL)
                    single_instance_3281_6_2 = new_obj;
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
        media.play_id(SOUND_THROW_4, 1-1);
    }
    event_3281_6_end: ;
}
// Function purpose: generated callback event_func_4482 processes event block(s) 3282_6. Actions/conditions:
//        3282_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_4482()
{
    // event 3282_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3282_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3282_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (96))) goto event_3282_6_end;
        if (!(((Active*)get_instance(cursor_178_instances))->overlaps_background())) goto event_3282_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_3282_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3282_6_0_end;
            x2 = obj2->get_x() + -8;
            y2 = obj2->get_y() + -8;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_3282_6_end;
        }
        compare_3282_6_0_end: ;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3282_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3282_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3282_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_make_toothshiv_running = true;
            int times = int(1);
            loop_make_toothshiv_index = 0;
            while (loop_make_toothshiv_index < times) {
                loop_make_toothshiv_6();
                if (!loop_make_toothshiv_running) break;
                loop_make_toothshiv_index++;
            }
        }
    }
    event_3282_6_end: ;
}
// Function purpose: generated callback event_func_4483 processes event block(s) 3285_6. Actions/conditions:
//        3285_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_4483()
{
    // event 3285_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3285_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3285_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (17))) goto event_3285_6_end;
        if (!(((Active*)get_instance(cursor_178_instances))->overlaps_background())) goto event_3285_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_3285_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3285_6_0_end;
            x2 = obj2->get_x() + -8;
            y2 = obj2->get_y() + -8;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_3285_6_end;
        }
        compare_3285_6_0_end: ;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3285_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3285_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3285_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_make_combshiv_running = true;
            int times = int(1);
            loop_make_combshiv_index = 0;
            while (loop_make_combshiv_index < times) {
                loop_make_combshiv_6();
                if (!loop_make_combshiv_running) break;
                loop_make_combshiv_index++;
            }
        }
    }
    event_3285_6_end: ;
}
// Function purpose: generated callback event_func_4484 processes event block(s) 3288_6. Actions/conditions:
//        3288_6: sets Hunger to 5; sets LClick to 1; changes a stored game value; plus 7 more actions.
void Frames::event_func_4484()
{
    // event 3288_6 : sets Hunger to 5; sets LClick to 1; changes a stored game value; plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3288_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_3288_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_fat_852)) > (0))) goto event_3288_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3288_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3288_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3288_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(899, str_hunger_2168, 5);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(358, str_fatigue_36, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_fat_852));
        stats_340_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_stats_340(0, 0), 5);
            stats_340_instances.add_back();
        }
        for (ObjectIterator it(stats_340_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_3288_6_1;
            ((TextBlitter*)*it)->set_global_position(parent->get_x() + -20, parent->get_y() + -16);
            pos_end_3288_6_1: ;
        }
        for (ObjectIterator it(stats_340_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_text(str__254);
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
        media.play_id(SOUND_PICKUP_3, 1-1);
    }
    event_3288_6_end: ;
}
// Function purpose: generated callback event_func_4485 processes event block(s) 3289_6. Actions/conditions:
//        3289_6: sets LClick to 1; changes a stored game value; adds a stats 340 instance; plus 6 more actions.
void Frames::event_func_4485()
{
    // event 3289_6 : sets LClick to 1; changes a stored game value; adds a stats 340 instance; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3289_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_3289_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_hp_855)) > (0))) goto event_3289_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3289_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3289_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3289_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((Active*)get_instance(playerBase_instances))->alterables->values.add(7, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_hp_855));
        stats_340_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_stats_340(0, 0), 5);
            stats_340_instances.add_back();
        }
        for (ObjectIterator it(stats_340_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_3289_6_1;
            ((TextBlitter*)*it)->set_global_position(parent->get_x() + -20, parent->get_y() + -16);
            pos_end_3289_6_1: ;
        }
        for (ObjectIterator it(stats_340_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_text(str__2271);
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
        media.play_id(SOUND_PICKUP_3, 1-1);
    }
    event_3289_6_end: ;
}
// Function purpose: generated callback event_func_4486 processes event block(s) 3290_6. Actions/conditions:
//        3290_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 10 more actions.
void Frames::event_func_4486()
{
    // event 3290_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3290_6_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(1))) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto event_3290_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (67))) goto event_3290_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_3290_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3290_6_0_end;
            x2 = obj2->get_x() + -8;
            y2 = obj2->get_y() + -8;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_3290_6_end;
        }
        compare_3290_6_0_end: ;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3290_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3290_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3290_6_end;
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->values.set(1, 5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(306, str_ventx_1082, ((Active*)get_single(ventCover_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(307, str_venty_1083, ((Active*)get_single(ventCover_instances, default_active_instance))->get_y());
        {
            loop_ventremovealert_running = true;
            int times = int(1);
            loop_ventremovealert_index = 0;
            while (loop_ventremovealert_index < times) {
                loop_ventremovealert_6();
                if (!loop_ventremovealert_running) break;
                loop_ventremovealert_index++;
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
        media.play_id(SOUND_PLIP_16, 1-1);
    }
    event_3290_6_end: ;
}
// Function purpose: generated callback event_func_4487 processes event block(s) 3291_6. Actions/conditions:
//        3291_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 12 more actions.
void Frames::event_func_4487()
{
    // event 3291_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 12 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3291_6_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(1))) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto event_3291_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (117))) goto event_3291_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_3291_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3291_6_0_end;
            x2 = obj2->get_x() + -8;
            y2 = obj2->get_y() + -8;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_3291_6_end;
        }
        compare_3291_6_0_end: ;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3291_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3291_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3291_6_end;
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->alterables->values.set(1, 5);
            ((Active*)*it)->alterables->values.set(11, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(48, str_selecteditemhp_516)-20);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(306, str_ventx_1082, ((Active*)get_single(ventCover_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(307, str_venty_1083, ((Active*)get_single(ventCover_instances, default_active_instance))->get_y());
        FrameObject * single_instance_3291_6_1; single_instance_3291_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(ventCover_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3291_6_1 == NULL)
                    single_instance_3291_6_1 = new_obj;
            }
        }
        {
            loop_ventremovealert_running = true;
            int times = int(1);
            loop_ventremovealert_index = 0;
            while (loop_ventremovealert_index < times) {
                loop_ventremovealert_6();
                if (!loop_ventremovealert_running) break;
                loop_ventremovealert_index++;
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
        media.play_id(SOUND_PLIP_16, 1-1);
    }
    event_3291_6_end: ;
}
// Function purpose: generated callback event_func_4488 processes event block(s) 3293_6. Actions/conditions:
//        3293_6: sets LClick to 1; sets currNPC to ((Active*)get_single(qualifier_14,
//        default_active_instance))->alterables->values.get(25); creates a fx 185 object; plus 9 more actions.
void Frames::event_func_4488()
{
    // event 3293_6 : sets LClick to 1; sets currNPC to ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25); creates a fx 185 object; plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3293_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3293_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (241))) goto event_3293_6_end;
        if (!((((Active*)get_single(qualifier_14, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_3293_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3293_6_end;
        if (!((get_distance_int(((Active*)get_instance(playerBase_instances))->get_x(), ((Active*)get_instance(playerBase_instances))->get_y(), ((Active*)get_single(qualifier_14, default_active_instance))->get_x(), ((Active*)get_single(qualifier_14, default_active_instance))->get_y())) <= (30))) goto event_3293_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3293_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3293_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3293_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(415, str_currnpc_1233, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25));
        FrameObject * single_instance_3293_6_0; single_instance_3293_6_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fx_185(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3293_6_0 == NULL)
                    single_instance_3293_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3293_6_0))->set_direction(3);
        {
            ((Active*)single_instance_3293_6_0)->set_shader(Render::NONE);
        }
        ((Active*)((Active*)single_instance_3293_6_0))->destroy();
        FrameObject * single_instance_3293_6_1; single_instance_3293_6_1 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + -4), parent->layer);
                if (single_instance_3293_6_1 == NULL)
                    single_instance_3293_6_1 = new_obj;
            }
        }
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(3, 30);
        {
            loop_drop_opponent_running = true;
            int times = int(1);
            loop_drop_opponent_index = 0;
            while (loop_drop_opponent_index < times) {
                loop_drop_opponent_6();
                if (!loop_drop_opponent_running) break;
                loop_drop_opponent_index++;
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
        media.play_id(SOUND_EN_HIT_7, 1-1);
    }
    event_3293_6_end: ;
}
// Function purpose: generated callback event_func_4489 processes event block(s) 3294_6. Actions/conditions:
//        3294_6: sets LClick to 1; sets currNPC to ((Active*)get_single(qualifier_14,
//        default_active_instance))->alterables->values.get(25); creates a fx 185 object; plus 9 more actions.
void Frames::event_func_4489()
{
    // event 3294_6 : sets LClick to 1; sets currNPC to ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25); creates a fx 185 object; plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3294_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3294_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (105))) goto event_3294_6_end;
        if (!((((Active*)get_single(qualifier_14, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_3294_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3294_6_end;
        if (!((get_distance_int(((Active*)get_instance(playerBase_instances))->get_x(), ((Active*)get_instance(playerBase_instances))->get_y(), ((Active*)get_single(qualifier_14, default_active_instance))->get_x(), ((Active*)get_single(qualifier_14, default_active_instance))->get_y())) <= (30))) goto event_3294_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3294_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3294_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3294_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(415, str_currnpc_1233, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25));
        FrameObject * single_instance_3294_6_0; single_instance_3294_6_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fx_185(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3294_6_0 == NULL)
                    single_instance_3294_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3294_6_0))->set_direction(3);
        {
            ((Active*)single_instance_3294_6_0)->set_shader(Render::NONE);
        }
        ((Active*)((Active*)single_instance_3294_6_0))->destroy();
        FrameObject * single_instance_3294_6_1; single_instance_3294_6_1 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + -4), parent->layer);
                if (single_instance_3294_6_1 == NULL)
                    single_instance_3294_6_1 = new_obj;
            }
        }
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(3, 30);
        {
            loop_drop_opponent_running = true;
            int times = int(1);
            loop_drop_opponent_index = 0;
            while (loop_drop_opponent_index < times) {
                loop_drop_opponent_6();
                if (!loop_drop_opponent_running) break;
                loop_drop_opponent_index++;
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
        media.play_id(SOUND_EN_HIT_7, 1-1);
    }
    event_3294_6_end: ;
}
// Function purpose: generated callback event_func_4490 processes event block(s) 3295_6. Actions/conditions:
//        3295_6: sets LClick to 1; sets currNPC to ((Active*)get_single(qualifier_14,
//        default_active_instance))->alterables->values.get(25); creates a fx 185 object; plus 9 more actions.
void Frames::event_func_4490()
{
    // event 3295_6 : sets LClick to 1; sets currNPC to ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25); creates a fx 185 object; plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3295_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3295_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (235))) goto event_3295_6_end;
        if (!((((Active*)get_single(qualifier_14, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_3295_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3295_6_end;
        if (!((get_distance_int(((Active*)get_instance(playerBase_instances))->get_x(), ((Active*)get_instance(playerBase_instances))->get_y(), ((Active*)get_single(qualifier_14, default_active_instance))->get_x(), ((Active*)get_single(qualifier_14, default_active_instance))->get_y())) <= (30))) goto event_3295_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3295_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3295_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3295_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(415, str_currnpc_1233, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25));
        FrameObject * single_instance_3295_6_0; single_instance_3295_6_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fx_185(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3295_6_0 == NULL)
                    single_instance_3295_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3295_6_0))->set_direction(3);
        {
            ((Active*)single_instance_3295_6_0)->set_shader(Render::NONE);
        }
        ((Active*)((Active*)single_instance_3295_6_0))->destroy();
        FrameObject * single_instance_3295_6_1; single_instance_3295_6_1 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + -4), parent->layer);
                if (single_instance_3295_6_1 == NULL)
                    single_instance_3295_6_1 = new_obj;
            }
        }
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(3, 30);
        {
            loop_drop_opponent_running = true;
            int times = int(1);
            loop_drop_opponent_index = 0;
            while (loop_drop_opponent_index < times) {
                loop_drop_opponent_6();
                if (!loop_drop_opponent_running) break;
                loop_drop_opponent_index++;
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
        media.play_id(SOUND_EN_HIT_7, 1-1);
    }
    event_3295_6_end: ;
}
// Function purpose: generated callback event_func_4491 processes event block(s) 3296_6. Actions/conditions:
//        3296_6: sets LClick to 1; sets currNPC to ((Active*)get_single(qualifier_14,
//        default_active_instance))->alterables->values.get(25); creates a fx 185 object; plus 9 more actions.
void Frames::event_func_4491()
{
    // event 3296_6 : sets LClick to 1; sets currNPC to ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25); creates a fx 185 object; plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3296_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3296_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (225))) goto event_3296_6_end;
        if (!((((Active*)get_single(qualifier_14, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_3296_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3296_6_end;
        if (!((get_distance_int(((Active*)get_instance(playerBase_instances))->get_x(), ((Active*)get_instance(playerBase_instances))->get_y(), ((Active*)get_single(qualifier_14, default_active_instance))->get_x(), ((Active*)get_single(qualifier_14, default_active_instance))->get_y())) <= (30))) goto event_3296_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3296_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3296_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3296_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(415, str_currnpc_1233, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25));
        FrameObject * single_instance_3296_6_0; single_instance_3296_6_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fx_185(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3296_6_0 == NULL)
                    single_instance_3296_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3296_6_0))->set_direction(3);
        {
            ((Active*)single_instance_3296_6_0)->set_shader(Render::NONE);
        }
        ((Active*)((Active*)single_instance_3296_6_0))->destroy();
        FrameObject * single_instance_3296_6_1; single_instance_3296_6_1 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + -4), parent->layer);
                if (single_instance_3296_6_1 == NULL)
                    single_instance_3296_6_1 = new_obj;
            }
        }
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(3, 30);
        {
            loop_drop_opponent_running = true;
            int times = int(1);
            loop_drop_opponent_index = 0;
            while (loop_drop_opponent_index < times) {
                loop_drop_opponent_6();
                if (!loop_drop_opponent_running) break;
                loop_drop_opponent_index++;
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
        media.play_id(SOUND_EN_HIT_7, 1-1);
    }
    event_3296_6_end: ;
}
// Function purpose: generated callback event_func_4492 processes event block(s) 3297_6. Actions/conditions:
//        3297_6: sets LClick to 1; sets currNPC to ((Active*)get_single(qualifier_14,
//        default_active_instance))->alterables->values.get(25); creates a fx 185 object; plus 9 more actions.
void Frames::event_func_4492()
{
    // event 3297_6 : sets LClick to 1; sets currNPC to ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25); creates a fx 185 object; plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3297_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3297_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (222))) goto event_3297_6_end;
        if (!((((Active*)get_single(qualifier_14, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_3297_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3297_6_end;
        if (!((get_distance_int(((Active*)get_instance(playerBase_instances))->get_x(), ((Active*)get_instance(playerBase_instances))->get_y(), ((Active*)get_single(qualifier_14, default_active_instance))->get_x(), ((Active*)get_single(qualifier_14, default_active_instance))->get_y())) <= (30))) goto event_3297_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3297_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3297_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3297_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(415, str_currnpc_1233, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25));
        FrameObject * single_instance_3297_6_0; single_instance_3297_6_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fx_185(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3297_6_0 == NULL)
                    single_instance_3297_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3297_6_0))->set_direction(3);
        {
            ((Active*)single_instance_3297_6_0)->set_shader(Render::NONE);
        }
        ((Active*)((Active*)single_instance_3297_6_0))->destroy();
        FrameObject * single_instance_3297_6_1; single_instance_3297_6_1 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + -4), parent->layer);
                if (single_instance_3297_6_1 == NULL)
                    single_instance_3297_6_1 = new_obj;
            }
        }
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(3, 30);
        {
            loop_drop_opponent_running = true;
            int times = int(1);
            loop_drop_opponent_index = 0;
            while (loop_drop_opponent_index < times) {
                loop_drop_opponent_6();
                if (!loop_drop_opponent_running) break;
                loop_drop_opponent_index++;
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
        media.play_id(SOUND_EN_HIT_7, 1-1);
    }
    event_3297_6_end: ;
}
// Function purpose: generated callback event_func_4493 processes event block(s) 3298_6. Actions/conditions:
//        3298_6: sets LClick to 1; sets currNPC to ((Active*)get_single(qualifier_14,
//        default_active_instance))->alterables->values.get(25); creates a fx 185 object; plus 9 more actions.
void Frames::event_func_4493()
{
    // event 3298_6 : sets LClick to 1; sets currNPC to ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25); creates a fx 185 object; plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3298_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3298_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (237))) goto event_3298_6_end;
        if (!((((Active*)get_single(qualifier_14, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_3298_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3298_6_end;
        if (!((get_distance_int(((Active*)get_instance(playerBase_instances))->get_x(), ((Active*)get_instance(playerBase_instances))->get_y(), ((Active*)get_single(qualifier_14, default_active_instance))->get_x(), ((Active*)get_single(qualifier_14, default_active_instance))->get_y())) <= (30))) goto event_3298_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3298_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3298_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3298_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(415, str_currnpc_1233, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25));
        FrameObject * single_instance_3298_6_0; single_instance_3298_6_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fx_185(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3298_6_0 == NULL)
                    single_instance_3298_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3298_6_0))->set_direction(3);
        {
            ((Active*)single_instance_3298_6_0)->set_shader(Render::NONE);
        }
        ((Active*)((Active*)single_instance_3298_6_0))->destroy();
        FrameObject * single_instance_3298_6_1; single_instance_3298_6_1 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + -4), parent->layer);
                if (single_instance_3298_6_1 == NULL)
                    single_instance_3298_6_1 = new_obj;
            }
        }
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(3, 30);
        {
            loop_drop_opponent_running = true;
            int times = int(1);
            loop_drop_opponent_index = 0;
            while (loop_drop_opponent_index < times) {
                loop_drop_opponent_6();
                if (!loop_drop_opponent_running) break;
                loop_drop_opponent_index++;
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
        media.play_id(SOUND_EN_HIT_7, 1-1);
    }
    event_3298_6_end: ;
}
// Function purpose: generated callback event_func_4494 processes event block(s) 3307_6. Actions/conditions:
//        3307_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 13 more actions.
void Frames::event_func_4494()
{
    // event 3307_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 13 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3307_6_end;
        dighole_207_instances.clear_selection();
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_3307_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (26))) goto event_3307_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(playerBase_instances));
            if (obj1 == NULL) goto compare_3307_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_single(dighole_207_instances));
            if (obj2 == NULL) goto compare_3307_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3307_6_end;
        }
        compare_3307_6_0_end: ;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3307_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) <= (2))) goto event_3307_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3307_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3307_6_end;
        ((ArrayObject*)get_instance(digarray_228_instances))->set_value(0, ((Active*)get_single(dighole_207_instances, default_active_instance))->get_x()-8, ((Active*)get_single(dighole_207_instances, default_active_instance))->get_y()-8, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(2-1);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->paste(0);
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_3307_6_1; single_instance_3307_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(dighole_207_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3307_6_1 == NULL)
                    single_instance_3307_6_1 = new_obj;
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
        media.play_id(SOUND_THROW_4, 1-1);
    }
    event_3307_6_end: ;
}
// Function purpose: generated callback event_func_4495 processes event block(s) 3308_6. Actions/conditions:
//        3308_6: creates a dust 223 object; sets the object's animation to 0; sets the selected object's numeric
//        value to 0; plus 7 more actions.
void Frames::event_func_4495()
{
    // event 3308_6 : creates a dust 223 object; sets the object's animation to 0; sets the selected object's numeric value to 0; plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3308_6_end;
        toilet2_307_instances.clear_selection();
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!toilet2_307_instances.has_selection()) goto event_3308_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (80))) goto event_3308_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3308_6_end;
        if (!((get_distance_int(((Active*)get_instance(playerBase_instances))->get_x(), ((Active*)get_instance(playerBase_instances))->get_y(), (((Active*)get_single(toilet2_307_instances, default_active_instance))->get_x()+8), (((Active*)get_single(toilet2_307_instances, default_active_instance))->get_y()+8))) <= (20))) goto event_3308_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3308_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3308_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3308_6_end;
        FrameObject * single_instance_3308_6_0; single_instance_3308_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(toilet2_307_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_3308_6_0 == NULL)
                    single_instance_3308_6_0 = new_obj;
            }
        }
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(228, str_toiletx_838, ((Active*)get_single(toilet2_307_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(229, str_toilety_839, ((Active*)get_single(toilet2_307_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_remove_bog_water_running = true;
            int times = int(1);
            loop_remove_bog_water_index = 0;
            while (loop_remove_bog_water_index < times) {
                loop_remove_bog_water_6();
                if (!loop_remove_bog_water_running) break;
                loop_remove_bog_water_index++;
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
        media.play_id(SOUND_THROW_4, 1-1);
    }
    event_3308_6_end: ;
}
// Function purpose: generated callback event_func_4496 processes event block(s) 3310_6. Actions/conditions:
//        3310_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 10 more actions.
void Frames::event_func_4496()
{
    // event 3310_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3310_6_end;
        camera_237_instances.clear_selection();
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(5)) { it.deselect(); continue; }
        }
        if (!camera_237_instances.has_selection()) goto event_3310_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3310_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_camdis_2272)) > (0))) goto event_3310_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3310_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(camera_237_instances));
            if (obj1 == NULL) goto compare_3310_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3310_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3310_6_end;
        }
        compare_3310_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3310_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3310_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(311, str_beddummy_1088, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_camdis_2272));
            ((Active*)*it)->force_animation(5);
        }
        FrameObject * single_instance_3310_6_1; single_instance_3310_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(camera_237_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_3310_6_1 == NULL)
                    single_instance_3310_6_1 = new_obj;
            }
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
        {
            loop_cam_dis_running = true;
            int times = int(1);
            loop_cam_dis_index = 0;
            while (loop_cam_dis_index < times) {
                loop_cam_dis_6();
                if (!loop_cam_dis_running) break;
                loop_cam_dis_index++;
            }
        }
    }
    event_3310_6_end: ;
}
// Function purpose: generated callback event_func_4497 processes event block(s) 3313_6. Actions/conditions:
//        3313_6: sets From to Craft_Output; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions.
void Frames::event_func_4497()
{
    // event 3313_6 : sets From to Craft_Output; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3313_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craft_output_1121))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3313_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(15))) goto event_3313_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3313_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3313_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(692, str_from_1842, str_craft_output_1121);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(387, str_clickeditemslot_1188, 1);
        {
            loop_find_open_inv_slot_running = true;
            int times = int(1);
            loop_find_open_inv_slot_index = 0;
            while (loop_find_open_inv_slot_index < times) {
                loop_find_open_inv_slot_6();
                if (!loop_find_open_inv_slot_running) break;
                loop_find_open_inv_slot_index++;
            }
        }
    }
    event_3313_6_end: ;
}
// Function purpose: generated callback event_func_4498 processes event block(s) 3314_6. Actions/conditions:
//        3314_6: sets From to NPC_give; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions.
void Frames::event_func_4498()
{
    // event 3314_6 : sets From to NPC_give; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3314_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_give_1349))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3314_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(14))) goto event_3314_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3314_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3314_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(692, str_from_1842, str_npc_give_1349);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(387, str_clickeditemslot_1188, 1);
        {
            loop_find_open_inv_slot_running = true;
            int times = int(1);
            loop_find_open_inv_slot_index = 0;
            while (loop_find_open_inv_slot_index < times) {
                loop_find_open_inv_slot_6();
                if (!loop_find_open_inv_slot_running) break;
                loop_find_open_inv_slot_index++;
            }
        }
    }
    event_3314_6_end: ;
}
// Function purpose: generated callback event_func_4499 processes event block(s) 3315_6. Actions/conditions:
//        3315_6: sets From to Loot_Outfit; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions.
void Frames::event_func_4499()
{
    // event 3315_6 : sets From to Loot_Outfit; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3315_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_outfit_450))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3315_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(13))) goto event_3315_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3315_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3315_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(692, str_from_1842, str_loot_outfit_450);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(387, str_clickeditemslot_1188, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1));
        {
            loop_find_open_inv_slot_running = true;
            int times = int(1);
            loop_find_open_inv_slot_index = 0;
            while (loop_find_open_inv_slot_index < times) {
                loop_find_open_inv_slot_6();
                if (!loop_find_open_inv_slot_running) break;
                loop_find_open_inv_slot_index++;
            }
        }
    }
    event_3315_6_end: ;
}
// Function purpose: generated callback event_func_4500 processes event block(s) 3316_6. Actions/conditions:
//        3316_6: sets LClick to 1; plays a sound or music track.
void Frames::event_func_4500()
{
    // event 3316_6 : sets LClick to 1; plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3316_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_weapon_449))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (11))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3316_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(13))) goto event_3316_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3316_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3316_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_3316_6_end: ;
}
// Function purpose: generated callback event_func_4501 processes event block(s) 3317_6. Actions/conditions:
//        3317_6: sets From to Loot_Weapon; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions.
void Frames::event_func_4501()
{
    // event 3317_6 : sets From to Loot_Weapon; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3317_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_weapon_449))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) != (11))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3317_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(13))) goto event_3317_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3317_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3317_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(692, str_from_1842, str_loot_weapon_449);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(387, str_clickeditemslot_1188, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1));
        {
            loop_find_open_inv_slot_running = true;
            int times = int(1);
            loop_find_open_inv_slot_index = 0;
            while (loop_find_open_inv_slot_index < times) {
                loop_find_open_inv_slot_6();
                if (!loop_find_open_inv_slot_running) break;
                loop_find_open_inv_slot_index++;
            }
        }
    }
    event_3317_6_end: ;
}
// Function purpose: generated callback event_func_4502 processes event block(s) 3318_6. Actions/conditions:
//        3318_6: sets From to Loot; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions.
void Frames::event_func_4502()
{
    // event 3318_6 : sets From to Loot; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3318_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_448))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2002))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3318_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(13))) goto event_3318_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3318_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3318_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(692, str_from_1842, str_loot_448);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(387, str_clickeditemslot_1188, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1));
        {
            loop_find_open_inv_slot_running = true;
            int times = int(1);
            loop_find_open_inv_slot_index = 0;
            while (loop_find_open_inv_slot_index < times) {
                loop_find_open_inv_slot_6();
                if (!loop_find_open_inv_slot_running) break;
                loop_find_open_inv_slot_index++;
            }
        }
    }
    event_3318_6_end: ;
}
// Function purpose: generated callback event_func_4503 processes event block(s) 3319_6. Actions/conditions:
//        3319_6: sets LClick to 1; sets CurrItem to ((Active*)get_single(hudItem_instances,
//        default_active_instance))->alterables->values.get(2); sets a game or interface text string.
void Frames::event_func_4503()
{
    // event 3319_6 : sets LClick to 1; sets CurrItem to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2); sets a game or interface text string
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3319_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_448))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2002))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3319_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(13))) goto event_3319_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3319_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3319_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(647, str_curritem_1747, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452))+str_inv_911+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1)), empty_string);
        {
            loop_retrieve_mission_loot_running = true;
            int times = int(((ListObject*)get_instance(missions_298_instances))->get_count());
            loop_retrieve_mission_loot_index = 0;
            while (loop_retrieve_mission_loot_index < times) {
                loop_retrieve_mission_loot_6();
                if (!loop_retrieve_mission_loot_running) break;
                loop_retrieve_mission_loot_index++;
            }
        }
    }
    event_3319_6_end: ;
}
// Function purpose: generated callback event_func_4504 processes event block(s) 3322_6. Actions/conditions:
//        3322_6: sets From to Craft; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions.
void Frames::event_func_4504()
{
    // event 3322_6 : sets From to Craft; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3322_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craft_900))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3322_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(15))) goto event_3322_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3322_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3322_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(692, str_from_1842, str_craft_900);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(387, str_clickeditemslot_1188, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1));
        {
            loop_find_open_inv_slot_running = true;
            int times = int(1);
            loop_find_open_inv_slot_index = 0;
            while (loop_find_open_inv_slot_index < times) {
                loop_find_open_inv_slot_6();
                if (!loop_find_open_inv_slot_running) break;
                loop_find_open_inv_slot_index++;
            }
        }
    }
    event_3322_6_end: ;
}
// Function purpose: generated callback event_func_4505 processes event block(s) 3323_6. Actions/conditions:
//        3323_6: sets From to Desk; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions.
void Frames::event_func_4505()
{
    // event 3323_6 : sets From to Desk; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3323_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_desk_32))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2002))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3323_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(16))) goto event_3323_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3323_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3323_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(692, str_from_1842, str_desk_32);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(387, str_clickeditemslot_1188, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1));
        {
            loop_find_open_inv_slot_running = true;
            int times = int(1);
            loop_find_open_inv_slot_index = 0;
            while (loop_find_open_inv_slot_index < times) {
                loop_find_open_inv_slot_6();
                if (!loop_find_open_inv_slot_running) break;
                loop_find_open_inv_slot_index++;
            }
        }
    }
    event_3323_6_end: ;
}
// Function purpose: generated callback event_func_4506 processes event block(s) 3324_6. Actions/conditions:
//        3324_6: sets LClick to 1; sets CurrItem to ((Active*)get_single(hudItem_instances,
//        default_active_instance))->alterables->values.get(2); sets a game or interface text string; plus 1 more
//        actions.
void Frames::event_func_4506()
{
    // event 3324_6 : sets LClick to 1; sets CurrItem to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2); sets a game or interface text string; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3324_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_desk_32))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2002))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3324_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(16))) goto event_3324_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3324_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3324_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(647, str_curritem_1747, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(337, str_currentcontainer_1126))+str_slot_617+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1)), empty_string);
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        {
            loop_retrieve_mission_running = true;
            int times = int(((ListObject*)get_instance(missions_298_instances))->get_count());
            loop_retrieve_mission_index = 0;
            while (loop_retrieve_mission_index < times) {
                loop_retrieve_mission_6();
                if (!loop_retrieve_mission_running) break;
                loop_retrieve_mission_index++;
            }
        }
    }
    event_3324_6_end: ;
}
// Function purpose: generated callback event_func_4507 processes event block(s) 3327_6. Actions/conditions:
//        3327_6: sets From to Container; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions.
void Frames::event_func_4507()
{
    // event 3327_6 : sets From to Container; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3327_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_container_613))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3327_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(23))) goto event_3327_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3327_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3327_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(692, str_from_1842, str_container_613);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(387, str_clickeditemslot_1188, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1));
        {
            loop_find_open_inv_slot_running = true;
            int times = int(1);
            loop_find_open_inv_slot_index = 0;
            while (loop_find_open_inv_slot_index < times) {
                loop_find_open_inv_slot_6();
                if (!loop_find_open_inv_slot_running) break;
                loop_find_open_inv_slot_index++;
            }
        }
    }
    event_3327_6_end: ;
}
// Function purpose: generated callback event_func_4508 processes event block(s) 3328_6. Actions/conditions:
//        3328_6: sets From to Toilet; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions.
void Frames::event_func_4508()
{
    // event 3328_6 : sets From to Toilet; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3328_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_toilet_533))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3328_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(17))) goto event_3328_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3328_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3328_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(692, str_from_1842, str_toilet_533);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(387, str_clickeditemslot_1188, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1));
        {
            loop_find_open_inv_slot_running = true;
            int times = int(1);
            loop_find_open_inv_slot_index = 0;
            while (loop_find_open_inv_slot_index < times) {
                loop_find_open_inv_slot_6();
                if (!loop_find_open_inv_slot_running) break;
                loop_find_open_inv_slot_index++;
            }
        }
    }
    event_3328_6_end: ;
}
// Function purpose: generated callback event_func_4509 processes event block(s) 3329_6. Actions/conditions:
//        3329_6: sets From to Outfit; sets LClick to 1; sets FoundSlot to -1.
void Frames::event_func_4509()
{
    // event 3329_6 : sets From to Outfit; sets LClick to 1; sets FoundSlot to -1
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3329_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_outfit_505))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3329_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(19))) goto event_3329_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3329_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3329_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(692, str_from_1842, str_outfit_505);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, -1);
        {
            loop_find_open_inv_slot_running = true;
            int times = int(1);
            loop_find_open_inv_slot_index = 0;
            while (loop_find_open_inv_slot_index < times) {
                loop_find_open_inv_slot_6();
                if (!loop_find_open_inv_slot_running) break;
                loop_find_open_inv_slot_index++;
            }
        }
    }
    event_3329_6_end: ;
}
// Function purpose: generated callback event_func_4510 processes event block(s) 3330_6. Actions/conditions:
//        3330_6: sets From to Weapon; sets LClick to 1; sets FoundSlot to -1.
void Frames::event_func_4510()
{
    // event 3330_6 : sets From to Weapon; sets LClick to 1; sets FoundSlot to -1
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3330_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_weapon_704))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3330_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(19))) goto event_3330_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3330_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3330_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(692, str_from_1842, str_weapon_704);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, -1);
        {
            loop_find_open_inv_slot_running = true;
            int times = int(1);
            loop_find_open_inv_slot_index = 0;
            while (loop_find_open_inv_slot_index < times) {
                loop_find_open_inv_slot_6();
                if (!loop_find_open_inv_slot_running) break;
                loop_find_open_inv_slot_index++;
            }
        }
    }
    event_3330_6_end: ;
}
// Function purpose: generated callback event_func_4511 processes event block(s) 3361_6. Actions/conditions:
//        3361_6: sets LClick to 1; sets FoundSlot to -1; sets CurrentInvSlot to
//        ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1).
void Frames::event_func_4511()
{
    // event 3361_6 : sets LClick to 1; sets FoundSlot to -1; sets CurrentInvSlot to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1)
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3361_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3361_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(13))) goto event_3361_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3361_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3361_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(368, str_currentinvslot_1162, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1));
        {
            loop_find_open_loot_slot_running = true;
            int times = int(1);
            loop_find_open_loot_slot_index = 0;
            while (loop_find_open_loot_slot_index < times) {
                loop_find_open_loot_slot_6();
                if (!loop_find_open_loot_slot_running) break;
                loop_find_open_loot_slot_index++;
            }
        }
    }
    event_3361_6_end: ;
}
// Function purpose: generated callback event_func_4512 processes event block(s) 3368_6. Actions/conditions:
//        3368_6: sets LClick to 1; sets FoundSlot to -1; sets CurrentInvSlot to
//        ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1).
void Frames::event_func_4512()
{
    // event 3368_6 : sets LClick to 1; sets FoundSlot to -1; sets CurrentInvSlot to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1)
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3368_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3368_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(17))) goto event_3368_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3368_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3368_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(368, str_currentinvslot_1162, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1));
        {
            loop_find_open_toilet_slot_running = true;
            int times = int(1);
            loop_find_open_toilet_slot_index = 0;
            while (loop_find_open_toilet_slot_index < times) {
                loop_find_open_toilet_slot_6();
                if (!loop_find_open_toilet_slot_running) break;
                loop_find_open_toilet_slot_index++;
            }
        }
    }
    event_3368_6_end: ;
}
// Function purpose: generated callback event_func_4513 processes event block(s) 3373_6. Actions/conditions:
//        3373_6: sets LClick to 1; sets FoundSlot to -1; sets CurrentInvSlot to
//        ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1).
void Frames::event_func_4513()
{
    // event 3373_6 : sets LClick to 1; sets FoundSlot to -1; sets CurrentInvSlot to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1)
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3373_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3373_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(23))) goto event_3373_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3373_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3373_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(368, str_currentinvslot_1162, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1));
        {
            loop_find_open_container_slot_running = true;
            int times = int(1);
            loop_find_open_container_slot_index = 0;
            while (loop_find_open_container_slot_index < times) {
                loop_find_open_container_slot_6();
                if (!loop_find_open_container_slot_running) break;
                loop_find_open_container_slot_index++;
            }
        }
    }
    event_3373_6_end: ;
}
// Function purpose: generated callback event_func_4514 processes event block(s) 3378_6. Actions/conditions:
//        3378_6: sets LClick to 1; sets FoundSlot to -1; sets CurrentInvSlot to
//        ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1).
void Frames::event_func_4514()
{
    // event 3378_6 : sets LClick to 1; sets FoundSlot to -1; sets CurrentInvSlot to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1)
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3378_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3378_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(16))) goto event_3378_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3378_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3378_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(368, str_currentinvslot_1162, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1));
        {
            loop_find_open_desk_slot_running = true;
            int times = int(1);
            loop_find_open_desk_slot_index = 0;
            while (loop_find_open_desk_slot_index < times) {
                loop_find_open_desk_slot_6();
                if (!loop_find_open_desk_slot_running) break;
                loop_find_open_desk_slot_index++;
            }
        }
    }
    event_3378_6_end: ;
}
// Function purpose: generated callback event_func_4515 processes event block(s) 3383_6. Actions/conditions:
//        3383_6: sets LClick to 1; sets CurrentInvSlot to ((Active*)get_single(hudItem_instances,
//        default_active_instance))->alterables->values.get(1).
void Frames::event_func_4515()
{
    // event 3383_6 : sets LClick to 1; sets CurrentInvSlot to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1)
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3383_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3383_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(14))) goto event_3383_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3383_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3383_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(368, str_currentinvslot_1162, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1));
        {
            loop_give_npc_check_running = true;
            int times = int(1);
            loop_give_npc_check_index = 0;
            while (loop_give_npc_check_index < times) {
                loop_give_npc_check_6();
                if (!loop_give_npc_check_running) break;
                loop_give_npc_check_index++;
            }
        }
    }
    event_3383_6_end: ;
}
// Function purpose: generated callback event_func_4516 processes event block(s) 3386_6. Actions/conditions:
//        3386_6: sets LClick to 1; sets FoundSlot to -1; sets CurrentInvSlot to
//        ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1).
void Frames::event_func_4516()
{
    // event 3386_6 : sets LClick to 1; sets FoundSlot to -1; sets CurrentInvSlot to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1)
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3386_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3386_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(15))) goto event_3386_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3386_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3386_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(368, str_currentinvslot_1162, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1));
        {
            loop_find_open_craft_slot_running = true;
            int times = int(1);
            loop_find_open_craft_slot_index = 0;
            while (loop_find_open_craft_slot_index < times) {
                loop_find_open_craft_slot_6();
                if (!loop_find_open_craft_slot_running) break;
                loop_find_open_craft_slot_index++;
            }
        }
    }
    event_3386_6_end: ;
}
// Function purpose: generated callback event_func_4517 processes event block(s) 3390_6. Actions/conditions:
//        3390_6: sets LClick to 1; sets CurrItemID to ((Active*)get_single(hudItem_instances,
//        default_active_instance))->alterables->values.get(2); sets CurrentInvSlot to
//        ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1).
void Frames::event_func_4517()
{
    // event 3390_6 : sets LClick to 1; sets CurrItemID to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2); sets CurrentInvSlot to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1)
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3390_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3390_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(19))) goto event_3390_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3390_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3390_6_end;
        if (frame_time - restrict_3390_6 < 1.0) goto event_3390_6_end;
        restrict_3390_6 = frame_time;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(609, str_curritemid_1591, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(368, str_currentinvslot_1162, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1));
        {
            loop_flip_into_equip_running = true;
            int times = int(1);
            loop_flip_into_equip_index = 0;
            while (loop_flip_into_equip_index < times) {
                loop_flip_into_equip_6();
                if (!loop_flip_into_equip_running) break;
                loop_flip_into_equip_index++;
            }
        }
    }
    event_3390_6_end: ;
}
// Function purpose: generated callback event_func_4518 processes event block(s) 3399_6. Actions/conditions:
//        3399_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 8 more actions.
void Frames::event_func_4518()
{
    // event 3399_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 8 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3399_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3399_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3399_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (99))) goto event_3399_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3399_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_3399_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3399_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_3399_6_end;
        }
        compare_3399_6_0_end: ;
        cursor_178_instances.clear_selection();
        if (!check_not_overlap(cursor_178_instances, playerBase_instances)) goto event_3399_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(291, str_chippablewalls_967), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), ((Active*)get_instance(playerBase_instances))->layer->index+1))+str__96, 0)) != (-1))) goto event_3399_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3399_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3399_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(476, str_wallx_1351, (get_mouse_x()/MathHelper()/16)*16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(477, str_wally_1352, (get_mouse_y()/MathHelper()/16)*16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(478, str_allow_1353, 1);
        {
            loop_hang_poster_running = true;
            int times = int(1);
            loop_hang_poster_index = 0;
            while (loop_hang_poster_index < times) {
                loop_hang_poster_6();
                if (!loop_hang_poster_running) break;
                loop_hang_poster_index++;
            }
        }
    }
    event_3399_6_end: ;
}
// Function purpose: generated callback event_func_4519 processes event block(s) 3405_6. Actions/conditions:
//        3405_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 14 more actions.
void Frames::event_func_4519()
{
    // event 3405_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 14 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3405_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3405_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (174))) goto event_3405_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3405_6_end;
        if (!((((ArrayObject*)get_instance(fencearray_265_instances))->get_value(get_mouse_x()/MathHelper()/16, get_mouse_y()/MathHelper()/16, ((Active*)get_instance(playerBase_instances))->layer->index+1)) >= (100))) goto event_3405_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(292, str_cuttablefences_969), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), ((Active*)get_instance(playerBase_instances))->layer->index+1))+str__96, 0)) != (-1))) goto event_3405_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_3405_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3405_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3405_6_end;
        }
        compare_3405_6_0_end: ;
        cursor_178_instances.clear_selection();
        if (!check_not_overlap(cursor_178_instances, playerBase_instances)) goto event_3405_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3405_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3405_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(476, str_wallx_1351, (get_mouse_x()/MathHelper()/16)*16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(477, str_wally_1352, (get_mouse_y()/MathHelper()/16)*16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(659, str_walltile_1759, ((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), ((Active*)get_instance(playerBase_instances))->layer->index+1));
        ((ArrayObject*)get_instance(fencearray_265_instances))->set_value(90, get_mouse_x()/MathHelper()/16, get_mouse_y()/MathHelper()/16, ((Active*)get_instance(playerBase_instances))->layer->index+1);
        dust_223_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dust_223(0, 0), 1);
            dust_223_instances.add_back();
        }
        for (ObjectIterator it(dust_223_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
            ((Active*)*it)->set_x((((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351))+8);
            ((Active*)*it)->set_y((((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352))+8);
        }
        {
            loop_paint_fence_running = true;
            int times = int(1);
            loop_paint_fence_index = 0;
            while (loop_paint_fence_index < times) {
                loop_paint_fence_6();
                if (!loop_paint_fence_running) break;
                loop_paint_fence_index++;
            }
        }
        {
            loop_wallremovealert_running = true;
            int times = int(1);
            loop_wallremovealert_index = 0;
            while (loop_wallremovealert_index < times) {
                loop_wallremovealert_6();
                if (!loop_wallremovealert_running) break;
                loop_wallremovealert_index++;
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
        media.play_id(SOUND_THROW_4, 1-1);
    }
    event_3405_6_end: ;
}
// Function purpose: generated callback event_func_4520 processes event block(s) 3414_6. Actions/conditions:
//        3414_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 14 more actions.
void Frames::event_func_4520()
{
    // event 3414_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 14 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3414_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3414_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (41))) goto event_3414_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3414_6_end;
        if (!((((ArrayObject*)get_instance(wallsarray_232_instances))->get_value(get_mouse_x()/MathHelper()/16, get_mouse_y()/MathHelper()/16, ((Active*)get_instance(playerBase_instances))->layer->index+1)) >= (100))) goto event_3414_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(291, str_chippablewalls_967), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), ((Active*)get_instance(playerBase_instances))->layer->index+1))+str__96, 0)) != (-1))) goto event_3414_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_3414_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3414_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3414_6_end;
        }
        compare_3414_6_0_end: ;
        cursor_178_instances.clear_selection();
        if (!check_not_overlap(cursor_178_instances, playerBase_instances)) goto event_3414_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3414_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3414_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(476, str_wallx_1351, (get_mouse_x()/MathHelper()/16)*16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(477, str_wally_1352, (get_mouse_y()/MathHelper()/16)*16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(659, str_walltile_1759, ((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), ((Active*)get_instance(playerBase_instances))->layer->index+1));
        dust_223_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dust_223(0, 0), 1);
            dust_223_instances.add_back();
        }
        for (ObjectIterator it(dust_223_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
            ((Active*)*it)->set_x((((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351))+8);
            ((Active*)*it)->set_y((((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352))+8);
        }
        ((ArrayObject*)get_instance(wallsarray_232_instances))->set_value(90, get_mouse_x()/MathHelper()/16, get_mouse_y()/MathHelper()/16, ((Active*)get_instance(playerBase_instances))->layer->index+1);
        {
            loop_paint_wall_running = true;
            int times = int(1);
            loop_paint_wall_index = 0;
            while (loop_paint_wall_index < times) {
                loop_paint_wall_6();
                if (!loop_paint_wall_running) break;
                loop_paint_wall_index++;
            }
        }
        {
            loop_wallremovealert_running = true;
            int times = int(1);
            loop_wallremovealert_index = 0;
            while (loop_wallremovealert_index < times) {
                loop_wallremovealert_6();
                if (!loop_wallremovealert_running) break;
                loop_wallremovealert_index++;
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
        media.play_id(SOUND_THROW_4, 1-1);
    }
    event_3414_6_end: ;
}
// Function purpose: generated callback event_func_4521 processes event block(s) 3415_6. Actions/conditions:
//        3415_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 14 more actions.
void Frames::event_func_4521()
{
    // event 3415_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 14 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3415_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3415_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (116))) goto event_3415_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3415_6_end;
        if (!((((ArrayObject*)get_instance(wallsarray_232_instances))->get_value(get_mouse_x()/MathHelper()/16, get_mouse_y()/MathHelper()/16, ((Active*)get_instance(playerBase_instances))->layer->index+1)) >= (100))) goto event_3415_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(291, str_chippablewalls_967), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), ((Active*)get_instance(playerBase_instances))->layer->index+1))+str__96, 0)) != (-1))) goto event_3415_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_3415_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3415_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3415_6_end;
        }
        compare_3415_6_0_end: ;
        cursor_178_instances.clear_selection();
        if (!check_not_overlap(cursor_178_instances, playerBase_instances)) goto event_3415_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3415_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3415_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(476, str_wallx_1351, (get_mouse_x()/MathHelper()/16)*16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(477, str_wally_1352, (get_mouse_y()/MathHelper()/16)*16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(659, str_walltile_1759, ((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), ((Active*)get_instance(playerBase_instances))->layer->index+1));
        dust_223_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dust_223(0, 0), 1);
            dust_223_instances.add_back();
        }
        for (ObjectIterator it(dust_223_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
            ((Active*)*it)->set_x((((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351))+8);
            ((Active*)*it)->set_y((((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352))+8);
        }
        ((ArrayObject*)get_instance(wallsarray_232_instances))->set_value(0-(((AssociateArray*)get_instance(gameVariables_instances))->get_value(48, str_selecteditemhp_516)), get_mouse_x()/MathHelper()/16, get_mouse_y()/MathHelper()/16, ((Active*)get_instance(playerBase_instances))->layer->index+1);
        {
            loop_paint_wall_running = true;
            int times = int(1);
            loop_paint_wall_index = 0;
            while (loop_paint_wall_index < times) {
                loop_paint_wall_6();
                if (!loop_paint_wall_running) break;
                loop_paint_wall_index++;
            }
        }
        {
            loop_wallremovealert_running = true;
            int times = int(1);
            loop_wallremovealert_index = 0;
            while (loop_wallremovealert_index < times) {
                loop_wallremovealert_6();
                if (!loop_wallremovealert_running) break;
                loop_wallremovealert_index++;
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
        media.play_id(SOUND_THROW_4, 1-1);
    }
    event_3415_6_end: ;
}
// Function purpose: generated callback event_func_4522 processes event block(s) 3428_6. Actions/conditions:
//        3428_6: sets LClick to 1; sets the object's animation to 0; plays a sound or music track.
void Frames::event_func_4522()
{
    // event 3428_6 : sets LClick to 1; sets the object's animation to 0; plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3428_6_end;
        qualifier_6.clear_selection();
        for (QualifierIterator it(qualifier_6); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(1))) { it.deselect(); continue; }
        }
        if (!qualifier_6.has_selection()) goto event_3428_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3428_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (69))) goto event_3428_6_end;
        cursor_178_instances.clear_selection();
        if (!check_overlap(cursor_178_instances, qualifier_6)) goto event_3428_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3428_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3428_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3428_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        for (QualifierIterator it(qualifier_6); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
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
    event_3428_6_end: ;
}
// Function purpose: generated callback event_func_4523 processes event block(s) 3429_6. Actions/conditions:
//        3429_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_4523()
{
    // event 3429_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3429_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3429_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3429_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (69))) goto event_3429_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(56, str_new_tiles_554)) == (0))) goto event_3429_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3429_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), 2)) == (56))) goto event_3429_6_end;
        if (!((((ArrayObject*)get_instance(fencearray_265_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), 2)) < (100))) goto event_3429_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_3429_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3429_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_3429_6_end;
        }
        compare_3429_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3429_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3429_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(478, str_allow_1353, 1);
        {
            loop_hang_sheet_running = true;
            int times = int(1);
            loop_hang_sheet_index = 0;
            while (loop_hang_sheet_index < times) {
                loop_hang_sheet_6();
                if (!loop_hang_sheet_running) break;
                loop_hang_sheet_index++;
            }
        }
    }
    event_3429_6_end: ;
}
// Function purpose: generated callback event_func_4524 processes event block(s) 3430_6. Actions/conditions:
//        3430_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_4524()
{
    // event 3430_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3430_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3430_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3430_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (69))) goto event_3430_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(56, str_new_tiles_554)) == (1))) goto event_3430_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3430_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), 2)) == (130))) goto event_3430_6_end;
        if (!((((ArrayObject*)get_instance(fencearray_265_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), 2)) < (100))) goto event_3430_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_3430_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3430_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_3430_6_end;
        }
        compare_3430_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3430_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3430_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(478, str_allow_1353, 1);
        {
            loop_hang_sheet_running = true;
            int times = int(1);
            loop_hang_sheet_index = 0;
            while (loop_hang_sheet_index < times) {
                loop_hang_sheet_6();
                if (!loop_hang_sheet_running) break;
                loop_hang_sheet_index++;
            }
        }
    }
    event_3430_6_end: ;
}
// Function purpose: generated callback event_func_4525 processes event block(s) 3439_6. Actions/conditions:
//        3439_6: sets LClick to 1.
void Frames::event_func_4525()
{
    // event 3439_6 : sets LClick to 1
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3439_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3439_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (188))) goto event_3439_6_end;
        if (!((global_strings->get(0)) == (str_irongate_148))) goto event_3439_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3439_6_end;
        playerBase_instances.clear_selection();
        if (!((objects_in_zone(playerBase_instances, 1104, 1392, 1168, 1456)) > (0))) goto event_3439_6_end;
        mouse_9_instances.clear_selection();
        if (!((objects_in_zone(mouse_9_instances, 1104, 1392, 1168, 1456)) > (0))) goto event_3439_6_end;
        if (!((get_distance_int(((Active*)get_instance(playerBase_instances))->get_x(), ((Active*)get_instance(playerBase_instances))->get_y(), ((Active*)get_instance(mouse_9_instances))->get_x(), ((Active*)get_instance(mouse_9_instances))->get_y())) < (30))) goto event_3439_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3439_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3439_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3439_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_end_level_running = true;
            int times = int(1);
            loop_end_level_index = 0;
            while (loop_end_level_index < times) {
                loop_end_level_6();
                if (!loop_end_level_running) break;
                loop_end_level_index++;
            }
        }
    }
    event_3439_6_end: ;
}
// Function purpose: generated callback event_func_4526 processes event block(s) 3440_6. Actions/conditions:
//        3440_6: sets LClick to 1; sets the target object's direction; sets the selected object's numeric value to
//        2000; plus 7 more actions.
void Frames::event_func_4526()
{
    // event 3440_6 : sets LClick to 1; sets the target object's direction; sets the selected object's numeric value to 2000; plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3440_6_end;
        powergen_360_instances.clear_selection();
        for (ObjectIterator it(powergen_360_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!powergen_360_instances.has_selection()) goto event_3440_6_end;
        cursor_178_instances.clear_selection();
        if (!check_overlap(cursor_178_instances, powergen_360_instances)) goto event_3440_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (((Active*)get_single(powergen_360_instances, default_active_instance))->layer->index+1))) goto event_3440_6_end;
        for (ObjectIterator it(powergen_360_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!powergen_360_instances.has_selection()) goto event_3440_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(0))) goto event_3440_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3440_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3440_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_single(powergen_360_instances, it.current_index))->x + 16, ((Active*)get_single(powergen_360_instances, it.current_index))->y + 16));
        }
        for (ObjectIterator it(powergen_360_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 2000);
            ((Active*)*it)->force_animation(2);
        }
        metaldetector_231_instances.clear_selection();
        for (ObjectIterator it(metaldetector_231_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(6);
        }
        camera_237_instances.clear_selection();
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        media.play_id(SOUND_GENERATOR_19, 1-1);
    }
    event_3440_6_end: ;
}
// Function purpose: generated callback event_func_4527 processes event block(s) 3441_6. Actions/conditions:
//        3441_6: sets LClick to 1; sets the target object's direction; sets the selected object's numeric value to 0;
//        plus 5 more actions.
void Frames::event_func_4527()
{
    // event 3441_6 : sets LClick to 1; sets the target object's direction; sets the selected object's numeric value to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3441_6_end;
        powergen_360_instances.clear_selection();
        for (ObjectIterator it(powergen_360_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!powergen_360_instances.has_selection()) goto event_3441_6_end;
        cursor_178_instances.clear_selection();
        if (!check_overlap(cursor_178_instances, powergen_360_instances)) goto event_3441_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (((Active*)get_single(powergen_360_instances, default_active_instance))->layer->index+1))) goto event_3441_6_end;
        for (ObjectIterator it(powergen_360_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(2))) { it.deselect(); continue; }
        }
        if (!powergen_360_instances.has_selection()) goto event_3441_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(0))) goto event_3441_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3441_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3441_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_single(powergen_360_instances, it.current_index))->x + 16, ((Active*)get_single(powergen_360_instances, it.current_index))->y + 16));
        }
        for (ObjectIterator it(powergen_360_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->force_animation(0);
        }
        metaldetector_231_instances.clear_selection();
        for (ObjectIterator it(metaldetector_231_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        camera_237_instances.clear_selection();
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        media.play_id(SOUND_GENERATOR_19, 1-1);
    }
    event_3441_6_end: ;
}
// Function purpose: generated callback event_func_4528 processes event block(s) 3449_6. Actions/conditions:
//        3449_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_4528()
{
    // event 3449_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_3449_6_end;
            group_code_left_clicked_1 = false;
    
    }
    event_3449_6_end: ;
}
// Function purpose: generated callback event_func_4529 processes event block(s) 3451_6. Actions/conditions:
//        3451_6: checks scene is active; the event-specific game state condition is met; skips if scene is active;
//        this handler gates a game event without a direct value/obje.
void Frames::event_func_4529()
{
    // event 3451_6 : checks scene is active; the event-specific game state condition is met; skips if scene is active; this handler gates a game event without a direct value/obje
    {
        if (!(group_code_1)) goto event_3451_6_end;
        if (!(is_mouse_pressed(SDL_BUTTON_RIGHT))) goto event_3451_6_end;
        if (group_code_1 && group_code_right_clicked_1) goto event_3451_6_end;
        if (!group_code_right_clicked_1) {
            group_code_right_clicked_1 = true;
        }
    }
    event_3451_6_end: ;
}
// Function purpose: generated callback event_func_4530 processes event block(s) 3452_6. Actions/conditions:
//        3452_6: checks scene is active; the event-specific game state condition is met; skips if scene is active;
//        this handler gates a game event without a direct value/obje.
void Frames::event_func_4530()
{
    // event 3452_6 : checks scene is active; the event-specific game state condition is met; skips if scene is active; this handler gates a game event without a direct value/obje
    {
        if (!(group_code_1)) goto event_3452_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_RIGHT))) goto event_3452_6_end;
        if (group_code_1 && group_code_right_clicked_1) goto event_3452_6_end;
        if (!group_code_right_clicked_1) {
            group_code_right_clicked_1 = true;
        }
    }
    event_3452_6_end: ;
}
// Function purpose: generated callback event_func_4531 processes event block(s) 3453_6. Actions/conditions:
//        3453_6: sets RClick to 1; sets DropSlot to ((Active*)get_single(hudItem_instances,
//        default_active_instance))->alterables->values.get(1); sets DropItem to
//        ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2); plus 11
//        more actions.
void Frames::event_func_4531()
{
    // event 3453_6 : sets RClick to 1; sets DropSlot to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1); sets DropItem to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2); plus 11 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3453_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3453_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(750, str_rclick_1926)) == (0))) goto event_3453_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3453_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(750, str_rclick_1926, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(543, str_dropslot_1445, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(540, str_dropitem_1441, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(545, str_drophp_1447, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(544, str_dropnameappend_1446, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->strings.get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(542, str_ok_1444, 1);
        savecheckground_351_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_savecheckground_351(0, 0), 1);
            savecheckground_351_instances.add_back();
        }
        for (ObjectIterator it(savecheckground_351_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((((Active*)get_instance(playerBase_instances))->get_x())/MathHelper()/16)*16);
            ((Active*)*it)->set_y(((((Active*)get_instance(playerBase_instances))->get_y())/MathHelper()/16)*16);
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
        }
        {
            loop_dropitem_running = true;
            int times = int(1);
            loop_dropitem_index = 0;
            while (loop_dropitem_index < times) {
                loop_dropitem_6();
                if (!loop_dropitem_running) break;
                loop_dropitem_index++;
            }
        }
        savecheckground_351_instances.clear_selection();
        for (ObjectIterator it(savecheckground_351_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3453_6_end: ;
}
// Function purpose: generated callback event_func_4532 processes event block(s) 3467_6. Actions/conditions:
//        3467_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 9 more actions.
void Frames::event_func_4532()
{
    // event 3467_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 9 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3467_6_end;
        ssreindeer_504_instances.clear_selection();
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
        }
        if (!ssreindeer_504_instances.has_selection()) goto event_3467_6_end;
        cursor_178_instances.clear_selection();
        if (!check_overlap(cursor_178_instances, ssreindeer_504_instances)) goto event_3467_6_end;
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!ssreindeer_504_instances.has_selection()) goto event_3467_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_18)) goto event_3467_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_3467_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(ssreindeer_504_instances));
            if (obj1 == NULL) goto compare_3467_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3467_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3467_6_end;
        }
        compare_3467_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3467_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3467_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(291, str_chippablewalls_967), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) == (-1))) goto event_3467_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(750, str_rclick_1926)) == (0))) goto event_3467_6_end;
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(750, str_rclick_1926, 1);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(151, str_carrying_724, 3);
        media.play_id(SOUND_PICKUP_3, 1-1);
    }
    event_3467_6_end: ;
}
// Function purpose: generated callback event_func_4533 processes event block(s) 3468_6. Actions/conditions:
//        3468_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 12 more actions.
void Frames::event_func_4533()
{
    // event 3468_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 12 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3468_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_RIGHT))) goto event_3468_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (3))) goto event_3468_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_3468_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3468_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 22)) goto event_3468_6_end;
        }
        compare_3468_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3468_6_end;
        if (((Active*)get_instance(cursor_178_instances))->overlaps_background()) goto event_3468_6_end;
        cursor_178_instances.clear_selection();
        if (!check_not_overlap(cursor_178_instances, qualifier_19)) goto event_3468_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_7)) goto event_3468_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_6)) goto event_3468_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_4)) goto event_3468_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_22)) goto event_3468_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_8)) goto event_3468_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_18)) goto event_3468_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(291, str_chippablewalls_967), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(cursor_178_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(cursor_178_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) == (-1))) goto event_3468_6_end;
        ssreindeer_504_instances.clear_selection();
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!ssreindeer_504_instances.has_selection()) goto event_3468_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3468_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(750, str_rclick_1926)) == (0))) goto event_3468_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(750, str_rclick_1926, 1);
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            if (parent == NULL) goto pos_end_3468_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_3468_6_1: ;
        }
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(151, str_carrying_724, 0);
        FrameObject * single_instance_3468_6_2; single_instance_3468_6_2 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_3468_6_2 == NULL)
                    single_instance_3468_6_2 = new_obj;
            }
        }
        ((Active*)get_instance(cursor_178_instances))->force_animation(0);
        media.play_id(SOUND_THROW_4, 1-1);
    }
    event_3468_6_end: ;
}
// Function purpose: generated callback event_func_4534 processes event block(s) 3469_6. Actions/conditions:
//        3469_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 9 more actions.
void Frames::event_func_4534()
{
    // event 3469_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 9 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3469_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3469_6_end;
        cursor_178_instances.clear_selection();
        if (!check_overlap(cursor_178_instances, qualifier_14)) goto event_3469_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1000))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3469_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_18)) goto event_3469_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_3469_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(qualifier_14));
            if (obj1 == NULL) goto compare_3469_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3469_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3469_6_end;
        }
        compare_3469_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3469_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3469_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(291, str_chippablewalls_967), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) == (-1))) goto event_3469_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(750, str_rclick_1926)) == (0))) goto event_3469_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(750, str_rclick_1926, 1);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(151, str_carrying_724, 2);
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1000);
        }
        media.play_id(SOUND_PICKUP_3, 1-1);
    }
    event_3469_6_end: ;
}
// Function purpose: generated callback event_func_4535 processes event block(s) 3470_6. Actions/conditions:
//        3470_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 12 more actions.
void Frames::event_func_4535()
{
    // event 3470_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 12 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3470_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_RIGHT))) goto event_3470_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (2))) goto event_3470_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_3470_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3470_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 22)) goto event_3470_6_end;
        }
        compare_3470_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3470_6_end;
        if (((Active*)get_instance(cursor_178_instances))->overlaps_background()) goto event_3470_6_end;
        cursor_178_instances.clear_selection();
        if (!check_not_overlap(cursor_178_instances, qualifier_19)) goto event_3470_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_7)) goto event_3470_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_6)) goto event_3470_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_4)) goto event_3470_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_22)) goto event_3470_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_8)) goto event_3470_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_18)) goto event_3470_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(291, str_chippablewalls_967), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(cursor_178_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(cursor_178_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) == (-1))) goto event_3470_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1000))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3470_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3470_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(750, str_rclick_1926)) == (0))) goto event_3470_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(750, str_rclick_1926, 1);
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            if (parent == NULL) goto pos_end_3470_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_3470_6_1: ;
        }
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1000);
        }
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(151, str_carrying_724, 0);
        FrameObject * single_instance_3470_6_2; single_instance_3470_6_2 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_3470_6_2 == NULL)
                    single_instance_3470_6_2 = new_obj;
            }
        }
        ((Active*)get_instance(cursor_178_instances))->force_animation(0);
        media.play_id(SOUND_THROW_4, 1-1);
    }
    event_3470_6_end: ;
}
// Function purpose: generated callback event_func_4536 processes event block(s) 3471_6. Actions/conditions:
//        3471_6: sets InDoor to 0.
void Frames::event_func_4536()
{
    // event 3471_6 : sets InDoor to 0
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3471_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_RIGHT))) goto event_3471_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(935, str_indoor_2273, 0);
    }
    event_3471_6_end: ;
}
// Function purpose: generated callback event_func_4537 processes event block(s) 3472_6. Actions/conditions:
//        3472_6: sets InDoor to 1.
void Frames::event_func_4537()
{
    // event 3472_6 : sets InDoor to 1
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3472_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_RIGHT))) goto event_3472_6_end;
        playerBase_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_8)) goto event_3472_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(935, str_indoor_2273, 1);
    }
    event_3472_6_end: ;
}
// Function purpose: generated callback event_func_4538 processes event block(s) 3473_6. Actions/conditions:
//        3473_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 10 more actions.
void Frames::event_func_4538()
{
    // event 3473_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 10 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3473_6_end;
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1000))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_3473_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(qualifier_20));
            if (obj1 == NULL) goto compare_3473_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3473_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3473_6_end;
        }
        compare_3473_6_0_end: ;
        if (!check_not_overlap(qualifier_20, playerBase_instances)) goto event_3473_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_3473_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(750, str_rclick_1926)) == (0))) goto event_3473_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(935, str_indoor_2273)) == (0))) goto event_3473_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_18)) goto event_3473_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3473_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(291, str_chippablewalls_967), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) == (-1))) goto event_3473_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3473_6_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1000);
            ((Active*)*it)->set_layer(3-1);
        }
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(151, str_carrying_724, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(750, str_rclick_1926, 1);
        media.play_id(SOUND_PICKUP_3, 1-1);
    }
    event_3473_6_end: ;
}
// Function purpose: generated callback event_func_4539 processes event block(s) 3474_6. Actions/conditions:
//        3474_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 13 more actions.
void Frames::event_func_4539()
{
    // event 3474_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 13 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3474_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_RIGHT))) goto event_3474_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (1))) goto event_3474_6_end;
        {
            FrameObject * targetObject;
            FrameObject * playerObject;
            int targetX, targetY, playerX, playerY;
            targetObject = ((Active*)get_instance(cursor_178_instances));
            if (targetObject == NULL) goto compare_3474_6_0_end;
            targetX = targetObject->get_x() + 8;
            targetY = targetObject->get_y() + 8;
            playerObject = ((Active*)get_instance(playerBase_instances));
            if (playerObject == NULL) goto compare_3474_6_0_end;
            playerX = playerObject->get_x() + 0;
            playerY = playerObject->get_y() + 0;
            if (!(vitaDeskPlacementReach(targetX, targetY, playerX, playerY, 22, playerObject))) goto event_3474_6_end;
        }
        compare_3474_6_0_end: ;
        if (((Active*)get_instance(cursor_178_instances))->overlaps_background()) goto event_3474_6_end;
        cursor_178_instances.clear_selection();
        if (!check_not_overlap(cursor_178_instances, qualifier_7)) goto event_3474_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_6)) goto event_3474_6_end;
        if (!check_not_overlap(cursor_178_instances, items_184_instances)) goto event_3474_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_8)) goto event_3474_6_end;
        if (!check_not_overlap(cursor_178_instances, playerBase_instances)) goto event_3474_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_22)) goto event_3474_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_19)) goto event_3474_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(291, str_chippablewalls_967), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(cursor_178_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(cursor_178_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) == (-1))) goto event_3474_6_end;
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1000))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_3474_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3474_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3474_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(750, str_rclick_1926)) == (0))) goto event_3474_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(750, str_rclick_1926, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(151, str_carrying_724, 0);
        FrameObject * single_instance_3474_6_1; single_instance_3474_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_3474_6_1 == NULL)
                    single_instance_3474_6_1 = new_obj;
            }
        }
        ((Active*)get_instance(cursor_178_instances))->force_animation(0);
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->set_layer(2-1);
        }
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            if (parent == NULL) goto pos_end_3474_6_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3474_6_2: ;
        }
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1000);
        }
        media.play_id(SOUND_THROW_4, 1-1);
    }
    event_3474_6_end: ;
}
// Function purpose: generated callback event_func_4540 processes event block(s) 3475_6. Actions/conditions:
//        3475_6: disables flag -10 (legacy object-specific state; original label was not retained) on the selected
//        object.
void Frames::event_func_4540()
{
    // event 3475_6 : disables flag -10 (legacy object-specific state; original label was not retained) on the selected object
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3475_6_end;
        items_184_instances.clear_selection();
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(-10))) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_3475_6_end;
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(-10);
        }
    }
    event_3475_6_end: ;
}
// Function purpose: generated callback event_func_4541 processes event block(s) 3476_6. Actions/conditions:
//        3476_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 11 more actions.
void Frames::event_func_4541()
{
    // event 3476_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 11 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3476_6_end;
        items_184_instances.clear_selection();
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_3476_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(items_184_instances));
            if (obj1 == NULL) goto compare_3476_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3476_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3476_6_end;
        }
        compare_3476_6_0_end: ;
        if (!((((Active*)get_single(items_184_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_3476_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3476_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(750, str_rclick_1926)) == (0))) goto event_3476_6_end;
        if (not_always_3476_6 > loop_count) {
            not_always_3476_6 = loop_count + 2;
            goto event_3476_6_end;
        }
        not_always_3476_6 = loop_count + 2;
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(-10);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(750, str_rclick_1926, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, ((Active*)get_single(items_184_instances, default_active_instance))->alterables->values.get(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(480, str_itemhp_1355, ((Active*)get_single(items_184_instances, default_active_instance))->alterables->values.get(7));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(481, str_itemillegal_1356, ((Active*)get_single(items_184_instances, default_active_instance))->alterables->values.get(3));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(479, str_offfloor_1354, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(102, str_itemnameappend_636, ((Active*)get_single(items_184_instances, default_active_instance))->alterables->strings.get(1));
        {
            loop_pickupitem_running = true;
            int times = int(1);
            loop_pickupitem_index = 0;
            while (loop_pickupitem_index < times) {
                loop_pickupitem_6();
                if (!loop_pickupitem_running) break;
                loop_pickupitem_index++;
            }
        }
    }
    event_3476_6_end: ;
}
// Function purpose: generated callback event_func_4542 processes event block(s) 3479_6. Actions/conditions:
//        3479_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_4542()
{
    // event 3479_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3479_6_end;
        active9_291_instances.clear_selection();
        for (ObjectIterator it(active9_291_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
        }
        if (!active9_291_instances.has_selection()) goto event_3479_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(active9_291_instances));
            if (obj1 == NULL) goto compare_3479_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3479_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3479_6_end;
        }
        compare_3479_6_0_end: ;
        if (!((((Active*)get_single(active9_291_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_3479_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, active9_291_instances)) goto event_3479_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3479_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3479_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(750, str_rclick_1926)) == (0))) goto event_3479_6_end;
        for (ObjectIterator it(active9_291_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(750, str_rclick_1926, 1);
        {
            loop_pickup_steps_check_running = true;
            int times = int(1);
            loop_pickup_steps_check_index = 0;
            while (loop_pickup_steps_check_index < times) {
                loop_pickup_steps_check_6();
                if (!loop_pickup_steps_check_running) break;
                loop_pickup_steps_check_index++;
            }
        }
    }
    event_3479_6_end: ;
}
// Function purpose: generated callback event_func_4543 processes event block(s) 3482_6. Actions/conditions:
//        3482_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 8 more actions.
void Frames::event_func_4543()
{
    // event 3482_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 8 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3482_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_RIGHT))) goto event_3482_6_end;
        if (!((((ArrayObject*)get_instance(wallsarray_232_instances))->get_value(get_mouse_x()/MathHelper()/16, get_mouse_y()/MathHelper()/16, ((Active*)get_instance(playerBase_instances))->layer->index+1)) < (0))) goto event_3482_6_end;
        if (!(((Active*)get_instance(cursor_178_instances))->overlaps_background())) goto event_3482_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_3482_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3482_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3482_6_end;
        }
        compare_3482_6_0_end: ;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3482_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3482_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(750, str_rclick_1926)) == (0))) goto event_3482_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(750, str_rclick_1926, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 116);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(481, str_itemillegal_1356, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(482, str_newitemhp_1357, (((ArrayObject*)get_instance(wallsarray_232_instances))->get_value(get_mouse_x()/MathHelper()/16, get_mouse_y()/MathHelper()/16, ((Active*)get_instance(playerBase_instances))->layer->index+1)*-1)-20);
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
        {
            loop_grab_fakewall_check_running = true;
            int times = int(1);
            loop_grab_fakewall_check_index = 0;
            while (loop_grab_fakewall_check_index < times) {
                loop_grab_fakewall_check_6();
                if (!loop_grab_fakewall_check_running) break;
                loop_grab_fakewall_check_index++;
            }
        }
    }
    event_3482_6_end: ;
}
// Function purpose: generated callback event_func_4544 processes event block(s) 3485_6. Actions/conditions:
//        3485_6: sets the selected object's numeric value to 0.
void Frames::event_func_4544()
{
    // event 3485_6 : sets the selected object's numeric value to 0
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3485_6_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) < (0))) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto event_3485_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3485_6_end;
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
        }
    }
    event_3485_6_end: ;
}
// Function purpose: generated callback event_func_4545 processes event block(s) 3486_6. Actions/conditions:
//        3486_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 8 more actions.
void Frames::event_func_4545()
{
    // event 3486_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 8 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3486_6_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto event_3486_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(ventCover_instances));
            if (obj1 == NULL) goto compare_3486_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_qualifier(qualifier_2));
            if (obj2 == NULL) goto compare_3486_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3486_6_end;
        }
        compare_3486_6_0_end: ;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3486_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3486_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(750, str_rclick_1926)) == (0))) goto event_3486_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(750, str_rclick_1926, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 117);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(481, str_itemillegal_1356, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(482, str_newitemhp_1357, ((Active*)get_single(ventCover_instances, default_active_instance))->alterables->values.get(11));
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
        {
            loop_grab_vent_check_running = true;
            int times = int(1);
            loop_grab_vent_check_index = 0;
            while (loop_grab_vent_check_index < times) {
                loop_grab_vent_check_6();
                if (!loop_grab_vent_check_running) break;
                loop_grab_vent_check_index++;
            }
        }
    }
    event_3486_6_end: ;
}
// Function purpose: generated callback event_func_4546 processes event block(s) 3488_6. Actions/conditions:
//        3488_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 9 more actions.
void Frames::event_func_4546()
{
    // event 3488_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 9 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3488_6_end;
        dummies_374_instances.clear_selection();
        for (ObjectIterator it(dummies_374_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
        }
        if (!dummies_374_instances.has_selection()) goto event_3488_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(dummies_374_instances));
            if (obj1 == NULL) goto compare_3488_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3488_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_3488_6_end;
        }
        compare_3488_6_0_end: ;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3488_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3488_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3488_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(750, str_rclick_1926)) == (0))) goto event_3488_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(750, str_rclick_1926, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 126);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(481, str_itemillegal_1356, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(480, str_itemhp_1355, -100);
        FrameObject * single_instance_3488_6_1; single_instance_3488_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(dummies_374_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 16), parent->layer);
                if (single_instance_3488_6_1 == NULL)
                    single_instance_3488_6_1 = new_obj;
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
        {
            loop_grabdummy_check_running = true;
            int times = int(1);
            loop_grabdummy_check_index = 0;
            while (loop_grabdummy_check_index < times) {
                loop_grabdummy_check_6();
                if (!loop_grabdummy_check_running) break;
                loop_grabdummy_check_index++;
            }
        }
    }
    event_3488_6_end: ;
}
// Function purpose: generated callback event_func_4547 processes event block(s) 3490_6. Actions/conditions:
//        3490_6: sets OverBed to 0; sets DummyHere to 0.
void Frames::event_func_4547()
{
    // event 3490_6 : sets OverBed to 0; sets DummyHere to 0
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3490_6_end;
        qualifier_6.clear_selection();
        for (QualifierIterator it(qualifier_6); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
        }
        if (!qualifier_6.has_selection()) goto event_3490_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(936, str_overbed_2274, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(937, str_dummyhere_2275, 0);
    }
    event_3490_6_end: ;
}
// Function purpose: generated callback event_func_4548 processes event block(s) 3491_6. Actions/conditions:
//        3491_6: sets DummyHere to 1.
void Frames::event_func_4548()
{
    // event 3491_6 : sets DummyHere to 1
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3491_6_end;
        qualifier_6.clear_selection();
        for (QualifierIterator it(qualifier_6); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
        }
        if (!qualifier_6.has_selection()) goto event_3491_6_end;
        dummies_374_instances.clear_selection();
        for (ObjectIterator it(dummies_374_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!dummies_374_instances.has_selection()) goto event_3491_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(937, str_dummyhere_2275, 1);
    }
    event_3491_6_end: ;
}
// Function purpose: generated callback event_func_4549 processes event block(s) 3492_6. Actions/conditions:
//        3492_6: saves the current object selection; saves the current object selection; sets OverBed to 1.
void Frames::event_func_4549()
{
    // event 3492_6 : saves the current object selection; saves the current object selection; sets OverBed to 1
    bool or_result_3492_6 = false;
    bool or_temp_result_3492_6_0 = false;
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto or_event_3492_6_0_end;
        bedplayer_338_instances.clear_selection();
        for (ObjectIterator it(bedplayer_338_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
        }
        if (!bedplayer_338_instances.has_selection()) goto or_event_3492_6_0_end;
        or_result_3492_6 = true;
        or_temp_result_3492_6_0 = true;
    }
    or_event_3492_6_0_end: ;
    bedplayer_338_instances.clear_saved_selection();
    if (or_temp_result_3492_6_0) {
        bedplayer_338_instances.save_selection();
    }
    // event 3492_6 : saves the current object selection; saves the current object selection; sets OverBed to 1
    bool or_temp_result_3492_6_1 = false;
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto or_event_3492_6_1_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto or_event_3492_6_1_end;
        or_result_3492_6 = true;
        or_temp_result_3492_6_1 = true;
        or_event_3492_6_1_end: ;
        inmateBed_instances.clear_saved_selection();
        if (or_temp_result_3492_6_1) {
            inmateBed_instances.save_selection();
        }
        if (!or_result_3492_6) goto or_final_or_event_3492_6_1_end;
        bedplayer_338_instances.empty_selection();
        inmateBed_instances.empty_selection();
        if (or_temp_result_3492_6_1) {
            inmateBed_instances.restore_selection();
        }
        if (or_temp_result_3492_6_0) {
            bedplayer_338_instances.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(936, str_overbed_2274, 1);
        }
    }
    or_final_or_event_3492_6_1_end: ;
}
// Function purpose: generated callback event_func_4550 processes event block(s) 3493_6. Actions/conditions:
//        3493_6: sets the object's animation to 3; sets the selected object's horizontal position to
//        (get_mouse_x()/MathHelper()/16)*16; sets the selected object's vertical position to
//        (get_mouse_y()/MathHelper()/16)*16.
void Frames::event_func_4550()
{
    // event 3493_6 : sets the object's animation to 3; sets the selected object's horizontal position to (get_mouse_x()/MathHelper()/16)*16; sets the selected object's vertical position to (get_mouse_y()/MathHelper()/16)*16
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3493_6_end;
        qualifier_6.clear_selection();
        for (QualifierIterator it(qualifier_6); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
        }
        if (!qualifier_6.has_selection()) goto event_3493_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3493_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3493_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(750, str_rclick_1926)) == (0))) goto event_3493_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(936, str_overbed_2274)) == (1))) goto event_3493_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(937, str_dummyhere_2275)) == (0))) goto event_3493_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3493_6_end;
        ((Active*)get_instance(cursor_178_instances))->force_animation(3);
        ((Active*)get_instance(cursor_178_instances))->set_x((get_mouse_x()/MathHelper()/16)*16);
        ((Active*)get_instance(cursor_178_instances))->set_y((get_mouse_y()/MathHelper()/16)*16);
    }
    event_3493_6_end: ;
}
// Function purpose: generated callback event_func_4551 processes event block(s) 3494_6. Actions/conditions:
//        3494_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 10 more actions.
void Frames::event_func_4551()
{
    // event 3494_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 10 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3494_6_end;
        qualifier_6.clear_selection();
        for (QualifierIterator it(qualifier_6); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!qualifier_6.has_selection()) goto event_3494_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(qualifier_6));
            if (obj1 == NULL) goto compare_3494_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3494_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_3494_6_end;
        }
        compare_3494_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3494_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3494_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(750, str_rclick_1926)) == (0))) goto event_3494_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(936, str_overbed_2274)) == (1))) goto event_3494_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(937, str_dummyhere_2275)) == (0))) goto event_3494_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3494_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(750, str_rclick_1926, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 69);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(481, str_itemillegal_1356, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(480, str_itemhp_1355, -100);
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
        {
            loop_bedsheet_check_running = true;
            int times = int(1);
            loop_bedsheet_check_index = 0;
            while (loop_bedsheet_check_index < times) {
                loop_bedsheet_check_6();
                if (!loop_bedsheet_check_running) break;
                loop_bedsheet_check_index++;
            }
        }
        ((Active*)get_instance(cursor_178_instances))->force_animation(0);
        media.play_id(SOUND_STEP_1, 1-1);
    }
    event_3494_6_end: ;
}
// Function purpose: generated callback event_func_4552 processes event block(s) 3496_6. Actions/conditions:
//        3496_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 10 more actions.
void Frames::event_func_4552()
{
    // event 3496_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 10 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3496_6_end;
        qualifier_6.clear_selection();
        for (QualifierIterator it(qualifier_6); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(1))) { it.deselect(); continue; }
        }
        if (!qualifier_6.has_selection()) goto event_3496_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(qualifier_6));
            if (obj1 == NULL) goto compare_3496_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3496_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_3496_6_end;
        }
        compare_3496_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3496_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3496_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(936, str_overbed_2274)) == (1))) goto event_3496_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(750, str_rclick_1926)) == (0))) goto event_3496_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(937, str_dummyhere_2275)) == (0))) goto event_3496_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3496_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(750, str_rclick_1926, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 95);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(481, str_itemillegal_1356, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(480, str_itemhp_1355, -100);
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
        {
            loop_pillow_check_running = true;
            int times = int(1);
            loop_pillow_check_index = 0;
            while (loop_pillow_check_index < times) {
                loop_pillow_check_6();
                if (!loop_pillow_check_running) break;
                loop_pillow_check_index++;
            }
        }
        ((Active*)get_instance(cursor_178_instances))->force_animation(0);
        media.play_id(SOUND_STEP_1, 1-1);
    }
    event_3496_6_end: ;
}
// Function purpose: generated callback event_func_4553 processes event block(s) 3498_6. Actions/conditions:
//        3498_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 11 more actions.
void Frames::event_func_4553()
{
    // event 3498_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 11 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3498_6_end;
        sheetsposters_294_instances.clear_selection();
        for (ObjectIterator it(sheetsposters_294_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
        }
        if (!sheetsposters_294_instances.has_selection()) goto event_3498_6_end;
        cursor_178_instances.clear_selection();
        if (!check_overlap(cursor_178_instances, sheetsposters_294_instances)) goto event_3498_6_end;
        for (ObjectIterator it(sheetsposters_294_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!sheetsposters_294_instances.has_selection()) goto event_3498_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(sheetsposters_294_instances));
            if (obj1 == NULL) goto compare_3498_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3498_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_3498_6_end;
        }
        compare_3498_6_0_end: ;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3498_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3498_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3498_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(750, str_rclick_1926)) == (0))) goto event_3498_6_end;
        FrameObject * single_instance_3498_6_1; single_instance_3498_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(sheetsposters_294_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_3498_6_1 == NULL)
                    single_instance_3498_6_1 = new_obj;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(90, str_grabtype_597, str_sheet_2276);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(91, str_sheetid_599, ((Active*)get_single(sheetsposters_294_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(750, str_rclick_1926, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 69);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(481, str_itemillegal_1356, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(480, str_itemhp_1355, -100);
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
        {
            loop_grabsheet_check_running = true;
            int times = int(1);
            loop_grabsheet_check_index = 0;
            while (loop_grabsheet_check_index < times) {
                loop_grabsheet_check_6();
                if (!loop_grabsheet_check_running) break;
                loop_grabsheet_check_index++;
            }
        }
    }
    event_3498_6_end: ;
}
// Function purpose: generated callback event_func_4554 processes event block(s) 3499_6. Actions/conditions:
//        3499_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 11 more actions.
void Frames::event_func_4554()
{
    // event 3499_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 11 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3499_6_end;
        sheetsposters_294_instances.clear_selection();
        for (ObjectIterator it(sheetsposters_294_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
        }
        if (!sheetsposters_294_instances.has_selection()) goto event_3499_6_end;
        cursor_178_instances.clear_selection();
        if (!check_overlap(cursor_178_instances, sheetsposters_294_instances)) goto event_3499_6_end;
        for (ObjectIterator it(sheetsposters_294_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(1))) { it.deselect(); continue; }
        }
        if (!sheetsposters_294_instances.has_selection()) goto event_3499_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(sheetsposters_294_instances));
            if (obj1 == NULL) goto compare_3499_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3499_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_3499_6_end;
        }
        compare_3499_6_0_end: ;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3499_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3499_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3499_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(750, str_rclick_1926)) == (0))) goto event_3499_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(90, str_grabtype_597, str_poster_598);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(91, str_sheetid_599, ((Active*)get_single(sheetsposters_294_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(750, str_rclick_1926, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 99);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(481, str_itemillegal_1356, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(480, str_itemhp_1355, -100);
        FrameObject * single_instance_3499_6_1; single_instance_3499_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(sheetsposters_294_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_3499_6_1 == NULL)
                    single_instance_3499_6_1 = new_obj;
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
        {
            loop_grabsheet_check_running = true;
            int times = int(1);
            loop_grabsheet_check_index = 0;
            while (loop_grabsheet_check_index < times) {
                loop_grabsheet_check_6();
                if (!loop_grabsheet_check_running) break;
                loop_grabsheet_check_index++;
            }
        }
    }
    event_3499_6_end: ;
}
// Function purpose: generated callback event_func_4555 processes event block(s) 3503_6. Actions/conditions:
//        3503_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_4555()
{
    // event 3503_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_3503_6_end;
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3503_6_end;
            group_code_right_clicked_1 = false;
    
    }
    event_3503_6_end: ;
}
// Function purpose: generated callback event_func_4556 processes event block(s) 3508_6. Actions/conditions:
//        3508_6: changes a stored game value.
void Frames::event_func_4556()
{
    VITA_LEGACY_EVENT();
    // event 3508_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_3508_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(148, str_looted_721)) > (0))) goto event_3508_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3508_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(148, str_looted_721, 1);
    }
    event_3508_6_end: ;
}
// Function purpose: generated callback event_func_4557 processes event block(s) 3509_6. Actions/conditions:
//        3509_6: sets the selected object's direction to ((Active*)get_single(canteenchair_312_instances,
//        it.current_index, default_active_instance))->get_direction().
void Frames::event_func_4557()
{
    // event 3509_6 : sets the selected object's direction to ((Active*)get_single(canteenchair_312_instances, it.current_index, default_active_instance))->get_direction()
    {
        if (!(group_code_1)) goto event_3509_6_end;
        playerBase_instances.clear_selection();
        canteenchair_312_instances.clear_selection();
        if (!check_overlap(playerBase_instances, canteenchair_312_instances)) goto event_3509_6_end;
        for (ObjectIterator it(canteenchair_312_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!canteenchair_312_instances.has_selection()) goto event_3509_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(canteenchair_312_instances, it.current_index, default_active_instance))->get_direction());
        }
    }
    event_3509_6_end: ;
}
// Function purpose: generated callback event_func_4558 processes event block(s) 3510_6. Actions/conditions:
//        3510_6: sets the selected object's direction to 24.
void Frames::event_func_4558()
{
    // event 3510_6 : sets the selected object's direction to 24
    {
        if (!(group_code_1)) goto event_3510_6_end;
        playerBase_instances.clear_selection();
        dtafvillainchair_500_instances.clear_selection();
        if (!check_overlap(playerBase_instances, dtafvillainchair_500_instances)) goto event_3510_6_end;
        for (ObjectIterator it(dtafvillainchair_500_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!dtafvillainchair_500_instances.has_selection()) goto event_3510_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
    }
    event_3510_6_end: ;
}
// Function purpose: generated callback event_func_4559 processes event block(s) 3511_6. Actions/conditions:
//        3511_6: sets SleepMenu to 0.
void Frames::event_func_4559()
{
    // event 3511_6 : sets SleepMenu to 0
    {
        if (!(group_code_1)) goto event_3511_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(338, str_sleepmenu_1128)) != (0))) goto event_3511_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, bedplayer_338_instances)) goto event_3511_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(338, str_sleepmenu_1128, 0);
    }
    event_3511_6_end: ;
}
// Function purpose: generated callback event_func_4560 processes event block(s) 3512_6. Actions/conditions:
//        3512_6: sets the object position in the world; sets the object's animation to 8; sets the selected object's
//        direction to ((Active*)get_single(qualifier_6, it.current_index, default_active_instance))->get_direction().
void Frames::event_func_4560()
{
    // event 3512_6 : sets the object position in the world; sets the object's animation to 8; sets the selected object's direction to ((Active*)get_single(qualifier_6, it.current_index, default_active_instance))->get_direction()
    {
        if (!(group_code_1)) goto event_3512_6_end;
        playerBase_instances.clear_selection();
        qualifier_6.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_6)) goto event_3512_6_end;
        for (QualifierIterator it(qualifier_6); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!qualifier_6.has_selection()) goto event_3512_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) == (((Active*)get_single(qualifier_6, default_active_instance))->get_box_index(0)+13))) goto event_3512_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) == (((Active*)get_single(qualifier_6, default_active_instance))->get_box_index(1)+7))) goto event_3512_6_end;
        if (!check_not_overlap(playerBase_instances, qualifier_18)) goto event_3512_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3512_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_3512_6_end;
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_3512_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3512_6_0: ;
        }
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->set_direction(((Active*)get_single(qualifier_6, it.current_index, default_active_instance))->get_direction());
        }
    }
    event_3512_6_end: ;
}
// Function purpose: generated callback event_func_4561 processes event block(s) 3513_6. Actions/conditions:
//        3513_6: sets the object position in the world; sets the object's animation to 8; sets the selected object's
//        direction to ((Active*)get_single(qualifier_6, it.current_index, default_active_instance))->get_direction().
void Frames::event_func_4561()
{
    // event 3513_6 : sets the object position in the world; sets the object's animation to 8; sets the selected object's direction to ((Active*)get_single(qualifier_6, it.current_index, default_active_instance))->get_direction()
    {
        if (!(group_code_1)) goto event_3513_6_end;
        playerBase_instances.clear_selection();
        qualifier_6.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_6)) goto event_3513_6_end;
        for (QualifierIterator it(qualifier_6); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(16777216))) { it.deselect(); continue; }
        }
        if (!qualifier_6.has_selection()) goto event_3513_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) == (((Active*)get_single(qualifier_6, default_active_instance))->get_box_index(0)+8))) goto event_3513_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) == (((Active*)get_single(qualifier_6, default_active_instance))->get_box_index(1)+10))) goto event_3513_6_end;
        if (!check_not_overlap(playerBase_instances, qualifier_18)) goto event_3513_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3513_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_3513_6_end;
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_3513_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3513_6_0: ;
        }
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->set_direction(((Active*)get_single(qualifier_6, it.current_index, default_active_instance))->get_direction());
        }
    }
    event_3513_6_end: ;
}
// Function purpose: generated callback event_func_4562 processes event block(s) 3514_6. Actions/conditions:
//        3514_6: saves the current object selection.
void Frames::event_func_4562()
{
    // event 3514_6 : saves the current object selection
    bool or_result_3514_6 = false;
    bool or_temp_result_3514_6_0 = false;
    {
        if (!(group_code_1)) goto or_event_3514_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(338, str_sleepmenu_1128)) == (1))) goto or_event_3514_6_0_end;
        or_result_3514_6 = true;
        or_temp_result_3514_6_0 = true;
    }
    or_event_3514_6_0_end: ;
    // event 3514_6 : saves the current object selection
    bool or_temp_result_3514_6_1 = false;
    {
        if (!(group_code_1)) goto or_event_3514_6_1_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_3514_6_1_end;
        or_result_3514_6 = true;
        or_temp_result_3514_6_1 = true;
        or_event_3514_6_1_end: ;
        dialogPanel_instances.clear_saved_selection();
        if (or_temp_result_3514_6_1) {
            dialogPanel_instances.save_selection();
        }
        if (!or_result_3514_6) goto or_final_or_event_3514_6_1_end;
        dialogPanel_instances.empty_selection();
        if (or_temp_result_3514_6_1) {
            dialogPanel_instances.restore_selection();
        }
        if (!group_code_sort_these_sleep_stuff_sleep_menu_1) {
            group_code_sort_these_sleep_stuff_sleep_menu_1 = true;
        }
    }
    or_final_or_event_3514_6_1_end: ;
}
// Function purpose: generated callback event_func_4563 processes event block(s) 3515_6. Actions/conditions:
//        3515_6: sets the selected object's numeric value to 100.
void Frames::event_func_4563()
{
    // event 3515_6 : sets the selected object's numeric value to 100
    {
        if (!(group_code_1)) goto event_3515_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) > (100))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3515_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 100);
        }
    }
    event_3515_6_end: ;
}
