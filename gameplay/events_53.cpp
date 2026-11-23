#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_4364 processes event block(s) 2959_6. Actions/conditions:
//        2959_6: sets SleepMenu to 0.
void Frames::event_func_4364()
{
    // event 2959_6 : sets SleepMenu to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2959_6_end;
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2959_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(338, str_sleepmenu_1128)) == (1))) goto event_2959_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(338, str_sleepmenu_1128, 0);
    }
    event_2959_6_end: ;
}
// Function purpose: generated callback event_func_4365 processes event block(s) 2969_6. Actions/conditions:
//        2969_6: sets spaceX to ((Active*)get_single(canteenchair_312_instances, default_active_instance))->get_x();
//        sets spaceY to ((Active*)get_single(canteenchair_312_instances, default_active_instance))->get_y(); sets
//        chairID to ((Active*)get_single(canteenchair_312_instances,
//        default_active_instance))->alterables->values.get(0); plus 5 more actions.
void Frames::event_func_4365()
{
    // event 2969_6 : sets spaceX to ((Active*)get_single(canteenchair_312_instances, default_active_instance))->get_x(); sets spaceY to ((Active*)get_single(canteenchair_312_instances, default_active_instance))->get_y(); sets chairID to ((Active*)get_single(canteenchair_312_instances, default_active_instance))->alterables->values.get(0); plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2969_6_end;
        playerBase_instances.clear_selection();
        canteenchair_312_instances.clear_selection();
        if (!check_overlap(playerBase_instances, canteenchair_312_instances)) goto event_2969_6_end;
        inmateBase_instances.clear_selection();
        if (!check_overlap(playerBase_instances, inmateBase_instances)) goto event_2969_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(24))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2969_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(372, str_spacex_1168, ((Active*)get_single(canteenchair_312_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(373, str_spacey_1169, ((Active*)get_single(canteenchair_312_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(918, str_chairid_2233, ((Active*)get_single(canteenchair_312_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(94, str_charid_605, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0));
        {
            loop_chair_push_running = true;
            int times = int(1);
            loop_chair_push_index = 0;
            while (loop_chair_push_index < times) {
                loop_chair_push_6();
                if (!loop_chair_push_running) break;
                loop_chair_push_index++;
            }
        }
        media.play_id(SOUND_EN_HIT_7, 1-1);
    }
    event_2969_6_end: ;
}
// Function purpose: generated callback event_func_4366 processes event block(s) 2973_6. Actions/conditions:
//        2973_6: sets gymID to ((Active*)get_single(qualifier_9,
//        default_active_instance))->alterables->values.get(0); sets charID to
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0); plays a
//        sound or music track.
void Frames::event_func_4366()
{
    // event 2973_6 : sets gymID to ((Active*)get_single(qualifier_9, default_active_instance))->alterables->values.get(0); sets charID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0); plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2973_6_end;
        playerBase_instances.clear_selection();
        qualifier_9.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_9)) goto event_2973_6_end;
        inmateBase_instances.clear_selection();
        if (!check_overlap(playerBase_instances, inmateBase_instances)) goto event_2973_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(31))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2973_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(414, str_gymid_1231, ((Active*)get_single(qualifier_9, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(94, str_charid_605, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0));
        {
            loop_gym_push_off_running = true;
            int times = int(1);
            loop_gym_push_off_index = 0;
            while (loop_gym_push_off_index < times) {
                loop_gym_push_off_6();
                if (!loop_gym_push_off_running) break;
                loop_gym_push_off_index++;
            }
        }
        media.play_id(SOUND_EN_HIT_7, 1-1);
    }
    event_2973_6_end: ;
}
// Function purpose: generated callback event_func_4367 processes event block(s) 2980_6. Actions/conditions:
//        2980_6: sets LookX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); sets
//        LookY to ((Active*)get_single(guardBase_instances, default_active_instance))->get_y(); sets LClick to 1;
//        plus 5 more actions.
void Frames::event_func_4367()
{
    // event 2980_6 : sets LookX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); sets LookY to ((Active*)get_single(guardBase_instances, default_active_instance))->get_y(); sets LClick to 1; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2980_6_end;
        if (!(is_mouse_pressed(SDL_BUTTON_LEFT))) goto event_2980_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_2980_6_end;
        if (!check_not_overlap(guardBase_instances, qualifier_6)) goto event_2980_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2980_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(6)) goto event_2980_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2980_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2980_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2980_6_end;
        if (frame_time - restrict_2980_6 < 1.0) goto event_2980_6_end;
        restrict_2980_6 = frame_time;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_single(guardBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_single(guardBase_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(258, str_pid_913, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(632, str_prep_1719, get_ceil(((((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(12)+0.0)/MathHelper()/33)+0.0));
        {
            loop_talk_los_running = true;
            int times = int(1);
            loop_talk_los_index = 0;
            while (loop_talk_los_index < times) {
                loop_talk_los_6();
                if (!loop_talk_los_running) break;
                loop_talk_los_index++;
            }
        }
        {
            loop_talk_loop_guard_running = true;
            int times = int(1);
            loop_talk_loop_guard_index = 0;
            while (loop_talk_loop_guard_index < times) {
                loop_talk_loop_guard_6();
                if (!loop_talk_loop_guard_running) break;
                loop_talk_loop_guard_index++;
            }
        }
    }
    event_2980_6_end: ;
}
// Function purpose: generated callback event_func_4368 processes event block(s) 2984_6. Actions/conditions:
//        2984_6: sets DontTalk to 0.
void Frames::event_func_4368()
{
    // event 2984_6 : sets DontTalk to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2984_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(919, str_donttalk_2234)) != (0))) goto event_2984_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(919, str_donttalk_2234, 0);
    }
    event_2984_6_end: ;
}
// Function purpose: generated callback event_func_4369 processes event block(s) 2985_6. Actions/conditions:
//        2985_6: sets MountPush to 0; sets DontTalk to 1.
void Frames::event_func_4369()
{
    // event 2985_6 : sets MountPush to 0; sets DontTalk to 1
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2985_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(549, str_mountpush_1452)) == (1))) goto event_2985_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(549, str_mountpush_1452, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(919, str_donttalk_2234, 1);
    }
    event_2985_6_end: ;
}
// Function purpose: generated callback event_func_4370 processes event block(s) 2986_6. Actions/conditions:
//        2986_6: sets HasMission to 0; sets LookX to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->get_x(); sets LookY to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->get_y(); plus 7 more actions.
void Frames::event_func_4370()
{
    // event 2986_6 : sets HasMission to 0; sets LookX to ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x(); sets LookY to ((Active*)get_single(inmateBase_instances, default_active_instance))->get_y(); plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2986_6_end;
        if (!(is_mouse_pressed(SDL_BUTTON_LEFT))) goto event_2986_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2986_6_end;
        if (!check_not_overlap(inmateBase_instances, qualifier_6)) goto event_2986_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2986_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(6)) goto event_2986_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2986_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(919, str_donttalk_2234)) == (0))) goto event_2986_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2986_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2986_6_end;
        if (frame_time - restrict_2986_6 < 1.0) goto event_2986_6_end;
        restrict_2986_6 = frame_time;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(630, str_hasmission_1716, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_single(inmateBase_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(258, str_pid_913, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(631, str_convtype_1717, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(632, str_prep_1719, get_ceil(((((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(12)+0.0)/MathHelper()/33)+0.0));
        {
            loop_talk_los_running = true;
            int times = int(1);
            loop_talk_los_index = 0;
            while (loop_talk_los_index < times) {
                loop_talk_los_6();
                if (!loop_talk_los_running) break;
                loop_talk_los_index++;
            }
        }
        {
            loop_talk_loop_running = true;
            int times = int(1);
            loop_talk_loop_index = 0;
            while (loop_talk_loop_index < times) {
                loop_talk_loop_6();
                if (!loop_talk_loop_running) break;
                loop_talk_loop_index++;
            }
        }
    }
    event_2986_6_end: ;
}
// Function purpose: generated callback event_func_4371 processes event block(s) 3002_6. Actions/conditions:
//        3002_6: sets HasMission to 0; sets SpeakText to Misc entry 47; plays a sound or music track.
void Frames::event_func_4371()
{
    // event 3002_6 : sets HasMission to 0; sets SpeakText to Misc entry 47; plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3002_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(630, str_hasmission_1716)) == (1))) goto event_3002_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(919, str_donttalk_2234)) == (0))) goto event_3002_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3002_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3002_6_end;
        if (!((((ListObject*)get_instance(missions_298_instances))->get_count()) >= (5))) goto event_3002_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(630, str_hasmission_1716, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_47_2195));
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
    event_3002_6_end: ;
}
// Function purpose: generated callback event_func_4372 processes event block(s) 3003_6. Actions/conditions:
//        3003_6: sets HasMission to 0; sets LClick to 1; sets MissionBy to
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0); plus 20
//        more actions.
void Frames::event_func_4372()
{
    // event 3003_6 : sets HasMission to 0; sets LClick to 1; sets MissionBy to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0); plus 20 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3003_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(630, str_hasmission_1716)) == (1))) goto event_3003_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(919, str_donttalk_2234)) == (0))) goto event_3003_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3003_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3003_6_end;
        if (!((((ListObject*)get_instance(missions_298_instances))->get_count()) < (5))) goto event_3003_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(630, str_hasmission_1716, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(438, str_missionby_1294, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(920, str_currmission_2235, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(2));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(2), str__254);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(434, str_missiontarget_1277, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((Active*)get_instance(dialogPanel_instances))->force_animation(12);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(0);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        dialogBodyText_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dialogBodyText(0, 0), 5);
            dialogBodyText_instances.add_back();
        }
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            if (parent == NULL) goto pos_end_3003_6_1;
            ((Text*)*it)->set_global_position(parent->get_x() + -110, parent->get_y() + -35);
            pos_end_3003_6_1: ;
        }
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->blend_color.set(Color(60, 60, 60));
            ((Text*)*it)->set_string(((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->strings.get(0)+str__247+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)+str__624+((INI*)get_instance(translationData_instances))->get_string(str_favour_box_1089, str_2_155)+str__2236+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4));
        }
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_y()-55);
            ((Text*)*it)->set_bold(1);
            ((Text*)*it)->blend_color.set(Color(0, 128, 0));
            ((Text*)*it)->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_favour_box_1089, str_1_97)));
        }
        {
            loop_mish_setup_running = true;
            int times = int(1);
            loop_mish_setup_index = 0;
            while (loop_mish_setup_index < times) {
                loop_mish_setup_6();
                if (!loop_mish_setup_running) break;
                loop_mish_setup_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_3003_6_end: ;
}
// Function purpose: generated callback event_func_4373 processes event block(s) 3007_6. Actions/conditions:
//        3007_6: sets LClick to 1; sets LootID to ((Active*)get_single(qualifier_14,
//        default_active_instance))->alterables->values.get(25); sets a stored numeric value; plus 7 more actions.
void Frames::event_func_4373()
{
    // event 3007_6 : sets LClick to 1; sets LootID to ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25); sets a stored numeric value; plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3007_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3007_6_end;
        cursor_178_instances.clear_selection();
        if (!check_overlap(cursor_178_instances, qualifier_14)) goto event_3007_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3007_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3007_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3007_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(12, str_lootid_452, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(str_stolenkeys_606+number_to_string(((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25)), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_stolenkeys_606+number_to_string(((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25))));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(148, str_looted_721, 0);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(13);
        {
            loop_build_loot_gear_slots_running = true;
            int times = int(1);
            loop_build_loot_gear_slots_index = 0;
            while (loop_build_loot_gear_slots_index < times) {
                loop_build_loot_gear_slots_6();
                if (!loop_build_loot_gear_slots_running) break;
                loop_build_loot_gear_slots_index++;
            }
        }
        {
            loop_build_loot_slots_running = true;
            int times = int(6);
            loop_build_loot_slots_index = 0;
            while (loop_build_loot_slots_index < times) {
                loop_build_loot_slots_6();
                if (!loop_build_loot_slots_running) break;
                loop_build_loot_slots_index++;
            }
        }
        {
            loop_fill_loot_gear_slots_running = true;
            int times = int(1);
            loop_fill_loot_gear_slots_index = 0;
            while (loop_fill_loot_gear_slots_index < times) {
                loop_fill_loot_gear_slots_6();
                if (!loop_fill_loot_gear_slots_running) break;
                loop_fill_loot_gear_slots_index++;
            }
        }
        {
            loop_fill_loot_slots_running = true;
            int times = int(6);
            loop_fill_loot_slots_index = 0;
            while (loop_fill_loot_slots_index < times) {
                loop_fill_loot_slots_6();
                if (!loop_fill_loot_slots_running) break;
                loop_fill_loot_slots_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_3007_6_end: ;
}
// Function purpose: generated callback event_func_4374 processes event block(s) 3020_6. Actions/conditions:
//        3020_6: sets the selected object's visibility to false; sets the selected object's visibility to false; sets
//        LClick to 1; plus 1 more actions.
void Frames::event_func_4374()
{
    // event 3020_6 : sets the selected object's visibility to false; sets the selected object's visibility to false; sets LClick to 1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3020_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3020_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->mouse_over()) goto event_3020_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_3020_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3020_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(13))) goto event_3020_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3020_6_end;
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_visible(false);
        }
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_loot_close_running = true;
            int times = int(1);
            loop_loot_close_index = 0;
            while (loop_loot_close_index < times) {
                loop_loot_close_6();
                if (!loop_loot_close_running) break;
                loop_loot_close_index++;
            }
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
    }
    event_3020_6_end: ;
}
// Function purpose: generated callback event_func_4375 processes event block(s) 3034_6. Actions/conditions:
//        3034_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 8 more actions.
void Frames::event_func_4375()
{
    // event 3034_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 8 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3034_6_end;
        weeds_462_instances.clear_selection();
        for (ObjectIterator it(weeds_462_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!weeds_462_instances.has_selection()) goto event_3034_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (31))) goto event_3034_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3034_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3034_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(weeds_462_instances));
            if (obj1 == NULL) goto compare_3034_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3034_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3034_6_end;
        }
        compare_3034_6_0_end: ;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3034_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_3034_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(433, str_weeding_1276)) == (0))) goto event_3034_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3034_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_single(weeds_462_instances, it.current_index))->x + 0, ((Active*)get_single(weeds_462_instances, it.current_index))->y + 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(255, str_weedx_906, ((Active*)get_instance(cursor_178_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(256, str_weedy_907, ((Active*)get_instance(cursor_178_instances))->get_y());
        {
            loop_weed_check_running = true;
            int times = int(1);
            loop_weed_check_index = 0;
            while (loop_weed_check_index < times) {
                loop_weed_check_6();
                if (!loop_weed_check_running) break;
                loop_weed_check_index++;
            }
        }
    }
    event_3034_6_end: ;
}
// Function purpose: generated callback event_func_4376 processes event block(s) 3037_6. Actions/conditions:
//        3037_6: sets CleaningTool to 0.
void Frames::event_func_4376()
{
    // event 3037_6 : sets CleaningTool to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3037_6_end;
        dirt_242_instances.clear_selection();
        for (ObjectIterator it(dirt_242_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!dirt_242_instances.has_selection()) goto event_3037_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(921, str_cleaningtool_2237, 0);
    }
    event_3037_6_end: ;
}
// Function purpose: generated callback event_func_4377 processes event block(s) 3038_6. Actions/conditions:
//        3038_6: saves the current object selection; sets CleaningTool to 1.
void Frames::event_func_4377()
{
    // event 3038_6 : saves the current object selection; sets CleaningTool to 1
    bool or_result_3038_6 = false;
    bool or_temp_result_3038_6_0 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3038_6_0_end;
        dirt_242_instances.clear_selection();
        for (ObjectIterator it(dirt_242_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!dirt_242_instances.has_selection()) goto or_event_3038_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(47, str_selecteditem_515)) == (32))) goto or_event_3038_6_0_end;
        or_result_3038_6 = true;
        or_temp_result_3038_6_0 = true;
    }
    or_event_3038_6_0_end: ;
    dirt_242_instances.clear_saved_selection();
    if (or_temp_result_3038_6_0) {
        dirt_242_instances.save_selection();
    }
    // event 3038_6 : saves the current object selection; sets CleaningTool to 1
    bool or_temp_result_3038_6_1 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3038_6_1_end;
        dirt_242_instances.clear_selection();
        for (ObjectIterator it(dirt_242_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!dirt_242_instances.has_selection()) goto or_event_3038_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(47, str_selecteditem_515)) == (35))) goto or_event_3038_6_1_end;
        or_result_3038_6 = true;
        or_temp_result_3038_6_1 = true;
        or_event_3038_6_1_end: ;
        if (or_temp_result_3038_6_1) {
            dirt_242_instances.save_selection();
        }
        if (!or_result_3038_6) goto or_final_or_event_3038_6_1_end;
        dirt_242_instances.empty_selection();
        if (or_temp_result_3038_6_0 || or_temp_result_3038_6_1) {
            dirt_242_instances.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(921, str_cleaningtool_2237, 1);
        }
    }
    or_final_or_event_3038_6_1_end: ;
}
// Function purpose: generated callback event_func_4378 processes event block(s) 3039_6. Actions/conditions:
//        3039_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 8 more actions.
void Frames::event_func_4378()
{
    // event 3039_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 8 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3039_6_end;
        dirt_242_instances.clear_selection();
        for (ObjectIterator it(dirt_242_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!dirt_242_instances.has_selection()) goto event_3039_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(dirt_242_instances));
            if (obj1 == NULL) goto compare_3039_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3039_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3039_6_end;
        }
        compare_3039_6_0_end: ;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(921, str_cleaningtool_2237)) == (1))) goto event_3039_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3039_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3039_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3039_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(359, str_cleaning_23)) == (0))) goto event_3039_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_3039_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3039_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_single(dirt_242_instances, it.current_index))->x + 0, ((Active*)get_single(dirt_242_instances, it.current_index))->y + 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(324, str_cleanx_1108, ((Active*)get_instance(cursor_178_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(325, str_cleany_1109, ((Active*)get_instance(cursor_178_instances))->get_y());
        {
            loop_clean_check_running = true;
            int times = int(1);
            loop_clean_check_index = 0;
            while (loop_clean_check_index < times) {
                loop_clean_check_6();
                if (!loop_clean_check_running) break;
                loop_clean_check_index++;
            }
        }
    }
    event_3039_6_end: ;
}
// Function purpose: generated callback event_func_4379 processes event block(s) 3042_6. Actions/conditions:
//        3042_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 11 more actions.
void Frames::event_func_4379()
{
    // event 3042_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 11 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3042_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3042_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3042_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_chipping_728)) > (0))) goto event_3042_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(291, str_chippablewalls_967), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), ((Active*)get_instance(playerBase_instances))->layer->index+1))+str__96, 0)) != (-1))) goto event_3042_6_end;
        if (!((((ArrayObject*)get_instance(wallsarray_232_instances))->get_value(get_mouse_x()/MathHelper()/16, get_mouse_y()/MathHelper()/16, ((Active*)get_instance(playerBase_instances))->layer->index+1)) < (100))) goto event_3042_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_3042_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3042_6_0_end;
            x2 = obj2->get_x() + -8;
            y2 = obj2->get_y() + -8;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_3042_6_end;
        }
        compare_3042_6_0_end: ;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_1)) goto event_3042_6_end;
        cursor_178_instances.clear_selection();
        if (!check_not_overlap(cursor_178_instances, qualifier_19)) goto event_3042_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3042_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_3042_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(155, str_chipping_728)) == (0))) goto event_3042_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3042_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(922, str_chippower_2238, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_chipping_728));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(456, str_chipx_1325, get_mouse_x()/MathHelper()/16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(457, str_chipy_1326, get_mouse_y()/MathHelper()/16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(400, str_itemhp_dmg_1211, 5);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(923, str_itemhp_slot_2239, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514));
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(cursor_178_instances))->x + 8, ((Active*)get_instance(cursor_178_instances))->y + 8));
        }
        {
            loop_chip_check_running = true;
            int times = int(1);
            loop_chip_check_index = 0;
            while (loop_chip_check_index < times) {
                loop_chip_check_6();
                if (!loop_chip_check_running) break;
                loop_chip_check_index++;
            }
        }
    }
    event_3042_6_end: ;
}
// Function purpose: generated callback event_func_4380 processes event block(s) 3047_6. Actions/conditions:
//        3047_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 11 more actions.
void Frames::event_func_4380()
{
    // event 3047_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 11 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3047_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3047_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3047_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_chipping_728)) > (0))) goto event_3047_6_end;
        cursor_178_instances.clear_selection();
        active10_293_instances.clear_selection();
        if (!check_overlap(cursor_178_instances, active10_293_instances)) goto event_3047_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_3047_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3047_6_0_end;
            x2 = obj2->get_x() + -8;
            y2 = obj2->get_y() + -8;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_3047_6_end;
        }
        compare_3047_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_3047_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3047_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(155, str_chipping_728)) == (0))) goto event_3047_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3047_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(922, str_chippower_2238, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_chipping_728));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(456, str_chipx_1325, ((Active*)get_single(active10_293_instances, default_active_instance))->get_x()/MathHelper()/16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(457, str_chipy_1326, ((Active*)get_single(active10_293_instances, default_active_instance))->get_y()/MathHelper()/16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(400, str_itemhp_dmg_1211, 5);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(923, str_itemhp_slot_2239, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514));
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(cursor_178_instances))->x + 8, ((Active*)get_instance(cursor_178_instances))->y + 8));
        }
        {
            loop_chip_check_rock_running = true;
            int times = int(1);
            loop_chip_check_rock_index = 0;
            while (loop_chip_check_rock_index < times) {
                loop_chip_check_rock_6();
                if (!loop_chip_check_rock_running) break;
                loop_chip_check_rock_index++;
            }
        }
    }
    event_3047_6_end: ;
}
// Function purpose: generated callback event_func_4381 processes event block(s) 3050_6. Actions/conditions:
//        3050_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 11 more actions.
void Frames::event_func_4381()
{
    // event 3050_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 11 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3050_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3050_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3050_6_end;
        if (!(((((ArrayObject*)get_instance(digarray_228_instances))->get_value(((Active*)get_instance(cursor_178_instances))->get_x(), ((Active*)get_instance(cursor_178_instances))->get_y(), 1))) < (25))) goto event_3050_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3050_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_3050_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3050_6_0_end;
            x2 = obj2->get_x() + -8;
            y2 = obj2->get_y() + -8;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_3050_6_end;
        }
        compare_3050_6_0_end: ;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_digging_726)) > (0))) goto event_3050_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3050_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3050_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_3050_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) == (0))) goto event_3050_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), 1)) != (92))) goto event_3050_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_18)) goto event_3050_6_end;
        if (!check_not_overlap(playerBase_instances, qualifier_1)) goto event_3050_6_end;
        if (((Active*)get_instance(cursor_178_instances))->overlaps_background()) goto event_3050_6_end;
        cursor_178_instances.clear_selection();
        if (!check_not_overlap(cursor_178_instances, qualifier_6)) goto event_3050_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_7)) goto event_3050_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_8)) goto event_3050_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_19)) goto event_3050_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_4)) goto event_3050_6_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_22)) goto event_3050_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(924, str_digpower_2240, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_digging_726));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(642, str_digx_1740, ((Active*)get_instance(cursor_178_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(643, str_digy_1741, ((Active*)get_instance(cursor_178_instances))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(400, str_itemhp_dmg_1211, 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(923, str_itemhp_slot_2239, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(925, str_digtype_2241, str_floor_814);
        {
            loop_dig_check_running = true;
            int times = int(1);
            loop_dig_check_index = 0;
            while (loop_dig_check_index < times) {
                loop_dig_check_6();
                if (!loop_dig_check_running) break;
                loop_dig_check_index++;
            }
        }
    }
    event_3050_6_end: ;
}
// Function purpose: generated callback event_func_4382 processes event block(s) 3055_6. Actions/conditions:
//        3055_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 11 more actions.
void Frames::event_func_4382()
{
    // event 3055_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 11 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3055_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3055_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3055_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_3055_6_end;
        if (!(((((ArrayObject*)get_instance(digarray_228_instances))->get_value(((Active*)get_instance(cursor_178_instances))->get_x(), ((Active*)get_instance(cursor_178_instances))->get_y(), 1))) < (25))) goto event_3055_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_3055_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3055_6_0_end;
            x2 = obj2->get_x() + -8;
            y2 = obj2->get_y() + -8;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_3055_6_end;
        }
        compare_3055_6_0_end: ;
        cursor_178_instances.clear_selection();
        if (!check_not_overlap(cursor_178_instances, qualifier_19)) goto event_3055_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_digging_726)) > (0))) goto event_3055_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3055_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3055_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) == (0))) goto event_3055_6_end;
        if (((Active*)get_instance(cursor_178_instances))->overlaps_background()) goto event_3055_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(400, str_itemhp_dmg_1211, 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(923, str_itemhp_slot_2239, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(924, str_digpower_2240, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_digging_726));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(642, str_digx_1740, ((Active*)get_instance(cursor_178_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(643, str_digy_1741, ((Active*)get_instance(cursor_178_instances))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(925, str_digtype_2241, str_ug_up_2242);
        {
            loop_digabove_check_running = true;
            int times = int(1);
            loop_digabove_check_index = 0;
            while (loop_digabove_check_index < times) {
                loop_digabove_check_6();
                if (!loop_digabove_check_running) break;
                loop_digabove_check_index++;
            }
        }
    }
    event_3055_6_end: ;
}
// Function purpose: generated callback event_func_4383 processes event block(s) 3061_6. Actions/conditions:
//        3061_6: sets NearestBrace to 999.
void Frames::event_func_4383()
{
    // event 3061_6 : sets NearestBrace to 999
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3061_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3061_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_digging_726)) > (0))) goto event_3061_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_3061_6_end;
        qualifier_26.clear_selection();
        spread_value(qualifier_26, 0, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(404, str_nearestbrace_1218, 999);
        {
            loop_brace_check_running = true;
            int times = int(1);
            loop_brace_check_index = 0;
            while (loop_brace_check_index < times) {
                loop_brace_check_6();
                if (!loop_brace_check_running) break;
                loop_brace_check_index++;
            }
        }
    }
    event_3061_6_end: ;
}
// Function purpose: generated callback event_func_4384 processes event block(s) 3065_6. Actions/conditions:
//        3065_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 11 more actions.
void Frames::event_func_4384()
{
    // event 3065_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 11 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3065_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3065_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3065_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_digging_726)) > (0))) goto event_3065_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_3065_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_3065_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3065_6_0_end;
            x2 = obj2->get_x() + -8;
            y2 = obj2->get_y() + -8;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_3065_6_end;
        }
        compare_3065_6_0_end: ;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), 1)) != (92))) goto event_3065_6_end;
        if (!(((((ArrayObject*)get_instance(digarray_228_instances))->get_value(((Active*)get_instance(cursor_178_instances))->get_x(), ((Active*)get_instance(cursor_178_instances))->get_y(), 0))) < (25))) goto event_3065_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3065_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) == (0))) goto event_3065_6_end;
        if (!(((Active*)get_instance(cursor_178_instances))->overlaps_background())) goto event_3065_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3065_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(400, str_itemhp_dmg_1211, 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(923, str_itemhp_slot_2239, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(924, str_digpower_2240, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_digging_726));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(642, str_digx_1740, ((Active*)get_instance(cursor_178_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(643, str_digy_1741, ((Active*)get_instance(cursor_178_instances))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(925, str_digtype_2241, str_ug_across_2243);
        {
            loop_digbelow_check_running = true;
            int times = int(1);
            loop_digbelow_check_index = 0;
            while (loop_digbelow_check_index < times) {
                loop_digbelow_check_6();
                if (!loop_digbelow_check_running) break;
                loop_digbelow_check_index++;
            }
        }
    }
    event_3065_6_end: ;
}
// Function purpose: generated callback event_func_4385 processes event block(s) 3073_6. Actions/conditions:
//        3073_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 13 more actions.
void Frames::event_func_4385()
{
    // event 3073_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 13 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3073_6_end;
        fan_281_instances.clear_selection();
        for (ObjectIterator it(fan_281_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!fan_281_instances.has_selection()) goto event_3073_6_end;
        if (!((((Active*)get_single(fan_281_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_3073_6_end;
        for (ObjectIterator it(fan_281_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!fan_281_instances.has_selection()) goto event_3073_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(fan_281_instances));
            if (obj1 == NULL) goto compare_3073_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3073_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3073_6_end;
        }
        compare_3073_6_0_end: ;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_cutting_727)) > (0))) goto event_3073_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3073_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3073_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3073_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(154, str_cutting_727)) == (0))) goto event_3073_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_3073_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(400, str_itemhp_dmg_1211, 5);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(923, str_itemhp_slot_2239, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(715, str_cutpower_1884, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_cutting_727)*4);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(236, str_cutx_861, ((Active*)get_single(fan_281_instances, default_active_instance))->get_x()/MathHelper()/16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(237, str_cuty_862, ((Active*)get_single(fan_281_instances, default_active_instance))->get_y()/MathHelper()/16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(926, str_cutlayer_2244, 4);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(238, str_cuttype_863, str_slats_2245);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(cursor_178_instances))->x + 8, ((Active*)get_instance(cursor_178_instances))->y + 8));
        }
        {
            loop_cut_slats_check_running = true;
            int times = int(1);
            loop_cut_slats_check_index = 0;
            while (loop_cut_slats_check_index < times) {
                loop_cut_slats_check_6();
                if (!loop_cut_slats_check_running) break;
                loop_cut_slats_check_index++;
            }
        }
    }
    event_3073_6_end: ;
}
// Function purpose: generated callback event_func_4386 processes event block(s) 3076_6. Actions/conditions:
//        3076_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 13 more actions.
void Frames::event_func_4386()
{
    // event 3076_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 13 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3076_6_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto event_3076_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(ventCover_instances));
            if (obj1 == NULL) goto compare_3076_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3076_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3076_6_end;
        }
        compare_3076_6_0_end: ;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_cutting_727)) > (0))) goto event_3076_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3076_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3076_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3076_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(154, str_cutting_727)) == (0))) goto event_3076_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_3076_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(156, str_unscrewing_729)) == (0))) goto event_3076_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(400, str_itemhp_dmg_1211, 5);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(923, str_itemhp_slot_2239, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(715, str_cutpower_1884, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_cutting_727)*4);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(236, str_cutx_861, ((Active*)get_single(ventCover_instances, default_active_instance))->get_x()/MathHelper()/16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(237, str_cuty_862, ((Active*)get_single(ventCover_instances, default_active_instance))->get_y()/MathHelper()/16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(926, str_cutlayer_2244, 4);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(238, str_cuttype_863, str_vent_2246);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_single(ventCover_instances, it.current_index))->x + 8, ((Active*)get_single(ventCover_instances, it.current_index))->y + 8));
        }
        {
            loop_cut_vents_check_running = true;
            int times = int(1);
            loop_cut_vents_check_index = 0;
            while (loop_cut_vents_check_index < times) {
                loop_cut_slats_check_6();
                if (!loop_cut_vents_check_running) break;
                loop_cut_vents_check_index++;
            }
        }
    }
    event_3076_6_end: ;
}
// Function purpose: generated callback event_func_4387 processes event block(s) 3079_6. Actions/conditions:
//        3079_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 13 more actions.
void Frames::event_func_4387()
{
    // event 3079_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 13 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3079_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3079_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3079_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_cutting_727)) > (0))) goto event_3079_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(292, str_cuttablefences_969), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), ((Active*)get_instance(playerBase_instances))->layer->index+1))+str__96, 0)) != (-1))) goto event_3079_6_end;
        if (!((((ArrayObject*)get_instance(fencearray_265_instances))->get_value(get_mouse_x()/MathHelper()/16, get_mouse_y()/MathHelper()/16, ((Active*)get_instance(playerBase_instances))->layer->index+1)) < (100))) goto event_3079_6_end;
        cursor_178_instances.clear_selection();
        if (!check_not_overlap(cursor_178_instances, qualifier_19)) goto event_3079_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_1)) goto event_3079_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_3079_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3079_6_0_end;
            x2 = obj2->get_x() + -8;
            y2 = obj2->get_y() + -8;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_3079_6_end;
        }
        compare_3079_6_0_end: ;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3079_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_3079_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(154, str_cutting_727)) == (0))) goto event_3079_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3079_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(715, str_cutpower_1884, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_cutting_727)*4);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(236, str_cutx_861, get_mouse_x()/MathHelper()/16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(237, str_cuty_862, get_mouse_y()/MathHelper()/16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(926, str_cutlayer_2244, ((Active*)get_instance(playerBase_instances))->layer->index+1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(400, str_itemhp_dmg_1211, 5);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(923, str_itemhp_slot_2239, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(238, str_cuttype_863, str_fence_2247);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(cursor_178_instances))->x + 8, ((Active*)get_instance(cursor_178_instances))->y + 8));
        }
        {
            loop_cut_fence_check_running = true;
            int times = int(1);
            loop_cut_fence_check_index = 0;
            while (loop_cut_fence_check_index < times) {
                loop_cut_fence_check_6();
                if (!loop_cut_fence_check_running) break;
                loop_cut_fence_check_index++;
            }
        }
    }
    event_3079_6_end: ;
}
// Function purpose: generated callback event_func_4388 processes event block(s) 3086_6. Actions/conditions:
//        3086_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 11 more actions.
void Frames::event_func_4388()
{
    // event 3086_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 11 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3086_6_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto event_3086_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(ventCover_instances));
            if (obj1 == NULL) goto compare_3086_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3086_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3086_6_end;
        }
        compare_3086_6_0_end: ;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_unscrewing_729)) > (0))) goto event_3086_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3086_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3086_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3086_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(156, str_unscrewing_729)) == (0))) goto event_3086_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_3086_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(923, str_itemhp_slot_2239, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(400, str_itemhp_dmg_1211, 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(927, str_unscrewx_2248, ((Active*)get_single(ventCover_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(928, str_unscrewy_2249, ((Active*)get_single(ventCover_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(929, str_unscrewval_2250, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_unscrewing_729)*8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(930, str_unscrewtype_2251, str_vent_2246);
        {
            loop_unscrew_check_running = true;
            int times = int(1);
            loop_unscrew_check_index = 0;
            while (loop_unscrew_check_index < times) {
                loop_unscrew_check_6();
                if (!loop_unscrew_check_running) break;
                loop_unscrew_check_index++;
            }
        }
    }
    event_3086_6_end: ;
}
// Function purpose: generated callback event_func_4389 processes event block(s) 3091_6. Actions/conditions:
//        3091_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 12 more actions.
void Frames::event_func_4389()
{
    // event 3091_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 12 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3091_6_end;
        fan_281_instances.clear_selection();
        for (ObjectIterator it(fan_281_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!fan_281_instances.has_selection()) goto event_3091_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (4))) goto event_3091_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(fan_281_instances));
            if (obj1 == NULL) goto compare_3091_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3091_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3091_6_end;
        }
        compare_3091_6_0_end: ;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_unscrewing_729)) > (0))) goto event_3091_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3091_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3091_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3091_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(156, str_unscrewing_729)) == (0))) goto event_3091_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_3091_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(400, str_itemhp_dmg_1211, 5);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(923, str_itemhp_slot_2239, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(927, str_unscrewx_2248, ((Active*)get_single(fan_281_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(928, str_unscrewy_2249, ((Active*)get_single(fan_281_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(929, str_unscrewval_2250, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_unscrewing_729)*4);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(930, str_unscrewtype_2251, str_slats_2245);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(cursor_178_instances))->x + 8, ((Active*)get_instance(cursor_178_instances))->y + 8));
        }
        {
            loop_unscrew_slats_check_running = true;
            int times = int(1);
            loop_unscrew_slats_check_index = 0;
            while (loop_unscrew_slats_check_index < times) {
                loop_unscrew_slats_check_6();
                if (!loop_unscrew_slats_check_running) break;
                loop_unscrew_slats_check_index++;
            }
        }
    }
    event_3091_6_end: ;
}
// Function purpose: generated callback event_func_4390 processes event block(s) 3094_6. Actions/conditions:
//        3094_6: sets LClick to 1; sets the target object's direction.
void Frames::event_func_4390()
{
    // event 3094_6 : sets LClick to 1; sets the target object's direction
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3094_6_end;
        library2_316_instances.clear_selection();
        for (ObjectIterator it(library2_316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!library2_316_instances.has_selection()) goto event_3094_6_end;
        cursor_178_instances.clear_selection();
        if (!check_overlap(cursor_178_instances, library2_316_instances)) goto event_3094_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3094_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3094_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3094_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3094_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(360, str_reading_1154)) < (1))) goto event_3094_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_single(library2_316_instances, it.current_index))->x + 16, ((Active*)get_single(library2_316_instances, it.current_index))->y + 8));
        }
        {
            loop_read_check_running = true;
            int times = int(1);
            loop_read_check_index = 0;
            while (loop_read_check_index < times) {
                loop_read_check_6();
                if (!loop_read_check_running) break;
                loop_read_check_index++;
            }
        }
    }
    event_3094_6_end: ;
}
// Function purpose: generated callback event_func_4391 processes event block(s) 3097_6. Actions/conditions:
//        3097_6: sets LClick to 1; sets the target object's direction.
void Frames::event_func_4391()
{
    // event 3097_6 : sets LClick to 1; sets the target object's direction
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3097_6_end;
        interwebs_380_instances.clear_selection();
        for (ObjectIterator it(interwebs_380_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!interwebs_380_instances.has_selection()) goto event_3097_6_end;
        cursor_178_instances.clear_selection();
        if (!check_overlap(cursor_178_instances, interwebs_380_instances)) goto event_3097_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3097_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3097_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3097_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3097_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(361, str_browsing_1155)) < (1))) goto event_3097_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_single(interwebs_380_instances, it.current_index))->x + 8, ((Active*)get_single(interwebs_380_instances, it.current_index))->y + 8));
        }
        {
            loop_browse_check_running = true;
            int times = int(1);
            loop_browse_check_index = 0;
            while (loop_browse_check_index < times) {
                loop_browse_check_6();
                if (!loop_browse_check_running) break;
                loop_browse_check_index++;
            }
        }
    }
    event_3097_6_end: ;
}
// Function purpose: generated callback event_func_4392 processes event block(s) 3100_6. Actions/conditions:
//        3100_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_4392()
{
    // event 3100_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3100_6_end;
        containerkitchen_229_instances.clear_selection();
        for (ObjectIterator it(containerkitchen_229_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!containerkitchen_229_instances.has_selection()) goto event_3100_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3100_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(containerkitchen_229_instances));
            if (obj1 == NULL) goto compare_3100_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3100_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 30)) goto event_3100_6_end;
        }
        compare_3100_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3100_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3100_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_3100_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_kitchen_12))) goto event_3100_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3100_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 65);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
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
    event_3100_6_end: ;
}
// Function purpose: generated callback event_func_4393 processes event block(s) 3101_6. Actions/conditions:
//        3101_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_4393()
{
    // event 3101_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3101_6_end;
        containerlaundrydirty_274_instances.clear_selection();
        for (ObjectIterator it(containerlaundrydirty_274_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!containerlaundrydirty_274_instances.has_selection()) goto event_3101_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(containerlaundrydirty_274_instances));
            if (obj1 == NULL) goto compare_3101_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3101_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 30)) goto event_3101_6_end;
        }
        compare_3101_6_0_end: ;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3101_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3101_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3101_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3101_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_3101_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 63+randrange_event(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
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
    event_3101_6_end: ;
}
// Function purpose: generated callback event_func_4394 processes event block(s) 3102_6. Actions/conditions:
//        3102_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_4394()
{
    // event 3102_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3102_6_end;
        containertimber_267_instances.clear_selection();
        for (ObjectIterator it(containertimber_267_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!containertimber_267_instances.has_selection()) goto event_3102_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(containertimber_267_instances));
            if (obj1 == NULL) goto compare_3102_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3102_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_3102_6_end;
        }
        compare_3102_6_0_end: ;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3102_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3102_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3102_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3102_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_3102_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 12);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
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
    event_3102_6_end: ;
}
// Function purpose: generated callback event_func_4395 processes event block(s) 3103_6. Actions/conditions:
//        3103_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_4395()
{
    // event 3103_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3103_6_end;
        containertailorout_395_instances.clear_selection();
        for (ObjectIterator it(containertailorout_395_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!containertailorout_395_instances.has_selection()) goto event_3103_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(playerBase_instances));
            if (obj1 == NULL) goto compare_3103_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_single(containertailorout_395_instances));
            if (obj2 == NULL) goto compare_3103_6_0_end;
            x2 = obj2->get_x() + 8;
            y2 = obj2->get_y() + 16;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_3103_6_end;
        }
        compare_3103_6_0_end: ;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3103_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3103_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3103_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3103_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_3103_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(11, str_done_447, 0);
        {
            loop_tailor_item_running = true;
            int times = int(1);
            loop_tailor_item_index = 0;
            while (loop_tailor_item_index < times) {
                loop_tailor_item_6();
                if (!loop_tailor_item_running) break;
                loop_tailor_item_index++;
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
    event_3103_6_end: ;
}
// Function purpose: generated callback event_func_4396 processes event block(s) 3107_6. Actions/conditions:
//        3107_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_4396()
{
    // event 3107_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3107_6_end;
        metalshop_326_instances.clear_selection();
        for (ObjectIterator it(metalshop_326_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!metalshop_326_instances.has_selection()) goto event_3107_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(playerBase_instances));
            if (obj1 == NULL) goto compare_3107_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_single(metalshop_326_instances));
            if (obj2 == NULL) goto compare_3107_6_0_end;
            x2 = obj2->get_x() + 8;
            y2 = obj2->get_y() + 16;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_3107_6_end;
        }
        compare_3107_6_0_end: ;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3107_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3107_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3107_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3107_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_3107_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 76);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
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
    event_3107_6_end: ;
}
// Function purpose: generated callback event_func_4397 processes event block(s) 3108_6. Actions/conditions:
//        3108_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_4397()
{
    // event 3108_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3108_6_end;
        truck_388_instances.clear_selection();
        for (ObjectIterator it(truck_388_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!truck_388_instances.has_selection()) goto event_3108_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(playerBase_instances));
            if (obj1 == NULL) goto compare_3108_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_single(truck_388_instances));
            if (obj2 == NULL) goto compare_3108_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 48)) goto event_3108_6_end;
        }
        compare_3108_6_0_end: ;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3108_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3108_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3108_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3108_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_3108_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_deliveries_577))) goto event_3108_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_deliv_item_running = true;
            int times = int(1);
            loop_deliv_item_index = 0;
            while (loop_deliv_item_index < times) {
                loop_deliv_item_6();
                if (!loop_deliv_item_running) break;
                loop_deliv_item_index++;
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
    event_3108_6_end: ;
}
// Function purpose: generated callback event_func_4398 processes event block(s) 3111_6. Actions/conditions:
//        3111_6: sets thisID to ((Active*)get_single(desks_305_instances,
//        default_active_instance))->alterables->values.get(0); sets thisRange to get_distance_int(get_mouse_x(),
//        get_mouse_y(), playerBase->get_x(), playerBase->get_y()).
void Frames::event_func_4398()
{
    // event 3111_6 : sets thisID to ((Active*)get_single(desks_305_instances, default_active_instance))->alterables->values.get(0); sets thisRange to get_distance_int(get_mouse_x(), get_mouse_y(), playerBase->get_x(), playerBase->get_y())
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3111_6_end;
        desks_305_instances.clear_selection();
        for (ObjectIterator it(desks_305_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!desks_305_instances.has_selection()) goto event_3111_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(931, str_thisid_2252, ((Active*)get_single(desks_305_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(932, str_thisrange_2253, get_distance_int(get_mouse_x(), get_mouse_y(), ((Active*)get_instance(playerBase_instances))->get_x(), ((Active*)get_instance(playerBase_instances))->get_y()));
    }
    event_3111_6_end: ;
}
// Function purpose: generated callback event_func_4399 processes event block(s) 3112_6. Actions/conditions:
//        3112_6: sets LClick to 1; sets Searching_Desk to 100; sets CurrentContainer to
//        ((Active*)get_single(desks_305_instances, default_active_instance))->alterables->values.get(0); plus 7 more
//        actions.
void Frames::event_func_4399()
{
    // event 3112_6 : sets LClick to 1; sets Searching_Desk to 100; sets CurrentContainer to ((Active*)get_single(desks_305_instances, default_active_instance))->alterables->values.get(0); plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3112_6_end;
        desks_305_instances.clear_selection();
        for (ObjectIterator it(desks_305_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!desks_305_instances.has_selection()) goto event_3112_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(931, str_thisid_2252)) != (((AssociateArray*)get_instance(gameVariables_instances))->get_value(397, str_yourdesk_1208)))) goto event_3112_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(932, str_thisrange_2253)) <= (20))) goto event_3112_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(362, str_searching_desk_1156)) == (0))) goto event_3112_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3112_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3112_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(12)) goto event_3112_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3112_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3112_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(362, str_searching_desk_1156, 100);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(337, str_currentcontainer_1126, ((Active*)get_single(desks_305_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(774, str_desklooking_1954, ((Active*)get_single(desks_305_instances, default_active_instance))->alterables->values.get(0));
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_single(desks_305_instances, it.current_index))->x + 0, ((Active*)get_single(desks_305_instances, it.current_index))->y + 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(402, str_actype_1216, ((INI*)get_instance(translationData_instances))->get_string(str_action_857, str_1_97));
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
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_3112_6_end: ;
}
// Function purpose: generated callback event_func_4400 processes event block(s) 3113_6. Actions/conditions:
//        3113_6: sets LClick to 1; sets CurrentContainer to ((Active*)get_single(desks_305_instances,
//        default_active_instance))->alterables->values.get(0); sets the object's animation to 16; plus 10 more
//        actions.
void Frames::event_func_4400()
{
    // event 3113_6 : sets LClick to 1; sets CurrentContainer to ((Active*)get_single(desks_305_instances, default_active_instance))->alterables->values.get(0); sets the object's animation to 16; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3113_6_end;
        desks_305_instances.clear_selection();
        for (ObjectIterator it(desks_305_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!desks_305_instances.has_selection()) goto event_3113_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(931, str_thisid_2252)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(397, str_yourdesk_1208)))) goto event_3113_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(932, str_thisrange_2253)) <= (20))) goto event_3113_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3113_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3113_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(12)) goto event_3113_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3113_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3113_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(337, str_currentcontainer_1126, ((Active*)get_single(desks_305_instances, default_active_instance))->alterables->values.get(0));
        ((Active*)get_instance(dialogPanel_instances))->force_animation(16);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_68_2254));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+4);
            ((Text*)*it)->set_visible(true);
        }
        {
            loop_build_desk_running = true;
            int times = int(20);
            loop_build_desk_index = 0;
            while (loop_build_desk_index < times) {
                loop_build_desk_6();
                if (!loop_build_desk_running) break;
                loop_build_desk_index++;
            }
        }
        {
            loop_fill_desk_running = true;
            int times = int(20);
            loop_fill_desk_index = 0;
            while (loop_fill_desk_index < times) {
                loop_fill_desk_6();
                if (!loop_fill_desk_running) break;
                loop_fill_desk_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_3113_6_end: ;
}
// Function purpose: generated callback event_func_4401 processes event block(s) 3114_6. Actions/conditions:
//        3114_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_4401()
{
    // event 3114_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3114_6_end;
        containermedical_269_instances.clear_selection();
        for (ObjectIterator it(containermedical_269_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!containermedical_269_instances.has_selection()) goto event_3114_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(playerBase_instances));
            if (obj1 == NULL) goto compare_3114_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_single(containermedical_269_instances));
            if (obj2 == NULL) goto compare_3114_6_0_end;
            x2 = obj2->get_x() + 8;
            y2 = obj2->get_y() + 8;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3114_6_end;
        }
        compare_3114_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3114_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3114_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3114_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3114_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(12)) goto event_3114_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(337, str_currentcontainer_1126, ((Active*)get_single(containermedical_269_instances, default_active_instance))->alterables->values.get(0));
        {
            loop_medibox_check_running = true;
            int times = int(1);
            loop_medibox_check_index = 0;
            while (loop_medibox_check_index < times) {
                loop_medibox_check_6();
                if (!loop_medibox_check_running) break;
                loop_medibox_check_index++;
            }
        }
    }
    event_3114_6_end: ;
}
// Function purpose: generated callback event_func_4402 processes event block(s) 3118_6. Actions/conditions:
//        3118_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 14 more actions.
void Frames::event_func_4402()
{
    // event 3118_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 14 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3118_6_end;
        containercanteen_230_instances.clear_selection();
        for (ObjectIterator it(containercanteen_230_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!containercanteen_230_instances.has_selection()) goto event_3118_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(playerBase_instances));
            if (obj1 == NULL) goto compare_3118_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_single(containercanteen_230_instances));
            if (obj2 == NULL) goto compare_3118_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3118_6_end;
        }
        compare_3118_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3118_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3118_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3118_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3118_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(12)) goto event_3118_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(337, str_currentcontainer_1126, ((Active*)get_single(containercanteen_230_instances, default_active_instance))->alterables->values.get(0));
        ((Active*)get_instance(dialogPanel_instances))->force_animation(23);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_13_632));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
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
                loop_fill_container_6();
                if (!loop_fill_container_running) break;
                loop_fill_container_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_3118_6_end: ;
}
// Function purpose: generated callback event_func_4403 processes event block(s) 3119_6. Actions/conditions:
//        3119_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 14 more actions.
void Frames::event_func_4403()
{
    // event 3119_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 14 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3119_6_end;
        containergardening_409_instances.clear_selection();
        for (ObjectIterator it(containergardening_409_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!containergardening_409_instances.has_selection()) goto event_3119_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(playerBase_instances));
            if (obj1 == NULL) goto compare_3119_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_single(containergardening_409_instances));
            if (obj2 == NULL) goto compare_3119_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 30)) goto event_3119_6_end;
        }
        compare_3119_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3119_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3119_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3119_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3119_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(12)) goto event_3119_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(337, str_currentcontainer_1126, ((Active*)get_single(containergardening_409_instances, default_active_instance))->alterables->values.get(0));
        ((Active*)get_instance(dialogPanel_instances))->force_animation(23);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_67_2188));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
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
                loop_fill_container_6();
                if (!loop_fill_container_running) break;
                loop_fill_container_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_3119_6_end: ;
}
// Function purpose: generated callback event_func_4404 processes event block(s) 3120_6. Actions/conditions:
//        3120_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 14 more actions.
void Frames::event_func_4404()
{
    // event 3120_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 14 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3120_6_end;
        containerjanitor_270_instances.clear_selection();
        for (ObjectIterator it(containerjanitor_270_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!containerjanitor_270_instances.has_selection()) goto event_3120_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(playerBase_instances));
            if (obj1 == NULL) goto compare_3120_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_single(containerjanitor_270_instances));
            if (obj2 == NULL) goto compare_3120_6_0_end;
            x2 = obj2->get_x() + 8;
            y2 = obj2->get_y() + 8;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3120_6_end;
        }
        compare_3120_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3120_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3120_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3120_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3120_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(12)) goto event_3120_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(337, str_currentcontainer_1126, ((Active*)get_single(containerjanitor_270_instances, default_active_instance))->alterables->values.get(0));
        ((Active*)get_instance(dialogPanel_instances))->force_animation(23);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_10_329));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
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
                loop_fill_container_6();
                if (!loop_fill_container_running) break;
                loop_fill_container_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_3120_6_end: ;
}
// Function purpose: generated callback event_func_4405 processes event block(s) 3121_6. Actions/conditions:
//        3121_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 14 more actions.
void Frames::event_func_4405()
{
    // event 3121_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 14 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3121_6_end;
        desksdlc_482_instances.clear_selection();
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!desksdlc_482_instances.has_selection()) goto event_3121_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(playerBase_instances));
            if (obj1 == NULL) goto compare_3121_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_single(desksdlc_482_instances));
            if (obj2 == NULL) goto compare_3121_6_0_end;
            x2 = obj2->get_x() + 8;
            y2 = obj2->get_y() + 8;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3121_6_end;
        }
        compare_3121_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3121_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3121_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3121_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3121_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(12)) goto event_3121_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(337, str_currentcontainer_1126, ((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0));
        ((Active*)get_instance(dialogPanel_instances))->force_animation(23);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_68_2254));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
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
                loop_fill_container_6();
                if (!loop_fill_container_running) break;
                loop_fill_container_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_3121_6_end: ;
}
// Function purpose: generated callback event_func_4406 processes event block(s) 3126_6. Actions/conditions:
//        3126_6: sets LClick to 1.
void Frames::event_func_4406()
{
    // event 3126_6 : sets LClick to 1
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3126_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3126_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->mouse_over()) goto event_3126_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) goto event_3126_6_end;
        }
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3126_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(16))) goto event_3126_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3126_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_des_container_items_running = true;
            int times = int(1);
            loop_des_container_items_index = 0;
            while (loop_des_container_items_index < times) {
                loop_des_container_items_6();
                if (!loop_des_container_items_running) break;
                loop_des_container_items_index++;
            }
        }
    }
    event_3126_6_end: ;
}
// Function purpose: generated callback event_func_4407 processes event block(s) 3127_6. Actions/conditions:
//        3127_6: sets LClick to 1.
void Frames::event_func_4407()
{
    // event 3127_6 : sets LClick to 1
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3127_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3127_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->mouse_over()) goto event_3127_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) goto event_3127_6_end;
        }
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3127_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(23))) goto event_3127_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_des_container_items_running = true;
            int times = int(1);
            loop_des_container_items_index = 0;
            while (loop_des_container_items_index < times) {
                loop_des_container_items_6();
                if (!loop_des_container_items_running) break;
                loop_des_container_items_index++;
            }
        }
    }
    event_3127_6_end: ;
}
// Function purpose: generated callback event_func_4408 processes event block(s) 3133_6. Actions/conditions:
//        3133_6: checks scene is active; game state CCL; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_4408()
{
    // event 3133_6 : checks scene is active; game state CCL; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3133_6_end;
        if (group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_ccl_1) goto event_3133_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_3133_6_end;
        if (!group_code_left_clicked_ccl_1) {
            group_code_left_clicked_ccl_1 = true;
        }
    }
    event_3133_6_end: ;
}
// Function purpose: generated callback event_func_4409 processes event block(s) 3134_6. Actions/conditions:
//        3134_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 14 more actions.
void Frames::event_func_4409()
{
    // event 3134_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 14 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_ccl_1)) goto event_3134_6_end;
        cclsleigh_519_instances.clear_selection();
        for (ObjectIterator it(cclsleigh_519_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!cclsleigh_519_instances.has_selection()) goto event_3134_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(cclsleigh_519_instances));
            if (obj1 == NULL) goto compare_3134_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3134_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 64)) goto event_3134_6_end;
        }
        compare_3134_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3134_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3134_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3134_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3134_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(28);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        FrameObject * single_instance_3134_6_1; single_instance_3134_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -105, parent->y + -30), parent->layer);
                if (single_instance_3134_6_1 == NULL)
                    single_instance_3134_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3134_6_1))->blend_color.set(Color(55, 44, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_ccl_130, str_sleigh_1_2255));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__198));
        ((Text*)((Text*)single_instance_3134_6_1))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        media.play_id(SOUND_OPEN_5, 1-1);
        {
            loop_sleigh_footer_running = true;
            int times = int(1);
            loop_sleigh_footer_index = 0;
            while (loop_sleigh_footer_index < times) {
                loop_sleigh_footer_6();
                if (!loop_sleigh_footer_running) break;
                loop_sleigh_footer_index++;
            }
        }
    }
    event_3134_6_end: ;
}
// Function purpose: generated callback event_func_4410 processes event block(s) 3135_6. Actions/conditions:
//        3135_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 9 more actions.
void Frames::event_func_4410()
{
    // event 3135_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_ccl_1)) goto event_3135_6_end;
        cclsleigh_519_instances.clear_selection();
        for (ObjectIterator it(cclsleigh_519_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!cclsleigh_519_instances.has_selection()) goto event_3135_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3135_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (278))) goto event_3135_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3135_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(cclsleigh_519_instances));
            if (obj1 == NULL) goto compare_3135_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3135_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 64)) goto event_3135_6_end;
        }
        compare_3135_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3135_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3135_6_end;
        for (ObjectIterator it(cclsleigh_519_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 2);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(230, str_sleighstage_840, 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        FrameObject * single_instance_3135_6_1; single_instance_3135_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(cclsleigh_519_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3135_6_1 == NULL)
                    single_instance_3135_6_1 = new_obj;
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
        media.play_id(SOUND_ACCOLADE_9, 1-1);
    }
    event_3135_6_end: ;
}
// Function purpose: generated callback event_func_4411 processes event block(s) 3136_6. Actions/conditions:
//        3136_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 14 more actions.
void Frames::event_func_4411()
{
    // event 3136_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 14 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_ccl_1)) goto event_3136_6_end;
        cclsleigh_519_instances.clear_selection();
        for (ObjectIterator it(cclsleigh_519_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!cclsleigh_519_instances.has_selection()) goto event_3136_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3136_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(cclsleigh_519_instances));
            if (obj1 == NULL) goto compare_3136_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3136_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 64)) goto event_3136_6_end;
        }
        compare_3136_6_0_end: ;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3136_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3136_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3136_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(28);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        FrameObject * single_instance_3136_6_1; single_instance_3136_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -105, parent->y + -30), parent->layer);
                if (single_instance_3136_6_1 == NULL)
                    single_instance_3136_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3136_6_1))->blend_color.set(Color(55, 44, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_ccl_130, str_sleigh_2_2256));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__198));
        ((Text*)((Text*)single_instance_3136_6_1))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        media.play_id(SOUND_OPEN_5, 1-1);
        {
            loop_sleigh_footer_running = true;
            int times = int(1);
            loop_sleigh_footer_index = 0;
            while (loop_sleigh_footer_index < times) {
                loop_sleigh_footer_6();
                if (!loop_sleigh_footer_running) break;
                loop_sleigh_footer_index++;
            }
        }
    }
    event_3136_6_end: ;
}
// Function purpose: generated callback event_func_4412 processes event block(s) 3137_6. Actions/conditions:
//        3137_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 9 more actions.
void Frames::event_func_4412()
{
    // event 3137_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_ccl_1)) goto event_3137_6_end;
        cclsleigh_519_instances.clear_selection();
        for (ObjectIterator it(cclsleigh_519_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!cclsleigh_519_instances.has_selection()) goto event_3137_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3137_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (276))) goto event_3137_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(cclsleigh_519_instances));
            if (obj1 == NULL) goto compare_3137_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3137_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 64)) goto event_3137_6_end;
        }
        compare_3137_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3137_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3137_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3137_6_end;
        for (ObjectIterator it(cclsleigh_519_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 3);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(230, str_sleighstage_840, 3);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        FrameObject * single_instance_3137_6_1; single_instance_3137_6_1 = NULL;
        // select single: true false false
        sssobjects_502_instances.clear_selection();
        for (ObjectIterator p_it(sssobjects_502_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3137_6_1 == NULL)
                    single_instance_3137_6_1 = new_obj;
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
        media.play_id(SOUND_ACCOLADE_9, 1-1);
    }
    event_3137_6_end: ;
}
// Function purpose: generated callback event_func_4413 processes event block(s) 3138_6. Actions/conditions:
//        3138_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 14 more actions.
void Frames::event_func_4413()
{
    // event 3138_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 14 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_ccl_1)) goto event_3138_6_end;
        cclsleigh_519_instances.clear_selection();
        for (ObjectIterator it(cclsleigh_519_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!cclsleigh_519_instances.has_selection()) goto event_3138_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(cclsleigh_519_instances));
            if (obj1 == NULL) goto compare_3138_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3138_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 64)) goto event_3138_6_end;
        }
        compare_3138_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3138_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3138_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3138_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3138_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(28);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        FrameObject * single_instance_3138_6_1; single_instance_3138_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -105, parent->y + -30), parent->layer);
                if (single_instance_3138_6_1 == NULL)
                    single_instance_3138_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3138_6_1))->blend_color.set(Color(55, 44, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_ccl_130, str_sleigh_3_2257));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__198));
        ((Text*)((Text*)single_instance_3138_6_1))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        media.play_id(SOUND_OPEN_5, 1-1);
        {
            loop_sleigh_footer_running = true;
            int times = int(1);
            loop_sleigh_footer_index = 0;
            while (loop_sleigh_footer_index < times) {
                loop_sleigh_footer_6();
                if (!loop_sleigh_footer_running) break;
                loop_sleigh_footer_index++;
            }
        }
    }
    event_3138_6_end: ;
}
// Function purpose: generated callback event_func_4414 processes event block(s) 3139_6. Actions/conditions:
//        3139_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 9 more actions.
void Frames::event_func_4414()
{
    // event 3139_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_ccl_1)) goto event_3139_6_end;
        cclsleigh_519_instances.clear_selection();
        for (ObjectIterator it(cclsleigh_519_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!cclsleigh_519_instances.has_selection()) goto event_3139_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3139_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (270))) goto event_3139_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3139_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(cclsleigh_519_instances));
            if (obj1 == NULL) goto compare_3139_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3139_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 64)) goto event_3139_6_end;
        }
        compare_3139_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3139_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3139_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(230, str_sleighstage_840, 4);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        FrameObject * single_instance_3139_6_1; single_instance_3139_6_1 = NULL;
        // select single: true false false
        sssobjects_502_instances.clear_selection();
        for (ObjectIterator p_it(sssobjects_502_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3139_6_1 == NULL)
                    single_instance_3139_6_1 = new_obj;
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
        media.play_id(SOUND_ACCOLADE_9, 1-1);
        cclsleigh_519_instances.clear_selection();
        for (ObjectIterator it(cclsleigh_519_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 4);
        }
    }
    event_3139_6_end: ;
}
// Function purpose: generated callback event_func_4415 processes event block(s) 3140_6. Actions/conditions:
//        3140_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 14 more actions.
void Frames::event_func_4415()
{
    // event 3140_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 14 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_ccl_1)) goto event_3140_6_end;
        cclsleigh_519_instances.clear_selection();
        for (ObjectIterator it(cclsleigh_519_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!cclsleigh_519_instances.has_selection()) goto event_3140_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(cclsleigh_519_instances));
            if (obj1 == NULL) goto compare_3140_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3140_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 64)) goto event_3140_6_end;
        }
        compare_3140_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3140_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3140_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3140_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3140_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(28);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        FrameObject * single_instance_3140_6_1; single_instance_3140_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -105, parent->y + -30), parent->layer);
                if (single_instance_3140_6_1 == NULL)
                    single_instance_3140_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3140_6_1))->blend_color.set(Color(55, 44, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_ccl_130, str_sleigh_4_2258));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__198));
        ((Text*)((Text*)single_instance_3140_6_1))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        media.play_id(SOUND_OPEN_5, 1-1);
        {
            loop_sleigh_footer_running = true;
            int times = int(1);
            loop_sleigh_footer_index = 0;
            while (loop_sleigh_footer_index < times) {
                loop_sleigh_footer_6();
                if (!loop_sleigh_footer_running) break;
                loop_sleigh_footer_index++;
            }
        }
    }
    event_3140_6_end: ;
}
// Function purpose: generated callback event_func_4416 processes event block(s) 3141_6. Actions/conditions:
//        3141_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 9 more actions.
void Frames::event_func_4416()
{
    // event 3141_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_ccl_1)) goto event_3141_6_end;
        cclsleigh_519_instances.clear_selection();
        for (ObjectIterator it(cclsleigh_519_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!cclsleigh_519_instances.has_selection()) goto event_3141_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3141_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (275))) goto event_3141_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3141_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(cclsleigh_519_instances));
            if (obj1 == NULL) goto compare_3141_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3141_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 64)) goto event_3141_6_end;
        }
        compare_3141_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3141_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3141_6_end;
        sssobjects_502_instances.clear_selection();
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(230, str_sleighstage_840, 5);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        FrameObject * single_instance_3141_6_1; single_instance_3141_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(sssobjects_502_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3141_6_1 == NULL)
                    single_instance_3141_6_1 = new_obj;
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
        media.play_id(SOUND_ACCOLADE_9, 1-1);
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
    event_3141_6_end: ;
}
// Function purpose: generated callback event_func_4417 processes event block(s) 3144_6. Actions/conditions:
//        3144_6: sets LClick to 1; sets the selected object's visibility to false; removes the selected object; plus
//        1 more actions.
void Frames::event_func_4417()
{
    // event 3144_6 : sets LClick to 1; sets the selected object's visibility to false; removes the selected object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_ccl_1)) goto event_3144_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(43))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_3144_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3144_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(28))) goto event_3144_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(65536))) goto event_3144_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3144_6_end;
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
        media.play_id(SOUND_CLOSE_6, 1-1);
    }
    event_3144_6_end: ;
}
// Function purpose: generated callback event_func_4418 processes event block(s) 3145_6. Actions/conditions:
//        3145_6: sets HaltMusic to 0; plays a sound or music track; plays a sound or music track; plus 5 more
//        actions.
void Frames::event_func_4418()
{
    // event 3145_6 : sets HaltMusic to 0; plays a sound or music track; plays a sound or music track; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_ccl_1)) goto event_3145_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3145_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3145_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(29))) goto event_3145_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(16))) goto event_3145_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3145_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(882, str_haltmusic_2066, 0);
        media.play(str_music_2119+((AssociateArray*)get_instance(gameVariables_instances))->get_string(883, str_lastmusic_2067)+str_ogg_2120, 10-1, 0);
        media.play_id(SOUND_CLOSE_6, 1-1);
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_3145_6_end: ;
}
// Function purpose: generated callback event_func_4419 processes event block(s) 3146_6. Actions/conditions:
//        3146_6: checks scene is active; game state SSS; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_4419()
{
    // event 3146_6 : checks scene is active; game state SSS; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3146_6_end;
        if (group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_sss_1) goto event_3146_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_3146_6_end;
        if (!group_code_left_clicked_sss_1) {
            group_code_left_clicked_sss_1 = true;
        }
    }
    event_3146_6_end: ;
}
// Function purpose: generated callback event_func_4420 processes event block(s) 3147_6. Actions/conditions:
//        3147_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 14 more actions.
void Frames::event_func_4420()
{
    // event 3147_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 14 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_sss_1)) goto event_3147_6_end;
        sssobjects_502_instances.clear_selection();
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_tree_941))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!sssobjects_502_instances.has_selection()) goto event_3147_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(sssobjects_502_instances));
            if (obj1 == NULL) goto compare_3147_6_0_end;
            x1 = obj1->get_x() + 24;
            y1 = obj1->get_y() + 40;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3147_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 50)) goto event_3147_6_end;
        }
        compare_3147_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3147_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3147_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3147_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3147_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(28);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        FrameObject * single_instance_3147_6_1; single_instance_3147_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -105, parent->y + -30), parent->layer);
                if (single_instance_3147_6_1 == NULL)
                    single_instance_3147_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3147_6_1))->blend_color.set(Color(55, 44, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_tree_1_2259));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__198));
        ((Text*)((Text*)single_instance_3147_6_1))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        media.play_id(SOUND_OPEN_5, 1-1);
        {
            loop_tree_footer_running = true;
            int times = int(1);
            loop_tree_footer_index = 0;
            while (loop_tree_footer_index < times) {
                loop_tree_footer_6();
                if (!loop_tree_footer_running) break;
                loop_tree_footer_index++;
            }
        }
    }
    event_3147_6_end: ;
}
// Function purpose: generated callback event_func_4421 processes event block(s) 3148_6. Actions/conditions:
//        3148_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 10 more actions.
void Frames::event_func_4421()
{
    // event 3148_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_sss_1)) goto event_3148_6_end;
        sssobjects_502_instances.clear_selection();
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_tree_941))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!sssobjects_502_instances.has_selection()) goto event_3148_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3148_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (249))) goto event_3148_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3148_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(sssobjects_502_instances));
            if (obj1 == NULL) goto compare_3148_6_0_end;
            x1 = obj1->get_x() + 24;
            y1 = obj1->get_y() + 40;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3148_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 50)) goto event_3148_6_end;
        }
        compare_3148_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3148_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3148_6_end;
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(4);
            ((Active*)*it)->alterables->values.set(0, 2);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(163, str_treestage_737, 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        FrameObject * single_instance_3148_6_1; single_instance_3148_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(sssobjects_502_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3148_6_1 == NULL)
                    single_instance_3148_6_1 = new_obj;
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
        media.play_id(SOUND_ACCOLADE_9, 1-1);
        {
            loop_ss_tinsel_running = true;
            int times = int(1);
            loop_ss_tinsel_index = 0;
            while (loop_ss_tinsel_index < times) {
                loop_ss_tinsel_6();
                if (!loop_ss_tinsel_running) break;
                loop_ss_tinsel_index++;
            }
        }
    }
    event_3148_6_end: ;
}
// Function purpose: generated callback event_func_4422 processes event block(s) 3150_6. Actions/conditions:
//        3150_6: sets the selected object's direction to 4.
void Frames::event_func_4422()
{
    // event 3150_6 : sets the selected object's direction to 4
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_sss_1)) goto event_3150_6_end;
        sssobjects_502_instances.clear_selection();
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_tree_941))) { it.deselect(); continue; }
        }
        if (!sssobjects_502_instances.has_selection()) goto event_3150_6_end;
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(4);
        }
    }
    event_3150_6_end: ;
}
// Function purpose: generated callback event_func_4423 processes event block(s) 3151_6. Actions/conditions:
//        3151_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 14 more actions.
void Frames::event_func_4423()
{
    // event 3151_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 14 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_sss_1)) goto event_3151_6_end;
        sssobjects_502_instances.clear_selection();
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_tree_941))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!sssobjects_502_instances.has_selection()) goto event_3151_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3151_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(sssobjects_502_instances));
            if (obj1 == NULL) goto compare_3151_6_0_end;
            x1 = obj1->get_x() + 24;
            y1 = obj1->get_y() + 40;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3151_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 50)) goto event_3151_6_end;
        }
        compare_3151_6_0_end: ;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3151_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3151_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3151_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(28);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        FrameObject * single_instance_3151_6_1; single_instance_3151_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -105, parent->y + -30), parent->layer);
                if (single_instance_3151_6_1 == NULL)
                    single_instance_3151_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3151_6_1))->blend_color.set(Color(55, 44, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_tree_2_2260));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__198));
        ((Text*)((Text*)single_instance_3151_6_1))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        media.play_id(SOUND_OPEN_5, 1-1);
        {
            loop_tree_footer_running = true;
            int times = int(1);
            loop_tree_footer_index = 0;
            while (loop_tree_footer_index < times) {
                loop_tree_footer_6();
                if (!loop_tree_footer_running) break;
                loop_tree_footer_index++;
            }
        }
    }
    event_3151_6_end: ;
}
// Function purpose: generated callback event_func_4424 processes event block(s) 3152_6. Actions/conditions:
//        3152_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 10 more actions.
void Frames::event_func_4424()
{
    // event 3152_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_sss_1)) goto event_3152_6_end;
        sssobjects_502_instances.clear_selection();
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_tree_941))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!sssobjects_502_instances.has_selection()) goto event_3152_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3152_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (242))) goto event_3152_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(sssobjects_502_instances));
            if (obj1 == NULL) goto compare_3152_6_0_end;
            x1 = obj1->get_x() + 24;
            y1 = obj1->get_y() + 40;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3152_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 50)) goto event_3152_6_end;
        }
        compare_3152_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3152_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3152_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3152_6_end;
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->alterables->values.set(0, 3);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(163, str_treestage_737, 3);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        FrameObject * single_instance_3152_6_1; single_instance_3152_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(sssobjects_502_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3152_6_1 == NULL)
                    single_instance_3152_6_1 = new_obj;
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
        media.play_id(SOUND_ACCOLADE_9, 1-1);
        {
            loop_ss_lights_running = true;
            int times = int(1);
            loop_ss_lights_index = 0;
            while (loop_ss_lights_index < times) {
                loop_ss_lights_6();
                if (!loop_ss_lights_running) break;
                loop_ss_lights_index++;
            }
        }
    }
    event_3152_6_end: ;
}
// Function purpose: generated callback event_func_4425 processes event block(s) 3154_6. Actions/conditions:
//        3154_6: sets the selected object's direction to 8.
void Frames::event_func_4425()
{
    // event 3154_6 : sets the selected object's direction to 8
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_sss_1)) goto event_3154_6_end;
        sssobjects_502_instances.clear_selection();
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_tree_941))) { it.deselect(); continue; }
        }
        if (!sssobjects_502_instances.has_selection()) goto event_3154_6_end;
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
    }
    event_3154_6_end: ;
}
// Function purpose: generated callback event_func_4426 processes event block(s) 3155_6. Actions/conditions:
//        3155_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 14 more actions.
void Frames::event_func_4426()
{
    // event 3155_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 14 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_sss_1)) goto event_3155_6_end;
        sssobjects_502_instances.clear_selection();
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_tree_941))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!sssobjects_502_instances.has_selection()) goto event_3155_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(sssobjects_502_instances));
            if (obj1 == NULL) goto compare_3155_6_0_end;
            x1 = obj1->get_x() + 24;
            y1 = obj1->get_y() + 40;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3155_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 50)) goto event_3155_6_end;
        }
        compare_3155_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3155_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3155_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3155_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3155_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(28);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        FrameObject * single_instance_3155_6_1; single_instance_3155_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -105, parent->y + -30), parent->layer);
                if (single_instance_3155_6_1 == NULL)
                    single_instance_3155_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3155_6_1))->blend_color.set(Color(55, 44, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_tree_3_2261+number_to_string(randrange_event(4)+1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__198));
        ((Text*)((Text*)single_instance_3155_6_1))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        media.play_id(SOUND_OPEN_5, 1-1);
        {
            loop_tree_footer_running = true;
            int times = int(1);
            loop_tree_footer_index = 0;
            while (loop_tree_footer_index < times) {
                loop_tree_footer_6();
                if (!loop_tree_footer_running) break;
                loop_tree_footer_index++;
            }
        }
    }
    event_3155_6_end: ;
}
// Function purpose: generated callback event_func_4427 processes event block(s) 3156_6. Actions/conditions:
//        3156_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 10 more actions.
void Frames::event_func_4427()
{
    // event 3156_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_sss_1)) goto event_3156_6_end;
        sssobjects_502_instances.clear_selection();
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_tree_941))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!sssobjects_502_instances.has_selection()) goto event_3156_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3156_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (247))) goto event_3156_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3156_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(sssobjects_502_instances));
            if (obj1 == NULL) goto compare_3156_6_0_end;
            x1 = obj1->get_x() + 24;
            y1 = obj1->get_y() + 40;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3156_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 50)) goto event_3156_6_end;
        }
        compare_3156_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3156_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3156_6_end;
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(12);
            ((Active*)*it)->alterables->values.set(0, 4);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(163, str_treestage_737, 4);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        FrameObject * single_instance_3156_6_1; single_instance_3156_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(sssobjects_502_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3156_6_1 == NULL)
                    single_instance_3156_6_1 = new_obj;
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
        media.play_id(SOUND_ACCOLADE_9, 1-1);
        {
            loop_ss_gifts_running = true;
            int times = int(1);
            loop_ss_gifts_index = 0;
            while (loop_ss_gifts_index < times) {
                loop_ss_gifts_6();
                if (!loop_ss_gifts_running) break;
                loop_ss_gifts_index++;
            }
        }
    }
    event_3156_6_end: ;
}
// Function purpose: generated callback event_func_4428 processes event block(s) 3158_6. Actions/conditions:
//        3158_6: sets the selected object's direction to 12.
void Frames::event_func_4428()
{
    // event 3158_6 : sets the selected object's direction to 12
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_sss_1)) goto event_3158_6_end;
        sssobjects_502_instances.clear_selection();
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_tree_941))) { it.deselect(); continue; }
        }
        if (!sssobjects_502_instances.has_selection()) goto event_3158_6_end;
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(12);
        }
    }
    event_3158_6_end: ;
}
// Function purpose: generated callback event_func_4429 processes event block(s) 3159_6. Actions/conditions:
//        3159_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 14 more actions.
void Frames::event_func_4429()
{
    // event 3159_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 14 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_sss_1)) goto event_3159_6_end;
        sssobjects_502_instances.clear_selection();
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_tree_941))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!sssobjects_502_instances.has_selection()) goto event_3159_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(sssobjects_502_instances));
            if (obj1 == NULL) goto compare_3159_6_0_end;
            x1 = obj1->get_x() + 24;
            y1 = obj1->get_y() + 40;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3159_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 50)) goto event_3159_6_end;
        }
        compare_3159_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3159_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3159_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3159_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3159_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(28);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        FrameObject * single_instance_3159_6_1; single_instance_3159_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -105, parent->y + -30), parent->layer);
                if (single_instance_3159_6_1 == NULL)
                    single_instance_3159_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3159_6_1))->blend_color.set(Color(55, 44, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_tree_4_2262));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__198));
        ((Text*)((Text*)single_instance_3159_6_1))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        media.play_id(SOUND_OPEN_5, 1-1);
        {
            loop_tree_footer_running = true;
            int times = int(1);
            loop_tree_footer_index = 0;
            while (loop_tree_footer_index < times) {
                loop_tree_footer_6();
                if (!loop_tree_footer_running) break;
                loop_tree_footer_index++;
            }
        }
    }
    event_3159_6_end: ;
}
// Function purpose: generated callback event_func_4430 processes event block(s) 3160_6. Actions/conditions:
//        3160_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 10 more actions.
void Frames::event_func_4430()
{
    // event 3160_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_sss_1)) goto event_3160_6_end;
        sssobjects_502_instances.clear_selection();
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_tree_941))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!sssobjects_502_instances.has_selection()) goto event_3160_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3160_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (244))) goto event_3160_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3160_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(sssobjects_502_instances));
            if (obj1 == NULL) goto compare_3160_6_0_end;
            x1 = obj1->get_x() + 24;
            y1 = obj1->get_y() + 40;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3160_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 50)) goto event_3160_6_end;
        }
        compare_3160_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3160_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3160_6_end;
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->values.set(0, 5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(163, str_treestage_737, 5);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        FrameObject * single_instance_3160_6_1; single_instance_3160_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(sssobjects_502_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3160_6_1 == NULL)
                    single_instance_3160_6_1 = new_obj;
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
        media.play_id(SOUND_ACCOLADE_9, 1-1);
        {
            loop_ss_openwall_running = true;
            int times = int(1);
            loop_ss_openwall_index = 0;
            while (loop_ss_openwall_index < times) {
                loop_ss_openwall_6();
                if (!loop_ss_openwall_running) break;
                loop_ss_openwall_index++;
            }
        }
    }
    event_3160_6_end: ;
}
// Function purpose: generated callback event_func_4431 processes event block(s) 3161_6. Actions/conditions:
//        3161_6: sets the selected object's direction to 16.
void Frames::event_func_4431()
{
    // event 3161_6 : sets the selected object's direction to 16
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_sss_1)) goto event_3161_6_end;
        sssobjects_502_instances.clear_selection();
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_tree_941))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(65536)) { it.deselect(); continue; }
        }
        if (!sssobjects_502_instances.has_selection()) goto event_3161_6_end;
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        {
            loop_ss_openwall_running = true;
            int times = int(1);
            loop_ss_openwall_index = 0;
            while (loop_ss_openwall_index < times) {
                loop_ss_openwall_6();
                if (!loop_ss_openwall_running) break;
                loop_ss_openwall_index++;
            }
        }
    }
    event_3161_6_end: ;
}
// Function purpose: generated callback event_func_4432 processes event block(s) 3167_6. Actions/conditions:
//        3167_6: sets LClick to 1; sets the selected object's visibility to false; removes the selected object; plus
//        1 more actions.
void Frames::event_func_4432()
{
    // event 3167_6 : sets LClick to 1; sets the selected object's visibility to false; removes the selected object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_sss_1)) goto event_3167_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(43))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_3167_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3167_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(28))) goto event_3167_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(65536))) goto event_3167_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3167_6_end;
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
        media.play_id(SOUND_CLOSE_6, 1-1);
    }
    event_3167_6_end: ;
}
// Function purpose: generated callback event_func_4433 processes event block(s) 3168_6. Actions/conditions:
//        3168_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 21 more actions.
void Frames::event_func_4433()
{
    // event 3168_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 21 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_sss_1)) goto event_3168_6_end;
        sssobjects_502_instances.clear_selection();
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_sign_janitor_947))) { it.deselect(); continue; }
        }
        if (!sssobjects_502_instances.has_selection()) goto event_3168_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3168_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3168_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(sssobjects_502_instances));
            if (obj1 == NULL) goto compare_3168_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3168_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 30)) goto event_3168_6_end;
        }
        compare_3168_6_0_end: ;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3168_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3168_6_end;
        media.play(str_music_ss_sign1_ogg_2263, 10-1, 0);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(29);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(4);
        FrameObject * single_instance_3168_6_1; single_instance_3168_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -105, parent->y + -40), parent->layer);
                if (single_instance_3168_6_1 == NULL)
                    single_instance_3168_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3168_6_1))->blend_color.set(Color(55, 44, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_sign_janitor_947));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__624));
        ((Text*)((Text*)single_instance_3168_6_1))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        media.play_id(SOUND_OPEN_5, 1-1);
        FrameObject * single_instance_3168_6_2; single_instance_3168_6_2 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + -40), parent->layer);
                if (single_instance_3168_6_2 == NULL)
                    single_instance_3168_6_2 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3168_6_2))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_janitor_630)));
        ((Text*)((Text*)single_instance_3168_6_2))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_3168_6_2)), frame_left())+5);
        ((Text*)((Text*)single_instance_3168_6_2))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+14);
        ((Text*)((Text*)single_instance_3168_6_2))->set_bold(1);
        ((Text*)((Text*)single_instance_3168_6_2))->blend_color.set(Color(128, 0, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(882, str_haltmusic_2066, 1);
    }
    event_3168_6_end: ;
}
// Function purpose: generated callback event_func_4434 processes event block(s) 3169_6. Actions/conditions:
//        3169_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 21 more actions.
void Frames::event_func_4434()
{
    // event 3169_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 21 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_sss_1)) goto event_3169_6_end;
        sssobjects_502_instances.clear_selection();
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_sign_deliveries_950))) { it.deselect(); continue; }
        }
        if (!sssobjects_502_instances.has_selection()) goto event_3169_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3169_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3169_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(sssobjects_502_instances));
            if (obj1 == NULL) goto compare_3169_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3169_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 30)) goto event_3169_6_end;
        }
        compare_3169_6_0_end: ;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3169_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3169_6_end;
        media.play(str_music_ss_sign1_ogg_2263, 10-1, 0);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(29);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(4);
        FrameObject * single_instance_3169_6_1; single_instance_3169_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -105, parent->y + -40), parent->layer);
                if (single_instance_3169_6_1 == NULL)
                    single_instance_3169_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3169_6_1))->blend_color.set(Color(55, 44, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_sign_deliveries_950));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__624));
        ((Text*)((Text*)single_instance_3169_6_1))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        media.play_id(SOUND_OPEN_5, 1-1);
        FrameObject * single_instance_3169_6_2; single_instance_3169_6_2 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + -40), parent->layer);
                if (single_instance_3169_6_2 == NULL)
                    single_instance_3169_6_2 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3169_6_2))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_deliveries_634)));
        ((Text*)((Text*)single_instance_3169_6_2))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_3169_6_2)), frame_left())+5);
        ((Text*)((Text*)single_instance_3169_6_2))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+14);
        ((Text*)((Text*)single_instance_3169_6_2))->set_bold(1);
        ((Text*)((Text*)single_instance_3169_6_2))->blend_color.set(Color(128, 0, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(882, str_haltmusic_2066, 1);
    }
    event_3169_6_end: ;
}
// Function purpose: generated callback event_func_4435 processes event block(s) 3170_6. Actions/conditions:
//        3170_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 21 more actions.
void Frames::event_func_4435()
{
    // event 3170_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 21 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_sss_1)) goto event_3170_6_end;
        sssobjects_502_instances.clear_selection();
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_sign_tailor_948))) { it.deselect(); continue; }
        }
        if (!sssobjects_502_instances.has_selection()) goto event_3170_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3170_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3170_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(sssobjects_502_instances));
            if (obj1 == NULL) goto compare_3170_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3170_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 30)) goto event_3170_6_end;
        }
        compare_3170_6_0_end: ;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3170_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3170_6_end;
        media.play(str_music_ss_sign1_ogg_2263, 10-1, 0);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(29);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(4);
        FrameObject * single_instance_3170_6_1; single_instance_3170_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -105, parent->y + -40), parent->layer);
                if (single_instance_3170_6_1 == NULL)
                    single_instance_3170_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3170_6_1))->blend_color.set(Color(55, 44, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_sign_tailor_948));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__624));
        ((Text*)((Text*)single_instance_3170_6_1))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        media.play_id(SOUND_OPEN_5, 1-1);
        FrameObject * single_instance_3170_6_2; single_instance_3170_6_2 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + -40), parent->layer);
                if (single_instance_3170_6_2 == NULL)
                    single_instance_3170_6_2 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3170_6_2))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_tailor_631)));
        ((Text*)((Text*)single_instance_3170_6_2))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_3170_6_2)), frame_left())+5);
        ((Text*)((Text*)single_instance_3170_6_2))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+14);
        ((Text*)((Text*)single_instance_3170_6_2))->set_bold(1);
        ((Text*)((Text*)single_instance_3170_6_2))->blend_color.set(Color(128, 0, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(882, str_haltmusic_2066, 1);
    }
    event_3170_6_end: ;
}
// Function purpose: generated callback event_func_4436 processes event block(s) 3171_6. Actions/conditions:
//        3171_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 21 more actions.
void Frames::event_func_4436()
{
    // event 3171_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 21 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_sss_1)) goto event_3171_6_end;
        sssobjects_502_instances.clear_selection();
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_sign_mailman_949))) { it.deselect(); continue; }
        }
        if (!sssobjects_502_instances.has_selection()) goto event_3171_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3171_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3171_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(sssobjects_502_instances));
            if (obj1 == NULL) goto compare_3171_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3171_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 30)) goto event_3171_6_end;
        }
        compare_3171_6_0_end: ;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3171_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3171_6_end;
        media.play(str_music_ss_sign1_ogg_2263, 10-1, 0);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(29);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(4);
        FrameObject * single_instance_3171_6_1; single_instance_3171_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -105, parent->y + -40), parent->layer);
                if (single_instance_3171_6_1 == NULL)
                    single_instance_3171_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3171_6_1))->blend_color.set(Color(55, 44, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_sign_mailman_949));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__624));
        ((Text*)((Text*)single_instance_3171_6_1))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        media.play_id(SOUND_OPEN_5, 1-1);
        FrameObject * single_instance_3171_6_2; single_instance_3171_6_2 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + -40), parent->layer);
                if (single_instance_3171_6_2 == NULL)
                    single_instance_3171_6_2 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3171_6_2))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_mailman_633)));
        ((Text*)((Text*)single_instance_3171_6_2))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_3171_6_2)), frame_left())+5);
        ((Text*)((Text*)single_instance_3171_6_2))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+14);
        ((Text*)((Text*)single_instance_3171_6_2))->blend_color.set(Color(128, 0, 0));
        ((Text*)((Text*)single_instance_3171_6_2))->set_bold(1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(882, str_haltmusic_2066, 1);
    }
    event_3171_6_end: ;
}
// Function purpose: generated callback event_func_4437 processes event block(s) 3172_6. Actions/conditions:
//        3172_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 17 more actions.
void Frames::event_func_4437()
{
    // event 3172_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 17 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_sss_1)) goto event_3172_6_end;
        sssobjects_502_instances.clear_selection();
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_sign_warning_951))) { it.deselect(); continue; }
        }
        if (!sssobjects_502_instances.has_selection()) goto event_3172_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3172_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3172_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(sssobjects_502_instances));
            if (obj1 == NULL) goto compare_3172_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3172_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 30)) goto event_3172_6_end;
        }
        compare_3172_6_0_end: ;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3172_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3172_6_end;
        media.play(str_music_ss_sign2_ogg_2264, 10-1, 0);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(29);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(4);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_dtaf_137, str_sign2_469));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__624));
        media.play_id(SOUND_OPEN_5, 1-1);
        FrameObject * single_instance_3172_6_1; single_instance_3172_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + -40), parent->layer);
                if (single_instance_3172_6_1 == NULL)
                    single_instance_3172_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3172_6_1))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        ((Text*)((Text*)single_instance_3172_6_1))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_3172_6_1)), frame_left())+5);
        ((Text*)((Text*)single_instance_3172_6_1))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+20);
        ((Text*)((Text*)single_instance_3172_6_1))->blend_color.set(Color(55, 44, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(882, str_haltmusic_2066, 1);
    }
    event_3172_6_end: ;
}
// Function purpose: generated callback event_func_4438 processes event block(s) 3173_6. Actions/conditions:
//        3173_6: sets HaltMusic to 0; plays a sound or music track; plays a sound or music track; plus 5 more
//        actions.
void Frames::event_func_4438()
{
    // event 3173_6 : sets HaltMusic to 0; plays a sound or music track; plays a sound or music track; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_sss_1)) goto event_3173_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3173_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3173_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(29))) goto event_3173_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(16))) goto event_3173_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3173_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(882, str_haltmusic_2066, 0);
        media.play(str_music_2119+((AssociateArray*)get_instance(gameVariables_instances))->get_string(883, str_lastmusic_2067)+str_ogg_2120, 10-1, 0);
        media.play_id(SOUND_CLOSE_6, 1-1);
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_3173_6_end: ;
}
// Function purpose: generated callback event_func_4439 processes event block(s) 3174_6. Actions/conditions:
//        3174_6: checks scene is active; game state eTeam; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_4439()
{
    // event 3174_6 : checks scene is active; game state eTeam; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3174_6_end;
        if (group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_eteam_1) goto event_3174_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_3174_6_end;
        if (!group_code_left_clicked_eteam_1) {
            group_code_left_clicked_eteam_1 = true;
        }
    }
    event_3174_6_end: ;
}
// Function purpose: generated callback event_func_4440 processes event block(s) 3175_6. Actions/conditions:
//        3175_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 15 more actions.
void Frames::event_func_4440()
{
    // event 3175_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 15 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_eteam_1)) goto event_3175_6_end;
        eteamtank2_475_instances.clear_selection();
        for (ObjectIterator it(eteamtank2_475_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!eteamtank2_475_instances.has_selection()) goto event_3175_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3175_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3175_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(eteamtank2_475_instances));
            if (obj1 == NULL) goto compare_3175_6_0_end;
            x1 = obj1->get_x() + 120;
            y1 = obj1->get_y() + 120;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3175_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 40)) goto event_3175_6_end;
        }
        compare_3175_6_0_end: ;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3175_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3175_6_end;
        media.play(str_music_escteam_trumpet_ogg_2265, 10-1, 0);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(29);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(12);
        FrameObject * single_instance_3175_6_1; single_instance_3175_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -105, parent->y + -46), parent->layer);
                if (single_instance_3175_6_1 == NULL)
                    single_instance_3175_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3175_6_1))->blend_color.set(Color(55, 44, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_escteam_614, str_sign_2266));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__624));
        ((Text*)((Text*)single_instance_3175_6_1))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        media.play_id(SOUND_OPEN_5, 1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(882, str_haltmusic_2066, 1);
    }
    event_3175_6_end: ;
}
// Function purpose: generated callback event_func_4441 processes event block(s) 3176_6. Actions/conditions:
//        3176_6: plays a sound or music track; plays a sound or music track; removes the selected object; plus 5 more
//        actions.
void Frames::event_func_4441()
{
    // event 3176_6 : plays a sound or music track; plays a sound or music track; removes the selected object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_eteam_1)) goto event_3176_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3176_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3176_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(29))) goto event_3176_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(4096))) goto event_3176_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3176_6_end;
        media.play(str_music_2119+((AssociateArray*)get_instance(gameVariables_instances))->get_string(883, str_lastmusic_2067)+str_ogg_2120, 10-1, 0);
        media.play_id(SOUND_CLOSE_6, 1-1);
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(882, str_haltmusic_2066, 0);
    }
    event_3176_6_end: ;
}
// Function purpose: generated callback event_func_4442 processes event block(s) 3177_6. Actions/conditions:
//        3177_6: sets LClick to 1; sets the selected object's visibility to true; sets the object's animation to 28;
//        plus 10 more actions.
void Frames::event_func_4442()
{
    // event 3177_6 : sets LClick to 1; sets the selected object's visibility to true; sets the object's animation to 28; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_eteam_1)) goto event_3177_6_end;
        eteamtank_474_instances.clear_selection();
        for (ObjectIterator it(eteamtank_474_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!eteamtank_474_instances.has_selection()) goto event_3177_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3177_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3177_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3177_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3177_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(28);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        FrameObject * single_instance_3177_6_0; single_instance_3177_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -105, parent->y + -30), parent->layer);
                if (single_instance_3177_6_0 == NULL)
                    single_instance_3177_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3177_6_0))->blend_color.set(Color(55, 44, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_escteam_614, str_1_97));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__198));
        ((Text*)((Text*)single_instance_3177_6_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        media.play_id(SOUND_OPEN_5, 1-1);
        {
            loop_footer_running = true;
            int times = int(1);
            loop_footer_index = 0;
            while (loop_footer_index < times) {
                loop_footer_6();
                if (!loop_footer_running) break;
                loop_footer_index++;
            }
        }
    }
    event_3177_6_end: ;
}
// Function purpose: generated callback event_func_4443 processes event block(s) 3178_6. Actions/conditions:
//        3178_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 9 more actions.
void Frames::event_func_4443()
{
    // event 3178_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_eteam_1)) goto event_3178_6_end;
        eteamtank_474_instances.clear_selection();
        for (ObjectIterator it(eteamtank_474_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!eteamtank_474_instances.has_selection()) goto event_3178_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3178_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (202))) goto event_3178_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3178_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(eteamtank_474_instances));
            if (obj1 == NULL) goto compare_3178_6_0_end;
            x1 = obj1->get_x() + 32;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3178_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 40)) goto event_3178_6_end;
        }
        compare_3178_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3178_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3178_6_end;
        for (ObjectIterator it(eteamtank_474_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->alterables->values.set(2, 2);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        FrameObject * single_instance_3178_6_1; single_instance_3178_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(eteamtank_474_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 32, parent->y + 16), parent->layer);
                if (single_instance_3178_6_1 == NULL)
                    single_instance_3178_6_1 = new_obj;
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
        media.play_id(SOUND_ACCOLADE_9, 1-1);
        {
            loop_tanked_up_running = true;
            int times = int(1);
            loop_tanked_up_index = 0;
            while (loop_tanked_up_index < times) {
                loop_tanked_up_6();
                if (!loop_tanked_up_running) break;
                loop_tanked_up_index++;
            }
        }
    }
    event_3178_6_end: ;
}
// Function purpose: generated callback event_func_4444 processes event block(s) 3179_6. Actions/conditions:
//        3179_6: sets the object's animation to 5.
void Frames::event_func_4444()
{
    // event 3179_6 : sets the object's animation to 5
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_eteam_1)) goto event_3179_6_end;
        eteamtank_474_instances.clear_selection();
        for (ObjectIterator it(eteamtank_474_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (2))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(5)) { it.deselect(); continue; }
        }
        if (!eteamtank_474_instances.has_selection()) goto event_3179_6_end;
        for (ObjectIterator it(eteamtank_474_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
    }
    event_3179_6_end: ;
}
// Function purpose: generated callback event_func_4445 processes event block(s) 3181_6. Actions/conditions:
//        3181_6: sets LClick to 1; sets the selected object's visibility to true; sets the object's animation to 28;
//        plus 10 more actions.
void Frames::event_func_4445()
{
    // event 3181_6 : sets LClick to 1; sets the selected object's visibility to true; sets the object's animation to 28; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_eteam_1)) goto event_3181_6_end;
        eteamtank_474_instances.clear_selection();
        for (ObjectIterator it(eteamtank_474_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
        }
        if (!eteamtank_474_instances.has_selection()) goto event_3181_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3181_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3181_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3181_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3181_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(28);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        FrameObject * single_instance_3181_6_0; single_instance_3181_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -105, parent->y + -30), parent->layer);
                if (single_instance_3181_6_0 == NULL)
                    single_instance_3181_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3181_6_0))->blend_color.set(Color(55, 44, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_escteam_614, str_2_155));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__198));
        ((Text*)((Text*)single_instance_3181_6_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        media.play_id(SOUND_OPEN_5, 1-1);
        {
            loop_footer_running = true;
            int times = int(1);
            loop_footer_index = 0;
            while (loop_footer_index < times) {
                loop_footer_6();
                if (!loop_footer_running) break;
                loop_footer_index++;
            }
        }
    }
    event_3181_6_end: ;
}
// Function purpose: generated callback event_func_4446 processes event block(s) 3182_6. Actions/conditions:
//        3182_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 9 more actions.
void Frames::event_func_4446()
{
    // event 3182_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_eteam_1)) goto event_3182_6_end;
        eteamtank_474_instances.clear_selection();
        for (ObjectIterator it(eteamtank_474_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
        }
        if (!eteamtank_474_instances.has_selection()) goto event_3182_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3182_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (197))) goto event_3182_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3182_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(eteamtank_474_instances));
            if (obj1 == NULL) goto compare_3182_6_0_end;
            x1 = obj1->get_x() + 32;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3182_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 40)) goto event_3182_6_end;
        }
        compare_3182_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3182_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3182_6_end;
        for (ObjectIterator it(eteamtank_474_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->alterables->values.set(2, 3);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        FrameObject * single_instance_3182_6_1; single_instance_3182_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(eteamtank_474_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 32, parent->y + 16), parent->layer);
                if (single_instance_3182_6_1 == NULL)
                    single_instance_3182_6_1 = new_obj;
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
        media.play_id(SOUND_ACCOLADE_9, 1-1);
    }
    event_3182_6_end: ;
}
// Function purpose: generated callback event_func_4447 processes event block(s) 3183_6. Actions/conditions:
//        3183_6: sets LClick to 1; sets the selected object's visibility to true; sets the object's animation to 28;
//        plus 10 more actions.
void Frames::event_func_4447()
{
    // event 3183_6 : sets LClick to 1; sets the selected object's visibility to true; sets the object's animation to 28; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_eteam_1)) goto event_3183_6_end;
        eteamtank_474_instances.clear_selection();
        for (ObjectIterator it(eteamtank_474_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (3))) { it.deselect(); continue; }
        }
        if (!eteamtank_474_instances.has_selection()) goto event_3183_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3183_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3183_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3183_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3183_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(28);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        FrameObject * single_instance_3183_6_0; single_instance_3183_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -105, parent->y + -30), parent->layer);
                if (single_instance_3183_6_0 == NULL)
                    single_instance_3183_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3183_6_0))->blend_color.set(Color(55, 44, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_escteam_614, str_3_158));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__198));
        ((Text*)((Text*)single_instance_3183_6_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        media.play_id(SOUND_OPEN_5, 1-1);
        {
            loop_footer_running = true;
            int times = int(1);
            loop_footer_index = 0;
            while (loop_footer_index < times) {
                loop_footer_6();
                if (!loop_footer_running) break;
                loop_footer_index++;
            }
        }
    }
    event_3183_6_end: ;
}
// Function purpose: generated callback event_func_4448 processes event block(s) 3184_6. Actions/conditions:
//        3184_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 12 more actions.
void Frames::event_func_4448()
{
    // event 3184_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 12 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_eteam_1)) goto event_3184_6_end;
        eteamtank_474_instances.clear_selection();
        for (ObjectIterator it(eteamtank_474_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (3))) { it.deselect(); continue; }
        }
        if (!eteamtank_474_instances.has_selection()) goto event_3184_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3184_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (199))) goto event_3184_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3184_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(eteamtank_474_instances));
            if (obj1 == NULL) goto compare_3184_6_0_end;
            x1 = obj1->get_x() + 32;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3184_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 40)) goto event_3184_6_end;
        }
        compare_3184_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3184_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3184_6_end;
        for (ObjectIterator it(eteamtank_474_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(6);
            ((Active*)*it)->alterables->values.set(2, 4);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        FrameObject * single_instance_3184_6_1; single_instance_3184_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(eteamtank_474_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 85, parent->y + 8), parent->layer);
                if (single_instance_3184_6_1 == NULL)
                    single_instance_3184_6_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3184_6_1))->set_scale(2);
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
        media.play_id(SOUND_TANK_BOOM_25, 1-1);
        ((Active*)get_instance(camera_202_instances))->alterables->values.set(0, 5);
        eteamwalblock_483_instances.clear_selection();
        for (ObjectIterator it(eteamwalblock_483_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3184_6_end: ;
}
// Function purpose: generated callback event_func_4449 processes event block(s) 3187_6. Actions/conditions:
//        3187_6: sets LClick to 1; sets the selected object's visibility to false; removes the selected object; plus
//        1 more actions.
void Frames::event_func_4449()
{
    // event 3187_6 : sets LClick to 1; sets the selected object's visibility to false; removes the selected object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_eteam_1)) goto event_3187_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(43))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_3187_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3187_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(28))) goto event_3187_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(65536))) goto event_3187_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3187_6_end;
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
        media.play_id(SOUND_CLOSE_6, 1-1);
    }
    event_3187_6_end: ;
}
// Function purpose: generated callback event_func_4450 processes event block(s) 3188_6. Actions/conditions:
//        3188_6: checks scene is active; game state DTAF; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_4450()
{
    // event 3188_6 : checks scene is active; game state DTAF; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3188_6_end;
        if (group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_dtaf_1) goto event_3188_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_3188_6_end;
        if (!group_code_left_clicked_dtaf_1) {
            group_code_left_clicked_dtaf_1 = true;
        }
    }
    event_3188_6_end: ;
}
// Function purpose: generated callback event_func_4451 processes event block(s) 3189_6. Actions/conditions:
//        3189_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 18 more actions.
void Frames::event_func_4451()
{
    // event 3189_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 18 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_dtaf_1)) goto event_3189_6_end;
        dtafobjects_487_instances.clear_selection();
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_sign1_468))) { it.deselect(); continue; }
        }
        if (!dtafobjects_487_instances.has_selection()) goto event_3189_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3189_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3189_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(dtafobjects_487_instances));
            if (obj1 == NULL) goto compare_3189_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3189_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3189_6_end;
        }
        compare_3189_6_0_end: ;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3189_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3189_6_end;
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(29);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(4);
        FrameObject * single_instance_3189_6_1; single_instance_3189_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -105, parent->y + -40), parent->layer);
                if (single_instance_3189_6_1 == NULL)
                    single_instance_3189_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3189_6_1))->blend_color.set(Color(55, 44, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_dtaf_137, str_sign1_468));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__624));
        ((Text*)((Text*)single_instance_3189_6_1))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        media.play_id(SOUND_OPEN_5, 1-1);
        FrameObject * single_instance_3189_6_2; single_instance_3189_6_2 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + -40), parent->layer);
                if (single_instance_3189_6_2 == NULL)
                    single_instance_3189_6_2 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3189_6_2))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_dtaf_137, str_sign1_top_2267));
        ((Text*)((Text*)single_instance_3189_6_2))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_3189_6_2)), frame_left())+5);
        ((Text*)((Text*)single_instance_3189_6_2))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+14);
        ((Text*)((Text*)single_instance_3189_6_2))->blend_color.set(Color(128, 0, 0));
        {
            loop_dtaf_sign_achievement_running = true;
            int times = int(1);
            loop_dtaf_sign_achievement_index = 0;
            while (loop_dtaf_sign_achievement_index < times) {
                loop_dtaf_sign_achievement_6();
                if (!loop_dtaf_sign_achievement_running) break;
                loop_dtaf_sign_achievement_index++;
            }
        }
    }
    event_3189_6_end: ;
}
// Function purpose: generated callback event_func_4452 processes event block(s) 3191_6. Actions/conditions:
//        3191_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 15 more actions.
void Frames::event_func_4452()
{
    // event 3191_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 15 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_dtaf_1)) goto event_3191_6_end;
        dtafobjects_487_instances.clear_selection();
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_sign2_469))) { it.deselect(); continue; }
        }
        if (!dtafobjects_487_instances.has_selection()) goto event_3191_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3191_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3191_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(dtafobjects_487_instances));
            if (obj1 == NULL) goto compare_3191_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3191_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3191_6_end;
        }
        compare_3191_6_0_end: ;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3191_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3191_6_end;
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(29);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_dtaf_137, str_sign2_469));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__198));
        media.play_id(SOUND_OPEN_5, 1-1);
        FrameObject * single_instance_3191_6_1; single_instance_3191_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + -40), parent->layer);
                if (single_instance_3191_6_1 == NULL)
                    single_instance_3191_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3191_6_1))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        ((Text*)((Text*)single_instance_3191_6_1))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_3191_6_1)), frame_left())+5);
        ((Text*)((Text*)single_instance_3191_6_1))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+26);
        ((Text*)((Text*)single_instance_3191_6_1))->blend_color.set(Color(60, 60, 60));
    }
    event_3191_6_end: ;
}
// Function purpose: generated callback event_func_4453 processes event block(s) 3192_6. Actions/conditions:
//        3192_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 15 more actions.
void Frames::event_func_4453()
{
    // event 3192_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 15 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_dtaf_1)) goto event_3192_6_end;
        dtafobjects_487_instances.clear_selection();
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_sign3_470))) { it.deselect(); continue; }
        }
        if (!dtafobjects_487_instances.has_selection()) goto event_3192_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3192_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3192_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(dtafobjects_487_instances));
            if (obj1 == NULL) goto compare_3192_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3192_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3192_6_end;
        }
        compare_3192_6_0_end: ;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3192_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3192_6_end;
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(29);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_dtaf_137, str_sign3_470));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__198));
        media.play_id(SOUND_OPEN_5, 1-1);
        FrameObject * single_instance_3192_6_1; single_instance_3192_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + -40), parent->layer);
                if (single_instance_3192_6_1 == NULL)
                    single_instance_3192_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3192_6_1))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        ((Text*)((Text*)single_instance_3192_6_1))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_3192_6_1)), frame_left())+5);
        ((Text*)((Text*)single_instance_3192_6_1))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+26);
        ((Text*)((Text*)single_instance_3192_6_1))->blend_color.set(Color(60, 60, 60));
    }
    event_3192_6_end: ;
}
// Function purpose: generated callback event_func_4454 processes event block(s) 3193_6. Actions/conditions:
//        3193_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 15 more actions.
void Frames::event_func_4454()
{
    // event 3193_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 15 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_dtaf_1)) goto event_3193_6_end;
        dtafobjects_487_instances.clear_selection();
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_panel_left_465))) { it.deselect(); continue; }
        }
        if (!dtafobjects_487_instances.has_selection()) goto event_3193_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3193_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3193_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(dtafobjects_487_instances));
            if (obj1 == NULL) goto compare_3193_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3193_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 30)) goto event_3193_6_end;
        }
        compare_3193_6_0_end: ;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3193_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3193_6_end;
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(29);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_dtaf_137, ((Active*)get_single(dtafobjects_487_instances, default_active_instance))->alterables->strings.get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__198));
        media.play_id(SOUND_OPEN_5, 1-1);
        FrameObject * single_instance_3193_6_1; single_instance_3193_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + -40), parent->layer);
                if (single_instance_3193_6_1 == NULL)
                    single_instance_3193_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3193_6_1))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        ((Text*)((Text*)single_instance_3193_6_1))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_3193_6_1)), frame_left())+5);
        ((Text*)((Text*)single_instance_3193_6_1))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+26);
        ((Text*)((Text*)single_instance_3193_6_1))->blend_color.set(Color(60, 60, 60));
    }
    event_3193_6_end: ;
}
// Function purpose: generated callback event_func_4455 processes event block(s) 3194_6. Actions/conditions:
//        3194_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 9 more actions.
void Frames::event_func_4455()
{
    // event 3194_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_dtaf_1)) goto event_3194_6_end;
        dtafobjects_487_instances.clear_selection();
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_panel_left_465))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!dtafobjects_487_instances.has_selection()) goto event_3194_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3194_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (220))) goto event_3194_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3194_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(dtafobjects_487_instances));
            if (obj1 == NULL) goto compare_3194_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3194_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 30)) goto event_3194_6_end;
        }
        compare_3194_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3194_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3194_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        FrameObject * single_instance_3194_6_1; single_instance_3194_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(dtafobjects_487_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 16), parent->layer);
                if (single_instance_3194_6_1 == NULL)
                    single_instance_3194_6_1 = new_obj;
            }
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->values.set(1, 1);
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
        media.play_id(SOUND_ACCOLADE_9, 1-1);
        {
            loop_dtaf_achieve_keycard_running = true;
            int times = int(1);
            loop_dtaf_achieve_keycard_index = 0;
            while (loop_dtaf_achieve_keycard_index < times) {
                loop_dtaf_achieve_keycard_6();
                if (!loop_dtaf_achieve_keycard_running) break;
                loop_dtaf_achieve_keycard_index++;
            }
        }
        {
            loop_dtaf_check_rocket_running = true;
            int times = int(1);
            loop_dtaf_check_rocket_index = 0;
            while (loop_dtaf_check_rocket_index < times) {
                loop_dtaf_check_rocket_6();
                if (!loop_dtaf_check_rocket_running) break;
                loop_dtaf_check_rocket_index++;
            }
        }
    }
    event_3194_6_end: ;
}
// Function purpose: generated callback event_func_4456 processes event block(s) 3196_6. Actions/conditions:
//        3196_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 15 more actions.
void Frames::event_func_4456()
{
    // event 3196_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 15 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_dtaf_1)) goto event_3196_6_end;
        dtafobjects_487_instances.clear_selection();
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_panel_bottom_467))) { it.deselect(); continue; }
        }
        if (!dtafobjects_487_instances.has_selection()) goto event_3196_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3196_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3196_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(dtafobjects_487_instances));
            if (obj1 == NULL) goto compare_3196_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3196_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 30)) goto event_3196_6_end;
        }
        compare_3196_6_0_end: ;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3196_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3196_6_end;
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(29);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_dtaf_137, ((Active*)get_single(dtafobjects_487_instances, default_active_instance))->alterables->strings.get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__198));
        media.play_id(SOUND_OPEN_5, 1-1);
        FrameObject * single_instance_3196_6_1; single_instance_3196_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + -40), parent->layer);
                if (single_instance_3196_6_1 == NULL)
                    single_instance_3196_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3196_6_1))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        ((Text*)((Text*)single_instance_3196_6_1))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_3196_6_1)), frame_left())+5);
        ((Text*)((Text*)single_instance_3196_6_1))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+26);
        ((Text*)((Text*)single_instance_3196_6_1))->blend_color.set(Color(60, 60, 60));
    }
    event_3196_6_end: ;
}
// Function purpose: generated callback event_func_4457 processes event block(s) 3197_6. Actions/conditions:
//        3197_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 9 more actions.
void Frames::event_func_4457()
{
    // event 3197_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_dtaf_1)) goto event_3197_6_end;
        dtafobjects_487_instances.clear_selection();
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_panel_bottom_467))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!dtafobjects_487_instances.has_selection()) goto event_3197_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3197_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (213))) goto event_3197_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3197_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(dtafobjects_487_instances));
            if (obj1 == NULL) goto compare_3197_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3197_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 30)) goto event_3197_6_end;
        }
        compare_3197_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3197_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3197_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        FrameObject * single_instance_3197_6_1; single_instance_3197_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(dtafobjects_487_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 16), parent->layer);
                if (single_instance_3197_6_1 == NULL)
                    single_instance_3197_6_1 = new_obj;
            }
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->values.set(1, 1);
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
        media.play_id(SOUND_ACCOLADE_9, 1-1);
        {
            loop_dtaf_achieve_voice_running = true;
            int times = int(1);
            loop_dtaf_achieve_voice_index = 0;
            while (loop_dtaf_achieve_voice_index < times) {
                loop_dtaf_achieve_voice_6();
                if (!loop_dtaf_achieve_voice_running) break;
                loop_dtaf_achieve_voice_index++;
            }
        }
        {
            loop_dtaf_check_rocket_running = true;
            int times = int(1);
            loop_dtaf_check_rocket_index = 0;
            while (loop_dtaf_check_rocket_index < times) {
                loop_dtaf_check_rocket_6();
                if (!loop_dtaf_check_rocket_running) break;
                loop_dtaf_check_rocket_index++;
            }
        }
    }
    event_3197_6_end: ;
}
// Function purpose: generated callback event_func_4458 processes event block(s) 3199_6. Actions/conditions:
//        3199_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 15 more actions.
void Frames::event_func_4458()
{
    // event 3199_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 15 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_dtaf_1)) goto event_3199_6_end;
        dtafobjects_487_instances.clear_selection();
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_panel_right_466))) { it.deselect(); continue; }
        }
        if (!dtafobjects_487_instances.has_selection()) goto event_3199_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3199_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3199_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(dtafobjects_487_instances));
            if (obj1 == NULL) goto compare_3199_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3199_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 30)) goto event_3199_6_end;
        }
        compare_3199_6_0_end: ;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3199_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3199_6_end;
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(29);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_dtaf_137, ((Active*)get_single(dtafobjects_487_instances, default_active_instance))->alterables->strings.get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__198));
        media.play_id(SOUND_OPEN_5, 1-1);
        FrameObject * single_instance_3199_6_1; single_instance_3199_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + -40), parent->layer);
                if (single_instance_3199_6_1 == NULL)
                    single_instance_3199_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3199_6_1))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        ((Text*)((Text*)single_instance_3199_6_1))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_3199_6_1)), frame_left())+5);
        ((Text*)((Text*)single_instance_3199_6_1))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+26);
        ((Text*)((Text*)single_instance_3199_6_1))->blend_color.set(Color(60, 60, 60));
    }
    event_3199_6_end: ;
}
// Function purpose: generated callback event_func_4459 processes event block(s) 3200_6. Actions/conditions:
//        3200_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 9 more actions.
void Frames::event_func_4459()
{
    // event 3200_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_dtaf_1)) goto event_3200_6_end;
        dtafobjects_487_instances.clear_selection();
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_panel_right_466))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!dtafobjects_487_instances.has_selection()) goto event_3200_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3200_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (221))) goto event_3200_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3200_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(dtafobjects_487_instances));
            if (obj1 == NULL) goto compare_3200_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3200_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 30)) goto event_3200_6_end;
        }
        compare_3200_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3200_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3200_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        FrameObject * single_instance_3200_6_1; single_instance_3200_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(dtafobjects_487_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 16), parent->layer);
                if (single_instance_3200_6_1 == NULL)
                    single_instance_3200_6_1 = new_obj;
            }
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->values.set(1, 1);
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
        media.play_id(SOUND_ACCOLADE_9, 1-1);
        {
            loop_dtaf_achieve_finger_running = true;
            int times = int(1);
            loop_dtaf_achieve_finger_index = 0;
            while (loop_dtaf_achieve_finger_index < times) {
                loop_dtaf_achieve_finger_6();
                if (!loop_dtaf_achieve_finger_running) break;
                loop_dtaf_achieve_finger_index++;
            }
        }
        {
            loop_dtaf_check_rocket_running = true;
            int times = int(1);
            loop_dtaf_check_rocket_index = 0;
            while (loop_dtaf_check_rocket_index < times) {
                loop_dtaf_check_rocket_6();
                if (!loop_dtaf_check_rocket_running) break;
                loop_dtaf_check_rocket_index++;
            }
        }
    }
    event_3200_6_end: ;
}
// Function purpose: generated callback event_func_4460 processes event block(s) 3202_6. Actions/conditions:
//        3202_6: sets the object's animation to 10.
void Frames::event_func_4460()
{
    // event 3202_6 : sets the object's animation to 10
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_dtaf_1)) goto event_3202_6_end;
        dtafobjects_487_instances.clear_selection();
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!dtafobjects_487_instances.has_selection()) goto event_3202_6_end;
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
    }
    event_3202_6_end: ;
}
// Function purpose: generated callback event_func_4461 processes event block(s) 3208_6. Actions/conditions:
//        3208_6: plays a sound or music track; removes the selected object; sets the selected object's visibility to
//        false.
void Frames::event_func_4461()
{
    // event 3208_6 : plays a sound or music track; removes the selected object; sets the selected object's visibility to false
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_dtaf_1)) goto event_3208_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3208_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3208_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(29))) goto event_3208_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(16))) goto event_3208_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3208_6_end;
        media.play_id(SOUND_CLOSE_6, 1-1);
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_3208_6_end: ;
}
// Function purpose: generated callback event_func_4462 processes event block(s) 3209_6. Actions/conditions:
//        3209_6: plays a sound or music track; removes the selected object; sets the selected object's visibility to
//        false.
void Frames::event_func_4462()
{
    // event 3209_6 : plays a sound or music track; removes the selected object; sets the selected object's visibility to false
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_dtaf_1)) goto event_3209_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3209_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3209_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(29))) goto event_3209_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(4))) goto event_3209_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3209_6_end;
        media.play_id(SOUND_CLOSE_6, 1-1);
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_3209_6_end: ;
}
// Function purpose: generated callback event_func_4463 processes event block(s) 3210_6. Actions/conditions:
//        3210_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 7 more actions.
void Frames::event_func_4463()
{
    // event 3210_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3210_6_end;
        stash_420_instances.clear_selection();
        for (ObjectIterator it(stash_420_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!stash_420_instances.has_selection()) goto event_3210_6_end;
        if (!((((Active*)get_single(stash_420_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_3210_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_3210_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(stash_420_instances));
            if (obj1 == NULL) goto compare_3210_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_3210_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_3210_6_end;
        }
        compare_3210_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3210_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3210_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(717, str_stashid_1887, ((Active*)get_single(stash_420_instances, default_active_instance))->alterables->values.get(0));
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_single(stash_420_instances, it.current_index))->x + 8, ((Active*)get_single(stash_420_instances, it.current_index))->y + 8));
        }
        {
            loop_stash_crate_running = true;
            int times = int(1);
            loop_stash_crate_index = 0;
            while (loop_stash_crate_index < times) {
                loop_stash_crate_6();
                if (!loop_stash_crate_running) break;
                loop_stash_crate_index++;
            }
        }
    }
    event_3210_6_end: ;
}
