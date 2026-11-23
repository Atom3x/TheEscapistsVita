#include "vitaview.h"
#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_1058 processes event block(s) 564_6. Actions/conditions:
//        564_6: removes background tiles at the target coordinates; adds a guardalert 266 instance; sets the selected
//        object's horizontal position to string_to_number(stringtokenizer_81->get(0)); plus 8 more actions.
void Frames::event_func_1058()
{
    // event 564_6 : removes background tiles at the target coordinates; adds a guardalert 266 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer_81->get(0)); plus 8 more actions
    {
        if (!(group_setup_1)) goto event_564_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)) == (str_cutfenceug_868))) goto event_564_6_end;
        layers[1-1].destroy_backgrounds(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)), 0);
        guardalert_266_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guardalert_266(0, 0), 0);
            guardalert_266_instances.add_back();
        }
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2));
        }
        soil_173_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_soil_173(-16, -16), 0);
            soil_173_instances.add_back();
        }
        for (ObjectIterator it(soil_173_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
            ((Active*)*it)->paste(0);
            ((Active*)*it)->destroy();
        }
    }
    event_564_6_end: ;
}
// Function purpose: generated callback event_func_1059 processes event block(s) 565_6. Actions/conditions:
//        565_6: removes background tiles at the target coordinates; sets the selected object's layer to 5-1; draws
//        the selected image or tile; plus 7 more actions.
void Frames::event_func_1059()
{
    // event 565_6 : removes background tiles at the target coordinates; sets the selected object's layer to 5-1; draws the selected image or tile; plus 7 more actions
    {
        if (!(group_setup_1)) goto event_565_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)) == (str_cutfenceroof_867))) goto event_565_6_end;
        layers[5-1].destroy_backgrounds(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)), 0);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)), 0, 48, 16, 16, 0);
        guardalert_266_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guardalert_266(0, 0), 4);
            guardalert_266_instances.add_back();
        }
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2));
        }
    }
    event_565_6_end: ;
}
// Function purpose: generated callback event_func_1060 processes event block(s) 566_6. Actions/conditions:
//        566_6: sets the object's animation to 1.
void Frames::event_func_1060()
{
    // event 566_6 : sets the object's animation to 1
    {
        if (!(group_setup_1)) goto event_566_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)) == (str_openvent_908))) goto event_566_6_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0))))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1))-16))) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto event_566_6_end;
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
    }
    event_566_6_end: ;
}
// Function purpose: generated callback event_func_1061 processes event block(s) 567_6. Actions/conditions:
//        567_6: removes background tiles at the target coordinates; sets the selected object's layer to 2-1; draws
//        the selected image or tile; plus 6 more actions.
void Frames::event_func_1061()
{
    // event 567_6 : removes background tiles at the target coordinates; sets the selected object's layer to 2-1; draws the selected image or tile; plus 6 more actions
    {
        if (!(group_setup_1)) goto event_567_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)) == (str_brokenwall_600))) goto event_567_6_end;
        layers[2-1].destroy_backgrounds(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)), 0);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)), 0, 48, 16, 16, 0);
        active2_105_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_active2_411(0, 0), 6);
            active2_105_instances.add_back();
        }
        for (ObjectIterator it(active2_105_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        }
    }
    event_567_6_end: ;
}
// Function purpose: generated callback event_func_1062 processes event block(s) 568_6. Actions/conditions:
//        568_6: removes background tiles at the target coordinates; sets the selected object's layer to 2-1; draws
//        the selected image or tile.
void Frames::event_func_1062()
{
    // event 568_6 : removes background tiles at the target coordinates; sets the selected object's layer to 2-1; draws the selected image or tile
    {
        if (!(group_setup_1)) goto event_568_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)) == (str_cutfence_909))) goto event_568_6_end;
        layers[2-1].destroy_backgrounds(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)), 0);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)), 0, 48, 16, 16, 0);
    }
    event_568_6_end: ;
}
// Function purpose: generated callback event_func_1063 processes event block(s) 569_6. Actions/conditions:
//        569_6: removes background tiles at the target coordinates; sets the selected object's layer to 2-1; draws
//        the selected image or tile.
void Frames::event_func_1063()
{
    // event 569_6 : removes background tiles at the target coordinates; sets the selected object's layer to 2-1; draws the selected image or tile
    {
        if (!(group_setup_1)) goto event_569_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)) == (str_cutbars_910))) goto event_569_6_end;
        layers[2-1].destroy_backgrounds(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)), 0);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)), 0, 48, 16, 16, 0);
    }
    event_569_6_end: ;
}
void Frames::loop_load_alerts_6()
{
    event_func_1056();
    event_func_1057();
    event_func_1058();
    event_func_1059();
    event_func_1060();
    event_func_1061();
    event_func_1062();
    event_func_1063();
}
// Function purpose: generated callback event_func_1064 processes event block(s) 3015_6. Actions/conditions:
//        3015_6: splits saved text into fields.
void Frames::event_func_1064()
{
    // event 3015_6 : splits saved text into fields
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3015_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_451+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452))+str_inv_911+number_to_string(loop_fill_loot_slots_index+1))) != (empty_string))) goto event_3015_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_451+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452))+str_inv_911+number_to_string(loop_fill_loot_slots_index+1)), str__96);
    }
    event_3015_6_end: ;
}
// Function purpose: generated callback event_func_1065 processes event block(s) 3016_6. Actions/conditions:
//        3016_6: creates a itemshud 210 object; sets the selected object's numeric value to
//        string_to_number(stringtokenizer_81->get(0)); sets the selected object's numeric value to
//        string_to_number(stringtokenizer_81->get(1)); plus 9 more actions.
void Frames::event_func_1065()
{
    // event 3016_6 : creates a itemshud 210 object; sets the selected object's numeric value to string_to_number(stringtokenizer_81->get(0)); sets the selected object's numeric value to string_to_number(stringtokenizer_81->get(1)); plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3016_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_fill_loot_slots_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_448))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3016_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_451+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452))+str_inv_911+number_to_string(loop_fill_loot_slots_index+1))) != (empty_string))) goto event_3016_6_end;
        FrameObject * single_instance_3016_6_0; single_instance_3016_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hudItem(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3016_6_0 == NULL)
                    single_instance_3016_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3016_6_0))->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((Active*)((Active*)single_instance_3016_6_0))->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((Active*)((Active*)single_instance_3016_6_0))->alterables->values.set(12, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((Active*)((Active*)single_instance_3016_6_0))->alterables->values.set(1, loop_fill_loot_slots_index+1);
        ((Active*)((Active*)single_instance_3016_6_0))->alterables->strings.set(1, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2));
        ((Active*)((Active*)single_instance_3016_6_0))->alterables->strings.set(0, str_loot_448);
        ((Active*)((Active*)single_instance_3016_6_0))->alterables->flags.enable(-2);
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
    }
    event_3016_6_end: ;
}
// Function purpose: generated callback event_func_1066 processes event block(s) 3017_6. Actions/conditions:
//        3017_6: updates game state with selected object->flash((250) / 1000.0); enables flag 2002 (inventory-item
//        activation or highlight state) on the selected object.
void Frames::event_func_1066()
{
    // event 3017_6 : updates game state with selected object->flash((250) / 1000.0); enables flag 2002 (inventory-item activation or highlight state) on the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3017_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_448))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (loop_fill_loot_slots_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (0))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3017_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->flash((250) / 1000.0);
            ((Active*)*it)->alterables->flags.enable(2002);
        }
    }
    event_3017_6_end: ;
}
void Frames::loop_fill_loot_slots_6()
{
    event_func_1064();
    event_func_1065();
    event_func_1066();
}
// Function purpose: generated callback event_func_1067 processes event block(s) 4153_6. Actions/conditions:
//        4153_6: sets InmateEquip to 0.
void Frames::event_func_1067()
{
    // event 4153_6 : sets InmateEquip to 0
    {
        if (!(group_code_1)) goto event_4153_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(257, str_inmateequip_912, 0);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
    }
    event_4153_6_end: ;
}
void Frames::loop_loop_npc_equip_6()
{
    event_func_1067();
}
// Function purpose: generated callback event_func_1068 processes event block(s) 810_6. Actions/conditions:
//        810_6: sets the selected object's direction to 0.
void Frames::event_func_1068()
{
    // event 810_6 : sets the selected object's direction to 0
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_810_6_end;
        settingsSlider_instances.clear_selection();
        for (ObjectIterator it(settingsSlider_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_full_58))) { it.deselect(); continue; }
        }
        if (!settingsSlider_instances.has_selection()) goto event_810_6_end;
        for (ObjectIterator it(settingsSlider_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_810_6_end: ;
}
// Function purpose: generated callback event_func_1069 processes event block(s) 811_6. Actions/conditions:
//        811_6: sets the selected object's direction to 0.
void Frames::event_func_1069()
{
    // event 811_6 : sets the selected object's direction to 0
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_811_6_end;
        settingsSlider_instances.clear_selection();
        for (ObjectIterator it(settingsSlider_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_win_670))) { it.deselect(); continue; }
        }
        if (!settingsSlider_instances.has_selection()) goto event_811_6_end;
        for (ObjectIterator it(settingsSlider_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_811_6_end: ;
}
// Function purpose: generated callback event_func_1070 processes event block(s) 812_6. Actions/conditions:
//        812_6: sets the selected object's direction to 16.
void Frames::event_func_1070()
{
    // event 812_6 : sets the selected object's direction to 16
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_812_6_end;
        if (!((global_values->get(8)) == (0))) goto event_812_6_end;
        settingsSlider_instances.clear_selection();
        for (ObjectIterator it(settingsSlider_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_full_58))) { it.deselect(); continue; }
        }
        if (!settingsSlider_instances.has_selection()) goto event_812_6_end;
        for (ObjectIterator it(settingsSlider_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_812_6_end: ;
}
// Function purpose: generated callback event_func_1071 processes event block(s) 813_6. Actions/conditions:
//        813_6: sets the selected object's direction to 16.
void Frames::event_func_1071()
{
    // event 813_6 : sets the selected object's direction to 16
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_813_6_end;
        if (!((global_values->get(8)) == (1))) goto event_813_6_end;
        settingsSlider_instances.clear_selection();
        for (ObjectIterator it(settingsSlider_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_win_670))) { it.deselect(); continue; }
        }
        if (!settingsSlider_instances.has_selection()) goto event_813_6_end;
        for (ObjectIterator it(settingsSlider_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_813_6_end: ;
}
void Frames::loop_options_screen_6()
{
    event_func_1068();
    event_func_1069();
    event_func_1070();
    event_func_1071();
}
// Function purpose: generated callback event_func_1072 processes event block(s) 1384_6. Actions/conditions:
//        1384_6: sets the object's animation to 0.
void Frames::event_func_1072()
{
    // event 1384_6 : sets the object's animation to 0
    {
        if (!(group_code_1)) goto event_1384_6_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_1384_6_end;
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1384_6_end: ;
}
void Frames::loop_inmate_wake_6()
{
    event_func_1072();
}
// Function purpose: generated callback event_func_1073 processes event block(s) 1753_6. Actions/conditions:
//        1753_6: sets the selected object's numeric value to ((Active*)single_instance_1753_6_0)->get_x()+8; sets the
//        selected object's numeric value to ((Active*)single_instance_1753_6_0)->get_y()+8.
void Frames::event_func_1073()
{
    // event 1753_6 : sets the selected object's numeric value to ((Active*)single_instance_1753_6_0)->get_x()+8; sets the selected object's numeric value to ((Active*)single_instance_1753_6_0)->get_y()+8
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1753_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_canteen_align_guards_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1753_6_end;
        if (!check_not_overlap(guardBase_instances, waypointcanteenguard_181_instances)) goto event_1753_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1753_6_end;
        waypointcanteenguard_181_instances.clear_selection();
        FrameObject * single_instance_1753_6_0; single_instance_1753_6_0 = pick_random(waypointcanteenguard_181_instances);
        if (single_instance_1753_6_0 == NULL) goto event_1753_6_end;
        if (!((((Active*)single_instance_1753_6_0)->alterables->values.get(0)) == (loop_canteen_align_guards_index+1))) goto event_1753_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)single_instance_1753_6_0)->get_x()+8);
            ((Active*)*it)->alterables->values.set(24, ((Active*)single_instance_1753_6_0)->get_y()+8);
        }
    }
    event_1753_6_end: ;
}
// Function purpose: generated callback event_func_1074 processes event block(s) 1754_6. Actions/conditions:
//        1754_6: sets the selected object's direction to get_direction_int(selected object->x, selected object->y,
//        active3_284->x + 0, active3_284->y + 0).
void Frames::event_func_1074()
{
    // event 1754_6 : sets the selected object's direction to get_direction_int(selected object->x, selected object->y, active3_284->x + 0, active3_284->y + 0)
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1754_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_canteen_align_guards_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1754_6_end;
        waypointcanteenguard_181_instances.clear_selection();
        if (!check_overlap(guardBase_instances, waypointcanteenguard_181_instances)) goto event_1754_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1754_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(active3_284_instances))->x + 0, ((Active*)get_instance(active3_284_instances))->y + 0));
        }
    }
    event_1754_6_end: ;
}
void Frames::loop_canteen_align_guards_6()
{
    event_func_1073();
    event_func_1074();
}
// Function purpose: generated callback event_func_1075 processes event block(s) 1163_6. Actions/conditions:
//        1163_6: splits saved text into fields.
void Frames::event_func_1075()
{
    // event 1163_6 : splits saved text into fields
    {
        if (!(group_code_1)) goto event_1163_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_desk_32+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913))+str_slot_617+number_to_string(loop_desk_douse_index+1)), str__96);
    }
    event_1163_6_end: ;
}
// Function purpose: generated callback event_func_1076 processes event block(s) 1164_6. Actions/conditions:
//        1164_6: sets a game or interface text string.
void Frames::event_func_1076()
{
    // event 1164_6 : sets a game or interface text string
    {
        if (!(group_code_1)) goto event_1164_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0), str_illegal_618)) > (0))) goto event_1164_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913))+str_slot_617+number_to_string(loop_desk_douse_index+1), empty_string);
    }
    event_1164_6_end: ;
}
void Frames::loop_desk_douse_6()
{
    event_func_1075();
    event_func_1076();
}
// Function purpose: generated callback event_func_1077 processes event block(s) 3497_6. Actions/conditions:
//        3497_6: sets the object's animation to 2.
void Frames::event_func_1077()
{
    // event 3497_6 : sets the object's animation to 2
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3497_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(89, str_addsuccess_596)) == (1))) goto event_3497_6_end;
        cursor_178_instances.clear_selection();
        qualifier_6.clear_selection();
        if (!check_overlap(cursor_178_instances, qualifier_6)) goto event_3497_6_end;
        for (QualifierIterator it(qualifier_6); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
        }
    }
    event_3497_6_end: ;
}
void Frames::loop_pillow_check_6()
{
    event_func_1077();
}
// Function purpose: generated callback event_func_1078 processes event block(s) 4405_6. Actions/conditions:
//        4405_6: sets Name to playerBase->alterables->strings.get(0); sets a stored numeric value; sets Map to
//        global_strings->get(0); plus 5 more actions.
void Frames::event_func_1078()
{
    // event 4405_6 : sets Name to playerBase->alterables->strings.get(0); sets a stored numeric value; sets Map to global_strings->get(0); plus 5 more actions
    {
        if (!(group_saving_1)) goto event_4405_6_end;
        ((INI*)get_instance(filesave_473_instances))->set_string(str_data_194, str_name_103, ((Active*)get_instance(playerBase_instances))->alterables->strings.get(0));
        ((INI*)get_instance(filesave_473_instances))->set_value_int(str_data_194, str_day_112, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(254, str_t_day_902));
        ((INI*)get_instance(filesave_473_instances))->set_string(str_data_194, str_map_107, global_strings->get(0));
        ((INI*)get_instance(filesave_473_instances))->set_string(str_data_194, str_code_914, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(259, str_savecode_343));
        ((INI*)get_instance(filesave_473_instances))->save_file();
    }
    event_4405_6_end: ;
}
void Frames::loop_new_filesave_6()
{
    event_func_1078();
}
// Function purpose: generated callback event_func_1079 processes event block(s) 2988_6. Actions/conditions:
//        2988_6: sets CanSee to 1; sets the selected object's layer to 2-1; sets the selected object's horizontal
//        position to playerBase->get_x(); plus 6 more actions.
void Frames::event_func_1079()
{
    // event 2988_6 : sets CanSee to 1; sets the selected object's layer to 2-1; sets the selected object's horizontal position to playerBase->get_x(); plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2988_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(260, str_cansee_915, 1);
        ((Active*)get_instance(los_198_instances))->set_layer(2-1);
        ((Active*)get_instance(los_198_instances))->set_x(((Active*)get_instance(playerBase_instances))->get_x());
        ((Active*)get_instance(los_198_instances))->set_y(((Active*)get_instance(playerBase_instances))->get_y());
        ((Active*)get_instance(los_198_instances))->set_x_scale(get_distance_int(((Active*)get_instance(playerBase_instances))->get_x(), ((Active*)get_instance(playerBase_instances))->get_y(), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(105, str_lookx_662), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(106, str_looky_663)));
        ((Active*)get_instance(los_198_instances))->set_angle(get_angle_int(((Active*)get_instance(playerBase_instances))->get_x(), ((Active*)get_instance(playerBase_instances))->get_y(), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(105, str_lookx_662), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(106, str_looky_663)), 0);
    }
    event_2988_6_end: ;
}
// Function purpose: generated callback event_func_1080 processes event block(s) 2989_6. Actions/conditions:
//        2989_6: sets CanSee to 0.
void Frames::event_func_1080()
{
    // event 2989_6 : sets CanSee to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2989_6_end;
        los_198_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(los_198_instances, qualifier_19)) goto event_2989_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(260, str_cansee_915, 0);
    }
    event_2989_6_end: ;
}
// Function purpose: generated callback event_func_1081 processes event block(s) 2990_6. Actions/conditions:
//        2990_6: sets CanSee to 0.
void Frames::event_func_1081()
{
    // event 2990_6 : sets CanSee to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2990_6_end;
        if (!(((Active*)get_instance(los_198_instances))->overlaps_background())) goto event_2990_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(260, str_cansee_915, 0);
    }
    event_2990_6_end: ;
}
void Frames::loop_talk_los_6()
{
    event_func_1079();
    event_func_1080();
    event_func_1081();
}
// Function purpose: generated callback event_func_1082 processes event block(s) 592_6. Actions/conditions:
//        592_6: creates a dialogue2 179 object; updates a value on the target object; sets a game or interface text
//        string.
void Frames::event_func_1082()
{
    // event 592_6 : creates a dialogue2 179 object; updates a value on the target object; sets a game or interface text string
    {
        FrameObject * single_instance_592_6_0; single_instance_592_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -110, parent->y + 66), parent->layer);
                if (single_instance_592_6_0 == NULL)
                    single_instance_592_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_592_6_0))->blend_color.set(Color(0, 61, 128));
        ((Text*)((Text*)single_instance_592_6_0))->set_string(str_warden_916+((AssociateArray*)get_instance(gameVariables_instances))->get_string(167, str_mapwarden_744));
    }
    event_592_6_end: ;
}
void Frames::loop_append_6()
{
    event_func_1082();
}
// Function purpose: generated callback event_func_1083 processes event block(s) 958_6. Actions/conditions:
//        958_6: hides a game layer; hides a game layer; sets the selected object's horizontal position to
//        ((playerBase->get_x()/MathHelper()/16)*16)+8; plus 7 more actions.
void Frames::event_func_1083()
{
    // event 958_6 : hides a game layer; hides a game layer; sets the selected object's horizontal position to ((playerBase->get_x()/MathHelper()/16)*16)+8; plus 7 more actions
    {
        if (!(group_code_1)) goto event_958_6_end;
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(4-1);
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(5-1);
        ((Active*)get_instance(playerBase_instances))->set_x(((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16)*16)+8);
        ((Active*)get_instance(playerBase_instances))->set_y(((((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16)*16)+24);
        ((Active*)get_instance(playerBase_instances))->set_layer(2-1);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_layer(2-1);
        }
        FrameObject * single_instance_958_6_0; single_instance_958_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_958_6_0 == NULL)
                    single_instance_958_6_0 = new_obj;
            }
        }
    }
    event_958_6_end: ;
}
void Frames::loop_roof_fall_6()
{
    event_func_1083();
}
// Function purpose: generated callback event_func_1084 processes event block(s) 528_6. Actions/conditions:
//        528_6: sets Ypos to frame_top()+12.
void Frames::event_func_1084()
{
    // event 528_6 : sets Ypos to frame_top()+12
    {
        if (!(group_setup_1)) goto event_528_6_end;
        if (!((loop_build_inven_slots_index) == (0))) goto event_528_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(80, str_ypos_193, frame_left()+88);
    }
    event_528_6_end: ;
}

// Function purpose: generated callback event_func_1085 processes event block(s) 529_6. Actions/conditions:
//        529_6: Build inventory.
void Frames::event_func_1085()
{
    // event 529_6 : Build inventory
    {
        if (!(group_setup_1)) goto event_529_6_end;
        itemSlot_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_itemSlot(-16, -16), 5);
            itemSlot_instances.add_back();
        }
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set(Color(98, 245, 245));
            ((Active*)*it)->blend_color.set_alpha_coefficient(30);
            ((Active*)*it)->alterables->strings.set(0, str_inven_820);
            ((Active*)*it)->set_direction(loop_build_inven_slots_index);
            ((Active*)*it)->set_x(VITA_VIEW_X(((Active*)*it), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)));
            ((Active*)*it)->set_y(VITA_VIEW_Y(((Active*)*it), frame_bottom() - 30));
            ((Active*)*it)->alterables->values.set(0, loop_build_inven_slots_index+1);
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->blend_color.set_alpha_coefficient(30);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 24);
    }
    event_529_6_end: ;
}
void Frames::loop_build_inven_slots_6()
{
    event_func_1084();
    event_func_1085();
}
// Function purpose: generated callback event_func_1086 processes event block(s) 1092_6. Actions/conditions:
//        1092_6: enables flag 60 (guard sight or target-tracking state) on the selected object; sets the selected
//        object's numeric value to gameVariables->get_value(105, LookX); sets the selected object's numeric
//        value to gameVariables->get_value(106, LookY).
void Frames::event_func_1086()
{
    // event 1092_6 : enables flag 60 (guard sight or target-tracking state) on the selected object; sets the selected object's numeric value to gameVariables->get_value(105, LookX); sets the selected object's numeric value to gameVariables->get_value(106, LookY)
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1092_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1092_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1092_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(60);
            ((Active*)*it)->alterables->values.set(23, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(105, str_lookx_662));
            ((Active*)*it)->alterables->values.set(24, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(106, str_looky_663));
        }
    }
    event_1092_6_end: ;
}
void Frames::loop_bound_spotted_6()
{
    event_func_1086();
}
// Function purpose: generated callback event_func_1087 processes event block(s) 1016_6. Actions/conditions:
//        1016_6: enables flag 2005 (player detected or present for roll call) on the selected object; sets
//        PlayerFound to 1.
void Frames::event_func_1087()
{
    // event 1016_6 : enables flag 2005 (player detected or present for roll call) on the selected object; sets PlayerFound to 1
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1016_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1016_6_end;
        ((Active*)get_instance(playerBase_instances))->alterables->flags.enable(2005);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(261, str_playerfound_917, 1);
    }
    event_1016_6_end: ;
}
void Frames::loop_flag_found_6()
{
    event_func_1087();
}
// Function purpose: generated callback event_func_1088 processes event block(s) 727_6. Actions/conditions:
//        727_6: adds a dooroutfit 501 instance.
void Frames::event_func_1088()
{
    // event 727_6 : adds a dooroutfit 501 instance
    {
        if (!(group_code_1 && group_code_dlc_tol_1)) goto event_727_6_end;
        dooroutfit_501_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dooroutfit_501(832, 928), 1);
            dooroutfit_501_instances.add_back();
        }
    }
    event_727_6_end: ;
}
// Function purpose: generated callback event_func_1089 processes event block(s) 728_6. Actions/conditions:
//        728_6: adds a dooroutfit 501 instance.
void Frames::event_func_1089()
{
    // event 728_6 : adds a dooroutfit 501 instance
    {
        if (!(group_code_1 && group_code_dlc_tol_1)) goto event_728_6_end;
        dooroutfit_501_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dooroutfit_501(976, 768), 1);
            dooroutfit_501_instances.add_back();
        }
    }
    event_728_6_end: ;
}
void Frames::loop_setup_tol_6()
{
    event_func_1088();
    event_func_1089();
}
// Function purpose: generated callback event_func_1090 processes event block(s) 805_6. Actions/conditions:
//        805_6: sets global value 10 from 0.
void Frames::event_func_1090()
{
    // event 805_6 : sets global value 10 from 0
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_805_6_end;
        if (!((global_values->get(10)) < (0))) goto event_805_6_end;
        global_values->set(10, 0);
    }
    event_805_6_end: ;
}
// Function purpose: generated callback event_func_1091 processes event block(s) 806_6. Actions/conditions:
//        806_6: sets global value 10 from 100.
void Frames::event_func_1091()
{
    // event 806_6 : sets global value 10 from 100
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_806_6_end;
        if (!((global_values->get(10)) > (100))) goto event_806_6_end;
        global_values->set(10, 100);
    }
    event_806_6_end: ;
}
// Function purpose: generated callback event_func_1092 processes event block(s) 807_6. Actions/conditions:
//        807_6: sets the selected object's horizontal position to (dialogPanel->get_x()-50)+global_values->get(10);
//        sets the audio channel volume; plays a sound or music track; plus 1 more actions.
void Frames::event_func_1092()
{
    // event 807_6 : sets the selected object's horizontal position to (dialogPanel->get_x()-50)+global_values->get(10); sets the audio channel volume; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_807_6_end;
        settingsSlider_instances.clear_selection();
        for (ObjectIterator it(settingsSlider_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_sfx_54))) { it.deselect(); continue; }
        }
        if (!settingsSlider_instances.has_selection()) goto event_807_6_end;
        for (ObjectIterator it(settingsSlider_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((((Active*)get_instance(dialogPanel_instances))->get_x()-50)+global_values->get(10));
        }
        media.set_channel_volume(1-1, global_values->get(10));
        media.play_id(SOUND_HIT_2, 1-1);
        ((INI*)get_instance(mapload_322_instances))->set_value_int(str_settings_52, str_sfx_54, global_values->get(10));
    }
    event_807_6_end: ;
}
void Frames::loop_slider_sfx_6()
{
    event_func_1090();
    event_func_1091();
    event_func_1092();
}
// Function purpose: generated callback event_func_1093 processes event block(s) 2457_6. Actions/conditions:
//        2457_6: sets Xpos to -46; sets Ypos to -14; creates a buttontext 445 object; plus 6 more actions.
void Frames::event_func_1093()
{
    // event 2457_6 : sets Xpos to -46; sets Ypos to -14; creates a buttontext 445 object; plus 6 more actions
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2457_6_end;
        if (!((loop_build_craft_slots_index) == (0))) goto event_2457_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(140, str_xpos_705, -46);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(80, str_ypos_193, -14);
        FrameObject * single_instance_2457_6_0; single_instance_2457_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buttontext_445(parent->x + -58, parent->y + 28), parent->layer);
                if (single_instance_2457_6_0 == NULL)
                    single_instance_2457_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_2457_6_0))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_3_158)+str__918));
        ((Text*)((Text*)single_instance_2457_6_0))->blend_color.set(Color(120, 120, 120));
        ((Text*)((Text*)single_instance_2457_6_0))->set_bold(0);
    }
    event_2457_6_end: ;
}
// Function purpose: generated callback event_func_1094 processes event block(s) 2458_6. Actions/conditions:
//        2458_6: creates a slot 224 object; reads an object position for this event; reads an object position for
//        this event; plus 7 more actions.
void Frames::event_func_1094()
{
    // event 2458_6 : creates a slot 224 object; reads an object position for this event; reads an object position for this event; plus 7 more actions
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2458_6_end;
        FrameObject * single_instance_2458_6_0; single_instance_2458_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemSlot(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2458_6_0 == NULL)
                    single_instance_2458_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2458_6_0))->set_x(((Active*)single_instance_2458_6_0)->get_x()+((AssociateArray*)get_instance(gameVariables_instances))->get_value(140, str_xpos_705));
        ((Active*)((Active*)single_instance_2458_6_0))->set_y(((Active*)single_instance_2458_6_0)->get_y()+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        ((Active*)((Active*)single_instance_2458_6_0))->alterables->values.set(0, loop_build_craft_slots_index+1);
        ((Active*)((Active*)single_instance_2458_6_0))->set_scale(2);
        ((Active*)((Active*)single_instance_2458_6_0))->alterables->strings.set(0, str_craft_900);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(140, str_xpos_705, 46);
    }
    event_2458_6_end: ;
}
void Frames::loop_build_craft_slots_6()
{
    event_func_1093();
    event_func_1094();
}
// Function purpose: generated callback event_func_1095 processes event block(s) 2436_6. Actions/conditions:
//        2436_6: removes the selected object.
void Frames::event_func_1095()
{
    // event 2436_6 : removes the selected object
    {
        if (!(group_code_1)) goto event_2436_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craftnote_716))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2436_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2436_6_end: ;
}
// Function purpose: generated callback event_func_1096 processes event block(s) 2437_6. Actions/conditions:
//        2437_6: removes the selected object.
void Frames::event_func_1096()
{
    // event 2437_6 : removes the selected object
    {
        if (!(group_code_1)) goto event_2437_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craftnote_716))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_2437_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2437_6_end: ;
}
void Frames::loop_lose_craftnote_icons_6()
{
    event_func_1095();
    event_func_1096();
}
// Function purpose: generated callback event_func_1097 processes event block(s) 779_6. Actions/conditions:
//        779_6: removes the selected object; sets the selected object's visibility to false.
void Frames::event_func_1097()
{
    // event 779_6 : removes the selected object; sets the selected object's visibility to false
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_779_6_end;
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
        buttontext_445_instances.clear_selection();
        for (ObjectIterator it(buttontext_445_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
            group_code_menu_1 = false;
    
    }
    event_779_6_end: ;
}
void Frames::loop_menu_close_6()
{
    event_func_1097();
}
// Function purpose: generated callback event_func_1098 processes event block(s) 3012_6. Actions/conditions:
//        3012_6: sets Xpos to -41; sets Ypos to -5.
void Frames::event_func_1098()
{
    // event 3012_6 : sets Xpos to -41; sets Ypos to -5
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3012_6_end;
        if (!((loop_build_loot_slots_index) == (0))) goto event_3012_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(140, str_xpos_705, -41);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(80, str_ypos_193, -5);
    }
    event_3012_6_end: ;
}
// Function purpose: generated callback event_func_1099 processes event block(s) 3013_6. Actions/conditions:
//        3013_6: creates a slot 224 object; sets the selected object's string to Loot; reads an object position for
//        this event; plus 6 more actions.
void Frames::event_func_1099()
{
    // event 3013_6 : creates a slot 224 object; sets the selected object's string to Loot; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3013_6_end;
        FrameObject * single_instance_3013_6_0; single_instance_3013_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemSlot(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3013_6_0 == NULL)
                    single_instance_3013_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3013_6_0))->alterables->strings.set(0, str_loot_448);
        ((Active*)((Active*)single_instance_3013_6_0))->set_x(((Active*)single_instance_3013_6_0)->get_x()+((AssociateArray*)get_instance(gameVariables_instances))->get_value(140, str_xpos_705));
        ((Active*)((Active*)single_instance_3013_6_0))->set_y(((Active*)single_instance_3013_6_0)->get_y()+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        ((Active*)((Active*)single_instance_3013_6_0))->alterables->values.set(0, loop_build_loot_slots_index+1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(140, str_xpos_705, 24);
    }
    event_3013_6_end: ;
}
// Function purpose: generated callback event_func_1100 processes event block(s) 3014_6. Actions/conditions:
//        3014_6: sets Xpos to -41; sets Ypos to 20.
void Frames::event_func_1100()
{
    // event 3014_6 : sets Xpos to -41; sets Ypos to 20
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3014_6_end;
        if (!((loop_build_loot_slots_index) == (2))) goto event_3014_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(140, str_xpos_705, -41);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(80, str_ypos_193, 20);
    }
    event_3014_6_end: ;
}
void Frames::loop_build_loot_slots_6()
{
    event_func_1098();
    event_func_1099();
    event_func_1100();
}
// Function purpose: generated callback event_func_1101 processes event block(s) 2084_6. Actions/conditions:
//        2084_6: sets Doors_Cell_Locked to 0; sets Doors_Outside_Locked to 0; sets Doors_Utility_Locked to 0; plus 5
//        more actions.
void Frames::event_func_1101()
{
    // event 2084_6 : sets Doors_Cell_Locked to 0; sets Doors_Outside_Locked to 0; sets Doors_Utility_Locked to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2084_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(157, str_doors_cell_locked_730, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(262, str_doors_outside_locked_919, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(263, str_doors_utility_locked_920, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(264, str_doors_staff_locked_921, 0);
        dooroutside_262_instances.clear_selection();
        for (ObjectIterator it(dooroutside_262_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        doorcell_174_instances.clear_selection();
        for (ObjectIterator it(doorcell_174_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_2084_6_end: ;
}
// Function purpose: generated callback event_func_1102 processes event block(s) 2085_6. Actions/conditions:
//        2085_6: sets Doors_Cell_Locked to 0; sets Doors_Outside_Locked to 1; sets the selected object's direction to
//        0.
void Frames::event_func_1102()
{
    // event 2085_6 : sets Doors_Cell_Locked to 0; sets Doors_Outside_Locked to 1; sets the selected object's direction to 0
    bool or_result_2085_6 = false;
    bool or_temp_result_2085_6_0 = false;
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto or_event_2085_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(25, str_t_hour_488)) < (10))) goto or_event_2085_6_0_end;
        or_result_2085_6 = true;
        or_temp_result_2085_6_0 = true;
    }
    or_event_2085_6_0_end: ;
    // event 2085_6 : sets Doors_Cell_Locked to 0; sets Doors_Outside_Locked to 1; sets the selected object's direction to 0
    bool or_temp_result_2085_6_1 = false;
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto or_event_2085_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(25, str_t_hour_488)) >= (22))) goto or_event_2085_6_1_end;
        or_result_2085_6 = true;
        or_temp_result_2085_6_1 = true;
        or_event_2085_6_1_end: ;
        if (!or_result_2085_6) goto or_final_or_event_2085_6_1_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(157, str_doors_cell_locked_730, 0);
            ((AssociateArray*)*it)->set_value(262, str_doors_outside_locked_919, 1);
        }
        dooroutside_262_instances.clear_selection();
        for (ObjectIterator it(dooroutside_262_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    or_final_or_event_2085_6_1_end: ;
}
void Frames::loop_lockdown_end_doors_6()
{
    event_func_1101();
    event_func_1102();
}
// Function purpose: generated callback event_func_1103 processes event block(s) 2433_6. Actions/conditions:
//        2433_6: chooses a random value; activates the get_current_line( event group; sets tempItemID to
//        string_to_number(craftingpossibles_349->get_current_line()); plus 5 more actions.
void Frames::event_func_1103()
{
    // event 2433_6 : chooses a random value; activates the get_current_line( event group; sets tempItemID to string_to_number(craftingpossibles_349->get_current_line()); plus 5 more actions
    {
        if (!(group_code_1)) goto event_2433_6_end;
        ((ListObject*)get_instance(craftingpossibles_349_instances))->current_line = randrange_event(((ListObject*)get_instance(craftingpossibles_349_instances))->get_count());
        ((INI*)get_instance(itemData_instances))->set_group(((ListObject*)get_instance(craftingpossibles_349_instances))->get_current_line());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(147, str_tempitemid_717, string_to_number(((ListObject*)get_instance(craftingpossibles_349_instances))->get_current_line()));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(108, str_craftnotes_665, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(108, str_craftnotes_665)+((ListObject*)get_instance(craftingpossibles_349_instances))->get_current_line()+str__254);
        ((ListObject*)get_instance(craftingpossibles_349_instances))->delete_line(((ListObject*)get_instance(craftingpossibles_349_instances))->current_line);
    }
    event_2433_6_end: ;
}
void Frames::loop_find_craft_note_6()
{
    event_func_1103();
}
// Function purpose: generated callback event_func_1104 processes event block(s) 2069_6. Actions/conditions:
//        2069_6: sets NPC_InCell to 0.
void Frames::event_func_1104()
{
    // event 2069_6 : sets NPC_InCell to 0
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2069_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(265, str_npc_incell_922, 0);
    }
    event_2069_6_end: ;
}
// Function purpose: generated callback event_func_1105 processes event block(s) 2070_6. Actions/conditions:
//        2070_6: enables flag 2007 (NPC is recorded inside its cell) on the selected object; sets NPC_InCell to 1.
void Frames::event_func_1105()
{
    // event 2070_6 : enables flag 2007 (NPC is recorded inside its cell) on the selected object; sets NPC_InCell to 1
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2070_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_incellcheck_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(266, str_zones_cells1topx_923)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(267, str_zones_cells1topy_924)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(268, str_zones_cells1bottomx_925)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(269, str_zones_cells1bottomy_926)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2070_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2007);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(265, str_npc_incell_922, 1);
    }
    event_2070_6_end: ;
}
// Function purpose: generated callback event_func_1106 processes event block(s) 2071_6. Actions/conditions:
//        2071_6: enables flag 2007 (NPC is recorded inside its cell) on the selected object; sets NPC_InCell to 1.
void Frames::event_func_1106()
{
    // event 2071_6 : enables flag 2007 (NPC is recorded inside its cell) on the selected object; sets NPC_InCell to 1
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2071_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_incellcheck_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(270, str_zones_cells2topx_927)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(271, str_zones_cells2topy_928)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(272, str_zones_cells2bottomx_929)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(273, str_zones_cells2bottomy_930)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2071_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2007);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(265, str_npc_incell_922, 1);
    }
    event_2071_6_end: ;
}
// Function purpose: generated callback event_func_1107 processes event block(s) 2072_6. Actions/conditions:
//        2072_6: enables flag 2007 (NPC is recorded inside its cell) on the selected object; sets NPC_InCell to 1.
void Frames::event_func_1107()
{
    // event 2072_6 : enables flag 2007 (NPC is recorded inside its cell) on the selected object; sets NPC_InCell to 1
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2072_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_incellcheck_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(274, str_zones_cells3topx_931)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(275, str_zones_cells3topy_932)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(276, str_zones_cells3bottomx_933)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(277, str_zones_cells3bottomy_934)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2072_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2007);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(265, str_npc_incell_922, 1);
    }
    event_2072_6_end: ;
}
// Function purpose: generated callback event_func_1108 processes event block(s) 2073_6. Actions/conditions:
//        2073_6: enables flag 2007 (NPC is recorded inside its cell) on the selected object; sets NPC_InCell to 1.
void Frames::event_func_1108()
{
    // event 2073_6 : enables flag 2007 (NPC is recorded inside its cell) on the selected object; sets NPC_InCell to 1
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2073_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_incellcheck_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(278, str_zones_cells4topx_935)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(279, str_zones_cells4topy_936)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(280, str_zones_cells4bottomx_937)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(281, str_zones_cells4bottomy_938)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2073_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2007);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(265, str_npc_incell_922, 1);
    }
    event_2073_6_end: ;
}
// Function purpose: generated callback event_func_1109 processes event block(s) 2074_6. Actions/conditions:
//        2074_6: increments Count_InCells by 1.
void Frames::event_func_1109()
{
    // event 2074_6 : increments Count_InCells by 1
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2074_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(265, str_npc_incell_922)) == (1))) goto event_2074_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(282, str_count_incells_939, 1);
    }
    event_2074_6_end: ;
}
void Frames::loop_incellcheck_6()
{
    event_func_1104();
    event_func_1105();
    event_func_1106();
    event_func_1107();
    event_func_1108();
    event_func_1109();
}
// Function purpose: generated callback event_func_1110 processes event block(s) 1701_6. Actions/conditions:
//        1701_6: sets the selected object's numeric value to ((Active*)get_single(waypointrollcall2_189_instances,
//        it.current_index, default_active_instance))->get_x()+8; sets the selected object's numeric value to
//        ((Active*)get_single(waypointrollcall2_189_instances, it.current_index,
//        default_active_instance))->get_y()+8.
void Frames::event_func_1110()
{
    // event 1701_6 : sets the selected object's numeric value to ((Active*)get_single(waypointrollcall2_189_instances, it.current_index, default_active_instance))->get_x()+8; sets the selected object's numeric value to ((Active*)get_single(waypointrollcall2_189_instances, it.current_index, default_active_instance))->get_y()+8
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1701_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_rollcall_align_guards_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1701_6_end;
        if (!check_not_overlap(guardBase_instances, waypointrollcall2_189_instances)) goto event_1701_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1701_6_end;
        waypointrollcall2_189_instances.clear_selection();
        for (ObjectIterator it(waypointrollcall2_189_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_rollcall_align_guards_index+1))) { it.deselect(); continue; }
        }
        if (!waypointrollcall2_189_instances.has_selection()) goto event_1701_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(waypointrollcall2_189_instances, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(waypointrollcall2_189_instances, it.current_index, default_active_instance))->get_y()+8);
        }
    }
    event_1701_6_end: ;
}
// Function purpose: generated callback event_func_1111 processes event block(s) 1702_6. Actions/conditions:
//        1702_6: sets the selected object's direction to 24.
void Frames::event_func_1111()
{
    // event 1702_6 : sets the selected object's direction to 24
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1702_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(283, str_dest_pos_940)) == (1))) goto event_1702_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_rollcall_align_guards_index+1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1702_6_end;
        waypointrollcall2_189_instances.clear_selection();
        if (!check_overlap(guardBase_instances, waypointrollcall2_189_instances)) goto event_1702_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1702_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
    }
    event_1702_6_end: ;
}
// Function purpose: generated callback event_func_1112 processes event block(s) 1703_6. Actions/conditions:
//        1703_6: sets the selected object's direction to 8.
void Frames::event_func_1112()
{
    // event 1703_6 : sets the selected object's direction to 8
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1703_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(283, str_dest_pos_940)) == (0))) goto event_1703_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_rollcall_align_guards_index+1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1703_6_end;
        waypointrollcall2_189_instances.clear_selection();
        if (!check_overlap(guardBase_instances, waypointrollcall2_189_instances)) goto event_1703_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1703_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
    }
    event_1703_6_end: ;
}
void Frames::loop_rollcall_align_guards_6()
{
    event_func_1110();
    event_func_1111();
    event_func_1112();
}
// Function purpose: generated callback event_func_1113 processes event block(s) 683_6. Actions/conditions:
//        683_6: sets treestage to 1.
void Frames::event_func_1113()
{
    // event 683_6 : sets treestage to 1
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_683_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(163, str_treestage_737)) < (1))) goto event_683_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(163, str_treestage_737, 1);
    }
    event_683_6_end: ;
}
// Function purpose: generated callback event_func_1114 processes event block(s) 684_6. Actions/conditions:
//        684_6: adds a sssobjects 502 instance; sets the object's animation to 5; sets the selected object's
//        direction to (gameVariables->get_value(163, treestage)-1)*4; plus 7 more actions.
void Frames::event_func_1114()
{
    // event 684_6 : adds a sssobjects 502 instance; sets the object's animation to 5; sets the selected object's direction to (gameVariables->get_value(163, treestage)-1)*4; plus 7 more actions
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_684_6_end;
        sssobjects_502_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_sssobjects_502(1120, 240), 1);
            sssobjects_502_instances.add_back();
        }
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->set_direction((((AssociateArray*)get_instance(gameVariables_instances))->get_value(163, str_treestage_737)-1)*4);
            ((Active*)*it)->paste(1);
            ((Active*)*it)->alterables->strings.set(0, str_tree_941);
            ((Active*)*it)->alterables->values.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(163, str_treestage_737));
        }
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindinginmates_191_instances));
            for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
    planner->add_obstacle(((Active*)*it));        }
        }
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindingguards_247_instances));
            for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
    planner->add_obstacle(((Active*)*it));        }
        }
    }
    event_684_6_end: ;
}
// Function purpose: generated callback event_func_1115 processes event block(s) 685_6. Actions/conditions:
//        685_6: adds a sssobjects 502 instance; sets the object's animation to 6; sets the selected object's
//        direction to 0; plus 5 more actions.
void Frames::event_func_1115()
{
    // event 685_6 : adds a sssobjects 502 instance; sets the object's animation to 6; sets the selected object's direction to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_685_6_end;
        sssobjects_502_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_sssobjects_502(1116, 80), 1);
            sssobjects_502_instances.add_back();
        }
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(6);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->strings.set(0, str_sleigh_841);
        }
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindinginmates_191_instances));
            for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
    planner->add_obstacle(((Active*)*it));        }
        }
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindingguards_247_instances));
            for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
    planner->add_obstacle(((Active*)*it));        }
        }
    }
    event_685_6_end: ;
}
// Function purpose: generated callback event_func_1116 processes event block(s) 686_6. Actions/conditions:
//        686_6: adds a desksdlc 482 instance; sets the selected object's direction to 16; sets the selected object's
//        numeric value to qualifier_17.size()+1; plus 1 more actions.
void Frames::event_func_1116()
{
    // event 686_6 : adds a desksdlc 482 instance; sets the selected object's direction to 16; sets the selected object's numeric value to qualifier_17.size()+1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_686_6_end;
        desksdlc_482_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_desksdlc_482(1040, 240), 1);
            desksdlc_482_instances.add_back();
        }
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->values.set(0, qualifier_17.size()+1);
            ((Active*)*it)->alterables->strings.set(0, str_bulbs_942);
        }
    }
    event_686_6_end: ;
}
// Function purpose: generated callback event_func_1117 processes event block(s) 687_6. Actions/conditions:
//        687_6: adds a desksdlc 482 instance; sets the selected object's direction to 16; sets the selected object's
//        numeric value to qualifier_17.size()+1; plus 1 more actions.
void Frames::event_func_1117()
{
    // event 687_6 : adds a desksdlc 482 instance; sets the selected object's direction to 16; sets the selected object's numeric value to qualifier_17.size()+1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_687_6_end;
        desksdlc_482_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_desksdlc_482(1312, 224), 1);
            desksdlc_482_instances.add_back();
        }
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->values.set(0, qualifier_17.size()+1);
            ((Active*)*it)->alterables->strings.set(0, str_joystick_943);
        }
    }
    event_687_6_end: ;
}
// Function purpose: generated callback event_func_1118 processes event block(s) 688_6. Actions/conditions:
//        688_6: adds a desksdlc 482 instance; sets the selected object's direction to 16; sets the selected object's
//        numeric value to qualifier_17.size()+1; plus 1 more actions.
void Frames::event_func_1118()
{
    // event 688_6 : adds a desksdlc 482 instance; sets the selected object's direction to 16; sets the selected object's numeric value to qualifier_17.size()+1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_688_6_end;
        desksdlc_482_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_desksdlc_482(272, 1392), 1);
            desksdlc_482_instances.add_back();
        }
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->values.set(0, qualifier_17.size()+1);
            ((Active*)*it)->alterables->strings.set(0, str_glitter_944);
        }
    }
    event_688_6_end: ;
}
// Function purpose: generated callback event_func_1119 processes event block(s) 689_6. Actions/conditions:
//        689_6: adds a desksdlc 482 instance; sets the selected object's direction to 16; sets the selected object's
//        numeric value to qualifier_17.size()+1; plus 1 more actions.
void Frames::event_func_1119()
{
    // event 689_6 : adds a desksdlc 482 instance; sets the selected object's direction to 16; sets the selected object's numeric value to qualifier_17.size()+1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_689_6_end;
        desksdlc_482_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_desksdlc_482(1312, 992), 1);
            desksdlc_482_instances.add_back();
        }
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->values.set(0, qualifier_17.size()+1);
            ((Active*)*it)->alterables->strings.set(0, str_lever_945);
        }
    }
    event_689_6_end: ;
}
// Function purpose: generated callback event_func_1120 processes event block(s) 690_6. Actions/conditions:
//        690_6: adds a desksdlc 482 instance; sets the selected object's direction to 16; sets the selected object's
//        numeric value to qualifier_17.size()+1; plus 1 more actions.
void Frames::event_func_1120()
{
    // event 690_6 : adds a desksdlc 482 instance; sets the selected object's direction to 16; sets the selected object's numeric value to qualifier_17.size()+1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_690_6_end;
        desksdlc_482_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_desksdlc_482(1600, 1088), 1);
            desksdlc_482_instances.add_back();
        }
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->values.set(0, qualifier_17.size()+1);
            ((Active*)*it)->alterables->strings.set(0, str_wrappingpaper_946);
        }
    }
    event_690_6_end: ;
}
// Function purpose: generated callback event_func_1121 processes event block(s) 691_6. Actions/conditions:
//        691_6: adds a sssobjects 502 instance; sets the object's animation to 8; sets the selected object's
//        direction to 24; plus 6 more actions.
void Frames::event_func_1121()
{
    // event 691_6 : adds a sssobjects 502 instance; sets the object's animation to 8; sets the selected object's direction to 24; plus 6 more actions
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_691_6_end;
        sssobjects_502_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_sssobjects_502(0, 0), 1);
            sssobjects_502_instances.add_back();
        }
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->set_x(VITA_VIEW_X(((Active*)*it), 1168));
            ((Active*)*it)->set_y(VITA_VIEW_Y(((Active*)*it), 1024));
            ((Active*)*it)->alterables->strings.set(0, str_sign_janitor_947);
        }
    }
    event_691_6_end: ;
}
// Function purpose: generated callback event_func_1122 processes event block(s) 692_6. Actions/conditions:
//        692_6: adds a sssobjects 502 instance; sets the object's animation to 8; sets the selected object's
//        direction to 24; plus 6 more actions.
void Frames::event_func_1122()
{
    // event 692_6 : adds a sssobjects 502 instance; sets the object's animation to 8; sets the selected object's direction to 24; plus 6 more actions
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_692_6_end;
        sssobjects_502_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_sssobjects_502(0, 0), 1);
            sssobjects_502_instances.add_back();
        }
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->set_x(VITA_VIEW_X(((Active*)*it), 1744));
            ((Active*)*it)->set_y(VITA_VIEW_Y(((Active*)*it), 1024));
            ((Active*)*it)->alterables->strings.set(0, str_sign_tailor_948);
        }
    }
    event_692_6_end: ;
}
// Function purpose: generated callback event_func_1123 processes event block(s) 693_6. Actions/conditions:
//        693_6: adds a sssobjects 502 instance; sets the object's animation to 8; sets the selected object's
//        direction to 24; plus 6 more actions.
void Frames::event_func_1123()
{
    // event 693_6 : adds a sssobjects 502 instance; sets the object's animation to 8; sets the selected object's direction to 24; plus 6 more actions
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_693_6_end;
        sssobjects_502_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_sssobjects_502(0, 0), 1);
            sssobjects_502_instances.add_back();
        }
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->set_x(VITA_VIEW_X(((Active*)*it), 1440));
            ((Active*)*it)->set_y(VITA_VIEW_Y(((Active*)*it), 720));
            ((Active*)*it)->alterables->strings.set(0, str_sign_mailman_949);
        }
    }
    event_693_6_end: ;
}
// Function purpose: generated callback event_func_1124 processes event block(s) 694_6. Actions/conditions:
//        694_6: adds a sssobjects 502 instance; sets the object's animation to 8; sets the selected object's
//        direction to 24; plus 6 more actions.
void Frames::event_func_1124()
{
    // event 694_6 : adds a sssobjects 502 instance; sets the object's animation to 8; sets the selected object's direction to 24; plus 6 more actions
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_694_6_end;
        sssobjects_502_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_sssobjects_502(0, 0), 1);
            sssobjects_502_instances.add_back();
        }
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->set_x(VITA_VIEW_X(((Active*)*it), 1120));
            ((Active*)*it)->set_y(VITA_VIEW_Y(((Active*)*it), 1488));
            ((Active*)*it)->alterables->strings.set(0, str_sign_deliveries_950);
        }
    }
    event_694_6_end: ;
}
// Function purpose: generated callback event_func_1125 processes event block(s) 695_6. Actions/conditions:
//        695_6: adds a sssobjects 502 instance; sets the object's animation to 8; sets the selected object's
//        direction to 24; plus 6 more actions.
void Frames::event_func_1125()
{
    // event 695_6 : adds a sssobjects 502 instance; sets the object's animation to 8; sets the selected object's direction to 24; plus 6 more actions
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_695_6_end;
        sssobjects_502_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_sssobjects_502(0, 0), 1);
            sssobjects_502_instances.add_back();
        }
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->set_x(VITA_VIEW_X(((Active*)*it), 1168));
            ((Active*)*it)->set_y(VITA_VIEW_Y(((Active*)*it), 528));
            ((Active*)*it)->alterables->strings.set(0, str_sign_warning_951);
        }
    }
    event_695_6_end: ;
}
// Function purpose: generated callback event_func_1126 processes event block(s) 696_6. Actions/conditions:
//        696_6: adds a dooroutfit 501 instance.
void Frames::event_func_1126()
{
    // event 696_6 : adds a dooroutfit 501 instance
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_696_6_end;
        dooroutfit_501_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dooroutfit_501(1024, 368), 1);
            dooroutfit_501_instances.add_back();
        }
    }
    event_696_6_end: ;
}
// Function purpose: generated callback event_func_1127 processes event block(s) 697_6. Actions/conditions:
//        697_6: adds a dooroutfit 501 instance.
void Frames::event_func_1127()
{
    // event 697_6 : adds a dooroutfit 501 instance
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_697_6_end;
        dooroutfit_501_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dooroutfit_501(1232, 368), 1);
            dooroutfit_501_instances.add_back();
        }
    }
    event_697_6_end: ;
}
// Function purpose: generated callback event_func_1128 processes event block(s) 698_6. Actions/conditions:
//        698_6: adds a dooroutfit 501 instance.
void Frames::event_func_1128()
{
    // event 698_6 : adds a dooroutfit 501 instance
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_698_6_end;
        dooroutfit_501_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dooroutfit_501(1312, 448), 1);
            dooroutfit_501_instances.add_back();
        }
    }
    event_698_6_end: ;
}
// Function purpose: generated callback event_func_1129 processes event block(s) 699_6. Actions/conditions:
//        699_6: adds a dooroutfit 501 instance.
void Frames::event_func_1129()
{
    // event 699_6 : adds a dooroutfit 501 instance
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_699_6_end;
        dooroutfit_501_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dooroutfit_501(1280, 400), 1);
            dooroutfit_501_instances.add_back();
        }
    }
    event_699_6_end: ;
}
// Function purpose: generated callback event_func_1130 processes event block(s) 700_6. Actions/conditions:
//        700_6: adds a dooroutfit 501 instance.
void Frames::event_func_1130()
{
    // event 700_6 : adds a dooroutfit 501 instance
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_700_6_end;
        dooroutfit_501_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dooroutfit_501(1280, 272), 1);
            dooroutfit_501_instances.add_back();
        }
    }
    event_700_6_end: ;
}
// Function purpose: generated callback event_func_1131 processes event block(s) 701_6. Actions/conditions:
//        701_6: adds a dooroutfit 501 instance.
void Frames::event_func_1131()
{
    // event 701_6 : adds a dooroutfit 501 instance
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_701_6_end;
        dooroutfit_501_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dooroutfit_501(1488, 1072), 1);
            dooroutfit_501_instances.add_back();
        }
    }
    event_701_6_end: ;
}
// Function purpose: generated callback event_func_1132 processes event block(s) 702_6. Actions/conditions:
//        702_6: adds a dooroutfit 501 instance.
void Frames::event_func_1132()
{
    // event 702_6 : adds a dooroutfit 501 instance
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_702_6_end;
        dooroutfit_501_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dooroutfit_501(1600, 1136), 1);
            dooroutfit_501_instances.add_back();
        }
    }
    event_702_6_end: ;
}
