#include "vitaframetime.h"
#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_4864 processes event block(s) 4456_6. Group(s): hud_shakes.
//        Actions/conditions: 4456_6: changes a stored game value.
void Frames::event_func_4864()
{
    VITA_LEGACY_EVENT();
    // event 4456_6 : changes a stored game value
    {
        // group: hud_shakes
        if (!((((TextBlitter*)get_instance(heatText_instances))->alterables->values.get(0)) > (0))) goto event_4456_6_end;
        ((TextBlitter*)get_instance(heatText_instances))->alterables->values.sub(0, 1);
    }
    event_4456_6_end: ;
}
// Function purpose: generated callback event_func_4865 processes event block(s) 4457_6. Group(s): hud_shakes.
//        Actions/conditions: 4457_6: sets the target animation type.
void Frames::event_func_4865()
{
    // event 4457_6 : sets the target animation type
    {
        // group: hud_shakes
        if (!((((TextBlitter*)get_instance(heatText_instances))->anim_type) != (0))) goto event_4457_6_end;
        if (!((((TextBlitter*)get_instance(heatText_instances))->alterables->values.get(0)) == (0))) goto event_4457_6_end;
        ((TextBlitter*)get_instance(heatText_instances))->set_animation_type(0);
    }
    event_4457_6_end: ;
}
// Function purpose: generated callback event_func_4866 processes event block(s) 4460_6. Group(s): hud_shakes.
//        Actions/conditions: 4460_6: changes a stored game value.
void Frames::event_func_4866()
{
    VITA_LEGACY_EVENT();
    // event 4460_6 : changes a stored game value
    {
        // group: hud_shakes
        if (!((((TextBlitter*)get_instance(cashText_instances))->alterables->values.get(0)) > (0))) goto event_4460_6_end;
        ((TextBlitter*)get_instance(cashText_instances))->alterables->values.sub(0, 1);
    }
    event_4460_6_end: ;
}
// Function purpose: generated callback event_func_4867 processes event block(s) 4461_6. Group(s): hud_shakes.
//        Actions/conditions: 4461_6: sets the target animation type.
void Frames::event_func_4867()
{
    // event 4461_6 : sets the target animation type
    {
        // group: hud_shakes
        if (!((((TextBlitter*)get_instance(cashText_instances))->anim_type) != (0))) goto event_4461_6_end;
        if (!((((TextBlitter*)get_instance(cashText_instances))->alterables->values.get(0)) == (0))) goto event_4461_6_end;
        ((TextBlitter*)get_instance(cashText_instances))->set_animation_type(0);
    }
    event_4461_6_end: ;
}
// Function purpose: generated callback event_func_4868 processes event block(s) 4464_6. Group(s): hud_shakes.
//        Actions/conditions: 4464_6: changes a stored game value.
void Frames::event_func_4868()
{
    VITA_LEGACY_EVENT();
    // event 4464_6 : changes a stored game value
    {
        // group: hud_shakes
        buddiesText_instances.clear_selection();
        for (ObjectIterator it(buddiesText_instances); !it.end(); ++it) {
            if (!((((TextBlitter*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!buddiesText_instances.has_selection()) goto event_4464_6_end;
        for (ObjectIterator it(buddiesText_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->alterables->values.sub(0, 1);
        }
    }
    event_4464_6_end: ;
}
// Function purpose: generated callback event_func_4869 processes event block(s) 4465_6. Group(s): hud_shakes.
//        Actions/conditions: 4465_6: sets the target animation type.
void Frames::event_func_4869()
{
    // event 4465_6 : sets the target animation type
    {
        // group: hud_shakes
        if (!((((TextBlitter*)get_instance(buddiesText_instances, default_blitter_instance))->anim_type) != (0))) goto event_4465_6_end;
        buddiesText_instances.clear_selection();
        for (ObjectIterator it(buddiesText_instances); !it.end(); ++it) {
            if (!((((TextBlitter*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!buddiesText_instances.has_selection()) goto event_4465_6_end;
        for (ObjectIterator it(buddiesText_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_animation_type(0);
        }
    }
    event_4465_6_end: ;
}
// Function purpose: generated callback event_func_4870 processes event block(s) 4468_6. Group(s): Followers.
//        Actions/conditions: 4468_6: disables flag 300 (object-specific gameplay state) on the selected object.
void Frames::event_func_4870()
{
    // event 4468_6 : disables flag 300 (object-specific gameplay state) on the selected object
    {
        // group: Followers
        if (is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.button1)))) goto event_4468_6_end;
        if (!(((AssociateArray*)get_instance(gameVariables_instances))->alterables->flags.is_on(300))) goto event_4468_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->alterables->flags.disable(300);
    }
    event_4468_6_end: ;
}
// Function purpose: generated callback event_func_4871 processes event block(s) 4469_6. Group(s): Followers.
//        Actions/conditions: 4469_6: sets charID to ((Active*)single_instance_4469_6_0)->alterables->values.get(0);
//        sets charX to ((Active*)single_instance_4469_6_0)->get_x(); sets charY to
//        ((Active*)single_instance_4469_6_0)->get_y(); plus 5 more actions.
void Frames::event_func_4871()
{
    // event 4469_6 : sets charID to ((Active*)single_instance_4469_6_0)->alterables->values.get(0); sets charX to ((Active*)single_instance_4469_6_0)->get_x(); sets charY to ((Active*)single_instance_4469_6_0)->get_y(); plus 5 more actions
    {
        // group: Followers
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.button1))))) goto event_4469_6_end;
        if (!(((AssociateArray*)get_instance(gameVariables_instances))->alterables->flags.is_off(300))) goto event_4469_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_4469_6_end;
        FrameObject * single_instance_4469_6_0; single_instance_4469_6_0 = pick_random(inmateBase_instances);
        if (single_instance_4469_6_0 == NULL) goto event_4469_6_end;
        if (!((((Active*)single_instance_4469_6_0)->alterables->values.get(15)) == (0))) goto event_4469_6_end;
        if (!((((Active*)single_instance_4469_6_0)->alterables->values.get(12)) >= (80))) goto event_4469_6_end;
        if (!((((Active*)single_instance_4469_6_0)->alterables->values.get(7)) > (0))) goto event_4469_6_end;
        if (!((((Active*)single_instance_4469_6_0)->alterables->values.get(2)) == (0))) goto event_4469_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_9)) goto event_4469_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4469_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(94, str_charid_605, ((Active*)single_instance_4469_6_0)->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(662, str_charx_1762, ((Active*)single_instance_4469_6_0)->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(663, str_chary_1763, ((Active*)single_instance_4469_6_0)->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->alterables->flags.enable(300);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(260, str_cansee_915, 1);
        {
            loop_follow_checks_running = true;
            int times = int(1);
            loop_follow_checks_index = 0;
            while (loop_follow_checks_index < times) {
                loop_follow_checks_6();
                if (!loop_follow_checks_running) break;
                loop_follow_checks_index++;
            }
        }
    }
    event_4469_6_end: ;
}
// Function purpose: generated callback event_func_4872 processes event block(s) 4478_6. Group(s): Followers.
//        Actions/conditions: 4478_6: sets charID to ((Active*)single_instance_4478_6_0)->alterables->values.get(0);
//        activates the Dismiss event group; sets SpeakText to
//        inispeech_453->get_string(number_to_string(randrange_event(inispeech_453->get_value_int(Count))+1)); plus 8
//        more actions.
void Frames::event_func_4872()
{
    // event 4478_6 : sets charID to ((Active*)single_instance_4478_6_0)->alterables->values.get(0); activates the Dismiss event group; sets SpeakText to inispeech_453->get_string(number_to_string(randrange_event(inispeech_453->get_value_int(Count))+1)); plus 8 more actions
    {
        // group: Followers
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.button1))))) goto event_4478_6_end;
        if (!(((AssociateArray*)get_instance(gameVariables_instances))->alterables->flags.is_off(300))) goto event_4478_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_4478_6_end;
        FrameObject * single_instance_4478_6_0; single_instance_4478_6_0 = pick_random(inmateBase_instances);
        if (single_instance_4478_6_0 == NULL) goto event_4478_6_end;
        if (!((((Active*)single_instance_4478_6_0)->alterables->values.get(15)) == (-1))) goto event_4478_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4478_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(94, str_charid_605, ((Active*)single_instance_4478_6_0)->alterables->values.get(0));
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_dismiss_2304);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->alterables->flags.enable(300);
        ((Active*)((Active*)single_instance_4478_6_0))->alterables->values.set(15, 0);
        ((Active*)((Active*)single_instance_4478_6_0))->alterables->values.set(23, ((Active*)single_instance_4478_6_0)->get_x());
        ((Active*)((Active*)single_instance_4478_6_0))->alterables->values.set(24, ((Active*)single_instance_4478_6_0)->get_y());
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
        media.play_id(SOUND_STEP_1, 1-1);
    }
    event_4478_6_end: ;
}
// Function purpose: generated callback event_func_4873 processes event block(s) 4479_6. Group(s): Followers.
//        Actions/conditions: 4479_6: unlocks the ThugLife achievement.
void Frames::event_func_4873()
{
    // event 4479_6 : unlocks the ThugLife achievement
    {
        // group: Followers
        if (!((global_values->get(16)) == (1))) goto event_4479_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(618, str_buddies_39)) >= (5))) goto event_4479_6_end;
        if (((SteamObject*)get_instance(steamworks2_469_instances))->is_achievement_unlocked(str_thuglife_2305)) goto event_4479_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->unlock_achievement(str_thuglife_2305);
    }
    event_4479_6_end: ;
}
// Function purpose: generated callback event_func_4874 processes event block(s) 4480_6. Group(s): Extra NPCs.
//        Actions/conditions: 4480_6: sets VisitorCount to 0; sets WardenCount to 0; sets JobStaffCount to 0; plus 1
//        more actions.
void Frames::event_func_4874()
{
    // event 4480_6 : sets VisitorCount to 0; sets WardenCount to 0; sets JobStaffCount to 0; plus 1 more actions
    {
        // group: Extra NPCs
        if (!group_check_group_extra_npcs_1_0) goto event_4480_6_end;
        group_check_group_extra_npcs_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(958, str_visitorcount_2306, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(959, str_wardencount_2307, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(960, str_jobstaffcount_2308, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(961, str_infirmarystaffcount_2309, 0);
    }
    event_4480_6_end: ;
}
// Function purpose: generated callback event_func_4875 processes event block(s) 4481_6. Actions/conditions:
//        4481_6: sets the object's animation to 0.
void Frames::event_func_4875()
{
    // event 4481_6 : sets the object's animation to 0
    {
        if (!(group_extra_npcs_warden_1)) goto event_4481_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_warden_594))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(0)) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4481_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_4481_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_4481_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_4481_6_end: ;
}
// Function purpose: generated callback event_func_4876 processes event block(s) 4482_6. Actions/conditions:
//        4482_6: sets the object's animation to 22.
void Frames::event_func_4876()
{
    // event 4482_6 : sets the object's animation to 22
    {
        if (!(group_extra_npcs_warden_1)) goto event_4482_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_warden_594))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(22)) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4482_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_4482_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
    }
    event_4482_6_end: ;
}
// Function purpose: generated callback event_func_4877 processes event block(s) 4483_6. Actions/conditions:
//        4483_6: sets the object's animation to 23.
void Frames::event_func_4877()
{
    // event 4483_6 : sets the object's animation to 23
    {
        if (!(group_extra_npcs_warden_1)) goto event_4483_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_warden_594))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(23)) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4483_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_4483_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(23);
        }
    }
    event_4483_6_end: ;
}
// Function purpose: generated callback event_func_4878 processes event block(s) 4484_6. Actions/conditions:
//        4484_6: changes a stored game value.
void Frames::event_func_4878()
{
    VITA_LEGACY_EVENT();
    // event 4484_6 : changes a stored game value
    {
        if (!(group_extra_npcs_warden_1)) goto event_4484_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4484_6_end;
        waypointguard2_315_instances.clear_selection();
        if (!check_overlap(serviceNpc_instances, waypointguard2_315_instances)) goto event_4484_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_warden_594))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4484_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4484_6_end;
        {
            loop_warden_dest_running = true;
            int times = int(1);
            loop_warden_dest_index = 0;
            while (loop_warden_dest_index < times) {
                loop_warden_dest_6();
                if (!loop_warden_dest_running) break;
                loop_warden_dest_index++;
            }
        }
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
    }
    event_4484_6_end: ;
}
// Function purpose: generated callback event_func_4879 processes event block(s) 4486_6. Actions/conditions:
//        4486_6: sets the selected object's numeric value to ((Active*)get_instance(npcspawn_384_instances,
//        it.current_index, default_active_instance))->get_x(); sets the selected object's numeric value to
//        ((Active*)get_instance(npcspawn_384_instances, it.current_index, default_active_instance))->get_y(); sets
//        the selected object's string to done.
void Frames::event_func_4879()
{
    // event 4486_6 : sets the selected object's numeric value to ((Active*)get_instance(npcspawn_384_instances, it.current_index, default_active_instance))->get_x(); sets the selected object's numeric value to ((Active*)get_instance(npcspawn_384_instances, it.current_index, default_active_instance))->get_y(); sets the selected object's string to done
    {
        if (!(group_extra_npcs_warden_1)) goto event_4486_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4486_6_end;
        waypointguard2_315_instances.clear_selection();
        if (!check_overlap(serviceNpc_instances, waypointguard2_315_instances)) goto event_4486_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_warden_594))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4486_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4486_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_instance(npcspawn_384_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_instance(npcspawn_384_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->alterables->strings.set(9, str_done_447);
        }
    }
    event_4486_6_end: ;
}
// Function purpose: generated callback event_func_4880 processes event block(s) 4487_6. Actions/conditions:
//        4487_6: removes the selected object.
void Frames::event_func_4880()
{
    // event 4487_6 : removes the selected object
    {
        if (!(group_extra_npcs_warden_1)) goto event_4487_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4487_6_end;
        npcspawn_384_instances.clear_selection();
        if (!check_overlap(serviceNpc_instances, npcspawn_384_instances)) goto event_4487_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_warden_594))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4487_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4487_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4487_6_end: ;
}
// Function purpose: generated callback event_func_4881 processes event block(s) 4488_6. Actions/conditions:
//        4488_6: changes a stored game value.
void Frames::event_func_4881()
{
    VITA_LEGACY_EVENT();
    // event 4488_6 : changes a stored game value
    {
        if (!(group_extra_npcs_warden_1)) goto event_4488_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_warden_594))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4488_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_4488_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4488_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(2, 1);
        }
    }
    event_4488_6_end: ;
}
// Function purpose: generated callback event_func_4882 processes event block(s) 4489_6. Actions/conditions:
//        4489_6: sets the selected object's numeric value to 200+randrange_event(150); activates the Warden event
//        group; sets SpeakCol to 0; plus 5 more actions.
void Frames::event_func_4882()
{
    // event 4489_6 : sets the selected object's numeric value to 200+randrange_event(150); activates the Warden event group; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_extra_npcs_warden_1)) goto event_4489_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_warden_594))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4489_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_4489_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_4489_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_4489_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4489_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 200+randrange_event(150));
        }
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_warden_594);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(serviceNpc_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        {
            loop_warden_speak_running = true;
            int times = int(1);
            loop_warden_speak_index = 0;
            while (loop_warden_speak_index < times) {
                loop_warden_speak_6();
                if (!loop_warden_speak_running) break;
                loop_warden_speak_index++;
            }
        }
    }
    event_4489_6_end: ;
}
// Function purpose: generated callback event_func_4883 processes event block(s) 4490_6. Actions/conditions:
//        4490_6: sets the selected object's numeric value to 200+randrange_event(150); activates the DTAF_Villain
//        event group; sets SpeakCol to 0; plus 5 more actions.
void Frames::event_func_4883()
{
    // event 4490_6 : sets the selected object's numeric value to 200+randrange_event(150); activates the DTAF_Villain event group; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_extra_npcs_warden_1)) goto event_4490_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_warden_594))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4490_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_4490_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_4490_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4490_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 200+randrange_event(150));
        }
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_dtaf_villain_2310);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(serviceNpc_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        {
            loop_warden_speak_running = true;
            int times = int(1);
            loop_warden_speak_index = 0;
            while (loop_warden_speak_index < times) {
                loop_warden_speak_6();
                if (!loop_warden_speak_running) break;
                loop_warden_speak_index++;
            }
        }
    }
    event_4490_6_end: ;
}
// Function purpose: generated callback event_func_4884 processes event block(s) 4491_6. Actions/conditions:
//        4491_6: sets the selected object's numeric value to 200+randrange_event(150); activates the SS_Santa event
//        group; sets SpeakCol to 0; plus 5 more actions.
void Frames::event_func_4884()
{
    // event 4491_6 : sets the selected object's numeric value to 200+randrange_event(150); activates the SS_Santa event group; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_extra_npcs_warden_1)) goto event_4491_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_warden_594))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4491_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_4491_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_4491_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4491_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 200+randrange_event(150));
        }
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_ss_santa_2311);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(serviceNpc_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        {
            loop_warden_speak_running = true;
            int times = int(1);
            loop_warden_speak_index = 0;
            while (loop_warden_speak_index < times) {
                loop_warden_speak_6();
                if (!loop_warden_speak_running) break;
                loop_warden_speak_index++;
            }
        }
    }
    event_4491_6_end: ;
}
// Function purpose: generated callback event_func_4885 processes event block(s) 4492_6. Actions/conditions:
//        4492_6: sets the selected object's numeric value to ((Active*)get_instance(npcspawn_384_instances,
//        it.current_index, default_active_instance))->get_x(); sets the selected object's numeric value to
//        ((Active*)get_instance(npcspawn_384_instances, it.current_index, default_active_instance))->get_y(); sets
//        the selected object's numeric value to 2.
void Frames::event_func_4885()
{
    // event 4492_6 : sets the selected object's numeric value to ((Active*)get_instance(npcspawn_384_instances, it.current_index, default_active_instance))->get_x(); sets the selected object's numeric value to ((Active*)get_instance(npcspawn_384_instances, it.current_index, default_active_instance))->get_y(); sets the selected object's numeric value to 2
    {
        if (!(group_extra_npcs_medic_1)) goto event_4492_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (22))) goto event_4492_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_medstaff_1892))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) != (2))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4492_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4492_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_instance(npcspawn_384_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_instance(npcspawn_384_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->alterables->values.set(1, 2);
        }
    }
    event_4492_6_end: ;
}
// Function purpose: generated callback event_func_4886 processes event block(s) 4493_6. Actions/conditions:
//        4493_6: removes the selected object.
void Frames::event_func_4886()
{
    // event 4493_6 : removes the selected object
    {
        if (!(group_extra_npcs_medic_1)) goto event_4493_6_end;
        serviceNpc_instances.clear_selection();
        npcspawn_384_instances.clear_selection();
        if (!check_overlap(serviceNpc_instances, npcspawn_384_instances)) goto event_4493_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_medstaff_1892))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4493_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4493_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4493_6_end: ;
}
// Function purpose: generated callback event_func_4887 processes event block(s) 4494_6. Actions/conditions:
//        4494_6: changes a stored game value.
void Frames::event_func_4887()
{
    VITA_LEGACY_EVENT();
    // event 4494_6 : changes a stored game value
    {
        if (!(group_extra_npcs_medic_1)) goto event_4494_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_medstaff_1892))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4494_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_4494_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4494_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(2, 1);
        }
    }
    event_4494_6_end: ;
}
// Function purpose: generated callback event_func_4888 processes event block(s) 4495_6. Actions/conditions:
//        4495_6: sets the selected object's numeric value to 250+randrange_event(500); activates the MedStaff event
//        group; sets SpeakCol to 0; plus 5 more actions.
void Frames::event_func_4888()
{
    // event 4495_6 : sets the selected object's numeric value to 250+randrange_event(500); activates the MedStaff event group; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_extra_npcs_medic_1)) goto event_4495_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_medstaff_1892))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4495_6_end;
        medicspot_421_instances.clear_selection();
        if (!check_overlap(serviceNpc_instances, medicspot_421_instances)) goto event_4495_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_4495_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4495_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 250+randrange_event(500));
        }
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_medstaff_1892);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(serviceNpc_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        {
            loop_medstaff_speak_running = true;
            int times = int(1);
            loop_medstaff_speak_index = 0;
            while (loop_medstaff_speak_index < times) {
                loop_medstaff_speak_6();
                if (!loop_medstaff_speak_running) break;
                loop_medstaff_speak_index++;
            }
        }
    }
    event_4495_6_end: ;
}
// Function purpose: generated callback event_func_4889 processes event block(s) 4496_6. Actions/conditions:
//        4496_6: sets the object's animation to 2.
void Frames::event_func_4889()
{
    // event 4496_6 : sets the object's animation to 2
    {
        if (!(group_extra_npcs_medic_1)) goto event_4496_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_medstaff_1892))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(2)) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4496_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
        }
    }
    event_4496_6_end: ;
}
// Function purpose: generated callback event_func_4890 processes event block(s) 4497_6. Actions/conditions:
//        4497_6: sets the selected object's direction to pick_random(4, 0, 8, 16, 24).
void Frames::event_func_4890()
{
    // event 4497_6 : sets the selected object's direction to pick_random(4, 0, 8, 16, 24)
    {
        if (!(group_extra_npcs_medic_1)) goto event_4497_6_end;
        every_4497_6 += manager.dt;
        if (every_4497_6 < 5.0) goto event_4497_6_end;
        every_4497_6 -= 5.0;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_medstaff_1892))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4497_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4497_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(pick_random(4, 0, 8, 16, 24));
        }
    }
    event_4497_6_end: ;
}
// Function purpose: generated callback event_func_4891 processes event block(s) 4498_6. Actions/conditions:
//        4498_6: sets the selected object's numeric value to ((Active*)get_instance(npcspawn_384_instances,
//        it.current_index, default_active_instance))->get_x(); sets the selected object's numeric value to
//        ((Active*)get_instance(npcspawn_384_instances, it.current_index, default_active_instance))->get_y(); sets
//        the selected object's numeric value to 2.
void Frames::event_func_4891()
{
    // event 4498_6 : sets the selected object's numeric value to ((Active*)get_instance(npcspawn_384_instances, it.current_index, default_active_instance))->get_x(); sets the selected object's numeric value to ((Active*)get_instance(npcspawn_384_instances, it.current_index, default_active_instance))->get_y(); sets the selected object's numeric value to 2
    {
        if (!(group_extra_npcs_job_staff_1)) goto event_4498_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (19))) goto event_4498_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_jobstaff_1891))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) != (2))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4498_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4498_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_instance(npcspawn_384_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_instance(npcspawn_384_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->alterables->values.set(1, 2);
        }
    }
    event_4498_6_end: ;
}
// Function purpose: generated callback event_func_4892 processes event block(s) 4499_6. Actions/conditions:
//        4499_6: removes the selected object.
void Frames::event_func_4892()
{
    // event 4499_6 : removes the selected object
    {
        if (!(group_extra_npcs_job_staff_1)) goto event_4499_6_end;
        serviceNpc_instances.clear_selection();
        npcspawn_384_instances.clear_selection();
        if (!check_overlap(serviceNpc_instances, npcspawn_384_instances)) goto event_4499_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_jobstaff_1891))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4499_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4499_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4499_6_end: ;
}
// Function purpose: generated callback event_func_4893 processes event block(s) 4500_6. Actions/conditions:
//        4500_6: changes a stored game value.
void Frames::event_func_4893()
{
    VITA_LEGACY_EVENT();
    // event 4500_6 : changes a stored game value
    {
        if (!(group_extra_npcs_job_staff_1)) goto event_4500_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_jobstaff_1891))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4500_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_4500_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4500_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(2, 1);
        }
    }
    event_4500_6_end: ;
}
// Function purpose: generated callback event_func_4894 processes event block(s) 4501_6. Actions/conditions:
//        4501_6: sets the selected object's numeric value to 250+randrange_event(500); activates the JobStaff event
//        group; sets SpeakCol to 0; plus 5 more actions.
void Frames::event_func_4894()
{
    // event 4501_6 : sets the selected object's numeric value to 250+randrange_event(500); activates the JobStaff event group; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_extra_npcs_job_staff_1)) goto event_4501_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_jobstaff_1891))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4501_6_end;
        staffjoboffice_385_instances.clear_selection();
        if (!check_overlap(serviceNpc_instances, staffjoboffice_385_instances)) goto event_4501_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_4501_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4501_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 250+randrange_event(500));
        }
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_jobstaff_1891);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(serviceNpc_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        {
            loop_jobstaff_speak_running = true;
            int times = int(1);
            loop_jobstaff_speak_index = 0;
            while (loop_jobstaff_speak_index < times) {
                loop_jobstaff_speak_6();
                if (!loop_jobstaff_speak_running) break;
                loop_jobstaff_speak_index++;
            }
        }
    }
    event_4501_6_end: ;
}
// Function purpose: generated callback event_func_4895 processes event block(s) 4502_6. Actions/conditions:
//        4502_6: sets the object's animation to 1.
void Frames::event_func_4895()
{
    // event 4502_6 : sets the object's animation to 1
    {
        if (!(group_extra_npcs_job_staff_1)) goto event_4502_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_jobstaff_1891))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(1)) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4502_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
    }
    event_4502_6_end: ;
}
// Function purpose: generated callback event_func_4896 processes event block(s) 4503_6. Actions/conditions:
//        4503_6: sets the selected object's direction to pick_random(4, 0, 8, 16, 24).
void Frames::event_func_4896()
{
    // event 4503_6 : sets the selected object's direction to pick_random(4, 0, 8, 16, 24)
    {
        if (!(group_extra_npcs_job_staff_1)) goto event_4503_6_end;
        every_4503_6 += manager.dt;
        if (every_4503_6 < 5.0) goto event_4503_6_end;
        every_4503_6 -= 5.0;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_jobstaff_1891))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4503_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4503_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(pick_random(4, 0, 8, 16, 24));
        }
    }
    event_4503_6_end: ;
}
// Function purpose: generated callback event_func_4897 processes event block(s) 4504_6. Group(s): Extra NPCs.
//        Actions/conditions: 4504_6: increments VisitorCount by 1.
void Frames::event_func_4897()
{
    // event 4504_6 : increments VisitorCount by 1
    {
        // group: Extra NPCs
        playerBase_instances.clear_selection();
        visitationinmate_382_instances.clear_selection();
        if (!check_overlap(playerBase_instances, visitationinmate_382_instances)) goto event_4504_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(958, str_visitorcount_2306)) == (0))) goto event_4504_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(958, str_visitorcount_2306, 1);
        {
            loop_vischaircheck_running = true;
            int times = int(1);
            loop_vischaircheck_index = 0;
            while (loop_vischaircheck_index < times) {
                loop_vischaircheck_6();
                if (!loop_vischaircheck_running) break;
                loop_vischaircheck_index++;
            }
        }
        if (!group_extra_npcs_visitors_1) {
            group_extra_npcs_visitors_1 = true;
        }
    }
    event_4504_6_end: ;
}
// Function purpose: generated callback event_func_4898 processes event block(s) 4512_6. Actions/conditions:
//        4512_6: sets the selected object's horizontal position to
//        ((Active*)get_single(visitationvisitor_381_instances, it.current_index,
//        default_active_instance))->get_x()+8; sets the selected object's vertical position to
//        ((Active*)get_single(visitationvisitor_381_instances, it.current_index,
//        default_active_instance))->get_y()+8; sets the selected object's direction to get_direction_int(selected
//        object->x, selected object->y, playerBase->x + 0, playerBase->y + 0); plus 1 more actions.
void Frames::event_func_4898()
{
    // event 4512_6 : sets the selected object's horizontal position to ((Active*)get_single(visitationvisitor_381_instances, it.current_index, default_active_instance))->get_x()+8; sets the selected object's vertical position to ((Active*)get_single(visitationvisitor_381_instances, it.current_index, default_active_instance))->get_y()+8; sets the selected object's direction to get_direction_int(selected object->x, selected object->y, playerBase->x + 0, playerBase->y + 0); plus 1 more actions
    {
        if (!(group_extra_npcs_visitors_1)) goto event_4512_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_visitor_593))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4512_6_end;
        visitationvisitor_381_instances.clear_selection();
        if (!check_overlap(serviceNpc_instances, visitationvisitor_381_instances)) goto event_4512_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4512_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4512_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(visitationvisitor_381_instances, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->set_y(((Active*)get_single(visitationvisitor_381_instances, it.current_index, default_active_instance))->get_y()+8);
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(playerBase_instances))->x + 0, ((Active*)get_instance(playerBase_instances))->y + 0));
            ((Active*)*it)->alterables->values.set(1, 2);
        }
    }
    event_4512_6_end: ;
}
// Function purpose: generated callback event_func_4899 processes event block(s) 4513_6. Actions/conditions:
//        4513_6: changes a stored game value.
void Frames::event_func_4899()
{
    VITA_LEGACY_EVENT();
    // event 4513_6 : changes a stored game value
    {
        if (!(group_extra_npcs_visitors_1)) goto event_4513_6_end;
        serviceNpc_instances.clear_selection();
        visitationvisitor_381_instances.clear_selection();
        if (!check_overlap(serviceNpc_instances, visitationvisitor_381_instances)) goto event_4513_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_visitor_593))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4513_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4513_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(2, 1);
        }
    }
    event_4513_6_end: ;
}
// Function purpose: generated callback event_func_4900 processes event block(s) 4514_6. Actions/conditions:
//        4514_6: sets the selected object's numeric value to 200+randrange_event(150); changes a stored game value;
//        activates the Vis_Greet event group; plus 6 more actions.
void Frames::event_func_4900()
{
    // event 4514_6 : sets the selected object's numeric value to 200+randrange_event(150); changes a stored game value; activates the Vis_Greet event group; plus 6 more actions
    {
        if (!(group_extra_npcs_visitors_1)) goto event_4514_6_end;
        serviceNpc_instances.clear_selection();
        visitationvisitor_381_instances.clear_selection();
        if (!check_overlap(serviceNpc_instances, visitationvisitor_381_instances)) goto event_4514_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_visitor_593))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4514_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_4514_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4514_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_4514_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 200+randrange_event(150));
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_vis_greet_2312);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(serviceNpc_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((Active*)get_instance(playerBase_instances))->alterables->strings.get(0)+str__2313+((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        {
            loop_vis_speak_running = true;
            int times = int(1);
            loop_vis_speak_index = 0;
            while (loop_vis_speak_index < times) {
                loop_vis_speak_6();
                if (!loop_vis_speak_running) break;
                loop_vis_speak_index++;
            }
        }
    }
    event_4514_6_end: ;
}
// Function purpose: generated callback event_func_4901 processes event block(s) 4515_6. Actions/conditions:
//        4515_6: sets the selected object's numeric value to 200+randrange_event(150); changes a stored game value;
//        activates the SS_Visitor_Greet event group; plus 6 more actions.
void Frames::event_func_4901()
{
    // event 4515_6 : sets the selected object's numeric value to 200+randrange_event(150); changes a stored game value; activates the SS_Visitor_Greet event group; plus 6 more actions
    {
        if (!(group_extra_npcs_visitors_1)) goto event_4515_6_end;
        serviceNpc_instances.clear_selection();
        visitationvisitor_381_instances.clear_selection();
        if (!check_overlap(serviceNpc_instances, visitationvisitor_381_instances)) goto event_4515_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_visitor_593))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4515_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_4515_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4515_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_4515_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 200+randrange_event(150));
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_ss_visitor_greet_2314);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(serviceNpc_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((Active*)get_instance(playerBase_instances))->alterables->strings.get(0)+str__2313+((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        {
            loop_vis_speak_running = true;
            int times = int(1);
            loop_vis_speak_index = 0;
            while (loop_vis_speak_index < times) {
                loop_vis_speak_6();
                if (!loop_vis_speak_running) break;
                loop_vis_speak_index++;
            }
        }
    }
    event_4515_6_end: ;
}
// Function purpose: generated callback event_func_4902 processes event block(s) 4516_6. Actions/conditions:
//        4516_6: sets the selected object's numeric value to 200+randrange_event(150); changes a stored game value;
//        activates the Vis_Banter event group; plus 6 more actions.
void Frames::event_func_4902()
{
    // event 4516_6 : sets the selected object's numeric value to 200+randrange_event(150); changes a stored game value; activates the Vis_Banter event group; plus 6 more actions
    {
        if (!(group_extra_npcs_visitors_1)) goto event_4516_6_end;
        serviceNpc_instances.clear_selection();
        visitationvisitor_381_instances.clear_selection();
        if (!check_overlap(serviceNpc_instances, visitationvisitor_381_instances)) goto event_4516_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_visitor_593))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4516_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_4516_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4516_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_4516_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 200+randrange_event(150));
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_vis_banter_2315);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(serviceNpc_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        {
            loop_vis_speak_running = true;
            int times = int(1);
            loop_vis_speak_index = 0;
            while (loop_vis_speak_index < times) {
                loop_vis_speak_6();
                if (!loop_vis_speak_running) break;
                loop_vis_speak_index++;
            }
        }
    }
    event_4516_6_end: ;
}
// Function purpose: generated callback event_func_4903 processes event block(s) 4517_6. Actions/conditions:
//        4517_6: sets the selected object's numeric value to 200+randrange_event(150); changes a stored game value;
//        activates the SS_Visitor_Banter event group; plus 6 more actions.
void Frames::event_func_4903()
{
    // event 4517_6 : sets the selected object's numeric value to 200+randrange_event(150); changes a stored game value; activates the SS_Visitor_Banter event group; plus 6 more actions
    {
        if (!(group_extra_npcs_visitors_1)) goto event_4517_6_end;
        serviceNpc_instances.clear_selection();
        visitationvisitor_381_instances.clear_selection();
        if (!check_overlap(serviceNpc_instances, visitationvisitor_381_instances)) goto event_4517_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_visitor_593))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4517_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_4517_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4517_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_4517_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 200+randrange_event(150));
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_ss_visitor_banter_2316);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(serviceNpc_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        {
            loop_vis_speak_running = true;
            int times = int(1);
            loop_vis_speak_index = 0;
            while (loop_vis_speak_index < times) {
                loop_vis_speak_6();
                if (!loop_vis_speak_running) break;
                loop_vis_speak_index++;
            }
        }
    }
    event_4517_6_end: ;
}
// Function purpose: generated callback event_func_4904 processes event block(s) 4518_6. Actions/conditions:
//        4518_6: sets the selected object's numeric value to 200+randrange_event(150); changes a stored game value;
//        activates the Vis_Banter event group; plus 6 more actions.
void Frames::event_func_4904()
{
    // event 4518_6 : sets the selected object's numeric value to 200+randrange_event(150); changes a stored game value; activates the Vis_Banter event group; plus 6 more actions
    {
        if (!(group_extra_npcs_visitors_1)) goto event_4518_6_end;
        serviceNpc_instances.clear_selection();
        visitationvisitor_381_instances.clear_selection();
        if (!check_overlap(serviceNpc_instances, visitationvisitor_381_instances)) goto event_4518_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_visitor_593))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4518_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_4518_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4518_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_4518_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 200+randrange_event(150));
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_vis_banter_2315);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(serviceNpc_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_37_2183)+str__189+lowercase_string(((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1))));
        {
            loop_vis_speak_running = true;
            int times = int(1);
            loop_vis_speak_index = 0;
            while (loop_vis_speak_index < times) {
                loop_vis_speak_6();
                if (!loop_vis_speak_running) break;
                loop_vis_speak_index++;
            }
        }
    }
    event_4518_6_end: ;
}
// Function purpose: generated callback event_func_4905 processes event block(s) 4519_6. Actions/conditions:
//        4519_6: sets the selected object's numeric value to 200+randrange_event(150); changes a stored game value;
//        activates the SS_Visitor_Banter event group; plus 6 more actions.
void Frames::event_func_4905()
{
    // event 4519_6 : sets the selected object's numeric value to 200+randrange_event(150); changes a stored game value; activates the SS_Visitor_Banter event group; plus 6 more actions
    {
        if (!(group_extra_npcs_visitors_1)) goto event_4519_6_end;
        serviceNpc_instances.clear_selection();
        visitationvisitor_381_instances.clear_selection();
        if (!check_overlap(serviceNpc_instances, visitationvisitor_381_instances)) goto event_4519_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_visitor_593))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4519_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_4519_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4519_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_4519_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 200+randrange_event(150));
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_ss_visitor_banter_2316);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(serviceNpc_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_37_2183)+str__189+lowercase_string(((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1))));
        {
            loop_vis_speak_running = true;
            int times = int(1);
            loop_vis_speak_index = 0;
            while (loop_vis_speak_index < times) {
                loop_vis_speak_6();
                if (!loop_vis_speak_running) break;
                loop_vis_speak_index++;
            }
        }
    }
    event_4519_6_end: ;
}
// Function purpose: generated callback event_func_4906 processes event block(s) 4520_6. Actions/conditions:
//        4520_6: sets the selected object's numeric value to 200+randrange_event(150); changes a stored game value;
//        activates the Vis_Banter event group; plus 6 more actions.
void Frames::event_func_4906()
{
    // event 4520_6 : sets the selected object's numeric value to 200+randrange_event(150); changes a stored game value; activates the Vis_Banter event group; plus 6 more actions
    {
        if (!(group_extra_npcs_visitors_1)) goto event_4520_6_end;
        serviceNpc_instances.clear_selection();
        visitationvisitor_381_instances.clear_selection();
        if (!check_overlap(serviceNpc_instances, visitationvisitor_381_instances)) goto event_4520_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_visitor_593))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4520_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_4520_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4520_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_4520_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 200+randrange_event(150));
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_vis_banter_2315);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(serviceNpc_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_38_1205)+str__189+lowercase_string(((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1))));
        {
            loop_vis_speak_running = true;
            int times = int(1);
            loop_vis_speak_index = 0;
            while (loop_vis_speak_index < times) {
                loop_vis_speak_6();
                if (!loop_vis_speak_running) break;
                loop_vis_speak_index++;
            }
        }
    }
    event_4520_6_end: ;
}
// Function purpose: generated callback event_func_4907 processes event block(s) 4521_6. Actions/conditions:
//        4521_6: sets the selected object's numeric value to 200+randrange_event(150); changes a stored game value;
//        activates the SS_Visitor_Banter event group; plus 6 more actions.
void Frames::event_func_4907()
{
    // event 4521_6 : sets the selected object's numeric value to 200+randrange_event(150); changes a stored game value; activates the SS_Visitor_Banter event group; plus 6 more actions
    {
        if (!(group_extra_npcs_visitors_1)) goto event_4521_6_end;
        serviceNpc_instances.clear_selection();
        visitationvisitor_381_instances.clear_selection();
        if (!check_overlap(serviceNpc_instances, visitationvisitor_381_instances)) goto event_4521_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_visitor_593))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4521_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_4521_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4521_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_4521_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 200+randrange_event(150));
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_ss_visitor_banter_2316);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(serviceNpc_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_38_1205)+str__189+lowercase_string(((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1))));
        {
            loop_vis_speak_running = true;
            int times = int(1);
            loop_vis_speak_index = 0;
            while (loop_vis_speak_index < times) {
                loop_vis_speak_6();
                if (!loop_vis_speak_running) break;
                loop_vis_speak_index++;
            }
        }
    }
    event_4521_6_end: ;
}
// Function purpose: generated callback event_func_4908 processes event block(s) 4522_6. Actions/conditions:
//        4522_6: sets the selected object's numeric value to 200+randrange_event(150); changes a stored game value;
//        activates the Vis_Leave event group; plus 6 more actions.
void Frames::event_func_4908()
{
    // event 4522_6 : sets the selected object's numeric value to 200+randrange_event(150); changes a stored game value; activates the Vis_Leave event group; plus 6 more actions
    {
        if (!(group_extra_npcs_visitors_1)) goto event_4522_6_end;
        serviceNpc_instances.clear_selection();
        visitationvisitor_381_instances.clear_selection();
        if (!check_overlap(serviceNpc_instances, visitationvisitor_381_instances)) goto event_4522_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_visitor_593))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4522_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_4522_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4522_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_4522_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 200+randrange_event(150));
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_vis_leave_2317);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(serviceNpc_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        {
            loop_vis_speak_running = true;
            int times = int(1);
            loop_vis_speak_index = 0;
            while (loop_vis_speak_index < times) {
                loop_vis_speak_6();
                if (!loop_vis_speak_running) break;
                loop_vis_speak_index++;
            }
        }
        {
            loop_stat_visitors_running = true;
            int times = int(1);
            loop_stat_visitors_index = 0;
            while (loop_stat_visitors_index < times) {
                loop_stat_visitors_6();
                if (!loop_stat_visitors_running) break;
                loop_stat_visitors_index++;
            }
        }
    }
    event_4522_6_end: ;
}
// Function purpose: generated callback event_func_4909 processes event block(s) 4523_6. Actions/conditions:
//        4523_6: sets the selected object's numeric value to 200+randrange_event(150); changes a stored game value;
//        activates the SS_Visitor_Leave event group; plus 6 more actions.
void Frames::event_func_4909()
{
    // event 4523_6 : sets the selected object's numeric value to 200+randrange_event(150); changes a stored game value; activates the SS_Visitor_Leave event group; plus 6 more actions
    {
        if (!(group_extra_npcs_visitors_1)) goto event_4523_6_end;
        serviceNpc_instances.clear_selection();
        visitationvisitor_381_instances.clear_selection();
        if (!check_overlap(serviceNpc_instances, visitationvisitor_381_instances)) goto event_4523_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_visitor_593))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4523_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_4523_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4523_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_4523_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 200+randrange_event(150));
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_ss_visitor_leave_2318);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(serviceNpc_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        {
            loop_vis_speak_running = true;
            int times = int(1);
            loop_vis_speak_index = 0;
            while (loop_vis_speak_index < times) {
                loop_vis_speak_6();
                if (!loop_vis_speak_running) break;
                loop_vis_speak_index++;
            }
        }
        {
            loop_stat_visitors_running = true;
            int times = int(1);
            loop_stat_visitors_index = 0;
            while (loop_stat_visitors_index < times) {
                loop_stat_visitors_6();
                if (!loop_stat_visitors_running) break;
                loop_stat_visitors_index++;
            }
        }
    }
    event_4523_6_end: ;
}
// Function purpose: generated callback event_func_4910 processes event block(s) 4524_6. Actions/conditions:
//        4524_6: sets the selected object's numeric value to ((Active*)get_instance(npcspawn_384_instances,
//        it.current_index, default_active_instance))->get_x()+8; sets the selected object's numeric value to
//        ((Active*)get_instance(npcspawn_384_instances, it.current_index, default_active_instance))->get_y()+8.
void Frames::event_func_4910()
{
    // event 4524_6 : sets the selected object's numeric value to ((Active*)get_instance(npcspawn_384_instances, it.current_index, default_active_instance))->get_x()+8; sets the selected object's numeric value to ((Active*)get_instance(npcspawn_384_instances, it.current_index, default_active_instance))->get_y()+8
    {
        if (!(group_extra_npcs_visitors_1)) goto event_4524_6_end;
        serviceNpc_instances.clear_selection();
        visitationvisitor_381_instances.clear_selection();
        if (!check_overlap(serviceNpc_instances, visitationvisitor_381_instances)) goto event_4524_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_visitor_593))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4524_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4524_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_instance(npcspawn_384_instances, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_instance(npcspawn_384_instances, it.current_index, default_active_instance))->get_y()+8);
        }
    }
    event_4524_6_end: ;
}
// Function purpose: generated callback event_func_4911 processes event block(s) 4526_6. Actions/conditions:
//        4526_6: sets the object's animation to selected object->alterables->values.get(4.
void Frames::event_func_4911()
{
    // event 4526_6 : sets the object's animation to selected object->alterables->values.get(4
    {
        if (!(group_extra_npcs_visitors_1)) goto event_4526_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_visitor_593))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(((Active*)*it)->alterables->values.get(4))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4526_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(((Active*)*it)->alterables->values.get(4));
        }
    }
    event_4526_6_end: ;
}
// Function purpose: generated callback event_func_4912 processes event block(s) 4527_6. Group(s): Extra NPCs.
//        Actions/conditions: 4527_6: sets the selected object's numeric value to
//        ((Active*)get_instance(npcspawn_384_instances, it.current_index, default_active_instance))->get_x()+8; sets
//        the selected object's numeric value to ((Active*)get_instance(npcspawn_384_instances, it.current_index,
//        default_active_instance))->get_y()+8; sets the selected object's numeric value to 7.
void Frames::event_func_4912()
{
    // event 4527_6 : sets the selected object's numeric value to ((Active*)get_instance(npcspawn_384_instances, it.current_index, default_active_instance))->get_x()+8; sets the selected object's numeric value to ((Active*)get_instance(npcspawn_384_instances, it.current_index, default_active_instance))->get_y()+8; sets the selected object's numeric value to 7
    {
        // group: Extra NPCs
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(958, str_visitorcount_2306)) > (0))) goto event_4527_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, visitationinmate_382_instances)) goto event_4527_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_visitor_593))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (7))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4527_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_instance(npcspawn_384_instances, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_instance(npcspawn_384_instances, it.current_index, default_active_instance))->get_y()+8);
            ((Active*)*it)->alterables->values.set(1, 7);
        }
    }
    event_4527_6_end: ;
}
// Function purpose: generated callback event_func_4913 processes event block(s) 4528_6. Group(s): Extra NPCs.
//        Actions/conditions: 4528_6: sets the selected object's visibility to false; removes the selected object;
//        sets VisitorCount to 0.
void Frames::event_func_4913()
{
    // event 4528_6 : sets the selected object's visibility to false; removes the selected object; sets VisitorCount to 0
    {
        // group: Extra NPCs
        serviceNpc_instances.clear_selection();
        npcspawn_384_instances.clear_selection();
        if (!check_overlap(serviceNpc_instances, npcspawn_384_instances)) goto event_4528_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_visitor_593))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (2))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4528_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_4528_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4528_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->destroy();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(958, str_visitorcount_2306, 0);
    }
    event_4528_6_end: ;
}
// Function purpose: generated callback event_func_4914 processes event block(s) 4529_6. Group(s): Extra NPCs.
//        Actions/conditions: 4529_6: sets the selected object's visibility to false; removes the selected object;
//        sets VisitorCount to 0.
void Frames::event_func_4914()
{
    // event 4529_6 : sets the selected object's visibility to false; removes the selected object; sets VisitorCount to 0
    {
        // group: Extra NPCs
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (564))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_visitor_593))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (2))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4529_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_4529_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4529_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->destroy();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(958, str_visitorcount_2306, 0);
        {
            loop_ss_vis_achieve_running = true;
            int times = int(1);
            loop_ss_vis_achieve_index = 0;
            while (loop_ss_vis_achieve_index < times) {
                loop_ss_vis_achieve_6();
                if (!loop_ss_vis_achieve_running) break;
                loop_ss_vis_achieve_index++;
            }
        }
    }
    event_4529_6_end: ;
}
// Function purpose: generated callback event_func_4915 processes event block(s) 4531_6. Group(s): Extra NPCs.
//        Actions/conditions: 4531_6: checks game state VisitorCount; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_4915()
{
    // event 4531_6 : checks game state VisitorCount; this handler gates a game event without a direct value/object action
    {
        // group: Extra NPCs
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(958, str_visitorcount_2306)) == (0))) goto event_4531_6_end;
            group_extra_npcs_visitors_1 = false;
    
    }
    event_4531_6_end: ;
}
// Function purpose: generated callback event_func_4916 processes event block(s) 4533_6. Actions/conditions:
//        4533_6: sets GuardsDownCount to 0.
void Frames::event_func_4916()
{
    // event 4533_6 : sets GuardsDownCount to 0
    {
        every_4533_6 += manager.dt;
        if (every_4533_6 < 3.0) goto event_4533_6_end;
        every_4533_6 -= 3.0;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4533_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(226, str_guardsdowncount_836, 0);
        {
            loop_count_downed_guards_running = true;
            int times = int(guardBase_instances.size());
            loop_count_downed_guards_index = 0;
            while (loop_count_downed_guards_index < times) {
                loop_count_downed_guards_6();
                if (!loop_count_downed_guards_running) break;
                loop_count_downed_guards_index++;
            }
        }
        {
            loop_count_downed_guards_result_running = true;
            int times = int(1);
            loop_count_downed_guards_result_index = 0;
            while (loop_count_downed_guards_result_index < times) {
                loop_count_downed_guards_result_6();
                if (!loop_count_downed_guards_result_running) break;
                loop_count_downed_guards_result_index++;
            }
        }
    }
    event_4533_6_end: ;
}
// Function purpose: generated callback event_func_4917 processes event block(s) 4539_6. Group(s): Weather.
//        Actions/conditions: 4539_6: checks the event-specific game state condition is met; game state stalagflucht;
//        skips if the event-specific game state condition is met; this handler gates a.
void Frames::event_func_4917()
{
    // event 4539_6 : checks the event-specific game state condition is met; game state stalagflucht; skips if the event-specific game state condition is met; this handler gates a
    {
        // group: Weather
        if (!((screenFade_instances.size()) == (0))) goto event_4539_6_end;
        if (!((global_strings->get(0)) == (str_stalagflucht_144))) goto event_4539_6_end;
        if (once_condition_4539_6) goto event_4539_6_end;
        once_condition_4539_6 = true;
        {
            loop_create_snow_running = true;
            int times = int(10);
            loop_create_snow_index = 0;
            while (loop_create_snow_index < times) {
                loop_create_snow_6();
                if (!loop_create_snow_running) break;
                loop_create_snow_index++;
            }
        }
    }
    event_4539_6_end: ;
}
// Function purpose: generated callback event_func_4918 processes event block(s) 4540_6. Group(s): Weather.
//        Actions/conditions: 4540_6: checks the event-specific game state condition is met; game state SSS; skips if
//        the event-specific game state condition is met; this handler gates a game eve.
void Frames::event_func_4918()
{
    // event 4540_6 : checks the event-specific game state condition is met; game state SSS; skips if the event-specific game state condition is met; this handler gates a game eve
    {
        // group: Weather
        if (!((screenFade_instances.size()) == (0))) goto event_4540_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_4540_6_end;
        if (once_condition_4540_6) goto event_4540_6_end;
        once_condition_4540_6 = true;
        {
            loop_create_snow_running = true;
            int times = int(20);
            loop_create_snow_index = 0;
            while (loop_create_snow_index < times) {
                loop_create_snow_6();
                if (!loop_create_snow_running) break;
                loop_create_snow_index++;
            }
        }
    }
    event_4540_6_end: ;
}
// Function purpose: generated callback event_func_4919 processes event block(s) 4541_6. Group(s): Weather.
//        Actions/conditions: 4541_6: checks the event-specific game state condition is met; game state CCL; skips if
//        the event-specific game state condition is met; this handler gates a game eve.
void Frames::event_func_4919()
{
    // event 4541_6 : checks the event-specific game state condition is met; game state CCL; skips if the event-specific game state condition is met; this handler gates a game eve
    {
        // group: Weather
        if (!((screenFade_instances.size()) == (0))) goto event_4541_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_4541_6_end;
        if (once_condition_4541_6) goto event_4541_6_end;
        once_condition_4541_6 = true;
        {
            loop_create_snow_running = true;
            int times = int(20);
            loop_create_snow_index = 0;
            while (loop_create_snow_index < times) {
                loop_create_snow_6();
                if (!loop_create_snow_running) break;
                loop_create_snow_index++;
            }
        }
    }
    event_4541_6_end: ;
}
// Function purpose: generated callback event_func_4920 processes event block(s) 4543_6. Group(s): Weather.
//        Actions/conditions: 4543_6: sets the selected object's vertical position to frame_top()-16; sets the
//        selected object's horizontal position to frame_left()+randrange_event(300); changes the selected object
//        transparency; plus 6 more actions.
void Frames::event_func_4920()
{
    // event 4543_6 : sets the selected object's vertical position to frame_top()-16; sets the selected object's horizontal position to frame_left()+randrange_event(300); changes the selected object transparency; plus 6 more actions
    {
        // group: Weather
        snow_413_instances.clear_selection();
        for (ObjectIterator it(snow_413_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (frame_top()-16))) { it.deselect(); continue; }
        }
        if (!snow_413_instances.has_selection()) goto event_4543_6_end;
        for (ObjectIterator it(snow_413_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(VITA_VIEW_TOP(((Active*)*it), frame_top())-16);
            ((Active*)*it)->set_x(VITA_VIEW_LEFT(((Active*)*it), frame_left())+randrange_event(300));
            ((Active*)*it)->blend_color.set_alpha_coefficient(randrange_event(100));
            ((Active*)*it)->get_movement()->set_speed(5+randrange_event(10));
            ((Active*)*it)->set_scale(0.5*randrange_event(3));
            ((Active*)*it)->move_back();
        }
    }
    event_4543_6_end: ;
}
// Function purpose: generated callback event_func_4921 processes event block(s) 4544_6. Group(s): Weather.
//        Actions/conditions: 4544_6: sets the selected object's vertical position to frame_top()-16; sets the
//        selected object's horizontal position to frame_left()+randrange_event(300); changes the selected object
//        transparency; plus 6 more actions.
void Frames::event_func_4921()
{
    // event 4544_6 : sets the selected object's vertical position to frame_top()-16; sets the selected object's horizontal position to frame_left()+randrange_event(300); changes the selected object transparency; plus 6 more actions
    {
        // group: Weather
        snow_413_instances.clear_selection();
        for (ObjectIterator it(snow_413_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (frame_bottom()+16))) { it.deselect(); continue; }
        }
        if (!snow_413_instances.has_selection()) goto event_4544_6_end;
        for (ObjectIterator it(snow_413_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(VITA_VIEW_TOP(((Active*)*it), frame_top())-16);
            ((Active*)*it)->set_x(VITA_VIEW_LEFT(((Active*)*it), frame_left())+randrange_event(300));
            ((Active*)*it)->blend_color.set_alpha_coefficient(randrange_event(100));
            ((Active*)*it)->get_movement()->set_speed(5+randrange_event(10));
            ((Active*)*it)->set_scale(0.5*randrange_event(3));
            ((Active*)*it)->move_back();
        }
    }
    event_4544_6_end: ;
}
// Function purpose: generated callback event_func_4922 processes event block(s) 4545_6. Group(s): Weather.
//        Actions/conditions: 4545_6: sets the selected object's vertical position to frame_top()-16; sets the
//        selected object's horizontal position to frame_left()+randrange_event(300); changes the selected object
//        transparency; plus 6 more actions.
void Frames::event_func_4922()
{
    // event 4545_6 : sets the selected object's vertical position to frame_top()-16; sets the selected object's horizontal position to frame_left()+randrange_event(300); changes the selected object transparency; plus 6 more actions
    {
        // group: Weather
        snow_413_instances.clear_selection();
        for (ObjectIterator it(snow_413_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (frame_left()-16))) { it.deselect(); continue; }
        }
        if (!snow_413_instances.has_selection()) goto event_4545_6_end;
        for (ObjectIterator it(snow_413_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(VITA_VIEW_TOP(((Active*)*it), frame_top())-16);
            ((Active*)*it)->set_x(VITA_VIEW_LEFT(((Active*)*it), frame_left())+randrange_event(300));
            ((Active*)*it)->blend_color.set_alpha_coefficient(randrange_event(100));
            ((Active*)*it)->get_movement()->set_speed(5+randrange_event(10));
            ((Active*)*it)->set_scale(0.5*randrange_event(3));
            ((Active*)*it)->move_back();
        }
    }
    event_4545_6_end: ;
}
// Function purpose: generated callback event_func_4923 processes event block(s) 4546_6. Group(s): Weather.
//        Actions/conditions: 4546_6: sets the selected object's vertical position to frame_top()-16; sets the
//        selected object's horizontal position to frame_left()+randrange_event(300); changes the selected object
//        transparency; plus 6 more actions.
void Frames::event_func_4923()
{
    // event 4546_6 : sets the selected object's vertical position to frame_top()-16; sets the selected object's horizontal position to frame_left()+randrange_event(300); changes the selected object transparency; plus 6 more actions
    {
        // group: Weather
        snow_413_instances.clear_selection();
        for (ObjectIterator it(snow_413_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (frame_right()+16))) { it.deselect(); continue; }
        }
        if (!snow_413_instances.has_selection()) goto event_4546_6_end;
        for (ObjectIterator it(snow_413_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(VITA_VIEW_TOP(((Active*)*it), frame_top())-16);
            ((Active*)*it)->set_x(VITA_VIEW_LEFT(((Active*)*it), frame_left())+randrange_event(300));
            ((Active*)*it)->blend_color.set_alpha_coefficient(randrange_event(100));
            ((Active*)*it)->get_movement()->set_speed(5+randrange_event(10));
            ((Active*)*it)->set_scale(0.5*randrange_event(3));
            ((Active*)*it)->move_back();
        }
    }
    event_4546_6_end: ;
}
// Function purpose: generated callback event_func_4924 processes event block(s) 4548_6. Group(s): Weather.
//        Actions/conditions: 4548_6: sets the object's animation to 6; sets the selected object's horizontal position
//        to frame_left()+randrange_event(300); sets the selected object's vertical position to frame_top()-16; plus 7
//        more actions.
void Frames::event_func_4924()
{
    // event 4548_6 : sets the object's animation to 6; sets the selected object's horizontal position to frame_left()+randrange_event(300); sets the selected object's vertical position to frame_top()-16; plus 7 more actions
    {
        // group: Weather
        snow_413_instances.clear_selection();
        for (ObjectIterator it(snow_413_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (frame_top()-16))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(6))) { it.deselect(); continue; }
        }
        if (!snow_413_instances.has_selection()) goto event_4548_6_end;
        for (ObjectIterator it(snow_413_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(6);
            ((Active*)*it)->set_x(VITA_VIEW_LEFT(((Active*)*it), frame_left())+randrange_event(300));
            ((Active*)*it)->set_y(VITA_VIEW_TOP(((Active*)*it), frame_top())-16);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->blend_color.set_alpha_coefficient(randrange_event(100));
            ((Active*)*it)->get_movement()->set_speed(50+randrange_event(50));
            ((Active*)*it)->move_back();
        }
    }
    event_4548_6_end: ;
}
// Function purpose: generated callback event_func_4925 processes event block(s) 4549_6. Group(s): Weather.
//        Actions/conditions: 4549_6: sets the object's animation to 6; sets the selected object's horizontal position
//        to frame_left()+randrange_event(300); sets the selected object's vertical position to frame_top()-16; plus 7
//        more actions.
void Frames::event_func_4925()
{
    // event 4549_6 : sets the object's animation to 6; sets the selected object's horizontal position to frame_left()+randrange_event(300); sets the selected object's vertical position to frame_top()-16; plus 7 more actions
    {
        // group: Weather
        snow_413_instances.clear_selection();
        for (ObjectIterator it(snow_413_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (frame_bottom()+16))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(6))) { it.deselect(); continue; }
        }
        if (!snow_413_instances.has_selection()) goto event_4549_6_end;
        for (ObjectIterator it(snow_413_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(6);
            ((Active*)*it)->set_x(VITA_VIEW_LEFT(((Active*)*it), frame_left())+randrange_event(300));
            ((Active*)*it)->set_y(VITA_VIEW_TOP(((Active*)*it), frame_top())-16);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->blend_color.set_alpha_coefficient(randrange_event(100));
            ((Active*)*it)->get_movement()->set_speed(50+randrange_event(50));
            ((Active*)*it)->move_back();
        }
    }
    event_4549_6_end: ;
}
// Function purpose: generated callback event_func_4926 processes event block(s) 4550_6. Group(s): Weather.
//        Actions/conditions: 4550_6: sets the object's animation to 6; sets the selected object's horizontal position
//        to frame_left()+randrange_event(300); sets the selected object's vertical position to frame_top()-16; plus 7
//        more actions.
void Frames::event_func_4926()
{
    // event 4550_6 : sets the object's animation to 6; sets the selected object's horizontal position to frame_left()+randrange_event(300); sets the selected object's vertical position to frame_top()-16; plus 7 more actions
    {
        // group: Weather
        snow_413_instances.clear_selection();
        for (ObjectIterator it(snow_413_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (frame_left()-16))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(6))) { it.deselect(); continue; }
        }
        if (!snow_413_instances.has_selection()) goto event_4550_6_end;
        for (ObjectIterator it(snow_413_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(6);
            ((Active*)*it)->set_x(VITA_VIEW_LEFT(((Active*)*it), frame_left())+randrange_event(300));
            ((Active*)*it)->set_y(VITA_VIEW_TOP(((Active*)*it), frame_top())-16);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->blend_color.set_alpha_coefficient(randrange_event(100));
            ((Active*)*it)->get_movement()->set_speed(50+randrange_event(50));
            ((Active*)*it)->move_back();
        }
    }
    event_4550_6_end: ;
}
// Function purpose: generated callback event_func_4927 processes event block(s) 4551_6. Group(s): Weather.
//        Actions/conditions: 4551_6: sets the object's animation to 6; sets the selected object's horizontal position
//        to frame_left()+randrange_event(300); sets the selected object's vertical position to frame_top()-16; plus 7
//        more actions.
void Frames::event_func_4927()
{
    // event 4551_6 : sets the object's animation to 6; sets the selected object's horizontal position to frame_left()+randrange_event(300); sets the selected object's vertical position to frame_top()-16; plus 7 more actions
    {
        // group: Weather
        snow_413_instances.clear_selection();
        for (ObjectIterator it(snow_413_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (frame_right()+16))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(6))) { it.deselect(); continue; }
        }
        if (!snow_413_instances.has_selection()) goto event_4551_6_end;
        for (ObjectIterator it(snow_413_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(6);
            ((Active*)*it)->set_x(VITA_VIEW_LEFT(((Active*)*it), frame_left())+randrange_event(300));
            ((Active*)*it)->set_y(VITA_VIEW_TOP(((Active*)*it), frame_top())-16);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->blend_color.set_alpha_coefficient(randrange_event(100));
            ((Active*)*it)->get_movement()->set_speed(50+randrange_event(50));
            ((Active*)*it)->move_back();
        }
    }
    event_4551_6_end: ;
}
// Function purpose: generated callback event_func_4928 processes event block(s) 4552_6. Group(s): Weather.
//        Actions/conditions: 4552_6: sets the selected object's visibility to false.
void Frames::event_func_4928()
{
    // event 4552_6 : sets the selected object's visibility to false
    {
        // group: Weather
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_4552_6_end;
        snow_413_instances.clear_selection();
        for (ObjectIterator it(snow_413_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!snow_413_instances.has_selection()) goto event_4552_6_end;
        for (ObjectIterator it(snow_413_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_4552_6_end: ;
}
// Function purpose: generated callback event_func_4929 processes event block(s) 4553_6. Group(s): Weather.
//        Actions/conditions: 4553_6: sets the selected object's visibility to true.
void Frames::event_func_4929()
{
    // event 4553_6 : sets the selected object's visibility to true
    {
        // group: Weather
        snow_413_instances.clear_selection();
        for (ObjectIterator it(snow_413_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!snow_413_instances.has_selection()) goto event_4553_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) != (1))) goto event_4553_6_end;
        for (ObjectIterator it(snow_413_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_4553_6_end: ;
}
// Function purpose: generated callback event_func_4930 processes event block(s) 4569_6. Group(s): Door key
//        degrades. Actions/conditions: 4569_6: sets DegradeKey to empty_string.
void Frames::event_func_4930()
{
    // event 4569_6 : sets DegradeKey to empty_string
    {
        // group: Door key degrades
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(701, str_degradekey_1851)) != (empty_string))) goto event_4569_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_8)) goto event_4569_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4569_6_end;
        {
            loop_key_degrade_running = true;
            int times = int(6);
            loop_key_degrade_index = 0;
            while (loop_key_degrade_index < times) {
                loop_key_degrade_6();
                if (!loop_key_degrade_running) break;
                loop_key_degrade_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(701, str_degradekey_1851, empty_string);
    }
    event_4569_6_end: ;
}
// Function purpose: generated callback event_func_4931 processes event block(s) 4587_6. Group(s): Item Swell.
//        Actions/conditions: 4587_6: sets the selected object's numeric value to selected object->x_scale; sets the
//        selected object's scale to selected object->x_scale*2; enables flag -5 (legacy object-specific state;
//        original label was not retained) on the selected object.
void Frames::event_func_4931()
{
    // event 4587_6 : sets the selected object's numeric value to selected object->x_scale; sets the selected object's scale to selected object->x_scale*2; enables flag -5 (legacy object-specific state; original label was not retained) on the selected object
    {
        // group: Item Swell
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(-5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (0))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_4587_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, ((Active*)*it)->x_scale);
            ((Active*)*it)->set_scale(((Active*)*it)->x_scale*2);
            ((Active*)*it)->alterables->flags.enable(-5);
        }
    }
    event_4587_6_end: ;
}
// Function purpose: generated callback event_func_4932 processes event block(s) 4588_6. Group(s): Item Swell.
//        Actions/conditions: 4588_6: sets the selected object's scale to selected object->x_scale-(selected
//        object->alterables->values.get(13)/MathHelper()/10).
void Frames::event_func_4932()
{
    // event 4588_6 : sets the selected object's scale to selected object->x_scale-(selected object->alterables->values.get(13)/MathHelper()/10)
    {
        // group: Item Swell
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(-5))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_4588_6_end;
        if (!((((Active*)get_single(hudItem_instances, default_active_instance))->x_scale) > (((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(13)))) goto event_4588_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(((Active*)*it)->x_scale-(((Active*)*it)->alterables->values.get(13)/MathHelper()/10));
        }
    }
    event_4588_6_end: ;
}
// Function purpose: generated callback event_func_4933 processes event block(s) 4589_6. Group(s): Item Swell.
//        Actions/conditions: 4589_6: disables flag -5 (legacy object-specific state; original label was not retained)
//        on the selected object; sets the selected object's scale to selected object->alterables->values.get(13);
//        sets the selected object's numeric value to 0.
void Frames::event_func_4933()
{
    // event 4589_6 : disables flag -5 (legacy object-specific state; original label was not retained) on the selected object; sets the selected object's scale to selected object->alterables->values.get(13); sets the selected object's numeric value to 0
    {
        // group: Item Swell
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(-5))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_4589_6_end;
        if (!((((Active*)get_single(hudItem_instances, default_active_instance))->x_scale) <= (((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(13)))) goto event_4589_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(-5);
            ((Active*)*it)->set_scale(((Active*)*it)->alterables->values.get(13));
            ((Active*)*it)->alterables->values.set(13, 0);
        }
    }
    event_4589_6_end: ;
}
// Function purpose: generated callback event_func_4934 processes event block(s) 4590_6. Actions/conditions:
//        4590_6: sets Ins to 0.
void Frames::event_func_4934()
{
    // event 4590_6 : sets Ins to 0
    {
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(962, str_ins_2319)) != (0))) goto event_4590_6_end;
        if (is_key_pressed(SDLK_INSERT)) goto event_4590_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(962, str_ins_2319, 0);
    }
    event_4590_6_end: ;
}
// Function purpose: generated callback event_func_4935 processes event block(s) 4592_6. Actions/conditions:
//        4592_6: sets the object's animation to 7.
void Frames::event_func_4935()
{
    // event 4592_6 : sets the object's animation to 7
    {
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(756, str_zip_1932)) != (empty_string))) goto event_4592_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4592_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_4592_6_end: ;
}
// Function purpose: generated callback event_func_4936 processes event block(s) 4594_6. Actions/conditions:
//        4594_6: updates game state with request_user_data().
void Frames::event_func_4936()
{
    // event 4594_6 : updates game state with request_user_data()
    {
        if (!(group_steamworks_1)) goto event_4594_6_end;
        {
            if (!((SteamObject*)get_instance(steamworks2_469_instances))->is_ready()) goto event_4594_6_end;
        }
        if (once_condition_4594_6) goto event_4594_6_end;
        once_condition_4594_6 = true;
        ((SteamObject*)get_instance(steamworks2_469_instances))->request_user_data();
    }
    event_4594_6_end: ;
}
// Function purpose: generated callback event_func_4937 processes event block(s) 4595_6. Actions/conditions:
//        4595_6: unlocks the physical achievement.
void Frames::event_func_4937()
{
    // event 4595_6 : unlocks the physical achievement
    {
        if (!(group_steamworks_1)) goto event_4595_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(8)) > (99))) goto event_4595_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(9)) > (99))) goto event_4595_6_end;
        if (!((((SteamObject*)get_instance(steamworks2_469_instances))->get_unlocked(str_physical_2320)) == (0))) goto event_4595_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->unlock_achievement(str_physical_2320);
    }
    event_4595_6_end: ;
}
// Function purpose: generated callback event_func_4938 processes event block(s) 4596_6. Actions/conditions:
//        4596_6: unlocks the Int achievement.
void Frames::event_func_4938()
{
    // event 4596_6 : unlocks the Int achievement
    {
        if (!(group_steamworks_1)) goto event_4596_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(10)) > (99))) goto event_4596_6_end;
        if (!((((SteamObject*)get_instance(steamworks2_469_instances))->get_unlocked(str_int_2321)) == (0))) goto event_4596_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->unlock_achievement(str_int_2321);
    }
    event_4596_6_end: ;
}
// Function purpose: generated callback event_func_4939 processes event block(s) 4597_6. Actions/conditions:
//        4597_6: unlocks the MonopolyGuy achievement.
void Frames::event_func_4939()
{
    // event 4597_6 : unlocks the MonopolyGuy achievement
    {
        if (!(group_steamworks_1)) goto event_4597_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(219, str_cash_11)) >= (1000))) goto event_4597_6_end;
        if (!((((SteamObject*)get_instance(steamworks2_469_instances))->get_unlocked(str_monopolyguy_2322)) == (0))) goto event_4597_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->unlock_achievement(str_monopolyguy_2322);
    }
    event_4597_6_end: ;
}
// Function purpose: generated callback event_func_4940 processes event block(s) 4598_6. Group(s): Anti-HAX.
//        Actions/conditions: 4598_6: checks skips if the event-specific game state condition is met; game state HAX;
//        skips if dialog is open; this handler gates a game event without a direct val.
void Frames::event_func_4940()
{
    // event 4598_6 : checks skips if the event-specific game state condition is met; game state HAX; skips if dialog is open; this handler gates a game event without a direct val
    {
        // group: Anti-HAX
        every_4598_6 += manager.dt;
        if (every_4598_6 < 30.0) goto event_4598_6_end;
        every_4598_6 -= 30.0;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(221, str_hax_828)) == (0))) goto event_4598_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4598_6_end;
        {
            loop_hax_check_running = true;
            int times = int(1);
            loop_hax_check_index = 0;
            while (loop_hax_check_index < times) {
                loop_hax_check_6();
                if (!loop_hax_check_running) break;
                loop_hax_check_index++;
            }
        }
    }
    event_4598_6_end: ;
}
// Function purpose: generated callback event_func_4941 processes event block(s) 4607_6. Actions/conditions:
//        4607_6: changes a stored game value.
void Frames::event_func_4941()
{
    // event 4607_6 : changes a stored game value
    {
        every_4607_6 += manager.dt;
        if (every_4607_6 < 60.0) goto event_4607_6_end;
        every_4607_6 -= 60.0;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(899, str_hunger_2168)) > (0))) goto event_4607_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(899, str_hunger_2168, 1);
    }
    event_4607_6_end: ;
}
// Function purpose: generated callback event_func_4942 processes event block(s) 4608_6. Group(s): Chexington.
//        Actions/conditions: 4608_6: sets error to 0.
void Frames::event_func_4942()
{
    // event 4608_6 : sets error to 0
    {
        // group: Chexington
        every_4608_6 += manager.dt;
        if (every_4608_6 < 60.0) goto event_4608_6_end;
        every_4608_6 -= 60.0;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(50, str_error_233, 0);
        {
            loop_file_checks_running = true;
            int times = int(1);
            loop_file_checks_index = 0;
            while (loop_file_checks_index < times) {
                loop_file_checks_6();
                if (!loop_file_checks_running) break;
                loop_file_checks_index++;
            }
        }
    }
    event_4608_6_end: ;
}
// Function purpose: generated callback event_func_4943 processes event block(s) 4614_6. Group(s): Beds outside
//        Frame. Actions/conditions: 4614_6: saves the current object selection; removes the selected object.
void Frames::event_func_4943()
{
    // event 4614_6 : saves the current object selection; removes the selected object
    bool or_result_4614_6 = false;
    bool or_temp_result_4614_6_0 = false;
    {
        // group: Beds outside Frame
        bedmedical_234_instances.clear_selection();
        for (ObjectIterator it(bedmedical_234_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (20))) { it.deselect(); continue; }
        }
        if (!bedmedical_234_instances.has_selection()) goto or_event_4614_6_0_end;
        or_result_4614_6 = true;
        or_temp_result_4614_6_0 = true;
    }
    or_event_4614_6_0_end: ;
    bedmedical_234_instances.clear_saved_selection();
    if (or_temp_result_4614_6_0) {
        bedmedical_234_instances.save_selection();
    }
    // event 4614_6 : saves the current object selection; removes the selected object
    bool or_temp_result_4614_6_1 = false;
    {
        // group: Beds outside Frame
        bedmedical_234_instances.clear_selection();
        for (ObjectIterator it(bedmedical_234_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (20))) { it.deselect(); continue; }
        }
        if (!bedmedical_234_instances.has_selection()) goto or_event_4614_6_1_end;
        or_result_4614_6 = true;
        or_temp_result_4614_6_1 = true;
    }
    or_event_4614_6_1_end: ;
    if (or_temp_result_4614_6_1) {
        bedmedical_234_instances.save_selection();
    }
    // event 4614_6 : saves the current object selection; removes the selected object
    bool or_temp_result_4614_6_2 = false;
    {
        // group: Beds outside Frame
        bedmedical_234_instances.clear_selection();
        for (ObjectIterator it(bedmedical_234_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (width-20))) { it.deselect(); continue; }
        }
        if (!bedmedical_234_instances.has_selection()) goto or_event_4614_6_2_end;
        or_result_4614_6 = true;
        or_temp_result_4614_6_2 = true;
    }
    or_event_4614_6_2_end: ;
    if (or_temp_result_4614_6_2) {
        bedmedical_234_instances.save_selection();
    }
    // event 4614_6 : saves the current object selection; removes the selected object
    bool or_temp_result_4614_6_3 = false;
    {
        // group: Beds outside Frame
        bedmedical_234_instances.clear_selection();
        for (ObjectIterator it(bedmedical_234_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (height-20))) { it.deselect(); continue; }
        }
        if (!bedmedical_234_instances.has_selection()) goto or_event_4614_6_3_end;
        or_result_4614_6 = true;
        or_temp_result_4614_6_3 = true;
        or_event_4614_6_3_end: ;
        if (or_temp_result_4614_6_3) {
            bedmedical_234_instances.save_selection();
        }
        if (!or_result_4614_6) goto or_final_or_event_4614_6_3_end;
        bedmedical_234_instances.empty_selection();
        if (or_temp_result_4614_6_0 || or_temp_result_4614_6_1 || or_temp_result_4614_6_2 || or_temp_result_4614_6_3) {
            bedmedical_234_instances.restore_selection();
        }
        for (ObjectIterator it(bedmedical_234_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    or_final_or_event_4614_6_3_end: ;
}
// Function purpose: generated callback event_func_4944 processes event block(s) 4615_6. Group(s): Beds outside
//        Frame. Actions/conditions: 4615_6: saves the current object selection; removes the selected object.
void Frames::event_func_4944()
{
    // event 4615_6 : saves the current object selection; removes the selected object
    bool or_result_4615_6 = false;
    bool or_temp_result_4615_6_0 = false;
    {
        // group: Beds outside Frame
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (20))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto or_event_4615_6_0_end;
        or_result_4615_6 = true;
        or_temp_result_4615_6_0 = true;
    }
    or_event_4615_6_0_end: ;
    inmateBed_instances.clear_saved_selection();
    if (or_temp_result_4615_6_0) {
        inmateBed_instances.save_selection();
    }
    // event 4615_6 : saves the current object selection; removes the selected object
    bool or_temp_result_4615_6_1 = false;
    {
        // group: Beds outside Frame
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (20))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto or_event_4615_6_1_end;
        or_result_4615_6 = true;
        or_temp_result_4615_6_1 = true;
    }
    or_event_4615_6_1_end: ;
    if (or_temp_result_4615_6_1) {
        inmateBed_instances.save_selection();
    }
    // event 4615_6 : saves the current object selection; removes the selected object
    bool or_temp_result_4615_6_2 = false;
    {
        // group: Beds outside Frame
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (width-20))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto or_event_4615_6_2_end;
        or_result_4615_6 = true;
        or_temp_result_4615_6_2 = true;
    }
    or_event_4615_6_2_end: ;
    if (or_temp_result_4615_6_2) {
        inmateBed_instances.save_selection();
    }
    // event 4615_6 : saves the current object selection; removes the selected object
    bool or_temp_result_4615_6_3 = false;
    {
        // group: Beds outside Frame
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (height-20))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto or_event_4615_6_3_end;
        or_result_4615_6 = true;
        or_temp_result_4615_6_3 = true;
        or_event_4615_6_3_end: ;
        if (or_temp_result_4615_6_3) {
            inmateBed_instances.save_selection();
        }
        if (!or_result_4615_6) goto or_final_or_event_4615_6_3_end;
        inmateBed_instances.empty_selection();
        if (or_temp_result_4615_6_0 || or_temp_result_4615_6_1 || or_temp_result_4615_6_2 || or_temp_result_4615_6_3) {
            inmateBed_instances.restore_selection();
        }
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    or_final_or_event_4615_6_3_end: ;
}
void Frames::handle_frame_7_events()
{
    test_collisions_6();
    event_func_3394();
    event_func_3395();
    event_func_3556();
    event_func_3572();
    event_func_3967();
    event_func_3970();
    event_func_3978();
    event_func_3979();
    event_func_3980();
    event_func_3982();
    event_func_3983();
    event_func_4007();
    event_func_4038();
    event_func_4053();
    event_func_4603();
    event_func_4784();
    event_func_4936();
    if (next_frame != -1) return;
    event_func_3165();
    if (!group_load_map_from_file_1) goto group_load_map_from_file_1_end;
    event_func_3166();
    if (!group_load_map_from_file_old_tiles_1) goto group_load_map_from_file_old_tiles_1_end;
    event_func_3167();
    group_load_map_from_file_old_tiles_1_end: ;
    if (!group_load_map_from_file_new_tiles_1) goto group_load_map_from_file_new_tiles_1_end;
    event_func_3168();
    group_load_map_from_file_new_tiles_1_end: ;
    event_func_3169();
    event_func_3170();
    group_load_map_from_file_1_end: ;
    if (!group_setup_1) goto group_setup_1_end;
    event_func_3171();
    event_func_3172();
    event_func_3173();
    event_func_3174();
    event_func_3175();
    event_func_3176();
    event_func_3177();
    event_func_3178();
    event_func_3179();
    event_func_3180();
    event_func_3181();
    event_func_3182();
    event_func_3183();
    event_func_3184();
    event_func_3185();
    event_func_3186();
    if (!group_setup_set_walls_1) goto group_setup_set_walls_1_end;
    group_setup_set_walls_1_end: ;
    event_func_3187();
    event_func_3188();
    event_func_3189();
    event_func_3190();
    event_func_3191();
    event_func_3192();
    event_func_3193();
    event_func_3194();
    event_func_3195();
    event_func_3196();
    event_func_3197();
    event_func_3198();
    event_func_3199();
    event_func_3200();
    event_func_3201();
    event_func_3202();
    if (!group_setup_crafting_notes_1) goto group_setup_crafting_notes_1_end;
    group_setup_crafting_notes_1_end: ;
    event_func_3203();
    event_func_3204();
    event_func_3205();
    event_func_3206();
    event_func_3207();
    event_func_3208();
    event_func_3209();
    event_func_3210();
    event_func_3211();
    event_func_3212();
    event_func_3213();
    event_func_3214();
    event_func_3215();
    event_func_3216();
    event_func_3217();
    event_func_3218();
    event_func_3219();
    event_func_3220();
    event_func_3221();
    event_func_3222();
    event_func_3223();
    event_func_3224();
    event_func_3225();
    event_func_3226();
    group_setup_1_end: ;
    event_func_3227();
    event_func_3228();
    event_func_3229();
    event_func_3230();
    event_func_3231();
    event_func_3232();
    if (!group_tooltips_1) goto group_tooltips_1_end;
    event_func_3234();
    event_func_3235();
    event_func_3236();
    event_func_3237();
    event_func_3238();
    event_func_3239();
    event_func_3240();
    event_func_3241();
    event_func_3242();
    event_func_3243();
    event_func_3244();
    group_tooltips_1_end: ;
    event_func_3245();
    event_func_3246();
    event_func_3247();
    event_func_3248();
    if (!group_code_1) goto group_code_1_end;
    event_func_3249();
    event_func_3250();
    event_func_3251();
    event_func_3252();
    event_func_3253();
    event_func_3254();
    event_func_3255();
    event_func_3256();
    if (!group_code_dlc_alcatraz_1) goto group_code_dlc_alcatraz_1_end;
    event_func_3257();
    event_func_3258();
    event_func_3259();
    event_func_3260();
    event_func_3261();
    event_func_3262();
    event_func_3263();
    event_func_3264();
    event_func_3265();
    group_code_dlc_alcatraz_1_end: ;
    if (!group_code_dlc_eteam_1) goto group_code_dlc_eteam_1_end;
    event_func_3266();
    event_func_3267();
    event_func_3268();
    group_code_dlc_eteam_1_end: ;
    if (!group_code_dlc_dtaf_1) goto group_code_dlc_dtaf_1_end;
    event_func_3269();
    event_func_3270();
    event_func_3271();
    event_func_3272();
    group_code_dlc_dtaf_1_end: ;
    if (!group_code_dlc_sss_1) goto group_code_dlc_sss_1_end;
    event_func_3273();
    event_func_3274();
    event_func_3275();
    event_func_3276();
    event_func_3277();
    event_func_3278();
    event_func_3279();
    event_func_3280();
    event_func_3281();
    group_code_dlc_sss_1_end: ;
    if (!group_code_dlc_feb16_1) goto group_code_dlc_feb16_1_end;
    event_func_3282();
    event_func_3283();
    event_func_3284();
    group_code_dlc_feb16_1_end: ;
    if (!group_code_dlc_tol_1) goto group_code_dlc_tol_1_end;
    event_func_3285();
    event_func_3286();
    event_func_3287();
    group_code_dlc_tol_1_end: ;
    if (!group_code_dlc_bannedcamp_1) goto group_code_dlc_bannedcamp_1_end;
    event_func_3288();
    event_func_3289();
    event_func_3290();
    group_code_dlc_bannedcamp_1_end: ;
    if (!group_code_dlc_ccl_1) goto group_code_dlc_ccl_1_end;
    event_func_3291();
    event_func_3292();
    event_func_3293();
    event_func_3294();
    event_func_3295();
    event_func_3296();
    group_code_dlc_ccl_1_end: ;
    event_func_3297();
    event_func_3298();
    event_func_3299();
    event_func_3300();
    event_func_3301();
    event_func_3302();
    event_func_3303();
    event_func_3304();
    event_func_3305();
    event_func_3306();
    event_func_3307();
    if (!group_code_menu_1) goto group_code_menu_1_end;
    event_func_3308();
    event_func_3310();
    event_func_3322();
    event_func_3323();
    event_func_3324();
    event_func_3325();
    event_func_3326();
    group_code_menu_1_end: ;
    event_func_3329();
    event_func_3330();
    event_func_3331();
    event_func_3332();
    if (!group_code_input_mousedown_1) goto group_code_input_mousedown_1_end;
    event_func_3333();
    event_func_3334();
    event_func_3335();
    event_func_3336();
    event_func_3337();
    event_func_3338();
    group_code_input_mousedown_1_end: ;
    event_func_3339();
    event_func_3340();
    event_func_3341();
    if (!group_code_input_move_keys_movement_1) goto group_code_input_move_keys_movement_1_end;
    event_func_3342();
    event_func_3343();
    event_func_3344();
    event_func_3345();
    event_func_3346();
    event_func_3347();
    event_func_3348();
    event_func_3349();
    event_func_3350();
    event_func_3351();
    group_code_input_move_keys_movement_1_end: ;
    event_func_3352();
    event_func_3353();
    event_func_3354();
    event_func_3355();
    event_func_3356();
    if (!group_code_input_dismount_1) goto group_code_input_dismount_1_end;
    event_func_3357();
    event_func_3358();
    event_func_3359();
    event_func_3360();
    group_code_input_dismount_1_end: ;
    event_func_3363();
    event_func_3364();
    event_func_3365();
    event_func_3366();
    event_func_3367();
    event_func_3368();
    event_func_3369();
    event_func_3370();
    event_func_3371();
    event_func_3372();
    event_func_3373();
    event_func_3374();
    event_func_3375();
    event_func_3376();
    event_func_3377();
    event_func_3378();
    event_func_3379();
    if (!group_code_pathfinding_missing_equip_1) goto group_code_pathfinding_missing_equip_1_end;
    event_func_3380();
    group_code_pathfinding_missing_equip_1_end: ;
    event_func_3381();
    event_func_3382();
    event_func_3383();
    event_func_3384();
    event_func_3385();
    event_func_3386();
    if (!group_code_pathfinding_guards_policing_1) goto group_code_pathfinding_guards_policing_1_end;
    event_func_3387();
    event_func_3388();
    event_func_3389();
    event_func_3390();
    event_func_3391();
    event_func_3392();
    if (!group_code_pathfinding_guards_policing_beyond_walls_normal_maps_1) goto group_code_pathfinding_guards_policing_beyond_walls_normal_maps_1_end;
    group_code_pathfinding_guards_policing_beyond_walls_normal_maps_1_end: ;
    if (!group_code_pathfinding_guards_policing_beyond_walls_bonus_maps_1) goto group_code_pathfinding_guards_policing_beyond_walls_bonus_maps_1_end;
    group_code_pathfinding_guards_policing_beyond_walls_bonus_maps_1_end: ;
    if (!group_code_pathfinding_guards_policing_beyond_walls_custom_maps_1) goto group_code_pathfinding_guards_policing_beyond_walls_custom_maps_1_end;
    group_code_pathfinding_guards_policing_beyond_walls_custom_maps_1_end: ;
    event_func_3393();
    event_func_3396();
    event_func_3397();
    event_func_3398();
    event_func_3399();
    event_func_3400();
    if (!group_code_pathfinding_guards_policing_during_lockdown_and_lights_out_outside_camp_map_1) goto group_code_pathfinding_guards_policing_during_lockdown_and_lights_out_outside_camp_map_1_end;
    group_code_pathfinding_guards_policing_during_lockdown_and_lights_out_outside_camp_map_1_end: ;
    if (!group_code_pathfinding_guards_policing_during_lockdown_and_lights_out_outside_non_camp_map_1) goto group_code_pathfinding_guards_policing_during_lockdown_and_lights_out_outside_non_camp_map_1_end;
    group_code_pathfinding_guards_policing_during_lockdown_and_lights_out_outside_non_camp_map_1_end: ;
    event_func_3401();
    event_func_3402();
    event_func_3403();
    event_func_3404();
    event_func_3405();
    event_func_3406();
    event_func_3407();
    event_func_3408();
    event_func_3409();
    if (!group_code_pathfinding_guards_policing_see_unlocked_door_1) goto group_code_pathfinding_guards_policing_see_unlocked_door_1_end;
    event_func_3410();
    event_func_3411();
    event_func_3412();
    event_func_3413();
    group_code_pathfinding_guards_policing_see_unlocked_door_1_end: ;
    event_func_3414();
    event_func_3415();
    event_func_3416();
    event_func_3417();
    event_func_3418();
    event_func_3419();
    event_func_3420();
    event_func_3421();
    event_func_3422();
    event_func_3423();
    event_func_3424();
    event_func_3425();
    event_func_3426();
    event_func_3427();
    event_func_3428();
    event_func_3429();
    event_func_3430();
    event_func_3431();
    event_func_3432();
    event_func_3433();
    event_func_3434();
    event_func_3435();
    event_func_3436();
    event_func_3437();
    event_func_3438();
    event_func_3439();
    if (!group_code_pathfinding_guards_policing_reporting_body_1) goto group_code_pathfinding_guards_policing_reporting_body_1_end;
    event_func_3440();
    event_func_3441();
    event_func_3442();
    event_func_3443();
    group_code_pathfinding_guards_policing_reporting_body_1_end: ;
    event_func_3444();
    group_code_pathfinding_guards_policing_1_end: ;
    event_func_3445();
    if (!group_code_pathfinding_guards_guard_towers_1) goto group_code_pathfinding_guards_guard_towers_1_end;
    event_func_3446();
    event_func_3447();
    event_func_3448();
    event_func_3449();
    event_func_3450();
    event_func_3451();
    event_func_3452();
    event_func_3453();
    event_func_3454();
    event_func_3455();
    event_func_3456();
    event_func_3457();
    event_func_3458();
    event_func_3459();
    event_func_3460();
    event_func_3461();
    event_func_3462();
    event_func_3463();
    event_func_3464();
    event_func_3465();
    event_func_3466();
    event_func_3467();
    event_func_3468();
    group_code_pathfinding_guards_guard_towers_1_end: ;
    event_func_3469();
    event_func_3470();
    event_func_3471();
    event_func_3472();
    event_func_3473();
    event_func_3474();
    event_func_3475();
    event_func_3476();
    if (!group_code_pathfinding_guards_player_shakedown_1) goto group_code_pathfinding_guards_player_shakedown_1_end;
    event_func_3477();
    event_func_3478();
    group_code_pathfinding_guards_player_shakedown_1_end: ;
    event_func_3479();
    event_func_3480();
    event_func_3481();
    event_func_3482();
    event_func_3483();
    event_func_3484();
    event_func_3485();
    event_func_3486();
    event_func_3487();
    event_func_3488();
    event_func_3489();
    event_func_3490();
    event_func_3491();
    event_func_3492();
    event_func_3493();
    event_func_3494();
    event_func_3495();
    event_func_3496();
    event_func_3497();
    event_func_3498();
    event_func_3499();
    event_func_3500();
    event_func_3501();
    event_func_3502();
    if (!group_code_pathfinding_inmates_see_s_stuff_see_s_item_1) goto group_code_pathfinding_inmates_see_s_stuff_see_s_item_1_end;
    event_func_3503();
    event_func_3504();
    event_func_3505();
    group_code_pathfinding_inmates_see_s_stuff_see_s_item_1_end: ;
    event_func_3506();
    event_func_3507();
    event_func_3508();
    event_func_3509();
    event_func_3510();
    event_func_3511();
    event_func_3512();
    event_func_3513();
    event_func_3514();
    event_func_3515();
    event_func_3516();
    event_func_3517();
    event_func_3518();
    event_func_3519();
    event_func_3520();
    event_func_3521();
    event_func_3522();
    event_func_3523();
    event_func_3524();
    event_func_3525();
    event_func_3526();
    event_func_3527();
    event_func_3528();
    event_func_3529();
    event_func_3530();
    event_func_3531();
    event_func_3532();
    event_func_3533();
    event_func_3534();
    event_func_3535();
    event_func_3536();
    event_func_3537();
    event_func_3538();
    event_func_3541();
    event_func_3542();
    event_func_3543();
    event_func_3544();
    event_func_3545();
    event_func_3546();
    event_func_3547();
    event_func_3548();
    if (!group_code_conflict_you_attacking_old_beat_code_1) goto group_code_conflict_you_attacking_old_beat_code_1_end;
    group_code_conflict_you_attacking_old_beat_code_1_end: ;
    event_func_3549();
    event_func_3550();
    event_func_3551();
    event_func_3552();
    event_func_3553();
    event_func_3554();
    event_func_3555();
    event_func_3557();
    event_func_3558();
    event_func_3559();
    event_func_3560();
    event_func_3561();
    event_func_3562();
    event_func_3563();
    event_func_3564();
    event_func_3565();
    event_func_3566();
    event_func_3567();
    event_func_3568();
    event_func_3569();
    event_func_3570();
    event_func_3571();
    event_func_3573();
    event_func_3574();
    event_func_3575();
    event_func_3576();
    if (!group_code_zones_1) goto group_code_zones_1_end;
    event_func_3577();
    event_func_3578();
    event_func_3579();
    event_func_3580();
    event_func_3581();
    event_func_3582();
    event_func_3583();
    event_func_3584();
    event_func_3585();
    event_func_3586();
    event_func_3587();
    event_func_3588();
    event_func_3589();
    event_func_3590();
    event_func_3591();
    event_func_3592();
    event_func_3593();
    event_func_3594();
    event_func_3595();
    event_func_3596();
    event_func_3597();
    event_func_3598();
    event_func_3599();
    event_func_3600();
    event_func_3601();
    event_func_3602();
    event_func_3603();
    event_func_3604();
    event_func_3605();
    event_func_3606();
    event_func_3607();
    event_func_3608();
    event_func_3609();
    event_func_3610();
    event_func_3611();
    event_func_3612();
    event_func_3613();
    event_func_3614();
    event_func_3615();
    event_func_3616();
    event_func_3617();
    event_func_3618();
    event_func_3619();
    event_func_3620();
    group_code_zones_1_end: ;
    event_func_3621();
    event_func_3622();
    event_func_3623();
    event_func_3624();
    event_func_3625();
    event_func_3626();
    if (!group_code_out_of_bounds_beyond_walls_2_normal_maps_2_1) goto group_code_out_of_bounds_beyond_walls_2_normal_maps_2_1_end;
    group_code_out_of_bounds_beyond_walls_2_normal_maps_2_1_end: ;
    if (!group_code_out_of_bounds_beyond_walls_2_bonus_maps_2_1) goto group_code_out_of_bounds_beyond_walls_2_bonus_maps_2_1_end;
    group_code_out_of_bounds_beyond_walls_2_bonus_maps_2_1_end: ;
    if (!group_code_out_of_bounds_beyond_walls_2_custom_maps_2_1) goto group_code_out_of_bounds_beyond_walls_2_custom_maps_2_1_end;
    group_code_out_of_bounds_beyond_walls_2_custom_maps_2_1_end: ;
    event_func_3627();
    event_func_3628();
    event_func_3629();
    event_func_3630();
    event_func_3631();
    event_func_3632();
    event_func_3633();
    event_func_3634();
    event_func_3635();
    event_func_3636();
    event_func_3637();
    event_func_3638();
    event_func_3639();
    event_func_3640();
    event_func_3641();
    event_func_3642();
    event_func_3643();
    event_func_3644();
    event_func_3645();
    event_func_3646();
    event_func_3647();
    event_func_3648();
    event_func_3649();
    event_func_3650();
    event_func_3651();
    event_func_3652();
    event_func_3653();
    event_func_3654();
    event_func_3655();
    event_func_3656();
    event_func_3657();
    event_func_3658();
    event_func_3659();
    event_func_3660();
    event_func_3661();
    event_func_3662();
    event_func_3663();
    event_func_3664();
    event_func_3665();
    event_func_3666();
    event_func_3667();
    event_func_3668();
    event_func_3669();
    event_func_3670();
    event_func_3671();
    event_func_3672();
    event_func_3673();
    event_func_3674();
    event_func_3675();
    event_func_3676();
    event_func_3677();
    event_func_3678();
    event_func_3679();
    event_func_3680();
    event_func_3681();
    event_func_3682();
    if (!group_code_schedules_hour_tickover_1) goto group_code_schedules_hour_tickover_1_end;
    event_func_3683();
    event_func_3684();
    event_func_3685();
    event_func_3686();
    event_func_3687();
    event_func_3688();
    event_func_3689();
    event_func_3690();
    event_func_3691();
    event_func_3692();
    event_func_3693();
    event_func_3694();
    event_func_3695();
    event_func_3696();
    if (!group_code_schedules_hour_tickover_minsec_1) goto group_code_schedules_hour_tickover_minsec_1_end;
    event_func_3697();
    event_func_3698();
    event_func_3699();
    event_func_3700();
    event_func_3701();
    event_func_3702();
    event_func_3703();
    event_func_3704();
    event_func_3705();
    event_func_3706();
    event_func_3707();
    event_func_3708();
    event_func_3709();
    group_code_schedules_hour_tickover_minsec_1_end: ;
    if (!group_code_schedules_hour_tickover_medsec_1) goto group_code_schedules_hour_tickover_medsec_1_end;
    event_func_3710();
    event_func_3711();
    event_func_3712();
    event_func_3713();
    event_func_3714();
    event_func_3715();
    event_func_3716();
    event_func_3717();
    event_func_3718();
    event_func_3719();
    event_func_3720();
    event_func_3721();
    event_func_3722();
    event_func_3723();
    group_code_schedules_hour_tickover_medsec_1_end: ;
    if (!group_code_schedules_hour_tickover_maxsec_1) goto group_code_schedules_hour_tickover_maxsec_1_end;
    event_func_3724();
    event_func_3725();
    event_func_3726();
    event_func_3727();
    event_func_3728();
    event_func_3729();
    event_func_3730();
    event_func_3731();
    event_func_3732();
    event_func_3733();
    event_func_3734();
    event_func_3735();
    event_func_3736();
    group_code_schedules_hour_tickover_maxsec_1_end: ;
    if (!group_code_schedules_hour_tickover_camp_1) goto group_code_schedules_hour_tickover_camp_1_end;
    event_func_3737();
    event_func_3738();
    event_func_3739();
    event_func_3740();
    event_func_3741();
    event_func_3742();
    event_func_3743();
    event_func_3744();
    event_func_3745();
    event_func_3746();
    event_func_3747();
    event_func_3748();
    group_code_schedules_hour_tickover_camp_1_end: ;
    group_code_schedules_hour_tickover_1_end: ;
    event_func_3749();
    event_func_3750();
    event_func_3751();
    if (!group_code_schedules_sleeping_1) goto group_code_schedules_sleeping_1_end;
    event_func_3752();
    event_func_3753();
    event_func_3754();
    event_func_3755();
    event_func_3756();
    event_func_3757();
    event_func_3758();
    event_func_3759();
    event_func_3760();
    event_func_3761();
    event_func_3762();
    event_func_3763();
    event_func_3764();
    event_func_3765();
    group_code_schedules_sleeping_1_end: ;
    event_func_3766();
    event_func_3767();
    if (!group_code_schedules_roll_call_1) goto group_code_schedules_roll_call_1_end;
    event_func_3768();
    event_func_3769();
    event_func_3770();
    event_func_3771();
    event_func_3772();
    event_func_3773();
    event_func_3774();
    event_func_3775();
    event_func_3776();
    event_func_3777();
    event_func_3778();
    event_func_3779();
    event_func_3780();
    event_func_3781();
    event_func_3782();
    event_func_3783();
    event_func_3784();
    event_func_3785();
    event_func_3786();
    event_func_3787();
    event_func_3788();
    event_func_3789();
    event_func_3790();
    group_code_schedules_roll_call_1_end: ;
    event_func_3791();
    if (!group_code_schedules_food_1) goto group_code_schedules_food_1_end;
    event_func_3792();
    event_func_3793();
    event_func_3794();
    event_func_3795();
    event_func_3796();
    event_func_3797();
    event_func_3798();
    event_func_3799();
    event_func_3800();
    event_func_3801();
    event_func_3802();
    event_func_3803();
    event_func_3804();
    event_func_3805();
    event_func_3806();
    event_func_3807();
    event_func_3808();
    event_func_3809();
    event_func_3810();
    event_func_3811();
    event_func_3812();
    event_func_3813();
    event_func_3814();
    event_func_3815();
    event_func_3816();
    event_func_3818();
    event_func_3819();
    event_func_3820();
    group_code_schedules_food_1_end: ;
    event_func_3821();
    if (!group_code_schedules_leisure_work_1) goto group_code_schedules_leisure_work_1_end;
    event_func_3822();
    event_func_3823();
    event_func_3824();
    event_func_3825();
    event_func_3826();
    event_func_3827();
    event_func_3828();
    event_func_3829();
    event_func_3830();
    event_func_3831();
    event_func_3832();
    event_func_3833();
    event_func_3834();
    event_func_3835();
    event_func_3836();
    event_func_3837();
    event_func_3838();
    if (!group_code_schedules_leisure_work_npcs_doing_jobs_1) goto group_code_schedules_leisure_work_npcs_doing_jobs_1_end;
    event_func_3839();
    event_func_3840();
    event_func_3841();
    event_func_3842();
    event_func_3843();
    event_func_3844();
    event_func_3845();
    event_func_3846();
    event_func_3847();
    event_func_3848();
    if (!group_code_schedules_leisure_work_npcs_doing_jobs_npc_gardening_1) goto group_code_schedules_leisure_work_npcs_doing_jobs_npc_gardening_1_end;
    event_func_3849();
    group_code_schedules_leisure_work_npcs_doing_jobs_npc_gardening_1_end: ;
    if (!group_code_schedules_leisure_work_npcs_doing_jobs_npc_janitor_1) goto group_code_schedules_leisure_work_npcs_doing_jobs_npc_janitor_1_end;
    event_func_3850();
    group_code_schedules_leisure_work_npcs_doing_jobs_npc_janitor_1_end: ;
    if (!group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1) goto group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1_end;
    event_func_3851();
    group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1_end: ;
    if (!group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1) goto group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1_end;
    event_func_3852();
    if (!group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_old_1) goto group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_old_1_end;
    group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_old_1_end: ;
    group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1_end: ;
    if (!group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1) goto group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1_end;
    event_func_3853();
    group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1_end: ;
    if (!group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1) goto group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1_end;
    event_func_3854();
    group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1_end: ;
    if (!group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1) goto group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1_end;
    event_func_3855();
    group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1_end: ;
    if (!group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1) goto group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1_end;
    event_func_3856();
    group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1_end: ;
    if (!group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1) goto group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1_end;
    event_func_3857();
    group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1_end: ;
    if (!group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1) goto group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1_end;
    event_func_3858();
    group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1_end: ;
    group_code_schedules_leisure_work_npcs_doing_jobs_1_end: ;
    event_func_3859();
    event_func_3860();
    event_func_3861();
    event_func_3862();
    event_func_3863();
    event_func_3864();
    event_func_3865();
    event_func_3866();
    event_func_3867();
    event_func_3868();
    event_func_3869();
    event_func_3870();
    event_func_3871();
    event_func_3872();
    event_func_3873();
    event_func_3874();
    event_func_3875();
    event_func_3876();
    event_func_3877();
    event_func_3878();
    group_code_schedules_leisure_work_1_end: ;
    if (!group_code_schedules_shower_1) goto group_code_schedules_shower_1_end;
    event_func_3879();
    event_func_3880();
    event_func_3881();
    event_func_3882();
    event_func_3883();
    event_func_3884();
    event_func_3885();
    event_func_3886();
    event_func_3887();
    event_func_3888();
    event_func_3889();
    event_func_3890();
    event_func_3891();
    event_func_3892();
    event_func_3893();
    event_func_3894();
    event_func_3895();
    event_func_3896();
    event_func_3897();
    event_func_3898();
    event_func_3899();
    event_func_3900();
    event_func_3901();
    event_func_3902();
    event_func_3903();
    event_func_3904();
    event_func_3905();
    event_func_3906();
    event_func_3907();
    event_func_3908();
    group_code_schedules_shower_1_end: ;
    event_func_3909();
    if (!group_code_schedules_gym_1) goto group_code_schedules_gym_1_end;
    event_func_3910();
    event_func_3911();
    event_func_3912();
    event_func_3913();
    event_func_3914();
    event_func_3915();
    event_func_3916();
    event_func_3917();
    event_func_3918();
    event_func_3919();
    event_func_3920();
    event_func_3921();
    event_func_3922();
    event_func_3923();
    event_func_3924();
    event_func_3925();
    event_func_3926();
    event_func_3927();
    event_func_3928();
    event_func_3929();
    event_func_3930();
    event_func_3931();
    event_func_3932();
    event_func_3933();
    event_func_3934();
    group_code_schedules_gym_1_end: ;
    event_func_3935();
    if (!group_code_schedules_lockdown_new_1) goto group_code_schedules_lockdown_new_1_end;
    event_func_3936();
    event_func_3937();
    event_func_3938();
    event_func_3939();
    event_func_3940();
    event_func_3941();
    event_func_3942();
    event_func_3943();
    event_func_3944();
    event_func_3945();
    event_func_3946();
    event_func_3947();
    event_func_3948();
    event_func_3949();
    event_func_3950();
    event_func_3951();
    event_func_3952();
    event_func_3953();
    event_func_3954();
    event_func_3955();
    event_func_3956();
    group_code_schedules_lockdown_new_1_end: ;
    event_func_3957();
    event_func_3958();
    event_func_3959();
    event_func_3960();
    event_func_3961();
    event_func_3962();
    event_func_3963();
    event_func_3964();
    event_func_3965();
    event_func_3966();
    event_func_3968();
    event_func_3969();
    event_func_3971();
    event_func_3972();
    event_func_3973();
    event_func_3974();
    event_func_3975();
    event_func_3976();
    event_func_3977();
    event_func_3981();
    event_func_3984();
    event_func_3985();
    event_func_3986();
    event_func_3987();
    if (!group_code_misc_jeep_1) goto group_code_misc_jeep_1_end;
    event_func_3988();
    event_func_3989();
    event_func_3990();
    event_func_3991();
    event_func_3992();
    event_func_3993();
    event_func_3994();
    event_func_3995();
    event_func_3996();
    event_func_3997();
    event_func_3998();
    event_func_3999();
    event_func_4000();
    event_func_4001();
    event_func_4002();
    event_func_4003();
    event_func_4004();
    event_func_4005();
    event_func_4006();
    group_code_misc_jeep_1_end: ;
    event_func_4008();
    event_func_4009();
    if (!group_code_misc_reindeer_1) goto group_code_misc_reindeer_1_end;
    event_func_4010();
    event_func_4011();
    event_func_4012();
    group_code_misc_reindeer_1_end: ;
    if (!group_code_misc_mines_1) goto group_code_misc_mines_1_end;
    event_func_4013();
    event_func_4014();
    event_func_4015();
    group_code_misc_mines_1_end: ;
    event_func_4016();
    event_func_4017();
    event_func_4018();
    event_func_4019();
    event_func_4020();
    event_func_4021();
    event_func_4022();
    event_func_4023();
    event_func_4024();
    event_func_4025();
    event_func_4026();
    event_func_4027();
    event_func_4028();
    event_func_4029();
    event_func_4030();
    event_func_4031();
    event_func_4032();
    event_func_4033();
    event_func_4034();
    event_func_4035();
    event_func_4036();
    event_func_4037();
    event_func_4039();
    event_func_4040();
    event_func_4041();
    if (!group_code_misc_cameras_1) goto group_code_misc_cameras_1_end;
    event_func_4042();
    event_func_4043();
    event_func_4044();
    event_func_4045();
    event_func_4046();
    event_func_4047();
    event_func_4048();
    event_func_4049();
    event_func_4050();
    event_func_4051();
    event_func_4052();
    group_code_misc_cameras_1_end: ;
    event_func_4054();
    event_func_4055();
    event_func_4056();
    event_func_4057();
    event_func_4058();
    event_func_4059();
    event_func_4060();
    event_func_4061();
    event_func_4062();
    event_func_4063();
    event_func_4064();
    event_func_4065();
    event_func_4066();
    event_func_4067();
    event_func_4068();
    event_func_4069();
    event_func_4070();
    event_func_4071();
    event_func_4072();
    event_func_4073();
    event_func_4074();
    event_func_4075();
    event_func_4076();
    event_func_4077();
    event_func_4078();
    event_func_4079();
    event_func_4080();
    event_func_4081();
    event_func_4082();
    event_func_4083();
    event_func_4084();
    event_func_4085();
    event_func_4086();
    event_func_4087();
    event_func_4088();
    event_func_4089();
    event_func_4090();
    event_func_4091();
    event_func_4092();
    event_func_4093();
    event_func_4094();
    event_func_4095();
    event_func_4096();
    event_func_4097();
    event_func_4098();
    event_func_4099();
    event_func_4100();
    event_func_4101();
    if (!group_code_mouseovers_item_hovers_holding_shift_1) goto group_code_mouseovers_item_hovers_holding_shift_1_end;
    event_func_4102();
    event_func_4103();
    event_func_4104();
    event_func_4105();
    group_code_mouseovers_item_hovers_holding_shift_1_end: ;
    event_func_4106();
    event_func_4107();
    event_func_4108();
    event_func_4109();
    event_func_4110();
    event_func_4111();
    event_func_4112();
    event_func_4113();
    event_func_4114();
    event_func_4115();
    event_func_4116();
    event_func_4117();
    event_func_4118();
    event_func_4119();
    event_func_4120();
    event_func_4121();
    event_func_4122();
    event_func_4123();
    event_func_4124();
    event_func_4125();
    event_func_4126();
    event_func_4127();
    event_func_4128();
    event_func_4129();
    event_func_4130();
    event_func_4131();
    event_func_4132();
    event_func_4133();
    event_func_4134();
    event_func_4135();
    event_func_4136();
    event_func_4137();
    event_func_4138();
    event_func_4139();
    event_func_4140();
    event_func_4141();
    event_func_4142();
    event_func_4143();
    event_func_4144();
    event_func_4145();
    event_func_4146();
    event_func_4147();
    event_func_4148();
    event_func_4149();
    event_func_4150();
    event_func_4151();
    event_func_4152();
    event_func_4153();
    event_func_4154();
    event_func_4155();
    event_func_4156();
    event_func_4157();
    event_func_4158();
    event_func_4159();
    event_func_4160();
    event_func_4161();
    event_func_4162();
    event_func_4163();
    if (!group_code_mouseovers_workouts_1) goto group_code_mouseovers_workouts_1_end;
    event_func_4164();
    event_func_4165();
    event_func_4166();
    event_func_4167();
    event_func_4168();
    event_func_4169();
    event_func_4170();
    event_func_4171();
    group_code_mouseovers_workouts_1_end: ;
    event_func_4172();
    event_func_4173();
    event_func_4174();
    event_func_4175();
    event_func_4176();
    event_func_4177();
    event_func_4178();
    event_func_4179();
    event_func_4180();
    event_func_4181();
    event_func_4182();
    event_func_4183();
    event_func_4184();
    event_func_4185();
    event_func_4186();
    event_func_4187();
    event_func_4188();
    event_func_4189();
    event_func_4190();
    event_func_4191();
    event_func_4192();
    event_func_4193();
    event_func_4194();
    event_func_4195();
    event_func_4196();
    event_func_4197();
    event_func_4198();
    event_func_4199();
    event_func_4200();
    event_func_4201();
    event_func_4202();
    event_func_4203();
    if (!group_code_inventory_underground_lighting_1) goto group_code_inventory_underground_lighting_1_end;
    event_func_4204();
    group_code_inventory_underground_lighting_1_end: ;
    event_func_4208();
    event_func_4209();
    event_func_4210();
    event_func_4211();
    event_func_4212();
    event_func_4213();
    event_func_4216();
    event_func_4217();
    event_func_4219();
    if (!group_code_crafting_1) goto group_code_crafting_1_end;
    event_func_4220();
    event_func_4221();
    event_func_4223();
    group_code_crafting_1_end: ;
    event_func_4225();
    event_func_4227();
    if (!group_code_my_stats_1) goto group_code_my_stats_1_end;
    event_func_4228();
    event_func_4229();
    event_func_4230();
    event_func_4231();
    event_func_4232();
    event_func_4233();
    event_func_4234();
    event_func_4235();
    event_func_4236();
    event_func_4237();
    event_func_4238();
    event_func_4239();
    event_func_4240();
    event_func_4241();
    event_func_4242();
    event_func_4243();
    event_func_4244();
    event_func_4245();
    event_func_4246();
    event_func_4249();
    event_func_4250();
    group_code_my_stats_1_end: ;
    event_func_4251();
    event_func_4252();
    event_func_4254();
    if (!group_code_journal_1) goto group_code_journal_1_end;
    event_func_4255();
    event_func_4256();
    event_func_4260();
    event_func_4261();
    event_func_4265();
    event_func_4266();
    group_code_journal_1_end: ;
    event_func_4267();
    event_func_4268();
    event_func_4270();
    event_func_4272();
    if (!group_code_load_confirm_1) goto group_code_load_confirm_1_end;
    event_func_4273();
    event_func_4274();
    event_func_4275();
    event_func_4276();
    event_func_4279();
    group_code_load_confirm_1_end: ;
    event_func_4280();
    event_func_4281();
    event_func_4282();
    event_func_4285();
    event_func_4286();
    event_func_4287();
    event_func_4288();
    event_func_4289();
    event_func_4290();
    event_func_4291();
    event_func_4292();
    event_func_4293();
    event_func_4294();
    if (!group_code_job_related_kitchen_1) goto group_code_job_related_kitchen_1_end;
    event_func_4297();
    event_func_4298();
    event_func_4299();
    event_func_4300();
    group_code_job_related_kitchen_1_end: ;
    event_func_4303();
    event_func_4304();
    if (!group_code_job_related_laundry_1) goto group_code_job_related_laundry_1_end;
    event_func_4307();
    event_func_4310();
    event_func_4311();
    event_func_4312();
    event_func_4313();
    group_code_job_related_laundry_1_end: ;
    event_func_4315();
    event_func_4316();
    if (!group_code_job_related_metalshop_1) goto group_code_job_related_metalshop_1_end;
    group_code_job_related_metalshop_1_end: ;
    event_func_4319();
    event_func_4320();
    if (!group_code_job_related_woodshop_1) goto group_code_job_related_woodshop_1_end;
    group_code_job_related_woodshop_1_end: ;
    event_func_4322();
    event_func_4323();
    event_func_4324();
    event_func_4325();
    event_func_4326();
    event_func_4327();
    event_func_4328();
    event_func_4329();
    event_func_4330();
    event_func_4331();
    event_func_4341();
    if (!group_code_left_clicked_1) goto group_code_left_clicked_1_end;
    event_func_4358();
    event_func_4364();
    event_func_4365();
    event_func_4366();
    event_func_4367();
    event_func_4368();
    event_func_4369();
    event_func_4370();
    event_func_4371();
    event_func_4372();
    event_func_4408();
    if (!group_code_left_clicked_ccl_1) goto group_code_left_clicked_ccl_1_end;
    group_code_left_clicked_ccl_1_end: ;
    event_func_4419();
    if (!group_code_left_clicked_sss_1) goto group_code_left_clicked_sss_1_end;
    event_func_4422();
    event_func_4425();
    event_func_4428();
    event_func_4431();
    group_code_left_clicked_sss_1_end: ;
    event_func_4439();
    if (!group_code_left_clicked_eteam_1) goto group_code_left_clicked_eteam_1_end;
    event_func_4444();
    group_code_left_clicked_eteam_1_end: ;
    event_func_4450();
    if (!group_code_left_clicked_dtaf_1) goto group_code_left_clicked_dtaf_1_end;
    event_func_4460();
    group_code_left_clicked_dtaf_1_end: ;
    event_func_4472();
    group_code_left_clicked_1_end: ;
    event_func_4528();
    event_func_3332();
    event_func_4529();
    if (!group_code_right_clicked_1) goto group_code_right_clicked_1_end;
    event_func_4540();
    group_code_right_clicked_1_end: ;
    event_func_4555();
    event_func_4556();
    event_func_4557();
    event_func_4558();
    event_func_4559();
    event_func_4560();
    event_func_4561();
    event_func_4562();
    event_func_4563();
    event_func_4564();
    event_func_4565();
    event_func_4566();
    event_func_4567();
    event_func_4568();
    event_func_4569();
    event_func_4570();
    event_func_4571();
    event_func_4572();
    event_func_4573();
    event_func_4574();
    event_func_4575();
    event_func_4576();
    if (!group_code_sort_these_sleep_stuff_sleep_menu_1) goto group_code_sort_these_sleep_stuff_sleep_menu_1_end;
    event_func_4577();
    event_func_4578();
    event_func_4579();
    event_func_4580();
    group_code_sort_these_sleep_stuff_sleep_menu_1_end: ;
    event_func_4581();
    event_func_4582();
    event_func_4583();
    event_func_4584();
    event_func_4585();
    event_func_4586();
    if (!group_code_sort_these_using_items_2_chipping_2_1) goto group_code_sort_these_using_items_2_chipping_2_1_end;
    event_func_4587();
    event_func_4588();
    event_func_4589();
    event_func_4590();
    event_func_4591();
    event_func_4592();
    event_func_4593();
    group_code_sort_these_using_items_2_chipping_2_1_end: ;
    event_func_4594();
    if (!group_code_sort_these_using_items_2_digging_2_1) goto group_code_sort_these_using_items_2_digging_2_1_end;
    event_func_4595();
    event_func_4596();
    event_func_4597();
    event_func_4598();
    event_func_4599();
    event_func_4600();
    event_func_4601();
    event_func_4602();
    group_code_sort_these_using_items_2_digging_2_1_end: ;
    event_func_4604();
    if (!group_code_sort_these_using_items_2_cutting_2_1) goto group_code_sort_these_using_items_2_cutting_2_1_end;
    event_func_4605();
    event_func_4606();
    event_func_4607();
    event_func_4608();
    event_func_4609();
    if (!group_code_sort_these_using_items_2_cutting_2_bars_2_1) goto group_code_sort_these_using_items_2_cutting_2_bars_2_1_end;
    group_code_sort_these_using_items_2_cutting_2_bars_2_1_end: ;
    event_func_4610();
    event_func_4611();
    event_func_4612();
    group_code_sort_these_using_items_2_cutting_2_1_end: ;
    event_func_4613();
    if (!group_code_sort_these_using_items_2_unscrewing_2_1) goto group_code_sort_these_using_items_2_unscrewing_2_1_end;
    event_func_4614();
    event_func_4615();
    event_func_4616();
    event_func_4617();
    event_func_4618();
    event_func_4619();
    group_code_sort_these_using_items_2_unscrewing_2_1_end: ;
    event_func_4620();
    if (!group_code_sort_these_using_items_2_weeding_1) goto group_code_sort_these_using_items_2_weeding_1_end;
    event_func_4621();
    event_func_4622();
    event_func_4623();
    event_func_4624();
    event_func_4625();
    group_code_sort_these_using_items_2_weeding_1_end: ;
    event_func_4626();
    if (!group_code_sort_these_using_items_2_cleaning_1) goto group_code_sort_these_using_items_2_cleaning_1_end;
    event_func_4627();
    event_func_4628();
    event_func_4629();
    event_func_4630();
    event_func_4631();
    group_code_sort_these_using_items_2_cleaning_1_end: ;
    event_func_4632();
    if (!group_code_sort_these_using_items_2_browsing_1) goto group_code_sort_these_using_items_2_browsing_1_end;
    event_func_4633();
    event_func_4634();
    event_func_4635();
    event_func_4636();
    group_code_sort_these_using_items_2_browsing_1_end: ;
    event_func_4637();
    if (!group_code_sort_these_using_items_2_reading_1) goto group_code_sort_these_using_items_2_reading_1_end;
    event_func_4638();
    event_func_4639();
    event_func_4640();
    event_func_4641();
    group_code_sort_these_using_items_2_reading_1_end: ;
    event_func_4642();
    event_func_4643();
    if (!group_code_sort_these_using_items_2_roof_travel_2_1) goto group_code_sort_these_using_items_2_roof_travel_2_1_end;
    event_func_4644();
    event_func_4645();
    group_code_sort_these_using_items_2_roof_travel_2_1_end: ;
    event_func_4646();
    event_func_4647();
    event_func_4648();
    event_func_4649();
    event_func_4650();
    event_func_4651();
    event_func_4652();
    event_func_4653();
    event_func_4654();
    event_func_4655();
    event_func_4656();
    event_func_4657();
    if (!group_code_gym_equip_1) goto group_code_gym_equip_1_end;
    event_func_4658();
    event_func_4659();
    event_func_4660();
    event_func_4661();
    event_func_4662();
    event_func_4663();
    event_func_4664();
    event_func_4665();
    if (!group_code_gym_equip_punch_bag_1) goto group_code_gym_equip_punch_bag_1_end;
    event_func_4666();
    event_func_4667();
    event_func_4668();
    event_func_4669();
    event_func_4670();
    event_func_4671();
    event_func_4672();
    event_func_4673();
    event_func_4674();
    event_func_4675();
    group_code_gym_equip_punch_bag_1_end: ;
    if (!group_code_gym_equip_speed_bag_1) goto group_code_gym_equip_speed_bag_1_end;
    event_func_4676();
    event_func_4677();
    event_func_4678();
    event_func_4679();
    event_func_4680();
    event_func_4681();
    event_func_4682();
    event_func_4683();
    event_func_4684();
    event_func_4685();
    group_code_gym_equip_speed_bag_1_end: ;
    if (!group_code_gym_equip_skipping_1) goto group_code_gym_equip_skipping_1_end;
    event_func_4686();
    event_func_4687();
    event_func_4688();
    event_func_4689();
    event_func_4690();
    event_func_4691();
    event_func_4692();
    event_func_4693();
    event_func_4694();
    event_func_4695();
    group_code_gym_equip_skipping_1_end: ;
    if (!group_code_gym_equip_press_ups_1) goto group_code_gym_equip_press_ups_1_end;
    event_func_4696();
    event_func_4697();
    event_func_4698();
    event_func_4699();
    event_func_4700();
    event_func_4701();
    event_func_4702();
    event_func_4703();
    event_func_4704();
    event_func_4705();
    event_func_4706();
    event_func_4707();
    event_func_4708();
    group_code_gym_equip_press_ups_1_end: ;
    if (!group_code_gym_equip_weights_1) goto group_code_gym_equip_weights_1_end;
    event_func_4709();
    event_func_4710();
    event_func_4711();
    event_func_4712();
    event_func_4713();
    event_func_4714();
    event_func_4715();
    event_func_4716();
    event_func_4717();
    event_func_4718();
    event_func_4719();
    event_func_4720();
    event_func_4721();
    event_func_4722();
    group_code_gym_equip_weights_1_end: ;
    if (!group_code_gym_equip_treadmill_1) goto group_code_gym_equip_treadmill_1_end;
    event_func_4723();
    event_func_4724();
    event_func_4725();
    event_func_4726();
    event_func_4727();
    event_func_4728();
    event_func_4729();
    event_func_4730();
    event_func_4731();
    event_func_4732();
    group_code_gym_equip_treadmill_1_end: ;
    event_func_4733();
    event_func_4734();
    event_func_4735();
    event_func_4736();
    event_func_4737();
    event_func_4738();
    event_func_4739();
    event_func_4740();
    event_func_4741();
    event_func_4742();
    event_func_4743();
    event_func_4744();
    event_func_4745();
    group_code_gym_equip_1_end: ;
    if (!group_code_npc_profiles_npc_profile_1) goto group_code_npc_profiles_npc_profile_1_end;
    event_func_4749();
    event_func_4752();
    event_func_4753();
    event_func_4754();
    event_func_4755();
    event_func_4756();
    event_func_4757();
    event_func_4758();
    event_func_4763();
    event_func_4764();
    group_code_npc_profiles_npc_profile_1_end: ;
    event_func_4765();
    event_func_4766();
    event_func_4767();
    event_func_4768();
    event_func_4769();
    event_func_4770();
    event_func_4771();
    event_func_4772();
    event_func_4773();
    event_func_4774();
    event_func_4775();
    event_func_4776();
    event_func_4777();
    event_func_4778();
    event_func_4779();
    event_func_4780();
    event_func_4781();
    event_func_4782();
    event_func_4783();
    event_func_4785();
    event_func_4786();
    event_func_4787();
    event_func_4788();
    event_func_4789();
    event_func_4790();
    event_func_4791();
    event_func_4792();
    event_func_4793();
    event_func_4794();
    if (!group_code_missions_1) goto group_code_missions_1_end;
    event_func_4800();
    event_func_4801();
    event_func_4802();
    group_code_missions_1_end: ;
    event_func_4803();
    event_func_4804();
    if (!group_code_flooding_1) goto group_code_flooding_1_end;
    event_func_4805();
    event_func_4806();
    event_func_4807();
    group_code_flooding_1_end: ;
    if (!group_code_fire_1) goto group_code_fire_1_end;
    event_func_4809();
    event_func_4810();
    event_func_4811();
    event_func_4812();
    event_func_4813();
    event_func_4814();
    group_code_fire_1_end: ;
    if (!group_code_caught_solitary_1) goto group_code_caught_solitary_1_end;
    event_func_4815();
    event_func_4816();
    event_func_4817();
    event_func_4818();
    event_func_4819();
    event_func_4820();
    event_func_4821();
    event_func_4822();
    event_func_4823();
    event_func_4824();
    event_func_4826();
    event_func_4827();
    group_code_caught_solitary_1_end: ;
    event_func_4828();
    if (!group_code_toilet_1) goto group_code_toilet_1_end;
    event_func_4829();
    event_func_4830();
    event_func_4831();
    event_func_4832();
    group_code_toilet_1_end: ;
    if (!group_code_payphone_1) goto group_code_payphone_1_end;
    event_func_4834();
    group_code_payphone_1_end: ;
    event_func_4838();
    event_func_4839();
    event_func_4840();
    event_func_4841();
    event_func_4842();
    event_func_4843();
    event_func_4844();
    event_func_4845();
    event_func_4846();
    event_func_4847();
    if (!group_code_old_distract_1) goto group_code_old_distract_1_end;
    group_code_old_distract_1_end: ;
    event_func_4848();
    event_func_4849();
    event_func_4850();
    group_code_1_end: ;
    if (!group_loops_1) goto group_loops_1_end;
    group_loops_1_end: ;
    if (!group_align_color_1) goto group_align_color_1_end;
    group_align_color_1_end: ;
    event_func_4851();
    event_func_4852();
    event_func_4853();
    if (!group_set_item_graphic_1) goto group_set_item_graphic_1_end;
    group_set_item_graphic_1_end: ;
    event_func_4854();
    event_func_4855();
    if (!group_guard_towers_1) goto group_guard_towers_1_end;
    event_func_4856();
    event_func_4857();
    group_guard_towers_1_end: ;
    event_func_4858();
    event_func_4859();
    if (!group_saving_1) goto group_saving_1_end;
    event_func_4860();
    event_func_4861();
    event_func_4862();
    group_saving_1_end: ;
    event_func_4863();
    event_func_4864();
    event_func_4865();
    event_func_4866();
    event_func_4867();
    event_func_4868();
    event_func_4869();
    event_func_4870();
    event_func_4871();
    event_func_4872();
    event_func_4873();
    event_func_4874();
    if (!group_extra_npcs_warden_1) goto group_extra_npcs_warden_1_end;
    event_func_4875();
    event_func_4876();
    event_func_4877();
    event_func_4878();
    event_func_4879();
    event_func_4880();
    event_func_4881();
    event_func_4882();
    event_func_4883();
    event_func_4884();
    group_extra_npcs_warden_1_end: ;
    if (!group_extra_npcs_medic_1) goto group_extra_npcs_medic_1_end;
    event_func_4885();
    event_func_4886();
    event_func_4887();
    event_func_4888();
    event_func_4889();
    event_func_4890();
    group_extra_npcs_medic_1_end: ;
    if (!group_extra_npcs_job_staff_1) goto group_extra_npcs_job_staff_1_end;
    event_func_4891();
    event_func_4892();
    event_func_4893();
    event_func_4894();
    event_func_4895();
    event_func_4896();
    group_extra_npcs_job_staff_1_end: ;
    event_func_4897();
    if (!group_extra_npcs_visitors_1) goto group_extra_npcs_visitors_1_end;
    event_func_4898();
    event_func_4899();
    event_func_4900();
    event_func_4901();
    event_func_4902();
    event_func_4903();
    event_func_4904();
    event_func_4905();
    event_func_4906();
    event_func_4907();
    event_func_4908();
    event_func_4909();
    event_func_4910();
    event_func_4911();
    group_extra_npcs_visitors_1_end: ;
    event_func_4912();
    event_func_4913();
    event_func_4914();
    event_func_4915();
    event_func_4916();
    if (!group_cheats_debug_mode_1) goto group_cheats_debug_mode_1_end;
    if (!group_cheats_debug_mode_box_1) goto group_cheats_debug_mode_box_1_end;
    group_cheats_debug_mode_box_1_end: ;
    group_cheats_debug_mode_1_end: ;
    event_func_4917();
    event_func_4918();
    event_func_4919();
    event_func_4920();
    event_func_4921();
    event_func_4922();
    event_func_4923();
    event_func_4924();
    event_func_4925();
    event_func_4926();
    event_func_4927();
    event_func_4928();
    event_func_4929();
    event_func_4930();
    event_func_4931();
    event_func_4932();
    event_func_4933();
    event_func_4934();
    event_func_4935();
    if (!group_steamworks_1) goto group_steamworks_1_end;
    event_func_4937();
    event_func_4938();
    event_func_4939();
    group_steamworks_1_end: ;
    event_func_4940();
    event_func_4941();
    event_func_4942();
    event_func_4943();
    event_func_4944();
}
void Frames::handle_frame_7_pre_events()
{
    event_func_3319();
    event_func_3539();
    event_func_4205();
    event_func_4206();
    event_func_4214();
    event_func_4215();
    event_func_4248();
    event_func_4258();
    event_func_4259();
    event_func_4262();
    event_func_4263();
    event_func_4264();
    event_func_4342();
    event_func_4357();
    event_func_4360();
    event_func_4374();
    event_func_4379();
    event_func_4380();
    event_func_4381();
    event_func_4382();
    event_func_4383();
    event_func_4384();
    event_func_4387();
    event_func_4406();
    event_func_4407();
    event_func_4418();
    event_func_4438();
    event_func_4441();
    event_func_4461();
    event_func_4462();
    event_func_4465();
    event_func_4466();
    event_func_4467();
    event_func_4468();
    event_func_4469();
    event_func_4470();
    event_func_4471();
    event_func_4473();
    event_func_4474();
    event_func_4475();
    event_func_4476();
    event_func_4482();
    event_func_4483();
    event_func_4518();
    event_func_4519();
    event_func_4520();
    event_func_4521();
    event_func_4523();
    event_func_4524();
    event_func_4525();
    event_func_4530();
    event_func_4533();
    event_func_4535();
    event_func_4536();
    event_func_4537();
    event_func_4539();
    event_func_4543();
    event_func_4750();
    event_func_4751();
    event_func_4760();
    event_func_4762();
    event_func_4797();
    event_func_4808();
    event_func_4837();
    event_func_3233();
    event_func_3309();
    event_func_3311();
    event_func_3312();
    event_func_3313();
    event_func_3314();
    event_func_3315();
    event_func_3316();
    event_func_3317();
    event_func_3318();
    event_func_3320();
    event_func_3321();
    event_func_3327();
    event_func_3328();
    event_func_3361();
    event_func_3362();
    event_func_3540();
    event_func_3817();
    event_func_4207();
    event_func_4218();
    event_func_4222();
    event_func_4224();
    event_func_4226();
    event_func_4247();
    event_func_4253();
    event_func_4257();
    event_func_4269();
    event_func_4271();
    event_func_4277();
    event_func_4278();
    event_func_4283();
    event_func_4284();
    event_func_4295();
    event_func_4296();
    event_func_4301();
    event_func_4302();
    event_func_4305();
    event_func_4306();
    event_func_4308();
    event_func_4309();
    event_func_4314();
    event_func_4317();
    event_func_4318();
    event_func_4321();
    event_func_4332();
    event_func_4333();
    event_func_4334();
    event_func_4335();
    event_func_4336();
    event_func_4337();
    event_func_4338();
    event_func_4339();
    event_func_4340();
    event_func_4343();
    event_func_4344();
    event_func_4345();
    event_func_4346();
    event_func_4347();
    event_func_4348();
    event_func_4349();
    event_func_4350();
    event_func_4351();
    event_func_4352();
    event_func_4353();
    event_func_4354();
    event_func_4355();
    event_func_4356();
    event_func_4359();
    event_func_4361();
    event_func_4362();
    event_func_4363();
    event_func_4373();
    event_func_4375();
    event_func_4376();
    event_func_4377();
    event_func_4378();
    event_func_4385();
    event_func_4386();
    event_func_4388();
    event_func_4389();
    event_func_4390();
    event_func_4391();
    event_func_4392();
    event_func_4393();
    event_func_4394();
    event_func_4395();
    event_func_4396();
    event_func_4397();
    event_func_4398();
    event_func_4399();
    event_func_4400();
    event_func_4401();
    event_func_4402();
    event_func_4403();
    event_func_4404();
    event_func_4405();
    event_func_4409();
    event_func_4410();
    event_func_4411();
    event_func_4412();
    event_func_4413();
    event_func_4414();
    event_func_4415();
    event_func_4416();
    event_func_4417();
    event_func_4420();
    event_func_4421();
    event_func_4423();
    event_func_4424();
    event_func_4426();
    event_func_4427();
    event_func_4429();
    event_func_4430();
    event_func_4432();
    event_func_4433();
    event_func_4434();
    event_func_4435();
    event_func_4436();
    event_func_4437();
    event_func_4440();
    event_func_4442();
    event_func_4443();
    event_func_4445();
    event_func_4446();
    event_func_4447();
    event_func_4448();
    event_func_4449();
    event_func_4451();
    event_func_4452();
    event_func_4453();
    event_func_4454();
    event_func_4455();
    event_func_4456();
    event_func_4457();
    event_func_4458();
    event_func_4459();
    event_func_4463();
    event_func_4464();
    event_func_4477();
    event_func_4478();
    event_func_4479();
    event_func_4480();
    event_func_4481();
    event_func_4484();
    event_func_4485();
    event_func_4486();
    event_func_4487();
    event_func_4488();
    event_func_4489();
    event_func_4490();
    event_func_4491();
    event_func_4492();
    event_func_4493();
    event_func_4494();
    event_func_4495();
    event_func_4496();
    event_func_4497();
    event_func_4498();
    event_func_4499();
    event_func_4500();
    event_func_4501();
    event_func_4502();
    event_func_4503();
    event_func_4504();
    event_func_4505();
    event_func_4506();
    event_func_4507();
    event_func_4508();
    event_func_4509();
    event_func_4510();
    event_func_4511();
    event_func_4512();
    event_func_4513();
    event_func_4514();
    event_func_4515();
    event_func_4516();
    event_func_4517();
    event_func_4522();
    event_func_4526();
    event_func_4527();
    event_func_4531();
    event_func_4532();
    event_func_4534();
    event_func_4538();
    event_func_4541();
    event_func_4542();
    event_func_4544();
    event_func_4545();
    event_func_4546();
    event_func_4547();
    event_func_4548();
    event_func_4549();
    event_func_4550();
    event_func_4551();
    event_func_4552();
    event_func_4553();
    event_func_4554();
    event_func_4746();
    event_func_4747();
    event_func_4748();
    event_func_4759();
    event_func_4761();
    event_func_4795();
    event_func_4796();
    event_func_4798();
    event_func_4799();
    event_func_4825();
    event_func_4833();
    event_func_4835();
    event_func_4836();
}
// Function purpose: generated callback event_func_4945 processes event block(s) 1_6. Actions/conditions: 1_6:
//        sets ITEM_COUNT to 261+1; sets FAV_STEALCHAR_COUNT to 15; sets FAV_BEAT_COUNT to 23; plus 12 more actions.
void Frames::event_func_4945()
{
    // event 1_6 : sets ITEM_COUNT to 261+1; sets FAV_STEALCHAR_COUNT to 15; sets FAV_BEAT_COUNT to 23; plus 12 more actions
    {
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(52, str_item_count_527, 261+1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(432, str_fav_stealchar_count_1274, 15);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(393, str_fav_beat_count_1197, 23);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(506, str_fav_give_count_1398, 3);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(963, str_fav_distract_count_2323, 7);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(491, str_boo_1370, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(39, str_eteam_238, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_dtaf_137, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(8, str_sss_239, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(298, str_feb16_1043, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(42, str_ccl_130, 0);
        ((Active*)get_instance(tempplant_426_instances))->set_layer(2-1);
    }
    event_1_6_end: ;
}
// Function purpose: generated callback event_func_4946 processes event block(s) 2_6. Actions/conditions: 2_6:
//        sets LastNotice to 0; sets Pos_Laundry to 0; sets Pos_Woodshop to 0; plus 21 more actions.
void Frames::event_func_4946()
{
    // event 2_6 : sets LastNotice to 0; sets Pos_Laundry to 0; sets Pos_Woodshop to 0; plus 21 more actions
    {
        
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(379, str_lastnotice_1176, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(117, str_pos_laundry_679, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(125, str_pos_woodshop_687, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(127, str_pos_metalshop_689, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(602, str_track_dug_1576, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(455, str_track_chipped_1323, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(239, str_track_cuts_865, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(603, str_track_downed_1578, 0);
        loadingCurtain_instances.clear_selection();
        for (ObjectIterator it(loadingCurtain_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(10);
        }
        for (ObjectIterator it(loadingCurtain_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(0, 0);
            pos_end_2_6_0: ;
        }
        {
            ((Active*)get_instance(screenTint_instances))->set_global_position(0, 0);
            pos_end_2_6_1: ;
        }
        ((Active*)get_instance(screenTint_instances))->set_blend_color(14444374);
        ((Active*)get_instance(screenTint_instances))->alterables->values.set(0, 120);
        ((LayerObject*)get_instance(layerobject_37_instances))->show_layer(1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(30, str_illegaloutfits_493, str_3_38_211_228_239_2324);
        media.set_channel_volume(1-1, global_values->get(10));
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->flags.enable(1);
            ((SystemBox*)*it)->set_fill(Color(make_color_int(36, 36, 36)));
            ((SystemBox*)*it)->blend_color.set(Color(255, 255, 255));
        }
    CalcRect::set_font(((SystemBox*)get_single(activesystembox_450_instances, default_systembox_instance))->get_font_name(), 12, 0);
    CalcRect::set_max_width(160);
    }
    event_2_6_end: ;
}
// Function purpose: generated callback event_func_4947 processes event block(s) 3_6. Actions/conditions: 3_6:
//        updates game state with CalcRect::set_font(((SystemBox*)get_instance(activesystembox_450_instances,
//        default_systembox_instan.
void Frames::event_func_4947()
{
    // event 3_6 : updates game state with CalcRect::set_font(((SystemBox*)get_instance(activesystembox_450_instances, default_systembox_instan
    {
        if (!((global_strings->get(6)) == (str_rus_7))) goto event_3_6_end;
    CalcRect::set_font(((SystemBox*)get_instance(activesystembox_450_instances, default_systembox_instance))->get_font_name(), 14, 0);
    }
    event_3_6_end: ;
}
// Function purpose: generated callback event_func_4948 processes event block(s) 5_6. Actions/conditions: 5_6:
//        decrypts a save-data file; loads a game or save-data file; encrypts a save-data file.
void Frames::event_func_4948()
{
    // event 5_6 : decrypts a save-data file; loads a game or save-data file; encrypts a save-data file
    {
    BlowfishObject::decrypt_file(str_mothking_99, File::get_appdata_directory()+str_the_escapists_global_dat_300);
        ((INI*)get_instance(globals_127_instances))->load_file(File::get_appdata_directory()+str_the_escapists_global_dat_300, false, false, true);
    BlowfishObject::encrypt_file(str_mothking_99, File::get_appdata_directory()+str_the_escapists_global_dat_300);
    }
    event_5_6_end: ;
}
// Function purpose: generated callback event_func_4949 processes event block(s) 6_6. Actions/conditions: 6_6:
//        decrypts a save-data file; loads a game or save-data file; encrypts a save-data file.
void Frames::event_func_4949()
{
    // event 6_6 : decrypts a save-data file; loads a game or save-data file; encrypts a save-data file
    {
        if (!((global_values->get(11)) == (1))) goto event_6_6_end;
    BlowfishObject::decrypt_file(str_mothking_99, File::get_appdata_directory()+str_the_escapists_save_190+number_to_string(global_values->get(14))+str_save_dat_211);
        ((INI*)get_instance(saving_350_instances))->load_file(File::get_appdata_directory()+str_the_escapists_save_190+number_to_string(global_values->get(14))+str_save_dat_211, false, false, true);
    BlowfishObject::encrypt_file(str_mothking_99, File::get_appdata_directory()+str_the_escapists_save_190+number_to_string(global_values->get(14))+str_save_dat_211);
    }
    event_6_6_end: ;
}
// Function purpose: generated callback event_func_4950 processes event block(s) 7_6. Actions/conditions: 7_6:
//        decrypts a save-data file; loads a game or save-data file; encrypts a save-data file.
void Frames::event_func_4950()
{
    // event 7_6 : decrypts a save-data file; loads a game or save-data file; encrypts a save-data file
    {
        if (!(group_load_map_from_file_1)) goto event_7_6_end;
        if (!((global_values->get(18)) != (2))) goto event_7_6_end;
    BlowfishObject::decrypt_file(str_mothking_99, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(913, str_mapdir_131)+global_strings->get(0)+str_map_344);
        ((INI*)get_instance(mapload_322_instances))->load_file(((AssociateArray*)get_instance(gameVariables_instances))->get_string(913, str_mapdir_131)+global_strings->get(0)+str_map_344, true, false, true);
    BlowfishObject::encrypt_file(str_mothking_99, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(913, str_mapdir_131)+global_strings->get(0)+str_map_344);
        {
            loop_grab_map_data_running = true;
            int times = int(1);
            loop_grab_map_data_index = 0;
            while (loop_grab_map_data_index < times) {
                loop_grab_map_data_6();
                if (!loop_grab_map_data_running) break;
                loop_grab_map_data_index++;
            }
        }
    }
    event_7_6_end: ;
}
// Function purpose: generated callback event_func_4951 processes event block(s) 8_6. Actions/conditions: 8_6:
//        loads a game or save-data file.
void Frames::event_func_4951()
{
    // event 8_6 : loads a game or save-data file
    {
        if (!(group_load_map_from_file_1)) goto event_8_6_end;
        if (!((global_values->get(18)) == (2))) goto event_8_6_end;
        ((INI*)get_instance(newmapini_468_instances))->load_file(((AssociateArray*)get_instance(gameVariables_instances))->get_string(913, str_mapdir_131)+global_strings->get(0)+str_cmap_302);
        {
            loop_grab_map_data_running = true;
            int times = int(1);
            loop_grab_map_data_index = 0;
            while (loop_grab_map_data_index < times) {
                loop_grab_map_data_6();
                if (!loop_grab_map_data_running) break;
                loop_grab_map_data_index++;
            }
        }
    }
    event_8_6_end: ;
}
// Function purpose: generated callback event_func_4952 processes event block(s) 21_6. Actions/conditions:
//        21_6: sets NEW_TILES to 0.
void Frames::event_func_4952()
{
    // event 21_6 : sets NEW_TILES to 0
    {
        if (!(group_load_map_from_file_1)) goto event_21_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(56, str_new_tiles_554, 0);
        {
            loop_get_img_running = true;
            int times = int(1);
            loop_get_img_index = 0;
            while (loop_get_img_index < times) {
                loop_get_img_6();
                if (!loop_get_img_running) break;
                loop_get_img_index++;
            }
        }
    }
    event_21_6_end: ;
}
// Function purpose: generated callback event_func_4953 processes event block(s) 27_6. Actions/conditions:
//        27_6: checks the event-specific game state condition is met; this handler gates a game event without a
//        direct value/object action.
void Frames::event_func_4953()
{
    // event 27_6 : checks the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_load_map_from_file_1)) goto event_27_6_end;
        {
            loop_map_vals_running = true;
            int times = int(1);
            loop_map_vals_index = 0;
            while (loop_map_vals_index < times) {
                loop_map_vals_6();
                if (!loop_map_vals_running) break;
                loop_map_vals_index++;
            }
        }
    }
    event_27_6_end: ;
}
// Function purpose: generated callback event_func_4954 processes event block(s) 46_6. Actions/conditions:
//        46_6: clears the current selection or contents; clears the current selection or contents; sets a stored
//        numeric value; plus 6 more actions.
void Frames::event_func_4954()
{
    // event 46_6 : clears the current selection or contents; clears the current selection or contents; sets a stored numeric value; plus 6 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_46_6_end;
        ((ArrayObject*)get_instance(groundTiles_instances))->clear();
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(str_pos_635+((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478), -1);
        warden_392_instances.clear_selection();
        for (ObjectIterator it(warden_392_instances); !it.end(); ++it) {
            ((ListObject*)*it)->destroy();
        }
        {
            loop_setjobpayout_running = true;
            int times = int(1);
            loop_setjobpayout_index = 0;
            while (loop_setjobpayout_index < times) {
                loop_setjobpayout_6();
                if (!loop_setjobpayout_running) break;
                loop_setjobpayout_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(721, str_mapheight_1897, height/MathHelper()/16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(490, str_maploop_1369, 0);
    }
    event_46_6_end: ;
}
// Function purpose: generated callback event_func_4955 processes event block(s) 151_6. Actions/conditions:
//        151_6: splits saved text into fields; sets Zones_KitchenTopX to
//        string_to_number(stringtokenizer_81->get(0)); sets Zones_KitchenTopY to
//        string_to_number(stringtokenizer_81->get(1)); plus 40 more actions.
void Frames::event_func_4955()
{
    // event 151_6 : splits saved text into fields; sets Zones_KitchenTopX to string_to_number(stringtokenizer_81->get(0)); sets Zones_KitchenTopY to string_to_number(stringtokenizer_81->get(1)); plus 40 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_151_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(192, str_zones_kitchen_780), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(70, str_zones_kitchentopx_569, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(72, str_zones_kitchentopy_571, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(71, str_zones_kitchenbottomx_570, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(73, str_zones_kitchenbottomy_572, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(189, str_zones_gym_774), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(842, str_zones_gymtopx_2022, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(843, str_zones_gymtopy_2023, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(844, str_zones_gymbottomx_2024, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(845, str_zones_gymbottomy_2025, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(186, str_zones_rollcall_767), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(786, str_zones_rollcalltopx_1966, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(787, str_zones_rollcalltopy_1967, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(788, str_zones_rollcallbottomx_1968, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(789, str_zones_rollcallbottomy_1969, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(190, str_zones_showers_776), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(846, str_zones_showerstopx_2026, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(847, str_zones_showerstopy_2027, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(848, str_zones_showersbottomx_2028, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(849, str_zones_showersbottomy_2029, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(193, str_zones_laundry_781), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(66, str_zones_laundrytopx_565, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(68, str_zones_laundrytopy_567, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(67, str_zones_laundrybottomx_566, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(69, str_zones_laundrybottomy_568, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(188, str_zones_canteen_772), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(3, str_zones_canteentopx_438, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(5, str_zones_canteentopy_440, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(4, str_zones_canteenbottomx_439, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(6, str_zones_canteenbottomy_441, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(198, str_zones_janitor_786), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(834, str_zones_janitortopx_2014, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(835, str_zones_janitortopy_2015, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(836, str_zones_janitorbottomx_2016, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(837, str_zones_janitorbottomy_2017, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(199, str_zones_gardening_787), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(838, str_zones_gardeningtopx_2018, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(839, str_zones_gardeningtopy_2019, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(840, str_zones_gardeningbottomx_2020, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(841, str_zones_gardeningbottomy_2021, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
    }
    event_151_6_end: ;
}
// Function purpose: generated callback event_func_4956 processes event block(s) 152_6. Actions/conditions:
//        152_6: splits saved text into fields; sets Zones_SHUTopX to string_to_number(stringtokenizer_81->get(0));
//        sets Zones_SHUTopY to string_to_number(stringtokenizer_81->get(1)); plus 25 more actions.
void Frames::event_func_4956()
{
    // event 152_6 : splits saved text into fields; sets Zones_SHUTopX to string_to_number(stringtokenizer_81->get(0)); sets Zones_SHUTopY to string_to_number(stringtokenizer_81->get(1)); plus 25 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_152_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(191, str_zones_shu_778), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(850, str_zones_shutopx_2030, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(851, str_zones_shutopy_2031, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(852, str_zones_shubottomx_2032, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(853, str_zones_shubottomy_2033, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(194, str_zones_woodshop_782), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(58, str_zones_woodshoptopx_557, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(60, str_zones_woodshoptopy_559, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(59, str_zones_woodshopbottomx_558, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(61, str_zones_woodshopbottomy_560, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(196, str_zones_metalshop_784), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(62, str_zones_metalshoptopx_561, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(64, str_zones_metalshoptopy_563, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(63, str_zones_metalshopbottomx_562, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(65, str_zones_metalshopbottomy_564, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(195, str_zones_tailorshop_783), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(74, str_zones_tailorshoptopx_573, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(76, str_zones_tailorshoptopy_575, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(75, str_zones_tailorshopbottomx_574, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(77, str_zones_tailorshopbottomy_576, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(197, str_zones_deliveries_785), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(866, str_zones_deliveriestopx_2046, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(867, str_zones_deliveriestopy_2047, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(868, str_zones_deliveriesbottomx_2048, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(869, str_zones_deliveriesbottomy_2049, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
    }
    event_152_6_end: ;
}
// Function purpose: generated callback event_func_4957 processes event block(s) 153_6. Actions/conditions:
//        153_6: splits saved text into fields; sets Zones_YourCellTopX to
//        string_to_number(stringtokenizer_81->get(0)); sets Zones_YourCellTopY to
//        string_to_number(stringtokenizer_81->get(1)); plus 55 more actions.
void Frames::event_func_4957()
{
    // event 153_6 : splits saved text into fields; sets Zones_YourCellTopX to string_to_number(stringtokenizer_81->get(0)); sets Zones_YourCellTopY to string_to_number(stringtokenizer_81->get(1)); plus 55 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_153_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(187, str_zones_yourcell_770), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(759, str_zones_yourcelltopx_1937, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(761, str_zones_yourcelltopy_1939, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(760, str_zones_yourcellbottomx_1938, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(762, str_zones_yourcellbottomy_1940, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(203, str_zones_cells1_794), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(266, str_zones_cells1topx_923, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(267, str_zones_cells1topy_924, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(268, str_zones_cells1bottomx_925, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(269, str_zones_cells1bottomy_926, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(204, str_zones_cells2_796), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(270, str_zones_cells2topx_927, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(271, str_zones_cells2topy_928, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(272, str_zones_cells2bottomx_929, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(273, str_zones_cells2bottomy_930, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(205, str_zones_cells3_798), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(274, str_zones_cells3topx_931, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(275, str_zones_cells3topy_932, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(276, str_zones_cells3bottomx_933, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(277, str_zones_cells3bottomy_934, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(206, str_zones_cells4_800), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(278, str_zones_cells4topx_935, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(279, str_zones_cells4topy_936, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(280, str_zones_cells4bottomx_937, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(281, str_zones_cells4bottomy_938, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(207, str_zones_cells5_802), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(790, str_zones_cells5topx_1970, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(791, str_zones_cells5topy_1971, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(792, str_zones_cells5bottomx_1972, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(793, str_zones_cells5bottomy_1973, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(208, str_zones_cells6_804), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(794, str_zones_cells6topx_1974, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(795, str_zones_cells6topy_1975, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(796, str_zones_cells6bottomx_1976, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(797, str_zones_cells6bottomy_1977, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(209, str_zones_cells7_806), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(798, str_zones_cells7topx_1978, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(799, str_zones_cells7topy_1979, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(800, str_zones_cells7bottomx_1980, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(801, str_zones_cells7bottomy_1981, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(210, str_zones_cells8_808), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(802, str_zones_cells8topx_1982, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(803, str_zones_cells8topy_1983, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(804, str_zones_cells8bottomx_1984, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(805, str_zones_cells8bottomy_1985, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(211, str_zones_cells9_810), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(806, str_zones_cells9topx_1986, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(807, str_zones_cells9topy_1987, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(808, str_zones_cells9bottomx_1988, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(809, str_zones_cells9bottomy_1989, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(212, str_zones_cells10_812), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(810, str_zones_cells10topx_1990, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(811, str_zones_cells10topy_1991, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(812, str_zones_cells10bottomx_1992, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(813, str_zones_cells10bottomy_1993, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
    }
    event_153_6_end: ;
}
// Function purpose: generated callback event_func_4958 processes event block(s) 154_6. Actions/conditions:
//        154_6: splits saved text into fields; sets Zones_Safe1TopX to
//        string_to_number(stringtokenizer_81->get(0))-8; sets Zones_Safe1TopY to
//        string_to_number(stringtokenizer_81->get(1))-8; plus 15 more actions.
void Frames::event_func_4958()
{
    // event 154_6 : splits saved text into fields; sets Zones_Safe1TopX to string_to_number(stringtokenizer_81->get(0))-8; sets Zones_Safe1TopY to string_to_number(stringtokenizer_81->get(1))-8; plus 15 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_154_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(200, str_zones_safe1_788), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(854, str_zones_safe1topx_2034, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0))-8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(855, str_zones_safe1topy_2035, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1))-8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(856, str_zones_safe1bottomx_2036, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2))+8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(857, str_zones_safe1bottomy_2037, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3))+8);
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(201, str_zones_safe2_790), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(858, str_zones_safe2topx_2038, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0))-8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(859, str_zones_safe2topy_2039, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1))-8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(860, str_zones_safe2bottomx_2040, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2))+8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(861, str_zones_safe2bottomy_2041, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3))+8);
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(202, str_zones_safe3_792), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(862, str_zones_safe3topx_2042, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0))-8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(863, str_zones_safe3topy_2043, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1))-8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(864, str_zones_safe3bottomx_2044, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2))+8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(865, str_zones_safe3bottomy_2045, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3))+8);
    }
    event_154_6_end: ;
}
// Function purpose: generated callback event_func_4959 processes event block(s) 2647_6. Actions/conditions:
//        2647_6: sets Journal to 1.
void Frames::event_func_4959()
{
    // event 2647_6 : sets Journal to 1
    {
        if (!(group_code_1)) goto event_2647_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(742, str_journal_1402, 1);
    }
    event_2647_6_end: ;
}
// Function purpose: generated callback event_func_4960 processes event block(s) 4382_6. Actions/conditions:
//        4382_6: checks the event-specific game state condition is met; this handler gates a game event without a
//        direct value/object action.
void Frames::event_func_4960()
{
    // event 4382_6 : checks the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_guard_towers_1)) goto event_4382_6_end;
        {
            loop_connect_towers_running = true;
            int times = int(towerguard_342_instances.size());
            loop_connect_towers_index = 0;
            while (loop_connect_towers_index < times) {
                loop_connect_towers_6();
                if (!loop_connect_towers_running) break;
                loop_connect_towers_index++;
            }
        }
    }
    event_4382_6_end: ;
}
// Function purpose: generated callback event_func_4961 processes event block(s) 4593_6. Actions/conditions:
//        4593_6: checks the event-specific game state condition is met; this handler gates a game event without a
//        direct value/object action.
void Frames::event_func_4961()
{
    // event 4593_6 : checks the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!((global_values->get(16)) == (1))) goto event_4593_6_end;
        if (!group_steamworks_1) {
            group_steamworks_1 = true;
        }
    }
    event_4593_6_end: ;
}
