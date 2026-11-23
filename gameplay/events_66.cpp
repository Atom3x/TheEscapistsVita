#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"
#include "aliases.h"

// Function purpose: generated callback event_func_5532 processes event block(s) 345_11. Actions/conditions:
//        345_11: creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text
//        string; plus 1 more actions.
void Frames::event_func_5532()
{
    // event 345_11 : creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text string; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_345_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (8))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_345_11_end;
        FrameObject * single_instance_345_11_0; single_instance_345_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(esc::createTextFrames(parent), parent->layer);
                if (single_instance_345_11_0 == NULL)
                    single_instance_345_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_345_11_0))->blend_color.set(Color(210, 210, 210));
        ((Text*)((Text*)single_instance_345_11_0))->set_string(str_all_other_inmates_and_guards_have_an_opinion_opn_of_you_which_can_be_seen_on_their_profile_the_higher_the_opinion_the_more_they_like_you_opinions_always_gravitate_towards_neutral_over_time_2485);
        ((Text*)((Text*)single_instance_345_11_0))->set_string(((Text*)single_instance_345_11_0)->text+str_you_can_raise_others_opinion_by_talking_to_them_or_giving_them_items_and_money_someone_who_likes_you_might_look_the_other_way_if_they_see_you_up_to_no_good_whereas_a_hater_will_probably_attack_you_for_no_reason_2486);
    }
    event_345_11_end: ;
}
// Function purpose: generated callback event_func_5533 processes event block(s) 346_11. Actions/conditions:
//        346_11: creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more
//        actions.
void Frames::event_func_5533()
{
    // event 346_11 : creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_346_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (9))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_346_11_end;
        FrameObject * single_instance_346_11_0; single_instance_346_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -80), parent->layer);
                if (single_instance_346_11_0 == NULL)
                    single_instance_346_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_346_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_346_11_0)), frame_left()));
        ((Text*)((Text*)single_instance_346_11_0))->set_bold(1);
        ((Text*)((Text*)single_instance_346_11_0))->blend_color.set(Color(243, 119, 0));
        ((Text*)((Text*)single_instance_346_11_0))->set_string(str_crafting_2487);
    }
    event_346_11_end: ;
}
// Function purpose: generated callback event_func_5534 processes event block(s) 347_11. Actions/conditions:
//        347_11: creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text
//        string; plus 1 more actions.
void Frames::event_func_5534()
{
    // event 347_11 : creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text string; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_347_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (9))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_347_11_end;
        FrameObject * single_instance_347_11_0; single_instance_347_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(esc::createTextFrames(parent), parent->layer);
                if (single_instance_347_11_0 == NULL)
                    single_instance_347_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_347_11_0))->blend_color.set(Color(210, 210, 210));
        ((Text*)((Text*)single_instance_347_11_0))->set_string(str_crafting_is_merging_two_or_three_items_to_create_a_new_item_the_best_weapons_and_tools_needed_to_help_you_escape_are_only_available_through_crafting_2488);
        ((Text*)((Text*)single_instance_347_11_0))->set_string(((Text*)single_instance_347_11_0)->text+str_around_the_prison_you_ll_come_across_crafing_notes_which_tell_you_how_to_make_certain_items_when_you_use_them_these_will_then_be_stored_in_your_journal_for_reference_2489);
    }
    event_347_11_end: ;
}
// Function purpose: generated callback event_func_5535 processes event block(s) 348_11. Actions/conditions:
//        348_11: creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more
//        actions.
void Frames::event_func_5535()
{
    // event 348_11 : creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_348_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (10))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_348_11_end;
        FrameObject * single_instance_348_11_0; single_instance_348_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -80), parent->layer);
                if (single_instance_348_11_0 == NULL)
                    single_instance_348_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_348_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_348_11_0)), frame_left()));
        ((Text*)((Text*)single_instance_348_11_0))->set_bold(1);
        ((Text*)((Text*)single_instance_348_11_0))->blend_color.set(Color(243, 119, 0));
        ((Text*)((Text*)single_instance_348_11_0))->set_string(str_favours_2490);
    }
    event_348_11_end: ;
}
// Function purpose: generated callback event_func_5536 processes event block(s) 349_11. Actions/conditions:
//        349_11: creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text
//        string; plus 1 more actions.
void Frames::event_func_5536()
{
    // event 349_11 : creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text string; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_349_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (10))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_349_11_end;
        FrameObject * single_instance_349_11_0; single_instance_349_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(esc::createTextFrames(parent), parent->layer);
                if (single_instance_349_11_0 == NULL)
                    single_instance_349_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_349_11_0))->blend_color.set(Color(210, 210, 210));
        ((Text*)((Text*)single_instance_349_11_0))->set_string(str_inmates_with_a_flashing_green_exclamation_icon_above_their_heads_have_a_favour_to_ask_of_you_left_click_on_them_to_see_the_favour_favours_might_be_anything_from_asking_you_to_retrieve_an_item_for_them_or_beating_someone_up_2491);
        ((Text*)((Text*)single_instance_349_11_0))->set_string(((Text*)single_instance_349_11_0)->text+str_if_you_accept_and_complete_a_favour_for_someone_their_opinion_of_you_will_rise_and_they_ll_throw_you_some_cash_2492);
    }
    event_349_11_end: ;
}
// Function purpose: generated callback event_func_5537 processes event block(s) 350_11. Actions/conditions:
//        350_11: creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more
//        actions.
void Frames::event_func_5537()
{
    // event 350_11 : creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_350_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (11))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_350_11_end;
        FrameObject * single_instance_350_11_0; single_instance_350_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -80), parent->layer);
                if (single_instance_350_11_0 == NULL)
                    single_instance_350_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_350_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_350_11_0)), frame_left()));
        ((Text*)((Text*)single_instance_350_11_0))->set_bold(1);
        ((Text*)((Text*)single_instance_350_11_0))->blend_color.set(Color(243, 119, 0));
        ((Text*)((Text*)single_instance_350_11_0))->set_string(str_prison_jobs_2493);
    }
    event_350_11_end: ;
}
// Function purpose: generated callback event_func_5538 processes event block(s) 351_11. Actions/conditions:
//        351_11: creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text
//        string; plus 1 more actions.
void Frames::event_func_5538()
{
    // event 351_11 : creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text string; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_351_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (11))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_351_11_end;
        FrameObject * single_instance_351_11_0; single_instance_351_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(esc::createTextFrames(parent), parent->layer);
                if (single_instance_351_11_0 == NULL)
                    single_instance_351_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_351_11_0))->blend_color.set(Color(210, 210, 210));
        ((Text*)((Text*)single_instance_351_11_0))->set_string(str_prison_jobs_are_a_legal_way_of_earning_some_cash_there_are_various_ones_available_and_you_can_apply_for_one_by_left_clicking_on_the_job_board_in_the_prison_office_2494);
        ((Text*)((Text*)single_instance_351_11_0))->set_string(((Text*)single_instance_351_11_0)->text+str_there_are_set_periods_of_the_daily_routine_where_inmates_with_jobs_can_attend_to_them_failure_to_meet_a_quota_during_this_time_will_result_in_losing_the_job_2495);
    }
    event_351_11_end: ;
}
// Function purpose: generated callback event_func_5539 processes event block(s) 352_11. Actions/conditions:
//        352_11: creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more
//        actions.
void Frames::event_func_5539()
{
    // event 352_11 : creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_352_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (12))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_352_11_end;
        FrameObject * single_instance_352_11_0; single_instance_352_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -80), parent->layer);
                if (single_instance_352_11_0 == NULL)
                    single_instance_352_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_352_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_352_11_0)), frame_left()));
        ((Text*)((Text*)single_instance_352_11_0))->set_bold(1);
        ((Text*)((Text*)single_instance_352_11_0))->blend_color.set(Color(243, 119, 0));
        ((Text*)((Text*)single_instance_352_11_0))->set_string(str_health_2496);
    }
    event_352_11_end: ;
}
// Function purpose: generated callback event_func_5540 processes event block(s) 353_11. Actions/conditions:
//        353_11: creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text
//        string; plus 5 more actions.
void Frames::event_func_5540()
{
    // event 353_11 : creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text string; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_353_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (12))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_353_11_end;
        FrameObject * single_instance_353_11_0; single_instance_353_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(esc::createTextFrames(parent), parent->layer);
                if (single_instance_353_11_0 == NULL)
                    single_instance_353_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_353_11_0))->blend_color.set(Color(210, 210, 210));
        ((Text*)((Text*)single_instance_353_11_0))->set_string(str_you_lose_health_each_time_you_are_attacked_by_a_guard_or_another_inmate_once_it_reaches_zero_you_re_sent_to_the_infirmary_and_stripped_of_any_contraband_on_hand_2497);
        ((Text*)((Text*)single_instance_353_11_0))->set_string(((Text*)single_instance_353_11_0)->text+str_health_regenerates_over_time_but_you_can_speed_this_up_by_using_healing_items_or_resting_in_infirmary_beds_2498);
        ((Text*)((Text*)single_instance_353_11_0))->set_string(((Text*)single_instance_353_11_0)->text+str_the_higher_your_strength_the_higher_your_max_health_2499);
    }
    event_353_11_end: ;
}
// Function purpose: generated callback event_func_5541 processes event block(s) 354_11. Actions/conditions:
//        354_11: creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more
//        actions.
void Frames::event_func_5541()
{
    // event 354_11 : creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_354_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (13))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_354_11_end;
        FrameObject * single_instance_354_11_0; single_instance_354_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -80), parent->layer);
                if (single_instance_354_11_0 == NULL)
                    single_instance_354_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_354_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_354_11_0)), frame_left()));
        ((Text*)((Text*)single_instance_354_11_0))->set_bold(1);
        ((Text*)((Text*)single_instance_354_11_0))->blend_color.set(Color(243, 119, 0));
        ((Text*)((Text*)single_instance_354_11_0))->set_string(str_fatigue_2500);
    }
    event_354_11_end: ;
}
// Function purpose: generated callback event_func_5542 processes event block(s) 355_11. Actions/conditions:
//        355_11: creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text
//        string.
void Frames::event_func_5542()
{
    // event 355_11 : creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text string
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_355_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (13))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_355_11_end;
        FrameObject * single_instance_355_11_0; single_instance_355_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(esc::createTextFrames(parent), parent->layer);
                if (single_instance_355_11_0 == NULL)
                    single_instance_355_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_355_11_0))->blend_color.set(Color(210, 210, 210));
        ((Text*)((Text*)single_instance_355_11_0))->set_string(str_fatigue_represents_how_tired_you_are_everytime_you_do_a_task_that_requires_physical_energy_it_will_rise_although_it_drops_slowly_over_time_there_are_several_ways_to_reduce_fatigue_faster_such_as_showering_eating_and_resting_in_beds_2501);
    }
    event_355_11_end: ;
}
// Function purpose: generated callback event_func_5543 processes event block(s) 356_11. Actions/conditions:
//        356_11: creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more
//        actions.
void Frames::event_func_5543()
{
    // event 356_11 : creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_356_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (14))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_356_11_end;
        FrameObject * single_instance_356_11_0; single_instance_356_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -80), parent->layer);
                if (single_instance_356_11_0 == NULL)
                    single_instance_356_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_356_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_356_11_0)), frame_left()));
        ((Text*)((Text*)single_instance_356_11_0))->set_bold(1);
        ((Text*)((Text*)single_instance_356_11_0))->blend_color.set(Color(243, 119, 0));
        ((Text*)((Text*)single_instance_356_11_0))->set_string(str_weapons_outfits_2502);
    }
    event_356_11_end: ;
}
// Function purpose: generated callback event_func_5544 processes event block(s) 357_11. Actions/conditions:
//        357_11: creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text
//        string; plus 1 more actions.
void Frames::event_func_5544()
{
    // event 357_11 : creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text string; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_357_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (14))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_357_11_end;
        FrameObject * single_instance_357_11_0; single_instance_357_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(esc::createTextFrames(parent), parent->layer);
                if (single_instance_357_11_0 == NULL)
                    single_instance_357_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_357_11_0))->blend_color.set(Color(210, 210, 210));
        ((Text*)((Text*)single_instance_357_11_0))->set_string(str_you_can_equip_a_weapon_and_an_outfit_via_your_character_profile_page_weapons_can_be_crafted_or_found_and_once_equipped_will_increase_the_damage_you_do_during_a_fight_2503);
        ((Text*)((Text*)single_instance_357_11_0))->set_string(((Text*)single_instance_357_11_0)->text+str_you_are_assigned_an_inmate_outfit_to_start_with_but_you_may_come_across_various_other_ones_over_time_some_of_them_have_defensive_properties_that_reduce_attack_damage_against_you_2504);
    }
    event_357_11_end: ;
}
// Function purpose: generated callback event_func_5545 processes event block(s) 358_11. Actions/conditions:
//        358_11: creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more
//        actions.
void Frames::event_func_5545()
{
    // event 358_11 : creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_358_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (15))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_358_11_end;
        FrameObject * single_instance_358_11_0; single_instance_358_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -80), parent->layer);
                if (single_instance_358_11_0 == NULL)
                    single_instance_358_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_358_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_358_11_0)), frame_left()));
        ((Text*)((Text*)single_instance_358_11_0))->set_bold(1);
        ((Text*)((Text*)single_instance_358_11_0))->blend_color.set(Color(243, 119, 0));
        ((Text*)((Text*)single_instance_358_11_0))->set_string(str_buying_items_2505);
    }
    event_358_11_end: ;
}
// Function purpose: generated callback event_func_5546 processes event block(s) 359_11. Actions/conditions:
//        359_11: creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text
//        string; plus 1 more actions.
void Frames::event_func_5546()
{
    // event 359_11 : creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text string; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_359_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (15))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_359_11_end;
        FrameObject * single_instance_359_11_0; single_instance_359_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(esc::createTextFrames(parent), parent->layer);
                if (single_instance_359_11_0 == NULL)
                    single_instance_359_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_359_11_0))->blend_color.set(Color(210, 210, 210));
        ((Text*)((Text*)single_instance_359_11_0))->set_string(str_inmates_with_a_flashing_yellow_bag_icon_over_their_head_mean_they_have_items_for_sale_right_click_on_them_to_see_their_profile_then_click_the_buy_tab_to_see_what_they_re_selling_2506);
        ((Text*)((Text*)single_instance_359_11_0))->set_string(((Text*)single_instance_359_11_0)->text+str_the_price_they_charge_is_dependant_upon_their_opinion_of_you_2507);
    }
    event_359_11_end: ;
}
// Function purpose: generated callback event_func_5547 processes event block(s) 360_11. Actions/conditions:
//        360_11: creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more
//        actions.
void Frames::event_func_5547()
{
    // event 360_11 : creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_360_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (16))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_360_11_end;
        FrameObject * single_instance_360_11_0; single_instance_360_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -80), parent->layer);
                if (single_instance_360_11_0 == NULL)
                    single_instance_360_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_360_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_360_11_0)), frame_left()));
        ((Text*)((Text*)single_instance_360_11_0))->set_bold(1);
        ((Text*)((Text*)single_instance_360_11_0))->blend_color.set(Color(243, 119, 0));
        ((Text*)((Text*)single_instance_360_11_0))->set_string(str_storing_items_2508);
    }
    event_360_11_end: ;
}
// Function purpose: generated callback event_func_5548 processes event block(s) 361_11. Actions/conditions:
//        361_11: creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text
//        string; plus 1 more actions.
void Frames::event_func_5548()
{
    // event 361_11 : creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text string; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_361_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (16))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_361_11_end;
        FrameObject * single_instance_361_11_0; single_instance_361_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(esc::createTextFrames(parent), parent->layer);
                if (single_instance_361_11_0 == NULL)
                    single_instance_361_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_361_11_0))->blend_color.set(Color(210, 210, 210));
        ((Text*)((Text*)single_instance_361_11_0))->set_string(str_every_prison_inmate_has_a_desk_in_their_cell_to_store_items_in_left_click_on_it_to_open_it_legal_items_are_always_safe_while_stored_in_desks_but_illegal_ones_will_be_removed_should_your_cell_be_shaken_down_by_guards_2509);
        ((Text*)((Text*)single_instance_361_11_0))->set_string(((Text*)single_instance_361_11_0)->text+empty_string);
    }
    event_361_11_end: ;
}
// Function purpose: generated callback event_func_5549 processes event block(s) 362_11. Actions/conditions:
//        362_11: creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more
//        actions.
void Frames::event_func_5549()
{
    // event 362_11 : creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_362_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (17))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_362_11_end;
        FrameObject * single_instance_362_11_0; single_instance_362_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -80), parent->layer);
                if (single_instance_362_11_0 == NULL)
                    single_instance_362_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_362_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_362_11_0)), frame_left()));
        ((Text*)((Text*)single_instance_362_11_0))->set_bold(1);
        ((Text*)((Text*)single_instance_362_11_0))->blend_color.set(Color(243, 119, 0));
        ((Text*)((Text*)single_instance_362_11_0))->set_string(str_contraband_detectors_2510);
    }
    event_362_11_end: ;
}
// Function purpose: generated callback event_func_5550 processes event block(s) 363_11. Actions/conditions:
//        363_11: creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text
//        string; plus 1 more actions.
void Frames::event_func_5550()
{
    // event 363_11 : creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text string; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_363_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (17))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_363_11_end;
        FrameObject * single_instance_363_11_0; single_instance_363_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(esc::createTextFrames(parent), parent->layer);
                if (single_instance_363_11_0 == NULL)
                    single_instance_363_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_363_11_0))->blend_color.set(Color(210, 210, 210));
        ((Text*)((Text*)single_instance_363_11_0))->set_string(str_around_the_prisons_you_ll_come_across_contraband_detectors_in_some_doorways_if_you_pass_through_these_while_carrying_any_illegal_items_it_will_trigger_the_alarm_and_the_guards_will_be_onto_you_2511);
        ((Text*)((Text*)single_instance_363_11_0))->set_string(((Text*)single_instance_363_11_0)->text+str_there_are_however_ways_to_bypass_these_if_you_re_in_the_smuggling_mood_2512);
    }
    event_363_11_end: ;
}
// Function purpose: generated callback event_func_5551 processes event block(s) 364_11. Actions/conditions:
//        364_11: creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more
//        actions.
void Frames::event_func_5551()
{
    // event 364_11 : creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_364_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (18))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_364_11_end;
        FrameObject * single_instance_364_11_0; single_instance_364_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -80), parent->layer);
                if (single_instance_364_11_0 == NULL)
                    single_instance_364_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_364_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_364_11_0)), frame_left()));
        ((Text*)((Text*)single_instance_364_11_0))->set_bold(1);
        ((Text*)((Text*)single_instance_364_11_0))->blend_color.set(Color(243, 119, 0));
        ((Text*)((Text*)single_instance_364_11_0))->set_string(str_stealing_and_looting_2513);
    }
    event_364_11_end: ;
}
// Function purpose: generated callback event_func_5552 processes event block(s) 365_11. Actions/conditions:
//        365_11: creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text
//        string; plus 1 more actions.
void Frames::event_func_5552()
{
    // event 365_11 : creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text string; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_365_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (18))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_365_11_end;
        FrameObject * single_instance_365_11_0; single_instance_365_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(esc::createTextFrames(parent), parent->layer);
                if (single_instance_365_11_0 == NULL)
                    single_instance_365_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_365_11_0))->blend_color.set(Color(210, 210, 210));
        ((Text*)((Text*)single_instance_365_11_0))->set_string(str_you_can_loot_a_knocked_out_inmate_or_guard_by_left_clicking_the_mouse_over_their_body_you_re_then_free_to_pilfer_from_their_inventory_you_can_also_steal_from_other_inmates_desks_in_the_same_manner_just_don_t_let_them_see_you_doing_it_2514);
        ((Text*)((Text*)single_instance_365_11_0))->set_string(((Text*)single_instance_365_11_0)->text+empty_string);
    }
    event_365_11_end: ;
}
// Function purpose: generated callback event_func_5553 processes event block(s) 366_11. Actions/conditions:
//        366_11: creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more
//        actions.
void Frames::event_func_5553()
{
    // event 366_11 : creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_366_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (19))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_366_11_end;
        FrameObject * single_instance_366_11_0; single_instance_366_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -80), parent->layer);
                if (single_instance_366_11_0 == NULL)
                    single_instance_366_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_366_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_366_11_0)), frame_left()));
        ((Text*)((Text*)single_instance_366_11_0))->set_bold(1);
        ((Text*)((Text*)single_instance_366_11_0))->blend_color.set(Color(243, 119, 0));
        ((Text*)((Text*)single_instance_366_11_0))->set_string(str_recruiting_buddies_2515);
    }
    event_366_11_end: ;
}
// Function purpose: generated callback event_func_5554 processes event block(s) 367_11. Actions/conditions:
//        367_11: creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text
//        string; plus 1 more actions.
void Frames::event_func_5554()
{
    // event 367_11 : creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text string; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_367_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (19))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_367_11_end;
        FrameObject * single_instance_367_11_0; single_instance_367_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(esc::createTextFrames(parent), parent->layer);
                if (single_instance_367_11_0 == NULL)
                    single_instance_367_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_367_11_0))->blend_color.set(Color(210, 210, 210));
        ((Text*)((Text*)single_instance_367_11_0))->set_string(str_you_are_able_to_recruit_fellow_prisoners_who_have_a_high_opinion_of_you_by_hovering_the_mouse_over_them_and_pressing_the_2516+translate_key_to_string(manager.button1)+str_key_in_this_state_they_will_follow_you_around_until_you_dismiss_them_in_the_same_manner_2517);
        ((Text*)((Text*)single_instance_367_11_0))->set_string(((Text*)single_instance_367_11_0)->text+str_they_will_attack_whoever_you_target_or_whoever_attacks_you_since_their_reputation_with_guards_takes_a_hit_by_fighting_for_you_you_will_lose_a_little_opinion_each_attack_call_2518);
    }
    event_367_11_end: ;
}
// Function purpose: generated callback event_func_5555 processes event block(s) 368_11. Actions/conditions:
//        368_11: creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more
//        actions.
void Frames::event_func_5555()
{
    // event 368_11 : creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_368_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (20))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_368_11_end;
        FrameObject * single_instance_368_11_0; single_instance_368_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -80), parent->layer);
                if (single_instance_368_11_0 == NULL)
                    single_instance_368_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_368_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_368_11_0)), frame_left()));
        ((Text*)((Text*)single_instance_368_11_0))->set_bold(1);
        ((Text*)((Text*)single_instance_368_11_0))->blend_color.set(Color(243, 119, 0));
        ((Text*)((Text*)single_instance_368_11_0))->set_string(str_escaping_2519);
    }
    event_368_11_end: ;
}
// Function purpose: generated callback event_func_5556 processes event block(s) 369_11. Actions/conditions:
//        369_11: creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text
//        string; plus 1 more actions.
void Frames::event_func_5556()
{
    // event 369_11 : creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text string; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_369_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (20))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_369_11_end;
        FrameObject * single_instance_369_11_0; single_instance_369_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(esc::createTextFrames(parent), parent->layer);
                if (single_instance_369_11_0 == NULL)
                    single_instance_369_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_369_11_0))->blend_color.set(Color(210, 210, 210));
        ((Text*)((Text*)single_instance_369_11_0))->set_string(str_ultimately_the_objective_is_to_escape_the_prison_there_are_various_means_of_doing_this_and_what_might_be_effective_on_one_prison_might_be_impossible_on_another_2520);
        ((Text*)((Text*)single_instance_369_11_0))->set_string(((Text*)single_instance_369_11_0)->text+str_be_observant_to_any_potential_flaws_in_the_prison_security_be_resourceful_in_collecting_and_storing_things_you_might_need_to_aid_your_escape_be_patient_and_pick_the_precise_time_to_make_a_move_2521);
    }
    event_369_11_end: ;
}
// Function purpose: generated callback event_func_5557 processes event block(s) 371_11. Actions/conditions:
//        371_11: creates a buttons 699 object; sets the object's animation to 41.
void Frames::event_func_5557()
{
    // event 371_11 : creates a buttons 699 object; sets the object's animation to 41
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_371_11_end;
        if (is_key_pressed(SDLK_F1)) goto event_371_11_end;
        FrameObject * single_instance_371_11_0; single_instance_371_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buttons_699(parent->x + 0, parent->y + 60), parent->layer);
                if (single_instance_371_11_0 == NULL)
                    single_instance_371_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_371_11_0))->force_animation(41);
    }
    event_371_11_end: ;
}
// Function purpose: generated callback event_func_5558 processes event block(s) 372_11. Actions/conditions:
//        372_11: creates a dchar 688 object; positions the target object; updates a value on the target object; plus
//        5 more actions.
void Frames::event_func_5558()
{
    // event 372_11 : creates a dchar 688 object; positions the target object; updates a value on the target object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_372_11_end;
        if (is_key_pressed(SDLK_F1)) goto event_372_11_end;
        FrameObject * single_instance_372_11_0; single_instance_372_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + 64), parent->layer);
                if (single_instance_372_11_0 == NULL)
                    single_instance_372_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_372_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_372_11_0)), frame_left())+4);
        ((Text*)((Text*)single_instance_372_11_0))->blend_color.set(Color(192, 192, 192));
        ((Text*)((Text*)single_instance_372_11_0))->set_string(str_return_2522);
        ((Text*)((Text*)single_instance_372_11_0))->set_bold(1);
    }
    event_372_11_end: ;
}
void Frames::loop_menuhelp_11()
{
    event_func_2794();
    event_func_5517();
    event_func_5518();
    event_func_5519();
    event_func_5520();
    event_func_5521();
    event_func_5522();
    event_func_5523();
    event_func_5524();
    event_func_5525();
    event_func_5526();
    event_func_5527();
    event_func_5528();
    event_func_5529();
    event_func_5530();
    event_func_5531();
    event_func_5532();
    event_func_5533();
    event_func_5534();
    event_func_5535();
    event_func_5536();
    event_func_5537();
    event_func_5538();
    event_func_5539();
    event_func_5540();
    event_func_5541();
    event_func_5542();
    event_func_5543();
    event_func_5544();
    event_func_5545();
    event_func_5546();
    event_func_5547();
    event_func_5548();
    event_func_5549();
    event_func_5550();
    event_func_5551();
    event_func_5552();
    event_func_5553();
    event_func_5554();
    event_func_5555();
    event_func_5556();
    event_func_2799();
    event_func_5557();
    event_func_5558();
}
// Function purpose: generated callback event_func_5559 processes event block(s) 320_11. Actions/conditions:
//        320_11: creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more
//        actions.
void Frames::event_func_5559()
{
    // event 320_11 : creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_320_11_end;
        FrameObject * single_instance_320_11_0; single_instance_320_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + -5, parent->y + -80), parent->layer);
                if (single_instance_320_11_0 == NULL)
                    single_instance_320_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_320_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_320_11_0)), frame_left()));
        ((Text*)((Text*)single_instance_320_11_0))->set_bold(1);
        ((Text*)((Text*)single_instance_320_11_0))->blend_color.set(Color(243, 119, 0));
        ((Text*)((Text*)single_instance_320_11_0))->set_string(str_game_help_2523);
    }
    event_320_11_end: ;
}
// Function purpose: generated callback event_func_5560 processes event block(s) 321_11. Actions/conditions:
//        321_11: creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text
//        string; plus 1 more actions.
void Frames::event_func_5560()
{
    // event 321_11 : creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text string; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_321_11_end;
        FrameObject * single_instance_321_11_0; single_instance_321_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_tutorialDialogText(parent->x + -110, parent->y + -60), parent->layer);
                if (single_instance_321_11_0 == NULL)
                    single_instance_321_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_321_11_0))->blend_color.set(Color(210, 210, 210));
        ((Text*)((Text*)single_instance_321_11_0))->set_string(str_basic_controls_picking_up_dropping_using_items_combat_prison_routines_stats_training_heat_punishment_relationships_opinion_crafting_favours_2524);
        ((Text*)((Text*)single_instance_321_11_0))->set_string(((Text*)single_instance_321_11_0)->text+empty_string);
    }
    event_321_11_end: ;
}
// Function purpose: generated callback event_func_5561 processes event block(s) 322_11. Actions/conditions:
//        322_11: creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text
//        string; plus 1 more actions.
void Frames::event_func_5561()
{
    // event 322_11 : creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text string; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_322_11_end;
        FrameObject * single_instance_322_11_0; single_instance_322_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_tutorialDialogText(parent->x + 0, parent->y + -60), parent->layer);
                if (single_instance_322_11_0 == NULL)
                    single_instance_322_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_322_11_0))->blend_color.set(Color(210, 210, 210));
        ((Text*)((Text*)single_instance_322_11_0))->set_string(empty_string);
        ((Text*)((Text*)single_instance_322_11_0))->set_string(((Text*)single_instance_322_11_0)->text+str_prison_jobs_health_fatigue_weapons_outfits_buying_items_storing_items_contraband_detectors_stealing_and_looting_recruiting_buddies_escaping_2525);
    }
    event_322_11_end: ;
}
// Function purpose: generated callback event_func_5562 processes event block(s) 326_11. Actions/conditions:
//        326_11: sets the selected object's numeric value to 1.
void Frames::event_func_5562()
{
    // event 326_11 : sets the selected object's numeric value to 1
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_326_11_end;
        if (!(is_key_pressed(SDLK_F1))) goto event_326_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
        }
        {
            loop_menuhelp_running = true;
            int times = int(1);
            loop_menuhelp_index = 0;
            while (loop_menuhelp_index < times) {
                loop_menuhelp_11();
                if (!loop_menuhelp_running) break;
                loop_menuhelp_index++;
            }
        }
    }
    event_326_11_end: ;
}
void Frames::loop_basemenuhelp_11()
{
    event_func_2802();
    event_func_5559();
    event_func_5560();
    event_func_5561();
    event_func_2806();
    event_func_5557();
    event_func_5558();
    event_func_5562();
}
// Function purpose: generated callback event_func_5563 processes event block(s) 212_11. Actions/conditions:
//        212_11: sets the selected object's numeric value to gameVariables->get_value(625, BedID); sets
//        Nearest to gameVariables->get_value(622, range).
void Frames::event_func_5563()
{
    // event 212_11 : sets the selected object's numeric value to gameVariables->get_value(625, BedID); sets Nearest to gameVariables->get_value(622, range)
    {
        if (!(group_setup_1)) goto event_212_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(619, str_sees_1700)) == (1))) goto event_212_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(622, str_range_1703)) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(626, str_nearest_1707)))) goto event_212_11_end;
        desks_717_instances.clear_selection();
        for (ObjectIterator it(desks_717_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_desk_ids_index+1))) { it.deselect(); continue; }
        }
        if (!desks_717_instances.has_selection()) goto event_212_11_end;
        for (ObjectIterator it(desks_717_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(625, str_bedid_1706));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(626, str_nearest_1707, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(622, str_range_1703));
    }
    event_212_11_end: ;
}
void Frames::loop_nearest_bed_11()
{
    event_func_2549();
    event_func_2550();
    event_func_2551();
    event_func_5563();
}
// Function purpose: generated callback event_func_5564 processes event block(s) 208_11. Actions/conditions:
//        208_11: sets DeskX to ((Active*)get_single(desks_717_instances, default_active_instance))->get_x()+8; sets
//        DeskY to ((Active*)get_single(desks_717_instances, default_active_instance))->get_y()+8; sets BedID to 0;
//        plus 1 more actions.
void Frames::event_func_5564()
{
    // event 208_11 : sets DeskX to ((Active*)get_single(desks_717_instances, default_active_instance))->get_x()+8; sets DeskY to ((Active*)get_single(desks_717_instances, default_active_instance))->get_y()+8; sets BedID to 0; plus 1 more actions
    {
        if (!(group_setup_1)) goto event_208_11_end;
        desks_717_instances.clear_selection();
        for (ObjectIterator it(desks_717_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_desk_ids_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(16777216))) { it.deselect(); continue; }
        }
        if (!desks_717_instances.has_selection()) goto event_208_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(620, str_deskx_1701, ((Active*)get_single(desks_717_instances, default_active_instance))->get_x()+8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(621, str_desky_1702, ((Active*)get_single(desks_717_instances, default_active_instance))->get_y()+8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(625, str_bedid_1706, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(626, str_nearest_1707, 1000);
        {
            loop_nearest_bed_running = true;
            int times = int(inmateBed_instances.size());
            loop_nearest_bed_index = 0;
            while (loop_nearest_bed_index < times) {
                loop_nearest_bed_11();
                if (!loop_nearest_bed_running) break;
                loop_nearest_bed_index++;
            }
        }
    }
    event_208_11_end: ;
}
void Frames::loop_desk_ids_11()
{
    event_func_5564();
}
// Function purpose: generated callback event_func_5565 processes event block(s) 1566_11. Actions/conditions:
//        1566_11: sets AddSuccess to 0; sets SpeakText to INVENTORY FULL; plays a sound or music track.
void Frames::event_func_5565()
{
    // event 1566_11 : sets AddSuccess to 0; sets SpeakText to INVENTORY FULL; plays a sound or music track
    {
        if (!(group_loops_1)) goto event_1566_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) == (0))) goto event_1566_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(89, str_addsuccess_596, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, str_inventory_full_2526);
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
    event_1566_11_end: ;
}
// Function purpose: generated callback event_func_5566 processes event block(s) 1568_11. Actions/conditions:
//        1568_11: adds a itemshud 210 instance; sets the selected object's numeric value to
//        gameVariables->get_value(9, ItemID); enables flag -2 (legacy object-specific state; original label
//        was not retained) on the selected object; plus 13 more actions.
void Frames::event_func_5566()
{
    // event 1568_11 : adds a itemshud 210 instance; sets the selected object's numeric value to gameVariables->get_value(9, ItemID); enables flag -2 (legacy object-specific state; original label was not retained) on the selected object; plus 13 more actions
    {
        if (!(group_loops_1)) goto event_1568_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) > (0))) goto event_1568_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(479, str_offfloor_1354)) == (0))) goto event_1568_11_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_decay_1212)) == (0))) goto event_1568_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_1568_11_end;
        hudItem_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_itemshud_687(-16, -16), 5);
            hudItem_instances.add_back();
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445));
            ((Active*)*it)->alterables->flags.enable(-2);
            ((Active*)*it)->alterables->values.set(7, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(480, str_itemhp_1355));
            ((Active*)*it)->alterables->values.set(6, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(481, str_itemillegal_1356));
            ((Active*)*it)->alterables->strings.set(0, str_inven_820);
            ((Active*)*it)->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832));
            ((Active*)*it)->alterables->strings.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(102, str_itemnameappend_636));
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_1568_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1568_11_1: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(-5);
        }
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)), number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445))+str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(480, str_itemhp_1355)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(102, str_itemnameappend_636, empty_string);
    }
    event_1568_11_end: ;
}
// Function purpose: generated callback event_func_5567 processes event block(s) 1569_11. Actions/conditions:
//        1569_11: adds a itemshud 210 instance; sets the selected object's numeric value to
//        gameVariables->get_value(9, ItemID); enables flag -2 (legacy object-specific state; original label
//        was not retained) on the selected object; plus 14 more actions.
void Frames::event_func_5567()
{
    // event 1569_11 : adds a itemshud 210 instance; sets the selected object's numeric value to gameVariables->get_value(9, ItemID); enables flag -2 (legacy object-specific state; original label was not retained) on the selected object; plus 14 more actions
    {
        if (!(group_loops_1)) goto event_1569_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) > (0))) goto event_1569_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(479, str_offfloor_1354)) == (1))) goto event_1569_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_1569_11_end;
        hudItem_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_itemshud_687(-16, -16), 5);
            hudItem_instances.add_back();
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445));
            ((Active*)*it)->alterables->flags.enable(-2);
            ((Active*)*it)->alterables->values.set(7, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(480, str_itemhp_1355));
            ((Active*)*it)->alterables->values.set(6, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(481, str_itemillegal_1356));
            ((Active*)*it)->alterables->strings.set(0, str_inven_820);
            ((Active*)*it)->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832));
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_1569_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1569_11_1: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(102, str_itemnameappend_636));
            ((Active*)*it)->alterables->flags.enable(-5);
        }
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)), number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445))+str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(480, str_itemhp_1355)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(480, str_itemhp_1355, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(102, str_itemnameappend_636, empty_string);
    }
    event_1569_11_end: ;
}
// Function purpose: generated callback event_func_5568 processes event block(s) 1570_11. Actions/conditions:
//        1570_11: sets source to Misc entry 25; sets a game or interface text string; sets SpeakText to
//        gameVariables->get_string(81, source); plus 1 more actions.
void Frames::event_func_5568()
{
    // event 1570_11 : sets source to Misc entry 25; sets a game or interface text string; sets SpeakText to gameVariables->get_string(81, source); plus 1 more actions
    {
        if (!(group_loops_1)) goto event_1570_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(479, str_offfloor_1354)) == (0))) goto event_1570_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) > (0))) goto event_1570_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(482, str_newitemhp_1357)) <= (0))) goto event_1570_11_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_decay_1212)) > (0))) goto event_1570_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_25_1214));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_item_1215, lowercase_string(((INI*)get_instance(itemData_instances))->get_string(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_name_103))));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(479, str_offfloor_1354, 0);
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
    }
    event_1570_11_end: ;
}
// Function purpose: generated callback event_func_5569 processes event block(s) 1571_11. Actions/conditions:
//        1571_11: adds a itemshud 210 instance; sets the selected object's numeric value to
//        gameVariables->get_value(9, ItemID); enables flag -2 (legacy object-specific state; original label
//        was not retained) on the selected object; plus 14 more actions.
void Frames::event_func_5569()
{
    // event 1571_11 : adds a itemshud 210 instance; sets the selected object's numeric value to gameVariables->get_value(9, ItemID); enables flag -2 (legacy object-specific state; original label was not retained) on the selected object; plus 14 more actions
    {
        if (!(group_loops_1)) goto event_1571_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(479, str_offfloor_1354)) == (0))) goto event_1571_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) > (0))) goto event_1571_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(482, str_newitemhp_1357)) > (0))) goto event_1571_11_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_decay_1212)) > (0))) goto event_1571_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_1571_11_end;
        hudItem_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_itemshud_687(-16, -16), 5);
            hudItem_instances.add_back();
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445));
            ((Active*)*it)->alterables->flags.enable(-2);
            ((Active*)*it)->alterables->values.set(7, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(482, str_newitemhp_1357));
            ((Active*)*it)->alterables->values.set(6, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(481, str_itemillegal_1356));
            ((Active*)*it)->alterables->strings.set(0, str_inven_820);
            ((Active*)*it)->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832));
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_1571_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1571_11_1: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(102, str_itemnameappend_636));
            ((Active*)*it)->alterables->flags.enable(-5);
        }
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)), number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445))+str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(482, str_newitemhp_1357)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(482, str_newitemhp_1357, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(102, str_itemnameappend_636, empty_string);
    }
    event_1571_11_end: ;
}
void Frames::loop_inv_add_11()
{
    event_func_1874();
    event_func_5565();
    event_func_1876();
    event_func_5566();
    event_func_5567();
    event_func_5568();
    event_func_5569();
}
// Function purpose: generated callback event_func_5570 processes event block(s) 1396_11. Actions/conditions:
//        1396_11: checks scene is active; game state NewItemHP; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_5570()
{
    // event 1396_11 : checks scene is active; game state NewItemHP; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_1396_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(482, str_newitemhp_1357)) > (0))) goto event_1396_11_end;
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_add_running = true;
            int times = int(1);
            loop_inv_add_index = 0;
            while (loop_inv_add_index < times) {
                loop_inv_add_11();
                if (!loop_inv_add_running) break;
                loop_inv_add_index++;
            }
        }
    }
    event_1396_11_end: ;
}
void Frames::loop_inv_add_ifhpok_11()
{
    event_func_5570();
}
// Function purpose: generated callback event_func_5571 processes event block(s) 1086_11. Actions/conditions:
//        1086_11: splits saved text into fields; activates the get(0 event group; creates a itemshud 687 object; plus
//        13 more actions.
void Frames::event_func_5571()
{
    // event 1086_11 : splits saved text into fields; activates the get(0 event group; creates a itemshud 687 object; plus 13 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1086_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_fill_container_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_container_613))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_1086_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_container_613+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(337, str_currentcontainer_1126))+str_slot_617+number_to_string(loop_fill_container_index+1))) != (empty_string))) goto event_1086_11_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_container_613+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(337, str_currentcontainer_1126))+str_slot_617+number_to_string(loop_fill_container_index+1)), str__96);
        ((INI*)get_instance(itemData_instances))->set_group(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        FrameObject * single_instance_1086_11_0; single_instance_1086_11_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemshud_687(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1086_11_0 == NULL)
                    single_instance_1086_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1086_11_0))->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((Active*)((Active*)single_instance_1086_11_0))->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((Active*)((Active*)single_instance_1086_11_0))->alterables->values.set(1, loop_fill_container_index+1);
        ((Active*)((Active*)single_instance_1086_11_0))->alterables->values.set(6, ((INI*)get_instance(itemData_instances))->get_value_int(str_illegal_618));
        ((Active*)((Active*)single_instance_1086_11_0))->alterables->strings.set(0, str_container_613);
        ((Active*)((Active*)single_instance_1086_11_0))->alterables->strings.set(1, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2));
        ((Active*)((Active*)single_instance_1086_11_0))->alterables->flags.enable(-2);
        ((Active*)((Active*)single_instance_1086_11_0))->force_animation(get_floor(((Active*)single_instance_1086_11_0)->alterables->values.get(2)/MathHelper()/32));
        ((Active*)((Active*)single_instance_1086_11_0))->set_direction(((Active*)single_instance_1086_11_0)->alterables->values.get(2)%MathHelper()%32);
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
    }
    event_1086_11_end: ;
}
void Frames::loop_fill_container_11()
{
    event_func_5571();
}
// Function purpose: generated callback event_func_5572 processes event block(s) 1080_11. Actions/conditions:
//        1080_11: sets SpeakText to Infirmary staff only!; plays a sound or music track.
void Frames::event_func_5572()
{
    // event 1080_11 : sets SpeakText to Infirmary staff only!; plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1080_11_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) != (str_38_1205))) goto event_1080_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, str_infirmary_staff_only_2527);
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
    event_1080_11_end: ;
}
// Function purpose: generated callback event_func_5573 processes event block(s) 1081_11. Actions/conditions:
//        1081_11: sets the object's animation to 23; sets the selected object's visibility to true; adds a dchar 214
//        instance; plus 8 more actions.
void Frames::event_func_5573()
{
    // event 1081_11 : sets the object's animation to 23; sets the selected object's visibility to true; adds a dchar 214 instance; plus 8 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1081_11_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) == (str_38_1205))) goto event_1081_11_end;
        ((Active*)get_instance(dialogPanel_instances))->force_animation(23);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_688(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((Active*)get_instance(containermedical_269_instances, it.current_index, default_active_instance))->alterables->strings.get(0));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+4);
            ((Text*)*it)->set_visible(true);
        }
        {
            loop_build_container_running = true;
            int times = int(20);
            loop_build_container_index = 0;
            while (loop_build_container_index < times) {
                loop_build_container_6();
                if (!loop_build_container_running) break;
                loop_build_container_index++;
            }
        }
        {
            loop_fill_container_running = true;
            int times = int(20);
            loop_fill_container_index = 0;
            while (loop_fill_container_index < times) {
                loop_fill_container_11();
                if (!loop_fill_container_running) break;
                loop_fill_container_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_1081_11_end: ;
}
void Frames::loop_medibox_check_11()
{
    event_func_1445();
    event_func_5572();
    event_func_5573();
}
// Function purpose: generated callback event_func_5574 processes event block(s) 454_11. Actions/conditions:
//        454_11: sets Chipping to 0; sets Weeding to 0; sets Cleaning to 0; plus 9 more actions.
void Frames::event_func_5574()
{
    // event 454_11 : sets Chipping to 0; sets Weeding to 0; sets Cleaning to 0; plus 9 more actions
    {
        if (!(group_code_1)) goto event_454_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(155, str_chipping_728, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(433, str_weeding_1276, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(359, str_cleaning_23, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(153, str_digging_726, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(360, str_reading_1154, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(361, str_browsing_1155, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(154, str_cutting_727, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(156, str_unscrewing_729, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(362, str_searching_desk_1156, 0);
        {
            loop_close_activity_box_running = true;
            int times = int(1);
            loop_close_activity_box_index = 0;
            while (loop_close_activity_box_index < times) {
                loop_close_activity_box_6();
                if (!loop_close_activity_box_running) break;
                loop_close_activity_box_index++;
            }
        }
    }
    event_454_11_end: ;
}
void Frames::loop_cancel_actions_11()
{
    event_func_5574();
}
// Function purpose: generated callback event_func_5575 processes event block(s) 1134_11. Actions/conditions:
//        1134_11: increments Score_P by 10; changes a stored game value; increments Cash by
//        string_to_number(stringtokenizer_81->get(3)); plus 22 more actions.
void Frames::event_func_5575()
{
    // event 1134_11 : increments Score_P by 10; changes a stored game value; increments Cash by string_to_number(stringtokenizer_81->get(3)); plus 22 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1134_11_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_stealchar_1264))) goto event_1134_11_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)) == (number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(337, str_currentcontainer_1126))))) goto event_1134_11_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6)) == (number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(647, str_curritem_1747))))) goto event_1134_11_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(5))))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1134_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(418, str_score_p_1236, 10);
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 15);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(219, str_cash_11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((Active*)get_instance(dialogPanel_instances))->force_animation(12);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        FrameObject * single_instance_1134_11_0; single_instance_1134_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_tutorialDialogText(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1134_11_0 == NULL)
                    single_instance_1134_11_0 = new_obj;
            }
        }
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            if (parent == NULL) goto pos_end_1134_11_1;
            ((Text*)single_instance_1134_11_0)->set_global_position(parent->get_x() + -110, parent->get_y() + -18);
            pos_end_1134_11_1: ;
        }
        ((Text*)((Text*)single_instance_1134_11_0))->blend_color.set(Color(60, 60, 60));
        ((Text*)((Text*)single_instance_1134_11_0))->set_string(str_you_have_completed_the_favour_for_1237+((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(0)+str_and_earned_yourself_1238+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)+str__918);
        {
            loop_mish_del_stuff_running = true;
            int times = int(1);
            loop_mish_del_stuff_index = 0;
            while (loop_mish_del_stuff_index < times) {
                loop_mish_del_stuff_6();
                if (!loop_mish_del_stuff_running) break;
                loop_mish_del_stuff_index++;
            }
        }
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_688(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_y()-38);
            ((Text*)*it)->set_bold(1);
            ((Text*)*it)->blend_color.set(Color(0, 128, 0));
            ((Text*)*it)->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_favour_box_1089, str_6_241)));
        }
        FrameObject * single_instance_1134_11_3; single_instance_1134_11_3 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buttons_699(parent->x + 28, parent->y + 20), parent->layer);
                if (single_instance_1134_11_3 == NULL)
                    single_instance_1134_11_3 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1134_11_3))->force_animation(28);
        FrameObject * single_instance_1134_11_4; single_instance_1134_11_4 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_1134_11_3)->x + 3, ((Active*)single_instance_1134_11_3)->y + 3), ((Active*)single_instance_1134_11_3)->layer);
            if (single_instance_1134_11_4 == NULL)
                single_instance_1134_11_4 = new_obj;
        }
        ((Text*)((Text*)single_instance_1134_11_4))->blend_color.set(Color(98, 154, 3));
        ((Text*)((Text*)single_instance_1134_11_4))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_pausemenu_1094, str_1_97)));
        ((ListObject*)get_instance(missions_298_instances))->delete_line(loop_retrieve_mission_index+1);
            loop_retrieve_mission_running = false;
    
        media.play_id(SOUND_ACCOLADE_9, 1-1);
    }
    event_1134_11_end: ;
}
void Frames::loop_retrieve_mission_11()
{
    event_func_2647();
    event_func_5575();
}
// Function purpose: generated callback event_func_5576 processes event block(s) 1063_11. Actions/conditions:
//        1063_11: sets Digging to 100; sets the object's animation to 12; sets the selected object's direction to
//        get_direction_int(selected object->x, selected object->y, cursor_178->x + 8, cursor_178->y + 8); plus 1 more
//        actions.
void Frames::event_func_5576()
{
    // event 1063_11 : sets Digging to 100; sets the object's animation to 12; sets the selected object's direction to get_direction_int(selected object->x, selected object->y, cursor_178->x + 8, cursor_178->y + 8); plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1063_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(153, str_digging_726, 100);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(cursor_178_instances))->x + 8, ((Active*)get_instance(cursor_178_instances))->y + 8));
        }
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_itemhp_running = true;
            int times = int(1);
            loop_itemhp_index = 0;
            while (loop_itemhp_index < times) {
                loop_itemhp_11();
                if (!loop_itemhp_running) break;
                loop_itemhp_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(402, str_actype_1216, ((INI*)get_instance(translationData_instances))->get_string(str_action_857, str_2_155));
        {
            loop_create_activity_box_running = true;
            int times = int(1);
            loop_create_activity_box_index = 0;
            while (loop_create_activity_box_index < times) {
                loop_create_activity_box_11();
                if (!loop_create_activity_box_running) break;
                loop_create_activity_box_index++;
            }
        }
    }
    event_1063_11_end: ;
}
void Frames::loop_digbelow_check_11()
{
    event_func_5576();
}
// Function purpose: generated callback event_func_5577 processes event block(s) 615_11. Actions/conditions:
//        615_11: sets the selected object's horizontal position to ((selected object->get_x()/MathHelper()/16)*16)+8;
//        sets the selected object's vertical position to ((selected object->get_y()/MathHelper()/16)*16)+8; stops the
//        object's movement; plus 23 more actions.
void Frames::event_func_5577()
{
    // event 615_11 : sets the selected object's horizontal position to ((selected object->get_x()/MathHelper()/16)*16)+8; sets the selected object's vertical position to ((selected object->get_y()/MathHelper()/16)*16)+8; stops the object's movement; plus 23 more actions
    {
        if (!(group_code_1)) goto event_615_11_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_instance(target_177_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_615_11_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_instance(target_177_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_615_11_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->set_x(((((Active*)*it)->get_x()/MathHelper()/16)*16)+8);
            ((Active*)*it)->set_y(((((Active*)*it)->get_y()/MathHelper()/16)*16)+8);
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(18, -1);
            ((Active*)*it)->alterables->values.set(15, 0);
            ((Active*)*it)->alterables->values.set(16, -1000000);
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.set(24, 0);
            ((Active*)*it)->alterables->flags.disable(60);
            ((Active*)*it)->alterables->flags.disable(25);
            ((Active*)*it)->alterables->flags.disable(250);
            ((Active*)*it)->alterables->flags.disable(251);
            ((Active*)*it)->set_direction(0);
        }
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->set_direction(0);
        }
        FrameObject * single_instance_615_11_0; single_instance_615_11_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + -8, parent->y + 8), parent->layer);
                if (single_instance_615_11_0 == NULL)
                    single_instance_615_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_615_11_0))->set_layer(((Active*)get_single(qualifier_3, default_active_instance))->layer->index+1-1);
        FrameObject * single_instance_615_11_1; single_instance_615_11_1 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_615_11_1 == NULL)
                    single_instance_615_11_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_615_11_1))->set_layer(((Active*)get_single(qualifier_3, default_active_instance))->layer->index+1-1);
        ((Active*)get_instance(target_177_instances))->set_visible(false);
        ((Active*)get_instance(target_177_instances))->alterables->values.set(0, 0);
        ((Counter*)get_instance(counter2_257_instances))->set_visible(false);
        media.play_id(SOUND_HIT_2, 1-1);
    }
    event_615_11_end: ;
}
void Frames::loop_you_attack_deadcheck_11()
{
    event_func_5577();
}
// Function purpose: generated callback event_func_5578 processes event block(s) 1523_11. Actions/conditions:
//        1523_11: sets input to gameVariables->get_string(349, SpeakText); sets SpeakText to
//        gameVariables->get_string(348, output).
void Frames::event_func_5578()
{
    // event 1523_11 : sets input to gameVariables->get_string(349, SpeakText); sets SpeakText to gameVariables->get_string(348, output)
    {
        if (!(group_code_1)) goto event_1523_11_end;
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
    }
    event_1523_11_end: ;
}
// Function purpose: generated callback event_func_5579 processes event block(s) 1525_11. Actions/conditions:
//        1525_11: sets the selected object's numeric value to 150; adds a activesystembox 450 instance; sets the
//        selected object's numeric value to ((Active*)get_single(qualifier_14, it.current_index,
//        default_active_instance))->alterables->values.get(25); plus 8 more actions.
void Frames::event_func_5579()
{
    // event 1525_11 : sets the selected object's numeric value to 150; adds a activesystembox 450 instance; sets the selected object's numeric value to ((Active*)get_single(qualifier_14, it.current_index, default_active_instance))->alterables->values.get(25); plus 8 more actions
    {
        if (!(group_code_1)) goto event_1525_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(350, str_speakcol_1143)) == (0))) goto event_1525_11_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(351, str_speakid_1144)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1525_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1525_11_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(22, 150);
        }
        activesystembox_450_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_activesystembox_450(0, 0), 5);
            activesystembox_450_instances.add_back();
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(0, ((Active*)get_single(qualifier_14, it.current_index, default_active_instance))->alterables->values.get(25));
        }
        ((SystemBox*)get_single(activesystembox_450_instances, default_systembox_instance))->move_back(((Active*)get_instance(sidePanel_instances)));
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142));
            ((SystemBox*)*it)->alterables->values.set(1, 80+string_size(((SystemBox*)*it)->text));
            ((SystemBox*)*it)->set_fill(Color(make_color_int(255, 255, 255)));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
        }
    }
    event_1525_11_end: ;
}
// Function purpose: generated callback event_func_5580 processes event block(s) 1526_11. Actions/conditions:
//        1526_11: sets the selected object's numeric value to 150; adds a activesystembox 450 instance; sets the
//        selected object's numeric value to ((Active*)get_single(qualifier_14, it.current_index,
//        default_active_instance))->alterables->values.get(25); plus 7 more actions.
void Frames::event_func_5580()
{
    // event 1526_11 : sets the selected object's numeric value to 150; adds a activesystembox 450 instance; sets the selected object's numeric value to ((Active*)get_single(qualifier_14, it.current_index, default_active_instance))->alterables->values.get(25); plus 7 more actions
    {
        if (!(group_code_1)) goto event_1526_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(350, str_speakcol_1143)) == (1))) goto event_1526_11_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(351, str_speakid_1144)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1526_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1526_11_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(22, 150);
        }
        activesystembox_450_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_activesystembox_450(0, 0), 5);
            activesystembox_450_instances.add_back();
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(0, ((Active*)get_single(qualifier_14, it.current_index, default_active_instance))->alterables->values.get(25));
        }
        ((SystemBox*)get_single(activesystembox_450_instances, default_systembox_instance))->move_back(((Active*)get_instance(sidePanel_instances)));
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142));
            ((SystemBox*)*it)->alterables->values.set(1, 80+string_size(((SystemBox*)*it)->text));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
        }
    }
    event_1526_11_end: ;
}
// Function purpose: generated callback event_func_5581 processes event block(s) 1527_11. Actions/conditions:
//        1527_11: sets TellOff to 0.
void Frames::event_func_5581()
{
    // event 1527_11 : sets TellOff to 0
    {
        if (!(group_code_1)) goto event_1527_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(352, str_telloff_1145, 0);
    }
    event_1527_11_end: ;
}
void Frames::loop_speak_11()
{
    event_func_5578();
    event_func_1314();
    event_func_5579();
    event_func_5580();
    event_func_5581();
}
// Function purpose: generated callback event_func_5582 processes event block(s) 609_11. Actions/conditions:
//        609_11: increments Heat by 25; sets m_done to 0; sets m_cash to 0; plus 1 more actions.
void Frames::event_func_5582()
{
    // event 609_11 : increments Heat by 25; sets m_done to 0; sets m_cash to 0; plus 1 more actions
    {
        if (!(group_code_1)) goto event_609_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(683, str_targdist_1787)) <= (20))) goto event_609_11_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_instance(target_177_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) != (-1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_609_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(32, str_heat_495, 25);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(417, str_m_done_1235, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(416, str_m_cash_1234, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(142, str_del_missions_708, empty_string);
    }
    event_609_11_end: ;
}
// Function purpose: generated callback event_func_5583 processes event block(s) 613_11. Actions/conditions:
//        613_11: activates the Attacked event group; sets SpeakID to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(25); sets SpeakCol to 0; plus 1 more actions.
void Frames::event_func_5583()
{
    // event 613_11 : activates the Attacked event group; sets SpeakID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25); sets SpeakCol to 0; plus 1 more actions
    {
        if (!(group_code_1)) goto event_613_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(683, str_targdist_1787)) <= (20))) goto event_613_11_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_instance(target_177_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) != (-1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_613_11_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_attacked_1243);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        {
            loop_speak_running = true;
            int times = int(1);
            loop_speak_index = 0;
            while (loop_speak_index < times) {
                loop_speak_11();
                if (!loop_speak_running) break;
                loop_speak_index++;
            }
        }
    }
    event_613_11_end: ;
}
// Function purpose: generated callback event_func_5584 processes event block(s) 614_11. Actions/conditions:
//        614_11: sets the_dmg to 100; sets the selected object's numeric value to
//        55-(playerBase->alterables->values.get(9)/MathHelper()/3); sets the target object's direction; plus 20 more
//        actions.
void Frames::event_func_5584()
{
    // event 614_11 : sets the_dmg to 100; sets the selected object's numeric value to 55-(playerBase->alterables->values.get(9)/MathHelper()/3); sets the target object's direction; plus 20 more actions
    {
        if (!(group_code_1)) goto event_614_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(683, str_targdist_1787)) <= (20))) goto event_614_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(3)) <= (0))) goto event_614_11_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_instance(target_177_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_614_11_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_instance(target_177_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_614_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(685, str_the_dmg_1789, 100);
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(3, 55-(((Active*)get_instance(playerBase_instances))->alterables->values.get(9)/MathHelper()/3));
        // icache destruction
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_single(qualifier_14, it.current_index))->x + 0, ((Active*)get_single(qualifier_14, it.current_index))->y + 0));
            ((Active*)*it)->force_animation(6);
        }
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(22, 0);
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_instance(playerBase_instances))->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_instance(playerBase_instances))->get_y());
            ((Active*)*it)->alterables->values.set(21, 80);
            ((Active*)*it)->alterables->values.set(4, 100);
            ((Active*)*it)->alterables->values.sub(7, get_max(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(685, str_the_dmg_1789)));
        }
        FrameObject * single_instance_614_11_0; single_instance_614_11_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fx_185(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_614_11_0 == NULL)
                    single_instance_614_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_614_11_0))->destroy();
        FrameObject * single_instance_614_11_1; single_instance_614_11_1 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dmgagainst_253(parent->x + -15, parent->y + -20), parent->layer);
                if (single_instance_614_11_1 == NULL)
                    single_instance_614_11_1 = new_obj;
            }
        }
        ((TextBlitter*)((TextBlitter*)single_instance_614_11_1))->set_text(str__1405+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(685, str_the_dmg_1789)));
        ((TextBlitter*)((TextBlitter*)single_instance_614_11_1))->set_x(((TextBlitter*)single_instance_614_11_1)->get_x()+randrange_event(10));
        ((TextBlitter*)((TextBlitter*)single_instance_614_11_1))->set_layer(6-1);
        dust_223_instances.empty_selection();
        // select single: false true false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + -6, parent->y + 6), parent->layer);
                dust_223_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 6, parent->y + 6), parent->layer);
                dust_223_instances.add_back();
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(515, str_inrange_1413, 0);
        {
            loop_you_attack_deadcheck_running = true;
            int times = int(1);
            loop_you_attack_deadcheck_index = 0;
            while (loop_you_attack_deadcheck_index < times) {
                loop_you_attack_deadcheck_11();
                if (!loop_you_attack_deadcheck_running) break;
                loop_you_attack_deadcheck_index++;
            }
        }
        {
            loop_you_hit_anim_running = true;
            int times = int(1);
            loop_you_hit_anim_index = 0;
            while (loop_you_hit_anim_index < times) {
                loop_you_hit_anim_6();
                if (!loop_you_hit_anim_running) break;
                loop_you_hit_anim_index++;
            }
        }
    }
    event_614_11_end: ;
}
void Frames::loop_you_attack_11()
{
    event_func_2736();
    event_func_2737();
    event_func_5582();
    event_func_2739();
    event_func_2740();
    event_func_2741();
    event_func_5583();
    event_func_5584();
}
// Function purpose: generated callback event_func_5585 processes event block(s) 1557_11. Actions/conditions:
//        1557_11: splits saved text into fields; activates the get(0 event group; creates a itemshud 687 object; plus
//        10 more actions.
void Frames::event_func_5585()
{
    // event 1557_11 : splits saved text into fields; activates the get(0 event group; creates a itemshud 687 object; plus 10 more actions
    {
        if (!(group_loops_1)) goto event_1557_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_refresh_inv_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_1557_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inv_512+number_to_string(loop_refresh_inv_index+1))) != (empty_string))) goto event_1557_11_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inv_512+number_to_string(loop_refresh_inv_index+1)), str__96);
        ((INI*)get_instance(itemData_instances))->set_group(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        FrameObject * single_instance_1557_11_0; single_instance_1557_11_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemshud_687(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1557_11_0 == NULL)
                    single_instance_1557_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1557_11_0))->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((Active*)((Active*)single_instance_1557_11_0))->alterables->strings.set(0, str_inven_820);
        ((Active*)((Active*)single_instance_1557_11_0))->alterables->values.set(1, loop_refresh_inv_index+1);
        ((Active*)((Active*)single_instance_1557_11_0))->alterables->values.set(6, ((INI*)get_instance(itemData_instances))->get_value_int(str_illegal_618));
        ((Active*)((Active*)single_instance_1557_11_0))->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((Active*)((Active*)single_instance_1557_11_0))->alterables->flags.enable(-2);
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
    }
    event_1557_11_end: ;
}
void Frames::loop_refresh_inv_11()
{
    event_func_1354();
    event_func_5585();
    event_func_1356();
    event_func_1357();
}
// Function purpose: generated callback event_func_5586 processes event block(s) 1491_11. Actions/conditions:
//        1491_11: sets a game or interface text string; removes the selected object.
void Frames::event_func_5586()
{
    // event 1491_11 : sets a game or interface text string; removes the selected object
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1491_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_give_1349))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_1491_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(502, str_give_item_1383, number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7)));
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        {
            loop_return_give_item_running = true;
            int times = int(6);
            loop_return_give_item_index = 0;
            while (loop_return_give_item_index < times) {
                loop_return_give_item_6();
                if (!loop_return_give_item_running) break;
                loop_return_give_item_index++;
            }
        }
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_refresh_inv_running = true;
            int times = int(6);
            loop_refresh_inv_index = 0;
            while (loop_refresh_inv_index < times) {
                loop_refresh_inv_11();
                if (!loop_refresh_inv_running) break;
                loop_refresh_inv_index++;
            }
        }
    }
    event_1491_11_end: ;
}
void Frames::loop_stats_close_npc_11()
{
    event_func_1991();
    event_func_1992();
    event_func_5586();
    event_func_1994();
    event_func_1995();
    event_func_1303();
    event_func_1304();
    event_func_1996();
    event_func_1997();
    event_func_1998();
    event_func_1999();
}
// Function purpose: generated callback event_func_5587 processes event block(s) 1305_11. Actions/conditions:
//        1305_11: adds a soil 173 instance; sets the object position in the world; draws the selected image or tile;
//        plus 1 more actions.
void Frames::event_func_5587()
{
    // event 1305_11 : adds a soil 173 instance; sets the object position in the world; draws the selected image or tile; plus 1 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_1305_11_end;
        usespot_208_instances.clear_selection();
        dighole_207_instances.clear_selection();
        if (!check_overlap(usespot_208_instances, dighole_207_instances)) goto event_1305_11_end;
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_1305_11_end;
        soil_173_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_soil_675(0, 0), 0);
            soil_173_instances.add_back();
        }
        for (ObjectIterator it(soil_173_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(usespot_208_instances, it.current_index));
            if (parent == NULL) goto pos_end_1305_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1305_11_1: ;
        }
        for (ObjectIterator it(soil_173_instances); !it.end(); ++it) {
            ((Active*)*it)->paste(0);
            ((Active*)*it)->destroy();
        }
    }
    event_1305_11_end: ;
}
void Frames::loop_dighole_11()
{
    event_func_2841();
    event_func_5587();
    event_func_2843();
    event_func_2605();
    event_func_2606();
    event_func_5410();
}
// Function purpose: generated callback event_func_5588 processes event block(s) 1024_11. Actions/conditions:
//        1024_11: sets IconX to ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x();
//        sets IconY to ((Active*)get_single(inmateBase_instances, default_active_instance))->get_y(); sets IconZ
//        to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25).
void Frames::event_func_5588()
{
    // event 1024_11 : sets IconX to ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x(); sets IconY to ((Active*)get_single(inmateBase_instances, default_active_instance))->get_y(); sets IconZ to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25)
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1024_11_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1024_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(343, str_iconx_1136, ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(344, str_icony_1137, ((Active*)get_single(inmateBase_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(345, str_iconz_1138, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
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
    event_1024_11_end: ;
}
void Frames::loop_npc_talk_2_11()
{
    event_func_5588();
}
// Function purpose: generated callback event_func_5589 processes event block(s) 1022_11. Actions/conditions:
//        1022_11: activates the Rep_+number_to_string(get_value(632, pRep event group; sets SpeakCol to 0; sets
//        SpeakID to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(25); plus 6 more actions.
void Frames::event_func_5589()
{
    // event 1022_11 : activates the Rep_+number_to_string(get_value(632, pRep event group; sets SpeakCol to 0; sets SpeakID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25); plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1022_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_1022_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(631, str_convtype_1717)) == (0))) goto event_1022_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(630, str_hasmission_1716)) == (0))) goto event_1022_11_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(25))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1022_11_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_rep_1718+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(632, str_prep_1719)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(1+randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885)))));
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(playerBase_instances))->x + 0, ((Active*)get_instance(playerBase_instances))->y + 0));
            ((Active*)*it)->alterables->values.add(12, 0.5);
        }
        {
            loop_npc_talk_2_running = true;
            int times = int(1);
            loop_npc_talk_2_index = 0;
            while (loop_npc_talk_2_index < times) {
                loop_npc_talk_2_11();
                if (!loop_npc_talk_2_running) break;
                loop_npc_talk_2_index++;
            }
        }
        {
            loop_speak_running = true;
            int times = int(1);
            loop_speak_index = 0;
            while (loop_speak_index < times) {
                loop_speak_11();
                if (!loop_speak_running) break;
                loop_speak_index++;
            }
        }
    }
    event_1022_11_end: ;
}
// Function purpose: generated callback event_func_5590 processes event block(s) 1023_11. Actions/conditions:
//        1023_11: activates the Banter event group; sets SpeakID to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(25); sets SpeakCol to 0; plus 9 more actions.
void Frames::event_func_5590()
{
    // event 1023_11 : activates the Banter event group; sets SpeakID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25); sets SpeakCol to 0; plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1023_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_1023_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(631, str_convtype_1717)) == (1))) goto event_1023_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(630, str_hasmission_1716)) == (0))) goto event_1023_11_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(25))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1023_11_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_banter_1306);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(1+randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885)))));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142), str_guard_1198, ((ListObject*)get_instance(listguards_218_instances))->get_line(randrange_event(((ListObject*)get_instance(listguards_218_instances))->get_count()))));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142), str_inmate_1199, ((ListObject*)get_instance(listinmates_217_instances))->get_line(1+randrange_event(((ListObject*)get_instance(listinmates_217_instances))->get_count()))));
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(playerBase_instances))->x + 0, ((Active*)get_instance(playerBase_instances))->y + 0));
            ((Active*)*it)->alterables->values.add(12, 0.5);
            ((Active*)*it)->get_movement()->stop(false);
        }
        {
            loop_npc_talk_2_running = true;
            int times = int(1);
            loop_npc_talk_2_index = 0;
            while (loop_npc_talk_2_index < times) {
                loop_npc_talk_2_11();
                if (!loop_npc_talk_2_running) break;
                loop_npc_talk_2_index++;
            }
        }
        {
            loop_speak_running = true;
            int times = int(1);
            loop_speak_index = 0;
            while (loop_speak_index < times) {
                loop_speak_11();
                if (!loop_speak_running) break;
                loop_speak_index++;
            }
        }
    }
    event_1023_11_end: ;
}
// Function purpose: generated callback event_func_5591 processes event block(s) 1025_11. Actions/conditions:
//        1025_11: activates the Outfit_Inmate event group; sets SpeakID to
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25); sets
//        SpeakCol to 0; plus 6 more actions.
void Frames::event_func_5591()
{
    // event 1025_11 : activates the Outfit_Inmate event group; sets SpeakID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25); sets SpeakCol to 0; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1025_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) != (-1))) goto event_1025_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(630, str_hasmission_1716)) == (0))) goto event_1025_11_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(25))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1025_11_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_outfit_inmate_1720);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(1+randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885)))));
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(playerBase_instances))->x + 0, ((Active*)get_instance(playerBase_instances))->y + 0));
            ((Active*)*it)->get_movement()->stop(false);
        }
        {
            loop_speak_running = true;
            int times = int(1);
            loop_speak_index = 0;
            while (loop_speak_index < times) {
                loop_speak_11();
                if (!loop_speak_running) break;
                loop_speak_index++;
            }
        }
    }
    event_1025_11_end: ;
}
void Frames::loop_npc_talk_11()
{
    event_func_2573();
    event_func_2574();
    event_func_5589();
    event_func_5590();
    event_func_5591();
}
// Function purpose: generated callback event_func_5592 processes event block(s) 1016_11. Actions/conditions:
//        1016_11: plays a sound or music track.
void Frames::event_func_5592()
{
    // event 1016_11 : plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1016_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(260, str_cansee_915)) == (1))) goto event_1016_11_end;
        {
            loop_npc_talk_running = true;
            int times = int(1);
            loop_npc_talk_index = 0;
            while (loop_npc_talk_index < times) {
                loop_npc_talk_11();
                if (!loop_npc_talk_running) break;
                loop_npc_talk_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_1016_11_end: ;
}
void Frames::loop_talk_loop_11()
{
    event_func_5592();
}
// Function purpose: generated callback event_func_5593 processes event block(s) 1311_11. Actions/conditions:
//        1311_11: adds a dighole 207 instance; sets the object position in the world; sets the selected object's
//        layer to playerBase->layer->index+1-1; plus 8 more actions.
void Frames::event_func_5593()
{
    // event 1311_11 : adds a dighole 207 instance; sets the object position in the world; sets the selected object's layer to playerBase->layer->index+1-1; plus 8 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_1311_11_end;
        dighole_207_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dighole_207(-16, -16), 0);
            dighole_207_instances.add_back();
        }
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(usespot_208_instances, it.current_index));
            if (parent == NULL) goto pos_end_1311_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_1311_11_1: ;
        }
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::ADDITIVE);
        }
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->move_back();
        }
    }
    event_1311_11_end: ;
}
void Frames::loop_digabove_11()
{
    event_func_5593();
    event_func_2605();
    event_func_2606();
    event_func_5410();
}
void Frames::loop_push_reaction_11()
{
    event_func_1500();
}
// Function purpose: generated callback event_func_5594 processes event block(s) 1003_11. Actions/conditions:
//        1003_11: sets MountPush to 1; sets the object position in the world; disables flag 23 (NPC schedule or
//        activity state) on the selected object; plus 7 more actions.
void Frames::event_func_5594()
{
    // event 1003_11 : sets MountPush to 1; sets the object position in the world; disables flag 23 (NPC schedule or activity state) on the selected object; plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1003_11_end;
        canteenchair_312_instances.clear_selection();
        for (ObjectIterator it(canteenchair_312_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(918, str_chairid_2233)))) { it.deselect(); continue; }
        }
        if (!canteenchair_312_instances.has_selection()) goto event_1003_11_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1003_11_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_1003_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(549, str_mountpush_1452, 1);
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(canteenchair_312_instances, it.current_index));
            if (parent == NULL) goto pos_end_1003_11_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 24);
            pos_end_1003_11_0: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(23);
            ((Active*)*it)->alterables->flags.disable(24);
            ((Active*)*it)->alterables->values.sub(12, 5);
            ((Active*)*it)->set_direction(8);
        }
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        {
            loop_push_reaction_running = true;
            int times = int(1);
            loop_push_reaction_index = 0;
            while (loop_push_reaction_index < times) {
                loop_push_reaction_11();
                if (!loop_push_reaction_running) break;
                loop_push_reaction_index++;
            }
        }
    }
    event_1003_11_end: ;
}
void Frames::loop_chair_push_off_8_11()
{
    event_func_5594();
}
// Function purpose: generated callback event_func_5595 processes event block(s) 11_11. Actions/conditions:
//        11_11: sets Ground_Obs to 0; sets Vent_Obs to 0; sets Roof_Obs to 0; plus 1 more actions.
void Frames::event_func_5595()
{
    // event 11_11 : sets Ground_Obs to 0; sets Vent_Obs to 0; sets Roof_Obs to 0; plus 1 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_11_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(494, str_ground_obs_1373, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(495, str_vent_obs_1374, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(496, str_roof_obs_1375, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(497, str_obs_1376, 0);
    }
    event_11_11_end: ;
}
// Function purpose: generated callback event_func_5596 processes event block(s) 16_11. Actions/conditions:
//        16_11: changes a stored game value.
void Frames::event_func_5596()
{
    // event 16_11 : changes a stored game value
    {
        if (!(group_load_map_from_file_1)) goto event_16_11_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)) == (str_0_615))) goto event_16_11_end;
        counter_4_instances.clear_selection();
        for (ObjectIterator it(counter_4_instances); !it.end(); ++it) {
            ((Counter*)*it)->add(1);
        }
    }
    event_16_11_end: ;
}
// Function purpose: generated callback event_func_5597 processes event block(s) 17_11. Actions/conditions:
//        17_11: sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 8 more actions.
void Frames::event_func_5597()
{
    // event 17_11 : sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 8 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_17_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(284, str_obstaclelist1_952), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_17_11_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 0, (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(494, str_ground_obs_1373, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(497, str_obs_1376, 1);
        mapsetupobstaclemarker_323_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_mapsetupobstaclemarker_323(0, 0), 1);
            mapsetupobstaclemarker_323_instances.add_back();
        }
        for (ObjectIterator it(mapsetupobstaclemarker_323_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(loop_load_x_index*16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16);
        }
    }
    event_17_11_end: ;
}
// Function purpose: generated callback event_func_5598 processes event block(s) 18_11. Actions/conditions:
//        18_11: sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 8 more actions.
void Frames::event_func_5598()
{
    // event 18_11 : sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 8 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_18_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(285, str_obstaclelist2_954), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_18_11_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 16, 16*(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))-25)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(497, str_obs_1376, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(494, str_ground_obs_1373, 1);
        mapsetupobstaclemarker_323_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_mapsetupobstaclemarker_323(0, 0), 1);
            mapsetupobstaclemarker_323_instances.add_back();
        }
        for (ObjectIterator it(mapsetupobstaclemarker_323_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(loop_load_x_index*16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16);
        }
    }
    event_18_11_end: ;
}
// Function purpose: generated callback event_func_5599 processes event block(s) 19_11. Actions/conditions:
//        19_11: sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 8 more actions.
void Frames::event_func_5599()
{
    // event 19_11 : sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 8 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_19_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(286, str_obstaclelist3_956), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_19_11_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 32, 16*(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))-50)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(497, str_obs_1376, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(494, str_ground_obs_1373, 1);
        mapsetupobstaclemarker_323_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_mapsetupobstaclemarker_323(0, 0), 1);
            mapsetupobstaclemarker_323_instances.add_back();
        }
        for (ObjectIterator it(mapsetupobstaclemarker_323_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(loop_load_x_index*16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16);
        }
    }
    event_19_11_end: ;
}
// Function purpose: generated callback event_func_5600 processes event block(s) 20_11. Actions/conditions:
//        20_11: sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 8 more actions.
void Frames::event_func_5600()
{
    // event 20_11 : sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 8 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_20_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(287, str_obstaclelist4_958), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_20_11_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 48, 16*(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))-75)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(497, str_obs_1376, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(494, str_ground_obs_1373, 1);
        mapsetupobstaclemarker_323_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_mapsetupobstaclemarker_323(0, 0), 1);
            mapsetupobstaclemarker_323_instances.add_back();
        }
        for (ObjectIterator it(mapsetupobstaclemarker_323_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(loop_load_x_index*16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16);
        }
    }
    event_20_11_end: ;
}
// Function purpose: generated callback event_func_5601 processes event block(s) 21_11. Actions/conditions:
//        21_11: sets Ground_Obs to 1; sets the selected object's layer to 2-1; draws the selected image or tile; plus
//        8 more actions.
void Frames::event_func_5601()
{
    // event 21_11 : sets Ground_Obs to 1; sets the selected object's layer to 2-1; draws the selected image or tile; plus 8 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_21_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(292, str_cuttablefences_969), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_21_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))) <= (25))) goto event_21_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(494, str_ground_obs_1373, 1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 0, (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        mapsetupobstaclemarker_323_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_mapsetupobstaclemarker_323(0, 0), 1);
            mapsetupobstaclemarker_323_instances.add_back();
        }
        for (ObjectIterator it(mapsetupobstaclemarker_323_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(loop_load_x_index*16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16);
            ((Active*)*it)->alterables->flags.enable(100);
        }
    }
    event_21_11_end: ;
}
// Function purpose: generated callback event_func_5602 processes event block(s) 22_11. Actions/conditions:
//        22_11: sets Ground_Obs to 1; sets the selected object's layer to 2-1; draws the selected image or tile; plus
//        8 more actions.
void Frames::event_func_5602()
{
    // event 22_11 : sets Ground_Obs to 1; sets the selected object's layer to 2-1; draws the selected image or tile; plus 8 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_22_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(292, str_cuttablefences_969), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_22_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))) == (56))) goto event_22_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(494, str_ground_obs_1373, 1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 32, 16*(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))-50)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        mapsetupobstaclemarker_323_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_mapsetupobstaclemarker_323(0, 0), 1);
            mapsetupobstaclemarker_323_instances.add_back();
        }
        for (ObjectIterator it(mapsetupobstaclemarker_323_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(loop_load_x_index*16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16);
            ((Active*)*it)->alterables->flags.enable(100);
        }
    }
    event_22_11_end: ;
}
// Function purpose: generated callback event_func_5603 processes event block(s) 23_11. Actions/conditions:
//        23_11: sets Ground_Obs to 1; sets the selected object's layer to 2-1; draws the selected image or tile; plus
//        8 more actions.
void Frames::event_func_5603()
{
    // event 23_11 : sets Ground_Obs to 1; sets the selected object's layer to 2-1; draws the selected image or tile; plus 8 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_23_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(292, str_cuttablefences_969), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_23_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))) > (25))) goto event_23_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))) != (56))) goto event_23_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(494, str_ground_obs_1373, 1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 48, 16*(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))-75)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        mapsetupobstaclemarker_323_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_mapsetupobstaclemarker_323(0, 0), 1);
            mapsetupobstaclemarker_323_instances.add_back();
        }
        for (ObjectIterator it(mapsetupobstaclemarker_323_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(loop_load_x_index*16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16);
            ((Active*)*it)->alterables->flags.enable(100);
        }
    }
    event_23_11_end: ;
}
// Function purpose: generated callback event_func_5604 processes event block(s) 24_11. Actions/conditions:
//        24_11: sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_5604()
{
    // event 24_11 : sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1)) goto event_24_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))) > (0))) goto event_24_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))) <= (25))) goto event_24_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(494, str_ground_obs_1373)) == (0))) goto event_24_11_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, get_floor(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))/MathHelper()/25)*16, (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))*16)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
    }
    event_24_11_end: ;
}
// Function purpose: generated callback event_func_5605 processes event block(s) 25_11. Actions/conditions:
//        25_11: sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_5605()
{
    // event 25_11 : sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1)) goto event_25_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))) > (25))) goto event_25_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))) <= (50))) goto event_25_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(494, str_ground_obs_1373)) == (0))) goto event_25_11_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 16, 16*(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))-25)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
    }
    event_25_11_end: ;
}
// Function purpose: generated callback event_func_5606 processes event block(s) 26_11. Actions/conditions:
//        26_11: sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_5606()
{
    // event 26_11 : sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1)) goto event_26_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))) > (50))) goto event_26_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))) <= (75))) goto event_26_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(494, str_ground_obs_1373)) == (0))) goto event_26_11_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 32, 16*(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))-50)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
    }
    event_26_11_end: ;
}
// Function purpose: generated callback event_func_5607 processes event block(s) 27_11. Actions/conditions:
//        27_11: sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_5607()
{
    // event 27_11 : sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1)) goto event_27_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))) > (75))) goto event_27_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(494, str_ground_obs_1373)) == (0))) goto event_27_11_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 48, 16*(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))-75)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
    }
    event_27_11_end: ;
}
// Function purpose: generated callback event_func_5608 processes event block(s) 28_11. Actions/conditions:
//        28_11: sets the selected object's layer to 4-1; draws the selected image or tile; splits saved text into
//        fields; plus 1 more actions.
void Frames::event_func_5608()
{
    // event 28_11 : sets the selected object's layer to 4-1; draws the selected image or tile; splits saved text into fields; plus 1 more actions
    bool or_result_28_11 = false;
    bool or_temp_result_28_11_0 = false;
    {
        if (!(group_load_map_from_file_1)) goto or_event_28_11_0_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))) >= (28))) goto or_event_28_11_0_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))) <= (31))) goto or_event_28_11_0_end;
        or_result_28_11 = true;
        or_temp_result_28_11_0 = true;
    }
    or_event_28_11_0_end: ;
    // event 28_11 : sets the selected object's layer to 4-1; draws the selected image or tile; splits saved text into fields; plus 1 more actions
    bool or_temp_result_28_11_1 = false;
    {
        if (!(group_load_map_from_file_1)) goto or_event_28_11_1_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))) == (41))) goto or_event_28_11_1_end;
        or_result_28_11 = true;
        or_temp_result_28_11_1 = true;
    }
    or_event_28_11_1_end: ;
    // event 28_11 : sets the selected object's layer to 4-1; draws the selected image or tile; splits saved text into fields; plus 1 more actions
    bool or_temp_result_28_11_2 = false;
    {
        if (!(group_load_map_from_file_1)) goto or_event_28_11_2_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))) == (42))) goto or_event_28_11_2_end;
        or_result_28_11 = true;
        or_temp_result_28_11_2 = true;
    }
    or_event_28_11_2_end: ;
    // event 28_11 : sets the selected object's layer to 4-1; draws the selected image or tile; splits saved text into fields; plus 1 more actions
    bool or_temp_result_28_11_3 = false;
    {
        if (!(group_load_map_from_file_1)) goto or_event_28_11_3_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))) == (27))) goto or_event_28_11_3_end;
        or_result_28_11 = true;
        or_temp_result_28_11_3 = true;
        or_event_28_11_3_end: ;
        if (!or_result_28_11) goto or_final_or_event_28_11_3_end;
        activepicture_160_instances.clear_selection();
        for (ObjectIterator it(activepicture_160_instances); !it.end(); ++it) {
            ((ActivePicture*)*it)->set_layer(4-1);
            ((ActivePicture*)*it)->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(490, str_maploop_1369)*16, 16, ((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances, it.current_index))->get(loop_load_x_index))-25)*16)-16, 16, 16, 1);
        }
        groundTiles_instances.clear_selection();
        for (ObjectIterator it(groundTiles_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances, it.current_index))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(490, str_maploop_1369), 4);
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(495, str_vent_obs_1374, 1);
        }
    }
    or_final_or_event_28_11_3_end: ;
}
