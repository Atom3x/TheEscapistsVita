#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_talk_loop_guard_6()
{
    event_func_1660();
    event_func_1661();
}
// Function purpose: generated callback event_func_1662 processes event block(s) 3041_6. Actions/conditions:
//        3041_6: creates a usespot 208 object; sets the object's animation to 13; sets Cleaning to 100; plus 1 more
//        actions.
void Frames::event_func_1662()
{
    // event 3041_6 : creates a usespot 208 object; sets the object's animation to 13; sets Cleaning to 100; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3041_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_3041_6_end;
        FrameObject * single_instance_3041_6_0; single_instance_3041_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_usespot_208(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3041_6_0 == NULL)
                    single_instance_3041_6_0 = new_obj;
            }
        }
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(13);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(359, str_cleaning_23, 100);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(402, str_actype_1216, ((INI*)get_instance(translationData_instances))->get_string(str_action_857, str_9_327));
        {
            loop_create_activity_box_running = true;
            int times = int(1);
            loop_create_activity_box_index = 0;
            while (loop_create_activity_box_index < times) {
                loop_create_activity_box_6();
                if (!loop_create_activity_box_running) break;
                loop_create_activity_box_index++;
            }
        }
    }
    event_3041_6_end: ;
}
void Frames::loop_clean_check_6()
{
    event_func_1385();
    event_func_1662();
}
// Function purpose: generated callback event_func_1663 processes event block(s) 2938_6. Actions/conditions:
//        2938_6: stores an integer value; stores player data.
void Frames::event_func_1663()
{
    // event 2938_6 : stores an integer value; stores player data
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2938_6_end;
        if (!((global_values->get(16)) == (1))) goto event_2938_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->set_int(str_flooded_1299, ((SteamObject*)get_instance(steamworks2_469_instances))->get_int(str_flooded_1299)+1);
        ((SteamObject*)get_instance(steamworks2_469_instances))->store_user_data();
    }
    event_2938_6_end: ;
}
// Function purpose: generated callback event_func_1664 processes event block(s) 2939_6. Actions/conditions:
//        2939_6: adds a water 303 instance; sets the selected object's horizontal position to
//        gameVariables->get_value(441, toiletX); sets the selected object's vertical position to
//        gameVariables->get_value(442, toiletY); plus 6 more actions.
void Frames::event_func_1664()
{
    // event 2939_6 : adds a water 303 instance; sets the selected object's horizontal position to gameVariables->get_value(441, toiletX); sets the selected object's vertical position to gameVariables->get_value(442, toiletY); plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2939_6_end;
        water_303_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_water_303(0, 0), 1);
            water_303_instances.add_back();
        }
        for (ObjectIterator it(water_303_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(441, str_toiletx_1300));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(442, str_toilety_1301));
            ((Active*)*it)->alterables->values.set(4, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(441, str_toiletx_1300));
            ((Active*)*it)->alterables->values.set(5, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(442, str_toilety_1301));
            ((Active*)*it)->alterables->values.set(6, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(134, str_currenttoilet_699));
        }
    }
    event_2939_6_end: ;
}
// Function purpose: generated callback event_func_1665 processes event block(s) 2940_6. Actions/conditions:
//        2940_6: adds a water 303 instance; sets the selected object's horizontal position to
//        gameVariables->get_value(441, toiletX)+8; sets the selected object's vertical position to
//        gameVariables->get_value(442, toiletY); plus 6 more actions.
void Frames::event_func_1665()
{
    // event 2940_6 : adds a water 303 instance; sets the selected object's horizontal position to gameVariables->get_value(441, toiletX)+8; sets the selected object's vertical position to gameVariables->get_value(442, toiletY); plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2940_6_end;
        water_303_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_water_303(0, 0), 1);
            water_303_instances.add_back();
        }
        for (ObjectIterator it(water_303_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(441, str_toiletx_1300)+8);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(442, str_toilety_1301));
            ((Active*)*it)->alterables->values.set(4, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(441, str_toiletx_1300));
            ((Active*)*it)->alterables->values.set(5, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(442, str_toilety_1301));
            ((Active*)*it)->alterables->values.set(6, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(134, str_currenttoilet_699));
        }
    }
    event_2940_6_end: ;
}
// Function purpose: generated callback event_func_1666 processes event block(s) 2941_6. Actions/conditions:
//        2941_6: adds a water 303 instance; sets the selected object's horizontal position to
//        gameVariables->get_value(441, toiletX); sets the selected object's vertical position to
//        gameVariables->get_value(442, toiletY)+8; plus 6 more actions.
void Frames::event_func_1666()
{
    // event 2941_6 : adds a water 303 instance; sets the selected object's horizontal position to gameVariables->get_value(441, toiletX); sets the selected object's vertical position to gameVariables->get_value(442, toiletY)+8; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2941_6_end;
        water_303_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_water_303(0, 0), 1);
            water_303_instances.add_back();
        }
        for (ObjectIterator it(water_303_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(441, str_toiletx_1300));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(442, str_toilety_1301)+8);
            ((Active*)*it)->alterables->values.set(4, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(441, str_toiletx_1300));
            ((Active*)*it)->alterables->values.set(5, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(442, str_toilety_1301));
            ((Active*)*it)->alterables->values.set(6, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(134, str_currenttoilet_699));
        }
    }
    event_2941_6_end: ;
}
// Function purpose: generated callback event_func_1667 processes event block(s) 2942_6. Actions/conditions:
//        2942_6: adds a water 303 instance; sets the selected object's horizontal position to
//        gameVariables->get_value(441, toiletX)+8; sets the selected object's vertical position to
//        gameVariables->get_value(442, toiletY)+8; plus 6 more actions.
void Frames::event_func_1667()
{
    // event 2942_6 : adds a water 303 instance; sets the selected object's horizontal position to gameVariables->get_value(441, toiletX)+8; sets the selected object's vertical position to gameVariables->get_value(442, toiletY)+8; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2942_6_end;
        water_303_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_water_303(0, 0), 1);
            water_303_instances.add_back();
        }
        for (ObjectIterator it(water_303_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(441, str_toiletx_1300)+8);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(442, str_toilety_1301)+8);
            ((Active*)*it)->alterables->values.set(4, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(441, str_toiletx_1300));
            ((Active*)*it)->alterables->values.set(5, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(442, str_toilety_1301));
            ((Active*)*it)->alterables->values.set(6, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(134, str_currenttoilet_699));
        }
    }
    event_2942_6_end: ;
}
void Frames::loop_flush_water_6()
{
    event_func_1663();
    event_func_1664();
    event_func_1665();
    event_func_1666();
    event_func_1667();
}
// Function purpose: generated callback event_func_1668 processes event block(s) 2936_6. Actions/conditions:
//        2936_6: sets the object's animation to 1; sets the selected object's numeric value to 3000; sets a game or
//        interface text string; plus 5 more actions.
void Frames::event_func_1668()
{
    // event 2936_6 : sets the object's animation to 1; sets the selected object's numeric value to 3000; sets a game or interface text string; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2936_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(443, str_rnd_1302)) > (1))) goto event_2936_6_end;
        toilet2_307_instances.clear_selection();
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(134, str_currenttoilet_699)))) { it.deselect(); continue; }
        }
        if (!toilet2_307_instances.has_selection()) goto event_2936_6_end;
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->alterables->values.set(1, 3000);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_toilet_533+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(134, str_currenttoilet_699))+str_slot1_534, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_toilet_533+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(134, str_currenttoilet_699))+str_slot2_535, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_toilet_533+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(134, str_currenttoilet_699))+str_slot3_536, empty_string);
    }
    event_2936_6_end: ;
}
// Function purpose: generated callback event_func_1669 processes event block(s) 2937_6. Actions/conditions:
//        2937_6: sets the selected object's numeric value to 3000; sets the object's animation to 5; sets toiletX to
//        ((Active*)get_single(toilet2_307_instances, default_active_instance))->get_x(); plus 1 more actions.
void Frames::event_func_1669()
{
    // event 2937_6 : sets the selected object's numeric value to 3000; sets the object's animation to 5; sets toiletX to ((Active*)get_single(toilet2_307_instances, default_active_instance))->get_x(); plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2937_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(443, str_rnd_1302)) == (1))) goto event_2937_6_end;
        toilet2_307_instances.clear_selection();
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(134, str_currenttoilet_699)))) { it.deselect(); continue; }
        }
        if (!toilet2_307_instances.has_selection()) goto event_2937_6_end;
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 3000);
            ((Active*)*it)->force_animation(5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(441, str_toiletx_1300, ((Active*)get_single(toilet2_307_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(442, str_toilety_1301, ((Active*)get_single(toilet2_307_instances, default_active_instance))->get_y());
        {
            loop_flush_water_running = true;
            int times = int(1);
            loop_flush_water_index = 0;
            while (loop_flush_water_index < times) {
                if (index == 11) loop_flush_water_11();
                else loop_flush_water_6();
                if (!loop_flush_water_running) break;
                loop_flush_water_index++;
            }
        }
    }
    event_2937_6_end: ;
}
void Frames::loop_flush_bog_6()
{
    event_func_1668();
    event_func_1669();
}
// Function purpose: generated callback event_func_1670 processes event block(s) 2929_6. Actions/conditions:
//        2929_6: removes the selected object.
void Frames::event_func_1670()
{
    // event 2929_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2929_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_toilet_533))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2929_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2929_6_end: ;
}
// Function purpose: generated callback event_func_1671 processes event block(s) 2930_6. Actions/conditions:
//        2930_6: removes the selected object.
void Frames::event_func_1671()
{
    // event 2930_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2930_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_toilet_533))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_2930_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2930_6_end: ;
}
// Function purpose: generated callback event_func_1672 processes event block(s) 2931_6. Actions/conditions:
//        2931_6: removes the selected object.
void Frames::event_func_1672()
{
    // event 2931_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2931_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_2931_6_end: ;
}
void Frames::loop_des_toilet_items_6()
{
    event_func_1670();
    event_func_1671();
    event_func_1672();
}
// Function purpose: generated callback event_func_1673 processes event block(s) 2933_6. Actions/conditions:
//        2933_6: sets str to Misc entry 35; sets a game or interface text string; plays a sound or music track; plus
//        13 more actions.
void Frames::event_func_1673()
{
    // event 2933_6 : sets str to Misc entry 35; sets a game or interface text string; plays a sound or music track; plus 13 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2933_6_end;
        toilet2_307_instances.clear_selection();
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(134, str_currenttoilet_699)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!toilet2_307_instances.has_selection()) goto event_2933_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(218, str_str_823, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_35_1303));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(218, str_str_823, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(218, str_str_823), str_time_1304, number_to_string(get_ceil(((Active*)get_single(toilet2_307_instances, default_active_instance))->alterables->values.get(1)/MathHelper()/60))));
        media.play_id(SOUND_LOSE_8, 1-1);
    CalcRect::set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(218, str_str_823));
        
        FrameObject * single_instance_2933_6_0; single_instance_2933_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activesystembox_450(parent->x + -15, parent->y + 60), parent->layer);
                if (single_instance_2933_6_0 == NULL)
                    single_instance_2933_6_0 = new_obj;
            }
        }
        ((SystemBox*)((SystemBox*)single_instance_2933_6_0))->set_fill(Color(make_color_int(255, 192, 0)));
        ((SystemBox*)((SystemBox*)single_instance_2933_6_0))->blend_color.set(Color(0, 0, 0));
        ((SystemBox*)((SystemBox*)single_instance_2933_6_0))->set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(218, str_str_823));
        ((SystemBox*)((SystemBox*)single_instance_2933_6_0))->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
        ((SystemBox*)((SystemBox*)single_instance_2933_6_0))->set_x(((Active*)get_instance(dialogPanel_instances))->get_x()-(((SystemBox*)single_instance_2933_6_0)->get_generic_width()/MathHelper()/2));
        ((SystemBox*)((SystemBox*)single_instance_2933_6_0))->alterables->values.set(1, 60);
        ((SystemBox*)((SystemBox*)single_instance_2933_6_0))->alterables->flags.enable(10);
        ((SystemBox*)((SystemBox*)single_instance_2933_6_0))->set_visible(true);
    }
    event_2933_6_end: ;
}
// Function purpose: generated callback event_func_1674 processes event block(s) 2934_6. Actions/conditions:
//        2934_6: plays a sound or music track; creates a activesystembox 450 object; updates the displayed text
//        layout; plus 11 more actions.
void Frames::event_func_1674()
{
    // event 2934_6 : plays a sound or music track; creates a activesystembox 450 object; updates the displayed text layout; plus 11 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2934_6_end;
        toilet2_307_instances.clear_selection();
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(134, str_currenttoilet_699)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!toilet2_307_instances.has_selection()) goto event_2934_6_end;
        media.play_id(SOUND_LOSE_8, 1-1);
        FrameObject * single_instance_2934_6_0; single_instance_2934_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activesystembox_450(parent->x + -15, parent->y + 60), parent->layer);
                if (single_instance_2934_6_0 == NULL)
                    single_instance_2934_6_0 = new_obj;
            }
        }
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_36_1305));
        
        ((SystemBox*)((SystemBox*)single_instance_2934_6_0))->set_fill(Color(make_color_int(255, 192, 0)));
        ((SystemBox*)((SystemBox*)single_instance_2934_6_0))->blend_color.set(Color(0, 0, 0));
        ((SystemBox*)((SystemBox*)single_instance_2934_6_0))->set_text(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_36_1305));
        ((SystemBox*)((SystemBox*)single_instance_2934_6_0))->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
        ((SystemBox*)((SystemBox*)single_instance_2934_6_0))->set_x(((Active*)get_instance(dialogPanel_instances))->get_x()-(((SystemBox*)single_instance_2934_6_0)->get_generic_width()/MathHelper()/2));
        ((SystemBox*)((SystemBox*)single_instance_2934_6_0))->alterables->flags.enable(10);
        ((SystemBox*)((SystemBox*)single_instance_2934_6_0))->alterables->values.set(1, 60);
        ((SystemBox*)((SystemBox*)single_instance_2934_6_0))->set_visible(true);
    }
    event_2934_6_end: ;
}
// Function purpose: generated callback event_func_1675 processes event block(s) 2935_6. Actions/conditions:
//        2935_6: sets the selected object's visibility to false; sets Rnd to 1+randrange_event(10); plays a sound or
//        music track.
void Frames::event_func_1675()
{
    // event 2935_6 : sets the selected object's visibility to false; sets Rnd to 1+randrange_event(10); plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2935_6_end;
        toilet2_307_instances.clear_selection();
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(134, str_currenttoilet_699)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!toilet2_307_instances.has_selection()) goto event_2935_6_end;
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(443, str_rnd_1302, 1+randrange_event(10));
        {
            loop_flush_bog_running = true;
            int times = int(1);
            loop_flush_bog_index = 0;
            while (loop_flush_bog_index < times) {
                loop_flush_bog_6();
                if (!loop_flush_bog_running) break;
                loop_flush_bog_index++;
            }
        }
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
        media.play_id(SOUND_TOILET_17, 1-1);
    }
    event_2935_6_end: ;
}
void Frames::loop_flush_bog_check_6()
{
    event_func_1673();
    event_func_1674();
    event_func_1675();
}
// Function purpose: generated callback event_func_1676 processes event block(s) 1793_6. Actions/conditions:
//        1793_6: activates the Banter event group; sets bant to
//        inispeech_453->get_string(number_to_string(randrange_event(inispeech_453->get_value_int(Count))+1)).
void Frames::event_func_1676()
{
    // event 1793_6 : activates the Banter event group; sets bant to inispeech_453->get_string(number_to_string(randrange_event(inispeech_453->get_value_int(Count))+1))
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1793_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_1793_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_1793_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_1793_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (0))) goto event_1793_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_banter_1306);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(444, str_bant_1307, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
    }
    event_1793_6_end: ;
}
// Function purpose: generated callback event_func_1677 processes event block(s) 1794_6. Actions/conditions:
//        1794_6: sets rnd to randrange_event(2)+1.
void Frames::event_func_1677()
{
    // event 1794_6 : sets rnd to randrange_event(2)+1
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1794_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_1794_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(132, str_rnd_696, randrange_event(2)+1);
    }
    event_1794_6_end: ;
}
// Function purpose: generated callback event_func_1678 processes event block(s) 1795_6. Actions/conditions:
//        1795_6: activates the Banter event group; sets bant to
//        inispeech_453->get_string(number_to_string(randrange_event(inispeech_453->get_value_int(Count))+1)).
void Frames::event_func_1678()
{
    // event 1795_6 : activates the Banter event group; sets bant to inispeech_453->get_string(number_to_string(randrange_event(inispeech_453->get_value_int(Count))+1))
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1795_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_1795_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (1))) goto event_1795_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_banter_1306);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(444, str_bant_1307, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
    }
    event_1795_6_end: ;
}
// Function purpose: generated callback event_func_1679 processes event block(s) 1796_6. Actions/conditions:
//        1796_6: activates the CCL_Banter event group; sets bant to
//        inispeech_453->get_string(number_to_string(randrange_event(inispeech_453->get_value_int(Count))+1)).
void Frames::event_func_1679()
{
    // event 1796_6 : activates the CCL_Banter event group; sets bant to inispeech_453->get_string(number_to_string(randrange_event(inispeech_453->get_value_int(Count))+1))
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1796_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_1796_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) != (1))) goto event_1796_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_ccl_banter_1308);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(444, str_bant_1307, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
    }
    event_1796_6_end: ;
}
// Function purpose: generated callback event_func_1680 processes event block(s) 1797_6. Actions/conditions:
//        1797_6: sets rnd to randrange_event(2)+1.
void Frames::event_func_1680()
{
    // event 1797_6 : sets rnd to randrange_event(2)+1
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1797_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_1797_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(132, str_rnd_696, randrange_event(2)+1);
    }
    event_1797_6_end: ;
}
// Function purpose: generated callback event_func_1681 processes event block(s) 1798_6. Actions/conditions:
//        1798_6: activates the Banter event group; sets bant to
//        inispeech_453->get_string(number_to_string(randrange_event(inispeech_453->get_value_int(Count))+1)).
void Frames::event_func_1681()
{
    // event 1798_6 : activates the Banter event group; sets bant to inispeech_453->get_string(number_to_string(randrange_event(inispeech_453->get_value_int(Count))+1))
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1798_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_1798_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (1))) goto event_1798_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_banter_1306);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(444, str_bant_1307, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
    }
    event_1798_6_end: ;
}
// Function purpose: generated callback event_func_1682 processes event block(s) 1799_6. Actions/conditions:
//        1799_6: activates the SS_Banter event group; sets bant to
//        inispeech_453->get_string(number_to_string(randrange_event(inispeech_453->get_value_int(Count))+1)).
void Frames::event_func_1682()
{
    // event 1799_6 : activates the SS_Banter event group; sets bant to inispeech_453->get_string(number_to_string(randrange_event(inispeech_453->get_value_int(Count))+1))
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1799_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_1799_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) != (1))) goto event_1799_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_ss_banter_1309);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(444, str_bant_1307, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
    }
    event_1799_6_end: ;
}
// Function purpose: generated callback event_func_1683 processes event block(s) 1800_6. Actions/conditions:
//        1800_6: activates the ET_Banter_+((Active* event group; sets bant to
//        inispeech_453->get_string(number_to_string(randrange_event(inispeech_453->get_value_int(Count))+1)).
void Frames::event_func_1683()
{
    // event 1800_6 : activates the ET_Banter_+((Active* event group; sets bant to inispeech_453->get_string(number_to_string(randrange_event(inispeech_453->get_value_int(Count))+1))
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1800_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_1800_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_et_banter_1310+((Active*)get_instance(inmateBase_instances, default_active_instance))->alterables->strings.get(4));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(444, str_bant_1307, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
    }
    event_1800_6_end: ;
}
// Function purpose: generated callback event_func_1684 processes event block(s) 1801_6. Actions/conditions:
//        1801_6: sets rnd to randrange_event(2)+1.
void Frames::event_func_1684()
{
    // event 1801_6 : sets rnd to randrange_event(2)+1
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1801_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_1801_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(132, str_rnd_696, randrange_event(2)+1);
    }
    event_1801_6_end: ;
}
// Function purpose: generated callback event_func_1685 processes event block(s) 1802_6. Actions/conditions:
//        1802_6: activates the Banter event group; sets bant to
//        inispeech_453->get_string(number_to_string(randrange_event(inispeech_453->get_value_int(Count))+1)).
void Frames::event_func_1685()
{
    // event 1802_6 : activates the Banter event group; sets bant to inispeech_453->get_string(number_to_string(randrange_event(inispeech_453->get_value_int(Count))+1))
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1802_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_1802_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (1))) goto event_1802_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_banter_1306);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(444, str_bant_1307, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
    }
    event_1802_6_end: ;
}
// Function purpose: generated callback event_func_1686 processes event block(s) 1803_6. Actions/conditions:
//        1803_6: activates the DTAF_Banter event group; sets bant to
//        inispeech_453->get_string(number_to_string(randrange_event(inispeech_453->get_value_int(Count))+1)).
void Frames::event_func_1686()
{
    // event 1803_6 : activates the DTAF_Banter event group; sets bant to inispeech_453->get_string(number_to_string(randrange_event(inispeech_453->get_value_int(Count))+1))
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1803_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_1803_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) != (1))) goto event_1803_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_dtaf_banter_1311);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(444, str_bant_1307, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
    }
    event_1803_6_end: ;
}
// Function purpose: generated callback event_func_1687 processes event block(s) 1804_6. Actions/conditions:
//        1804_6: splits saved text into fields; sets pGuard to StringReplace::replace(translationData->get_string(Misc,
//        43), $name, stringtokenizer2_292->get(1)); sets bant to
//        StringReplace::replace(gameVariables->get_string(444, bant), $guard,
//        gameVariables->get_string(445, pGuard)).
void Frames::event_func_1687()
{
    // event 1804_6 : splits saved text into fields; sets pGuard to StringReplace::replace(translationData->get_string(Misc, 43), $name, stringtokenizer2_292->get(1)); sets bant to StringReplace::replace(gameVariables->get_string(444, bant), $guard, gameVariables->get_string(445, pGuard))
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1804_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(444, str_bant_1307), str_guard_1198, 0)) != (-1))) goto event_1804_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((ListObject*)get_instance(listguards_218_instances))->get_line(1+randrange_event(((ListObject*)get_instance(listguards_218_instances))->get_count())), str__189);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(445, str_pguard_1312, StringReplace::replace(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_43_695), str_name_693, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(444, str_bant_1307, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(444, str_bant_1307), str_guard_1198, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(445, str_pguard_1312)));
    }
    event_1804_6_end: ;
}
// Function purpose: generated callback event_func_1688 processes event block(s) 1805_6. Actions/conditions:
//        1805_6: sets pInmate to listinmates_217->get_line(1+randrange_event(listinmates_217->get_count())); sets
//        bant to StringReplace::replace(gameVariables->get_string(444, bant), $inmate,
//        gameVariables->get_string(446, pInmate)).
void Frames::event_func_1688()
{
    // event 1805_6 : sets pInmate to listinmates_217->get_line(1+randrange_event(listinmates_217->get_count())); sets bant to StringReplace::replace(gameVariables->get_string(444, bant), $inmate, gameVariables->get_string(446, pInmate))
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1805_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(444, str_bant_1307), str_inmate_1199, 0)) != (-1))) goto event_1805_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(446, str_pinmate_1313, ((ListObject*)get_instance(listinmates_217_instances))->get_line(1+randrange_event(((ListObject*)get_instance(listinmates_217_instances))->get_count())));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(444, str_bant_1307, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(444, str_bant_1307), str_inmate_1199, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(446, str_pinmate_1313)));
    }
    event_1805_6_end: ;
}
// Function purpose: generated callback event_func_1689 processes event block(s) 1806_6. Actions/conditions:
//        1806_6: sets SpeakID to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(25); sets SpeakCol to 0; sets SpeakText to
//        gameVariables->get_string(444, bant).
void Frames::event_func_1689()
{
    // event 1806_6 : sets SpeakID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25); sets SpeakCol to 0; sets SpeakText to gameVariables->get_string(444, bant)
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1806_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(447, str_conlook_1314)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1806_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(444, str_bant_1307));
        {
            loop_speak_running = true;
            int times = int(1);
            loop_speak_index = 0;
            while (loop_speak_index < times) {
                loop_speak_6();
                if (!loop_speak_running) break;
                loop_speak_index++;
            }
        }
    }
    event_1806_6_end: ;
}
// Function purpose: generated callback event_func_1690 processes event block(s) 1807_6. Actions/conditions:
//        1807_6: sets RndBanter to 50.
void Frames::event_func_1690()
{
    // event 1807_6 : sets RndBanter to 50
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1807_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(448, str_rndbanter_1315, 50);
    }
    event_1807_6_end: ;
}
void Frames::loop_free_banter_6()
{
    event_func_1676();
    event_func_1677();
    event_func_1678();
    event_func_1679();
    event_func_1680();
    event_func_1681();
    event_func_1682();
    event_func_1683();
    event_func_1684();
    event_func_1685();
    event_func_1686();
    event_func_1687();
    event_func_1688();
    event_func_1689();
    event_func_1690();
}
// Function purpose: generated callback event_func_1691 processes event block(s) 3983_6. Actions/conditions:
//        3983_6: adds a activesystembox 450 instance; sets the selected object's numeric value to -7; moves the
//        selected object behind other objects; plus 6 more actions.
void Frames::event_func_1691()
{
    // event 3983_6 : adds a activesystembox 450 instance; sets the selected object's numeric value to -7; moves the selected object behind other objects; plus 6 more actions
    {
        if (!(group_code_1)) goto event_3983_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3983_6_end;
        activesystembox_450_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_activesystembox_450(0, 0), 5);
            activesystembox_450_instances.add_back();
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(0, -7);
        }
        ((SystemBox*)get_single(activesystembox_450_instances, default_systembox_instance))->move_back(((Active*)get_instance(sidePanel_instances)));
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142));
            ((SystemBox*)*it)->alterables->values.set(1, 80+string_size(((SystemBox*)*it)->text));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
        }
    }
    event_3983_6_end: ;
}
void Frames::loop_alcaboat_speak_6()
{
    event_func_1383();
    event_func_1691();
}
// Function purpose: generated callback event_func_1692 processes event block(s) 3043_6. Actions/conditions:
//        3043_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_1692()
{
    // event 3043_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3043_6_end;
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_findinvslot_running = true;
            int times = int(6);
            loop_findinvslot_index = 0;
            while (loop_findinvslot_index < times) {
                loop_findinvslot_6();
                if (!loop_findinvslot_running) break;
                loop_findinvslot_index++;
            }
        }
    }
    event_3043_6_end: ;
}
// Function purpose: generated callback event_func_1693 processes event block(s) 3044_6. Actions/conditions:
//        3044_6: sets SpeakText to Misc entry 7; plays a sound or music track.
void Frames::event_func_1693()
{
    // event 3044_6 : sets SpeakText to Misc entry 7; plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3044_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) == (0))) goto event_3044_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_7_323));
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
    event_3044_6_end: ;
}
// Function purpose: generated callback event_func_1694 processes event block(s) 3046_6. Actions/conditions:
//        3046_6: sets the object's animation to 15; sets Chipping to 100; sets ChipType to Wall; plus 1 more actions.
void Frames::event_func_1694()
{
    // event 3046_6 : sets the object's animation to 15; sets Chipping to 100; sets ChipType to Wall; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3046_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) > (0))) goto event_3046_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_3046_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(15);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(155, str_chipping_728, 100);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(449, str_chiptype_1316, str_wall_1317);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_itemhp_running = true;
            int times = int(1);
            loop_itemhp_index = 0;
            while (loop_itemhp_index < times) {
                loop_itemhp_6();
                if (!loop_itemhp_running) break;
                loop_itemhp_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(402, str_actype_1216, ((INI*)get_instance(translationData_instances))->get_string(str_action_857, str_5_164));
        {
            loop_create_activity_box_running = true;
            int times = int(1);
            loop_create_activity_box_index = 0;
            while (loop_create_activity_box_index < times) {
                loop_create_activity_box_6();
                if (!loop_create_activity_box_running) break;
                loop_create_activity_box_index++;
            }
        }
    }
    event_3046_6_end: ;
}
void Frames::loop_chip_check_6()
{
    event_func_1692();
    event_func_1693();
    event_func_1385();
    event_func_1694();
}
// Function purpose: generated callback event_func_1695 processes event block(s) 2668_6. Actions/conditions:
//        2668_6: splits saved text into fields.
void Frames::event_func_1695()
{
    // event 2668_6 : splits saved text into fields
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2668_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_2668_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_451+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)+str_inv_911+number_to_string(loop_canc_mission_checkinv_index+1)), str__96);
    }
    event_2668_6_end: ;
}
// Function purpose: generated callback event_func_1696 processes event block(s) 2669_6. Actions/conditions:
//        2669_6: sets a game or interface text string; sets found to 1.
void Frames::event_func_1696()
{
    // event 2669_6 : sets a game or interface text string; sets found to 1
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2669_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_2669_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)) == (((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6)))) goto event_2669_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3))) != (0))) goto event_2669_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)+str_inv_911+number_to_string(loop_canc_mission_checkinv_index+1), empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(369, str_found_1165, 1);
            loop_canc_mission_checkinv_running = false;
    
    }
    event_2669_6_end: ;
}
void Frames::loop_canc_mission_checkinv_6()
{
    event_func_1695();
    event_func_1696();
}
// Function purpose: generated callback event_func_1697 processes event block(s) 2670_6. Actions/conditions:
//        2670_6: splits saved text into fields.
void Frames::event_func_1697()
{
    // event 2670_6 : splits saved text into fields
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2670_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_2670_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_desk_32+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(450, str_did_1318))+str_slot_617+number_to_string(loop_canc_mission_checkdesk_index+1)), str__96);
    }
    event_2670_6_end: ;
}
// Function purpose: generated callback event_func_1698 processes event block(s) 2671_6. Actions/conditions:
//        2671_6: sets a game or interface text string; sets found to 1.
void Frames::event_func_1698()
{
    // event 2671_6 : sets a game or interface text string; sets found to 1
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2671_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_2671_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)) == (((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6)))) goto event_2671_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3))) != (0))) goto event_2671_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(450, str_did_1318))+str_slot_617+number_to_string(loop_canc_mission_checkdesk_index+1), empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(369, str_found_1165, 1);
            loop_canc_mission_checkdesk_running = false;
    
    }
    event_2671_6_end: ;
}
void Frames::loop_canc_mission_checkdesk_6()
{
    event_func_1697();
    event_func_1698();
}
// Function purpose: generated callback event_func_1699 processes event block(s) 2662_6. Actions/conditions:
//        2662_6: removes the selected object.
void Frames::event_func_1699()
{
    // event 2662_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2662_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_2662_6_end: ;
}
// Function purpose: generated callback event_func_1700 processes event block(s) 2663_6. Actions/conditions:
//        2663_6: changes a stored game value.
void Frames::event_func_1700()
{
    // event 2663_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2663_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_distract_706))) goto event_2663_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3))))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2663_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(12, 15);
        }
    }
    event_2663_6_end: ;
}
// Function purpose: generated callback event_func_1701 processes event block(s) 2664_6. Actions/conditions:
//        2664_6: changes a stored game value.
void Frames::event_func_1701()
{
    // event 2664_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2664_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) != (str_distract_706))) goto event_2664_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(5))))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2664_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(12, 15);
        }
    }
    event_2664_6_end: ;
}
// Function purpose: generated callback event_func_1702 processes event block(s) 2665_6. Actions/conditions:
//        2665_6: disables flag 2001 (NPC defeated or knocked-out state; persisted in saves) on the selected object.
void Frames::event_func_1702()
{
    // event 2665_6 : disables flag 2001 (NPC defeated or knocked-out state; persisted in saves) on the selected object
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2665_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_beat_1232))) goto event_2665_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2))))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_2665_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2001);
        }
    }
    event_2665_6_end: ;
}
// Function purpose: generated callback event_func_1703 processes event block(s) 2666_6. Actions/conditions:
//        2666_6: sets found to 0.
void Frames::event_func_1703()
{
    // event 2666_6 : sets found to 0
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2666_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_stealchar_1264))) goto event_2666_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(369, str_found_1165, 0);
        {
            loop_canc_mission_checkinv_running = true;
            int times = int(6);
            loop_canc_mission_checkinv_index = 0;
            while (loop_canc_mission_checkinv_index < times) {
                loop_canc_mission_checkinv_6();
                if (!loop_canc_mission_checkinv_running) break;
                loop_canc_mission_checkinv_index++;
            }
        }
    }
    event_2666_6_end: ;
}
// Function purpose: generated callback event_func_1704 processes event block(s) 2667_6. Actions/conditions:
//        2667_6: sets found to 0; sets dID to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(0).
void Frames::event_func_1704()
{
    // event 2667_6 : sets found to 0; sets dID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0)
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2667_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_stealchar_1264))) goto event_2667_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2))))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2667_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(369, str_found_1165, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(450, str_did_1318, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0));
        {
            loop_canc_mission_checkdesk_running = true;
            int times = int(20);
            loop_canc_mission_checkdesk_index = 0;
            while (loop_canc_mission_checkdesk_index < times) {
                loop_canc_mission_checkdesk_6();
                if (!loop_canc_mission_checkdesk_running) break;
                loop_canc_mission_checkdesk_index++;
            }
        }
    }
    event_2667_6_end: ;
}
void Frames::loop_canc_mish_6()
{
    event_func_1699();
    event_func_1700();
    event_func_1701();
    event_func_1702();
    event_func_1703();
    event_func_1704();
}
// Function purpose: generated callback event_func_1705 processes event block(s) 4325_6. Actions/conditions:
//        4325_6: sets Pos_Janitor to 0.
void Frames::event_func_1705()
{
    // event 4325_6 : sets Pos_Janitor to 0
    {
        if (!(group_loops_1)) goto event_4325_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_janitor_24))) goto event_4325_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(18, str_jobquota_480)) < (55))) goto event_4325_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(109, str_pos_janitor_671, 0);
        {
            loop_open_lostjob_box_running = true;
            int times = int(1);
            loop_open_lostjob_box_index = 0;
            while (loop_open_lostjob_box_index < times) {
                loop_open_lostjob_box_6();
                if (!loop_open_lostjob_box_running) break;
                loop_open_lostjob_box_index++;
            }
        }
    }
    event_4325_6_end: ;
}
// Function purpose: generated callback event_func_1706 processes event block(s) 4326_6. Actions/conditions:
//        4326_6: sets Pos_Gardening to 0.
void Frames::event_func_1706()
{
    // event 4326_6 : sets Pos_Gardening to 0
    {
        if (!(group_loops_1)) goto event_4326_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_gardening_43))) goto event_4326_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(18, str_jobquota_480)) < (55))) goto event_4326_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(111, str_pos_gardening_673, 0);
        {
            loop_open_lostjob_box_running = true;
            int times = int(1);
            loop_open_lostjob_box_index = 0;
            while (loop_open_lostjob_box_index < times) {
                loop_open_lostjob_box_6();
                if (!loop_open_lostjob_box_running) break;
                loop_open_lostjob_box_index++;
            }
        }
    }
    event_4326_6_end: ;
}
// Function purpose: generated callback event_func_1707 processes event block(s) 4327_6. Actions/conditions:
//        4327_6: sets Pos_Laundry to 0; sets the selected object's numeric value to 0; sets the object's animation to
//        0.
void Frames::event_func_1707()
{
    // event 4327_6 : sets Pos_Laundry to 0; sets the selected object's numeric value to 0; sets the object's animation to 0
    {
        if (!(group_loops_1)) goto event_4327_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_laundry_29))) goto event_4327_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(18, str_jobquota_480)) < (55))) goto event_4327_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(117, str_pos_laundry_679, 0);
        {
            loop_open_lostjob_box_running = true;
            int times = int(1);
            loop_open_lostjob_box_index = 0;
            while (loop_open_lostjob_box_index < times) {
                loop_open_lostjob_box_6();
                if (!loop_open_lostjob_box_running) break;
                loop_open_lostjob_box_index++;
            }
        }
        washing2_313_instances.clear_selection();
        for (ObjectIterator it(washing2_313_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->force_animation(0);
        }
    }
    event_4327_6_end: ;
}
// Function purpose: generated callback event_func_1708 processes event block(s) 4328_6. Actions/conditions:
//        4328_6: sets Pos_Kitchen to 0; sets the selected object's numeric value to 0; sets the object's animation to
//        0.
void Frames::event_func_1708()
{
    // event 4328_6 : sets Pos_Kitchen to 0; sets the selected object's numeric value to 0; sets the object's animation to 0
    {
        if (!(group_loops_1)) goto event_4328_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_kitchen_12))) goto event_4328_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(18, str_jobquota_480)) < (55))) goto event_4328_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(121, str_pos_kitchen_683, 0);
        oven2_314_instances.clear_selection();
        for (ObjectIterator it(oven2_314_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->force_animation(0);
        }
        {
            loop_open_lostjob_box_running = true;
            int times = int(1);
            loop_open_lostjob_box_index = 0;
            while (loop_open_lostjob_box_index < times) {
                loop_open_lostjob_box_6();
                if (!loop_open_lostjob_box_running) break;
                loop_open_lostjob_box_index++;
            }
        }
    }
    event_4328_6_end: ;
}
// Function purpose: generated callback event_func_1709 processes event block(s) 4329_6. Actions/conditions:
//        4329_6: sets Pos_Woodshop to 0.
void Frames::event_func_1709()
{
    // event 4329_6 : sets Pos_Woodshop to 0
    {
        if (!(group_loops_1)) goto event_4329_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_woodshop_21))) goto event_4329_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(18, str_jobquota_480)) < (55))) goto event_4329_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(125, str_pos_woodshop_687, 0);
        {
            loop_open_lostjob_box_running = true;
            int times = int(1);
            loop_open_lostjob_box_index = 0;
            while (loop_open_lostjob_box_index < times) {
                loop_open_lostjob_box_6();
                if (!loop_open_lostjob_box_running) break;
                loop_open_lostjob_box_index++;
            }
        }
    }
    event_4329_6_end: ;
}
// Function purpose: generated callback event_func_1710 processes event block(s) 4330_6. Actions/conditions:
//        4330_6: sets Pos_Metalshop to 0.
void Frames::event_func_1710()
{
    // event 4330_6 : sets Pos_Metalshop to 0
    {
        if (!(group_loops_1)) goto event_4330_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_metalshop_35))) goto event_4330_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(18, str_jobquota_480)) < (55))) goto event_4330_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(127, str_pos_metalshop_689, 0);
        {
            loop_open_lostjob_box_running = true;
            int times = int(1);
            loop_open_lostjob_box_index = 0;
            while (loop_open_lostjob_box_index < times) {
                loop_open_lostjob_box_6();
                if (!loop_open_lostjob_box_running) break;
                loop_open_lostjob_box_index++;
            }
        }
    }
    event_4330_6_end: ;
}
// Function purpose: generated callback event_func_1711 processes event block(s) 4331_6. Actions/conditions:
//        4331_6: sets Pos_Tailor to 0.
void Frames::event_func_1711()
{
    // event 4331_6 : sets Pos_Tailor to 0
    {
        if (!(group_loops_1)) goto event_4331_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_tailor_479))) goto event_4331_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(18, str_jobquota_480)) < (55))) goto event_4331_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(123, str_pos_tailor_685, 0);
        {
            loop_open_lostjob_box_running = true;
            int times = int(1);
            loop_open_lostjob_box_index = 0;
            while (loop_open_lostjob_box_index < times) {
                loop_open_lostjob_box_6();
                if (!loop_open_lostjob_box_running) break;
                loop_open_lostjob_box_index++;
            }
        }
    }
    event_4331_6_end: ;
}
// Function purpose: generated callback event_func_1712 processes event block(s) 4332_6. Actions/conditions:
//        4332_6: sets Pos_Library to 0.
void Frames::event_func_1712()
{
    // event 4332_6 : sets Pos_Library to 0
    {
        if (!(group_loops_1)) goto event_4332_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_library_25))) goto event_4332_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(18, str_jobquota_480)) < (55))) goto event_4332_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(115, str_pos_library_677, 0);
        {
            loop_open_lostjob_box_running = true;
            int times = int(1);
            loop_open_lostjob_box_index = 0;
            while (loop_open_lostjob_box_index < times) {
                loop_open_lostjob_box_6();
                if (!loop_open_lostjob_box_running) break;
                loop_open_lostjob_box_index++;
            }
        }
    }
    event_4332_6_end: ;
}
// Function purpose: generated callback event_func_1713 processes event block(s) 4333_6. Actions/conditions:
//        4333_6: sets Pos_Mailman to 0.
void Frames::event_func_1713()
{
    // event 4333_6 : sets Pos_Mailman to 0
    {
        if (!(group_loops_1)) goto event_4333_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_mailman_556))) goto event_4333_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(18, str_jobquota_480)) < (55))) goto event_4333_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(113, str_pos_mailman_675, 0);
        {
            loop_open_lostjob_box_running = true;
            int times = int(1);
            loop_open_lostjob_box_index = 0;
            while (loop_open_lostjob_box_index < times) {
                loop_open_lostjob_box_6();
                if (!loop_open_lostjob_box_running) break;
                loop_open_lostjob_box_index++;
            }
        }
    }
    event_4333_6_end: ;
}
// Function purpose: generated callback event_func_1714 processes event block(s) 4334_6. Actions/conditions:
//        4334_6: sets Pos_Deliveries to 0.
void Frames::event_func_1714()
{
    // event 4334_6 : sets Pos_Deliveries to 0
    {
        if (!(group_loops_1)) goto event_4334_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_deliveries_577))) goto event_4334_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(18, str_jobquota_480)) < (55))) goto event_4334_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(119, str_pos_deliveries_681, 0);
        {
            loop_open_lostjob_box_running = true;
            int times = int(1);
            loop_open_lostjob_box_index = 0;
            while (loop_open_lostjob_box_index < times) {
                loop_open_lostjob_box_6();
                if (!loop_open_lostjob_box_running) break;
                loop_open_lostjob_box_index++;
            }
        }
    }
    event_4334_6_end: ;
}
void Frames::loop_check_jobquota_6()
{
    event_func_1705();
    event_func_1706();
    event_func_1707();
    event_func_1708();
    event_func_1709();
    event_func_1710();
    event_func_1711();
    event_func_1712();
    event_func_1713();
    event_func_1714();
}
// Function purpose: generated callback event_func_1715 processes event block(s) 942_6. Actions/conditions:
//        942_6: shows a game layer.
void Frames::event_func_1715()
{
    // event 942_6 : shows a game layer
    {
        if (!(group_code_1)) goto event_942_6_end;
        ((LayerObject*)get_instance(layerobject_37_instances))->show_layer(4-1);
    }
    event_942_6_end: ;
}
// Function purpose: generated callback event_func_1716 processes event block(s) 943_6. Actions/conditions:
//        943_6: adds a ventoverlay 282 instance; sets the selected object's horizontal position to frame_left(); sets
//        the selected object's vertical position to frame_top(); plus 1 more actions.
void Frames::event_func_1716()
{
    // event 943_6 : adds a ventoverlay 282 instance; sets the selected object's horizontal position to frame_left(); sets the selected object's vertical position to frame_top(); plus 1 more actions
    {
        if (!(group_code_1)) goto event_943_6_end;
        if (!((ventDarkness_instances.size()) == (0))) goto event_943_6_end;
        ventDarkness_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_ventDarkness(0, 0), 2);
            ventDarkness_instances.add_back();
        }
        for (ObjectIterator it(ventDarkness_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(VITA_VIEW_LEFT(((Active*)*it), frame_left()));
            ((Active*)*it)->set_y(VITA_VIEW_TOP(((Active*)*it), frame_top()));
            ((Active*)*it)->move_front();
        }
    }
    event_943_6_end: ;
}
void Frames::loop_vent_setup_6()
{
    event_func_1715();
    event_func_1716();
}
// Function purpose: generated callback event_func_1717 processes event block(s) 2817_6. Actions/conditions:
//        2817_6: sets the object position in the world; sets the selected object's layer to 4-1; sets the object
//        position in the world; plus 6 more actions.
void Frames::event_func_1717()
{
    // event 2817_6 : sets the object position in the world; sets the selected object's layer to 4-1; sets the object position in the world; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2817_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(upperlevelcheck_206_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(upperlevelcheck_206_instances))->get_y()/MathHelper()/16), 4)) != (0))) goto event_2817_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(upperlevelcheck_206_instances));
            if (parent == NULL) goto pos_end_2817_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + -8);
            pos_end_2817_6_0: ;
        }
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_layer(4-1);
        }
        {
            FrameObject * parent = ((Active*)get_instance(upperlevelcheck_206_instances));
            if (parent == NULL) goto pos_end_2817_6_1;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + -8);
            pos_end_2817_6_1: ;
        }
        ((Active*)get_instance(playerBase_instances))->set_layer(4-1);
        {
            loop_vent_setup_running = true;
            int times = int(1);
            loop_vent_setup_index = 0;
            while (loop_vent_setup_index < times) {
                loop_vent_setup_6();
                if (!loop_vent_setup_running) break;
                loop_vent_setup_index++;
            }
        }
        ventDarkness_instances.clear_selection();
        for (ObjectIterator it(ventDarkness_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(60);
        }
        ((LayerObject*)get_instance(layerobject_37_instances))->show_layer(4-1);
    }
    event_2817_6_end: ;
}
// Function purpose: generated callback event_func_1718 processes event block(s) 2818_6. Actions/conditions:
//        2818_6: sets the selected object's layer to 5-1; sets the object position in the world; sets the selected
//        object's layer to 5-1; plus 6 more actions.
void Frames::event_func_1718()
{
    // event 2818_6 : sets the selected object's layer to 5-1; sets the object position in the world; sets the selected object's layer to 5-1; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2818_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(upperlevelcheck_206_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(upperlevelcheck_206_instances))->get_y()/MathHelper()/16), 4)) == (0))) goto event_2818_6_end;
        ((Active*)get_instance(upperlevelcheck_206_instances))->set_layer(5-1);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(upperlevelcheck_206_instances));
            if (parent == NULL) goto pos_end_2818_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + -8);
            pos_end_2818_6_0: ;
        }
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_layer(5-1);
        }
        {
            FrameObject * parent = ((Active*)get_instance(upperlevelcheck_206_instances));
            if (parent == NULL) goto pos_end_2818_6_1;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + -8);
            pos_end_2818_6_1: ;
        }
        ((Active*)get_instance(playerBase_instances))->set_layer(5-1);
        ((LayerObject*)get_instance(layerobject_37_instances))->show_layer(5-1);
    }
    event_2818_6_end: ;
}
// Function purpose: generated callback event_func_1719 processes event block(s) 2819_6. Actions/conditions:
//        2819_6: plays a sound or music track.
void Frames::event_func_1719()
{
    // event 2819_6 : plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2819_6_end;
        media.play_id(SOUND_DOOR_0, 1-1);
    }
    event_2819_6_end: ;
}
void Frames::loop_laddergoupcheck_6()
{
    event_func_1717();
    event_func_1718();
    event_func_1719();
}
// Function purpose: generated callback event_func_1720 processes event block(s) 4045_6. Actions/conditions:
//        4045_6: creates a water 303 object; sets the selected object's numeric value to 0; sets the selected
//        object's numeric value to gameVariables->get_value(316, tX); plus 7 more actions.
void Frames::event_func_1720()
{
    // event 4045_6 : creates a water 303 object; sets the selected object's numeric value to 0; sets the selected object's numeric value to gameVariables->get_value(316, tX); plus 7 more actions
    {
        if (!(group_code_1 && group_code_flooding_1)) goto event_4045_6_end;
        FrameObject * single_instance_4045_6_0; single_instance_4045_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(active_44_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_water_303(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_4045_6_0 == NULL)
                    single_instance_4045_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_4045_6_0))->alterables->values.set(2, 0);
        ((Active*)((Active*)single_instance_4045_6_0))->alterables->values.set(4, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(316, str_tx_1096));
        ((Active*)((Active*)single_instance_4045_6_0))->alterables->values.set(5, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(317, str_ty_1097));
        ((Active*)((Active*)single_instance_4045_6_0))->alterables->values.set(6, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(451, str_toiid_1319));
        ((Active*)((Active*)single_instance_4045_6_0))->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(452, str_wspread_1320));
        ((Active*)((Active*)single_instance_4045_6_0))->move_back();
    }
    event_4045_6_end: ;
}
void Frames::loop_wooof_6()
{
    event_func_1720();
}
// Function purpose: generated callback event_func_1721 processes event block(s) 4044_6. Actions/conditions:
//        4044_6: checks scene is active; skips if the event-specific game state condition is met; this handler gates
//        a game event without a direct value/object action.
void Frames::event_func_1721()
{
    // event 4044_6 : checks scene is active; skips if the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_flooding_1)) goto event_4044_6_end;
        if (((Active*)get_instance(active_44_instances))->overlaps_background()) goto event_4044_6_end;
        active_44_instances.clear_selection();
        if (!check_not_overlap(active_44_instances, qualifier_4)) goto event_4044_6_end;
        if (!check_not_overlap(active_44_instances, water_303_instances)) goto event_4044_6_end;
        if (!check_not_overlap(active_44_instances, qualifier_6)) goto event_4044_6_end;
        {
            loop_wooof_running = true;
            int times = int(1);
            loop_wooof_index = 0;
            while (loop_wooof_index < times) {
                loop_wooof_6();
                if (!loop_wooof_running) break;
                loop_wooof_index++;
            }
        }
    }
    event_4044_6_end: ;
}
void Frames::loop_flood_go_6()
{
    event_func_1721();
}
// Function purpose: generated callback event_func_1722 processes event block(s) 4042_6. Actions/conditions:
//        4042_6: sets the selected object's horizontal position to gameVariables->get_value(453, wX)-8; sets
//        the selected object's vertical position to gameVariables->get_value(454, wY).
void Frames::event_func_1722()
{
    // event 4042_6 : sets the selected object's horizontal position to gameVariables->get_value(453, wX)-8; sets the selected object's vertical position to gameVariables->get_value(454, wY)
    {
        if (!(group_code_1 && group_code_flooding_1)) goto event_4042_6_end;
        ((Active*)get_instance(active_44_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(453, str_wx_1321)-8);
        ((Active*)get_instance(active_44_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(454, str_wy_1322));
        {
            loop_flood_go_running = true;
            int times = int(1);
            loop_flood_go_index = 0;
            while (loop_flood_go_index < times) {
                loop_flood_go_6();
                if (!loop_flood_go_running) break;
                loop_flood_go_index++;
            }
        }
    }
    event_4042_6_end: ;
}
void Frames::loop_flood_left_6()
{
    event_func_1722();
}
// Function purpose: generated callback event_func_1723 processes event block(s) 3563_6. Actions/conditions:
//        3563_6: increments Track_Chipped by 1.
void Frames::event_func_1723()
{
    // event 3563_6 : increments Track_Chipped by 1
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_chipping_2_1)) goto event_3563_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(455, str_track_chipped_1323, 1);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_findinvslot_running = true;
            int times = int(6);
            loop_findinvslot_index = 0;
            while (loop_findinvslot_index < times) {
                loop_findinvslot_6();
                if (!loop_findinvslot_running) break;
                loop_findinvslot_index++;
            }
        }
    }
    event_3563_6_end: ;
}
// Function purpose: generated callback event_func_1724 processes event block(s) 3564_6. Actions/conditions:
//        3564_6: adds a itemshud 210 instance; sets the object's animation to 1; sets the selected object's direction
//        to 9; plus 10 more actions.
void Frames::event_func_1724()
{
    // event 3564_6 : adds a itemshud 210 instance; sets the object's animation to 1; sets the selected object's direction to 9; plus 10 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_chipping_2_1)) goto event_3564_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3564_6_end;
        hudItem_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_hudItem(-16, -16), 5);
            hudItem_instances.add_back();
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(9);
            ((Active*)*it)->alterables->values.set(2, 41);
            ((Active*)*it)->alterables->values.set(6, 1);
            ((Active*)*it)->alterables->strings.set(0, str_inven_820);
            ((Active*)*it)->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832));
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_3564_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3564_6_1: ;
        }
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)), str_41_1_1324);
    }
    event_3564_6_end: ;
}
// Function purpose: generated callback event_func_1725 processes event block(s) 3565_6. Actions/conditions:
//        3565_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_1725()
{
    // event 3565_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_chipping_2_1)) goto event_3565_6_end;
        dighole_207_instances.clear_selection();
        spread_value(dighole_207_instances, 0, 1);
    }
    event_3565_6_end: ;
}
// Function purpose: generated callback event_func_1726 processes event block(s) 3566_6. Actions/conditions:
//        3566_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_1726()
{
    // event 3566_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_chipping_2_1)) goto event_3566_6_end;
        {
            loop_sort_holes_running = true;
            int times = int(dighole_207_instances.size());
            loop_sort_holes_index = 0;
            while (loop_sort_holes_index < times) {
                loop_sort_holes_6();
                if (!loop_sort_holes_running) break;
                loop_sort_holes_index++;
            }
        }
    }
    event_3566_6_end: ;
}
void Frames::loop_collect_wall_6()
{
    event_func_1723();
    event_func_1724();
    event_func_1725();
    event_func_1726();
}
// Function purpose: generated callback event_func_1727 processes event block(s) 3561_6. Actions/conditions:
//        3561_6: removes background tiles at the target coordinates; removes background tiles at the target
//        coordinates; sets the selected object's layer to 2-1; plus 8 more actions.
void Frames::event_func_1727()
{
    // event 3561_6 : removes background tiles at the target coordinates; removes background tiles at the target coordinates; sets the selected object's layer to 2-1; plus 8 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_chipping_2_1)) goto event_3561_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3561_6_end;
        if (!((((ArrayObject*)get_instance(wallsarray_232_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(456, str_chipx_1325), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(457, str_chipy_1326), ((Active*)get_instance(playerBase_instances))->layer->index+1)) >= (100))) goto event_3561_6_end;
        layers[((Active*)get_instance(playerBase_instances))->layer->index+1-1].destroy_backgrounds(((AssociateArray*)get_instance(gameVariables_instances))->get_value(456, str_chipx_1325)*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(457, str_chipy_1326)*16, 0);
        layers[7-1].destroy_backgrounds(((AssociateArray*)get_instance(gameVariables_instances))->get_value(456, str_chipx_1325)*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(457, str_chipy_1326)*16, 0);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(((AssociateArray*)get_instance(gameVariables_instances))->get_value(456, str_chipx_1325)*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(457, str_chipy_1326)*16, 0, 48, 16, 16, 0);
        guardalert_266_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guardalert_266(0, 0), 1);
            guardalert_266_instances.add_back();
        }
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(456, str_chipx_1325)*16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(457, str_chipy_1326)*16);
            ((Active*)*it)->alterables->strings.set(0, str_brokenwall_600);
        }
        {
            loop_collect_wall_running = true;
            int times = int(1);
            loop_collect_wall_index = 0;
            while (loop_collect_wall_index < times) {
                loop_collect_wall_6();
                if (!loop_collect_wall_running) break;
                loop_collect_wall_index++;
            }
        }
    }
    event_3561_6_end: ;
}
// Function purpose: generated callback event_func_1728 processes event block(s) 3562_6. Actions/conditions:
//        3562_6: sets gameVariables->get_value(456, ChipX) to gameVariables->get_value(457, ChipY);
//        adds a soil 173 instance; sets the selected object's horizontal position to
//        gameVariables->get_value(456, ChipX)*16; plus 6 more actions.
void Frames::event_func_1728()
{
    // event 3562_6 : sets gameVariables->get_value(456, ChipX) to gameVariables->get_value(457, ChipY); adds a soil 173 instance; sets the selected object's horizontal position to gameVariables->get_value(456, ChipX)*16; plus 6 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_chipping_2_1)) goto event_3562_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_3562_6_end;
        if (!((((ArrayObject*)get_instance(wallsarray_232_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(456, str_chipx_1325), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(457, str_chipy_1326), ((Active*)get_instance(playerBase_instances))->layer->index+1)) >= (100))) goto event_3562_6_end;
        ((ArrayObject*)get_instance(digarray_228_instances))->set_value(25, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(456, str_chipx_1325), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(457, str_chipy_1326), 0);
        soil_173_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_soil_173(-16, -16), 0);
            soil_173_instances.add_back();
        }
        for (ObjectIterator it(soil_173_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(456, str_chipx_1325)*16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(457, str_chipy_1326)*16);
            ((Active*)*it)->paste(0);
            ((Active*)*it)->destroy();
        }
    }
    event_3562_6_end: ;
}
void Frames::loop_check_complete_chip_6()
{
    event_func_1727();
    event_func_1728();
}
// Function purpose: generated callback event_func_1729 processes event block(s) 4040_6. Actions/conditions:
//        4040_6: sets the selected object's horizontal position to gameVariables->get_value(453, wX); sets
//        the selected object's vertical position to gameVariables->get_value(454, wY)-8.
void Frames::event_func_1729()
{
    // event 4040_6 : sets the selected object's horizontal position to gameVariables->get_value(453, wX); sets the selected object's vertical position to gameVariables->get_value(454, wY)-8
    {
        if (!(group_code_1 && group_code_flooding_1)) goto event_4040_6_end;
        ((Active*)get_instance(active_44_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(453, str_wx_1321));
        ((Active*)get_instance(active_44_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(454, str_wy_1322)-8);
        {
            loop_flood_go_running = true;
            int times = int(1);
            loop_flood_go_index = 0;
            while (loop_flood_go_index < times) {
                loop_flood_go_6();
                if (!loop_flood_go_running) break;
                loop_flood_go_index++;
            }
        }
    }
    event_4040_6_end: ;
}
void Frames::loop_flood_up_6()
{
    event_func_1729();
}
// Function purpose: generated callback event_func_1730 processes event block(s) 1695_6. Actions/conditions:
//        1695_6: sets the selected object's numeric value to gameVariables->get_value(458, RollcallX); sets
//        the selected object's numeric value to gameVariables->get_value(459, RollcallY); enables flag 151
//        (NPC lesson-attendance state) on the selected object; plus 1 more actions.
void Frames::event_func_1730()
{
    // event 1695_6 : sets the selected object's numeric value to gameVariables->get_value(458, RollcallX); sets the selected object's numeric value to gameVariables->get_value(459, RollcallY); enables flag 151 (NPC lesson-attendance state) on the selected object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1695_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_rollcall_align_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1695_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(458, str_rollcallx_1327));
            ((Active*)*it)->alterables->values.set(24, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(459, str_rollcally_1328));
            ((Active*)*it)->alterables->flags.enable(151);
            ((Active*)*it)->alterables->flags.disable(152);
        }
    }
    event_1695_6_end: ;
}
void Frames::loop_rollcall_slot_go_6()
{
    event_func_1730();
}
// Function purpose: generated callback event_func_1731 processes event block(s) 1694_6. Actions/conditions:
//        1694_6: sets found to 1; sets RollcallX to ((Active*)get_single(waypointinmaterollcall2_310_instances,
//        default_active_instance))->get_x()+8; sets RollcallY to
//        ((Active*)get_single(waypointinmaterollcall2_310_instances, default_active_instance))->get_y()+8; plus 1
//        more actions.
void Frames::event_func_1731()
{
    // event 1694_6 : sets found to 1; sets RollcallX to ((Active*)get_single(waypointinmaterollcall2_310_instances, default_active_instance))->get_x()+8; sets RollcallY to ((Active*)get_single(waypointinmaterollcall2_310_instances, default_active_instance))->get_y()+8; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1694_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_1694_6_end;
        waypointinmaterollcall2_310_instances.clear_selection();
        for (ObjectIterator it(waypointinmaterollcall2_310_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_rollcall_slot_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!waypointinmaterollcall2_310_instances.has_selection()) goto event_1694_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(369, str_found_1165, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(458, str_rollcallx_1327, ((Active*)get_single(waypointinmaterollcall2_310_instances, default_active_instance))->get_x()+8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(459, str_rollcally_1328, ((Active*)get_single(waypointinmaterollcall2_310_instances, default_active_instance))->get_y()+8);
        for (ObjectIterator it(waypointinmaterollcall2_310_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, loop_rollcall_align_index+1);
        }
        {
            loop_rollcall_slot_go_running = true;
            int times = int(1);
            loop_rollcall_slot_go_index = 0;
            while (loop_rollcall_slot_go_index < times) {
                loop_rollcall_slot_go_6();
                if (!loop_rollcall_slot_go_running) break;
                loop_rollcall_slot_go_index++;
            }
        }
            loop_rollcall_slot_running = false;
    
    }
    event_1694_6_end: ;
}
void Frames::loop_rollcall_slot_6()
{
    event_func_1731();
}
// Function purpose: generated callback event_func_1732 processes event block(s) 1691_6. Actions/conditions:
//        1691_6: saves the current object selection; disables flag 151 (NPC lesson-attendance state) on the selected
//        object; disables flag 152 (NPC lesson-attendance state) on the selected object.
void Frames::event_func_1732()
{
    // event 1691_6 : saves the current object selection; disables flag 151 (NPC lesson-attendance state) on the selected object; disables flag 152 (NPC lesson-attendance state) on the selected object
    bool or_result_1691_6 = false;
    bool or_temp_result_1691_6_0 = false;
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto or_event_1691_6_0_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_rollcall_align_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) != (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto or_event_1691_6_0_end;
        or_result_1691_6 = true;
        or_temp_result_1691_6_0 = true;
    }
    or_event_1691_6_0_end: ;
    inmateBase_instances.clear_saved_selection();
    if (or_temp_result_1691_6_0) {
        inmateBase_instances.save_selection();
    }
    // event 1691_6 : saves the current object selection; disables flag 151 (NPC lesson-attendance state) on the selected object; disables flag 152 (NPC lesson-attendance state) on the selected object
    bool or_temp_result_1691_6_1 = false;
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto or_event_1691_6_1_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_rollcall_align_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto or_event_1691_6_1_end;
        or_result_1691_6 = true;
        or_temp_result_1691_6_1 = true;
    }
    or_event_1691_6_1_end: ;
    if (or_temp_result_1691_6_1) {
        inmateBase_instances.save_selection();
    }
    // event 1691_6 : saves the current object selection; disables flag 151 (NPC lesson-attendance state) on the selected object; disables flag 152 (NPC lesson-attendance state) on the selected object
    bool or_temp_result_1691_6_2 = false;
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto or_event_1691_6_2_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_rollcall_align_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(60))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto or_event_1691_6_2_end;
        or_result_1691_6 = true;
        or_temp_result_1691_6_2 = true;
    }
    or_event_1691_6_2_end: ;
    if (or_temp_result_1691_6_2) {
        inmateBase_instances.save_selection();
    }
    // event 1691_6 : saves the current object selection; disables flag 151 (NPC lesson-attendance state) on the selected object; disables flag 152 (NPC lesson-attendance state) on the selected object
    bool or_temp_result_1691_6_3 = false;
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto or_event_1691_6_3_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_rollcall_align_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) != (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto or_event_1691_6_3_end;
        or_result_1691_6 = true;
        or_temp_result_1691_6_3 = true;
        or_event_1691_6_3_end: ;
        if (or_temp_result_1691_6_3) {
            inmateBase_instances.save_selection();
        }
        if (!or_result_1691_6) goto or_final_or_event_1691_6_3_end;
        inmateBase_instances.empty_selection();
        if (or_temp_result_1691_6_0 || or_temp_result_1691_6_1 || or_temp_result_1691_6_2 || or_temp_result_1691_6_3) {
            inmateBase_instances.restore_selection();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(151);
            ((Active*)*it)->alterables->flags.disable(152);
        }
        {
            loop_unmount_npc_running = true;
            int times = int(1);
            loop_unmount_npc_index = 0;
            while (loop_unmount_npc_index < times) {
                loop_unmount_npc_6();
                if (!loop_unmount_npc_running) break;
                loop_unmount_npc_index++;
            }
        }
    }
    or_final_or_event_1691_6_3_end: ;
}
// Function purpose: generated callback event_func_1733 processes event block(s) 1693_6. Actions/conditions:
//        1693_6: sets found to 0.
void Frames::event_func_1733()
{
    // event 1693_6 : sets found to 0
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1693_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_rollcall_align_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(151))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(152))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1693_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(369, str_found_1165, 0);
        {
            loop_rollcall_slot_running = true;
            int times = int(waypointinmaterollcall2_310_instances.size());
            loop_rollcall_slot_index = 0;
            while (loop_rollcall_slot_index < times) {
                loop_rollcall_slot_6();
                if (!loop_rollcall_slot_running) break;
                loop_rollcall_slot_index++;
            }
        }
    }
    event_1693_6_end: ;
}
// Function purpose: generated callback event_func_1734 processes event block(s) 1696_6. Actions/conditions:
//        1696_6: disables flag 151 (NPC lesson-attendance state) on the selected object; enables flag 152 (NPC
//        lesson-attendance state) on the selected object.
void Frames::event_func_1734()
{
    // event 1696_6 : disables flag 151 (NPC lesson-attendance state) on the selected object; enables flag 152 (NPC lesson-attendance state) on the selected object
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1696_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_rollcall_align_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1696_6_end;
        waypointinmaterollcall2_310_instances.clear_selection();
        if (!check_overlap(inmateBase_instances, waypointinmaterollcall2_310_instances)) goto event_1696_6_end;
        for (ObjectIterator it(waypointinmaterollcall2_310_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!waypointinmaterollcall2_310_instances.has_selection()) goto event_1696_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(151))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(152))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1696_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(151);
            ((Active*)*it)->alterables->flags.enable(152);
        }
    }
    event_1696_6_end: ;
}
// Function purpose: generated callback event_func_1735 processes event block(s) 1697_6. Actions/conditions:
//        1697_6: sets the selected object's direction to 8.
void Frames::event_func_1735()
{
    // event 1697_6 : sets the selected object's direction to 8
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1697_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(283, str_dest_pos_940)) == (1))) goto event_1697_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_rollcall_align_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(151))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(152))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1697_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
    }
    event_1697_6_end: ;
}
// Function purpose: generated callback event_func_1736 processes event block(s) 1698_6. Actions/conditions:
//        1698_6: sets the selected object's direction to 24.
void Frames::event_func_1736()
{
    // event 1698_6 : sets the selected object's direction to 24
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1698_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(283, str_dest_pos_940)) == (0))) goto event_1698_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_rollcall_align_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(151))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(152))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1698_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
    }
    event_1698_6_end: ;
}
void Frames::loop_rollcall_align_6()
{
    event_func_1732();
    event_func_1733();
    event_func_1734();
    event_func_1735();
    event_func_1736();
}
// Function purpose: generated callback event_func_1737 processes event block(s) 1908_6. Actions/conditions:
//        1908_6: sets spaceX to ((Active*)get_instance(containertimber2_325_instances,
//        default_active_instance))->get_x(); sets spaceY to ((Active*)get_instance(containertimber2_325_instances,
//        default_active_instance))->get_y().
void Frames::event_func_1737()
{
    // event 1908_6 : sets spaceX to ((Active*)get_instance(containertimber2_325_instances, default_active_instance))->get_x(); sets spaceY to ((Active*)get_instance(containertimber2_325_instances, default_active_instance))->get_y()
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1)) goto event_1908_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(372, str_spacex_1168, ((Active*)get_instance(containertimber2_325_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(373, str_spacey_1169, ((Active*)get_instance(containertimber2_325_instances, default_active_instance))->get_y());
        {
            loop_space_finder_running = true;
            int times = int(1);
            loop_space_finder_index = 0;
            while (loop_space_finder_index < times) {
                loop_space_finder_6();
                if (!loop_space_finder_running) break;
                loop_space_finder_index++;
            }
        }
    }
    event_1908_6_end: ;
}
