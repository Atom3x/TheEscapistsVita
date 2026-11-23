#include "vitaframetime.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_3764 processes event block(s) 1676_6. Actions/conditions:
//        1676_6: sets the selected object's visibility to true.
void Frames::event_func_3764()
{
    // event 1676_6 : sets the selected object's visibility to true
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1676_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(158, str_zone_sleep_731)) == (0))) goto event_1676_6_end;
        if (((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE) goto event_1676_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1676_6_end;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(true);
    }
    event_1676_6_end: ;
}
// Function purpose: generated callback event_func_3765 processes event block(s) 1677_6. Actions/conditions:
//        1677_6: sets the selected object's visibility to false.
void Frames::event_func_3765()
{
    // event 1677_6 : sets the selected object's visibility to false
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1677_6_end;
        if (!(((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE)) goto event_1677_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(158, str_zone_sleep_731)) != (0))) goto event_1677_6_end;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(false);
    }
    event_1677_6_end: ;
}
// Function purpose: generated callback event_func_3766 processes event block(s) 1678_6. Actions/conditions:
//        1678_6: changes a stored game value.
void Frames::event_func_3766()
{
    VITA_LEGACY_EVENT();
    // event 1678_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_1678_6_end;
        snoozy_466_instances.clear_selection();
        for (ObjectIterator it(snoozy_466_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!snoozy_466_instances.has_selection()) goto event_1678_6_end;
        for (ObjectIterator it(snoozy_466_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 1);
        }
    }
    event_1678_6_end: ;
}
// Function purpose: generated callback event_func_3767 processes event block(s) 1679_6. Actions/conditions:
//        1679_6: removes the selected object.
void Frames::event_func_3767()
{
    // event 1679_6 : removes the selected object
    {
        if (!(group_code_1)) goto event_1679_6_end;
        snoozy_466_instances.clear_selection();
        for (ObjectIterator it(snoozy_466_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!snoozy_466_instances.has_selection()) goto event_1679_6_end;
        for (ObjectIterator it(snoozy_466_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1679_6_end: ;
}
// Function purpose: generated callback event_func_3768 processes event block(s) 1680_6. Actions/conditions:
//        1680_6: sets dest_pos to 0; sets SD1_ID to 0; sets SD2_ID to 0; plus 13 more actions.
void Frames::event_func_3768()
{
    // event 1680_6 : sets dest_pos to 0; sets SD1_ID to 0; sets SD2_ID to 0; plus 13 more actions
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1680_6_end;
        if (!group_check_group_code_schedules_roll_call_1_0) goto event_1680_6_end;
        group_check_group_code_schedules_roll_call_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(283, str_dest_pos_940, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(398, str_sd1_id_1209, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(399, str_sd2_id_1210, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(884, str_rc_stage_2076, 1);
        ((Active*)get_instance(active3_284_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(786, str_zones_rollcalltopx_1966)+((((AssociateArray*)get_instance(gameVariables_instances))->get_value(788, str_zones_rollcallbottomx_1968)-((AssociateArray*)get_instance(gameVariables_instances))->get_value(786, str_zones_rollcalltopx_1966))/MathHelper()/2));
        ((Active*)get_instance(active3_284_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(787, str_zones_rollcalltopy_1967)+((((AssociateArray*)get_instance(gameVariables_instances))->get_value(789, str_zones_rollcallbottomy_1969)-((AssociateArray*)get_instance(gameVariables_instances))->get_value(787, str_zones_rollcalltopy_1967))/MathHelper()/2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(885, str_obj_2077, str_attend_roll_call_2078);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(234, str_destzone_848, str_rollcall_769);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(886, str_rollcall_count_2079, 0);
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2005);
            ((Active*)*it)->alterables->flags.disable(151);
            ((Active*)*it)->alterables->flags.disable(152);
        }
        ((Active*)get_instance(playerBase_instances))->alterables->flags.disable(2005);
        {
            loop_rollcall_guards_init_running = true;
            int times = int(3);
            loop_rollcall_guards_init_index = 0;
            while (loop_rollcall_guards_init_index < times) {
                loop_rollcall_guards_init_6();
                if (!loop_rollcall_guards_init_running) break;
                loop_rollcall_guards_init_index++;
            }
        }
    }
    event_1680_6_end: ;
}
// Function purpose: generated callback event_func_3769 processes event block(s) 1681_6. Actions/conditions:
//        1681_6: sets dest_pos to 1.
void Frames::event_func_3769()
{
    // event 1681_6 : sets dest_pos to 1
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1681_6_end;
        if (!group_check_group_code_schedules_roll_call_1_1) goto event_1681_6_end;
        group_check_group_code_schedules_roll_call_1_1 = false;
        if (!((((Active*)get_instance(active3_284_instances))->get_y()) > (((Active*)get_instance(waypointrollcall2_189_instances, default_active_instance))->get_y()))) goto event_1681_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(283, str_dest_pos_940, 1);
    }
    event_1681_6_end: ;
}
// Function purpose: generated callback event_func_3770 processes event block(s) 1682_6. Actions/conditions:
//        1682_6: sets MusicFade to Out.
void Frames::event_func_3770()
{
    // event 1682_6 : sets MusicFade to Out
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1682_6_end;
        if (!group_check_group_code_schedules_roll_call_1_2) goto event_1682_6_end;
        group_check_group_code_schedules_roll_call_1_2 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_out_1921);
    }
    event_1682_6_end: ;
}
// Function purpose: generated callback event_func_3771 processes event block(s) 1683_6. Actions/conditions:
//        1683_6: sets LastMusic to rollcall; plays a sound or music track; sets the audio channel volume; plus 1 more
//        actions.
void Frames::event_func_3771()
{
    // event 1683_6 : sets LastMusic to rollcall; plays a sound or music track; sets the audio channel volume; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1683_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_1683_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_1683_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_1683_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_1683_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (0))) goto event_1683_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(882, str_haltmusic_2066)) == (0))) goto event_1683_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_1683_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_rollcall_2080);
        media.play(str_music_rollcall_ogg_2081, 10-1, 0);
        media.set_channel_volume(10-1, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
    }
    event_1683_6_end: ;
}
// Function purpose: generated callback event_func_3772 processes event block(s) 1684_6. Actions/conditions:
//        1684_6: sets LastMusic to escteam_rollcall; plays a sound or music track; sets the audio channel volume;
//        plus 1 more actions.
void Frames::event_func_3772()
{
    // event 1684_6 : sets LastMusic to escteam_rollcall; plays a sound or music track; sets the audio channel volume; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1684_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_1684_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_1684_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(882, str_haltmusic_2066)) == (0))) goto event_1684_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_1684_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_escteam_rollcall_2082);
        media.play(str_music_escteam_rollcall_ogg_2083, 10-1, 0);
        media.set_channel_volume(10-1, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
    }
    event_1684_6_end: ;
}
// Function purpose: generated callback event_func_3773 processes event block(s) 1685_6. Actions/conditions:
//        1685_6: sets LastMusic to DTAF_rollcall; plays a sound or music track; sets the audio channel volume; plus 1
//        more actions.
void Frames::event_func_3773()
{
    // event 1685_6 : sets LastMusic to DTAF_rollcall; plays a sound or music track; sets the audio channel volume; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1685_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_1685_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_1685_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(882, str_haltmusic_2066)) == (0))) goto event_1685_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_1685_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_dtaf_rollcall_2084);
        media.play(str_music_dtaf_rollcall_ogg_2085, 10-1, 0);
        media.set_channel_volume(10-1, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
    }
    event_1685_6_end: ;
}
// Function purpose: generated callback event_func_3774 processes event block(s) 1686_6. Actions/conditions:
//        1686_6: sets LastMusic to SS_rollcall; plays a sound or music track; sets the audio channel volume; plus 1
//        more actions.
void Frames::event_func_3774()
{
    // event 1686_6 : sets LastMusic to SS_rollcall; plays a sound or music track; sets the audio channel volume; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1686_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_1686_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_1686_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(882, str_haltmusic_2066)) == (0))) goto event_1686_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_1686_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_ss_rollcall_2086);
        media.play(str_music_ss_rollcall_ogg_2087, 10-1, 0);
        media.set_channel_volume(10-1, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
    }
    event_1686_6_end: ;
}
// Function purpose: generated callback event_func_3775 processes event block(s) 1687_6. Actions/conditions:
//        1687_6: sets LastMusic to SS_rollcall; plays a sound or music track; sets the audio channel volume; plus 1
//        more actions.
void Frames::event_func_3775()
{
    // event 1687_6 : sets LastMusic to SS_rollcall; plays a sound or music track; sets the audio channel volume; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1687_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_1687_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_1687_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(882, str_haltmusic_2066)) == (0))) goto event_1687_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_1687_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_ss_rollcall_2086);
        media.play(str_music_ss_rollcall_ogg_2087, 10-1, 0);
        media.set_channel_volume(10-1, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
    }
    event_1687_6_end: ;
}
// Function purpose: generated callback event_func_3776 processes event block(s) 1688_6. Actions/conditions:
//        1688_6: enables flag 2005 (player detected or present for roll call) on the selected object.
void Frames::event_func_3776()
{
    // event 1688_6 : enables flag 2005 (player detected or present for roll call) on the selected object
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1688_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(778, str_zone_rollcall_1958)) == (1))) goto event_1688_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_1688_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1688_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_off(2005))) goto event_1688_6_end;
        ((Active*)get_instance(playerBase_instances))->alterables->flags.enable(2005);
    }
    event_1688_6_end: ;
}
// Function purpose: generated callback event_func_3777 processes event block(s) 1689_6. Actions/conditions:
//        1689_6: sets AttendLesson to 1; increments Score_P by 5.
void Frames::event_func_3777()
{
    // event 1689_6 : sets AttendLesson to 1; increments Score_P by 5
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1689_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(778, str_zone_rollcall_1958)) == (1))) goto event_1689_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_1689_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(327, str_attendlesson_1115)) == (0))) goto event_1689_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(327, str_attendlesson_1115, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(418, str_score_p_1236, 5);
    }
    event_1689_6_end: ;
}
// Function purpose: generated callback event_func_3778 processes event block(s) 1690_6. Actions/conditions:
//        1690_6: checks scene is active; skips if the event-specific game state condition is met; skips if dialog is
//        open; this handler gates a game event without a direct va.
void Frames::event_func_3778()
{
    // event 1690_6 : checks scene is active; skips if the event-specific game state condition is met; skips if dialog is open; this handler gates a game event without a direct va
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1690_6_end;
        every_1690_6 += manager.dt;
        if (every_1690_6 < 1.0) goto event_1690_6_end;
        every_1690_6 -= 1.0;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1690_6_end;
        {
            loop_rollcall_align_running = true;
            int times = int(inmateBase_instances.size());
            loop_rollcall_align_index = 0;
            while (loop_rollcall_align_index < times) {
                loop_rollcall_align_6();
                if (!loop_rollcall_align_running) break;
                loop_rollcall_align_index++;
            }
        }
    }
    event_1690_6_end: ;
}
// Function purpose: generated callback event_func_3779 processes event block(s) 1700_6. Actions/conditions:
//        1700_6: checks scene is active; skips if the event-specific game state condition is met; skips if dialog is
//        open; this handler gates a game event without a direct va.
void Frames::event_func_3779()
{
    // event 1700_6 : checks scene is active; skips if the event-specific game state condition is met; skips if dialog is open; this handler gates a game event without a direct va
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1700_6_end;
        every_1700_6 += manager.dt;
        if (every_1700_6 < 1.0) goto event_1700_6_end;
        every_1700_6 -= 1.0;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1700_6_end;
        {
            loop_rollcall_align_guards_running = true;
            int times = int(3);
            loop_rollcall_align_guards_index = 0;
            while (loop_rollcall_align_guards_index < times) {
                loop_rollcall_align_guards_6();
                if (!loop_rollcall_align_guards_running) break;
                loop_rollcall_align_guards_index++;
            }
        }
    }
    event_1700_6_end: ;
}
// Function purpose: generated callback event_func_3780 processes event block(s) 1704_6. Actions/conditions:
//        1704_6: activates the Rollcall_Commence_MinSec event group; sets SpeakCol to 1; sets SpeakID to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25); plus 5
//        more actions.
void Frames::event_func_3780()
{
    // event 1704_6 : activates the Rollcall_Commence_MinSec event group; sets SpeakCol to 1; sets SpeakID to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25); plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1704_6_end;
        guardBase_instances.clear_selection();
        waypointrollcall2_189_instances.clear_selection();
        if (!check_overlap(guardBase_instances, waypointrollcall2_189_instances)) goto event_1704_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1704_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(884, str_rc_stage_2076)) == (1))) goto event_1704_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(522, str_t_min_1422)) >= (15))) goto event_1704_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) == (str_minsec_582))) goto event_1704_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1704_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_rollcall_commence_minsec_2088);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
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
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(884, str_rc_stage_2076, 2);
    }
    event_1704_6_end: ;
}
// Function purpose: generated callback event_func_3781 processes event block(s) 1705_6. Actions/conditions:
//        1705_6: activates the Rollcall_Commence event group; sets SpeakCol to 1; sets SpeakID to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25); plus 5
//        more actions.
void Frames::event_func_3781()
{
    // event 1705_6 : activates the Rollcall_Commence event group; sets SpeakCol to 1; sets SpeakID to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25); plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1705_6_end;
        guardBase_instances.clear_selection();
        waypointrollcall2_189_instances.clear_selection();
        if (!check_overlap(guardBase_instances, waypointrollcall2_189_instances)) goto event_1705_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1705_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(884, str_rc_stage_2076)) == (1))) goto event_1705_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(522, str_t_min_1422)) >= (15))) goto event_1705_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) != (str_minsec_582))) goto event_1705_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1705_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_rollcall_commence_2089);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
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
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(884, str_rc_stage_2076, 2);
    }
    event_1705_6_end: ;
}
// Function purpose: generated callback event_func_3782 processes event block(s) 1706_6. Actions/conditions:
//        1706_6: enables flag 58 (NPC schedule response state) on the selected object; activates the Shakedowns event
//        group; sets SpeakCol to 1; plus 6 more actions.
void Frames::event_func_3782()
{
    // event 1706_6 : enables flag 58 (NPC schedule response state) on the selected object; activates the Shakedowns event group; sets SpeakCol to 1; plus 6 more actions
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1706_6_end;
        guardBase_instances.clear_selection();
        waypointrollcall2_189_instances.clear_selection();
        if (!check_overlap(guardBase_instances, waypointrollcall2_189_instances)) goto event_1706_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1706_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(884, str_rc_stage_2076)) == (2))) goto event_1706_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) != (str_minsec_582))) goto event_1706_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1706_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(58);
        }
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_shakedowns_2090);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
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
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(884, str_rc_stage_2076, 3);
    }
    event_1706_6_end: ;
}
// Function purpose: generated callback event_func_3783 processes event block(s) 1707_6. Actions/conditions:
//        1707_6: enables flag 58 (NPC schedule response state) on the selected object; activates the
//        Shakedowns_MinSec event group; sets SpeakCol to 1; plus 6 more actions.
void Frames::event_func_3783()
{
    // event 1707_6 : enables flag 58 (NPC schedule response state) on the selected object; activates the Shakedowns_MinSec event group; sets SpeakCol to 1; plus 6 more actions
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1707_6_end;
        guardBase_instances.clear_selection();
        waypointrollcall2_189_instances.clear_selection();
        if (!check_overlap(guardBase_instances, waypointrollcall2_189_instances)) goto event_1707_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1707_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(884, str_rc_stage_2076)) == (2))) goto event_1707_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) == (str_minsec_582))) goto event_1707_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1707_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(58);
        }
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_shakedowns_minsec_2091);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
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
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(884, str_rc_stage_2076, 3);
    }
    event_1707_6_end: ;
}
// Function purpose: generated callback event_func_3784 processes event block(s) 1708_6. Actions/conditions:
//        1708_6: sets SpeakCol to 1; sets SpeakID to ((Active*)get_single(guardBase_instances,
//        default_active_instance))->alterables->values.get(25); sets a game or interface text string; plus 6 more
//        actions.
void Frames::event_func_3784()
{
    // event 1708_6 : sets SpeakCol to 1; sets SpeakID to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25); sets a game or interface text string; plus 6 more actions
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1708_6_end;
        guardBase_instances.clear_selection();
        waypointrollcall2_189_instances.clear_selection();
        if (!check_overlap(guardBase_instances, waypointrollcall2_189_instances)) goto event_1708_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1708_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(884, str_rc_stage_2076)) == (3))) goto event_1708_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1708_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(887, str_sd1_name_2092)+str__189+((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_2_155)+str__189+((AssociateArray*)get_instance(gameVariables_instances))->get_string(888, str_sd2_name_2093));
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(58);
        }
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
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(889, str_count_banter_2094, 150);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(884, str_rc_stage_2076, 4);
    }
    event_1708_6_end: ;
}
// Function purpose: generated callback event_func_3785 processes event block(s) 1709_6. Actions/conditions:
//        1709_6: enables flag 58 (NPC schedule response state) on the selected object; activates the
//        Rollcall_Banter_MinSec event group; sets Count_Banter to 150; plus 6 more actions.
void Frames::event_func_3785()
{
    // event 1709_6 : enables flag 58 (NPC schedule response state) on the selected object; activates the Rollcall_Banter_MinSec event group; sets Count_Banter to 150; plus 6 more actions
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1709_6_end;
        guardBase_instances.clear_selection();
        waypointrollcall2_189_instances.clear_selection();
        if (!check_overlap(guardBase_instances, waypointrollcall2_189_instances)) goto event_1709_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1709_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(884, str_rc_stage_2076)) == (4))) goto event_1709_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(889, str_count_banter_2094)) == (0))) goto event_1709_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) == (str_minsec_582))) goto event_1709_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1709_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1709_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(58);
        }
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_rollcall_banter_minsec_2095);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(889, str_count_banter_2094, 150);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
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
    event_1709_6_end: ;
}
// Function purpose: generated callback event_func_3786 processes event block(s) 1710_6. Actions/conditions:
//        1710_6: enables flag 58 (NPC schedule response state) on the selected object; activates the Rollcall_Banter
//        event group; sets Count_Banter to 150; plus 6 more actions.
void Frames::event_func_3786()
{
    // event 1710_6 : enables flag 58 (NPC schedule response state) on the selected object; activates the Rollcall_Banter event group; sets Count_Banter to 150; plus 6 more actions
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1710_6_end;
        guardBase_instances.clear_selection();
        waypointrollcall2_189_instances.clear_selection();
        if (!check_overlap(guardBase_instances, waypointrollcall2_189_instances)) goto event_1710_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1710_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(884, str_rc_stage_2076)) == (4))) goto event_1710_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(889, str_count_banter_2094)) == (0))) goto event_1710_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) != (str_minsec_582))) goto event_1710_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1710_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1710_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(58);
        }
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_rollcall_banter_2096);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(889, str_count_banter_2094, 150);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
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
    event_1710_6_end: ;
}
// Function purpose: generated callback event_func_3787 processes event block(s) 1711_6. Actions/conditions:
//        1711_6: changes a stored game value.
void Frames::event_func_3787()
{
    VITA_LEGACY_EVENT();
    // event 1711_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1711_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(889, str_count_banter_2094)) > (0))) goto event_1711_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1711_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(889, str_count_banter_2094, 1);
    }
    event_1711_6_end: ;
}
// Function purpose: generated callback event_func_3788 processes event block(s) 1712_6. Actions/conditions:
//        1712_6: sets the selected object's visibility to true.
void Frames::event_func_3788()
{
    // event 1712_6 : sets the selected object's visibility to true
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1712_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(778, str_zone_rollcall_1958)) == (0))) goto event_1712_6_end;
        if (((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE) goto event_1712_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1712_6_end;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(true);
    }
    event_1712_6_end: ;
}
// Function purpose: generated callback event_func_3789 processes event block(s) 1713_6. Actions/conditions:
//        1713_6: sets the selected object's visibility to false.
void Frames::event_func_3789()
{
    // event 1713_6 : sets the selected object's visibility to false
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1713_6_end;
        if (!(((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE)) goto event_1713_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(778, str_zone_rollcall_1958)) != (0))) goto event_1713_6_end;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(false);
    }
    event_1713_6_end: ;
}
// Function purpose: generated callback event_func_3790 processes event block(s) 1714_6. Actions/conditions:
//        1714_6: adds a craftsort 346 instance; adds a line to the current list; removes the selected object.
void Frames::event_func_3790()
{
    // event 1714_6 : adds a craftsort 346 instance; adds a line to the current list; removes the selected object
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1714_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(522, str_t_min_1422)) == (0))) goto event_1714_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(398, str_sd1_id_1209)) == (0))) goto event_1714_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(399, str_sd2_id_1210)) == (0))) goto event_1714_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1714_6_end;
        craftsort_346_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_craftsort_346(0, 0), 5);
            craftsort_346_instances.add_back();
        }
        for (ObjectIterator it(craftsort_346_instances); !it.end(); ++it) {
            ((ListObject*)*it)->add_line(((Active*)get_instance(playerBase_instances))->alterables->strings.get(0)+str_1_1203);
        }
        {
            loop_shakedown_list_running = true;
            int times = int(inmateBase_instances.size());
            loop_shakedown_list_index = 0;
            while (loop_shakedown_list_index < times) {
                loop_shakedown_list_6();
                if (!loop_shakedown_list_running) break;
                loop_shakedown_list_index++;
            }
        }
        {
            loop_shakedown_pick_running = true;
            int times = int(2);
            loop_shakedown_pick_index = 0;
            while (loop_shakedown_pick_index < times) {
                loop_shakedown_pick_6();
                if (!loop_shakedown_pick_running) break;
                loop_shakedown_pick_index++;
            }
        }
        craftsort_346_instances.clear_selection();
        for (ObjectIterator it(craftsort_346_instances); !it.end(); ++it) {
            ((ListObject*)*it)->destroy();
        }
    }
    event_1714_6_end: ;
}
// Function purpose: generated callback event_func_3791 processes event block(s) 1717_6. Actions/conditions:
//        1717_6: sets the object's animation to 0.
void Frames::event_func_3791()
{
    // event 1717_6 : sets the object's animation to 0
    {
        if (!(group_code_1)) goto event_1717_6_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(11))) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_1717_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(qualifier_12, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(24))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(23))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1717_6_end;
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1717_6_end: ;
}
// Function purpose: generated callback event_func_3792 processes event block(s) 1718_6. Actions/conditions:
//        1718_6: sets the selected object's numeric value to 5; positions the target object; positions the target
//        object; plus 5 more actions.
void Frames::event_func_3792()
{
    // event 1718_6 : sets the selected object's numeric value to 5; positions the target object; positions the target object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1718_6_end;
        if (!group_check_group_code_schedules_food_1_0) goto event_1718_6_end;
        group_check_group_code_schedules_food_1_0 = false;
        canteenserving_277_instances.clear_selection();
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 5);
        }
        ((Active*)get_instance(active3_284_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(3, str_zones_canteentopx_438)+((((AssociateArray*)get_instance(gameVariables_instances))->get_value(4, str_zones_canteenbottomx_439)-((AssociateArray*)get_instance(gameVariables_instances))->get_value(3, str_zones_canteentopx_438))/MathHelper()/2));
        ((Active*)get_instance(active3_284_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(5, str_zones_canteentopy_440)+((((AssociateArray*)get_instance(gameVariables_instances))->get_value(6, str_zones_canteenbottomy_441)-((AssociateArray*)get_instance(gameVariables_instances))->get_value(5, str_zones_canteentopy_440))/MathHelper()/2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(885, str_obj_2077, str_go_to_the_prison_canteen_2097);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(234, str_destzone_848, str_canteen_773);
        {
            loop_food_guards_init_running = true;
            int times = int(3);
            loop_food_guards_init_index = 0;
            while (loop_food_guards_init_index < times) {
                loop_food_guards_init_6();
                if (!loop_food_guards_init_running) break;
                loop_food_guards_init_index++;
            }
        }
    }
    event_1718_6_end: ;
}
// Function purpose: generated callback event_func_3793 processes event block(s) 1719_6. Actions/conditions:
//        1719_6: sets MusicFade to Out.
void Frames::event_func_3793()
{
    // event 1719_6 : sets MusicFade to Out
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1719_6_end;
        if (!group_check_group_code_schedules_food_1_1) goto event_1719_6_end;
        group_check_group_code_schedules_food_1_1 = false;
        if (!(!media.is_sample_playing(SOUND_THEESCAPISTS_CANTEEN_22))) goto event_1719_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_out_1921);
    }
    event_1719_6_end: ;
}
// Function purpose: generated callback event_func_3794 processes event block(s) 1720_6. Actions/conditions:
//        1720_6: sets LastMusic to chow; sets MusicFade to In; plays a sound or music track; plus 1 more actions.
void Frames::event_func_3794()
{
    // event 1720_6 : sets LastMusic to chow; sets MusicFade to In; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1720_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_1720_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_1720_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_1720_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_1720_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (0))) goto event_1720_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(882, str_haltmusic_2066)) == (0))) goto event_1720_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_1720_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_chow_2098);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        media.play(str_music_chow_ogg_2099, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_1720_6_end: ;
}
// Function purpose: generated callback event_func_3795 processes event block(s) 1721_6. Actions/conditions:
//        1721_6: sets MusicFade to In; sets LastMusic to escteam_chow; plays a sound or music track; plus 1 more
//        actions.
void Frames::event_func_3795()
{
    // event 1721_6 : sets MusicFade to In; sets LastMusic to escteam_chow; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1721_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_1721_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_1721_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(882, str_haltmusic_2066)) == (0))) goto event_1721_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_1721_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_escteam_chow_2100);
        media.play(str_music_escteam_chow_ogg_2101, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_1721_6_end: ;
}
// Function purpose: generated callback event_func_3796 processes event block(s) 1722_6. Actions/conditions:
//        1722_6: sets MusicFade to In; sets LastMusic to DTAF_chow; plays a sound or music track; plus 1 more
//        actions.
void Frames::event_func_3796()
{
    // event 1722_6 : sets MusicFade to In; sets LastMusic to DTAF_chow; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1722_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_1722_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_1722_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(882, str_haltmusic_2066)) == (0))) goto event_1722_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_1722_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_dtaf_chow_2102);
        media.play(str_music_dtaf_chow_ogg_2103, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_1722_6_end: ;
}
// Function purpose: generated callback event_func_3797 processes event block(s) 1723_6. Actions/conditions:
//        1723_6: sets MusicFade to In; sets LastMusic to SS_chow; plays a sound or music track; plus 1 more actions.
void Frames::event_func_3797()
{
    // event 1723_6 : sets MusicFade to In; sets LastMusic to SS_chow; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1723_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_1723_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_1723_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(882, str_haltmusic_2066)) == (0))) goto event_1723_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_1723_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_ss_chow_2104);
        media.play(str_music_ss_chow_ogg_2105, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_1723_6_end: ;
}
// Function purpose: generated callback event_func_3798 processes event block(s) 1724_6. Actions/conditions:
//        1724_6: sets MusicFade to In; sets LastMusic to SS_chow; plays a sound or music track; plus 1 more actions.
void Frames::event_func_3798()
{
    // event 1724_6 : sets MusicFade to In; sets LastMusic to SS_chow; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1724_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_1724_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_1724_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(882, str_haltmusic_2066)) == (0))) goto event_1724_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_1724_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_ss_chow_2104);
        media.play(str_music_ss_chow_ogg_2105, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_1724_6_end: ;
}
// Function purpose: generated callback event_func_3799 processes event block(s) 1725_6. Actions/conditions:
//        1725_6: changes a stored game value.
void Frames::event_func_3799()
{
    // event 1725_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1725_6_end;
        every_1725_6 += manager.dt;
        if (every_1725_6 < 1.0) goto event_1725_6_end;
        every_1725_6 -= 1.0;
        playerBase_instances.clear_selection();
        canteenchair_312_instances.clear_selection();
        if (!check_overlap(playerBase_instances, canteenchair_312_instances)) goto event_1725_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(7)) < (((Active*)get_instance(playerBase_instances))->alterables->values.get(8)/MathHelper()/2))) goto event_1725_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(75))) goto event_1725_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1725_6_end;
        ((Active*)get_instance(playerBase_instances))->alterables->values.add(7, 1);
    }
    event_1725_6_end: ;
}
// Function purpose: generated callback event_func_3800 processes event block(s) 1726_6. Actions/conditions:
//        1726_6: sets AttendLesson to 1; increments Score_P by 5.
void Frames::event_func_3800()
{
    // event 1726_6 : sets AttendLesson to 1; increments Score_P by 5
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1726_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(747, str_zone_canteen_1918)) == (1))) goto event_1726_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1726_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(327, str_attendlesson_1115)) == (0))) goto event_1726_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_1726_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(327, str_attendlesson_1115, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(418, str_score_p_1236, 5);
    }
    event_1726_6_end: ;
}
// Function purpose: generated callback event_func_3801 processes event block(s) 1727_6. Actions/conditions:
//        1727_6: sets the object's animation to 11.
void Frames::event_func_3801()
{
    // event 1727_6 : sets the object's animation to 11
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1727_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(23))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1727_6_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_1727_6_end;
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
    }
    event_1727_6_end: ;
}
// Function purpose: generated callback event_func_3802 processes event block(s) 1728_6. Actions/conditions:
//        1728_6: checks scene is active; skips if the event-specific game state condition is met; skips if dialog is
//        open; this handler gates a game event without a direct va.
void Frames::event_func_3802()
{
    // event 1728_6 : checks scene is active; skips if the event-specific game state condition is met; skips if dialog is open; this handler gates a game event without a direct va
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1728_6_end;
        every_1728_6 += manager.dt;
        if (every_1728_6 < 1.0) goto event_1728_6_end;
        every_1728_6 -= 1.0;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1728_6_end;
        {
            loop_sitting_running = true;
            int times = int(inmateBase_instances.size());
            loop_sitting_index = 0;
            while (loop_sitting_index < times) {
                loop_sitting_6();
                if (!loop_sitting_running) break;
                loop_sitting_index++;
            }
        }
    }
    event_1728_6_end: ;
}
// Function purpose: generated callback event_func_3803 processes event block(s) 1738_6. Actions/conditions:
//        1738_6: sets the object's animation to 0.
void Frames::event_func_3803()
{
    // event 1738_6 : sets the object's animation to 0
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1738_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(11))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(23))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1738_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1738_6_end: ;
}
// Function purpose: generated callback event_func_3804 processes event block(s) 1739_6. Actions/conditions:
//        1739_6: activates the Canteen event group; sets Canteen_Banter to randrange_event(175)+80; sets SpeakCol to
//        0; plus 5 more actions.
void Frames::event_func_3804()
{
    // event 1739_6 : activates the Canteen event group; sets Canteen_Banter to randrange_event(175)+80; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1739_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(890, str_canteen_banter_2106)) == (0))) goto event_1739_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_1739_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_1739_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_1739_6_end;
        inmateBase_instances.clear_selection();
        FrameObject * single_instance_1739_6_0; single_instance_1739_6_0 = pick_random(inmateBase_instances);
        if (single_instance_1739_6_0 == NULL) goto event_1739_6_end;
        canteenchair_312_instances.clear_selection();
        if (!check_overlap(((Active*)single_instance_1739_6_0), canteenchair_312_instances)) goto event_1739_6_end;
        if (!(((Active*)single_instance_1739_6_0)->get_movement()->is_stopped())) goto event_1739_6_end;
        if (!(((Active*)single_instance_1739_6_0)->alterables->flags.is_on(24))) goto event_1739_6_end;
        if (!((((Active*)single_instance_1739_6_0)->alterables->values.get(22)) == (0))) goto event_1739_6_end;
        if (!((((Active*)single_instance_1739_6_0)->alterables->values.get(7)) > (0))) goto event_1739_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1739_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_canteen_773);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(890, str_canteen_banter_2106, randrange_event(175)+80);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)single_instance_1739_6_0)->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
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
    event_1739_6_end: ;
}
// Function purpose: generated callback event_func_3805 processes event block(s) 1740_6. Actions/conditions:
//        1740_6: sets rnd to randrange_event(2)+1.
void Frames::event_func_3805()
{
    // event 1740_6 : sets rnd to randrange_event(2)+1
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1740_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(890, str_canteen_banter_2106)) == (0))) goto event_1740_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_1740_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(132, str_rnd_696, randrange_event(2)+1);
    }
    event_1740_6_end: ;
}
// Function purpose: generated callback event_func_3806 processes event block(s) 1741_6. Actions/conditions:
//        1741_6: activates the Canteen event group; sets Canteen_Banter to randrange_event(175)+80; sets SpeakCol to
//        0; plus 5 more actions.
void Frames::event_func_3806()
{
    // event 1741_6 : activates the Canteen event group; sets Canteen_Banter to randrange_event(175)+80; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1741_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(890, str_canteen_banter_2106)) == (0))) goto event_1741_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_1741_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (1))) goto event_1741_6_end;
        inmateBase_instances.clear_selection();
        FrameObject * single_instance_1741_6_0; single_instance_1741_6_0 = pick_random(inmateBase_instances);
        if (single_instance_1741_6_0 == NULL) goto event_1741_6_end;
        canteenchair_312_instances.clear_selection();
        if (!check_overlap(((Active*)single_instance_1741_6_0), canteenchair_312_instances)) goto event_1741_6_end;
        if (!(((Active*)single_instance_1741_6_0)->get_movement()->is_stopped())) goto event_1741_6_end;
        if (!(((Active*)single_instance_1741_6_0)->alterables->flags.is_on(24))) goto event_1741_6_end;
        if (!((((Active*)single_instance_1741_6_0)->alterables->values.get(22)) == (0))) goto event_1741_6_end;
        if (!((((Active*)single_instance_1741_6_0)->alterables->values.get(7)) > (0))) goto event_1741_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1741_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_canteen_773);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(890, str_canteen_banter_2106, randrange_event(175)+80);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)single_instance_1741_6_0)->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
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
    event_1741_6_end: ;
}
// Function purpose: generated callback event_func_3807 processes event block(s) 1742_6. Actions/conditions:
//        1742_6: activates the CCL_Canteen event group; sets Canteen_Banter to randrange_event(175)+80; sets SpeakCol
//        to 0; plus 5 more actions.
void Frames::event_func_3807()
{
    // event 1742_6 : activates the CCL_Canteen event group; sets Canteen_Banter to randrange_event(175)+80; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1742_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(890, str_canteen_banter_2106)) == (0))) goto event_1742_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_1742_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) != (1))) goto event_1742_6_end;
        inmateBase_instances.clear_selection();
        FrameObject * single_instance_1742_6_0; single_instance_1742_6_0 = pick_random(inmateBase_instances);
        if (single_instance_1742_6_0 == NULL) goto event_1742_6_end;
        canteenchair_312_instances.clear_selection();
        if (!check_overlap(((Active*)single_instance_1742_6_0), canteenchair_312_instances)) goto event_1742_6_end;
        if (!(((Active*)single_instance_1742_6_0)->get_movement()->is_stopped())) goto event_1742_6_end;
        if (!(((Active*)single_instance_1742_6_0)->alterables->flags.is_on(24))) goto event_1742_6_end;
        if (!((((Active*)single_instance_1742_6_0)->alterables->values.get(22)) == (0))) goto event_1742_6_end;
        if (!((((Active*)single_instance_1742_6_0)->alterables->values.get(7)) > (0))) goto event_1742_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1742_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_ccl_canteen_2107);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(890, str_canteen_banter_2106, randrange_event(175)+80);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)single_instance_1742_6_0)->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
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
    event_1742_6_end: ;
}
// Function purpose: generated callback event_func_3808 processes event block(s) 1743_6. Actions/conditions:
//        1743_6: sets rnd to randrange_event(2)+1.
void Frames::event_func_3808()
{
    // event 1743_6 : sets rnd to randrange_event(2)+1
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1743_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(890, str_canteen_banter_2106)) == (0))) goto event_1743_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_1743_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(132, str_rnd_696, randrange_event(2)+1);
    }
    event_1743_6_end: ;
}
// Function purpose: generated callback event_func_3809 processes event block(s) 1744_6. Actions/conditions:
//        1744_6: activates the Canteen event group; sets Canteen_Banter to randrange_event(175)+80; sets SpeakCol to
//        0; plus 5 more actions.
void Frames::event_func_3809()
{
    // event 1744_6 : activates the Canteen event group; sets Canteen_Banter to randrange_event(175)+80; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1744_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(890, str_canteen_banter_2106)) == (0))) goto event_1744_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_1744_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (1))) goto event_1744_6_end;
        inmateBase_instances.clear_selection();
        FrameObject * single_instance_1744_6_0; single_instance_1744_6_0 = pick_random(inmateBase_instances);
        if (single_instance_1744_6_0 == NULL) goto event_1744_6_end;
        canteenchair_312_instances.clear_selection();
        if (!check_overlap(((Active*)single_instance_1744_6_0), canteenchair_312_instances)) goto event_1744_6_end;
        if (!(((Active*)single_instance_1744_6_0)->get_movement()->is_stopped())) goto event_1744_6_end;
        if (!(((Active*)single_instance_1744_6_0)->alterables->flags.is_on(24))) goto event_1744_6_end;
        if (!((((Active*)single_instance_1744_6_0)->alterables->values.get(22)) == (0))) goto event_1744_6_end;
        if (!((((Active*)single_instance_1744_6_0)->alterables->values.get(7)) > (0))) goto event_1744_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1744_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_canteen_773);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(890, str_canteen_banter_2106, randrange_event(175)+80);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)single_instance_1744_6_0)->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
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
    event_1744_6_end: ;
}
// Function purpose: generated callback event_func_3810 processes event block(s) 1745_6. Actions/conditions:
//        1745_6: activates the SS_Canteen event group; sets Canteen_Banter to randrange_event(175)+80; sets SpeakCol
//        to 0; plus 5 more actions.
void Frames::event_func_3810()
{
    // event 1745_6 : activates the SS_Canteen event group; sets Canteen_Banter to randrange_event(175)+80; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1745_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(890, str_canteen_banter_2106)) == (0))) goto event_1745_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_1745_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) != (1))) goto event_1745_6_end;
        inmateBase_instances.clear_selection();
        FrameObject * single_instance_1745_6_0; single_instance_1745_6_0 = pick_random(inmateBase_instances);
        if (single_instance_1745_6_0 == NULL) goto event_1745_6_end;
        canteenchair_312_instances.clear_selection();
        if (!check_overlap(((Active*)single_instance_1745_6_0), canteenchair_312_instances)) goto event_1745_6_end;
        if (!(((Active*)single_instance_1745_6_0)->get_movement()->is_stopped())) goto event_1745_6_end;
        if (!(((Active*)single_instance_1745_6_0)->alterables->flags.is_on(24))) goto event_1745_6_end;
        if (!((((Active*)single_instance_1745_6_0)->alterables->values.get(22)) == (0))) goto event_1745_6_end;
        if (!((((Active*)single_instance_1745_6_0)->alterables->values.get(7)) > (0))) goto event_1745_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1745_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_ss_canteen_2108);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(890, str_canteen_banter_2106, randrange_event(175)+80);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)single_instance_1745_6_0)->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
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
    event_1745_6_end: ;
}
// Function purpose: generated callback event_func_3811 processes event block(s) 1746_6. Actions/conditions:
//        1746_6: activates the ET_Food_+((Active* event group; sets Canteen_Banter to randrange_event(175)+80; sets
//        SpeakCol to 0; plus 5 more actions.
void Frames::event_func_3811()
{
    // event 1746_6 : activates the ET_Food_+((Active* event group; sets Canteen_Banter to randrange_event(175)+80; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1746_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(890, str_canteen_banter_2106)) == (0))) goto event_1746_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_1746_6_end;
        inmateBase_instances.clear_selection();
        FrameObject * single_instance_1746_6_0; single_instance_1746_6_0 = pick_random(inmateBase_instances);
        if (single_instance_1746_6_0 == NULL) goto event_1746_6_end;
        canteenchair_312_instances.clear_selection();
        if (!check_overlap(((Active*)single_instance_1746_6_0), canteenchair_312_instances)) goto event_1746_6_end;
        if (!(((Active*)single_instance_1746_6_0)->get_movement()->is_stopped())) goto event_1746_6_end;
        if (!(((Active*)single_instance_1746_6_0)->alterables->flags.is_on(24))) goto event_1746_6_end;
        if (!((((Active*)single_instance_1746_6_0)->alterables->values.get(22)) == (0))) goto event_1746_6_end;
        if (!((((Active*)single_instance_1746_6_0)->alterables->values.get(7)) > (0))) goto event_1746_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1746_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_et_food_2109+((Active*)single_instance_1746_6_0)->alterables->strings.get(4));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(890, str_canteen_banter_2106, randrange_event(175)+80);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)single_instance_1746_6_0)->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
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
    event_1746_6_end: ;
}
// Function purpose: generated callback event_func_3812 processes event block(s) 1747_6. Actions/conditions:
//        1747_6: sets rnd to randrange_event(2)+1.
void Frames::event_func_3812()
{
    // event 1747_6 : sets rnd to randrange_event(2)+1
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1747_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(890, str_canteen_banter_2106)) == (0))) goto event_1747_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_1747_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(132, str_rnd_696, randrange_event(2)+1);
    }
    event_1747_6_end: ;
}
// Function purpose: generated callback event_func_3813 processes event block(s) 1748_6. Actions/conditions:
//        1748_6: activates the Canteen event group; sets Canteen_Banter to randrange_event(175)+80; sets SpeakCol to
//        0; plus 5 more actions.
void Frames::event_func_3813()
{
    // event 1748_6 : activates the Canteen event group; sets Canteen_Banter to randrange_event(175)+80; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1748_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(890, str_canteen_banter_2106)) == (0))) goto event_1748_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_1748_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (1))) goto event_1748_6_end;
        inmateBase_instances.clear_selection();
        FrameObject * single_instance_1748_6_0; single_instance_1748_6_0 = pick_random(inmateBase_instances);
        if (single_instance_1748_6_0 == NULL) goto event_1748_6_end;
        canteenchair_312_instances.clear_selection();
        if (!check_overlap(((Active*)single_instance_1748_6_0), canteenchair_312_instances)) goto event_1748_6_end;
        if (!(((Active*)single_instance_1748_6_0)->get_movement()->is_stopped())) goto event_1748_6_end;
        if (!(((Active*)single_instance_1748_6_0)->alterables->flags.is_on(24))) goto event_1748_6_end;
        if (!((((Active*)single_instance_1748_6_0)->alterables->values.get(22)) == (0))) goto event_1748_6_end;
        if (!((((Active*)single_instance_1748_6_0)->alterables->values.get(7)) > (0))) goto event_1748_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1748_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_canteen_773);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(890, str_canteen_banter_2106, randrange_event(175)+80);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)single_instance_1748_6_0)->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
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
    event_1748_6_end: ;
}
// Function purpose: generated callback event_func_3814 processes event block(s) 1749_6. Actions/conditions:
//        1749_6: activates the DTAF_Food event group; sets Canteen_Banter to randrange_event(175)+80; sets SpeakCol
//        to 0; plus 5 more actions.
void Frames::event_func_3814()
{
    // event 1749_6 : activates the DTAF_Food event group; sets Canteen_Banter to randrange_event(175)+80; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1749_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(890, str_canteen_banter_2106)) == (0))) goto event_1749_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_1749_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) != (1))) goto event_1749_6_end;
        inmateBase_instances.clear_selection();
        FrameObject * single_instance_1749_6_0; single_instance_1749_6_0 = pick_random(inmateBase_instances);
        if (single_instance_1749_6_0 == NULL) goto event_1749_6_end;
        canteenchair_312_instances.clear_selection();
        if (!check_overlap(((Active*)single_instance_1749_6_0), canteenchair_312_instances)) goto event_1749_6_end;
        if (!(((Active*)single_instance_1749_6_0)->get_movement()->is_stopped())) goto event_1749_6_end;
        if (!(((Active*)single_instance_1749_6_0)->alterables->flags.is_on(24))) goto event_1749_6_end;
        if (!((((Active*)single_instance_1749_6_0)->alterables->values.get(22)) == (0))) goto event_1749_6_end;
        if (!((((Active*)single_instance_1749_6_0)->alterables->values.get(7)) > (0))) goto event_1749_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1749_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_dtaf_food_2110);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(890, str_canteen_banter_2106, randrange_event(175)+80);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)single_instance_1749_6_0)->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
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
    event_1749_6_end: ;
}
// Function purpose: generated callback event_func_3815 processes event block(s) 1750_6. Actions/conditions:
//        1750_6: changes a stored game value.
void Frames::event_func_3815()
{
    VITA_LEGACY_EVENT();
    // event 1750_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1750_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(890, str_canteen_banter_2106)) > (0))) goto event_1750_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1750_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(890, str_canteen_banter_2106, 1);
    }
    event_1750_6_end: ;
}
// Function purpose: generated callback event_func_3816 processes event block(s) 1752_6. Actions/conditions:
//        1752_6: checks scene is active; skips if the event-specific game state condition is met; this handler gates
//        a game event without a direct value/object action.
void Frames::event_func_3816()
{
    // event 1752_6 : checks scene is active; skips if the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1752_6_end;
        every_1752_6 += manager.dt;
        if (every_1752_6 < 1.0) goto event_1752_6_end;
        every_1752_6 -= 1.0;
        {
            loop_canteen_align_guards_running = true;
            int times = int(3);
            loop_canteen_align_guards_index = 0;
            while (loop_canteen_align_guards_index < times) {
                loop_canteen_align_guards_6();
                if (!loop_canteen_align_guards_running) break;
                loop_canteen_align_guards_index++;
            }
        }
    }
    event_1752_6_end: ;
}
// Function purpose: generated callback event_func_3817 processes event block(s) 1755_6. Actions/conditions:
//        1755_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 10 more actions.
void Frames::event_func_3817()
{
    // event 1755_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 10 more actions
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1755_6_end;
        canteenserving_277_instances.clear_selection();
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!canteenserving_277_instances.has_selection()) goto event_1755_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(playerBase_instances));
            if (obj1 == NULL) goto compare_1755_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_single(canteenserving_277_instances));
            if (obj2 == NULL) goto compare_1755_6_0_end;
            x2 = obj2->get_x() + 8;
            y2 = obj2->get_y() + 8;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_1755_6_end;
        }
        compare_1755_6_0_end: ;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_1755_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_off(75))) goto event_1755_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(7)) > (0))) goto event_1755_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1755_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1755_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_single(canteenserving_277_instances, it.current_index))->x + 0, ((Active*)get_single(canteenserving_277_instances, it.current_index))->y + 0));
            ((Active*)*it)->force_animation(11);
        }
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 1);
        }
        ((Active*)get_instance(playerBase_instances))->alterables->flags.enable(75);
        media.play_id(SOUND_PICKUP_3, 1-1);
    }
    event_1755_6_end: ;
}
// Function purpose: generated callback event_func_3818 processes event block(s) 1756_6. Actions/conditions:
//        1756_6: sets the object's animation to 11.
void Frames::event_func_3818()
{
    // event 1756_6 : sets the object's animation to 11
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1756_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_1756_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(75))) goto event_1756_6_end;
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
    }
    event_1756_6_end: ;
}
// Function purpose: generated callback event_func_3819 processes event block(s) 1757_6. Actions/conditions:
//        1757_6: sets the selected object's visibility to true.
void Frames::event_func_3819()
{
    // event 1757_6 : sets the selected object's visibility to true
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1757_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(747, str_zone_canteen_1918)) == (0))) goto event_1757_6_end;
        if (((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE) goto event_1757_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1757_6_end;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(true);
    }
    event_1757_6_end: ;
}
// Function purpose: generated callback event_func_3820 processes event block(s) 1758_6. Actions/conditions:
//        1758_6: sets the selected object's visibility to false.
void Frames::event_func_3820()
{
    // event 1758_6 : sets the selected object's visibility to false
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1758_6_end;
        if (!(((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE)) goto event_1758_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(747, str_zone_canteen_1918)) != (0))) goto event_1758_6_end;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(false);
    }
    event_1758_6_end: ;
}
// Function purpose: generated callback event_func_3821 processes event block(s) 1759_6. Actions/conditions:
//        1759_6: saves the current object selection; saves the current object selection; sets the object's animation
//        to 0; plus 1 more actions.
void Frames::event_func_3821()
{
    // event 1759_6 : saves the current object selection; saves the current object selection; sets the object's animation to 0; plus 1 more actions
    bool or_result_1759_6 = false;
    bool or_temp_result_1759_6_0 = false;
    {
        if (!(group_code_1)) goto or_event_1759_6_0_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(11))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto or_event_1759_6_0_end;
        playerBase_instances.clear_selection();
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(75))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto or_event_1759_6_0_end;
        or_result_1759_6 = true;
        or_temp_result_1759_6_0 = true;
    }
    or_event_1759_6_0_end: ;
    qualifier_2.clear_saved_selection();
    playerBase_instances.clear_saved_selection();
    if (or_temp_result_1759_6_0) {
        qualifier_2.save_selection();
        playerBase_instances.save_selection();
    }
    // event 1759_6 : saves the current object selection; saves the current object selection; sets the object's animation to 0; plus 1 more actions
    bool or_temp_result_1759_6_1 = false;
    {
        if (!(group_code_1)) goto or_event_1759_6_1_end;
        playerBase_instances.clear_selection();
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(75))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto or_event_1759_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(747, str_zone_canteen_1918)) == (0))) goto or_event_1759_6_1_end;
        or_result_1759_6 = true;
        or_temp_result_1759_6_1 = true;
        or_event_1759_6_1_end: ;
        if (or_temp_result_1759_6_1) {
            playerBase_instances.save_selection();
        }
        if (!or_result_1759_6) goto or_final_or_event_1759_6_1_end;
        qualifier_2.empty_selection();
        playerBase_instances.empty_selection();
        if (or_temp_result_1759_6_0) {
            qualifier_2.restore_selection();
        }
        if (or_temp_result_1759_6_0 || or_temp_result_1759_6_1) {
            playerBase_instances.restore_selection();
        }
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(75);
        }
    }
    or_final_or_event_1759_6_1_end: ;
}
// Function purpose: generated callback event_func_3822 processes event block(s) 1760_6. Actions/conditions:
//        1760_6: sets QuotaStatAdd to 0.
void Frames::event_func_3822()
{
    // event 1760_6 : sets QuotaStatAdd to 0
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1760_6_end;
        if (!group_check_group_code_schedules_leisure_work_1_0) goto event_1760_6_end;
        group_check_group_code_schedules_leisure_work_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(688, str_quotastatadd_1805, 0);
    }
    event_1760_6_end: ;
}
// Function purpose: generated callback event_func_3823 processes event block(s) 1761_6. Actions/conditions:
//        1761_6: sets MusicFade to Out.
void Frames::event_func_3823()
{
    // event 1761_6 : sets MusicFade to Out
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1761_6_end;
        if (!group_check_group_code_schedules_leisure_work_1_1) goto event_1761_6_end;
        group_check_group_code_schedules_leisure_work_1_1 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_out_1921);
    }
    event_1761_6_end: ;
}
// Function purpose: generated callback event_func_3824 processes event block(s) 1762_6. Actions/conditions:
//        1762_6: sets MusicFade to In; sets LastMusic to work; plays a sound or music track; plus 1 more actions.
void Frames::event_func_3824()
{
    // event 1762_6 : sets MusicFade to In; sets LastMusic to work; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1762_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_1762_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_1762_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_1762_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_1762_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (0))) goto event_1762_6_end;
        if (!((media.get_channel_volume(-1 +10)) <= (0))) goto event_1762_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_1762_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (empty_string))) goto event_1762_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_work_2111);
        media.play(str_music_work_ogg_2112, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_1762_6_end: ;
}
// Function purpose: generated callback event_func_3825 processes event block(s) 1763_6. Actions/conditions:
//        1763_6: sets MusicFade to In; sets LastMusic to escteam_work; plays a sound or music track; plus 1 more
//        actions.
void Frames::event_func_3825()
{
    // event 1763_6 : sets MusicFade to In; sets LastMusic to escteam_work; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1763_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_1763_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_1763_6_end;
        if (!((media.get_channel_volume(-1 +10)) <= (0))) goto event_1763_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_1763_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (empty_string))) goto event_1763_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_escteam_work_2113);
        media.play(str_music_escteam_work_ogg_2114, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_1763_6_end: ;
}
// Function purpose: generated callback event_func_3826 processes event block(s) 1764_6. Actions/conditions:
//        1764_6: sets MusicFade to In; sets LastMusic to DTAF_work; plays a sound or music track; plus 1 more
//        actions.
void Frames::event_func_3826()
{
    // event 1764_6 : sets MusicFade to In; sets LastMusic to DTAF_work; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1764_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_1764_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_1764_6_end;
        if (!((media.get_channel_volume(-1 +10)) <= (0))) goto event_1764_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_1764_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (empty_string))) goto event_1764_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_dtaf_work_2115);
        media.play(str_music_dtaf_work_ogg_2116, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_1764_6_end: ;
}
// Function purpose: generated callback event_func_3827 processes event block(s) 1765_6. Actions/conditions:
//        1765_6: sets MusicFade to In; sets LastMusic to SS_work; plays a sound or music track; plus 1 more actions.
void Frames::event_func_3827()
{
    // event 1765_6 : sets MusicFade to In; sets LastMusic to SS_work; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1765_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_1765_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_1765_6_end;
        if (!((media.get_channel_volume(-1 +10)) <= (0))) goto event_1765_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_1765_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (empty_string))) goto event_1765_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_ss_work_2117);
        media.play(str_music_ss_work_ogg_2118, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_1765_6_end: ;
}
// Function purpose: generated callback event_func_3828 processes event block(s) 1766_6. Actions/conditions:
//        1766_6: sets MusicFade to In; sets LastMusic to SS_work; plays a sound or music track; plus 1 more actions.
void Frames::event_func_3828()
{
    // event 1766_6 : sets MusicFade to In; sets LastMusic to SS_work; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1766_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_1766_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_1766_6_end;
        if (!((media.get_channel_volume(-1 +10)) <= (0))) goto event_1766_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_1766_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (empty_string))) goto event_1766_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_ss_work_2117);
        media.play(str_music_ss_work_ogg_2118, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_1766_6_end: ;
}
// Function purpose: generated callback event_func_3829 processes event block(s) 1767_6. Actions/conditions:
//        1767_6: sets MusicFade to In; sets LastMusic to gameVariables->get_string(164, Map_Music); plays a
//        sound or music track; plus 1 more actions.
void Frames::event_func_3829()
{
    // event 1767_6 : sets MusicFade to In; sets LastMusic to gameVariables->get_string(164, Map_Music); plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1767_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_1767_6_end;
        if (!((media.get_channel_volume(-1 +10)) <= (0))) goto event_1767_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_1767_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (empty_string))) goto event_1767_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(164, str_map_music_742));
        media.play(str_music_2119+((AssociateArray*)get_instance(gameVariables_instances))->get_string(164, str_map_music_742)+str_ogg_2120, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_1767_6_end: ;
}
// Function purpose: generated callback event_func_3830 processes event block(s) 1768_6. Actions/conditions:
//        1768_6: sets MusicFade to In; sets LastMusic to gameVariables->get_string(164, Map_Music); plays a
//        sound or music track; plus 1 more actions.
void Frames::event_func_3830()
{
    // event 1768_6 : sets MusicFade to In; sets LastMusic to gameVariables->get_string(164, Map_Music); plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1768_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_1768_6_end;
        if (!((media.get_channel_volume(-1 +10)) <= (0))) goto event_1768_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) != (str_work_477))) goto event_1768_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(164, str_map_music_742));
        media.play(str_music_2119+((AssociateArray*)get_instance(gameVariables_instances))->get_string(164, str_map_music_742)+str_ogg_2120, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_1768_6_end: ;
}
// Function purpose: generated callback event_func_3831 processes event block(s) 1769_6. Actions/conditions:
//        1769_6: sets the selected object's visibility to false; sets AttendLesson to 1; sets JobQuota to 0; plus 19
//        more actions.
void Frames::event_func_3831()
{
    // event 1769_6 : sets the selected object's visibility to false; sets AttendLesson to 1; sets JobQuota to 0; plus 19 more actions
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1769_6_end;
        if (!group_check_group_code_schedules_leisure_work_1_2) goto event_1769_6_end;
        group_check_group_code_schedules_leisure_work_1_2 = false;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(false);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(327, str_attendlesson_1115, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(18, str_jobquota_480, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(448, str_rndbanter_1315, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(885, str_obj_2077, str_none_2121);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(891, str_laundry_count_2122, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(892, str_kitchen_count_2123, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(466, str_npc_laundry_stage_1336, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(468, str_npc_kitchen_stage_1338, 1);
            group_code_schedules_leisure_work_npcs_doing_jobs_1 = false;
    
            group_code_schedules_leisure_work_npcs_doing_jobs_npc_janitor_1 = false;
    
            group_code_schedules_leisure_work_npcs_doing_jobs_npc_gardening_1 = false;
    
            group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1 = false;
    
            group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1 = false;
    
            group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1 = false;
    
            group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1 = false;
    
            group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1 = false;
    
            group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1 = false;
    
            group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1 = false;
    
            group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1 = false;
    
        {
            loop_job_dest_running = true;
            int times = int(1);
            loop_job_dest_index = 0;
            while (loop_job_dest_index < times) {
                loop_job_dest_6();
                if (!loop_job_dest_running) break;
                loop_job_dest_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(110, str_jq_janitor_672, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_jq_gardening_674, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(114, str_jq_mailman_676, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(116, str_jq_library_678, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(118, str_jq_laundry_680, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(122, str_jq_kitchen_684, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(126, str_jq_woodshop_688, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(128, str_jq_metalshop_690, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(120, str_jq_deliveries_682, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(124, str_jq_tailor_686, 0);
    }
    event_1769_6_end: ;
}
// Function purpose: generated callback event_func_3832 processes event block(s) 1770_6. Actions/conditions:
//        1770_6: sets Obj to Go and complete your prison job; sets JobQuota to 0; creates a taskbox 238 object; plus
//        9 more actions.
void Frames::event_func_3832()
{
    // event 1770_6 : sets Obj to Go and complete your prison job; sets JobQuota to 0; creates a taskbox 238 object; plus 9 more actions
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1770_6_end;
        if (!group_check_group_code_schedules_leisure_work_1_3) goto event_1770_6_end;
        group_check_group_code_schedules_leisure_work_1_3 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (empty_string))) goto event_1770_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_1770_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(885, str_obj_2077, str_go_and_complete_your_prison_job_2124);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(18, str_jobquota_480, 0);
        FrameObject * single_instance_1770_6_0; single_instance_1770_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(sidePanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityPanel(parent->x + 219, parent->y + 180), parent->layer);
                if (single_instance_1770_6_0 == NULL)
                    single_instance_1770_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1770_6_0))->alterables->strings.set(0, str_jobquota_480);
        FrameObject * single_instance_1770_6_1; single_instance_1770_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_activityProgress(((Active*)single_instance_1770_6_0)->x + 10, ((Active*)single_instance_1770_6_0)->y + 15), ((Active*)single_instance_1770_6_0)->layer);
            if (single_instance_1770_6_1 == NULL)
                single_instance_1770_6_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1770_6_1))->alterables->strings.set(0, str_jobquota_480);
        quota_358_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_quota_358(0, 0), 5);
            quota_358_instances.add_back();
        }
        for (ObjectIterator it(quota_358_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_12_334));
        }
        for (ObjectIterator it(quota_358_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)single_instance_1770_6_0);
            if (parent == NULL) goto pos_end_1770_6_3;
            ((Text*)*it)->set_global_position(parent->get_x() + 9, parent->get_y() + 3);
            pos_end_1770_6_3: ;
        }
    }
    event_1770_6_end: ;
}
// Function purpose: generated callback event_func_3833 processes event block(s) 1771_6. Actions/conditions:
//        1771_6: sets JobQuota to 55.
void Frames::event_func_3833()
{
    // event 1771_6 : sets JobQuota to 55
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1771_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(18, str_jobquota_480)) >= (55))) goto event_1771_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (empty_string))) goto event_1771_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(18, str_jobquota_480, 55);
        {
            loop_quotadone_running = true;
            int times = int(1);
            loop_quotadone_index = 0;
            while (loop_quotadone_index < times) {
                loop_quotadone_6();
                if (!loop_quotadone_running) break;
                loop_quotadone_index++;
            }
        }
    }
    event_1771_6_end: ;
}
// Function purpose: generated callback event_func_3834 processes event block(s) 1787_6. Actions/conditions:
//        1787_6: sets horizontal scaling; moves the selected object to the front.
void Frames::event_func_3834()
{
    // event 1787_6 : sets horizontal scaling; moves the selected object to the front
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1787_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_1787_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (empty_string))) goto event_1787_6_end;
        activityProgress_instances.clear_selection();
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_jobquota_480))) { it.deselect(); continue; }
        }
        if (!activityProgress_instances.has_selection()) goto event_1787_6_end;
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(((AssociateArray*)get_instance(gameVariables_instances))->get_value(18, str_jobquota_480));
        }
        quota_358_instances.clear_selection();
        for (ObjectIterator it(quota_358_instances); !it.end(); ++it) {
            ((Text*)*it)->move_front();
        }
    }
    event_1787_6_end: ;
}
// Function purpose: generated callback event_func_3835 processes event block(s) 1788_6. Actions/conditions:
//        1788_6: checks scene is active; skips if the event-specific game state condition is met; skips if dialog is
//        open; this handler gates a game event without a direct va.
void Frames::event_func_3835()
{
    // event 1788_6 : checks scene is active; skips if the event-specific game state condition is met; skips if dialog is open; this handler gates a game event without a direct va
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1788_6_end;
        every_1788_6 += manager.dt;
        if (every_1788_6 < 1.0) goto event_1788_6_end;
        every_1788_6 -= 1.0;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1788_6_end;
        {
            loop_inmates_free_period_running = true;
            int times = int(inmateBase_instances.size());
            loop_inmates_free_period_index = 0;
            while (loop_inmates_free_period_index < times) {
                loop_inmates_free_period_6();
                if (!loop_inmates_free_period_running) break;
                loop_inmates_free_period_index++;
            }
        }
        {
            loop_guards_free_period_running = true;
            int times = int(3);
            loop_guards_free_period_index = 0;
            while (loop_guards_free_period_index < times) {
                loop_guards_free_period_6();
                if (!loop_guards_free_period_running) break;
                loop_guards_free_period_index++;
            }
        }
    }
    event_1788_6_end: ;
}
// Function purpose: generated callback event_func_3836 processes event block(s) 1792_6. Actions/conditions:
//        1792_6: checks scene is active; skips if the event-specific game state condition is met; the event-specific
//        game state condition is met; game state RndBanter; this h.
void Frames::event_func_3836()
{
    VITA_LEGACY_EVENT();
    // event 1792_6 : checks scene is active; skips if the event-specific game state condition is met; the event-specific game state condition is met; game state RndBanter; this h
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1792_6_end;
        playerBase_instances.clear_selection();
        conscan_260_instances.clear_selection();
        if (!check_overlap(playerBase_instances, conscan_260_instances)) goto event_1792_6_end;
        if (!((randrange_event(5)+1) == (1))) goto event_1792_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1792_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(448, str_rndbanter_1315)) == (0))) goto event_1792_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1792_6_end;
        {
            loop_free_banter_running = true;
            int times = int(1);
            loop_free_banter_index = 0;
            while (loop_free_banter_index < times) {
                loop_free_banter_6();
                if (!loop_free_banter_running) break;
                loop_free_banter_index++;
            }
        }
    }
    event_1792_6_end: ;
}
// Function purpose: generated callback event_func_3837 processes event block(s) 1808_6. Actions/conditions:
//        1808_6: changes a stored game value.
void Frames::event_func_3837()
{
    VITA_LEGACY_EVENT();
    // event 1808_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1808_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(448, str_rndbanter_1315)) > (0))) goto event_1808_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(448, str_rndbanter_1315, 1);
    }
    event_1808_6_end: ;
}
// Function purpose: generated callback event_func_3838 processes event block(s) 1809_6. Actions/conditions:
//        1809_6: checks scene is active; game state Free_Type; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_3838()
{
    // event 1809_6 : checks scene is active; game state Free_Type; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1809_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_1809_6_end;
        if (group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1) goto event_1809_6_end;
        if (!group_code_schedules_leisure_work_npcs_doing_jobs_1) {
            group_code_schedules_leisure_work_npcs_doing_jobs_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_gardening_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_9 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_8 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_7 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_6 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_5 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_4 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_3 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_2 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_janitor_1_0 = true;
        }
    }
    event_1809_6_end: ;
}
// Function purpose: generated callback event_func_3839 processes event block(s) 1810_6. Actions/conditions:
//        1810_6: checks scene is active; skips if schedules leisure work npcs doing jobs 1 0 event group is active;
//        game state Pos_Janitor; this handler gates a game event wi.
void Frames::event_func_3839()
{
    // event 1810_6 : checks scene is active; skips if schedules leisure work npcs doing jobs 1 0 event group is active; game state Pos_Janitor; this handler gates a game event wi
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1)) goto event_1810_6_end;
        if (!group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_0) goto event_1810_6_end;
        group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_0 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(109, str_pos_janitor_671)) > (0))) goto event_1810_6_end;
        if (!group_code_schedules_leisure_work_npcs_doing_jobs_npc_janitor_1) {
            group_code_schedules_leisure_work_npcs_doing_jobs_npc_janitor_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_janitor_1_0 = true;
        }
    }
    event_1810_6_end: ;
}
// Function purpose: generated callback event_func_3840 processes event block(s) 1811_6. Actions/conditions:
//        1811_6: checks scene is active; skips if schedules leisure work npcs doing jobs 1 1 event group is active;
//        game state Pos_Gardening; this handler gates a game event.
void Frames::event_func_3840()
{
    // event 1811_6 : checks scene is active; skips if schedules leisure work npcs doing jobs 1 1 event group is active; game state Pos_Gardening; this handler gates a game event
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1)) goto event_1811_6_end;
        if (!group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_1) goto event_1811_6_end;
        group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_1 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(111, str_pos_gardening_673)) > (0))) goto event_1811_6_end;
        if (!group_code_schedules_leisure_work_npcs_doing_jobs_npc_gardening_1) {
            group_code_schedules_leisure_work_npcs_doing_jobs_npc_gardening_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_gardening_1_0 = true;
        }
    }
    event_1811_6_end: ;
}
// Function purpose: generated callback event_func_3841 processes event block(s) 1812_6. Actions/conditions:
//        1812_6: checks scene is active; skips if schedules leisure work npcs doing jobs 1 2 event group is active;
//        game state Pos_Laundry; this handler gates a game event wi.
void Frames::event_func_3841()
{
    // event 1812_6 : checks scene is active; skips if schedules leisure work npcs doing jobs 1 2 event group is active; game state Pos_Laundry; this handler gates a game event wi
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1)) goto event_1812_6_end;
        if (!group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_2) goto event_1812_6_end;
        group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_2 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(117, str_pos_laundry_679)) > (0))) goto event_1812_6_end;
        if (!group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1) {
            group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1_0 = true;
        }
    }
    event_1812_6_end: ;
}
// Function purpose: generated callback event_func_3842 processes event block(s) 1813_6. Actions/conditions:
//        1813_6: checks scene is active; skips if schedules leisure work npcs doing jobs 1 3 event group is active;
//        game state Pos_Mailman; this handler gates a game event wi.
void Frames::event_func_3842()
{
    // event 1813_6 : checks scene is active; skips if schedules leisure work npcs doing jobs 1 3 event group is active; game state Pos_Mailman; this handler gates a game event wi
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1)) goto event_1813_6_end;
        if (!group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_3) goto event_1813_6_end;
        group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_3 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(113, str_pos_mailman_675)) > (0))) goto event_1813_6_end;
        if (!group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1) {
            group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1_0 = true;
        }
    }
    event_1813_6_end: ;
}
// Function purpose: generated callback event_func_3843 processes event block(s) 1814_6. Actions/conditions:
//        1814_6: checks scene is active; skips if schedules leisure work npcs doing jobs 1 4 event group is active;
//        game state Pos_Library; this handler gates a game event wi.
void Frames::event_func_3843()
{
    // event 1814_6 : checks scene is active; skips if schedules leisure work npcs doing jobs 1 4 event group is active; game state Pos_Library; this handler gates a game event wi
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1)) goto event_1814_6_end;
        if (!group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_4) goto event_1814_6_end;
        group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_4 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(115, str_pos_library_677)) > (0))) goto event_1814_6_end;
        if (!group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1) {
            group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1_0 = true;
        }
    }
    event_1814_6_end: ;
}
// Function purpose: generated callback event_func_3844 processes event block(s) 1815_6. Actions/conditions:
//        1815_6: checks scene is active; skips if schedules leisure work npcs doing jobs 1 5 event group is active;
//        game state Pos_Kitchen; this handler gates a game event wi.
void Frames::event_func_3844()
{
    // event 1815_6 : checks scene is active; skips if schedules leisure work npcs doing jobs 1 5 event group is active; game state Pos_Kitchen; this handler gates a game event wi
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1)) goto event_1815_6_end;
        if (!group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_5) goto event_1815_6_end;
        group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_5 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(121, str_pos_kitchen_683)) > (0))) goto event_1815_6_end;
        if (!group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1) {
            group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1_0 = true;
        }
    }
    event_1815_6_end: ;
}
// Function purpose: generated callback event_func_3845 processes event block(s) 1816_6. Actions/conditions:
//        1816_6: checks scene is active; skips if schedules leisure work npcs doing jobs 1 6 event group is active;
//        game state Pos_Woodshop; this handler gates a game event w.
void Frames::event_func_3845()
{
    // event 1816_6 : checks scene is active; skips if schedules leisure work npcs doing jobs 1 6 event group is active; game state Pos_Woodshop; this handler gates a game event w
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1)) goto event_1816_6_end;
        if (!group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_6) goto event_1816_6_end;
        group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_6 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(125, str_pos_woodshop_687)) > (0))) goto event_1816_6_end;
        if (!group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1) {
            group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1_0 = true;
        }
    }
    event_1816_6_end: ;
}
// Function purpose: generated callback event_func_3846 processes event block(s) 1817_6. Actions/conditions:
//        1817_6: checks scene is active; skips if schedules leisure work npcs doing jobs 1 7 event group is active;
//        game state Pos_Metalshop; this handler gates a game event.
void Frames::event_func_3846()
{
    // event 1817_6 : checks scene is active; skips if schedules leisure work npcs doing jobs 1 7 event group is active; game state Pos_Metalshop; this handler gates a game event
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1)) goto event_1817_6_end;
        if (!group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_7) goto event_1817_6_end;
        group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_7 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(127, str_pos_metalshop_689)) > (0))) goto event_1817_6_end;
        if (!group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1) {
            group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1_0 = true;
        }
    }
    event_1817_6_end: ;
}
// Function purpose: generated callback event_func_3847 processes event block(s) 1818_6. Actions/conditions:
//        1818_6: checks scene is active; skips if schedules leisure work npcs doing jobs 1 8 event group is active;
//        game state Pos_Tailor; this handler gates a game event wit.
void Frames::event_func_3847()
{
    // event 1818_6 : checks scene is active; skips if schedules leisure work npcs doing jobs 1 8 event group is active; game state Pos_Tailor; this handler gates a game event wit
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1)) goto event_1818_6_end;
        if (!group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_8) goto event_1818_6_end;
        group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_8 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(123, str_pos_tailor_685)) > (0))) goto event_1818_6_end;
        if (!group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1) {
            group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1_0 = true;
        }
    }
    event_1818_6_end: ;
}
// Function purpose: generated callback event_func_3848 processes event block(s) 1819_6. Actions/conditions:
//        1819_6: checks scene is active; skips if schedules leisure work npcs doing jobs 1 9 event group is active;
//        game state Pos_Deliveries; this handler gates a game event.
void Frames::event_func_3848()
{
    // event 1819_6 : checks scene is active; skips if schedules leisure work npcs doing jobs 1 9 event group is active; game state Pos_Deliveries; this handler gates a game event
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1)) goto event_1819_6_end;
        if (!group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_9) goto event_1819_6_end;
        group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_9 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(119, str_pos_deliveries_681)) > (0))) goto event_1819_6_end;
        if (!group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1) {
            group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1_0 = true;
        }
    }
    event_1819_6_end: ;
}
// Function purpose: generated callback event_func_3849 processes event block(s) 1820_6. Actions/conditions:
//        1820_6: sets JQ_Gardening to 0.
void Frames::event_func_3849()
{
    // event 1820_6 : sets JQ_Gardening to 0
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_gardening_1)) goto event_1820_6_end;
        if (!group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_gardening_1_0) goto event_1820_6_end;
        group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_gardening_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_jq_gardening_674, 0);
    }
    event_1820_6_end: ;
}
// Function purpose: generated callback event_func_3850 processes event block(s) 1823_6. Actions/conditions:
//        1823_6: sets JQ_Janitor to 0.
void Frames::event_func_3850()
{
    // event 1823_6 : sets JQ_Janitor to 0
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_janitor_1)) goto event_1823_6_end;
        if (!group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_janitor_1_0) goto event_1823_6_end;
        group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_janitor_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(110, str_jq_janitor_672, 0);
    }
    event_1823_6_end: ;
}
// Function purpose: generated callback event_func_3851 processes event block(s) 1826_6. Actions/conditions:
//        1826_6: sets NPC_Mailman_Stage to 1.
void Frames::event_func_3851()
{
    // event 1826_6 : sets NPC_Mailman_Stage to 1
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1)) goto event_1826_6_end;
        if (!group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1_0) goto event_1826_6_end;
        group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(464, str_npc_mailman_stage_1334, 1);
    }
    event_1826_6_end: ;
}
// Function purpose: generated callback event_func_3852 processes event block(s) 1838_6. Actions/conditions:
//        1838_6: sets NPC_Library_Stage to 1; sets JQ_Library to 0.
void Frames::event_func_3852()
{
    // event 1838_6 : sets NPC_Library_Stage to 1; sets JQ_Library to 0
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1)) goto event_1838_6_end;
        if (!group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1_0) goto event_1838_6_end;
        group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(465, str_npc_library_stage_1335, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(116, str_jq_library_678, 0);
    }
    event_1838_6_end: ;
}
// Function purpose: generated callback event_func_3853 processes event block(s) 1853_6. Actions/conditions:
//        1853_6: sets NPC_Laundry_Stage to 1.
void Frames::event_func_3853()
{
    // event 1853_6 : sets NPC_Laundry_Stage to 1
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1)) goto event_1853_6_end;
        if (!group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1_0) goto event_1853_6_end;
        group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(466, str_npc_laundry_stage_1336, 1);
    }
    event_1853_6_end: ;
}
// Function purpose: generated callback event_func_3854 processes event block(s) 1872_6. Actions/conditions:
//        1872_6: sets NPC_Metalshop_Stage to 1.
void Frames::event_func_3854()
{
    // event 1872_6 : sets NPC_Metalshop_Stage to 1
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1)) goto event_1872_6_end;
        if (!group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1_0) goto event_1872_6_end;
        group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(467, str_npc_metalshop_stage_1337, 1);
    }
    event_1872_6_end: ;
}
// Function purpose: generated callback event_func_3855 processes event block(s) 1886_6. Actions/conditions:
//        1886_6: sets NPC_Kitchen_Stage to 1.
void Frames::event_func_3855()
{
    // event 1886_6 : sets NPC_Kitchen_Stage to 1
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1)) goto event_1886_6_end;
        if (!group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1_0) goto event_1886_6_end;
        group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(468, str_npc_kitchen_stage_1338, 1);
    }
    event_1886_6_end: ;
}
// Function purpose: generated callback event_func_3856 processes event block(s) 1900_6. Actions/conditions:
//        1900_6: sets NPC_Woodshop_Stage to 1.
void Frames::event_func_3856()
{
    // event 1900_6 : sets NPC_Woodshop_Stage to 1
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1)) goto event_1900_6_end;
        if (!group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1_0) goto event_1900_6_end;
        group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(469, str_npc_woodshop_stage_1339, 1);
    }
    event_1900_6_end: ;
}
// Function purpose: generated callback event_func_3857 processes event block(s) 1911_6. Actions/conditions:
//        1911_6: sets JQ_Tailor to 0; sets NPC_Tailorshop_Stage to 1.
void Frames::event_func_3857()
{
    // event 1911_6 : sets JQ_Tailor to 0; sets NPC_Tailorshop_Stage to 1
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1)) goto event_1911_6_end;
        if (!group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1_0) goto event_1911_6_end;
        group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(124, str_jq_tailor_686, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(470, str_npc_tailorshop_stage_1340, 1);
    }
    event_1911_6_end: ;
}
// Function purpose: generated callback event_func_3858 processes event block(s) 1922_6. Actions/conditions:
//        1922_6: sets NPC_Deliv_Stage to 1.
void Frames::event_func_3858()
{
    // event 1922_6 : sets NPC_Deliv_Stage to 1
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1)) goto event_1922_6_end;
        if (!group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1_0) goto event_1922_6_end;
        group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(471, str_npc_deliv_stage_1341, 1);
    }
    event_1922_6_end: ;
}
// Function purpose: generated callback event_func_3859 processes event block(s) 1944_6. Actions/conditions:
//        1944_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_3859()
{
    // event 1944_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1944_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_deliveries_577))) goto event_1944_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_1944_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(truck_388_instances));
            if (obj1 == NULL) goto compare_1944_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1944_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (get_distance(x1, y1, x2, y2) <= 50) goto event_1944_6_end;
        }
        compare_1944_6_0_end: ;
        if (((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE) goto event_1944_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1944_6_end;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(true);
    }
    event_1944_6_end: ;
}
// Function purpose: generated callback event_func_3860 processes event block(s) 1945_6. Actions/conditions:
//        1945_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_3860()
{
    // event 1945_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1945_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_deliveries_577))) goto event_1945_6_end;
        if (!(((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE)) goto event_1945_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(truck_388_instances));
            if (obj1 == NULL) goto compare_1945_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1945_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 50)) goto event_1945_6_end;
        }
        compare_1945_6_0_end: ;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(false);
    }
    event_1945_6_end: ;
}
// Function purpose: generated callback event_func_3861 processes event block(s) 1946_6. Actions/conditions:
//        1946_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_3861()
{
    // event 1946_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1946_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_janitor_24))) goto event_1946_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_1946_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(containerjanitor_270_instances));
            if (obj1 == NULL) goto compare_1946_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1946_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (get_distance(x1, y1, x2, y2) <= 50) goto event_1946_6_end;
        }
        compare_1946_6_0_end: ;
        if (((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE) goto event_1946_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1946_6_end;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(true);
    }
    event_1946_6_end: ;
}
// Function purpose: generated callback event_func_3862 processes event block(s) 1947_6. Actions/conditions:
//        1947_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_3862()
{
    // event 1947_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1947_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_janitor_24))) goto event_1947_6_end;
        if (!(((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE)) goto event_1947_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(containerjanitor_270_instances));
            if (obj1 == NULL) goto compare_1947_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1947_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 50)) goto event_1947_6_end;
        }
        compare_1947_6_0_end: ;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(false);
    }
    event_1947_6_end: ;
}
// Function purpose: generated callback event_func_3863 processes event block(s) 1948_6. Actions/conditions:
//        1948_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_3863()
{
    // event 1948_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1948_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_gardening_43))) goto event_1948_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_1948_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(containergardening_409_instances));
            if (obj1 == NULL) goto compare_1948_6_0_end;
            x1 = obj1->get_x() + 16;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1948_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (get_distance(x1, y1, x2, y2) <= 50) goto event_1948_6_end;
        }
        compare_1948_6_0_end: ;
        if (((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE) goto event_1948_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1948_6_end;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(true);
    }
    event_1948_6_end: ;
}
