#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_5376 processes event block(s) 1214_11. Actions/conditions:
//        1214_11: removes the selected object.
void Frames::event_func_5376()
{
    // event 1214_11 : removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1214_11_end;
        guardalert_266_instances.clear_selection();
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_brokenwall_600))) { it.deselect(); continue; }
        }
        if (!guardalert_266_instances.has_selection()) goto event_1214_11_end;
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1214_11_end: ;
}
void Frames::loop_wallremovealert_11()
{
    event_func_5376();
}
// Function purpose: generated callback event_func_5377 processes event block(s) 975_11. Actions/conditions:
//        975_11: adds a water 715 instance; sets the selected object's horizontal position to
//        gameVariables->get_value(441, toiletX); sets the selected object's vertical position to
//        gameVariables->get_value(442, toiletY); plus 5 more actions.
void Frames::event_func_5377()
{
    // event 975_11 : adds a water 715 instance; sets the selected object's horizontal position to gameVariables->get_value(441, toiletX); sets the selected object's vertical position to gameVariables->get_value(442, toiletY); plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_975_11_end;
        water_715_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_water_715(0, 0), 1);
            water_715_instances.add_back();
        }
        for (ObjectIterator it(water_715_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(441, str_toiletx_1300));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(442, str_toilety_1301));
            ((Active*)*it)->alterables->values.set(4, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(441, str_toiletx_1300));
            ((Active*)*it)->alterables->values.set(5, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(442, str_toilety_1301));
        }
    }
    event_975_11_end: ;
}
// Function purpose: generated callback event_func_5378 processes event block(s) 976_11. Actions/conditions:
//        976_11: adds a water 715 instance; sets the selected object's horizontal position to
//        gameVariables->get_value(441, toiletX)+8; sets the selected object's vertical position to
//        gameVariables->get_value(442, toiletY); plus 5 more actions.
void Frames::event_func_5378()
{
    // event 976_11 : adds a water 715 instance; sets the selected object's horizontal position to gameVariables->get_value(441, toiletX)+8; sets the selected object's vertical position to gameVariables->get_value(442, toiletY); plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_976_11_end;
        water_715_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_water_715(0, 0), 1);
            water_715_instances.add_back();
        }
        for (ObjectIterator it(water_715_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(441, str_toiletx_1300)+8);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(442, str_toilety_1301));
            ((Active*)*it)->alterables->values.set(4, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(441, str_toiletx_1300));
            ((Active*)*it)->alterables->values.set(5, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(442, str_toilety_1301));
        }
    }
    event_976_11_end: ;
}
// Function purpose: generated callback event_func_5379 processes event block(s) 977_11. Actions/conditions:
//        977_11: adds a water 715 instance; sets the selected object's horizontal position to
//        gameVariables->get_value(441, toiletX); sets the selected object's vertical position to
//        gameVariables->get_value(442, toiletY)+8; plus 5 more actions.
void Frames::event_func_5379()
{
    // event 977_11 : adds a water 715 instance; sets the selected object's horizontal position to gameVariables->get_value(441, toiletX); sets the selected object's vertical position to gameVariables->get_value(442, toiletY)+8; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_977_11_end;
        water_715_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_water_715(0, 0), 1);
            water_715_instances.add_back();
        }
        for (ObjectIterator it(water_715_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(441, str_toiletx_1300));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(442, str_toilety_1301)+8);
            ((Active*)*it)->alterables->values.set(4, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(441, str_toiletx_1300));
            ((Active*)*it)->alterables->values.set(5, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(442, str_toilety_1301));
        }
    }
    event_977_11_end: ;
}
// Function purpose: generated callback event_func_5380 processes event block(s) 978_11. Actions/conditions:
//        978_11: adds a water 715 instance; sets the selected object's horizontal position to
//        gameVariables->get_value(441, toiletX)+8; sets the selected object's vertical position to
//        gameVariables->get_value(442, toiletY)+8; plus 5 more actions.
void Frames::event_func_5380()
{
    // event 978_11 : adds a water 715 instance; sets the selected object's horizontal position to gameVariables->get_value(441, toiletX)+8; sets the selected object's vertical position to gameVariables->get_value(442, toiletY)+8; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_978_11_end;
        water_715_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_water_715(0, 0), 1);
            water_715_instances.add_back();
        }
        for (ObjectIterator it(water_715_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(441, str_toiletx_1300)+8);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(442, str_toilety_1301)+8);
            ((Active*)*it)->alterables->values.set(4, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(441, str_toiletx_1300));
            ((Active*)*it)->alterables->values.set(5, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(442, str_toilety_1301));
        }
    }
    event_978_11_end: ;
}
void Frames::loop_flush_water_11()
{
    event_func_5377();
    event_func_5378();
    event_func_5379();
    event_func_5380();
}
// Function purpose: generated callback event_func_5381 processes event block(s) 652_11. Actions/conditions:
//        652_11: moves the selected object to the front.
void Frames::event_func_5381()
{
    // event 652_11 : moves the selected object to the front
    {
        if (!(group_code_1)) goto event_652_11_end;
        scan_187_instances.clear_selection();
        serviceNpc_instances.clear_selection();
        if (!check_overlap(scan_187_instances, serviceNpc_instances)) goto event_652_11_end;
        ((Active*)get_instance(serviceNpc_instances))->move_front();
    }
    event_652_11_end: ;
}
void Frames::loop_scan_11()
{
    event_func_671();
    event_func_672();
    event_func_5381();
    event_func_675();
    event_func_676();
    event_func_677();
}
// Function purpose: generated callback event_func_5382 processes event block(s) 1215_11. Actions/conditions:
//        1215_11: sets string to Hovers entry 65; sets string to
//        StringReplace::replace(gameVariables->get_string(900, string), $name,
//        gameVariables->get_string(167, MapWarden)); creates a dialogue2 677 object; plus 14 more actions.
void Frames::event_func_5382()
{
    // event 1215_11 : sets string to Hovers entry 65; sets string to StringReplace::replace(gameVariables->get_string(900, string), $name, gameVariables->get_string(167, MapWarden)); creates a dialogue2 677 object; plus 14 more actions
    {
        if (!(group_code_1)) goto event_1215_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, ((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_65_904));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345), str_name_693, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(167, str_mapwarden_744)));
        FrameObject * single_instance_1215_11_0; single_instance_1215_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_tutorialDialogText(parent->x + -70, parent->y + 30), parent->layer);
                if (single_instance_1215_11_0 == NULL)
                    single_instance_1215_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_1215_11_0))->set_x(((Active*)get_instance(dialogPanel_instances))->get_box_index(0)+12);
        ((Text*)((Text*)single_instance_1215_11_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(3)-22);
        ((Text*)((Text*)single_instance_1215_11_0))->blend_color.set(Color(0, 84, 128));
        ((Text*)((Text*)single_instance_1215_11_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345));
        FrameObject * single_instance_1215_11_1; single_instance_1215_11_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buttons_699(parent->x + 65, parent->y + 35), parent->layer);
                if (single_instance_1215_11_1 == NULL)
                    single_instance_1215_11_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1215_11_1))->set_x(((Active*)get_instance(dialogPanel_instances))->get_box_index(2)-90);
        ((Active*)((Active*)single_instance_1215_11_1))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(3)-25);
        ((Active*)((Active*)single_instance_1215_11_1))->force_animation(43);
        FrameObject * single_instance_1215_11_2; single_instance_1215_11_2 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_1215_11_1)->x + 3, ((Active*)single_instance_1215_11_1)->y + 3), ((Active*)single_instance_1215_11_1)->layer);
            if (single_instance_1215_11_2 == NULL)
                single_instance_1215_11_2 = new_obj;
        }
        ((Text*)((Text*)single_instance_1215_11_2))->blend_color.set(Color(150, 150, 150));
        ((Text*)((Text*)single_instance_1215_11_2))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_6_241)));
    }
    event_1215_11_end: ;
}
void Frames::loop_letter_warden_11()
{
    event_func_5382();
}
// Function purpose: generated callback event_func_5383 processes event block(s) 284_11. Actions/conditions:
//        284_11: removes the selected object; sets the selected object's visibility to false.
void Frames::event_func_5383()
{
    // event 284_11 : removes the selected object; sets the selected object's visibility to false
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_284_11_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        settingsSlider_instances.clear_selection();
        for (ObjectIterator it(settingsSlider_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
            group_code_menu_1 = false;
    
    }
    event_284_11_end: ;
}
void Frames::loop_menu_close_11()
{
    event_func_5383();
}
// Function purpose: generated callback event_func_5384 processes event block(s) 588_11. Actions/conditions:
//        588_11: sets the selected object's direction to 16.
void Frames::event_func_5384()
{
    // event 588_11 : sets the selected object's direction to 16
    {
        if (!(group_code_1)) goto event_588_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(356, str_tutstrlen_1150)) == (1))) goto event_588_11_end;
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_588_11_end: ;
}
// Function purpose: generated callback event_func_5385 processes event block(s) 589_11. Actions/conditions:
//        589_11: sets the selected object's direction to 8.
void Frames::event_func_5385()
{
    // event 589_11 : sets the selected object's direction to 8
    {
        if (!(group_code_1)) goto event_589_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(356, str_tutstrlen_1150)) == (2))) goto event_589_11_end;
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
    }
    event_589_11_end: ;
}
// Function purpose: generated callback event_func_5386 processes event block(s) 590_11. Actions/conditions:
//        590_11: sets the selected object's direction to 0.
void Frames::event_func_5386()
{
    // event 590_11 : sets the selected object's direction to 0
    {
        if (!(group_code_1)) goto event_590_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(356, str_tutstrlen_1150)) == (3))) goto event_590_11_end;
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_590_11_end: ;
}
// Function purpose: generated callback event_func_5387 processes event block(s) 591_11. Actions/conditions:
//        591_11: sets the selected object's direction to 24.
void Frames::event_func_5387()
{
    // event 591_11 : sets the selected object's direction to 24
    {
        if (!(group_code_1)) goto event_591_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(356, str_tutstrlen_1150)) == (4))) goto event_591_11_end;
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
    }
    event_591_11_end: ;
}
void Frames::loop_lolol_11()
{
    event_func_5384();
    event_func_5385();
    event_func_5386();
    event_func_5387();
}
// Function purpose: generated callback event_func_5388 processes event block(s) 1282_11. Actions/conditions:
//        1282_11: splits saved text into fields; activates the get(0 event group; creates a itemshud 687 object; plus
//        14 more actions.
void Frames::event_func_5388()
{
    // event 1282_11 : splits saved text into fields; activates the get(0 event group; creates a itemshud 687 object; plus 14 more actions
    {
        if (!(group_code_1)) goto event_1282_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_fill_desk_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_desk_32))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_1282_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_desk_32+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(337, str_currentcontainer_1126))+str_slot_617+number_to_string(loop_fill_desk_index+1))) != (empty_string))) goto event_1282_11_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_desk_32+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(337, str_currentcontainer_1126))+str_slot_617+number_to_string(loop_fill_desk_index+1)), str__96);
        ((INI*)get_instance(itemData_instances))->set_group(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        FrameObject * single_instance_1282_11_0; single_instance_1282_11_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemshud_687(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1282_11_0 == NULL)
                    single_instance_1282_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1282_11_0))->alterables->flags.enable(-2);
        ((Active*)((Active*)single_instance_1282_11_0))->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((Active*)((Active*)single_instance_1282_11_0))->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((Active*)((Active*)single_instance_1282_11_0))->alterables->values.set(12, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((Active*)((Active*)single_instance_1282_11_0))->alterables->values.set(1, loop_fill_desk_index+1);
        ((Active*)((Active*)single_instance_1282_11_0))->alterables->values.set(6, ((INI*)get_instance(itemData_instances))->get_value_int(str_illegal_618));
        ((Active*)((Active*)single_instance_1282_11_0))->alterables->strings.set(0, str_desk_32);
        ((Active*)((Active*)single_instance_1282_11_0))->alterables->strings.set(1, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2));
        ((Active*)((Active*)single_instance_1282_11_0))->force_animation(get_floor(((Active*)single_instance_1282_11_0)->alterables->values.get(2)/MathHelper()/32));
        ((Active*)((Active*)single_instance_1282_11_0))->set_direction(((Active*)single_instance_1282_11_0)->alterables->values.get(2)%MathHelper()%32);
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
    }
    event_1282_11_end: ;
}
void Frames::loop_fill_desk_11()
{
    event_func_5388();
    event_func_1272();
}
// Function purpose: generated callback event_func_5389 processes event block(s) 1037_11. Actions/conditions:
//        1037_11: sets the selected object's numeric value to 1; splits saved text into fields; creates a itemshud
//        687 object; plus 7 more actions.
void Frames::event_func_5389()
{
    // event 1037_11 : sets the selected object's numeric value to 1; splits saved text into fields; creates a itemshud 687 object; plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1037_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_weapon_449))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_1037_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_weapon_460+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452)))) != (empty_string))) goto event_1037_11_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_weapon_460+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452))), str__96);
        FrameObject * single_instance_1037_11_0; single_instance_1037_11_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemshud_687(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1037_11_0 == NULL)
                    single_instance_1037_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1037_11_0))->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((Active*)((Active*)single_instance_1037_11_0))->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((Active*)((Active*)single_instance_1037_11_0))->alterables->strings.set(0, str_loot_weapon_449);
        ((Active*)((Active*)single_instance_1037_11_0))->alterables->flags.enable(-2);
    }
    event_1037_11_end: ;
}
// Function purpose: generated callback event_func_5390 processes event block(s) 1038_11. Actions/conditions:
//        1038_11: splits saved text into fields; sets the selected object's numeric value to 1; creates a itemshud
//        687 object; plus 7 more actions.
void Frames::event_func_5390()
{
    // event 1038_11 : splits saved text into fields; sets the selected object's numeric value to 1; creates a itemshud 687 object; plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1038_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_outfit_450))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_1038_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_outfit_459+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452)))) != (empty_string))) goto event_1038_11_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_outfit_459+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452))), str__96);
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        FrameObject * single_instance_1038_11_0; single_instance_1038_11_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemshud_687(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1038_11_0 == NULL)
                    single_instance_1038_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1038_11_0))->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((Active*)((Active*)single_instance_1038_11_0))->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((Active*)((Active*)single_instance_1038_11_0))->alterables->strings.set(0, str_loot_outfit_450);
        ((Active*)((Active*)single_instance_1038_11_0))->alterables->flags.enable(-2);
    }
    event_1038_11_end: ;
}
void Frames::loop_fill_loot_gear_slots_11()
{
    event_func_5389();
    event_func_5390();
}
// Function purpose: generated callback event_func_5391 processes event block(s) 380_11. Actions/conditions:
//        380_11: creates a dchar 688 object; positions the target object; updates a value on the target object; plus
//        5 more actions.
void Frames::event_func_5391()
{
    // event 380_11 : creates a dchar 688 object; positions the target object; updates a value on the target object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_380_11_end;
        FrameObject * single_instance_380_11_0; single_instance_380_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -58), parent->layer);
                if (single_instance_380_11_0 == NULL)
                    single_instance_380_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_380_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_380_11_0)), frame_left())+6);
        ((Text*)((Text*)single_instance_380_11_0))->blend_color.set(Color(255, 128, 0));
        ((Text*)((Text*)single_instance_380_11_0))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_pausemenu_quit_212, str_1_97)));
        ((Text*)((Text*)single_instance_380_11_0))->set_bold(1);
    }
    event_380_11_end: ;
}
// Function purpose: generated callback event_func_5392 processes event block(s) 381_11. Actions/conditions:
//        381_11: creates a buttons 699 object; sets the object's animation to 41.
void Frames::event_func_5392()
{
    // event 381_11 : creates a buttons 699 object; sets the object's animation to 41
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_381_11_end;
        FrameObject * single_instance_381_11_0; single_instance_381_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buttons_699(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_381_11_0 == NULL)
                    single_instance_381_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_381_11_0))->force_animation(41);
    }
    event_381_11_end: ;
}
// Function purpose: generated callback event_func_5393 processes event block(s) 382_11. Actions/conditions:
//        382_11: creates a buttons 699 object; sets the object's animation to 42.
void Frames::event_func_5393()
{
    // event 382_11 : creates a buttons 699 object; sets the object's animation to 42
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_382_11_end;
        FrameObject * single_instance_382_11_0; single_instance_382_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buttons_699(parent->x + 0, parent->y + 14), parent->layer);
                if (single_instance_382_11_0 == NULL)
                    single_instance_382_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_382_11_0))->force_animation(42);
    }
    event_382_11_end: ;
}
// Function purpose: generated callback event_func_5394 processes event block(s) 383_11. Actions/conditions:
//        383_11: creates a dchar 688 object; positions the target object; updates a value on the target object; plus
//        1 more actions.
void Frames::event_func_5394()
{
    // event 383_11 : creates a dchar 688 object; positions the target object; updates a value on the target object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_383_11_end;
        FrameObject * single_instance_383_11_0; single_instance_383_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -40), parent->layer);
                if (single_instance_383_11_0 == NULL)
                    single_instance_383_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_383_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_383_11_0)), frame_left())+4);
        ((Text*)((Text*)single_instance_383_11_0))->blend_color.set(Color(192, 192, 192));
        ((Text*)((Text*)single_instance_383_11_0))->set_string(StringReplace::replace(((INI*)get_instance(translationData_instances))->get_string(str_pausemenu_quit_212, str_2_155), str__346, str__198));
    }
    event_383_11_end: ;
}
// Function purpose: generated callback event_func_5395 processes event block(s) 384_11. Actions/conditions:
//        384_11: creates a dchar 688 object; positions the target object; updates a value on the target object; plus
//        1 more actions.
void Frames::event_func_5395()
{
    // event 384_11 : creates a dchar 688 object; positions the target object; updates a value on the target object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_384_11_end;
        FrameObject * single_instance_384_11_0; single_instance_384_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -4), parent->layer);
                if (single_instance_384_11_0 == NULL)
                    single_instance_384_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_384_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_384_11_0)), frame_left())+4);
        ((Text*)((Text*)single_instance_384_11_0))->blend_color.set(Color(192, 192, 192));
        ((Text*)((Text*)single_instance_384_11_0))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_pausemenu_quit_212, str_3_158)+str__624+((INI*)get_instance(translationData_instances))->get_string(str_pausemenu_quit_212, str_4_161)));
    }
    event_384_11_end: ;
}
void Frames::loop_menuquit_11()
{
    event_func_948();
    event_func_5391();
    event_func_5392();
    event_func_5393();
    event_func_5394();
    event_func_5395();
}
// Function purpose: generated callback event_func_5396 processes event block(s) 833_11. Actions/conditions:
//        833_11: creates a itemshud 687 object; sets the selected object's numeric value to
//        gameVariables->get_value(611, Craft_GiveBack); enables flag -2 (legacy object-specific state;
//        original label was not retained) on the selected object; plus 7 more actions.
void Frames::event_func_5396()
{
    // event 833_11 : creates a itemshud 687 object; sets the selected object's numeric value to gameVariables->get_value(611, Craft_GiveBack); enables flag -2 (legacy object-specific state; original label was not retained) on the selected object; plus 7 more actions
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_833_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(611, str_craft_giveback_1593)) != (-1))) goto event_833_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craft_900))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_833_11_end;
        FrameObject * single_instance_833_11_0; single_instance_833_11_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemshud_687(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_833_11_0 == NULL)
                    single_instance_833_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_833_11_0))->alterables->values.set(2, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(611, str_craft_giveback_1593));
        ((Active*)((Active*)single_instance_833_11_0))->alterables->flags.enable(-2);
        ((Active*)((Active*)single_instance_833_11_0))->alterables->values.set(1, 1);
        ((Active*)((Active*)single_instance_833_11_0))->alterables->strings.set(0, str_craft_900);
        ((Active*)((Active*)single_instance_833_11_0))->set_scale(2);
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
    }
    event_833_11_end: ;
}
void Frames::loop_craft_giveback_11()
{
    event_func_5396();
}
// Function purpose: generated callback event_func_5397 processes event block(s) 832_11. Actions/conditions:
//        832_11: sets FlashJournal to 1.
void Frames::event_func_5397()
{
    // event 832_11 : sets FlashJournal to 1
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_832_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(613, str_flashjournal_1595, 1);
    }
    event_832_11_end: ;
}
void Frames::loop_add_craft_note_11()
{
    event_func_5397();
}
// Function purpose: generated callback event_func_5398 processes event block(s) 831_11. Actions/conditions:
//        831_11: sets the selected object's direction to 16; creates a itemshud 687 object; sets the selected
//        object's numeric value to gameVariables->get_value(612, CraftOutput); plus 8 more actions.
void Frames::event_func_5398()
{
    // event 831_11 : sets the selected object's direction to 16; creates a itemshud 687 object; sets the selected object's numeric value to gameVariables->get_value(612, CraftOutput); plus 8 more actions
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_831_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craft_output_1121))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_831_11_end;
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        FrameObject * single_instance_831_11_0; single_instance_831_11_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemshud_687(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_831_11_0 == NULL)
                    single_instance_831_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_831_11_0))->alterables->values.set(2, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(612, str_craftoutput_1594));
        ((Active*)((Active*)single_instance_831_11_0))->alterables->flags.enable(-2);
        ((Active*)((Active*)single_instance_831_11_0))->alterables->strings.set(0, str_craft_output_1121);
        ((Active*)((Active*)single_instance_831_11_0))->set_scale(2);
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        {
            loop_add_craft_note_running = true;
            int times = int(1);
            loop_add_craft_note_index = 0;
            while (loop_add_craft_note_index < times) {
                loop_add_craft_note_11();
                if (!loop_add_craft_note_running) break;
                loop_add_craft_note_index++;
            }
        }
        {
            loop_del_ingred_running = true;
            int times = int(1);
            loop_del_ingred_index = 0;
            while (loop_del_ingred_index < times) {
                loop_del_ingred_6();
                if (!loop_del_ingred_running) break;
                loop_del_ingred_index++;
            }
        }
        {
            loop_craft_giveback_running = true;
            int times = int(1);
            loop_craft_giveback_index = 0;
            while (loop_craft_giveback_index < times) {
                loop_craft_giveback_11();
                if (!loop_craft_giveback_running) break;
                loop_craft_giveback_index++;
            }
        }
        media.play_id(SOUND_ACCOLADE_9, 1-1);
    }
    event_831_11_end: ;
}
void Frames::loop_craft_output_11()
{
    event_func_2429();
    event_func_5398();
}
// Function purpose: generated callback event_func_5399 processes event block(s) 1463_11. Actions/conditions:
//        1463_11: splits saved text into fields; creates a itemshud 687 object; sets the selected object's numeric
//        value to string_to_number(stringtokenizer2_292->get(0)); plus 13 more actions.
void Frames::event_func_5399()
{
    // event 1463_11 : splits saved text into fields; creates a itemshud 687 object; sets the selected object's numeric value to string_to_number(stringtokenizer2_292->get(0)); plus 13 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1463_11_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) != (str_0_615))) goto event_1463_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_buy_1131))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_1463_11_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0), str__96);
        FrameObject * single_instance_1463_11_0; single_instance_1463_11_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemshud_687(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1463_11_0 == NULL)
                    single_instance_1463_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1463_11_0))->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        ((Active*)((Active*)single_instance_1463_11_0))->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)));
        ((Active*)((Active*)single_instance_1463_11_0))->alterables->flags.enable(-2);
        ((Active*)((Active*)single_instance_1463_11_0))->alterables->strings.set(0, str_npc_buy_1131);
        ((Active*)((Active*)single_instance_1463_11_0))->alterables->values.set(1, 1);
        ((Active*)((Active*)single_instance_1463_11_0))->set_scale(2);
        ((Active*)((Active*)single_instance_1463_11_0))->alterables->values.set(5, get_ceil(((INI*)get_instance(itemData_instances))->get_value_int(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0), str_buy_529)*(0.0+((AssociateArray*)get_instance(gameVariables_instances))->alterables->values.get(0))));
        FrameObject * single_instance_1463_11_1; single_instance_1463_11_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_givecash_261(parent->x + -21, parent->y + 19), parent->layer);
                if (single_instance_1463_11_1 == NULL)
                    single_instance_1463_11_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_1463_11_1))->set_layer(((Active*)get_instance(dialogPanel_instances))->layer->index+1-1);
        ((Text*)((Text*)single_instance_1463_11_1))->set_string(str__1132+number_to_string(((Active*)single_instance_1463_11_0)->alterables->values.get(5)));
        ((Text*)((Text*)single_instance_1463_11_1))->blend_color.set(Color(120, 120, 120));
    }
    event_1463_11_end: ;
}
// Function purpose: generated callback event_func_5400 processes event block(s) 1464_11. Actions/conditions:
//        1464_11: splits saved text into fields; creates a itemshud 687 object; sets the selected object's numeric
//        value to string_to_number(stringtokenizer2_292->get(0)); plus 13 more actions.
void Frames::event_func_5400()
{
    // event 1464_11 : splits saved text into fields; creates a itemshud 687 object; sets the selected object's numeric value to string_to_number(stringtokenizer2_292->get(0)); plus 13 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1464_11_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) != (str_0_615))) goto event_1464_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_buy_1131))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_1464_11_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1), str__96);
        FrameObject * single_instance_1464_11_0; single_instance_1464_11_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemshud_687(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1464_11_0 == NULL)
                    single_instance_1464_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1464_11_0))->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        ((Active*)((Active*)single_instance_1464_11_0))->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)));
        ((Active*)((Active*)single_instance_1464_11_0))->alterables->flags.enable(-2);
        ((Active*)((Active*)single_instance_1464_11_0))->alterables->strings.set(0, str_npc_buy_1131);
        ((Active*)((Active*)single_instance_1464_11_0))->alterables->values.set(1, 2);
        ((Active*)((Active*)single_instance_1464_11_0))->set_scale(2);
        ((Active*)((Active*)single_instance_1464_11_0))->alterables->values.set(5, get_ceil(((INI*)get_instance(itemData_instances))->get_value_int(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0), str_buy_529)*(0.0+((AssociateArray*)get_instance(gameVariables_instances))->alterables->values.get(0))));
        FrameObject * single_instance_1464_11_1; single_instance_1464_11_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_givecash_261(parent->x + -21, parent->y + 19), parent->layer);
                if (single_instance_1464_11_1 == NULL)
                    single_instance_1464_11_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_1464_11_1))->set_layer(((Active*)get_instance(dialogPanel_instances))->layer->index+1-1);
        ((Text*)((Text*)single_instance_1464_11_1))->set_string(str__1132+number_to_string(((Active*)single_instance_1464_11_0)->alterables->values.get(5)));
        ((Text*)((Text*)single_instance_1464_11_1))->blend_color.set(Color(120, 120, 120));
    }
    event_1464_11_end: ;
}
// Function purpose: generated callback event_func_5401 processes event block(s) 1465_11. Actions/conditions:
//        1465_11: splits saved text into fields; creates a itemshud 687 object; sets the selected object's numeric
//        value to string_to_number(stringtokenizer2_292->get(0)); plus 13 more actions.
void Frames::event_func_5401()
{
    // event 1465_11 : splits saved text into fields; creates a itemshud 687 object; sets the selected object's numeric value to string_to_number(stringtokenizer2_292->get(0)); plus 13 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1465_11_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)) != (str_0_615))) goto event_1465_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_buy_1131))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_1465_11_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2), str__96);
        FrameObject * single_instance_1465_11_0; single_instance_1465_11_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemshud_687(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1465_11_0 == NULL)
                    single_instance_1465_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1465_11_0))->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        ((Active*)((Active*)single_instance_1465_11_0))->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)));
        ((Active*)((Active*)single_instance_1465_11_0))->alterables->flags.enable(-2);
        ((Active*)((Active*)single_instance_1465_11_0))->alterables->strings.set(0, str_npc_buy_1131);
        ((Active*)((Active*)single_instance_1465_11_0))->alterables->values.set(1, 3);
        ((Active*)((Active*)single_instance_1465_11_0))->set_scale(2);
        ((Active*)((Active*)single_instance_1465_11_0))->alterables->values.set(5, get_ceil(((INI*)get_instance(itemData_instances))->get_value_int(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0), str_buy_529)*(0.0+((AssociateArray*)get_instance(gameVariables_instances))->alterables->values.get(0))));
        FrameObject * single_instance_1465_11_1; single_instance_1465_11_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_givecash_261(parent->x + -21, parent->y + 19), parent->layer);
                if (single_instance_1465_11_1 == NULL)
                    single_instance_1465_11_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_1465_11_1))->set_layer(((Active*)get_instance(dialogPanel_instances))->layer->index+1-1);
        ((Text*)((Text*)single_instance_1465_11_1))->set_string(str__1132+number_to_string(((Active*)single_instance_1465_11_0)->alterables->values.get(5)));
        ((Text*)((Text*)single_instance_1465_11_1))->blend_color.set(Color(120, 120, 120));
    }
    event_1465_11_end: ;
}
// Function purpose: generated callback event_func_5402 processes event block(s) 1466_11. Actions/conditions:
//        1466_11: splits saved text into fields; creates a itemshud 687 object; sets the selected object's numeric
//        value to string_to_number(stringtokenizer2_292->get(0)); plus 13 more actions.
void Frames::event_func_5402()
{
    // event 1466_11 : splits saved text into fields; creates a itemshud 687 object; sets the selected object's numeric value to string_to_number(stringtokenizer2_292->get(0)); plus 13 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1466_11_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)) != (str_0_615))) goto event_1466_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_buy_1131))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_1466_11_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3), str__96);
        FrameObject * single_instance_1466_11_0; single_instance_1466_11_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemshud_687(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1466_11_0 == NULL)
                    single_instance_1466_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1466_11_0))->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        ((Active*)((Active*)single_instance_1466_11_0))->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)));
        ((Active*)((Active*)single_instance_1466_11_0))->alterables->flags.enable(-2);
        ((Active*)((Active*)single_instance_1466_11_0))->alterables->strings.set(0, str_npc_buy_1131);
        ((Active*)((Active*)single_instance_1466_11_0))->alterables->values.set(1, 4);
        ((Active*)((Active*)single_instance_1466_11_0))->set_scale(2);
        ((Active*)((Active*)single_instance_1466_11_0))->alterables->values.set(5, get_ceil(((INI*)get_instance(itemData_instances))->get_value_int(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0), str_buy_529)*(0.0+((AssociateArray*)get_instance(gameVariables_instances))->alterables->values.get(0))));
        FrameObject * single_instance_1466_11_1; single_instance_1466_11_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_givecash_261(parent->x + -21, parent->y + 19), parent->layer);
                if (single_instance_1466_11_1 == NULL)
                    single_instance_1466_11_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_1466_11_1))->set_layer(((Active*)get_instance(dialogPanel_instances))->layer->index+1-1);
        ((Text*)((Text*)single_instance_1466_11_1))->set_string(str__1132+number_to_string(((Active*)single_instance_1466_11_0)->alterables->values.get(5)));
        ((Text*)((Text*)single_instance_1466_11_1))->blend_color.set(Color(120, 120, 120));
    }
    event_1466_11_end: ;
}
void Frames::loop_refresh_buy_list_11()
{
    event_func_1293();
    event_func_1294();
    event_func_1295();
    event_func_1296();
    event_func_1297();
    event_func_5399();
    event_func_5400();
    event_func_5401();
    event_func_5402();
}
// Function purpose: generated callback event_func_5403 processes event block(s) 1456_11. Actions/conditions:
//        1456_11: sets source to Profile entry 7; sets source to
//        StringReplace::replace(gameVariables->get_string(81, source), #, ); adds a dchar 214 instance; plus
//        7 more actions.
void Frames::event_func_5403()
{
    // event 1456_11 : sets source to Profile entry 7; sets source to StringReplace::replace(gameVariables->get_string(81, source), #, ); adds a dchar 214 instance; plus 7 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1456_11_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(1)) == (str_0_0_0_0_734))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1456_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_profile_281, str_7_323));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str__346, str__198));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_688(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_y()-10);
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
            ((Text*)*it)->blend_color.set(Color(192, 0, 32));
        }
    }
    event_1456_11_end: ;
}
// Function purpose: generated callback event_func_5404 processes event block(s) 1457_11. Actions/conditions:
//        1457_11: sets will_sell to 1.
void Frames::event_func_5404()
{
    // event 1457_11 : sets will_sell to 1
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1457_11_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(1)) != (str_0_0_0_0_734))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1457_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(340, str_will_sell_1133, 1);
        {
            loop_refresh_buy_list_running = true;
            int times = int(1);
            loop_refresh_buy_list_index = 0;
            while (loop_refresh_buy_list_index < times) {
                loop_refresh_buy_list_11();
                if (!loop_refresh_buy_list_running) break;
                loop_refresh_buy_list_index++;
            }
        }
    }
    event_1457_11_end: ;
}
void Frames::loop_npc_tab_buy_11()
{
    event_func_1302();
    event_func_1303();
    event_func_1304();
    event_func_5403();
    event_func_5404();
}
// Function purpose: generated callback event_func_5405 processes event block(s) 1255_11. Actions/conditions:
//        1255_11: sets the selected object's layer to 2-1; sets the object's animation to 0; applies a visual shader.
void Frames::event_func_5405()
{
    // event 1255_11 : sets the selected object's layer to 2-1; sets the object's animation to 0; applies a visual shader
    {
        if (!(group_code_1)) goto event_1255_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1255_11_end;
        dighole_207_instances.clear_selection();
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sort_holes_index+1))) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_1255_11_end;
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(2-1);
            ((Active*)*it)->force_animation(0);
        }
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::NONE);
        }
    }
    event_1255_11_end: ;
}
// Function purpose: generated callback event_func_5406 processes event block(s) 1257_11. Actions/conditions:
//        1257_11: sets the selected object's layer to 1-1; sets the object's animation to 5; applies a visual shader.
void Frames::event_func_5406()
{
    // event 1257_11 : sets the selected object's layer to 1-1; sets the object's animation to 5; applies a visual shader
    {
        if (!(group_code_1)) goto event_1257_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1257_11_end;
        dighole_207_instances.clear_selection();
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sort_holes_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_1257_11_end;
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(1-1);
            ((Active*)*it)->force_animation(5);
        }
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::ADDITIVE);
        }
    }
    event_1257_11_end: ;
}
void Frames::loop_sort_holes_11()
{
    event_func_1321();
    event_func_5405();
    event_func_1323();
    event_func_5406();
}
// Function purpose: generated callback event_func_5407 processes event block(s) 489_11. Actions/conditions:
//        489_11: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_5407()
{
    // event 489_11 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_489_11_end;
        {
            loop_sort_holes_running = true;
            int times = int(1);
            loop_sort_holes_index = 0;
            while (loop_sort_holes_index < times) {
                loop_sort_holes_11();
                if (!loop_sort_holes_running) break;
                loop_sort_holes_index++;
            }
        }
    }
    event_489_11_end: ;
}
void Frames::loop_layer_down_11()
{
    event_func_1325();
    event_func_1326();
    event_func_5407();
}
// Function purpose: generated callback event_func_5408 processes event block(s) 959_11. Actions/conditions:
//        959_11: sets NewLayer to 1; sets the selected object's horizontal position to
//        gameVariables->get_value(353, HoleX)+8; sets the selected object's vertical position to
//        gameVariables->get_value(354, HoleY)+8; plus 10 more actions.
void Frames::event_func_5408()
{
    // event 959_11 : sets NewLayer to 1; sets the selected object's horizontal position to gameVariables->get_value(353, HoleX)+8; sets the selected object's vertical position to gameVariables->get_value(354, HoleY)+8; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_959_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(320, str_blocked_1101)) == (0))) goto event_959_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(355, str_newlayer_1149, 1);
        ((Active*)get_instance(playerBase_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(353, str_holex_1147)+8);
        ((Active*)get_instance(playerBase_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(354, str_holey_1148)+8);
        ((Active*)get_instance(playerBase_instances))->set_layer(1-1);
        undergroundGlow_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_undergroundGlow(0, 0), 0);
            undergroundGlow_instances.add_back();
        }
        for (ObjectIterator it(undergroundGlow_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_959_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_959_11_1: ;
        }
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_959_11_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_959_11_2: ;
        }
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(1);
        ((LayerObject*)get_instance(layerobject_37_instances))->show_layer(1-1);
        {
            loop_kill_speech_running = true;
            int times = int(1);
            loop_kill_speech_index = 0;
            while (loop_kill_speech_index < times) {
                loop_kill_speech_6();
                if (!loop_kill_speech_running) break;
                loop_kill_speech_index++;
            }
        }
        {
            loop_layer_down_running = true;
            int times = int(1);
            loop_layer_down_index = 0;
            while (loop_layer_down_index < times) {
                loop_layer_down_11();
                if (!loop_layer_down_running) break;
                loop_layer_down_index++;
            }
        }
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
        media.play_id(SOUND_PICKUP_3, 1-1);
    }
    event_959_11_end: ;
}
void Frames::loop_enter_hole_11()
{
    event_func_2304();
    event_func_2305();
    event_func_1331();
    event_func_5408();
}
// Function purpose: generated callback event_func_5409 processes event block(s) 1317_11. Actions/conditions:
//        1317_11: adds a soil 173 instance; sets the object position in the world; draws the selected image or tile;
//        plus 1 more actions.
void Frames::event_func_5409()
{
    // event 1317_11 : adds a soil 173 instance; sets the object position in the world; draws the selected image or tile; plus 1 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_1317_11_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_1317_11_end;
        if (!((((ArrayObject*)get_instance(digarray_228_instances))->get_value(((Active*)get_single(usespot_208_instances, default_active_instance))->get_x(), ((Active*)get_single(usespot_208_instances, default_active_instance))->get_y(), 0)) >= (25))) goto event_1317_11_end;
        soil_173_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_soil_675(-16, -16), 0);
            soil_173_instances.add_back();
        }
        for (ObjectIterator it(soil_173_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(usespot_208_instances, it.current_index));
            if (parent == NULL) goto pos_end_1317_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1317_11_1: ;
        }
        for (ObjectIterator it(soil_173_instances); !it.end(); ++it) {
            ((Active*)*it)->paste(0);
            ((Active*)*it)->destroy();
        }
    }
    event_1317_11_end: ;
}
// Function purpose: generated callback event_func_5410 processes event block(s) 1320_11. Actions/conditions:
//        1320_11: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_5410()
{
    // event 1320_11 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_1320_11_end;
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
    event_1320_11_end: ;
}
void Frames::loop_digbelow_11()
{
    event_func_2748();
    event_func_5409();
    event_func_2605();
    event_func_2606();
    event_func_5410();
}
// Function purpose: generated callback event_func_5411 processes event block(s) 965_11. Actions/conditions:
//        965_11: sets the selected object's layer to 2-1; sets the selected object's horizontal position to
//        gameVariables->get_value(353, HoleX)+8; sets the selected object's vertical position to
//        gameVariables->get_value(354, HoleY)+8; plus 8 more actions.
void Frames::event_func_5411()
{
    // event 965_11 : sets the selected object's layer to 2-1; sets the selected object's horizontal position to gameVariables->get_value(353, HoleX)+8; sets the selected object's vertical position to gameVariables->get_value(354, HoleY)+8; plus 8 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_965_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(320, str_blocked_1101)) == (0))) goto event_965_11_end;
        ((Active*)get_instance(playerBase_instances))->set_layer(2-1);
        ((Active*)get_instance(playerBase_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(353, str_holex_1147)+8);
        ((Active*)get_instance(playerBase_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(354, str_holey_1148)+8);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_965_11_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_965_11_0: ;
        }
        ((LayerObject*)get_instance(layerobject_37_instances))->show_layer(1);
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(355, str_newlayer_1149, 2);
        {
            loop_kill_speech_running = true;
            int times = int(1);
            loop_kill_speech_index = 0;
            while (loop_kill_speech_index < times) {
                loop_kill_speech_6();
                if (!loop_kill_speech_running) break;
                loop_kill_speech_index++;
            }
        }
        {
            loop_layer_up_running = true;
            int times = int(1);
            loop_layer_up_index = 0;
            while (loop_layer_up_index < times) {
                loop_layer_down_11();
                if (!loop_layer_up_running) break;
                loop_layer_up_index++;
            }
        }
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
        media.play_id(SOUND_PICKUP_3, 1-1);
    }
    event_965_11_end: ;
}
void Frames::loop_exit_hole_11()
{
    event_func_1329();
    event_func_1330();
    event_func_1331();
    event_func_5411();
}
// Function purpose: generated callback event_func_5412 processes event block(s) 1579_11. Actions/conditions:
//        1579_11: sets pass to 1; sets LegalItem to randrange_event(itemsdb_693->get_group_count()).
void Frames::event_func_5412()
{
    // event 1579_11 : sets pass to 1; sets LegalItem to randrange_event(itemsdb_693->get_group_count())
    {
        if (!(group_loops_1)) goto event_1579_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(967, str_pass_2453, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(366, str_legalitem_1160, randrange_event(((INI*)get_instance(itemsdb_693_instances))->get_group_count()));
    }
    event_1579_11_end: ;
}
// Function purpose: generated callback event_func_5413 processes event block(s) 1580_11. Actions/conditions:
//        1580_11: sets pass to 0.
void Frames::event_func_5413()
{
    // event 1580_11 : sets pass to 0
    {
        if (!(group_loops_1)) goto event_1580_11_end;
        if (!((((INI*)get_instance(itemsdb_693_instances))->get_value(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(366, str_legalitem_1160)), str_desk_32, 0)) == (0))) goto event_1580_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(967, str_pass_2453, 0);
    }
    event_1580_11_end: ;
}
// Function purpose: generated callback event_func_5414 processes event block(s) 1581_11. Actions/conditions:
//        1581_11: sets pass to 0.
void Frames::event_func_5414()
{
    // event 1581_11 : sets pass to 0
    {
        if (!(group_loops_1)) goto event_1581_11_end;
        if (!((((INI*)get_instance(itemsdb_693_instances))->get_string_default(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(366, str_legalitem_1160)), str_found_528, empty_string)) != (global_strings->get(0)))) goto event_1581_11_end;
        if (!((((INI*)get_instance(itemsdb_693_instances))->get_string_default(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(366, str_legalitem_1160)), str_found_528, empty_string)) != (empty_string))) goto event_1581_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(967, str_pass_2453, 0);
    }
    event_1581_11_end: ;
}
// Function purpose: generated callback event_func_5415 processes event block(s) 1582_11. Actions/conditions:
//        1582_11: checks the event-specific game state condition is met; game state pass; this handler gates a game
//        event without a direct value/object action.
void Frames::event_func_5415()
{
    // event 1582_11 : checks the event-specific game state condition is met; game state pass; this handler gates a game event without a direct value/object action
    {
        if (!(group_loops_1)) goto event_1582_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(967, str_pass_2453)) == (1))) goto event_1582_11_end;
            loop_restock_npc_desks_custom_find_running = false;
    
    }
    event_1582_11_end: ;
}
void Frames::loop_restock_npc_desks_custom_find_11()
{
    event_func_5412();
    event_func_5413();
    event_func_5414();
    event_func_5415();
}
// Function purpose: generated callback event_func_5416 processes event block(s) 1577_11. Actions/conditions:
//        1577_11: splits saved text into fields.
void Frames::event_func_5416()
{
    // event 1577_11 : splits saved text into fields
    {
        if (!(group_loops_1)) goto event_1577_11_end;
        {
            loop_restock_npc_desks_custom_find_running = true;
            loop_restock_npc_desks_custom_find_index = 0;
            while (true) {
                loop_restock_npc_desks_custom_find_11();
                if (!loop_restock_npc_desks_custom_find_running) break;
                loop_restock_npc_desks_custom_find_index++;
            }
        }
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_desk_32+number_to_string(loop_restock_npc_desks_index+1)+str_slot_617+number_to_string(5+loop_restock_npc_desks_custom_index)), str__96);
    }
    event_1577_11_end: ;
}
// Function purpose: generated callback event_func_5417 processes event block(s) 1578_11. Actions/conditions:
//        1578_11: sets a game or interface text string.
void Frames::event_func_5417()
{
    // event 1578_11 : sets a game or interface text string
    {
        if (!(group_loops_1)) goto event_1578_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3))) == (0))) goto event_1578_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(loop_restock_npc_desks_index+1)+str_slot_617+number_to_string(5+loop_restock_npc_desks_custom_index), number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(366, str_legalitem_1160))+str_100_531);
    }
    event_1578_11_end: ;
}
void Frames::loop_restock_npc_desks_custom_11()
{
    event_func_5416();
    event_func_5417();
}
// Function purpose: generated callback event_func_5418 processes event block(s) 1576_11. Actions/conditions:
//        1576_11: sets a game or interface text string; sets a game or interface text string; sets a game or
//        interface text string; plus 5 more actions.
void Frames::event_func_5418()
{
    // event 1576_11 : sets a game or interface text string; sets a game or interface text string; sets a game or interface text string; plus 5 more actions
    {
        if (!(group_loops_1)) goto event_1576_11_end;
        if (!((loop_restock_npc_desks_index+1) != (((AssociateArray*)get_instance(gameVariables_instances))->get_value(397, str_yourdesk_1208)))) goto event_1576_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(loop_restock_npc_desks_index+1)+str_slot1_534, str_17_100_1474);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(loop_restock_npc_desks_index+1)+str_slot2_535, str_45_100_1475);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(loop_restock_npc_desks_index+1)+str_slot3_536, str_47_100_1476);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(loop_restock_npc_desks_index+1)+str_slot4_1477, str_48_100_1478);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(563, str_rnditems_1479, randrange_event(3));
        {
            loop_restock_npc_desks_custom_running = true;
            int times = int(randrange_event(4));
            loop_restock_npc_desks_custom_index = 0;
            while (loop_restock_npc_desks_custom_index < times) {
                loop_restock_npc_desks_custom_11();
                if (!loop_restock_npc_desks_custom_running) break;
                loop_restock_npc_desks_custom_index++;
            }
        }
    }
    event_1576_11_end: ;
}
void Frames::loop_restock_npc_desks_11()
{
    event_func_5418();
}
// Function purpose: generated callback event_func_5419 processes event block(s) 1575_11. Actions/conditions:
//        1575_11: checks the event-specific game state condition is met; this handler gates a game event without a
//        direct value/object action.
void Frames::event_func_5419()
{
    // event 1575_11 : checks the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_loops_1)) goto event_1575_11_end;
        {
            loop_restock_npc_desks_running = true;
            int times = int(desks_717_instances.size());
            loop_restock_npc_desks_index = 0;
            while (loop_restock_npc_desks_index < times) {
                loop_restock_npc_desks_11();
                if (!loop_restock_npc_desks_running) break;
                loop_restock_npc_desks_index++;
            }
        }
    }
    event_1575_11_end: ;
}
void Frames::loop_restocks_11()
{
    event_func_5419();
}
// Function purpose: generated callback event_func_5420 processes event block(s) 1610_11. Group(s): Swear Filt.
//        Actions/conditions: 1610_11: sets badword to empty_string; sets a game or interface text string.
void Frames::event_func_5420()
{
    // event 1610_11 : sets badword to empty_string; sets a game or interface text string
    {
        // group: Swear Filt
        if (!((string_find(lowercase_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(347, str_input_170)), lowercase_string(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_swear_filter_go_index)), 0)) != (-1))) goto event_1610_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(346, str_badword_1139, empty_string);
        {
            loop_star_it_running = true;
            int times = int(string_size(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_swear_filter_go_index)));
            loop_star_it_index = 0;
            while (loop_star_it_index < times) {
                loop_star_it_6();
                if (!loop_star_it_running) break;
                loop_star_it_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(347, str_input_170, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(347, str_input_170), lowercase_string(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_swear_filter_go_index)), ((AssociateArray*)get_instance(gameVariables_instances))->get_string(346, str_badword_1139)));
    }
    event_1610_11_end: ;
}
void Frames::loop_swear_filter_go_11()
{
    event_func_5420();
}
// Function purpose: generated callback event_func_5421 processes event block(s) 1609_11. Actions/conditions:
//        1609_11: splits saved text into fields; sets output to gameVariables->get_string(347, input).
void Frames::event_func_5421()
{
    // event 1609_11 : splits saved text into fields; sets output to gameVariables->get_string(347, input)
    {
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(str_shit_bastard_fuck_cunt_wank_fag_dick_twat_nigger_nigga_1141, str__96);
        {
            loop_swear_filter_go_running = true;
            int times = int(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get_count());
            loop_swear_filter_go_index = 0;
            while (loop_swear_filter_go_index < times) {
                loop_swear_filter_go_11();
                if (!loop_swear_filter_go_running) break;
                loop_swear_filter_go_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(348, str_output_171, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(347, str_input_170));
    }
    event_1609_11_end: ;
}
void Frames::loop_swear_filter_11()
{
    event_func_5421();
}
// Function purpose: generated callback event_func_5422 processes event block(s) 1521_11. Actions/conditions:
//        1521_11: sets input to gameVariables->get_string(349, SpeakText); sets SpeakText to
//        gameVariables->get_string(348, output); updates the displayed text layout.
void Frames::event_func_5422()
{
    // event 1521_11 : sets input to gameVariables->get_string(349, SpeakText); sets SpeakText to gameVariables->get_string(348, output); updates the displayed text layout
    {
        if (!(group_code_1)) goto event_1521_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(347, str_input_170, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142));
        {
            loop_swear_filter_running = true;
            int times = int(1);
            loop_swear_filter_index = 0;
            while (loop_swear_filter_index < times) {
                loop_swear_filter_11();
                if (!loop_swear_filter_running) break;
                loop_swear_filter_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(348, str_output_171));
    CalcRect::set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142));
        
    }
    event_1521_11_end: ;
}
void Frames::loop_notice_11()
{
    event_func_5422();
    event_func_1384();
}
// Function purpose: generated callback event_func_5423 processes event block(s) 1143_11. Actions/conditions:
//        1143_11: sets the selected object's numeric value to 1; sets the object position in the world; sets the
//        selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 7 more actions.
void Frames::event_func_5423()
{
    // event 1143_11 : sets the selected object's numeric value to 1; sets the object position in the world; sets the selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1143_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_1143_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(692, str_from_1842)) == (str_loot_outfit_450))) goto event_1143_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_outfit_450))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_1143_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_1143_11_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_1143_11_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1143_11_0: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161));
            ((Active*)*it)->alterables->strings.set(0, str_inven_820);
            ((Active*)*it)->alterables->flags.enable(-5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)), number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(148, str_looted_721, 30);
    }
    event_1143_11_end: ;
}
// Function purpose: generated callback event_func_5424 processes event block(s) 1155_11. Actions/conditions:
//        1155_11: sets the selected object's numeric value to 0; sets Outfit to empty_string.
void Frames::event_func_5424()
{
    // event 1155_11 : sets the selected object's numeric value to 0; sets Outfit to empty_string
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1155_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_1155_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(692, str_from_1842)) == (str_outfit_505))) goto event_1155_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_outfit_505))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_1155_11_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(44, str_outfit_505, empty_string);
    }
    event_1155_11_end: ;
}
void Frames::loop_find_open_inv_slot_11()
{
    event_func_2811();
    event_func_2812();
    event_func_2813();
    event_func_5423();
    event_func_2815();
    event_func_2816();
    event_func_2817();
    event_func_2818();
    event_func_2819();
    event_func_2820();
    event_func_2821();
    event_func_2822();
    event_func_2823();
    event_func_2824();
    event_func_5424();
    event_func_2826();
    event_func_2827();
    event_func_2828();
    event_func_2829();
    event_func_2830();
    event_func_2831();
    event_func_2832();
    event_func_2833();
    event_func_2834();
}
// Function purpose: generated callback event_func_5425 processes event block(s) 1483_11. Actions/conditions:
//        1483_11: splits saved text into fields; sets the selected object's numeric value to 1; adds a itemshud 210
//        instance; plus 9 more actions.
void Frames::event_func_5425()
{
    // event 1483_11 : splits saved text into fields; sets the selected object's numeric value to 1; adds a itemshud 210 instance; plus 9 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1483_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_outfit_459+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) != (empty_string))) goto event_1483_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_outfit_1385))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_1483_11_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_outfit_459+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129))), str__96);
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
            if (parent == NULL) goto pos_end_1483_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1483_11_1: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
            ((Active*)*it)->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
            ((Active*)*it)->alterables->strings.set(0, str_npc_outfit_1385);
            ((Active*)*it)->set_scale(2);
            ((Active*)*it)->alterables->flags.enable(-2);
        }
    }
    event_1483_11_end: ;
}
// Function purpose: generated callback event_func_5426 processes event block(s) 1485_11. Actions/conditions:
//        1485_11: splits saved text into fields; sets the selected object's numeric value to 1; adds a itemshud 210
//        instance; plus 9 more actions.
void Frames::event_func_5426()
{
    // event 1485_11 : splits saved text into fields; sets the selected object's numeric value to 1; adds a itemshud 210 instance; plus 9 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1485_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_weapon_460+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) != (empty_string))) goto event_1485_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_weapon_1384))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_1485_11_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_weapon_460+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129))), str__96);
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
            if (parent == NULL) goto pos_end_1485_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1485_11_1: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
            ((Active*)*it)->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
            ((Active*)*it)->alterables->strings.set(0, str_npc_weapon_1384);
            ((Active*)*it)->set_scale(2);
            ((Active*)*it)->alterables->flags.enable(-2);
        }
    }
    event_1485_11_end: ;
}
void Frames::loop_stats_gear_npc_11()
{
    event_func_2245();
    event_func_5425();
    event_func_2247();
    event_func_5426();
}
// Function purpose: generated callback event_func_5427 processes event block(s) 1410_11. Actions/conditions:
//        1410_11: splits saved text into fields; sets source to StringReplace::replace(translationData->get_string(Misc,
//        43), $name, stringtokenizer_81->get(1)); adds a dchar 214 instance; plus 7 more actions.
void Frames::event_func_5427()
{
    // event 1410_11 : splits saved text into fields; sets source to StringReplace::replace(translationData->get_string(Misc, 43), $name, stringtokenizer_81->get(1)); adds a dchar 214 instance; plus 7 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1410_11_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1410_11_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->strings.get(0), str__189);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_43_695), str_name_693, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_688(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+7);
            ((Text*)*it)->blend_color.set(Color(123, 167, 255));
        }
    }
    event_1410_11_end: ;
}
// Function purpose: generated callback event_func_5428 processes event block(s) 1411_11. Actions/conditions:
//        1411_11: checks scene is active; skips if the event-specific game state condition is met; this handler gates
//        a game event without a direct value/object action.
void Frames::event_func_5428()
{
    // event 1411_11 : checks scene is active; skips if the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1411_11_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1411_11_end;
        {
            loop_create_stat_bars_guard_running = true;
            int times = int(4);
            loop_create_stat_bars_guard_index = 0;
            while (loop_create_stat_bars_guard_index < times) {
                loop_create_stat_bars_guard_6();
                if (!loop_create_stat_bars_guard_running) break;
                loop_create_stat_bars_guard_index++;
            }
        }
        {
            loop_stats_gear_npc_running = true;
            int times = int(1);
            loop_stats_gear_npc_index = 0;
            while (loop_stats_gear_npc_index < times) {
                loop_stats_gear_npc_11();
                if (!loop_stats_gear_npc_running) break;
                loop_stats_gear_npc_index++;
            }
        }
    }
    event_1411_11_end: ;
}
void Frames::loop_guard_tab_stats_11()
{
    event_func_2414();
    event_func_5427();
    event_func_5428();
    event_func_2418();
    event_func_2419();
}
// Function purpose: generated callback event_func_5429 processes event block(s) 1394_11. Actions/conditions:
//        1394_11: hides a game layer; sets the selected object's vertical position to playerBase->get_y()+16; sets
//        the selected object's layer to 2-1; plus 6 more actions.
void Frames::event_func_5429()
{
    // event 1394_11 : hides a game layer; sets the selected object's vertical position to playerBase->get_y()+16; sets the selected object's layer to 2-1; plus 6 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_roof_travel_2_1)) goto event_1394_11_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 5)) == (0))) goto event_1394_11_end;
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(5-1);
        ((Active*)get_instance(playerBase_instances))->set_y(((Active*)get_instance(playerBase_instances))->get_y()+16);
        ((Active*)get_instance(playerBase_instances))->set_layer(2-1);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_layer(2-1);
        }
        FrameObject * single_instance_1394_11_0; single_instance_1394_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1394_11_0 == NULL)
                    single_instance_1394_11_0 = new_obj;
            }
        }
        media.play_id(SOUND_THROW_4, 1-1);
    }
    event_1394_11_end: ;
}
// Function purpose: generated callback event_func_5430 processes event block(s) 1395_11. Actions/conditions:
//        1395_11: hides a game layer; sets the selected object's layer to 2-1; creates a dust 223 object; plus 6 more
//        actions.
void Frames::event_func_5430()
{
    // event 1395_11 : hides a game layer; sets the selected object's layer to 2-1; creates a dust 223 object; plus 6 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_roof_travel_2_1)) goto event_1395_11_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 5)) == (34))) goto event_1395_11_end;
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(5-1);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_layer(2-1);
        }
        FrameObject * single_instance_1395_11_0; single_instance_1395_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1395_11_0 == NULL)
                    single_instance_1395_11_0 = new_obj;
            }
        }
        media.play_id(SOUND_THROW_4, 1-1);
        ((Active*)get_instance(playerBase_instances))->set_y(((Active*)get_instance(playerBase_instances))->get_y()+16);
        ((Active*)get_instance(playerBase_instances))->set_layer(2-1);
    }
    event_1395_11_end: ;
}
void Frames::loop_check_rope_edge_11()
{
    event_func_5429();
    event_func_5430();
}
// Function purpose: generated callback event_func_5431 processes event block(s) 1393_11. Actions/conditions:
//        1393_11: sets Rope to 0; removes the selected object.
void Frames::event_func_5431()
{
    // event 1393_11 : sets Rope to 0; removes the selected object
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_roof_travel_2_1)) goto event_1393_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(13, str_ropex_461)))) goto event_1393_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(14, str_ropey_462)))) goto event_1393_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(15, str_rope_463, 0);
        grapplingrope_345_instances.clear_selection();
        for (ObjectIterator it(grapplingrope_345_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        {
            loop_check_rope_edge_running = true;
            int times = int(1);
            loop_check_rope_edge_index = 0;
            while (loop_check_rope_edge_index < times) {
                loop_check_rope_edge_11();
                if (!loop_check_rope_edge_running) break;
                loop_check_rope_edge_index++;
            }
        }
    }
    event_1393_11_end: ;
}
void Frames::loop_new_rope_11()
{
    event_func_486();
    event_func_487();
    event_func_488();
    event_func_489();
    event_func_490();
    event_func_5431();
}
// Function purpose: generated callback event_func_5432 processes event block(s) 1104_11. Actions/conditions:
//        1104_11: sets SpeakText to You are too fatigued; plays a sound or music track.
void Frames::event_func_5432()
{
    // event 1104_11 : sets SpeakText to You are too fatigued; plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1104_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) >= (100))) goto event_1104_11_end;
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
    event_1104_11_end: ;
}
// Function purpose: generated callback event_func_5433 processes event block(s) 1105_11. Actions/conditions:
//        1105_11: sets the selected object's numeric value to 109; enables flag -2 (legacy object-specific state;
//        original label was not retained) on the selected object; creates a dust 223 object; plus 5 more actions.
void Frames::event_func_5433()
{
    // event 1105_11 : sets the selected object's numeric value to 109; enables flag -2 (legacy object-specific state; original label was not retained) on the selected object; creates a dust 223 object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1105_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_1105_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (17))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_1105_11_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 109);
            ((Active*)*it)->alterables->flags.enable(-2);
        }
        FrameObject * single_instance_1105_11_0; single_instance_1105_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_1105_11_0 == NULL)
                    single_instance_1105_11_0 = new_obj;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 10);
        media.play_id(SOUND_PICKUP_3, 1-1);
    }
    event_1105_11_end: ;
}
void Frames::loop_make_combshiv_11()
{
    event_func_5432();
    event_func_5433();
}
// Function purpose: generated callback event_func_5434 processes event block(s) 1200_11. Actions/conditions:
//        1200_11: sets NewSlotX to ((Active*)get_single(itemSlot_instances, default_active_instance))->get_x(); sets
//        NewSlotY to ((Active*)get_single(itemSlot_instances, default_active_instance))->get_y(); sets the selected
//        object's numeric value to 1.
void Frames::event_func_5434()
{
    // event 1200_11 : sets NewSlotX to ((Active*)get_single(itemSlot_instances, default_active_instance))->get_x(); sets NewSlotY to ((Active*)get_single(itemSlot_instances, default_active_instance))->get_y(); sets the selected object's numeric value to 1
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1200_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_outfit_505))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_1200_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(461, str_newslotx_1330, ((Active*)get_single(itemSlot_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(462, str_newsloty_1331, ((Active*)get_single(itemSlot_instances, default_active_instance))->get_y());
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
    }
    event_1200_11_end: ;
}
// Function purpose: generated callback event_func_5435 processes event block(s) 1201_11. Actions/conditions:
//        1201_11: sets the selected object's horizontal position to gameVariables->get_value(461, NewSlotX);
//        sets the selected object's vertical position to gameVariables->get_value(462, NewSlotY); sets the
//        selected object's string to Outfit; plus 9 more actions.
void Frames::event_func_5435()
{
    // event 1201_11 : sets the selected object's horizontal position to gameVariables->get_value(461, NewSlotX); sets the selected object's vertical position to gameVariables->get_value(462, NewSlotY); sets the selected object's string to Outfit; plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1201_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(368, str_currentinvslot_1162)))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_1201_11_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(461, str_newslotx_1330));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(462, str_newsloty_1331));
            ((Active*)*it)->alterables->strings.set(0, str_outfit_505);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->set_scale(2);
            ((Active*)*it)->alterables->flags.enable(-5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(44, str_outfit_505, number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(368, str_currentinvslot_1162)), empty_string);
        {
            loop_flip_into_equip2_running = true;
            int times = int(1);
            loop_flip_into_equip2_index = 0;
            while (loop_flip_into_equip2_index < times) {
                loop_flip_into_equip2_6();
                if (!loop_flip_into_equip2_running) break;
                loop_flip_into_equip2_index++;
            }
        }
        media.play_id(SOUND_STEP_1, 1-1);
    }
    event_1201_11_end: ;
}
void Frames::loop_flip_into_outfit_11()
{
    event_func_5434();
    event_func_5435();
}
// Function purpose: generated callback event_func_5436 processes event block(s) 1102_11. Actions/conditions:
//        1102_11: sets the selected object's numeric value to 97; enables flag -2 (legacy object-specific state;
//        original label was not retained) on the selected object; creates a dust 223 object; plus 5 more actions.
void Frames::event_func_5436()
{
    // event 1102_11 : sets the selected object's numeric value to 97; enables flag -2 (legacy object-specific state; original label was not retained) on the selected object; creates a dust 223 object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1102_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_1102_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (96))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_1102_11_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 97);
            ((Active*)*it)->alterables->flags.enable(-2);
        }
        FrameObject * single_instance_1102_11_0; single_instance_1102_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_1102_11_0 == NULL)
                    single_instance_1102_11_0 = new_obj;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 10);
        media.play_id(SOUND_PICKUP_3, 1-1);
    }
    event_1102_11_end: ;
}
void Frames::loop_make_toothshiv_11()
{
    event_func_5432();
    event_func_5436();
}
// Function purpose: generated callback event_func_5437 processes event block(s) 692_11. Actions/conditions:
//        692_11: adds a icons 433 instance; sets the selected object's direction to 0; sets the selected object's
//        horizontal position to gameVariables->get_value(343, IconX); plus 5 more actions.
void Frames::event_func_5437()
{
    // event 692_11 : adds a icons 433 instance; sets the selected object's direction to 0; sets the selected object's horizontal position to gameVariables->get_value(343, IconX); plus 5 more actions
    {
        if (!(group_code_1)) goto event_692_11_end;
        icons_433_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_icons_763(0, 0), 5);
            icons_433_instances.add_back();
        }
        for (ObjectIterator it(icons_433_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(343, str_iconx_1136));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(344, str_icony_1137));
            ((Active*)*it)->alterables->values.set(25, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(345, str_iconz_1138));
        }
    }
    event_692_11_end: ;
}
void Frames::loop_icon_thumbup_11()
{
    event_func_5437();
}
// Function purpose: generated callback event_func_5438 processes event block(s) 1012_11. Actions/conditions:
//        1012_11: sets IconX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x();
//        sets IconY to ((Active*)get_single(guardBase_instances, default_active_instance))->get_y(); sets IconZ
//        to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25).
void Frames::event_func_5438()
{
    // event 1012_11 : sets IconX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); sets IconY to ((Active*)get_single(guardBase_instances, default_active_instance))->get_y(); sets IconZ to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25)
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1012_11_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1012_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(343, str_iconx_1136, ((Active*)get_single(guardBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(344, str_icony_1137, ((Active*)get_single(guardBase_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(345, str_iconz_1138, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        {
            loop_icon_thumbup_running = true;
            int times = int(1);
            loop_icon_thumbup_index = 0;
            while (loop_icon_thumbup_index < times) {
                loop_icon_thumbup_11();
                if (!loop_icon_thumbup_running) break;
                loop_icon_thumbup_index++;
            }
        }
    }
    event_1012_11_end: ;
}
void Frames::loop_talk_loop_guard_2_11()
{
    event_func_5438();
}
// Function purpose: generated callback event_func_5439 processes event block(s) 834_11. Actions/conditions:
//        834_11: sets CraftString to empty_string; sets CraftOutput to 71; sets Craft_GiveBack to 1.
void Frames::event_func_5439()
{
    // event 834_11 : sets CraftString to empty_string; sets CraftOutput to 71; sets Craft_GiveBack to 1
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_834_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_1_53_1600))) goto event_834_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 71);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(611, str_craft_giveback_1593, 1);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_834_11_end: ;
}
