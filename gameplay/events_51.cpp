#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_4164 processes event block(s) 2381_6. Actions/conditions:
//        2381_6: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        7 more actions.
void Frames::event_func_4164()
{
    // event 2381_6 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 7 more actions
    {
        if (!(group_code_1 && group_code_mouseovers_workouts_1)) goto event_2381_6_end;
        gym4_318_instances.clear_selection();
        for (ObjectIterator it(gym4_318_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!gym4_318_instances.has_selection()) goto event_2381_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2381_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2381_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(0))) goto event_2381_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2381_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2381_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_20_279));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2381_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2381_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_20_279));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2381_6_end: ;
}
// Function purpose: generated callback event_func_4165 processes event block(s) 2382_6. Actions/conditions:
//        2382_6: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        7 more actions.
void Frames::event_func_4165()
{
    // event 2382_6 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 7 more actions
    {
        if (!(group_code_1 && group_code_mouseovers_workouts_1)) goto event_2382_6_end;
        chinupbar_430_instances.clear_selection();
        for (ObjectIterator it(chinupbar_430_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!chinupbar_430_instances.has_selection()) goto event_2382_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2382_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2382_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(0))) goto event_2382_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2382_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2382_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_73_2197));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2382_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2382_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_73_2197));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2382_6_end: ;
}
// Function purpose: generated callback event_func_4166 processes event block(s) 2383_6. Actions/conditions:
//        2383_6: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        7 more actions.
void Frames::event_func_4166()
{
    // event 2383_6 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 7 more actions
    {
        if (!(group_code_1 && group_code_mouseovers_workouts_1)) goto event_2383_6_end;
        joggingmat_407_instances.clear_selection();
        for (ObjectIterator it(joggingmat_407_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!joggingmat_407_instances.has_selection()) goto event_2383_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2383_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2383_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(0))) goto event_2383_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2383_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2383_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_21_335));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2383_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2383_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_21_335));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2383_6_end: ;
}
// Function purpose: generated callback event_func_4167 processes event block(s) 2384_6. Actions/conditions:
//        2384_6: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        7 more actions.
void Frames::event_func_4167()
{
    // event 2384_6 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 7 more actions
    {
        if (!(group_code_1 && group_code_mouseovers_workouts_1)) goto event_2384_6_end;
        skippingmat_435_instances.clear_selection();
        for (ObjectIterator it(skippingmat_435_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!skippingmat_435_instances.has_selection()) goto event_2384_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2384_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2384_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(0))) goto event_2384_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2384_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2384_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_22_850));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2384_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2384_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_22_850));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2384_6_end: ;
}
// Function purpose: generated callback event_func_4168 processes event block(s) 2385_6. Actions/conditions:
//        2385_6: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        7 more actions.
void Frames::event_func_4168()
{
    // event 2385_6 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 7 more actions
    {
        if (!(group_code_1 && group_code_mouseovers_workouts_1)) goto event_2385_6_end;
        pushupmat_408_instances.clear_selection();
        for (ObjectIterator it(pushupmat_408_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!pushupmat_408_instances.has_selection()) goto event_2385_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2385_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2385_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(0))) goto event_2385_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2385_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2385_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_23_851));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2385_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2385_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_23_851));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2385_6_end: ;
}
// Function purpose: generated callback event_func_4169 processes event block(s) 2386_6. Actions/conditions:
//        2386_6: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        7 more actions.
void Frames::event_func_4169()
{
    // event 2386_6 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 7 more actions
    {
        if (!(group_code_1 && group_code_mouseovers_workouts_1)) goto event_2386_6_end;
        gym3_317_instances.clear_selection();
        for (ObjectIterator it(gym3_317_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!gym3_317_instances.has_selection()) goto event_2386_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2386_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2386_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(0))) goto event_2386_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2386_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2386_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_24_849));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2386_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2386_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_24_849));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2386_6_end: ;
}
// Function purpose: generated callback event_func_4170 processes event block(s) 2387_6. Actions/conditions:
//        2387_6: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        7 more actions.
void Frames::event_func_4170()
{
    // event 2387_6 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 7 more actions
    {
        if (!(group_code_1 && group_code_mouseovers_workouts_1)) goto event_2387_6_end;
        speedbag_439_instances.clear_selection();
        for (ObjectIterator it(speedbag_439_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!speedbag_439_instances.has_selection()) goto event_2387_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2387_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2387_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(0))) goto event_2387_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2387_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2387_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_25_1214));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2387_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2387_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_25_1214));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2387_6_end: ;
}
// Function purpose: generated callback event_func_4171 processes event block(s) 2388_6. Actions/conditions:
//        2388_6: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        7 more actions.
void Frames::event_func_4171()
{
    // event 2388_6 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 7 more actions
    {
        if (!(group_code_1 && group_code_mouseovers_workouts_1)) goto event_2388_6_end;
        punchbag_436_instances.clear_selection();
        for (ObjectIterator it(punchbag_436_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!punchbag_436_instances.has_selection()) goto event_2388_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2388_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2388_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(0))) goto event_2388_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2388_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2388_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_26_2198));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2388_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2388_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_26_2198));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2388_6_end: ;
}
// Function purpose: generated callback event_func_4172 processes event block(s) 2389_6. Actions/conditions:
//        2389_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_4172()
{
    // event 2389_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_2389_6_end;
        if (!(group_code_1 && group_code_mouseovers_workouts_1)) goto event_2389_6_end;
            group_code_mouseovers_workouts_1 = false;
    
    }
    event_2389_6_end: ;
}
// Function purpose: generated callback event_func_4173 processes event block(s) 2390_6. Actions/conditions:
//        2390_6: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        7 more actions.
void Frames::event_func_4173()
{
    // event 2390_6 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 7 more actions
    {
        if (!(group_code_1)) goto event_2390_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2390_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(291, str_chippablewalls_967), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16)))+str__96, 0)) != (-1))) goto event_2390_6_end;
        if (!((((ArrayObject*)get_instance(wallsarray_232_instances))->get_value(get_mouse_x()/MathHelper()/16, get_mouse_y()/MathHelper()/16, ((Active*)get_instance(playerBase_instances))->layer->index+1)) < (0))) goto event_2390_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2390_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2390_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_51_1923));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2390_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2390_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_51_1923));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2390_6_end: ;
}
// Function purpose: generated callback event_func_4174 processes event block(s) 2391_6. Actions/conditions:
//        2391_6: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        7 more actions.
void Frames::event_func_4174()
{
    // event 2391_6 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 7 more actions
    {
        if (!(group_code_1)) goto event_2391_6_end;
        checkpointguard_423_instances.clear_selection();
        for (ObjectIterator it(checkpointguard_423_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!checkpointguard_423_instances.has_selection()) goto event_2391_6_end;
        if (!((((Active*)get_single(checkpointguard_423_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2391_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2391_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2391_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2391_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(str_checkpoint_charlie_2199);
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2391_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2391_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(str_checkpoint_charlie_2199);
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2391_6_end: ;
}
// Function purpose: generated callback event_func_4175 processes event block(s) 2392_6. Actions/conditions:
//        2392_6: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        7 more actions.
void Frames::event_func_4175()
{
    // event 2392_6 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 7 more actions
    {
        if (!(group_code_1)) goto event_2392_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_medstaff_1892))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_2392_6_end;
        if (!((((Active*)get_single(serviceNpc_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2392_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2392_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2392_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2392_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_63_2200));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2392_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2392_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_63_2200));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2392_6_end: ;
}
// Function purpose: generated callback event_func_4176 processes event block(s) 2393_6. Actions/conditions:
//        2393_6: sets ShowCursor to 1; sets source to Hovers entry 65; sets source to
//        StringReplace::replace(gameVariables->get_string(81, source), $name,
//        gameVariables->get_string(167, MapWarden)); plus 9 more actions.
void Frames::event_func_4176()
{
    // event 2393_6 : sets ShowCursor to 1; sets source to Hovers entry 65; sets source to StringReplace::replace(gameVariables->get_string(81, source), $name, gameVariables->get_string(167, MapWarden)); plus 9 more actions
    {
        if (!(group_code_1)) goto event_2393_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_warden_594))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_2393_6_end;
        if (!((((Active*)get_single(serviceNpc_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2393_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2393_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2393_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2393_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_2393_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2393_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_65_904));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_name_693, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(167, str_mapwarden_744)));
    CalcRect::set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2393_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2393_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2393_6_end: ;
}
// Function purpose: generated callback event_func_4177 processes event block(s) 2394_6. Actions/conditions:
//        2394_6: sets ShowCursor to 1; sets source to DTAF entry Boss; sets source to
//        StringReplace::replace(gameVariables->get_string(81, source), $name,
//        gameVariables->get_string(167, MapWarden)); plus 9 more actions.
void Frames::event_func_4177()
{
    // event 2394_6 : sets ShowCursor to 1; sets source to DTAF entry Boss; sets source to StringReplace::replace(gameVariables->get_string(81, source), $name, gameVariables->get_string(167, MapWarden)); plus 9 more actions
    {
        if (!(group_code_1)) goto event_2394_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_warden_594))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_2394_6_end;
        if (!((((Active*)get_single(serviceNpc_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2394_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2394_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2394_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2394_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_2394_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_dtaf_137, str_boss_2201));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_name_693, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(167, str_mapwarden_744)));
    CalcRect::set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2394_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2394_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2394_6_end: ;
}
// Function purpose: generated callback event_func_4178 processes event block(s) 2395_6. Actions/conditions:
//        2395_6: sets ShowCursor to 1; sets source to SS entry Boss; updates the displayed text layout; plus 8 more
//        actions.
void Frames::event_func_4178()
{
    // event 2395_6 : sets ShowCursor to 1; sets source to SS entry Boss; updates the displayed text layout; plus 8 more actions
    {
        if (!(group_code_1)) goto event_2395_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_warden_594))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_2395_6_end;
        if (!((((Active*)get_single(serviceNpc_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2395_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2395_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2395_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2395_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2395_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_boss_2201));
    CalcRect::set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2395_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2395_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2395_6_end: ;
}
// Function purpose: generated callback event_func_4179 processes event block(s) 2396_6. Actions/conditions:
//        2396_6: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        7 more actions.
void Frames::event_func_4179()
{
    // event 2396_6 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 7 more actions
    {
        if (!(group_code_1)) goto event_2396_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_jobstaff_1891))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_2396_6_end;
        if (!((((Active*)get_single(serviceNpc_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2396_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2396_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2396_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2396_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_62_2202));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2396_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2396_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_62_2202));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2396_6_end: ;
}
// Function purpose: generated callback event_func_4180 processes event block(s) 2397_6. Actions/conditions:
//        2397_6: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        7 more actions.
void Frames::event_func_4180()
{
    // event 2397_6 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 7 more actions
    {
        if (!(group_code_1)) goto event_2397_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_visitor_593))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_2397_6_end;
        if (!((((Active*)get_single(serviceNpc_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2397_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2397_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2397_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2397_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_64_2203));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2397_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2397_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_64_2203));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2397_6_end: ;
}
// Function purpose: generated callback event_func_4181 processes event block(s) 2398_6. Actions/conditions:
//        2398_6: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        7 more actions.
void Frames::event_func_4181()
{
    // event 2398_6 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 7 more actions
    {
        if (!(group_code_1)) goto event_2398_6_end;
        towerguard_342_instances.clear_selection();
        for (ObjectIterator it(towerguard_342_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!towerguard_342_instances.has_selection()) goto event_2398_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2398_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2398_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2398_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_71_2204));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2398_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2398_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(155, 196, 243));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_71_2204));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2398_6_end: ;
}
// Function purpose: generated callback event_func_4182 processes event block(s) 2399_6. Actions/conditions:
//        2399_6: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        7 more actions.
void Frames::event_func_4182()
{
    // event 2399_6 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 7 more actions
    {
        if (!(group_code_1)) goto event_2399_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2399_6_end;
        if (!((((Active*)get_single(inmateBase_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2399_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2399_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2399_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2399_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(0));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2399_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2399_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_text(((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->strings.get(0));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(347, str_input_170, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(12));
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
    event_2399_6_end: ;
}
// Function purpose: generated callback event_func_4183 processes event block(s) 2400_6. Actions/conditions:
//        2400_6: sets a game or interface text string; sets source to Misc entry 43; sets source to
//        StringReplace::replace(gameVariables->get_string(81, source), $name,
//        gameVariables->get_string(131, thisName)); plus 10 more actions.
void Frames::event_func_4183()
{
    // event 2400_6 : sets a game or interface text string; sets source to Misc entry 43; sets source to StringReplace::replace(gameVariables->get_string(81, source), $name, gameVariables->get_string(131, thisName)); plus 10 more actions
    {
        if (!(group_code_1)) goto event_2400_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_2400_6_end;
        if (!((((Active*)get_single(guardBase_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2400_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_2400_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2400_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2400_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2400_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(131, str_thisname_694, StringReplace::replace(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->strings.get(0), str_officer_637, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_43_695));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_name_693, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(131, str_thisname_694)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2400_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2400_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->blend_color.set(Color(155, 196, 243));
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2400_6_end: ;
}
// Function purpose: generated callback event_func_4184 processes event block(s) 2401_6. Actions/conditions:
//        2401_6: sets a game or interface text string; sets source to DTAF entry Hench; sets source to
//        StringReplace::replace(gameVariables->get_string(81, source), $name,
//        gameVariables->get_string(131, thisName)); plus 10 more actions.
void Frames::event_func_4184()
{
    // event 2401_6 : sets a game or interface text string; sets source to DTAF entry Hench; sets source to StringReplace::replace(gameVariables->get_string(81, source), $name, gameVariables->get_string(131, thisName)); plus 10 more actions
    {
        if (!(group_code_1)) goto event_2401_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_2401_6_end;
        if (!((((Active*)get_single(guardBase_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2401_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_2401_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2401_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2401_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2401_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(131, str_thisname_694, StringReplace::replace(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->strings.get(0), str_officer_637, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_dtaf_137, str_hench_1196));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_name_693, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(131, str_thisname_694)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2401_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2401_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->blend_color.set(Color(155, 196, 243));
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2401_6_end: ;
}
// Function purpose: generated callback event_func_4185 processes event block(s) 2403_6. Actions/conditions:
//        2403_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 12 more actions.
void Frames::event_func_4185()
{
    // event 2403_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 12 more actions
    {
        if (!(group_code_1)) goto event_2403_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2403_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_chipping_728)) > (0))) goto event_2403_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(291, str_chippablewalls_967), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), ((Active*)get_instance(playerBase_instances))->layer->index+1))+str__96, 0)) != (-1))) goto event_2403_6_end;
        if (!((((ArrayObject*)get_instance(wallsarray_232_instances))->get_value(get_mouse_x()/MathHelper()/16, get_mouse_y()/MathHelper()/16, ((Active*)get_instance(playerBase_instances))->layer->index+1)) < (100))) goto event_2403_6_end;
        if (!((((ArrayObject*)get_instance(wallsarray_232_instances))->get_value(get_mouse_x()/MathHelper()/16, get_mouse_y()/MathHelper()/16, ((Active*)get_instance(playerBase_instances))->layer->index+1)) >= (0))) goto event_2403_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2403_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_2403_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2403_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_2403_6_end;
        }
        compare_2403_6_0_end: ;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2403_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2403_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(901, str_wallhp_2205, 100-((ArrayObject*)get_instance(wallsarray_232_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), ((Active*)get_instance(playerBase_instances))->layer->index+1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_53_2206)+str__2057+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(901, str_wallhp_2205))+str__2176);
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2403_6_1;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2403_6_1: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_53_2206)+str__2057+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(901, str_wallhp_2205))+str__2176);
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2403_6_end: ;
}
// Function purpose: generated callback event_func_4186 processes event block(s) 2404_6. Actions/conditions:
//        2404_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 12 more actions.
void Frames::event_func_4186()
{
    // event 2404_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 12 more actions
    {
        if (!(group_code_1)) goto event_2404_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2404_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_cutting_727)) > (0))) goto event_2404_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(292, str_cuttablefences_969), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), ((Active*)get_instance(playerBase_instances))->layer->index+1))+str__96, 0)) != (-1))) goto event_2404_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), ((Active*)get_instance(playerBase_instances))->layer->index+1)) != (56))) goto event_2404_6_end;
        if (!((((ArrayObject*)get_instance(fencearray_265_instances))->get_value(get_mouse_x()/MathHelper()/16, get_mouse_y()/MathHelper()/16, ((Active*)get_instance(playerBase_instances))->layer->index+1)) < (100))) goto event_2404_6_end;
        if (!((((ArrayObject*)get_instance(fencearray_265_instances))->get_value(get_mouse_x()/MathHelper()/16, get_mouse_y()/MathHelper()/16, ((Active*)get_instance(playerBase_instances))->layer->index+1)) >= (0))) goto event_2404_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_2404_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2404_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_2404_6_end;
        }
        compare_2404_6_0_end: ;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2404_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2404_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(902, str_fencehp_2207, 100-((ArrayObject*)get_instance(fencearray_265_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), ((Active*)get_instance(playerBase_instances))->layer->index+1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_54_610)+str__2057+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(902, str_fencehp_2207))+str__2176);
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2404_6_1;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2404_6_1: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_54_610)+str__2057+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(902, str_fencehp_2207))+str__2176);
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2404_6_end: ;
}
// Function purpose: generated callback event_func_4187 processes event block(s) 2405_6. Actions/conditions:
//        2405_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 12 more actions.
void Frames::event_func_4187()
{
    // event 2405_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 12 more actions
    {
        if (!(group_code_1)) goto event_2405_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2405_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_cutting_727)) > (0))) goto event_2405_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(292, str_cuttablefences_969), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), ((Active*)get_instance(playerBase_instances))->layer->index+1))+str__96, 0)) != (-1))) goto event_2405_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), ((Active*)get_instance(playerBase_instances))->layer->index+1)) == (56))) goto event_2405_6_end;
        if (!((((ArrayObject*)get_instance(fencearray_265_instances))->get_value(get_mouse_x()/MathHelper()/16, get_mouse_y()/MathHelper()/16, ((Active*)get_instance(playerBase_instances))->layer->index+1)) < (100))) goto event_2405_6_end;
        if (!((((ArrayObject*)get_instance(fencearray_265_instances))->get_value(get_mouse_x()/MathHelper()/16, get_mouse_y()/MathHelper()/16, ((Active*)get_instance(playerBase_instances))->layer->index+1)) >= (0))) goto event_2405_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_2405_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2405_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_2405_6_end;
        }
        compare_2405_6_0_end: ;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2405_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2405_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(902, str_fencehp_2207, 100-((ArrayObject*)get_instance(fencearray_265_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), ((Active*)get_instance(playerBase_instances))->layer->index+1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_55_2208)+str__2057+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(902, str_fencehp_2207))+str__2176);
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2405_6_1;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2405_6_1: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_55_2208)+str__2057+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(902, str_fencehp_2207))+str__2176);
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2405_6_end: ;
}
// Function purpose: generated callback event_func_4188 processes event block(s) 2406_6. Actions/conditions:
//        2406_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 11 more actions.
void Frames::event_func_4188()
{
    // event 2406_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 11 more actions
    {
        if (!(group_code_1)) goto event_2406_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2406_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_chipping_728)) > (0))) goto event_2406_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_2406_6_end;
        cursor_178_instances.clear_selection();
        active10_293_instances.clear_selection();
        if (!check_overlap(cursor_178_instances, active10_293_instances)) goto event_2406_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_2406_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2406_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_2406_6_end;
        }
        compare_2406_6_0_end: ;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2406_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_56_2209)+str__2057+number_to_string(((Active*)get_single(active10_293_instances, default_active_instance))->alterables->values.get(2))+str__2176);
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2406_6_1;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2406_6_1: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_56_2209)+str__2057+number_to_string(((Active*)get_single(active10_293_instances, it.current_index, default_active_instance))->alterables->values.get(2))+str__2176);
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2406_6_end: ;
}
// Function purpose: generated callback event_func_4189 processes event block(s) 2407_6. Actions/conditions:
//        2407_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 11 more actions.
void Frames::event_func_4189()
{
    // event 2407_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 11 more actions
    {
        if (!(group_code_1)) goto event_2407_6_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto event_2407_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2407_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (24))) goto event_2407_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_2407_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2407_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_2407_6_end;
        }
        compare_2407_6_0_end: ;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2407_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_57_2210)+str__2057+number_to_string(((Active*)get_single(ventCover_instances, default_active_instance))->alterables->values.get(1))+str__2176);
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2407_6_1;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2407_6_1: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_57_2210)+str__2057+number_to_string(((Active*)get_single(ventCover_instances, it.current_index, default_active_instance))->alterables->values.get(1))+str__2176);
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2407_6_end: ;
}
// Function purpose: generated callback event_func_4190 processes event block(s) 2408_6. Actions/conditions:
//        2408_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 11 more actions.
void Frames::event_func_4190()
{
    // event 2408_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 11 more actions
    {
        if (!(group_code_1)) goto event_2408_6_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto event_2408_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2408_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_cutting_727)) > (0))) goto event_2408_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_2408_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2408_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_2408_6_end;
        }
        compare_2408_6_0_end: ;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2408_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_58_1861)+str__2057+number_to_string(((Active*)get_single(ventCover_instances, default_active_instance))->alterables->values.get(1))+str__2176);
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2408_6_1;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2408_6_1: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_58_1861)+str__2057+number_to_string(((Active*)get_single(ventCover_instances, it.current_index, default_active_instance))->alterables->values.get(1))+str__2176);
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2408_6_end: ;
}
// Function purpose: generated callback event_func_4191 processes event block(s) 2409_6. Actions/conditions:
//        2409_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 12 more actions.
void Frames::event_func_4191()
{
    // event 2409_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 12 more actions
    {
        if (!(group_code_1)) goto event_2409_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2409_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2409_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_digging_726)) > (0))) goto event_2409_6_end;
        if (!((((ArrayObject*)get_instance(digarray_228_instances))->get_value(((Active*)get_instance(cursor_178_instances))->get_x(), ((Active*)get_instance(cursor_178_instances))->get_y(), 1)) < (25))) goto event_2409_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_2409_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2409_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_2409_6_end;
        }
        compare_2409_6_0_end: ;
        if (((Active*)get_instance(cursor_178_instances))->overlaps_background()) goto event_2409_6_end;
        cursor_178_instances.clear_selection();
        if (!check_not_overlap(cursor_178_instances, qualifier_4)) goto event_2409_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_6)) goto event_2409_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_7)) goto event_2409_6_end;
        if (!check_not_overlap(cursor_178_instances, toilet2_307_instances)) goto event_2409_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_17)) goto event_2409_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2409_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(903, str_diggable_2211, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_59_2212)+str__2057+number_to_string(((ArrayObject*)get_instance(digarray_228_instances))->get_value(((Active*)get_instance(cursor_178_instances))->get_x(), ((Active*)get_instance(cursor_178_instances))->get_y(), 1)*4)+str__2176);
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2409_6_1;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2409_6_1: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_59_2212)+str__2057+number_to_string(((ArrayObject*)get_instance(digarray_228_instances))->get_value(((Active*)get_instance(cursor_178_instances))->get_x(), ((Active*)get_instance(cursor_178_instances))->get_y(), 1)*4)+str__2176);
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2409_6_end: ;
}
// Function purpose: generated callback event_func_4192 processes event block(s) 2410_6. Actions/conditions:
//        2410_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 12 more actions.
void Frames::event_func_4192()
{
    // event 2410_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 12 more actions
    {
        if (!(group_code_1)) goto event_2410_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2410_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_2410_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_digging_726)) > (0))) goto event_2410_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), 1)) != (92))) goto event_2410_6_end;
        if (!((((ArrayObject*)get_instance(digarray_228_instances))->get_value(((Active*)get_instance(cursor_178_instances))->get_x(), ((Active*)get_instance(cursor_178_instances))->get_y(), 0)) < (25))) goto event_2410_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_2410_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2410_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_2410_6_end;
        }
        compare_2410_6_0_end: ;
        if (!(((Active*)get_instance(cursor_178_instances))->overlaps_background())) goto event_2410_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2410_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(903, str_diggable_2211, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_59_2212)+str__2057+number_to_string(((ArrayObject*)get_instance(digarray_228_instances))->get_value(((Active*)get_instance(cursor_178_instances))->get_x(), ((Active*)get_instance(cursor_178_instances))->get_y(), 0)*4)+str__2176);
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2410_6_1;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2410_6_1: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_59_2212)+str__2057+number_to_string(((ArrayObject*)get_instance(digarray_228_instances))->get_value(((Active*)get_instance(cursor_178_instances))->get_x(), ((Active*)get_instance(cursor_178_instances))->get_y(), 0)*4)+str__2176);
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2410_6_end: ;
}
// Function purpose: generated callback event_func_4193 processes event block(s) 2411_6. Actions/conditions:
//        2411_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 12 more actions.
void Frames::event_func_4193()
{
    // event 2411_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 12 more actions
    {
        if (!(group_code_1)) goto event_2411_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2411_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_2411_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_digging_726)) > (0))) goto event_2411_6_end;
        if (!((((ArrayObject*)get_instance(digarray_228_instances))->get_value(((Active*)get_instance(cursor_178_instances))->get_x(), ((Active*)get_instance(cursor_178_instances))->get_y(), 1)) < (25))) goto event_2411_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_2411_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2411_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_2411_6_end;
        }
        compare_2411_6_0_end: ;
        if (((Active*)get_instance(cursor_178_instances))->overlaps_background()) goto event_2411_6_end;
        cursor_178_instances.clear_selection();
        if (!check_not_overlap(cursor_178_instances, qualifier_19)) goto event_2411_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2411_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(903, str_diggable_2211, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_60_612)+str__2057+number_to_string(((ArrayObject*)get_instance(digarray_228_instances))->get_value(((Active*)get_instance(cursor_178_instances))->get_x(), ((Active*)get_instance(cursor_178_instances))->get_y(), 1)*4)+str__2176);
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2411_6_1;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2411_6_1: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_60_612)+str__2057+number_to_string(((ArrayObject*)get_instance(digarray_228_instances))->get_value(((Active*)get_instance(cursor_178_instances))->get_x(), ((Active*)get_instance(cursor_178_instances))->get_y(), 1)*4)+str__2176);
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2411_6_end: ;
}
// Function purpose: generated callback event_func_4194 processes event block(s) 2412_6. Actions/conditions:
//        2412_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 11 more actions.
void Frames::event_func_4194()
{
    // event 2412_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 11 more actions
    {
        if (!(group_code_1)) goto event_2412_6_end;
        fan_281_instances.clear_selection();
        for (ObjectIterator it(fan_281_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!fan_281_instances.has_selection()) goto event_2412_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2412_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (4))) goto event_2412_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_cutting_727)) > (0))) goto event_2412_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_2412_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2412_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_2412_6_end;
        }
        compare_2412_6_0_end: ;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2412_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_61_2213)+str__2057+number_to_string(((Active*)get_single(fan_281_instances, default_active_instance))->alterables->values.get(1))+str__2176);
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2412_6_1;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2412_6_1: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_61_2213)+str__2057+number_to_string(((Active*)get_single(fan_281_instances, it.current_index, default_active_instance))->alterables->values.get(1))+str__2176);
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2412_6_end: ;
}
// Function purpose: generated callback event_func_4195 processes event block(s) 2413_6. Actions/conditions:
//        2413_6: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        7 more actions.
void Frames::event_func_4195()
{
    // event 2413_6 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 7 more actions
    {
        if (!(group_code_1)) goto event_2413_6_end;
        dtafobjects_487_instances.clear_selection();
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_panel_left_465))) { it.deselect(); continue; }
        }
        if (!dtafobjects_487_instances.has_selection()) goto event_2413_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2413_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2413_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2413_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(0))) goto event_2413_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2413_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_dtaf_137, str_pan1_2214));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2413_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2413_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_dtaf_137, str_pan1_2214));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2413_6_end: ;
}
// Function purpose: generated callback event_func_4196 processes event block(s) 2414_6. Actions/conditions:
//        2414_6: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        7 more actions.
void Frames::event_func_4196()
{
    // event 2414_6 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 7 more actions
    {
        if (!(group_code_1)) goto event_2414_6_end;
        dtafobjects_487_instances.clear_selection();
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_panel_bottom_467))) { it.deselect(); continue; }
        }
        if (!dtafobjects_487_instances.has_selection()) goto event_2414_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2414_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2414_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2414_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(0))) goto event_2414_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2414_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_dtaf_137, str_pan2_2215));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2414_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2414_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_dtaf_137, str_pan2_2215));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2414_6_end: ;
}
// Function purpose: generated callback event_func_4197 processes event block(s) 2415_6. Actions/conditions:
//        2415_6: sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus
//        7 more actions.
void Frames::event_func_4197()
{
    // event 2415_6 : sets ShowCursor to 1; updates the displayed text layout; sets the object position in the world; plus 7 more actions
    {
        if (!(group_code_1)) goto event_2415_6_end;
        dtafobjects_487_instances.clear_selection();
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_panel_right_466))) { it.deselect(); continue; }
        }
        if (!dtafobjects_487_instances.has_selection()) goto event_2415_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2415_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2415_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2415_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(0))) goto event_2415_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2415_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_dtaf_137, str_pan3_2216));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2415_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2415_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_dtaf_137, str_pan3_2216));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2415_6_end: ;
}
// Function purpose: generated callback event_func_4198 processes event block(s) 2416_6. Actions/conditions:
//        2416_6: checks scene is active; skips if the event-specific game state condition is met; the event-specific
//        game state condition is met; this handler gates a game ev.
void Frames::event_func_4198()
{
    // event 2416_6 : checks scene is active; skips if the event-specific game state condition is met; the event-specific game state condition is met; this handler gates a game ev
    {
        if (!(group_code_1)) goto event_2416_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(100))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2416_6_end;
        if (!((((SystemBox*)get_single(activesystembox_450_instances, default_systembox_instance))->get_box_index(2)) > (frame_right()))) goto event_2416_6_end;
        {
            loop_tip_left_running = true;
            int times = int(150);
            loop_tip_left_index = 0;
            while (loop_tip_left_index < times) {
                loop_tip_left_6();
                if (!loop_tip_left_running) break;
                loop_tip_left_index++;
            }
        }
    }
    event_2416_6_end: ;
}
// Function purpose: generated callback event_func_4199 processes event block(s) 2419_6. Actions/conditions:
//        2419_6: checks scene is active; skips if the event-specific game state condition is met; the event-specific
//        game state condition is met; this handler gates a game ev.
void Frames::event_func_4199()
{
    // event 2419_6 : checks scene is active; skips if the event-specific game state condition is met; the event-specific game state condition is met; this handler gates a game ev
    {
        if (!(group_code_1)) goto event_2419_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(100))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2419_6_end;
        if (!((((SystemBox*)get_single(activesystembox_450_instances, default_systembox_instance))->get_box_index(3)) > (frame_bottom()))) goto event_2419_6_end;
        {
            loop_tip_up_running = true;
            int times = int(50);
            loop_tip_up_index = 0;
            while (loop_tip_up_index < times) {
                loop_tip_up_6();
                if (!loop_tip_up_running) break;
                loop_tip_up_index++;
            }
        }
    }
    event_2419_6_end: ;
}
// Function purpose: generated callback event_func_4200 processes event block(s) 2422_6. Actions/conditions:
//        2422_6: sets the selected object's visibility to false.
void Frames::event_func_4200()
{
    // event 2422_6 : sets the selected object's visibility to false
    {
        if (!(group_code_1)) goto event_2422_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(871, str_showcursor_2053)) == (0))) goto event_2422_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2422_6_end;
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_visible(false);
        }
    }
    event_2422_6_end: ;
}
// Function purpose: generated callback event_func_4201 processes event block(s) 2423_6. Actions/conditions:
//        2423_6: sets Inv1 to -1; sets Inv2 to -1; sets Inv3 to -1; plus 7 more actions.
void Frames::event_func_4201()
{
    // event 2423_6 : sets Inv1 to -1; sets Inv2 to -1; sets Inv3 to -1; plus 7 more actions
    {
        if (!(group_code_1)) goto event_2423_6_end;
        every_2423_6 += manager.dt;
        if (every_2423_6 < 1.0) goto event_2423_6_end;
        every_2423_6 -= 1.0;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(904, str_inv1_2217, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(905, str_inv2_2218, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(906, str_inv3_2219, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(907, str_inv4_2220, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(908, str_inv5_2221, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(909, str_inv6_2222, -1);
        {
            loop_invstring_running = true;
            int times = int(6);
            loop_invstring_index = 0;
            while (loop_invstring_index < times) {
                loop_invstring_6();
                if (!loop_invstring_running) break;
                loop_invstring_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(503, str_invstring_1386, str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(904, str_inv1_2217))+str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(905, str_inv2_2218))+str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(906, str_inv3_2219))+str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(907, str_inv4_2220))+str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(908, str_inv5_2221))+str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(909, str_inv6_2222))+str__96);
    }
    event_2423_6_end: ;
}
// Function purpose: generated callback event_func_4202 processes event block(s) 2425_6. Actions/conditions:
//        2425_6: checks scene is active; the event-specific game state condition is met; skips if scene is active;
//        this handler gates a game event without a direct value/obje.
void Frames::event_func_4202()
{
    // event 2425_6 : checks scene is active; the event-specific game state condition is met; skips if scene is active; this handler gates a game event without a direct value/obje
    {
        if (!(group_code_1)) goto event_2425_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_2425_6_end;
        if (group_code_1 && group_code_inventory_underground_lighting_1) goto event_2425_6_end;
        if (!group_code_inventory_underground_lighting_1) {
            group_code_inventory_underground_lighting_1 = true;
        }
    }
    event_2425_6_end: ;
}
// Function purpose: generated callback event_func_4203 processes event block(s) 2426_6. Actions/conditions:
//        2426_6: checks scene is active; the event-specific game state condition is met; this handler gates a game
//        event without a direct value/object action.
void Frames::event_func_4203()
{
    // event 2426_6 : checks scene is active; the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_2426_6_end;
        if (!(group_code_1 && group_code_inventory_underground_lighting_1)) goto event_2426_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) != (1))) goto event_2426_6_end;
            group_code_inventory_underground_lighting_1 = false;
    
    }
    event_2426_6_end: ;
}
// Function purpose: generated callback event_func_4204 processes event block(s) 2427_6. Actions/conditions:
//        2427_6: sets Lighting to 0.
void Frames::event_func_4204()
{
    // event 2427_6 : sets Lighting to 0
    {
        if (!(group_code_1 && group_code_inventory_underground_lighting_1)) goto event_2427_6_end;
        every_2427_6 += manager.dt;
        if (every_2427_6 < 1.5) goto event_2427_6_end;
        every_2427_6 -= 1.5;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_2427_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2427_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(216, str_lighting_819, 0);
        {
            loop_check_lighting_running = true;
            int times = int(6);
            loop_check_lighting_index = 0;
            while (loop_check_lighting_index < times) {
                loop_check_lighting_6();
                if (!loop_check_lighting_running) break;
                loop_check_lighting_index++;
            }
        }
    }
    event_2427_6_end: ;
}
// Function purpose: generated callback event_func_4205 processes event block(s) 2431_6. Actions/conditions:
//        2431_6: sets LClick to 1; sets SpeakText to Misc entry 22; plays a sound or music track; plus 1 more
//        actions.
void Frames::event_func_4205()
{
    // event 2431_6 : sets LClick to 1; sets SpeakText to Misc entry 22; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1)) goto event_2431_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_2431_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (123))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2431_6_end;
        if (!((((ListObject*)get_instance(craftingpossibles_349_instances))->get_count()) == (0))) goto event_2431_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2431_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2431_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_22_850));
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
        ((Active*)get_instance(mouse_9_instances))->force_animation(0);
    }
    event_2431_6_end: ;
}
// Function purpose: generated callback event_func_4206 processes event block(s) 2432_6. Actions/conditions:
//        2432_6: sets FlashJournal to 1; sets the selected object's visibility to true; sets the object's animation
//        to 28; plus 27 more actions.
void Frames::event_func_4206()
{
    // event 2432_6 : sets FlashJournal to 1; sets the selected object's visibility to true; sets the object's animation to 28; plus 27 more actions
    {
        if (!(group_code_1)) goto event_2432_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_2432_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (123))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2432_6_end;
        if (!((((ListObject*)get_instance(craftingpossibles_349_instances))->get_count()) > (0))) goto event_2432_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2432_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2432_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(613, str_flashjournal_1595, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(28);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(369, str_found_1165, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(140, str_xpos_705, ((Active*)get_instance(dialogPanel_instances))->get_x()-50);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(47, str_selecteditem_515, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(46, str_selectedslot_514, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(253, str_craft_poss_901), str__254);
        {
            loop_find_craft_note_running = true;
            int times = int(1);
            loop_find_craft_note_index = 0;
            while (loop_find_craft_note_index < times) {
                loop_find_craft_note_6();
                if (!loop_find_craft_note_running) break;
                loop_find_craft_note_index++;
            }
        }
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(itemData_instances))->get_string(str_craft_900), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_24_849));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_int_1222, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        FrameObject * single_instance_2432_6_0; single_instance_2432_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 28, parent->y + 30), parent->layer);
                if (single_instance_2432_6_0 == NULL)
                    single_instance_2432_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2432_6_0))->force_animation(32);
        FrameObject * single_instance_2432_6_1; single_instance_2432_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_2432_6_0)->x + 3, ((Active*)single_instance_2432_6_0)->y + 3), ((Active*)single_instance_2432_6_0)->layer);
            if (single_instance_2432_6_1 == NULL)
                single_instance_2432_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_2432_6_1))->blend_color.set(Color(120, 120, 120));
        ((Text*)((Text*)single_instance_2432_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_23_851)));
        FrameObject * single_instance_2432_6_2; single_instance_2432_6_2 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogue4_352(parent->x + -50, parent->y + -20), parent->layer);
                if (single_instance_2432_6_2 == NULL)
                    single_instance_2432_6_2 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_2432_6_2))->set_string(((INI*)get_instance(itemData_instances))->get_string(str_name_103)+str__2223+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)+str__2223+((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
        ((Text*)((Text*)single_instance_2432_6_2))->blend_color.set(Color(75, 75, 75));
        FrameObject * single_instance_2432_6_3; single_instance_2432_6_3 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + -46), parent->layer);
                if (single_instance_2432_6_3 == NULL)
                    single_instance_2432_6_3 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_2432_6_3))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_2432_6_3)), frame_left()));
        ((Text*)((Text*)single_instance_2432_6_3))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_123_2224, str_name_103)));
        ((Text*)((Text*)single_instance_2432_6_3))->blend_color.set(Color(0, 61, 128));
        ((Text*)((Text*)single_instance_2432_6_3))->set_bold(1);
        {
            loop_craftnote_icon_running = true;
            int times = int(1);
            loop_craftnote_icon_index = 0;
            while (loop_craftnote_icon_index < times) {
                loop_craftnote_icon_6();
                if (!loop_craftnote_icon_running) break;
                loop_craftnote_icon_index++;
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
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(418, str_score_p_1236, 10);
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_2432_6_end: ;
}
// Function purpose: generated callback event_func_4207 processes event block(s) 2435_6. Actions/conditions:
//        2435_6: sets LClick to 1; sets the selected object's visibility to false; removes the selected object; plus
//        1 more actions.
void Frames::event_func_4207()
{
    // event 2435_6 : sets LClick to 1; sets the selected object's visibility to false; removes the selected object; plus 1 more actions
    {
        if (!(group_code_1)) goto event_2435_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(32))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_2435_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_2435_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(28))) goto event_2435_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2435_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        dialogue4_352_instances.clear_selection();
        for (ObjectIterator it(dialogue4_352_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        buttontext_445_instances.clear_selection();
        for (ObjectIterator it(buttontext_445_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        {
            loop_lose_craftnote_icons_running = true;
            int times = int(1);
            loop_lose_craftnote_icons_index = 0;
            while (loop_lose_craftnote_icons_index < times) {
                loop_lose_craftnote_icons_6();
                if (!loop_lose_craftnote_icons_running) break;
                loop_lose_craftnote_icons_index++;
            }
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
    }
    event_2435_6_end: ;
}
// Function purpose: generated callback event_func_4208 processes event block(s) 2438_6. Actions/conditions:
//        2438_6: sets NumKey to 1.
void Frames::event_func_4208()
{
    // event 2438_6 : sets NumKey to 1
    {
        if (!(group_code_1)) goto event_2438_6_end;
        if (!(is_key_pressed_once(SDLK_1))) goto event_2438_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2438_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_numkey_513, 1);
        {
            loop_unselect_item_running = true;
            int times = int(1);
            loop_unselect_item_index = 0;
            while (loop_unselect_item_index < times) {
                loop_unselect_item_6();
                if (!loop_unselect_item_running) break;
                loop_unselect_item_index++;
            }
        }
        {
            loop_numkey_inv_running = true;
            int times = int(1);
            loop_numkey_inv_index = 0;
            while (loop_numkey_inv_index < times) {
                loop_numkey_inv_6();
                if (!loop_numkey_inv_running) break;
                loop_numkey_inv_index++;
            }
        }
    }
    event_2438_6_end: ;
}
// Function purpose: generated callback event_func_4209 processes event block(s) 2439_6. Actions/conditions:
//        2439_6: sets NumKey to 2.
void Frames::event_func_4209()
{
    // event 2439_6 : sets NumKey to 2
    {
        if (!(group_code_1)) goto event_2439_6_end;
        if (!(is_key_pressed_once(SDLK_2))) goto event_2439_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2439_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_numkey_513, 2);
        {
            loop_unselect_item_running = true;
            int times = int(1);
            loop_unselect_item_index = 0;
            while (loop_unselect_item_index < times) {
                loop_unselect_item_6();
                if (!loop_unselect_item_running) break;
                loop_unselect_item_index++;
            }
        }
        {
            loop_numkey_inv_running = true;
            int times = int(1);
            loop_numkey_inv_index = 0;
            while (loop_numkey_inv_index < times) {
                loop_numkey_inv_6();
                if (!loop_numkey_inv_running) break;
                loop_numkey_inv_index++;
            }
        }
    }
    event_2439_6_end: ;
}
// Function purpose: generated callback event_func_4210 processes event block(s) 2440_6. Actions/conditions:
//        2440_6: sets NumKey to 3.
void Frames::event_func_4210()
{
    // event 2440_6 : sets NumKey to 3
    {
        if (!(group_code_1)) goto event_2440_6_end;
        if (!(is_key_pressed_once(SDLK_3))) goto event_2440_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2440_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_numkey_513, 3);
        {
            loop_unselect_item_running = true;
            int times = int(1);
            loop_unselect_item_index = 0;
            while (loop_unselect_item_index < times) {
                loop_unselect_item_6();
                if (!loop_unselect_item_running) break;
                loop_unselect_item_index++;
            }
        }
        {
            loop_numkey_inv_running = true;
            int times = int(1);
            loop_numkey_inv_index = 0;
            while (loop_numkey_inv_index < times) {
                loop_numkey_inv_6();
                if (!loop_numkey_inv_running) break;
                loop_numkey_inv_index++;
            }
        }
    }
    event_2440_6_end: ;
}
// Function purpose: generated callback event_func_4211 processes event block(s) 2441_6. Actions/conditions:
//        2441_6: sets NumKey to 4.
void Frames::event_func_4211()
{
    // event 2441_6 : sets NumKey to 4
    {
        if (!(group_code_1)) goto event_2441_6_end;
        if (!(is_key_pressed_once(SDLK_4))) goto event_2441_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2441_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_numkey_513, 4);
        {
            loop_unselect_item_running = true;
            int times = int(1);
            loop_unselect_item_index = 0;
            while (loop_unselect_item_index < times) {
                loop_unselect_item_6();
                if (!loop_unselect_item_running) break;
                loop_unselect_item_index++;
            }
        }
        {
            loop_numkey_inv_running = true;
            int times = int(1);
            loop_numkey_inv_index = 0;
            while (loop_numkey_inv_index < times) {
                loop_numkey_inv_6();
                if (!loop_numkey_inv_running) break;
                loop_numkey_inv_index++;
            }
        }
    }
    event_2441_6_end: ;
}
// Function purpose: generated callback event_func_4212 processes event block(s) 2442_6. Actions/conditions:
//        2442_6: sets NumKey to 5.
void Frames::event_func_4212()
{
    // event 2442_6 : sets NumKey to 5
    {
        if (!(group_code_1)) goto event_2442_6_end;
        if (!(is_key_pressed_once(SDLK_5))) goto event_2442_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2442_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_numkey_513, 5);
        {
            loop_unselect_item_running = true;
            int times = int(1);
            loop_unselect_item_index = 0;
            while (loop_unselect_item_index < times) {
                loop_unselect_item_6();
                if (!loop_unselect_item_running) break;
                loop_unselect_item_index++;
            }
        }
        {
            loop_numkey_inv_running = true;
            int times = int(1);
            loop_numkey_inv_index = 0;
            while (loop_numkey_inv_index < times) {
                loop_numkey_inv_6();
                if (!loop_numkey_inv_running) break;
                loop_numkey_inv_index++;
            }
        }
    }
    event_2442_6_end: ;
}
// Function purpose: generated callback event_func_4213 processes event block(s) 2443_6. Actions/conditions:
//        2443_6: sets NumKey to 6.
void Frames::event_func_4213()
{
    // event 2443_6 : sets NumKey to 6
    {
        if (!(group_code_1)) goto event_2443_6_end;
        if (!(is_key_pressed_once(SDLK_6))) goto event_2443_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2443_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_numkey_513, 6);
        {
            loop_unselect_item_running = true;
            int times = int(1);
            loop_unselect_item_index = 0;
            while (loop_unselect_item_index < times) {
                loop_unselect_item_6();
                if (!loop_unselect_item_running) break;
                loop_unselect_item_index++;
            }
        }
        {
            loop_numkey_inv_running = true;
            int times = int(1);
            loop_numkey_inv_index = 0;
            while (loop_numkey_inv_index < times) {
                loop_numkey_inv_6();
                if (!loop_numkey_inv_running) break;
                loop_numkey_inv_index++;
            }
        }
    }
    event_2443_6_end: ;
}
// Function purpose: generated callback event_func_4214 processes event block(s) 2447_6. Actions/conditions:
//        2447_6: sets ItemSelected to 0.
void Frames::event_func_4214()
{
    // event 2447_6 : sets ItemSelected to 0
    {
        if (!(group_code_1)) goto event_2447_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_2447_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2447_6_end;
        {
            loop_unselect_item_running = true;
            int times = int(1);
            loop_unselect_item_index = 0;
            while (loop_unselect_item_index < times) {
                loop_unselect_item_6();
                if (!loop_unselect_item_running) break;
                loop_unselect_item_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(546, str_itemselected_1448, 0);
    }
    event_2447_6_end: ;
}
// Function purpose: generated callback event_func_4215 processes event block(s) 2450_6. Actions/conditions:
//        2450_6: enables flag 5000 (inventory item selected state) on the selected object; sets SelectedItem to
//        ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2); sets
//        SelectedItemHP to ((Active*)get_single(hudItem_instances,
//        default_active_instance))->alterables->values.get(7); plus 7 more actions.
void Frames::event_func_4215()
{
    // event 2450_6 : enables flag 5000 (inventory item selected state) on the selected object; sets SelectedItem to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2); sets SelectedItemHP to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7); plus 7 more actions
    {
        if (!(group_code_1)) goto event_2450_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_2450_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2450_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2450_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2450_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5000);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(47, str_selecteditem_515, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(48, str_selecteditemhp_516, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(46, str_selectedslot_514, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(546, str_itemselected_1448, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(49, str_cursor_517, str_use_518);
    }
    event_2450_6_end: ;
}
// Function purpose: generated callback event_func_4216 processes event block(s) 2451_6. Actions/conditions:
//        2451_6: sets the selected object's direction to 7+selected object->alterables->values.get(0).
void Frames::event_func_4216()
{
    // event 2451_6 : sets the selected object's direction to 7+selected object->alterables->values.get(0)
    {
        if (!(group_code_1)) goto event_2451_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(256)) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_2451_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(7+((Active*)*it)->alterables->values.get(0));
        }
    }
    event_2451_6_end: ;
}
// Function purpose: generated callback event_func_4217 processes event block(s) 2452_6. Actions/conditions:
//        2452_6: sets Pressed_C to 0.
void Frames::event_func_4217()
{
    // event 2452_6 : sets Pressed_C to 0
    {
        if (!(group_code_1)) goto event_2452_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(910, str_pressed_c_2225)) == (1))) goto event_2452_6_end;
        if (is_key_pressed(SDLK_7)) goto event_2452_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(910, str_pressed_c_2225, 0);
    }
    event_2452_6_end: ;
}
// Function purpose: generated callback event_func_4218 processes event block(s) 2453_6. Actions/conditions:
//        2453_6: sets Pressed_C to 1; sets LClick to 1.
void Frames::event_func_4218()
{
    // event 2453_6 : sets Pressed_C to 1; sets LClick to 1
    {
        if (!(group_code_1)) goto event_2453_6_end;
        interfaceButtons_instances.clear_selection();
        for (ObjectIterator it(interfaceButtons_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!interfaceButtons_instances.has_selection()) goto event_2453_6_end;
        if (!((get_mouse_y()) > (((Active*)get_single(interfaceButtons_instances, default_active_instance))->get_box_index(1)+44))) goto event_2453_6_end;
        if (!((get_mouse_y()) < (((Active*)get_single(interfaceButtons_instances, default_active_instance))->get_box_index(1)+66))) goto event_2453_6_end;
        if (group_code_1 && group_code_crafting_1) goto event_2453_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(57, str_lclick_203)) == (0))) goto event_2453_6_end;
        playerBase_instances.clear_selection();
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto event_2453_6_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto event_2453_6_end;
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
    event_2453_6_end: ;
}
// Function purpose: generated callback event_func_4219 processes event block(s) 2454_6. Actions/conditions:
//        2454_6: sets Pressed_C to 1; sets LClick to 1.
void Frames::event_func_4219()
{
    // event 2454_6 : sets Pressed_C to 1; sets LClick to 1
    {
        if (!(group_code_1)) goto event_2454_6_end;
        if (!(is_key_pressed_once(SDLK_9))) goto event_2454_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(910, str_pressed_c_2225)) == (0))) goto event_2454_6_end;
        if (group_code_1 && group_code_crafting_1) goto event_2454_6_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto event_2454_6_end;
        playerBase_instances.clear_selection();
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto event_2454_6_end;
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
    event_2454_6_end: ;
}
// Function purpose: generated callback event_func_4220 processes event block(s) 2455_6. Actions/conditions:
//        2455_6: sets the object's animation to 15; sets the selected object's direction to 0; sets the selected
//        object's visibility to true; plus 12 more actions.
void Frames::event_func_4220()
{
    // event 2455_6 : sets the object's animation to 15; sets the selected object's direction to 0; sets the selected object's visibility to true; plus 12 more actions
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2455_6_end;
        if (!group_check_group_code_crafting_1_0) goto event_2455_6_end;
        group_check_group_code_crafting_1_0 = false;
        ((Active*)get_instance(dialogPanel_instances))->force_animation(15);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(0);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        FrameObject * single_instance_2455_6_0; single_instance_2455_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + -66, parent->y + 14), parent->layer);
                if (single_instance_2455_6_0 == NULL)
                    single_instance_2455_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2455_6_0))->force_animation(22);
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
        FrameObject * single_instance_2455_6_1; single_instance_2455_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + -52), parent->layer);
                if (single_instance_2455_6_1 == NULL)
                    single_instance_2455_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_2455_6_1))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_2455_6_1)), frame_left())+5);
        ((Text*)((Text*)single_instance_2455_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_hud_2171, str_7_323)));
        ((Text*)((Text*)single_instance_2455_6_1))->blend_color.set(Color(255, 128, 0));
        ((Text*)((Text*)single_instance_2455_6_1))->set_bold(1);
    }
    event_2455_6_end: ;
}
// Function purpose: generated callback event_func_4221 processes event block(s) 2456_6. Actions/conditions:
//        2456_6: sets the object's animation to 0.
void Frames::event_func_4221()
{
    // event 2456_6 : sets the object's animation to 0
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2456_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_2456_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(15))) goto event_2456_6_end;
        if (!(((Active*)get_instance(interfaceButtons_instances))->test_animation(1))) goto event_2456_6_end;
        ((Active*)get_instance(interfaceButtons_instances))->force_animation(0);
    }
    event_2456_6_end: ;
}
// Function purpose: generated callback event_func_4222 processes event block(s) 2460_6. Actions/conditions:
//        2460_6: saves the current object selection; saves the current object selection; saves the current object
//        selection; plus 7 more actions.
void Frames::event_func_4222()
{
    // event 2460_6 : saves the current object selection; saves the current object selection; saves the current object selection; plus 7 more actions
    bool or_result_2460_6 = false;
    bool or_temp_result_2460_6_0 = false;
    {
        if (!(group_code_1 && group_code_crafting_1)) goto or_event_2460_6_0_end;
        interfaceButtons_instances.clear_selection();
        for (ObjectIterator it(interfaceButtons_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!interfaceButtons_instances.has_selection()) goto or_event_2460_6_0_end;
        if (!((get_mouse_y()) >= (((Active*)get_single(interfaceButtons_instances, default_active_instance))->get_box_index(1)+23))) goto or_event_2460_6_0_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(15))) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_2460_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(57, str_lclick_203)) == (0))) goto or_event_2460_6_0_end;
        or_result_2460_6 = true;
        or_temp_result_2460_6_0 = true;
    }
    or_event_2460_6_0_end: ;
    interfaceButtons_instances.clear_saved_selection();
    dialogPanel_instances.clear_saved_selection();
    if (or_temp_result_2460_6_0) {
        interfaceButtons_instances.save_selection();
        dialogPanel_instances.save_selection();
    }
    // event 2460_6 : saves the current object selection; saves the current object selection; saves the current object selection; plus 7 more actions
    bool or_temp_result_2460_6_2 = false;
    {
        if (!(group_code_1 && group_code_crafting_1)) goto or_event_2460_6_2_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto or_event_2460_6_2_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(15))) { it.deselect(); continue; }
            if (((Active*)(*it))->mouse_over()) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_2460_6_2_end;
        sidePanel_instances.clear_selection();
        for (ObjectIterator it(sidePanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) { it.deselect(); continue; }
        }
        if (!sidePanel_instances.has_selection()) goto or_event_2460_6_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(57, str_lclick_203)) == (0))) goto or_event_2460_6_2_end;
        or_result_2460_6 = true;
        or_temp_result_2460_6_2 = true;
        or_event_2460_6_2_end: ;
        sidePanel_instances.clear_saved_selection();
        if (or_temp_result_2460_6_2) {
            sidePanel_instances.save_selection();
            dialogPanel_instances.save_selection();
        }
        if (!or_result_2460_6) goto or_final_or_event_2460_6_2_end;
        interfaceButtons_instances.empty_selection();
        sidePanel_instances.empty_selection();
        dialogPanel_instances.empty_selection();
        if (or_temp_result_2460_6_2) {
            sidePanel_instances.restore_selection();
        }
        if (or_temp_result_2460_6_0) {
            interfaceButtons_instances.restore_selection();
        }
        if (or_temp_result_2460_6_0 || or_temp_result_2460_6_2) {
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
    or_final_or_event_2460_6_2_end: ;
}
// Function purpose: generated callback event_func_4223 processes event block(s) 2461_6. Actions/conditions:
//        2461_6: saves the current object selection; sets Pressed_C to 1; sets LClick to 1; plus 5 more actions.
void Frames::event_func_4223()
{
    // event 2461_6 : saves the current object selection; sets Pressed_C to 1; sets LClick to 1; plus 5 more actions
    bool or_result_2461_6 = false;
    bool or_temp_result_2461_6_1 = false;
    {
        if (!(group_code_1 && group_code_crafting_1)) goto or_event_2461_6_1_end;
        if (!(is_key_pressed_once(SDLK_ESCAPE))) goto or_event_2461_6_1_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(15))) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_2461_6_1_end;
        or_result_2461_6 = true;
        or_temp_result_2461_6_1 = true;
    }
    or_event_2461_6_1_end: ;
    dialogPanel_instances.clear_saved_selection();
    if (or_temp_result_2461_6_1) {
        dialogPanel_instances.save_selection();
    }
    // event 2461_6 : saves the current object selection; sets Pressed_C to 1; sets LClick to 1; plus 5 more actions
    bool or_temp_result_2461_6_3 = false;
    {
        if (!(group_code_1 && group_code_crafting_1)) goto or_event_2461_6_3_end;
        if (!(is_key_pressed_once(SDLK_9))) goto or_event_2461_6_3_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(910, str_pressed_c_2225)) == (0))) goto or_event_2461_6_3_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(15))) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_2461_6_3_end;
        or_result_2461_6 = true;
        or_temp_result_2461_6_3 = true;
        or_event_2461_6_3_end: ;
        if (or_temp_result_2461_6_3) {
            dialogPanel_instances.save_selection();
        }
        if (!or_result_2461_6) goto or_final_or_event_2461_6_3_end;
        dialogPanel_instances.empty_selection();
        if (or_temp_result_2461_6_1 || or_temp_result_2461_6_3) {
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
    or_final_or_event_2461_6_3_end: ;
}
// Function purpose: generated callback event_func_4224 processes event block(s) 2469_6. Actions/conditions:
//        2469_6: sets LClick to 1; sets Craft_GiveBack to -1; sets CraftOutput to -1; plus 1 more actions.
void Frames::event_func_4224()
{
    // event 2469_6 : sets LClick to 1; sets Craft_GiveBack to -1; sets CraftOutput to -1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2469_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(22))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_2469_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_2469_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(15))) goto event_2469_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2469_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(611, str_craft_giveback_1593, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 0);
        {
            loop_craft_check_running = true;
            int times = int(1);
            loop_craft_check_index = 0;
            while (loop_craft_check_index < times) {
                loop_craft_check_6();
                if (!loop_craft_check_running) break;
                loop_craft_check_index++;
            }
        }
    }
    event_2469_6_end: ;
}
// Function purpose: generated callback event_func_4225 processes event block(s) 2584_6. Actions/conditions:
//        2584_6: sets Pressed_P to 0.
void Frames::event_func_4225()
{
    // event 2584_6 : sets Pressed_P to 0
    {
        if (!(group_code_1)) goto event_2584_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(560, str_pressed_p_1469)) == (1))) goto event_2584_6_end;
        if (is_key_pressed(SDLK_8)) goto event_2584_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(560, str_pressed_p_1469, 0);
    }
    event_2584_6_end: ;
}
// Function purpose: generated callback event_func_4226 processes event block(s) 2585_6. Actions/conditions:
//        2585_6: sets Pressed_P to 1; sets LClick to 1.
void Frames::event_func_4226()
{
    // event 2585_6 : sets Pressed_P to 1; sets LClick to 1
    {
        if (!(group_code_1)) goto event_2585_6_end;
        interfaceButtons_instances.clear_selection();
        for (ObjectIterator it(interfaceButtons_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!interfaceButtons_instances.has_selection()) goto event_2585_6_end;
        if (!((get_mouse_y()) < (((Active*)get_single(interfaceButtons_instances, default_active_instance))->get_box_index(1)+22))) goto event_2585_6_end;
        if (group_code_1 && group_code_my_stats_1) goto event_2585_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(57, str_lclick_203)) == (0))) goto event_2585_6_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto event_2585_6_end;
        playerBase_instances.clear_selection();
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto event_2585_6_end;
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
            group_check_group_code_my_stats_1_7 = true;
            group_check_group_code_my_stats_1_6 = true;
            group_check_group_code_my_stats_1_5 = true;
            group_check_group_code_my_stats_1_4 = true;
            group_check_group_code_my_stats_1_9 = true;
            group_check_group_code_my_stats_1_8 = true;
            group_check_group_code_my_stats_1_17 = true;
            group_check_group_code_my_stats_1_16 = true;
            group_check_group_code_my_stats_1_15 = true;
            group_check_group_code_my_stats_1_14 = true;
            group_check_group_code_my_stats_1_13 = true;
            group_check_group_code_my_stats_1_12 = true;
            group_check_group_code_my_stats_1_11 = true;
            group_check_group_code_my_stats_1_10 = true;
            group_check_group_code_my_stats_1_18 = true;
        }
    }
    event_2585_6_end: ;
}
// Function purpose: generated callback event_func_4227 processes event block(s) 2586_6. Actions/conditions:
//        2586_6: sets Pressed_P to 1; sets LClick to 1.
void Frames::event_func_4227()
{
    // event 2586_6 : sets Pressed_P to 1; sets LClick to 1
    {
        if (!(group_code_1)) goto event_2586_6_end;
        if (!(is_key_pressed_once(SDLK_7))) goto event_2586_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(560, str_pressed_p_1469)) == (0))) goto event_2586_6_end;
        if (group_code_1 && group_code_my_stats_1) goto event_2586_6_end;
        playerBase_instances.clear_selection();
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto event_2586_6_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto event_2586_6_end;
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
            group_check_group_code_my_stats_1_7 = true;
            group_check_group_code_my_stats_1_6 = true;
            group_check_group_code_my_stats_1_5 = true;
            group_check_group_code_my_stats_1_4 = true;
            group_check_group_code_my_stats_1_9 = true;
            group_check_group_code_my_stats_1_8 = true;
            group_check_group_code_my_stats_1_17 = true;
            group_check_group_code_my_stats_1_16 = true;
            group_check_group_code_my_stats_1_15 = true;
            group_check_group_code_my_stats_1_14 = true;
            group_check_group_code_my_stats_1_13 = true;
            group_check_group_code_my_stats_1_12 = true;
            group_check_group_code_my_stats_1_11 = true;
            group_check_group_code_my_stats_1_10 = true;
            group_check_group_code_my_stats_1_18 = true;
        }
    }
    event_2586_6_end: ;
}
// Function purpose: generated callback event_func_4228 processes event block(s) 2587_6. Actions/conditions:
//        2587_6: removes the selected object.
void Frames::event_func_4228()
{
    // event 2587_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2587_6_end;
        if (!group_check_group_code_my_stats_1_0) goto event_2587_6_end;
        group_check_group_code_my_stats_1_0 = false;
        qualifier_16.clear_selection();
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (-1))) { it.deselect(); continue; }
        }
        if (!qualifier_16.has_selection()) goto event_2587_6_end;
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2587_6_end: ;
}
// Function purpose: generated callback event_func_4229 processes event block(s) 2588_6. Actions/conditions:
//        2588_6: sets the selected object's visibility to true; sets the object's animation to 19; plays a sound or
//        music track.
void Frames::event_func_4229()
{
    // event 2588_6 : sets the selected object's visibility to true; sets the object's animation to 19; plays a sound or music track
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2588_6_end;
        if (!group_check_group_code_my_stats_1_1) goto event_2588_6_end;
        group_check_group_code_my_stats_1_1 = false;
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(19);
        media.play_id(SOUND_OPEN_5, 1-1);
        {
            loop_prof_stat_texts_running = true;
            int times = int(1);
            loop_prof_stat_texts_index = 0;
            while (loop_prof_stat_texts_index < times) {
                loop_prof_stat_texts_6();
                if (!loop_prof_stat_texts_running) break;
                loop_prof_stat_texts_index++;
            }
        }
    }
    event_2588_6_end: ;
}
// Function purpose: generated callback event_func_4230 processes event block(s) 2592_6. Actions/conditions:
//        2592_6: adds a dchar 214 instance; sets the selected object's horizontal position to frame_left()+5; sets
//        the selected object's vertical position to dialogPanel->get_box_index(1)+7; plus 5 more actions.
void Frames::event_func_4230()
{
    // event 2592_6 : adds a dchar 214 instance; sets the selected object's horizontal position to frame_left()+5; sets the selected object's vertical position to dialogPanel->get_box_index(1)+7; plus 5 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2592_6_end;
        if (!group_check_group_code_my_stats_1_2) goto event_2592_6_end;
        group_check_group_code_my_stats_1_2 = false;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+7);
            ((Text*)*it)->set_string(((Active*)get_instance(playerBase_instances))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(234, 140, 0));
        }
    }
    event_2592_6_end: ;
}
// Function purpose: generated callback event_func_4231 processes event block(s) 2593_6. Actions/conditions:
//        2593_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 5 more actions.
void Frames::event_func_4231()
{
    // event 2593_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 5 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2593_6_end;
        if (!group_check_group_code_my_stats_1_3) goto event_2593_6_end;
        group_check_group_code_my_stats_1_3 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (empty_string))) goto event_2593_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_11_331)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+15);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
    }
    event_2593_6_end: ;
}
// Function purpose: generated callback event_func_4232 processes event block(s) 2594_6. Actions/conditions:
//        2594_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 5 more actions.
void Frames::event_func_4232()
{
    // event 2594_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 5 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2594_6_end;
        if (!group_check_group_code_my_stats_1_4) goto event_2594_6_end;
        group_check_group_code_my_stats_1_4 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_janitor_24))) goto event_2594_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2594_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_1_97)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+15);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
    }
    event_2594_6_end: ;
}
// Function purpose: generated callback event_func_4233 processes event block(s) 2595_6. Actions/conditions:
//        2595_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 5 more actions.
void Frames::event_func_4233()
{
    // event 2595_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 5 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2595_6_end;
        if (!group_check_group_code_my_stats_1_5) goto event_2595_6_end;
        group_check_group_code_my_stats_1_5 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_janitor_24))) goto event_2595_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2595_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_janitor_630)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+15);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
    }
    event_2595_6_end: ;
}
// Function purpose: generated callback event_func_4234 processes event block(s) 2596_6. Actions/conditions:
//        2596_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 5 more actions.
void Frames::event_func_4234()
{
    // event 2596_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 5 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2596_6_end;
        if (!group_check_group_code_my_stats_1_6) goto event_2596_6_end;
        group_check_group_code_my_stats_1_6 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_gardening_43))) goto event_2596_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_2_155)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+15);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
    }
    event_2596_6_end: ;
}
// Function purpose: generated callback event_func_4235 processes event block(s) 2597_6. Actions/conditions:
//        2597_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 5 more actions.
void Frames::event_func_4235()
{
    // event 2597_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 5 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2597_6_end;
        if (!group_check_group_code_my_stats_1_7) goto event_2597_6_end;
        group_check_group_code_my_stats_1_7 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_tailor_479))) goto event_2597_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2597_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_3_158)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+15);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
    }
    event_2597_6_end: ;
}
// Function purpose: generated callback event_func_4236 processes event block(s) 2598_6. Actions/conditions:
//        2598_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 5 more actions.
void Frames::event_func_4236()
{
    // event 2598_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 5 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2598_6_end;
        if (!group_check_group_code_my_stats_1_8) goto event_2598_6_end;
        group_check_group_code_my_stats_1_8 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_tailor_479))) goto event_2598_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2598_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_tailor_631)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+15);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
    }
    event_2598_6_end: ;
}
// Function purpose: generated callback event_func_4237 processes event block(s) 2599_6. Actions/conditions:
//        2599_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 5 more actions.
void Frames::event_func_4237()
{
    // event 2599_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 5 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2599_6_end;
        if (!group_check_group_code_my_stats_1_9) goto event_2599_6_end;
        group_check_group_code_my_stats_1_9 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_laundry_29))) goto event_2599_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_4_161)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+15);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
    }
    event_2599_6_end: ;
}
// Function purpose: generated callback event_func_4238 processes event block(s) 2600_6. Actions/conditions:
//        2600_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 5 more actions.
void Frames::event_func_4238()
{
    // event 2600_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 5 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2600_6_end;
        if (!group_check_group_code_my_stats_1_10) goto event_2600_6_end;
        group_check_group_code_my_stats_1_10 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_woodshop_21))) goto event_2600_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_5_164)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+15);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
    }
    event_2600_6_end: ;
}
// Function purpose: generated callback event_func_4239 processes event block(s) 2601_6. Actions/conditions:
//        2601_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 5 more actions.
void Frames::event_func_4239()
{
    // event 2601_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 5 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2601_6_end;
        if (!group_check_group_code_my_stats_1_11) goto event_2601_6_end;
        group_check_group_code_my_stats_1_11 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_metalshop_35))) goto event_2601_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_6_241)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+15);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
    }
    event_2601_6_end: ;
}
// Function purpose: generated callback event_func_4240 processes event block(s) 2602_6. Actions/conditions:
//        2602_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 5 more actions.
void Frames::event_func_4240()
{
    // event 2602_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 5 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2602_6_end;
        if (!group_check_group_code_my_stats_1_12) goto event_2602_6_end;
        group_check_group_code_my_stats_1_12 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_deliveries_577))) goto event_2602_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2602_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_7_323)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+15);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
    }
    event_2602_6_end: ;
}
// Function purpose: generated callback event_func_4241 processes event block(s) 2603_6. Actions/conditions:
//        2603_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 5 more actions.
void Frames::event_func_4241()
{
    // event 2603_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 5 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2603_6_end;
        if (!group_check_group_code_my_stats_1_13) goto event_2603_6_end;
        group_check_group_code_my_stats_1_13 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_deliveries_577))) goto event_2603_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2603_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_deliveries_634)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+15);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
    }
    event_2603_6_end: ;
}
// Function purpose: generated callback event_func_4242 processes event block(s) 2604_6. Actions/conditions:
//        2604_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 5 more actions.
void Frames::event_func_4242()
{
    // event 2604_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 5 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2604_6_end;
        if (!group_check_group_code_my_stats_1_14) goto event_2604_6_end;
        group_check_group_code_my_stats_1_14 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_library_25))) goto event_2604_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_8_325)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+15);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
    }
    event_2604_6_end: ;
}
// Function purpose: generated callback event_func_4243 processes event block(s) 2605_6. Actions/conditions:
//        2605_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 5 more actions.
void Frames::event_func_4243()
{
    // event 2605_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 5 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2605_6_end;
        if (!group_check_group_code_my_stats_1_15) goto event_2605_6_end;
        group_check_group_code_my_stats_1_15 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_mailman_556))) goto event_2605_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2605_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_9_327)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+15);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
    }
    event_2605_6_end: ;
}
// Function purpose: generated callback event_func_4244 processes event block(s) 2606_6. Actions/conditions:
//        2606_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 5 more actions.
void Frames::event_func_4244()
{
    // event 2606_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 5 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2606_6_end;
        if (!group_check_group_code_my_stats_1_16) goto event_2606_6_end;
        group_check_group_code_my_stats_1_16 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_mailman_556))) goto event_2606_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2606_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_mailman_633)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+15);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
    }
    event_2606_6_end: ;
}
// Function purpose: generated callback event_func_4245 processes event block(s) 2607_6. Actions/conditions:
//        2607_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 5 more actions.
void Frames::event_func_4245()
{
    // event 2607_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 5 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2607_6_end;
        if (!group_check_group_code_my_stats_1_17) goto event_2607_6_end;
        group_check_group_code_my_stats_1_17 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_kitchen_12))) goto event_2607_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_10_329)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+15);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
    }
    event_2607_6_end: ;
}
// Function purpose: generated callback event_func_4246 processes event block(s) 2608_6. Actions/conditions:
//        2608_6: checks scene is active; skips if my stats 1 18 event group is active; this handler gates a game
//        event without a direct value/object action.
void Frames::event_func_4246()
{
    // event 2608_6 : checks scene is active; skips if my stats 1 18 event group is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2608_6_end;
        if (!group_check_group_code_my_stats_1_18) goto event_2608_6_end;
        group_check_group_code_my_stats_1_18 = false;
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
                loop_stats_gear_6();
                if (!loop_stats_gear_running) break;
                loop_stats_gear_index++;
            }
        }
    }
    event_2608_6_end: ;
}
// Function purpose: generated callback event_func_4247 processes event block(s) 2618_6. Actions/conditions:
//        2618_6: checks scene is active; the event-specific game state condition is met; game state LClick; this
//        handler gates a game event without a direct value/object acti.
void Frames::event_func_4247()
{
    // event 2618_6 : checks scene is active; the event-specific game state condition is met; game state LClick; this handler gates a game event without a direct value/object acti
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2618_6_end;
        if (!(((Active*)get_instance(interfaceButtons_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_2618_6_end;
        if (!((get_mouse_y()) < (((Active*)get_instance(interfaceButtons_instances))->get_box_index(1)+23))) goto event_2618_6_end;
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2618_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2618_6_end;
        {
            loop_cl_profile_running = true;
            int times = int(1);
            loop_cl_profile_index = 0;
            while (loop_cl_profile_index < times) {
                loop_cl_profile_6();
                if (!loop_cl_profile_running) break;
                loop_cl_profile_index++;
            }
        }
    }
    event_2618_6_end: ;
}
// Function purpose: generated callback event_func_4248 processes event block(s) 2619_6. Actions/conditions:
//        2619_6: checks scene is active; the event-specific game state condition is met; skips if the event-specific
//        game state condition is met; game state LClick; this hand.
void Frames::event_func_4248()
{
    // event 2619_6 : checks scene is active; the event-specific game state condition is met; skips if the event-specific game state condition is met; game state LClick; this hand
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2619_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_2619_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->mouse_over()) goto event_2619_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2619_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2619_6_end;
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2619_6_end;
        {
            loop_cl_profile_running = true;
            int times = int(1);
            loop_cl_profile_index = 0;
            while (loop_cl_profile_index < times) {
                loop_cl_profile_6();
                if (!loop_cl_profile_running) break;
                loop_cl_profile_index++;
            }
        }
    }
    event_2619_6_end: ;
}
// Function purpose: generated callback event_func_4249 processes event block(s) 2620_6. Actions/conditions:
//        2620_6: checks scene is active; the required game action is held; the event-specific game state condition is
//        met; dialog is open; this handler gates a game event wit.
void Frames::event_func_4249()
{
    // event 2620_6 : checks scene is active; the required game action is held; the event-specific game state condition is met; dialog is open; this handler gates a game event wit
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2620_6_end;
        if (!(is_key_pressed_once(SDLK_ESCAPE))) goto event_2620_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(19))) goto event_2620_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_2620_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(561, str_esc_202)) == (0))) goto event_2620_6_end;
        {
            loop_cl_profile_running = true;
            int times = int(1);
            loop_cl_profile_index = 0;
            while (loop_cl_profile_index < times) {
                loop_cl_profile_6();
                if (!loop_cl_profile_running) break;
                loop_cl_profile_index++;
            }
        }
    }
    event_2620_6_end: ;
}
// Function purpose: generated callback event_func_4250 processes event block(s) 2621_6. Actions/conditions:
//        2621_6: checks scene is active; the required game action is held; game state Pressed_P; the event-specific
//        game state condition is met; this handler gates a game eve.
void Frames::event_func_4250()
{
    // event 2621_6 : checks scene is active; the required game action is held; game state Pressed_P; the event-specific game state condition is met; this handler gates a game eve
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2621_6_end;
        if (!(is_key_pressed_once(SDLK_7))) goto event_2621_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(560, str_pressed_p_1469)) == (0))) goto event_2621_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(19))) goto event_2621_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_2621_6_end;
        {
            loop_cl_profile_running = true;
            int times = int(1);
            loop_cl_profile_index = 0;
            while (loop_cl_profile_index < times) {
                loop_cl_profile_6();
                if (!loop_cl_profile_running) break;
                loop_cl_profile_index++;
            }
        }
    }
    event_2621_6_end: ;
}
// Function purpose: generated callback event_func_4251 processes event block(s) 2630_6. Actions/conditions:
//        2630_6: sets hmm to 0.
void Frames::event_func_4251()
{
    // event 2630_6 : sets hmm to 0
    {
        if (!(group_code_1)) goto event_2630_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(559, str_hmm_1468)) == (1))) goto event_2630_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2630_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(559, str_hmm_1468, 0);
        {
            loop_gimme_outfit_running = true;
            int times = int(1);
            loop_gimme_outfit_index = 0;
            while (loop_gimme_outfit_index < times) {
                loop_gimme_outfit_6();
                if (!loop_gimme_outfit_running) break;
                loop_gimme_outfit_index++;
            }
        }
    }
    event_2630_6_end: ;
}
// Function purpose: generated callback event_func_4252 processes event block(s) 2648_6. Actions/conditions:
//        2648_6: sets Pressed_J to 0.
void Frames::event_func_4252()
{
    // event 2648_6 : sets Pressed_J to 0
    {
        if (!(group_code_1)) goto event_2648_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(321, str_pressed_j_1102)) == (1))) goto event_2648_6_end;
        if (is_key_pressed(SDLK_j)) goto event_2648_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(321, str_pressed_j_1102, 0);
    }
    event_2648_6_end: ;
}
// Function purpose: generated callback event_func_4253 processes event block(s) 2649_6. Actions/conditions:
//        2649_6: checks scene is active; the event-specific game state condition is met; game state LClick; skips if
//        dialog is open; this handler gates a game event without a.
void Frames::event_func_4253()
{
    // event 2649_6 : checks scene is active; the event-specific game state condition is met; game state LClick; skips if dialog is open; this handler gates a game event without a
    {
        if (!(group_code_1)) goto event_2649_6_end;
        if (!(((Active*)get_instance(interfaceButtons_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_2649_6_end;
        if (!((get_mouse_y()) > (((Active*)get_instance(interfaceButtons_instances))->get_box_index(1)+22))) goto event_2649_6_end;
        if (!((get_mouse_y()) < (((Active*)get_instance(interfaceButtons_instances))->get_box_index(1)+44))) goto event_2649_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2649_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2649_6_end;
        {
            loop_open_journal_running = true;
            int times = int(1);
            loop_open_journal_index = 0;
            while (loop_open_journal_index < times) {
                loop_open_journal_6();
                if (!loop_open_journal_running) break;
                loop_open_journal_index++;
            }
        }
    }
    event_2649_6_end: ;
}
// Function purpose: generated callback event_func_4254 processes event block(s) 2650_6. Actions/conditions:
//        2650_6: checks scene is active; the required game action is held; game state Pressed_J; skips if dialog is
//        open; this handler gates a game event without a direct val.
void Frames::event_func_4254()
{
    // event 2650_6 : checks scene is active; the required game action is held; game state Pressed_J; skips if dialog is open; this handler gates a game event without a direct val
    {
        if (!(group_code_1)) goto event_2650_6_end;
        if (!(is_key_pressed_once(SDLK_8))) goto event_2650_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(321, str_pressed_j_1102)) == (0))) goto event_2650_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2650_6_end;
        {
            loop_open_journal_running = true;
            int times = int(1);
            loop_open_journal_index = 0;
            while (loop_open_journal_index < times) {
                loop_open_journal_6();
                if (!loop_open_journal_running) break;
                loop_open_journal_index++;
            }
        }
    }
    event_2650_6_end: ;
}
// Function purpose: generated callback event_func_4255 processes event block(s) 2652_6. Actions/conditions:
//        2652_6: sets the selected object's text; sets the selected object's direction to 0; removes the selected
//        object.
void Frames::event_func_4255()
{
    // event 2652_6 : sets the selected object's text; sets the selected object's direction to 0; removes the selected object
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2652_6_end;
        if (!group_check_group_code_journal_1_0) goto event_2652_6_end;
        group_check_group_code_journal_1_0 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(742, str_journal_1402)) == (1))) goto event_2652_6_end;
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_journal_1402, str_1_97)));
        }
        ((Active*)get_instance(dialogPanel_instances))->set_direction(0);
        buttontext_445_instances.clear_selection();
        for (ObjectIterator it(buttontext_445_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        {
            loop_craftnotes_des_icons_running = true;
            int times = int(1);
            loop_craftnotes_des_icons_index = 0;
            while (loop_craftnotes_des_icons_index < times) {
                loop_craftnotes_des_icons_6();
                if (!loop_craftnotes_des_icons_running) break;
                loop_craftnotes_des_icons_index++;
            }
        }
        {
            loop_journal_favours_running = true;
            int times = int(1);
            loop_journal_favours_index = 0;
            while (loop_journal_favours_index < times) {
                loop_journal_favours_6();
                if (!loop_journal_favours_running) break;
                loop_journal_favours_index++;
            }
        }
    }
    event_2652_6_end: ;
}
// Function purpose: generated callback event_func_4256 processes event block(s) 2655_6. Actions/conditions:
//        2655_6: sets the selected object's direction to 16; sets the selected object's text; sets J_page to 1; plus
//        8 more actions.
void Frames::event_func_4256()
{
    // event 2655_6 : sets the selected object's direction to 16; sets the selected object's text; sets J_page to 1; plus 8 more actions
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2655_6_end;
        if (!group_check_group_code_journal_1_1) goto event_2655_6_end;
        group_check_group_code_journal_1_1 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(742, str_journal_1402)) == (2))) goto event_2655_6_end;
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_journal_1402, str_2_155)));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(483, str_j_page_1358, 1);
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(108, str_craftnotes_665), str__254);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(484, str_j_maxpages_1359, get_ceil((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get_count()+0.0)/MathHelper()/4));
        FrameObject * single_instance_2655_6_0; single_instance_2655_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buttontext_445(parent->x + -37, parent->y + 88), parent->layer);
                if (single_instance_2655_6_0 == NULL)
                    single_instance_2655_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_2655_6_0))->blend_color.set(Color(165, 165, 165));
        ((Text*)((Text*)single_instance_2655_6_0))->set_string(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(483, str_j_page_1358)));
        {
            loop_journal_craftnotes_running = true;
            int times = int(4);
            loop_journal_craftnotes_index = 0;
            while (loop_journal_craftnotes_index < times) {
                loop_journal_craftnotes_6();
                if (!loop_journal_craftnotes_running) break;
                loop_journal_craftnotes_index++;
            }
        }
    }
    event_2655_6_end: ;
}
// Function purpose: generated callback event_func_4257 processes event block(s) 2661_6. Actions/conditions:
//        2661_6: sets LClick to 1; splits saved text into fields; removes a line from the current list; plus 1 more
//        actions.
void Frames::event_func_4257()
{
    // event 2661_6 : sets LClick to 1; splits saved text into fields; removes a line from the current list; plus 1 more actions
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2661_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(8))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_2661_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2661_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((ListObject*)get_instance(missions_298_instances))->get_line(((Active*)get_single(dialogButton_instances, default_active_instance))->alterables->values.get(13)), str__254);
        ((ListObject*)get_instance(missions_298_instances))->delete_line(((Active*)get_single(dialogButton_instances, default_active_instance))->alterables->values.get(13));
        {
            loop_canc_mish_running = true;
            int times = int(1);
            loop_canc_mish_index = 0;
            while (loop_canc_mish_index < times) {
                loop_canc_mish_6();
                if (!loop_canc_mish_running) break;
                loop_canc_mish_index++;
            }
        }
        {
            loop_journal_favours_running = true;
            int times = int(1);
            loop_journal_favours_index = 0;
            while (loop_journal_favours_index < times) {
                loop_journal_favours_6();
                if (!loop_journal_favours_running) break;
                loop_journal_favours_index++;
            }
        }
        media.play_id(SOUND_THROW_4, 1-1);
    }
    event_2661_6_end: ;
}
// Function purpose: generated callback event_func_4258 processes event block(s) 2672_6. Actions/conditions:
//        2672_6: sets the selected object's direction to 16; sets LClick to 1; sets Journal to 2; plus 1 more
//        actions.
void Frames::event_func_4258()
{
    // event 2672_6 : sets the selected object's direction to 16; sets LClick to 1; sets Journal to 2; plus 1 more actions
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2672_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_2672_6_end;
        if (!((get_mouse_y()) > (((Active*)get_instance(dialogPanel_instances))->get_y()-40))) goto event_2672_6_end;
        if (!((get_mouse_y()) < (((Active*)get_instance(dialogPanel_instances))->get_y()-20))) goto event_2672_6_end;
        if (!((get_mouse_x()) > (((Active*)get_instance(dialogPanel_instances))->get_box_index(2)-20))) goto event_2672_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(1))) goto event_2672_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->mouse_over())) goto event_2672_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2672_6_end;
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(742, str_journal_1402, 2);
        {
            loop_load_journal_craftnotes_running = true;
            int times = int(1);
            loop_load_journal_craftnotes_index = 0;
            while (loop_load_journal_craftnotes_index < times) {
                loop_load_journal_craftnotes_6();
                if (!loop_load_journal_craftnotes_running) break;
                loop_load_journal_craftnotes_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_2672_6_end: ;
}
// Function purpose: generated callback event_func_4259 processes event block(s) 2687_6. Actions/conditions:
//        2687_6: plays a sound or music track; sets the selected object's direction to 0; sets LClick to 1; plus 1
//        more actions.
void Frames::event_func_4259()
{
    // event 2687_6 : plays a sound or music track; sets the selected object's direction to 0; sets LClick to 1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2687_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_2687_6_end;
        if (!((get_mouse_x()) > (((Active*)get_instance(dialogPanel_instances))->get_box_index(2)-20))) goto event_2687_6_end;
        if (!((get_mouse_y()) > (((Active*)get_instance(dialogPanel_instances))->get_y()-70))) goto event_2687_6_end;
        if (!((get_mouse_y()) < (((Active*)get_instance(dialogPanel_instances))->get_y()-45))) goto event_2687_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(65536))) goto event_2687_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->mouse_over())) goto event_2687_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2687_6_end;
        media.play_id(SOUND_OPEN_5, 1-1);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(742, str_journal_1402, 1);
        {
            loop_load_journal_favours_running = true;
            int times = int(1);
            loop_load_journal_favours_index = 0;
            while (loop_load_journal_favours_index < times) {
                loop_load_journal_favours_6();
                if (!loop_load_journal_favours_running) break;
                loop_load_journal_favours_index++;
            }
        }
    }
    event_2687_6_end: ;
}
// Function purpose: generated callback event_func_4260 processes event block(s) 2695_6. Actions/conditions:
//        2695_6: sets the selected object's text.
void Frames::event_func_4260()
{
    // event 2695_6 : sets the selected object's text
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2695_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(65536))) goto event_2695_6_end;
        buttontext_445_instances.clear_selection();
        for (ObjectIterator it(buttontext_445_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(483, str_j_page_1358))+str__2226+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(484, str_j_maxpages_1359)));
        }
    }
    event_2695_6_end: ;
}
// Function purpose: generated callback event_func_4261 processes event block(s) 2696_6. Actions/conditions:
//        2696_6: sets J_maxpages to 1.
void Frames::event_func_4261()
{
    // event 2696_6 : sets J_maxpages to 1
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2696_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(65536))) goto event_2696_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(484, str_j_maxpages_1359)) < (1))) goto event_2696_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(484, str_j_maxpages_1359, 1);
    }
    event_2696_6_end: ;
}
// Function purpose: generated callback event_func_4262 processes event block(s) 2697_6. Actions/conditions:
//        2697_6: increments J_page by 1; splits saved text into fields; plays a sound or music track.
void Frames::event_func_4262()
{
    // event 2697_6 : increments J_page by 1; splits saved text into fields; plays a sound or music track
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2697_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_2697_6_end;
        if (!((get_mouse_x()) > (((Active*)get_instance(dialogPanel_instances))->get_x()))) goto event_2697_6_end;
        if (!((get_mouse_y()) > (((Active*)get_instance(dialogPanel_instances))->get_y()+70))) goto event_2697_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(65536))) goto event_2697_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->mouse_over())) goto event_2697_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2697_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(483, str_j_page_1358)) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(484, str_j_maxpages_1359)))) goto event_2697_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(483, str_j_page_1358, 1);
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(108, str_craftnotes_665), str__254);
        {
            loop_craftnotes_des_icons_running = true;
            int times = int(1);
            loop_craftnotes_des_icons_index = 0;
            while (loop_craftnotes_des_icons_index < times) {
                loop_craftnotes_des_icons_6();
                if (!loop_craftnotes_des_icons_running) break;
                loop_craftnotes_des_icons_index++;
            }
        }
        {
            loop_journal_craftnotes_running = true;
            int times = int(4);
            loop_journal_craftnotes_index = 0;
            while (loop_journal_craftnotes_index < times) {
                loop_journal_craftnotes_6();
                if (!loop_journal_craftnotes_running) break;
                loop_journal_craftnotes_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_2697_6_end: ;
}
// Function purpose: generated callback event_func_4263 processes event block(s) 2698_6. Actions/conditions:
//        2698_6: changes a stored game value; splits saved text into fields; plays a sound or music track.
void Frames::event_func_4263()
{
    // event 2698_6 : changes a stored game value; splits saved text into fields; plays a sound or music track
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2698_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_2698_6_end;
        if (!((get_mouse_x()) < (((Active*)get_instance(dialogPanel_instances))->get_x()))) goto event_2698_6_end;
        if (!((get_mouse_y()) > (((Active*)get_instance(dialogPanel_instances))->get_y()+70))) goto event_2698_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(65536))) goto event_2698_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->mouse_over())) goto event_2698_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2698_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(483, str_j_page_1358)) > (1))) goto event_2698_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(483, str_j_page_1358, 1);
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(108, str_craftnotes_665), str__254);
        {
            loop_craftnotes_des_icons_running = true;
            int times = int(1);
            loop_craftnotes_des_icons_index = 0;
            while (loop_craftnotes_des_icons_index < times) {
                loop_craftnotes_des_icons_6();
                if (!loop_craftnotes_des_icons_running) break;
                loop_craftnotes_des_icons_index++;
            }
        }
        {
            loop_journal_craftnotes_running = true;
            int times = int(4);
            loop_journal_craftnotes_index = 0;
            while (loop_journal_craftnotes_index < times) {
                loop_journal_craftnotes_6();
                if (!loop_journal_craftnotes_running) break;
                loop_journal_craftnotes_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_2698_6_end: ;
}
