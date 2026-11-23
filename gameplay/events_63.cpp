#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_tut_button_11()
{
    event_func_5299();
}
// Function purpose: generated callback event_func_5300 processes event block(s) 1121_11. Actions/conditions:
//        1121_11: removes the selected object.
void Frames::event_func_5300()
{
    // event 1121_11 : removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1121_11_end;
        water_715_instances.clear_selection();
        for (ObjectIterator it(water_715_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(228, str_toiletx_838)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(229, str_toilety_839)))) { it.deselect(); continue; }
        }
        if (!water_715_instances.has_selection()) goto event_1121_11_end;
        for (ObjectIterator it(water_715_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1121_11_end: ;
}
void Frames::loop_remove_bog_water_11()
{
    event_func_5300();
}
// Function purpose: generated callback event_func_5301 processes event block(s) 584_11. Actions/conditions:
//        584_11: removes the selected object.
void Frames::event_func_5301()
{
    // event 584_11 : removes the selected object
    {
        if (!(group_code_1)) goto event_584_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_584_11_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_584_11_end: ;
}
void Frames::loop_inv_clear_11()
{
    event_func_5301();
}
// Function purpose: generated callback event_func_5302 processes event block(s) 275_11. Actions/conditions:
//        275_11: creates a dchar 688 object; positions the target object; updates a value on the target object; plus
//        5 more actions.
void Frames::event_func_5302()
{
    // event 275_11 : creates a dchar 688 object; positions the target object; updates a value on the target object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_275_11_end;
        FrameObject * single_instance_275_11_0; single_instance_275_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -56), parent->layer);
                if (single_instance_275_11_0 == NULL)
                    single_instance_275_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_275_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_275_11_0)), frame_left())+6);
        ((Text*)((Text*)single_instance_275_11_0))->blend_color.set(Color(255, 128, 0));
        ((Text*)((Text*)single_instance_275_11_0))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_pausemenu_1094, str_5_164)));
        ((Text*)((Text*)single_instance_275_11_0))->set_bold(1);
    }
    event_275_11_end: ;
}
// Function purpose: generated callback event_func_5303 processes event block(s) 276_11. Actions/conditions:
//        276_11: creates a dchar 688 object; positions the target object; updates a value on the target object; plus
//        1 more actions.
void Frames::event_func_5303()
{
    // event 276_11 : creates a dchar 688 object; positions the target object; updates a value on the target object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_276_11_end;
        FrameObject * single_instance_276_11_0; single_instance_276_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -31), parent->layer);
                if (single_instance_276_11_0 == NULL)
                    single_instance_276_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_276_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_276_11_0)), frame_left())+6);
        ((Text*)((Text*)single_instance_276_11_0))->blend_color.set(Color(192, 192, 192));
        ((Text*)((Text*)single_instance_276_11_0))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_pausemenu_1094, str_1_97)));
    }
    event_276_11_end: ;
}
// Function purpose: generated callback event_func_5304 processes event block(s) 277_11. Actions/conditions:
//        277_11: creates a dchar 688 object; positions the target object; updates a value on the target object; plus
//        1 more actions.
void Frames::event_func_5304()
{
    // event 277_11 : creates a dchar 688 object; positions the target object; updates a value on the target object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_277_11_end;
        FrameObject * single_instance_277_11_0; single_instance_277_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -9), parent->layer);
                if (single_instance_277_11_0 == NULL)
                    single_instance_277_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_277_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_277_11_0)), frame_left())+6);
        ((Text*)((Text*)single_instance_277_11_0))->blend_color.set(Color(192, 192, 192));
        ((Text*)((Text*)single_instance_277_11_0))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_pausemenu_1094, str_2_155)));
    }
    event_277_11_end: ;
}
// Function purpose: generated callback event_func_5305 processes event block(s) 278_11. Actions/conditions:
//        278_11: creates a dchar 688 object; positions the target object; updates a value on the target object; plus
//        1 more actions.
void Frames::event_func_5305()
{
    // event 278_11 : creates a dchar 688 object; positions the target object; updates a value on the target object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_278_11_end;
        FrameObject * single_instance_278_11_0; single_instance_278_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + 13), parent->layer);
                if (single_instance_278_11_0 == NULL)
                    single_instance_278_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_278_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_278_11_0)), frame_left())+6);
        ((Text*)((Text*)single_instance_278_11_0))->blend_color.set(Color(192, 192, 192));
        ((Text*)((Text*)single_instance_278_11_0))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_pausemenu_1094, str_4_161)));
    }
    event_278_11_end: ;
}
// Function purpose: generated callback event_func_5306 processes event block(s) 279_11. Actions/conditions:
//        279_11: creates a buttons 699 object; sets the object's animation to 33.
void Frames::event_func_5306()
{
    // event 279_11 : creates a buttons 699 object; sets the object's animation to 33
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_279_11_end;
        FrameObject * single_instance_279_11_0; single_instance_279_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buttons_699(parent->x + 0, parent->y + -35), parent->layer);
                if (single_instance_279_11_0 == NULL)
                    single_instance_279_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_279_11_0))->force_animation(33);
    }
    event_279_11_end: ;
}
// Function purpose: generated callback event_func_5307 processes event block(s) 280_11. Actions/conditions:
//        280_11: creates a buttons 699 object; sets the object's animation to 34.
void Frames::event_func_5307()
{
    // event 280_11 : creates a buttons 699 object; sets the object's animation to 34
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_280_11_end;
        FrameObject * single_instance_280_11_0; single_instance_280_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buttons_699(parent->x + 0, parent->y + -13), parent->layer);
                if (single_instance_280_11_0 == NULL)
                    single_instance_280_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_280_11_0))->force_animation(34);
    }
    event_280_11_end: ;
}
// Function purpose: generated callback event_func_5308 processes event block(s) 281_11. Actions/conditions:
//        281_11: creates a buttons 699 object; sets the object's animation to 36.
void Frames::event_func_5308()
{
    // event 281_11 : creates a buttons 699 object; sets the object's animation to 36
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_281_11_end;
        FrameObject * single_instance_281_11_0; single_instance_281_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buttons_699(parent->x + 0, parent->y + 9), parent->layer);
                if (single_instance_281_11_0 == NULL)
                    single_instance_281_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_281_11_0))->force_animation(36);
    }
    event_281_11_end: ;
}
void Frames::loop_menubuttons_11()
{
    event_func_1194();
    event_func_5302();
    event_func_5303();
    event_func_5304();
    event_func_5305();
    event_func_5306();
    event_func_5307();
    event_func_5308();
}
// Function purpose: generated callback event_func_5309 processes event block(s) 935_11. Actions/conditions:
//        935_11: adds a outfitguard 248 instance; sets the selected object's numeric value to -1; sets the selected
//        object's numeric value to -1.
void Frames::event_func_5309()
{
    // event 935_11 : adds a outfitguard 248 instance; sets the selected object's numeric value to -1; sets the selected object's numeric value to -1
    {
        if (!(group_code_1)) goto event_935_11_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 2)) == (str_3_644))) goto event_935_11_end;
        outfitguard_248_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitguard_700(0, 0), 1);
            outfitguard_248_instances.add_back();
        }
        for (ObjectIterator it(outfitguard_248_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -1);
            ((Active*)*it)->alterables->values.set(25, -1);
        }
    }
    event_935_11_end: ;
}
// Function purpose: generated callback event_func_5310 processes event block(s) 936_11. Actions/conditions:
//        936_11: adds a outfitinmate 249 instance; sets the selected object's numeric value to -1; sets the selected
//        object's numeric value to -1.
void Frames::event_func_5310()
{
    // event 936_11 : adds a outfitinmate 249 instance; sets the selected object's numeric value to -1; sets the selected object's numeric value to -1
    {
        if (!(group_code_1)) goto event_936_11_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 2)) == (str_4_648))) goto event_936_11_end;
        outfitinmate_249_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmate_701(0, 0), 1);
            outfitinmate_249_instances.add_back();
        }
        for (ObjectIterator it(outfitinmate_249_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
            ((Active*)*it)->alterables->values.set(0, -1);
        }
    }
    event_936_11_end: ;
}
// Function purpose: generated callback event_func_5311 processes event block(s) 937_11. Actions/conditions:
//        937_11: adds a outfitinmate 249 instance; sets the selected object's numeric value to -1; sets the selected
//        object's numeric value to -1.
void Frames::event_func_5311()
{
    // event 937_11 : adds a outfitinmate 249 instance; sets the selected object's numeric value to -1; sets the selected object's numeric value to -1
    {
        if (!(group_code_1)) goto event_937_11_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 4)) == (str_130_649))) goto event_937_11_end;
        outfitinmate_249_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmate_701(0, 0), 1);
            outfitinmate_249_instances.add_back();
        }
        for (ObjectIterator it(outfitinmate_249_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
            ((Active*)*it)->alterables->values.set(0, -1);
        }
    }
    event_937_11_end: ;
}
// Function purpose: generated callback event_func_5312 processes event block(s) 938_11. Actions/conditions:
//        938_11: adds a outfitinmate 249 instance; sets the selected object's numeric value to -1; sets the selected
//        object's numeric value to -1.
void Frames::event_func_5312()
{
    // event 938_11 : adds a outfitinmate 249 instance; sets the selected object's numeric value to -1; sets the selected object's numeric value to -1
    {
        if (!(group_code_1)) goto event_938_11_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 4)) == (str_129_650))) goto event_938_11_end;
        outfitinmate_249_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmate_701(0, 0), 1);
            outfitinmate_249_instances.add_back();
        }
        for (ObjectIterator it(outfitinmate_249_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
            ((Active*)*it)->alterables->values.set(0, -1);
        }
    }
    event_938_11_end: ;
}
// Function purpose: generated callback event_func_5313 processes event block(s) 939_11. Actions/conditions:
//        939_11: adds a outfitinmate 249 instance; sets the selected object's numeric value to -1; sets the selected
//        object's numeric value to -1.
void Frames::event_func_5313()
{
    // event 939_11 : adds a outfitinmate 249 instance; sets the selected object's numeric value to -1; sets the selected object's numeric value to -1
    {
        if (!(group_code_1)) goto event_939_11_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 4)) == (str_128_651))) goto event_939_11_end;
        outfitinmate_249_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmate_701(0, 0), 1);
            outfitinmate_249_instances.add_back();
        }
        for (ObjectIterator it(outfitinmate_249_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
            ((Active*)*it)->alterables->values.set(0, -1);
        }
    }
    event_939_11_end: ;
}
// Function purpose: generated callback event_func_5314 processes event block(s) 941_11. Actions/conditions:
//        941_11: adds a outfitpow 376 instance; sets the selected object's numeric value to -1.
void Frames::event_func_5314()
{
    // event 941_11 : adds a outfitpow 376 instance; sets the selected object's numeric value to -1
    {
        if (!(group_code_1)) goto event_941_11_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 4)) == (str_127_654))) goto event_941_11_end;
        outfitpow_376_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitpow_747(0, 0), 1);
            outfitpow_376_instances.add_back();
        }
        for (ObjectIterator it(outfitpow_376_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
        }
    }
    event_941_11_end: ;
}
// Function purpose: generated callback event_func_5315 processes event block(s) 942_11. Actions/conditions:
//        942_11: adds a outfitpow 376 instance; sets the selected object's numeric value to -1.
void Frames::event_func_5315()
{
    // event 942_11 : adds a outfitpow 376 instance; sets the selected object's numeric value to -1
    {
        if (!(group_code_1)) goto event_942_11_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 4)) == (str_142_655))) goto event_942_11_end;
        outfitpow_376_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitpow_747(0, 0), 1);
            outfitpow_376_instances.add_back();
        }
        for (ObjectIterator it(outfitpow_376_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
        }
    }
    event_942_11_end: ;
}
// Function purpose: generated callback event_func_5316 processes event block(s) 943_11. Actions/conditions:
//        943_11: adds a outfitpow 376 instance; sets the selected object's numeric value to -1.
void Frames::event_func_5316()
{
    // event 943_11 : adds a outfitpow 376 instance; sets the selected object's numeric value to -1
    {
        if (!(group_code_1)) goto event_943_11_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 4)) == (str_143_656))) goto event_943_11_end;
        outfitpow_376_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitpow_747(0, 0), 1);
            outfitpow_376_instances.add_back();
        }
        for (ObjectIterator it(outfitpow_376_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
        }
    }
    event_943_11_end: ;
}
// Function purpose: generated callback event_func_5317 processes event block(s) 944_11. Actions/conditions:
//        944_11: adds a outfitpow 376 instance; sets the selected object's numeric value to -1.
void Frames::event_func_5317()
{
    // event 944_11 : adds a outfitpow 376 instance; sets the selected object's numeric value to -1
    {
        if (!(group_code_1)) goto event_944_11_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 4)) == (str_144_657))) goto event_944_11_end;
        outfitpow_376_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitpow_747(0, 0), 1);
            outfitpow_376_instances.add_back();
        }
        for (ObjectIterator it(outfitpow_376_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
        }
    }
    event_944_11_end: ;
}
void Frames::loop_gimme_outfit_11()
{
    event_func_5309();
    event_func_5310();
    event_func_5311();
    event_func_5312();
    event_func_5313();
    event_func_764();
    event_func_5314();
    event_func_5315();
    event_func_5316();
    event_func_5317();
}
// Function purpose: generated callback event_func_5318 processes event block(s) 444_11. Actions/conditions:
//        444_11: sets the selected object's vertical position to gameVariables->get_value(964, origY).
void Frames::event_func_5318()
{
    // event 444_11 : sets the selected object's vertical position to gameVariables->get_value(964, origY)
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_444_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(320, str_blocked_1101)) == (1))) goto event_444_11_end;
        ((Active*)get_instance(playerBase_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(964, str_origy_2439));
    }
    event_444_11_end: ;
}
void Frames::loop_move_check_y_11()
{
    event_func_5318();
    event_func_1205();
}
// Function purpose: generated callback event_func_5319 processes event block(s) 442_11. Actions/conditions:
//        442_11: sets the selected object's horizontal position to gameVariables->get_value(965, origX).
void Frames::event_func_5319()
{
    // event 442_11 : sets the selected object's horizontal position to gameVariables->get_value(965, origX)
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_442_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(320, str_blocked_1101)) == (1))) goto event_442_11_end;
        ((Active*)get_instance(playerBase_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(965, str_origx_2440));
    }
    event_442_11_end: ;
}
void Frames::loop_move_check_x_11()
{
    event_func_5319();
    event_func_1205();
}
// Function purpose: generated callback event_func_5320 processes event block(s) 595_11. Actions/conditions:
//        595_11: splits saved text into fields.
void Frames::event_func_5320()
{
    // event 595_11 : splits saved text into fields
    {
        if (!(group_code_1)) goto event_595_11_end;
        if (!((get_platform()) != (str_chowdren_os_x_60))) goto event_595_11_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(translationData_instances))->get_string(str_tut_2441, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(966, str_strnum_2442))), str__254);
    }
    event_595_11_end: ;
}
// Function purpose: generated callback event_func_5321 processes event block(s) 596_11. Actions/conditions:
//        596_11: splits saved text into fields.
void Frames::event_func_5321()
{
    // event 596_11 : splits saved text into fields
    {
        if (!(group_code_1)) goto event_596_11_end;
        if (!((get_platform()) == (str_chowdren_os_x_60))) goto event_596_11_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(translationData_instances))->get_string(str_tut_mac_2443, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(966, str_strnum_2442))), str__254);
    }
    event_596_11_end: ;
}
void Frames::loop_os_check_11()
{
    event_func_5320();
    event_func_5321();
}
// Function purpose: generated callback event_func_5322 processes event block(s) 203_11. Actions/conditions:
//        203_11: sets the selected object's numeric value to 25+randrange_event(50); sets the selected object's
//        numeric value to 25+randrange_event(50); sets the selected object's numeric value to 25+randrange_event(50);
//        plus 5 more actions.
void Frames::event_func_5322()
{
    // event 203_11 : sets the selected object's numeric value to 25+randrange_event(50); sets the selected object's numeric value to 25+randrange_event(50); sets the selected object's numeric value to 25+randrange_event(50); plus 5 more actions
    {
        if (!(group_setup_1)) goto event_203_11_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_set_stats_index+1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_203_11_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 25+randrange_event(50));
            ((Active*)*it)->alterables->values.set(9, 25+randrange_event(50));
            ((Active*)*it)->alterables->values.set(5, 25+randrange_event(50));
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->alterables->values.get(8)/MathHelper()/2);
            ((Active*)*it)->alterables->values.set(12, 15+(randrange_event(65)));
        }
    }
    event_203_11_end: ;
}
// Function purpose: generated callback event_func_5323 processes event block(s) 204_11. Actions/conditions:
//        204_11: sets the selected object's numeric value to 30+randrange_event(70); sets the selected object's
//        numeric value to 30+randrange_event(70); sets the selected object's numeric value to randrange_event(100);
//        plus 8 more actions.
void Frames::event_func_5323()
{
    // event 204_11 : sets the selected object's numeric value to 30+randrange_event(70); sets the selected object's numeric value to 30+randrange_event(70); sets the selected object's numeric value to randrange_event(100); plus 8 more actions
    {
        if (!(group_setup_1)) goto event_204_11_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_set_stats_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_204_11_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 30+randrange_event(70));
            ((Active*)*it)->alterables->values.set(9, 30+randrange_event(70));
            ((Active*)*it)->alterables->values.set(5, randrange_event(100));
            ((Active*)*it)->alterables->values.set(12, 30+randrange_event(70));
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->alterables->values.get(8)/MathHelper()/2);
            ((Active*)*it)->alterables->strings.set(1, str_0_0_0_0_734);
            ((Active*)*it)->get_movement()->set_speed(4+(((Active*)*it)->alterables->values.get(9)/MathHelper()/15));
        }
        ((ListObject*)get_instance(listinmates_217_instances))->add_line(((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(0));
    }
    event_204_11_end: ;
}
void Frames::loop_set_stats_11()
{
    event_func_5322();
    event_func_5323();
}
// Function purpose: generated callback event_func_5324 processes event block(s) 746_11. Actions/conditions:
//        746_11: sets a game or interface text string.
void Frames::event_func_5324()
{
    // event 746_11 : sets a game or interface text string
    {
        if (!(group_code_1 && group_code_mouseovers_item_hovers_holding_shift_1)) goto event_746_11_end;
        if (!((((INI*)get_instance(itemsdb_693_instances))->get_string_default(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_info_348, empty_string)) != (empty_string))) goto event_746_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(235, str_itemstr_854, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854)+((INI*)get_instance(itemsdb_693_instances))->get_string_default(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_info_348, empty_string)+str__198);
    }
    event_746_11_end: ;
}
// Function purpose: generated callback event_func_5325 processes event block(s) 747_11. Actions/conditions:
//        747_11: sets a game or interface text string.
void Frames::event_func_5325()
{
    // event 747_11 : sets a game or interface text string
    {
        if (!(group_code_1 && group_code_mouseovers_item_hovers_holding_shift_1)) goto event_747_11_end;
        if (!((((INI*)get_instance(itemsdb_693_instances))->get_value(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_fat_852, 0)) > (0))) goto event_747_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(235, str_itemstr_854, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854)+str_restores_2444+number_to_string(((INI*)get_instance(itemsdb_693_instances))->get_value(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_fat_852, 0))+str_fatigue_2445);
    }
    event_747_11_end: ;
}
// Function purpose: generated callback event_func_5326 processes event block(s) 748_11. Actions/conditions:
//        748_11: sets a game or interface text string.
void Frames::event_func_5326()
{
    // event 748_11 : sets a game or interface text string
    {
        if (!(group_code_1 && group_code_mouseovers_item_hovers_holding_shift_1)) goto event_748_11_end;
        if (!((((INI*)get_instance(itemsdb_693_instances))->get_value(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_hp_855, 0)) > (0))) goto event_748_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(235, str_itemstr_854, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854)+str_restores_2444+number_to_string(((INI*)get_instance(itemsdb_693_instances))->get_value(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_hp_855, 0))+str_health_2446);
    }
    event_748_11_end: ;
}
// Function purpose: generated callback event_func_5327 processes event block(s) 749_11. Actions/conditions:
//        749_11: sets a game or interface text string.
void Frames::event_func_5327()
{
    // event 749_11 : sets a game or interface text string
    {
        if (!(group_code_1 && group_code_mouseovers_item_hovers_holding_shift_1)) goto event_749_11_end;
        if (!((((INI*)get_instance(itemsdb_693_instances))->get_value(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_digging_726, 0)) > (0))) goto event_749_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(235, str_itemstr_854, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854)+str_digging_2447+number_to_string(((INI*)get_instance(itemsdb_693_instances))->get_value(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_digging_726, 0))+str_5_858);
    }
    event_749_11_end: ;
}
// Function purpose: generated callback event_func_5328 processes event block(s) 750_11. Actions/conditions:
//        750_11: sets a game or interface text string.
void Frames::event_func_5328()
{
    // event 750_11 : sets a game or interface text string
    {
        if (!(group_code_1 && group_code_mouseovers_item_hovers_holding_shift_1)) goto event_750_11_end;
        if (!((((INI*)get_instance(itemsdb_693_instances))->get_value(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_cutting_727, 0)) > (0))) goto event_750_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(235, str_itemstr_854, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854)+str_cutting_2448+number_to_string(((INI*)get_instance(itemsdb_693_instances))->get_value(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_cutting_727, 0))+str_5_858);
    }
    event_750_11_end: ;
}
// Function purpose: generated callback event_func_5329 processes event block(s) 751_11. Actions/conditions:
//        751_11: sets a game or interface text string.
void Frames::event_func_5329()
{
    // event 751_11 : sets a game or interface text string
    {
        if (!(group_code_1 && group_code_mouseovers_item_hovers_holding_shift_1)) goto event_751_11_end;
        if (!((((INI*)get_instance(itemsdb_693_instances))->get_value(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_unscrewing_729, 0)) > (0))) goto event_751_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(235, str_itemstr_854, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854)+str_unscrewing_2449+number_to_string((((INI*)get_instance(itemsdb_693_instances))->get_value(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_unscrewing_729, 0)))+str_5_858);
    }
    event_751_11_end: ;
}
// Function purpose: generated callback event_func_5330 processes event block(s) 752_11. Actions/conditions:
//        752_11: sets a game or interface text string.
void Frames::event_func_5330()
{
    // event 752_11 : sets a game or interface text string
    {
        if (!(group_code_1 && group_code_mouseovers_item_hovers_holding_shift_1)) goto event_752_11_end;
        if (!((((INI*)get_instance(itemsdb_693_instances))->get_value(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_chipping_728, 0)) > (0))) goto event_752_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(235, str_itemstr_854, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854)+str_chipping_2450+number_to_string(((INI*)get_instance(itemsdb_693_instances))->get_value(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_chipping_728, 0))+str_5_858);
    }
    event_752_11_end: ;
}
// Function purpose: generated callback event_func_5331 processes event block(s) 753_11. Actions/conditions:
//        753_11: sets a game or interface text string.
void Frames::event_func_5331()
{
    // event 753_11 : sets a game or interface text string
    {
        if (!(group_code_1 && group_code_mouseovers_item_hovers_holding_shift_1)) goto event_753_11_end;
        if (!((((INI*)get_instance(itemsdb_693_instances))->get_value(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_weapon_704, 0)) > (0))) goto event_753_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(235, str_itemstr_854, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854)+str_weapon_2451+number_to_string(((INI*)get_instance(itemsdb_693_instances))->get_value(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_weapon_704, 0))+str_5_858);
    }
    event_753_11_end: ;
}
// Function purpose: generated callback event_func_5332 processes event block(s) 754_11. Actions/conditions:
//        754_11: sets a game or interface text string.
void Frames::event_func_5332()
{
    // event 754_11 : sets a game or interface text string
    {
        if (!(group_code_1 && group_code_mouseovers_item_hovers_holding_shift_1)) goto event_754_11_end;
        if (!((((INI*)get_instance(itemsdb_693_instances))->get_value(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_outfit_505, 0)) > (1))) goto event_754_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(235, str_itemstr_854, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854)+str__859+number_to_string(((INI*)get_instance(itemsdb_693_instances))->get_value(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_outfit_505, 0)-1)+str_def_2452);
    }
    event_754_11_end: ;
}
void Frames::loop_make_item_str_11()
{
    event_func_5324();
    event_func_5325();
    event_func_5326();
    event_func_5327();
    event_func_5328();
    event_func_5329();
    event_func_5330();
    event_func_5331();
    event_func_5332();
    event_func_1018();
}
// Function purpose: generated callback event_func_5333 processes event block(s) 1405_11. Actions/conditions:
//        1405_11: adds a itemshud 210 instance; sets the selected object's numeric value to 67; sets the selected
//        object's numeric value to -1; plus 10 more actions.
void Frames::event_func_5333()
{
    // event 1405_11 : adds a itemshud 210 instance; sets the selected object's numeric value to 67; sets the selected object's numeric value to -1; plus 10 more actions
    {
        if (!(group_code_1)) goto event_1405_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_1405_11_end;
        hudItem_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_itemshud_687(-16, -16), 5);
            hudItem_instances.add_back();
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 67);
            ((Active*)*it)->alterables->values.set(7, -1);
            ((Active*)*it)->alterables->values.set(6, 1);
            ((Active*)*it)->alterables->strings.set(0, str_inven_820);
            ((Active*)*it)->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832));
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_1405_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1405_11_1: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(-2);
        }
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)), str_67_1_1792);
    }
    event_1405_11_end: ;
}
void Frames::loop_collect_vent_11()
{
    event_func_5333();
}
// Function purpose: generated callback event_func_5334 processes event block(s) 1334_11. Actions/conditions:
//        1334_11: adds a soil 173 instance; sets the selected object's horizontal position to
//        gameVariables->get_value(236, CutX)*16; sets the selected object's vertical position to
//        gameVariables->get_value(237, CutY)*16; plus 7 more actions.
void Frames::event_func_5334()
{
    // event 1334_11 : adds a soil 173 instance; sets the selected object's horizontal position to gameVariables->get_value(236, CutX)*16; sets the selected object's vertical position to gameVariables->get_value(237, CutY)*16; plus 7 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cutting_2_1)) goto event_1334_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_1334_11_end;
        if (!((((ArrayObject*)get_instance(fencearray_265_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(236, str_cutx_861), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(237, str_cuty_862), ((Active*)get_instance(playerBase_instances))->layer->index+1)) >= (100))) goto event_1334_11_end;
        soil_173_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_soil_675(-16, -16), 0);
            soil_173_instances.add_back();
        }
        for (ObjectIterator it(soil_173_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(236, str_cutx_861)*16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(237, str_cuty_862)*16);
            ((Active*)*it)->paste(0);
            ((Active*)*it)->destroy();
        }
        guardalert_266_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guardalert_266(0, 0), 0);
            guardalert_266_instances.add_back();
        }
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(236, str_cutx_861)*16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(237, str_cuty_862)*16);
            ((Active*)*it)->alterables->strings.set(0, str_cutfenceug_868);
        }
    }
    event_1334_11_end: ;
}
void Frames::loop_check_complete_fencecut_11()
{
    event_func_1020();
    event_func_1021();
    event_func_1022();
    event_func_1023();
    event_func_5334();
}
// Function purpose: generated callback event_func_5335 processes event block(s) 190_11. Actions/conditions:
//        190_11: sets a stored numeric value.
void Frames::event_func_5335()
{
    // event 190_11 : sets a stored numeric value
    {
        if (!(group_setup_1)) goto event_190_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(str_npc_avatar_520+number_to_string(loop_create_inmates_index+1), randrange_event(9));
    }
    event_190_11_end: ;
}
// Function purpose: generated callback event_func_5336 processes event block(s) 191_11. Actions/conditions:
//        191_11: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_5336()
{
    // event 191_11 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_191_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (0))) goto event_191_11_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_191_11_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_191_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_191_11_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmate4_193_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmate4_683(-16, -16), 1);
            inmate4_193_instances.add_back();
        }
        for (ObjectIterator it(inmate4_193_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmate4_193_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_191_11_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_191_11_3: ;
        }
    }
    event_191_11_end: ;
}
// Function purpose: generated callback event_func_5337 processes event block(s) 192_11. Actions/conditions:
//        192_11: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_5337()
{
    // event 192_11 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_192_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (1))) goto event_192_11_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_192_11_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_192_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_192_11_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmate3_192_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmate3_682(-16, -16), 1);
            inmate3_192_instances.add_back();
        }
        for (ObjectIterator it(inmate3_192_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmate3_192_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_192_11_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_192_11_3: ;
        }
    }
    event_192_11_end: ;
}
// Function purpose: generated callback event_func_5338 processes event block(s) 193_11. Actions/conditions:
//        193_11: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_5338()
{
    // event 193_11 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_193_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (2))) goto event_193_11_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_193_11_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_193_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_193_11_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmate2_190_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmate2_681(-16, -16), 1);
            inmate2_190_instances.add_back();
        }
        for (ObjectIterator it(inmate2_190_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmate2_190_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_193_11_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_193_11_3: ;
        }
    }
    event_193_11_end: ;
}
// Function purpose: generated callback event_func_5339 processes event block(s) 194_11. Actions/conditions:
//        194_11: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_5339()
{
    // event 194_11 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_194_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (3))) goto event_194_11_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_194_11_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_194_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_194_11_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmate7_286_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmate7_708(-16, -16), 1);
            inmate7_286_instances.add_back();
        }
        for (ObjectIterator it(inmate7_286_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmate7_286_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_194_11_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_194_11_3: ;
        }
    }
    event_194_11_end: ;
}
// Function purpose: generated callback event_func_5340 processes event block(s) 195_11. Actions/conditions:
//        195_11: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_5340()
{
    // event 195_11 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_195_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (4))) goto event_195_11_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_195_11_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_195_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_195_11_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmate11_290_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmate11_712(-16, -16), 1);
            inmate11_290_instances.add_back();
        }
        for (ObjectIterator it(inmate11_290_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmate11_290_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_195_11_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_195_11_3: ;
        }
    }
    event_195_11_end: ;
}
// Function purpose: generated callback event_func_5341 processes event block(s) 196_11. Actions/conditions:
//        196_11: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_5341()
{
    // event 196_11 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_196_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (5))) goto event_196_11_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_196_11_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_196_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_196_11_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmate10_289_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmate10_711(-16, -16), 1);
            inmate10_289_instances.add_back();
        }
        for (ObjectIterator it(inmate10_289_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmate10_289_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_196_11_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_196_11_3: ;
        }
    }
    event_196_11_end: ;
}
// Function purpose: generated callback event_func_5342 processes event block(s) 197_11. Actions/conditions:
//        197_11: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_5342()
{
    // event 197_11 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_197_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (6))) goto event_197_11_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_197_11_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_197_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_197_11_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmate8_287_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmate8_709(-16, -16), 1);
            inmate8_287_instances.add_back();
        }
        for (ObjectIterator it(inmate8_287_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmate8_287_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_197_11_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_197_11_3: ;
        }
    }
    event_197_11_end: ;
}
// Function purpose: generated callback event_func_5343 processes event block(s) 198_11. Actions/conditions:
//        198_11: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_5343()
{
    // event 198_11 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_198_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (7))) goto event_198_11_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_198_11_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_198_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_198_11_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmate9_288_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmate9_710(-16, -16), 1);
            inmate9_288_instances.add_back();
        }
        for (ObjectIterator it(inmate9_288_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmate9_288_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_198_11_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_198_11_3: ;
        }
    }
    event_198_11_end: ;
}
// Function purpose: generated callback event_func_5344 processes event block(s) 199_11. Actions/conditions:
//        199_11: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_5344()
{
    // event 199_11 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_199_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (8))) goto event_199_11_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_199_11_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_199_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_199_11_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmate_175_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmate_676(-16, -16), 1);
            inmate_175_instances.add_back();
        }
        for (ObjectIterator it(inmate_175_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmate_175_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_199_11_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_199_11_3: ;
        }
    }
    event_199_11_end: ;
}
// Function purpose: generated callback event_func_5345 processes event block(s) 201_11. Actions/conditions:
//        201_11: adds a outfitinmate 249 instance; sets the selected object's numeric value to qualifier_14.size();
//        sets the object position in the world; plus 1 more actions.
void Frames::event_func_5345()
{
    // event 201_11 : adds a outfitinmate 249 instance; sets the selected object's numeric value to qualifier_14.size(); sets the object position in the world; plus 1 more actions
    {
        if (!(group_setup_1)) goto event_201_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) != (str_camp_504))) goto event_201_11_end;
        outfitinmate_249_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmate_701(-16, -16), 1);
            outfitinmate_249_instances.add_back();
        }
        for (ObjectIterator it(outfitinmate_249_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(outfitinmate_249_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_201_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_201_11_1: ;
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(qualifier_14.size()), str_4_100_506);
    }
    event_201_11_end: ;
}
// Function purpose: generated callback event_func_5346 processes event block(s) 202_11. Actions/conditions:
//        202_11: adds a outfitpow 376 instance; sets the selected object's numeric value to qualifier_14.size(); sets
//        the object position in the world; plus 1 more actions.
void Frames::event_func_5346()
{
    // event 202_11 : adds a outfitpow 376 instance; sets the selected object's numeric value to qualifier_14.size(); sets the object position in the world; plus 1 more actions
    {
        if (!(group_setup_1)) goto event_202_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) == (str_camp_504))) goto event_202_11_end;
        outfitpow_376_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitpow_747(0, 0), 1);
            outfitpow_376_instances.add_back();
        }
        for (ObjectIterator it(outfitpow_376_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(outfitpow_376_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_202_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_202_11_1: ;
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(qualifier_14.size()), str_127_100_507);
    }
    event_202_11_end: ;
}
void Frames::loop_create_inmates_11()
{
    event_func_5335();
    event_func_5336();
    event_func_5337();
    event_func_5338();
    event_func_5339();
    event_func_5340();
    event_func_5341();
    event_func_5342();
    event_func_5343();
    event_func_5344();
    event_func_811();
    event_func_5345();
    event_func_5346();
}
// Function purpose: generated callback event_func_5347 processes event block(s) 290_11. Actions/conditions:
//        290_11: creates a buttons 699 object; sets the object's animation to 37.
void Frames::event_func_5347()
{
    // event 290_11 : creates a buttons 699 object; sets the object's animation to 37
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_290_11_end;
        FrameObject * single_instance_290_11_0; single_instance_290_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buttons_699(parent->x + 0, parent->y + 60), parent->layer);
                if (single_instance_290_11_0 == NULL)
                    single_instance_290_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_290_11_0))->force_animation(37);
    }
    event_290_11_end: ;
}
// Function purpose: generated callback event_func_5348 processes event block(s) 292_11. Actions/conditions:
//        292_11: creates a dialogue2 677 object; sets a game or interface text string.
void Frames::event_func_5348()
{
    // event 292_11 : creates a dialogue2 677 object; sets a game or interface text string
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_292_11_end;
        FrameObject * single_instance_292_11_0; single_instance_292_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_tutorialDialogText(parent->x + -55, parent->y + -56), parent->layer);
                if (single_instance_292_11_0 == NULL)
                    single_instance_292_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_292_11_0))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_1_97));
    }
    event_292_11_end: ;
}
// Function purpose: generated callback event_func_5349 processes event block(s) 293_11. Actions/conditions:
//        293_11: creates a dialogue2 677 object; sets a game or interface text string.
void Frames::event_func_5349()
{
    // event 293_11 : creates a dialogue2 677 object; sets a game or interface text string
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_293_11_end;
        FrameObject * single_instance_293_11_0; single_instance_293_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_tutorialDialogText(parent->x + -55, parent->y + -22), parent->layer);
                if (single_instance_293_11_0 == NULL)
                    single_instance_293_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_293_11_0))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_2_155));
    }
    event_293_11_end: ;
}
// Function purpose: generated callback event_func_5350 processes event block(s) 294_11. Actions/conditions:
//        294_11: creates a dialogue2 677 object; sets a game or interface text string.
void Frames::event_func_5350()
{
    // event 294_11 : creates a dialogue2 677 object; sets a game or interface text string
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_294_11_end;
        FrameObject * single_instance_294_11_0; single_instance_294_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_tutorialDialogText(parent->x + -55, parent->y + 12), parent->layer);
                if (single_instance_294_11_0 == NULL)
                    single_instance_294_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_294_11_0))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_3_158));
    }
    event_294_11_end: ;
}
// Function purpose: generated callback event_func_5351 processes event block(s) 299_11. Actions/conditions:
//        299_11: creates a slider 357 object; sets the object's animation to 6; sets the target object's direction;
//        plus 7 more actions.
void Frames::event_func_5351()
{
    // event 299_11 : creates a slider 357 object; sets the object's animation to 6; sets the target object's direction; plus 7 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_299_11_end;
        FrameObject * single_instance_299_11_0; single_instance_299_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_settingsSlider(parent->x + -50, parent->y + 22), parent->layer);
                if (single_instance_299_11_0 == NULL)
                    single_instance_299_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_299_11_0))->force_animation(6);
        ((Active*)((Active*)single_instance_299_11_0))->set_direction(0);
        ((Active*)((Active*)single_instance_299_11_0))->alterables->strings.set(0, str_full_58);
        FrameObject * single_instance_299_11_1; single_instance_299_11_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_tutorialDialogText(((Active*)single_instance_299_11_0)->x + 17, ((Active*)single_instance_299_11_0)->y + 2), ((Active*)single_instance_299_11_0)->layer);
            if (single_instance_299_11_1 == NULL)
                single_instance_299_11_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_299_11_1))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_4_161)));
        ((Text*)((Text*)single_instance_299_11_1))->blend_color.set(Color(120, 120, 120));
    }
    event_299_11_end: ;
}
// Function purpose: generated callback event_func_5352 processes event block(s) 300_11. Actions/conditions:
//        300_11: creates a slider 357 object; sets the object's animation to 5; sets the target object's direction;
//        plus 7 more actions.
void Frames::event_func_5352()
{
    // event 300_11 : creates a slider 357 object; sets the object's animation to 5; sets the target object's direction; plus 7 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_300_11_end;
        FrameObject * single_instance_300_11_0; single_instance_300_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_settingsSlider(parent->x + -50, parent->y + 35), parent->layer);
                if (single_instance_300_11_0 == NULL)
                    single_instance_300_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_300_11_0))->force_animation(5);
        ((Active*)((Active*)single_instance_300_11_0))->set_direction(0);
        ((Active*)((Active*)single_instance_300_11_0))->alterables->strings.set(0, str_win_670);
        FrameObject * single_instance_300_11_1; single_instance_300_11_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_tutorialDialogText(((Active*)single_instance_300_11_0)->x + 17, ((Active*)single_instance_300_11_0)->y + 2), ((Active*)single_instance_300_11_0)->layer);
            if (single_instance_300_11_1 == NULL)
                single_instance_300_11_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_300_11_1))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_5_164)));
        ((Text*)((Text*)single_instance_300_11_1))->blend_color.set(Color(120, 120, 120));
    }
    event_300_11_end: ;
}
// Function purpose: generated callback event_func_5353 processes event block(s) 301_11. Actions/conditions:
//        301_11: creates a dchar 688 object; positions the target object; updates a value on the target object; plus
//        5 more actions.
void Frames::event_func_5353()
{
    // event 301_11 : creates a dchar 688 object; positions the target object; updates a value on the target object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_301_11_end;
        FrameObject * single_instance_301_11_0; single_instance_301_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -77), parent->layer);
                if (single_instance_301_11_0 == NULL)
                    single_instance_301_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_301_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_301_11_0)), frame_left())+6);
        ((Text*)((Text*)single_instance_301_11_0))->blend_color.set(Color(255, 128, 0));
        ((Text*)((Text*)single_instance_301_11_0))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_217, str_3_158)));
        ((Text*)((Text*)single_instance_301_11_0))->set_bold(1);
    }
    event_301_11_end: ;
}
// Function purpose: generated callback event_func_5354 processes event block(s) 302_11. Actions/conditions:
//        302_11: creates a dchar 688 object; positions the target object; updates a value on the target object; plus
//        1 more actions.
void Frames::event_func_5354()
{
    // event 302_11 : creates a dchar 688 object; positions the target object; updates a value on the target object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_302_11_end;
        FrameObject * single_instance_302_11_0; single_instance_302_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + 64), parent->layer);
                if (single_instance_302_11_0 == NULL)
                    single_instance_302_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_302_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_302_11_0)), frame_left())+5);
        ((Text*)((Text*)single_instance_302_11_0))->blend_color.set(Color(192, 192, 192));
        ((Text*)((Text*)single_instance_302_11_0))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_16_219)));
    }
    event_302_11_end: ;
}
void Frames::loop_menuoptions_11()
{
    event_func_814();
    event_func_815();
    event_func_5347();
    event_func_817();
    event_func_5348();
    event_func_5349();
    event_func_5350();
    event_func_821();
    event_func_822();
    event_func_823();
    event_func_824();
    event_func_5351();
    event_func_5352();
    event_func_5353();
    event_func_5354();
    event_func_5350();
}
// Function purpose: generated callback event_func_5355 processes event block(s) 167_11. Actions/conditions:
//        167_11: adds a player0 673 instance.
void Frames::event_func_5355()
{
    // event 167_11 : adds a player0 673 instance
    {
        if (!(group_setup_1)) goto event_167_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(40, str_avatar_105)) == (0))) goto event_167_11_end;
        player0_673_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_player0_673(0, 0), 1);
            player0_673_instances.add_back();
        }
    }
    event_167_11_end: ;
}
// Function purpose: generated callback event_func_5356 processes event block(s) 168_11. Actions/conditions:
//        168_11: adds a player1 738 instance.
void Frames::event_func_5356()
{
    // event 168_11 : adds a player1 738 instance
    {
        if (!(group_setup_1)) goto event_168_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(40, str_avatar_105)) == (1))) goto event_168_11_end;
        player1_738_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_player1_738(0, 0), 1);
            player1_738_instances.add_back();
        }
    }
    event_168_11_end: ;
}
// Function purpose: generated callback event_func_5357 processes event block(s) 169_11. Actions/conditions:
//        169_11: adds a player2 739 instance.
void Frames::event_func_5357()
{
    // event 169_11 : adds a player2 739 instance
    {
        if (!(group_setup_1)) goto event_169_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(40, str_avatar_105)) == (2))) goto event_169_11_end;
        player2_739_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_player2_739(0, 0), 1);
            player2_739_instances.add_back();
        }
    }
    event_169_11_end: ;
}
// Function purpose: generated callback event_func_5358 processes event block(s) 170_11. Actions/conditions:
//        170_11: adds a player3 740 instance.
void Frames::event_func_5358()
{
    // event 170_11 : adds a player3 740 instance
    {
        if (!(group_setup_1)) goto event_170_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(40, str_avatar_105)) == (3))) goto event_170_11_end;
        player3_740_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_player3_740(0, 0), 1);
            player3_740_instances.add_back();
        }
    }
    event_170_11_end: ;
}
// Function purpose: generated callback event_func_5359 processes event block(s) 171_11. Actions/conditions:
//        171_11: adds a player4 741 instance.
void Frames::event_func_5359()
{
    // event 171_11 : adds a player4 741 instance
    {
        if (!(group_setup_1)) goto event_171_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(40, str_avatar_105)) == (4))) goto event_171_11_end;
        player4_741_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_player4_741(0, 0), 1);
            player4_741_instances.add_back();
        }
    }
    event_171_11_end: ;
}
// Function purpose: generated callback event_func_5360 processes event block(s) 172_11. Actions/conditions:
//        172_11: adds a player5 742 instance.
void Frames::event_func_5360()
{
    // event 172_11 : adds a player5 742 instance
    {
        if (!(group_setup_1)) goto event_172_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(40, str_avatar_105)) == (5))) goto event_172_11_end;
        player5_742_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_player5_742(0, 0), 1);
            player5_742_instances.add_back();
        }
    }
    event_172_11_end: ;
}
// Function purpose: generated callback event_func_5361 processes event block(s) 173_11. Actions/conditions:
//        173_11: adds a player6 371 instance.
void Frames::event_func_5361()
{
    // event 173_11 : adds a player6 371 instance
    {
        if (!(group_setup_1)) goto event_173_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(40, str_avatar_105)) == (6))) goto event_173_11_end;
        player6_371_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_player6_743(0, 0), 1);
            player6_371_instances.add_back();
        }
    }
    event_173_11_end: ;
}
// Function purpose: generated callback event_func_5362 processes event block(s) 174_11. Actions/conditions:
//        174_11: adds a player7 372 instance.
void Frames::event_func_5362()
{
    // event 174_11 : adds a player7 372 instance
    {
        if (!(group_setup_1)) goto event_174_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(40, str_avatar_105)) == (7))) goto event_174_11_end;
        player7_372_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_player7_744(0, 0), 1);
            player7_372_instances.add_back();
        }
    }
    event_174_11_end: ;
}
// Function purpose: generated callback event_func_5363 processes event block(s) 175_11. Actions/conditions:
//        175_11: adds a player8 745 instance.
void Frames::event_func_5363()
{
    // event 175_11 : adds a player8 745 instance
    {
        if (!(group_setup_1)) goto event_175_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(40, str_avatar_105)) == (8))) goto event_175_11_end;
        player8_745_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_player8_745(0, 0), 1);
            player8_745_instances.add_back();
        }
    }
    event_175_11_end: ;
}
// Function purpose: generated callback event_func_5364 processes event block(s) 176_11. Actions/conditions:
//        176_11: sets OutfitShort to 4; sets Outfit to 4_100; adds a outfitinmate 249 instance; plus 5 more actions.
void Frames::event_func_5364()
{
    // event 176_11 : sets OutfitShort to 4; sets Outfit to 4_100; adds a outfitinmate 249 instance; plus 5 more actions
    {
        if (!(group_setup_1)) goto event_176_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(31, str_outfitshort_494, 4);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(44, str_outfit_505, str_4_100_506);
        outfitinmate_249_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmate_701(0, 0), 1);
            outfitinmate_249_instances.add_back();
        }
        for (ObjectIterator it(outfitinmate_249_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
            ((Active*)*it)->alterables->values.set(0, -1);
        }
    }
    event_176_11_end: ;
}
void Frames::loop_pavatar_11()
{
    event_func_5355();
    event_func_5356();
    event_func_5357();
    event_func_5358();
    event_func_5359();
    event_func_5360();
    event_func_5361();
    event_func_5362();
    event_func_5363();
    event_func_5364();
}
// Function purpose: generated callback event_func_5365 processes event block(s) 1027_11. Actions/conditions:
//        1027_11: sets source to Misc entry 1; sets a game or interface text string; creates a dchar 688 object; plus
//        8 more actions.
void Frames::event_func_5365()
{
    // event 1027_11 : sets source to Misc entry 1; sets a game or interface text string; creates a dchar 688 object; plus 8 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1027_11_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1027_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_1_97));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_name_693, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(0)));
        FrameObject * single_instance_1027_11_0; single_instance_1027_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1027_11_0 == NULL)
                    single_instance_1027_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_1027_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_1027_11_0)), frame_left())+5);
        ((Text*)((Text*)single_instance_1027_11_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_y()-37);
        ((Text*)((Text*)single_instance_1027_11_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
        ((Text*)((Text*)single_instance_1027_11_0))->blend_color.set(Color(234, 140, 0));
        ((Text*)((Text*)single_instance_1027_11_0))->move_front();
    }
    event_1027_11_end: ;
}
// Function purpose: generated callback event_func_5366 processes event block(s) 1028_11. Actions/conditions:
//        1028_11: sets a game or interface text string; sets thisName to
//        StringReplace::replace(translationData->get_string(Misc, 43), $name, gameVariables->get_string(131,
//        thisName)); sets source to Misc entry 1; plus 10 more actions.
void Frames::event_func_5366()
{
    // event 1028_11 : sets a game or interface text string; sets thisName to StringReplace::replace(translationData->get_string(Misc, 43), $name, gameVariables->get_string(131, thisName)); sets source to Misc entry 1; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1028_11_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1028_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(131, str_thisname_694, StringReplace::replace(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->strings.get(0), str_officer_637, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(131, str_thisname_694, StringReplace::replace(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_43_695), str_name_693, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(131, str_thisname_694)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_1_97));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_name_693, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(131, str_thisname_694)));
        FrameObject * single_instance_1028_11_0; single_instance_1028_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1028_11_0 == NULL)
                    single_instance_1028_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_1028_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_1028_11_0)), frame_left())+5);
        ((Text*)((Text*)single_instance_1028_11_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_y()-37);
        ((Text*)((Text*)single_instance_1028_11_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
        ((Text*)((Text*)single_instance_1028_11_0))->blend_color.set(Color(123, 167, 255));
        ((Text*)((Text*)single_instance_1028_11_0))->move_front();
    }
    event_1028_11_end: ;
}
void Frames::loop_build_loot_gear_slots_11()
{
    event_func_5365();
    event_func_5366();
    event_func_859();
    event_func_860();
}
// Function purpose: generated callback event_func_5367 processes event block(s) 969_11. Actions/conditions:
//        969_11: splits saved text into fields; creates a itemshud 687 object; sets the selected object's numeric
//        value to string_to_number(stringtokenizer_81->get(0)); plus 10 more actions.
void Frames::event_func_5367()
{
    // event 969_11 : splits saved text into fields; creates a itemshud 687 object; sets the selected object's numeric value to string_to_number(stringtokenizer_81->get(0)); plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_969_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_fill_loo_slots_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_toilet_533))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_969_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_toilet_533+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(134, str_currenttoilet_699))+str_slot_617+number_to_string(loop_fill_loo_slots_index+1))) != (empty_string))) goto event_969_11_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_toilet_533+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(134, str_currenttoilet_699))+str_slot_617+number_to_string(loop_fill_loo_slots_index+1)), str__96);
        FrameObject * single_instance_969_11_0; single_instance_969_11_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemshud_687(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_969_11_0 == NULL)
                    single_instance_969_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_969_11_0))->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((Active*)((Active*)single_instance_969_11_0))->set_scale(2);
        ((Active*)((Active*)single_instance_969_11_0))->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((Active*)((Active*)single_instance_969_11_0))->alterables->values.set(1, loop_fill_loo_slots_index+1);
        ((Active*)((Active*)single_instance_969_11_0))->alterables->strings.set(1, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2));
        ((Active*)((Active*)single_instance_969_11_0))->alterables->strings.set(0, str_toilet_533);
        ((Active*)((Active*)single_instance_969_11_0))->alterables->flags.enable(-2);
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
    }
    event_969_11_end: ;
}
void Frames::loop_fill_loo_slots_11()
{
    event_func_5367();
}
// Function purpose: generated callback event_func_5368 processes event block(s) 1349_11. Actions/conditions:
//        1349_11: increments JobQuota by 11.
void Frames::event_func_5368()
{
    // event 1349_11 : increments JobQuota by 11
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_weeding_1)) goto event_1349_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_gardening_43))) goto event_1349_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_1349_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(18, str_jobquota_480, 11);
    }
    event_1349_11_end: ;
}
// Function purpose: generated callback event_func_5369 processes event block(s) 1350_11. Actions/conditions:
//        1350_11: sets the selected object's numeric value to 0.
void Frames::event_func_5369()
{
    // event 1350_11 : sets the selected object's numeric value to 0
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_weeding_1)) goto event_1350_11_end;
        usespot_208_instances.clear_selection();
        dirt_697_instances.clear_selection();
        if (!check_overlap(usespot_208_instances, dirt_697_instances)) goto event_1350_11_end;
        for (ObjectIterator it(dirt_697_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1350_11_end: ;
}
void Frames::loop_weed_fin_11()
{
    event_func_1052();
    event_func_5368();
    event_func_5369();
    event_func_1055();
}
// Function purpose: generated callback event_func_5370 processes event block(s) 1035_11. Actions/conditions:
//        1035_11: creates a itemshud 687 object; sets the selected object's numeric value to
//        string_to_number(stringtokenizer_81->get(0)); sets the selected object's numeric value to
//        string_to_number(stringtokenizer_81->get(1)); plus 9 more actions.
void Frames::event_func_5370()
{
    // event 1035_11 : creates a itemshud 687 object; sets the selected object's numeric value to string_to_number(stringtokenizer_81->get(0)); sets the selected object's numeric value to string_to_number(stringtokenizer_81->get(1)); plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1035_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_fill_loot_slots_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_448))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_1035_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_451+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452))+str_inv_911+number_to_string(loop_fill_loot_slots_index+1))) != (empty_string))) goto event_1035_11_end;
        FrameObject * single_instance_1035_11_0; single_instance_1035_11_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemshud_687(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1035_11_0 == NULL)
                    single_instance_1035_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1035_11_0))->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((Active*)((Active*)single_instance_1035_11_0))->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((Active*)((Active*)single_instance_1035_11_0))->alterables->values.set(12, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((Active*)((Active*)single_instance_1035_11_0))->alterables->values.set(1, loop_fill_loot_slots_index+1);
        ((Active*)((Active*)single_instance_1035_11_0))->alterables->strings.set(1, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2));
        ((Active*)((Active*)single_instance_1035_11_0))->alterables->strings.set(0, str_loot_448);
        ((Active*)((Active*)single_instance_1035_11_0))->alterables->flags.enable(-2);
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
    }
    event_1035_11_end: ;
}
void Frames::loop_fill_loot_slots_11()
{
    event_func_1064();
    event_func_5370();
    event_func_1066();
}
void Frames::loop_attack_em_11()
{
    event_func_2071();
}
// Function purpose: generated callback event_func_5371 processes event block(s) 694_11. Actions/conditions:
//        694_11: adds a icons 433 instance; sets the selected object's direction to 8; sets the selected object's
//        horizontal position to gameVariables->get_value(343, IconX); plus 5 more actions.
void Frames::event_func_5371()
{
    // event 694_11 : adds a icons 433 instance; sets the selected object's direction to 8; sets the selected object's horizontal position to gameVariables->get_value(343, IconX); plus 5 more actions
    {
        if (!(group_code_1)) goto event_694_11_end;
        icons_433_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_icons_763(0, 0), 5);
            icons_433_instances.add_back();
        }
        for (ObjectIterator it(icons_433_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(343, str_iconx_1136));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(344, str_icony_1137));
            ((Active*)*it)->alterables->values.set(25, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(345, str_iconz_1138));
        }
    }
    event_694_11_end: ;
}
void Frames::loop_icon_heat_11()
{
    event_func_5371();
}
// Function purpose: generated callback event_func_5372 processes event block(s) 916_11. Actions/conditions:
//        916_11: splits saved text into fields; activates the get(0 event group; sets the selected object's numeric
//        value to 1; plus 11 more actions.
void Frames::event_func_5372()
{
    // event 916_11 : splits saved text into fields; activates the get(0 event group; sets the selected object's numeric value to 1; plus 11 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_916_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505)) != (empty_string))) goto event_916_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_outfit_505))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_916_11_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), str__96);
        ((INI*)get_instance(itemData_instances))->set_group(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        hudItem_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_itemshud_687(-16, -16), 5);
            hudItem_instances.add_back();
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_916_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_916_11_1: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(0, str_outfit_505);
            ((Active*)*it)->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
            ((Active*)*it)->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
            ((Active*)*it)->alterables->values.set(6, ((INI*)get_instance(itemData_instances))->get_value_int(str_illegal_618));
            ((Active*)*it)->alterables->flags.enable(-2);
            ((Active*)*it)->set_scale(2);
        }
    }
    event_916_11_end: ;
}
// Function purpose: generated callback event_func_5373 processes event block(s) 918_11. Actions/conditions:
//        918_11: splits saved text into fields; activates the get(0 event group; sets the selected object's numeric
//        value to 1; plus 11 more actions.
void Frames::event_func_5373()
{
    // event 918_11 : splits saved text into fields; activates the get(0 event group; sets the selected object's numeric value to 1; plus 11 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_918_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(139, str_weapon_704)) != (empty_string))) goto event_918_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_weapon_704))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_918_11_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(139, str_weapon_704), str__96);
        ((INI*)get_instance(itemData_instances))->set_group(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        hudItem_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_itemshud_687(-16, -16), 5);
            hudItem_instances.add_back();
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_918_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_918_11_1: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(0, str_weapon_704);
            ((Active*)*it)->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
            ((Active*)*it)->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
            ((Active*)*it)->alterables->values.set(6, ((INI*)get_instance(itemData_instances))->get_value_int(str_illegal_618));
            ((Active*)*it)->alterables->flags.enable(-2);
            ((Active*)*it)->set_scale(2);
        }
    }
    event_918_11_end: ;
}
void Frames::loop_stats_gear_11()
{
    event_func_877();
    event_func_5372();
    event_func_879();
    event_func_5373();
    event_func_881();
    event_func_882();
}
// Function purpose: generated callback event_func_5374 processes event block(s) 967_11. Actions/conditions:
//        967_11: sets Xpos to -46; sets Ypos to -4; creates a dchar 688 object; plus 7 more actions.
void Frames::event_func_5374()
{
    // event 967_11 : sets Xpos to -46; sets Ypos to -4; creates a dchar 688 object; plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_967_11_end;
        if (!((loop_build_loo_slots_index) == (0))) goto event_967_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(140, str_xpos_705, -46);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(80, str_ypos_193, -4);
        FrameObject * single_instance_967_11_0; single_instance_967_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -10), parent->layer);
                if (single_instance_967_11_0 == NULL)
                    single_instance_967_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_967_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_967_11_0)), frame_left()));
        ((Text*)((Text*)single_instance_967_11_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+7);
        ((Text*)((Text*)single_instance_967_11_0))->set_string(str_toilet_533);
        ((Text*)((Text*)single_instance_967_11_0))->blend_color.set(Color(120, 120, 120));
    }
    event_967_11_end: ;
}
void Frames::loop_build_loo_slots_11()
{
    event_func_5374();
    event_func_1239();
}
// Function purpose: generated callback event_func_5375 processes event block(s) 693_11. Actions/conditions:
//        693_11: adds a icons 433 instance; sets the selected object's direction to 16; sets the selected object's
//        horizontal position to gameVariables->get_value(343, IconX); plus 5 more actions.
void Frames::event_func_5375()
{
    // event 693_11 : adds a icons 433 instance; sets the selected object's direction to 16; sets the selected object's horizontal position to gameVariables->get_value(343, IconX); plus 5 more actions
    {
        if (!(group_code_1)) goto event_693_11_end;
        icons_433_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_icons_763(0, 0), 5);
            icons_433_instances.add_back();
        }
        for (ObjectIterator it(icons_433_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(343, str_iconx_1136));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(344, str_icony_1137));
            ((Active*)*it)->alterables->values.set(25, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(345, str_iconz_1138));
        }
    }
    event_693_11_end: ;
}
void Frames::loop_icon_thumbdown_11()
{
    event_func_5375();
}
