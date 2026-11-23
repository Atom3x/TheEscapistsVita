#include "vitaframetime.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_3264 processes event block(s) 634_6. Actions/conditions:
//        634_6: sets the selected object's numeric value to 350; sets SpeakText to Misc entry 50.
void Frames::event_func_3264()
{
    // event 634_6 : sets the selected object's numeric value to 350; sets SpeakText to Misc entry 50
    {
        if (!(group_code_1 && group_code_dlc_alcatraz_1)) goto event_634_6_end;
        playerBase_instances.clear_selection();
        if (!((objects_in_zone(playerBase_instances, 1600, 672, 1632, 720)) > (0))) goto event_634_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(219, str_cash_11)) < (250))) goto event_634_6_end;
        alcaboat_459_instances.clear_selection();
        for (ObjectIterator it(alcaboat_459_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!alcaboat_459_instances.has_selection()) goto event_634_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_634_6_end;
        for (ObjectIterator it(alcaboat_459_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 350);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_50_1924));
        {
            loop_alcaboat_speak_running = true;
            int times = int(1);
            loop_alcaboat_speak_index = 0;
            while (loop_alcaboat_speak_index < times) {
                loop_alcaboat_speak_6();
                if (!loop_alcaboat_speak_running) break;
                loop_alcaboat_speak_index++;
            }
        }
    }
    event_634_6_end: ;
}
// Function purpose: generated callback event_func_3265 processes event block(s) 635_6. Actions/conditions:
//        635_6: changes a stored game value.
void Frames::event_func_3265()
{
    VITA_LEGACY_EVENT();
    // event 635_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_dlc_alcatraz_1)) goto event_635_6_end;
        alcaboat_459_instances.clear_selection();
        for (ObjectIterator it(alcaboat_459_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!alcaboat_459_instances.has_selection()) goto event_635_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_635_6_end;
        for (ObjectIterator it(alcaboat_459_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 1);
        }
    }
    event_635_6_end: ;
}
// Function purpose: generated callback event_func_3266 processes event block(s) 636_6. Actions/conditions:
//        636_6: sets eTeam to 1; sets the selected object's direction to 24; sets the object's animation to 5.
void Frames::event_func_3266()
{
    // event 636_6 : sets eTeam to 1; sets the selected object's direction to 24; sets the object's animation to 5
    {
        if (!(group_code_1 && group_code_dlc_eteam_1)) goto event_636_6_end;
        if (!group_check_group_code_dlc_eteam_1_0) goto event_636_6_end;
        group_check_group_code_dlc_eteam_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(39, str_eteam_238, 1);
        {
            loop_setup_eteam_running = true;
            int times = int(1);
            loop_setup_eteam_index = 0;
            while (loop_setup_eteam_index < times) {
                loop_setup_eteam_6();
                if (!loop_setup_eteam_running) break;
                loop_setup_eteam_index++;
            }
        }
        table2_308_instances.clear_selection();
        for (ObjectIterator it(table2_308_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        desks_305_instances.clear_selection();
        for (ObjectIterator it(desks_305_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        canteenchair_312_instances.clear_selection();
        for (ObjectIterator it(canteenchair_312_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
    }
    event_636_6_end: ;
}
// Function purpose: generated callback event_func_3267 processes event block(s) 649_6. Actions/conditions:
//        649_6: sets the selected object's visibility to true; sets the object's animation to 29; sets the selected
//        object's direction to 28; plus 9 more actions.
void Frames::event_func_3267()
{
    // event 649_6 : sets the selected object's visibility to true; sets the object's animation to 29; sets the selected object's direction to 28; plus 9 more actions
    {
        if (!(group_code_1 && group_code_dlc_eteam_1)) goto event_649_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(254, str_t_day_902)) == (1))) goto event_649_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (7))) goto event_649_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(522, str_t_min_1422)) == (55))) goto event_649_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_649_6_end;
        if (once_condition_649_6) goto event_649_6_end;
        once_condition_649_6 = true;
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(29);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(28);
        FrameObject * single_instance_649_6_0; single_instance_649_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -112, parent->y + -70), parent->layer);
                if (single_instance_649_6_0 == NULL)
                    single_instance_649_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_649_6_0))->blend_color.set(Color(0, 63, 161));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_escteam_614, str_welcome_1925));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__198));
        ((Text*)((Text*)single_instance_649_6_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        media.play_id(SOUND_OPEN_5, 1-1);
        {
            loop_letter_eteam_running = true;
            int times = int(1);
            loop_letter_eteam_index = 0;
            while (loop_letter_eteam_index < times) {
                loop_letter_eteam_6();
                if (!loop_letter_eteam_running) break;
                loop_letter_eteam_index++;
            }
        }
    }
    event_649_6_end: ;
}
// Function purpose: generated callback event_func_3268 processes event block(s) 651_6. Actions/conditions:
//        651_6: checks scene is active; game state T_hour; game state T_min; skips if dialog is open; this handler
//        gates a game event without a direct value/object action.
void Frames::event_func_3268()
{
    // event 651_6 : checks scene is active; game state T_hour; game state T_min; skips if dialog is open; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_dlc_eteam_1)) goto event_651_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (7))) goto event_651_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(522, str_t_min_1422)) == (59))) goto event_651_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_651_6_end;
        if (frame_time - restrict_651_6 < 1.0) goto event_651_6_end;
        restrict_651_6 = frame_time;
        {
            loop_et_guard_equip_running = true;
            int times = int(guardBase_instances.size());
            loop_et_guard_equip_index = 0;
            while (loop_et_guard_equip_index < times) {
                loop_et_guard_equip_6();
                if (!loop_et_guard_equip_running) break;
                loop_et_guard_equip_index++;
            }
        }
    }
    event_651_6_end: ;
}
// Function purpose: generated callback event_func_3269 processes event block(s) 653_6. Actions/conditions:
//        653_6: sets DTAF to 1.
void Frames::event_func_3269()
{
    // event 653_6 : sets DTAF to 1
    {
        if (!(group_code_1 && group_code_dlc_dtaf_1)) goto event_653_6_end;
        if (!group_check_group_code_dlc_dtaf_1_0) goto event_653_6_end;
        group_check_group_code_dlc_dtaf_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_dtaf_137, 1);
        {
            loop_setup_dtaf_running = true;
            int times = int(1);
            loop_setup_dtaf_index = 0;
            while (loop_setup_dtaf_index < times) {
                loop_setup_dtaf_6();
                if (!loop_setup_dtaf_running) break;
                loop_setup_dtaf_index++;
            }
        }
    }
    event_653_6_end: ;
}
// Function purpose: generated callback event_func_3270 processes event block(s) 674_6. Actions/conditions:
//        674_6: adds a pathfinding obstacle; }; disables flag 987 (inmate gym-training state) on the selected object;
//        draws the selected image or tile; plus 1 more actions.
void Frames::event_func_3270()
{
    // event 674_6 : adds a pathfinding obstacle; }; disables flag 987 (inmate gym-training state) on the selected object; draws the selected image or tile; plus 1 more actions
    {
        if (!(group_code_1 && group_code_dlc_dtaf_1)) goto event_674_6_end;
        dtafobjects_487_instances.clear_selection();
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(987))) { it.deselect(); continue; }
        }
        if (!dtafobjects_487_instances.has_selection()) goto event_674_6_end;
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindinginmates_191_instances));
            for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
    planner->add_obstacle(((Active*)*it));        }
        }
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindingguards_247_instances));
            for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
    planner->add_obstacle(((Active*)*it));        }
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(987);
            ((Active*)*it)->paste(1);
            ((Active*)*it)->destroy();
        }
    }
    event_674_6_end: ;
}
// Function purpose: generated callback event_func_3271 processes event block(s) 675_6. Actions/conditions:
//        675_6: sets the selected object's visibility to true; sets the object's animation to 29; sets the selected
//        object's direction to 30; plus 10 more actions.
void Frames::event_func_3271()
{
    // event 675_6 : sets the selected object's visibility to true; sets the object's animation to 29; sets the selected object's direction to 30; plus 10 more actions
    {
        if (!(group_code_1 && group_code_dlc_dtaf_1)) goto event_675_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(254, str_t_day_902)) == (1))) goto event_675_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (7))) goto event_675_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(522, str_t_min_1422)) == (55))) goto event_675_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_675_6_end;
        if (once_condition_675_6) goto event_675_6_end;
        once_condition_675_6 = true;
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(29);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(30);
        FrameObject * single_instance_675_6_0; single_instance_675_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -112, parent->y + -70), parent->layer);
                if (single_instance_675_6_0 == NULL)
                    single_instance_675_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_675_6_0))->blend_color.set(Color(0, 63, 161));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_dtaf_137, str_welcome_1925));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__198));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str_name_693, ((Active*)get_instance(playerBase_instances))->alterables->strings.get(0)));
        ((Text*)((Text*)single_instance_675_6_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        media.play_id(SOUND_OPEN_5, 1-1);
        {
            loop_letter_dtaf_running = true;
            int times = int(1);
            loop_letter_dtaf_index = 0;
            while (loop_letter_dtaf_index < times) {
                loop_letter_dtaf_6();
                if (!loop_letter_dtaf_running) break;
                loop_letter_dtaf_index++;
            }
        }
    }
    event_675_6_end: ;
}
// Function purpose: generated callback event_func_3272 processes event block(s) 677_6. Actions/conditions:
//        677_6: checks scene is active; game state T_hour; game state T_min; skips if dialog is open; this handler
//        gates a game event without a direct value/object action.
void Frames::event_func_3272()
{
    // event 677_6 : checks scene is active; game state T_hour; game state T_min; skips if dialog is open; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_dlc_dtaf_1)) goto event_677_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (7))) goto event_677_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(522, str_t_min_1422)) == (59))) goto event_677_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_677_6_end;
        if (frame_time - restrict_677_6 < 1.0) goto event_677_6_end;
        restrict_677_6 = frame_time;
        {
            loop_dtaf_guard_equip_running = true;
            int times = int(3);
            loop_dtaf_guard_equip_index = 0;
            while (loop_dtaf_guard_equip_index < times) {
                loop_dtaf_guard_equip_6();
                if (!loop_dtaf_guard_equip_running) break;
                loop_dtaf_guard_equip_index++;
            }
        }
    }
    event_677_6_end: ;
}
// Function purpose: generated callback event_func_3273 processes event block(s) 680_6. Actions/conditions:
//        680_6: checks scene is active; skips if dlc sss 1 0 event group is active; this handler gates a game event
//        without a direct value/object action.
void Frames::event_func_3273()
{
    // event 680_6 : checks scene is active; skips if dlc sss 1 0 event group is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_680_6_end;
        if (!group_check_group_code_dlc_sss_1_0) goto event_680_6_end;
        group_check_group_code_dlc_sss_1_0 = false;
        {
            loop_setup_sss_running = true;
            int times = int(1);
            loop_setup_sss_index = 0;
            while (loop_setup_sss_index < times) {
                loop_setup_sss_6();
                if (!loop_setup_sss_running) break;
                loop_setup_sss_index++;
            }
        }
        {
            loop_rdeer_running = true;
            int times = int(9);
            loop_rdeer_index = 0;
            while (loop_rdeer_index < times) {
                loop_rdeer_6();
                if (!loop_rdeer_running) break;
                loop_rdeer_index++;
            }
        }
    }
    event_680_6_end: ;
}
// Function purpose: generated callback event_func_3274 processes event block(s) 681_6. Actions/conditions:
//        681_6: checks scene is active; skips if dlc sss 1 1 event group is active; this handler gates a game event
//        without a direct value/object action.
void Frames::event_func_3274()
{
    // event 681_6 : checks scene is active; skips if dlc sss 1 1 event group is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_681_6_end;
        if (!group_check_group_code_dlc_sss_1_1) goto event_681_6_end;
        group_check_group_code_dlc_sss_1_1 = false;
        ssreindeer_504_instances.clear_selection();
        spread_value(ssreindeer_504_instances, 0, 0);
    }
    event_681_6_end: ;
}
// Function purpose: generated callback event_func_3275 processes event block(s) 682_6. Actions/conditions:
//        682_6: sets the object's animation to 5.
void Frames::event_func_3275()
{
    // event 682_6 : sets the object's animation to 5
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_682_6_end;
        if (!group_check_group_code_dlc_sss_1_2) goto event_682_6_end;
        group_check_group_code_dlc_sss_1_2 = false;
        ssreindeer_504_instances.clear_selection();
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (8))) { it.deselect(); continue; }
        }
        if (!ssreindeer_504_instances.has_selection()) goto event_682_6_end;
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
    }
    event_682_6_end: ;
}
// Function purpose: generated callback event_func_3276 processes event block(s) 704_6. Actions/conditions:
//        704_6: adds a pathfinding obstacle; }; disables flag 987 (inmate gym-training state) on the selected object;
//        draws the selected image or tile; plus 1 more actions.
void Frames::event_func_3276()
{
    // event 704_6 : adds a pathfinding obstacle; }; disables flag 987 (inmate gym-training state) on the selected object; draws the selected image or tile; plus 1 more actions
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_704_6_end;
        sssobjects_502_instances.clear_selection();
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(987))) { it.deselect(); continue; }
        }
        if (!sssobjects_502_instances.has_selection()) goto event_704_6_end;
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
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(987);
            ((Active*)*it)->paste(1);
            ((Active*)*it)->destroy();
        }
    }
    event_704_6_end: ;
}
// Function purpose: generated callback event_func_3277 processes event block(s) 706_6. Actions/conditions:
//        706_6: sets the selected object's visibility to true; sets the object's animation to 29; sets the selected
//        object's direction to 26; plus 10 more actions.
void Frames::event_func_3277()
{
    // event 706_6 : sets the selected object's visibility to true; sets the object's animation to 29; sets the selected object's direction to 26; plus 10 more actions
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_706_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(254, str_t_day_902)) == (1))) goto event_706_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (7))) goto event_706_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(522, str_t_min_1422)) == (55))) goto event_706_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_706_6_end;
        if (once_condition_706_6) goto event_706_6_end;
        once_condition_706_6 = true;
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(29);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(26);
        FrameObject * single_instance_706_6_0; single_instance_706_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -112, parent->y + -70), parent->layer);
                if (single_instance_706_6_0 == NULL)
                    single_instance_706_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_706_6_0))->blend_color.set(Color(0, 63, 161));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_welcome_1925));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__198));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str_name_693, ((Active*)get_instance(playerBase_instances))->alterables->strings.get(0)));
        ((Text*)((Text*)single_instance_706_6_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        media.play_id(SOUND_OPEN_5, 1-1);
        {
            loop_letter_sss_running = true;
            int times = int(1);
            loop_letter_sss_index = 0;
            while (loop_letter_sss_index < times) {
                loop_letter_sss_6();
                if (!loop_letter_sss_running) break;
                loop_letter_sss_index++;
            }
        }
    }
    event_706_6_end: ;
}
// Function purpose: generated callback event_func_3278 processes event block(s) 708_6. Actions/conditions:
//        708_6: sets the object position in the world; sets the selected object's direction to
//        ((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->get_direction(); sets the
//        selected object's numeric value to selected object->get_x(); plus 5 more actions.
void Frames::event_func_3278()
{
    // event 708_6 : sets the object position in the world; sets the selected object's direction to ((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->get_direction(); sets the selected object's numeric value to selected object->get_x(); plus 5 more actions
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_708_6_end;
        ssreindeer_504_instances.clear_selection();
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!ssreindeer_504_instances.has_selection()) goto event_708_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_708_6_end;
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_708_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + -12);
            pos_end_708_6_0: ;
        }
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(23, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)*it)->get_y());
            ((Active*)*it)->move_front();
        }
    }
    event_708_6_end: ;
}
// Function purpose: generated callback event_func_3279 processes event block(s) 709_6. Actions/conditions:
//        709_6: checks scene is active; skips if the event-specific game state condition is met; skips if dialog is
//        open; this handler gates a game event without a direct va.
void Frames::event_func_3279()
{
    // event 709_6 : checks scene is active; skips if the event-specific game state condition is met; skips if dialog is open; this handler gates a game event without a direct va
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_709_6_end;
        every_709_6 += manager.dt;
        if (every_709_6 < 3.0) goto event_709_6_end;
        every_709_6 -= 3.0;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_709_6_end;
        {
            loop_check_deers_running = true;
            int times = int(ssreindeer_504_instances.size());
            loop_check_deers_index = 0;
            while (loop_check_deers_index < times) {
                loop_check_deers_6();
                if (!loop_check_deers_running) break;
                loop_check_deers_index++;
            }
        }
    }
    event_709_6_end: ;
}
// Function purpose: generated callback event_func_3280 processes event block(s) 716_6. Actions/conditions:
//        716_6: checks scene is active; skips if the event-specific game state condition is met; skips if dialog is
//        open; this handler gates a game event without a direct va.
void Frames::event_func_3280()
{
    // event 716_6 : checks scene is active; skips if the event-specific game state condition is met; skips if dialog is open; this handler gates a game event without a direct va
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_716_6_end;
        every_716_6 += manager.dt;
        if (every_716_6 < 0.1) goto event_716_6_end;
        every_716_6 -= 0.1;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_716_6_end;
        {
            ssreindeer_504_instances.clear_selection();
            SavedSelection extra_ssreindeer_504_instances(ssreindeer_504_instances);
            for (SavedIterator it(extra_ssreindeer_504_instances); !it.end(); ++it) {
                foreach_instance_odeer = ((Active*)*it);
                foreach_odeer_6();
            }
        }
    }
    event_716_6_end: ;
}
// Function purpose: generated callback event_func_3281 processes event block(s) 721_6. Actions/conditions:
//        721_6: checks scene is active; the event-specific game state condition is met; skips if the event-specific
//        game state condition is met; skips if dialog is open; thi.
void Frames::event_func_3281()
{
    // event 721_6 : checks scene is active; the event-specific game state condition is met; skips if the event-specific game state condition is met; skips if dialog is open; thi
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_721_6_end;
        playerBase_instances.clear_selection();
        if (!((objects_in_zone(playerBase_instances, 1088, 128, 1168, 224)) > (0))) goto event_721_6_end;
        sssobjects_502_instances.clear_selection();
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_tree_941))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
        }
        if (!sssobjects_502_instances.has_selection()) goto event_721_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_721_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_721_6_end;
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
    event_721_6_end: ;
}
// Function purpose: generated callback event_func_3282 processes event block(s) 722_6. Actions/conditions:
//        722_6: sets the selected object's scale to 1.25.
void Frames::event_func_3282()
{
    // event 722_6 : sets the selected object's scale to 1.25
    {
        if (!(group_code_1 && group_code_dlc_feb16_1)) goto event_722_6_end;
        if (!group_check_group_code_dlc_feb16_1_0) goto event_722_6_end;
        group_check_group_code_dlc_feb16_1_0 = false;
        {
            loop_setup_feb16_running = true;
            int times = int(1);
            loop_setup_feb16_index = 0;
            while (loop_setup_feb16_index < times) {
                loop_setup_feb16_6();
                if (!loop_setup_feb16_running) break;
                loop_setup_feb16_index++;
            }
        }
        ((Active*)get_instance(guardscan_219_instances))->set_scale(1.25);
    }
    event_722_6_end: ;
}
// Function purpose: generated callback event_func_3283 processes event block(s) 724_6. Actions/conditions:
//        724_6: checks scene is active; the event-specific game state condition is met; skips if dialog is open; this
//        handler gates a game event without a direct value/objec.
void Frames::event_func_3283()
{
    // event 724_6 : checks scene is active; the event-specific game state condition is met; skips if dialog is open; this handler gates a game event without a direct value/objec
    {
        if (!(group_code_1 && group_code_dlc_feb16_1)) goto event_724_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) >= (1536))) goto event_724_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_724_6_end;
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
    event_724_6_end: ;
}
// Function purpose: generated callback event_func_3284 processes event block(s) 725_6. Actions/conditions:
//        725_6: checks scene is active; the event-specific game state condition is met; skips if dialog is open; this
//        handler gates a game event without a direct value/objec.
void Frames::event_func_3284()
{
    // event 725_6 : checks scene is active; the event-specific game state condition is met; skips if dialog is open; this handler gates a game event without a direct value/objec
    {
        if (!(group_code_1 && group_code_dlc_feb16_1)) goto event_725_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) >= (1616))) goto event_725_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_725_6_end;
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
    event_725_6_end: ;
}
// Function purpose: generated callback event_func_3285 processes event block(s) 726_6. Actions/conditions:
//        726_6: sets the selected object's scale to 1.25.
void Frames::event_func_3285()
{
    // event 726_6 : sets the selected object's scale to 1.25
    {
        if (!(group_code_1 && group_code_dlc_tol_1)) goto event_726_6_end;
        if (!group_check_group_code_dlc_tol_1_0) goto event_726_6_end;
        group_check_group_code_dlc_tol_1_0 = false;
        {
            loop_setup_tol_running = true;
            int times = int(1);
            loop_setup_tol_index = 0;
            while (loop_setup_tol_index < times) {
                loop_setup_tol_6();
                if (!loop_setup_tol_running) break;
                loop_setup_tol_index++;
            }
        }
        ((Active*)get_instance(guardscan_219_instances))->set_scale(1.25);
    }
    event_726_6_end: ;
}
// Function purpose: generated callback event_func_3286 processes event block(s) 729_6. Actions/conditions:
//        729_6: checks scene is active; the event-specific game state condition is met; skips if dialog is open; this
//        handler gates a game event without a direct value/objec.
void Frames::event_func_3286()
{
    // event 729_6 : checks scene is active; the event-specific game state condition is met; skips if dialog is open; this handler gates a game event without a direct value/objec
    {
        if (!(group_code_1 && group_code_dlc_tol_1)) goto event_729_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) >= (1408))) goto event_729_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_729_6_end;
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
    event_729_6_end: ;
}
// Function purpose: generated callback event_func_3287 processes event block(s) 730_6. Actions/conditions:
//        730_6: sets the selected object's visibility to true; sets the object's animation to 29; sets the selected
//        object's direction to 26; plus 10 more actions.
void Frames::event_func_3287()
{
    // event 730_6 : sets the selected object's visibility to true; sets the object's animation to 29; sets the selected object's direction to 26; plus 10 more actions
    {
        if (!(group_code_1 && group_code_dlc_tol_1)) goto event_730_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(254, str_t_day_902)) == (1))) goto event_730_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (7))) goto event_730_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(522, str_t_min_1422)) == (55))) goto event_730_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_730_6_end;
        if (once_condition_730_6) goto event_730_6_end;
        once_condition_730_6 = true;
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(29);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(26);
        FrameObject * single_instance_730_6_0; single_instance_730_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -112, parent->y + -70), parent->layer);
                if (single_instance_730_6_0 == NULL)
                    single_instance_730_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_730_6_0))->blend_color.set(Color(0, 63, 161));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_warden_welcome_1915, str_tol_134));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__198));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str_name_693, ((Active*)get_instance(playerBase_instances))->alterables->strings.get(0)));
        ((Text*)((Text*)single_instance_730_6_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        media.play_id(SOUND_OPEN_5, 1-1);
        {
            loop_letter_tol_running = true;
            int times = int(1);
            loop_letter_tol_index = 0;
            while (loop_letter_tol_index < times) {
                loop_letter_tol_6();
                if (!loop_letter_tol_running) break;
                loop_letter_tol_index++;
            }
        }
    }
    event_730_6_end: ;
}
// Function purpose: generated callback event_func_3288 processes event block(s) 732_6. Actions/conditions:
//        732_6: adds a alcaboat 459 instance; sets the object's animation to 5.
void Frames::event_func_3288()
{
    // event 732_6 : adds a alcaboat 459 instance; sets the object's animation to 5
    {
        if (!(group_code_1 && group_code_dlc_bannedcamp_1)) goto event_732_6_end;
        if (!group_check_group_code_dlc_bannedcamp_1_0) goto event_732_6_end;
        group_check_group_code_dlc_bannedcamp_1_0 = false;
        if (!((alcaboat_459_instances.size()) == (0))) goto event_732_6_end;
        alcaboat_459_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_alcaboat_459(1398, 700), 1);
            alcaboat_459_instances.add_back();
        }
        for (ObjectIterator it(alcaboat_459_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
    }
    event_732_6_end: ;
}
// Function purpose: generated callback event_func_3289 processes event block(s) 733_6. Actions/conditions:
//        733_6: checks scene is active; the event-specific game state condition is met; skips if dialog is open; this
//        handler gates a game event without a direct value/objec.
void Frames::event_func_3289()
{
    // event 733_6 : checks scene is active; the event-specific game state condition is met; skips if dialog is open; this handler gates a game event without a direct value/objec
    {
        if (!(group_code_1 && group_code_dlc_bannedcamp_1)) goto event_733_6_end;
        playerBase_instances.clear_selection();
        if (!((objects_in_zone(playerBase_instances, 1350, 700, 1400, 912)) > (0))) goto event_733_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_733_6_end;
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
    event_733_6_end: ;
}
// Function purpose: generated callback event_func_3290 processes event block(s) 734_6. Actions/conditions:
//        734_6: sets the selected object's visibility to true; sets the object's animation to 29; sets the selected
//        object's direction to 26; plus 10 more actions.
void Frames::event_func_3290()
{
    // event 734_6 : sets the selected object's visibility to true; sets the object's animation to 29; sets the selected object's direction to 26; plus 10 more actions
    {
        if (!(group_code_1 && group_code_dlc_bannedcamp_1)) goto event_734_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(254, str_t_day_902)) == (1))) goto event_734_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (7))) goto event_734_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(522, str_t_min_1422)) == (55))) goto event_734_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_734_6_end;
        if (once_condition_734_6) goto event_734_6_end;
        once_condition_734_6 = true;
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(29);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(26);
        FrameObject * single_instance_734_6_0; single_instance_734_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -112, parent->y + -70), parent->layer);
                if (single_instance_734_6_0 == NULL)
                    single_instance_734_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_734_6_0))->blend_color.set(Color(0, 63, 161));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_warden_welcome_1915, str_bc_133));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__198));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str_name_693, ((Active*)get_instance(playerBase_instances))->alterables->strings.get(0)));
        ((Text*)((Text*)single_instance_734_6_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        media.play_id(SOUND_OPEN_5, 1-1);
        {
            loop_letter_bc_running = true;
            int times = int(1);
            loop_letter_bc_index = 0;
            while (loop_letter_bc_index < times) {
                loop_letter_bc_6();
                if (!loop_letter_bc_running) break;
                loop_letter_bc_index++;
            }
        }
    }
    event_734_6_end: ;
}
// Function purpose: generated callback event_func_3291 processes event block(s) 736_6. Actions/conditions:
//        736_6: checks scene is active; skips if dlc ccl 1 0 event group is active; this handler gates a game event
//        without a direct value/object action.
void Frames::event_func_3291()
{
    // event 736_6 : checks scene is active; skips if dlc ccl 1 0 event group is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_dlc_ccl_1)) goto event_736_6_end;
        if (!group_check_group_code_dlc_ccl_1_0) goto event_736_6_end;
        group_check_group_code_dlc_ccl_1_0 = false;
        {
            loop_ww_setup_running = true;
            int times = int(1);
            loop_ww_setup_index = 0;
            while (loop_ww_setup_index < times) {
                loop_ww_setup_6();
                if (!loop_ww_setup_running) break;
                loop_ww_setup_index++;
            }
        }
    }
    event_736_6_end: ;
}
// Function purpose: generated callback event_func_3292 processes event block(s) 738_6. Actions/conditions:
//        738_6: sets the selected object's visibility to true; sets the object's animation to 29; sets the selected
//        object's direction to 26; plus 10 more actions.
void Frames::event_func_3292()
{
    // event 738_6 : sets the selected object's visibility to true; sets the object's animation to 29; sets the selected object's direction to 26; plus 10 more actions
    {
        if (!(group_code_1 && group_code_dlc_ccl_1)) goto event_738_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(254, str_t_day_902)) == (1))) goto event_738_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (7))) goto event_738_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(522, str_t_min_1422)) == (55))) goto event_738_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_738_6_end;
        if (once_condition_738_6) goto event_738_6_end;
        once_condition_738_6 = true;
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(29);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(26);
        FrameObject * single_instance_738_6_0; single_instance_738_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -112, parent->y + -70), parent->layer);
                if (single_instance_738_6_0 == NULL)
                    single_instance_738_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_738_6_0))->blend_color.set(Color(0, 63, 161));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_ccl_130, str_intro_750));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__198));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str_name_693, ((Active*)get_instance(playerBase_instances))->alterables->strings.get(0)));
        ((Text*)((Text*)single_instance_738_6_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        media.play_id(SOUND_OPEN_5, 1-1);
        {
            loop_letter_bc_running = true;
            int times = int(1);
            loop_letter_bc_index = 0;
            while (loop_letter_bc_index < times) {
                loop_letter_bc_6();
                if (!loop_letter_bc_running) break;
                loop_letter_bc_index++;
            }
        }
    }
    event_738_6_end: ;
}
// Function purpose: generated callback event_func_3293 processes event block(s) 754_6. Actions/conditions:
//        754_6: checks scene is active; game state T_hour; game state T_min; skips if dialog is open; this handler
//        gates a game event without a direct value/object action.
void Frames::event_func_3293()
{
    // event 754_6 : checks scene is active; game state T_hour; game state T_min; skips if dialog is open; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_dlc_ccl_1)) goto event_754_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (7))) goto event_754_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(522, str_t_min_1422)) == (59))) goto event_754_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_754_6_end;
        if (frame_time - restrict_754_6 < 1.0) goto event_754_6_end;
        restrict_754_6 = frame_time;
        {
            loop_ww_guard_equip_running = true;
            int times = int(guardBase_instances.size());
            loop_ww_guard_equip_index = 0;
            while (loop_ww_guard_equip_index < times) {
                loop_ww_guard_equip_6();
                if (!loop_ww_guard_equip_running) break;
                loop_ww_guard_equip_index++;
            }
        }
    }
    event_754_6_end: ;
}
// Function purpose: generated callback event_func_3294 processes event block(s) 756_6. Actions/conditions:
//        756_6: sets the selected object's direction to 8.
void Frames::event_func_3294()
{
    // event 756_6 : sets the selected object's direction to 8
    {
        if (!(group_code_1 && group_code_dlc_ccl_1)) goto event_756_6_end;
        cclsleigh_519_instances.clear_selection();
        for (ObjectIterator it(cclsleigh_519_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(256)) { it.deselect(); continue; }
        }
        if (!cclsleigh_519_instances.has_selection()) goto event_756_6_end;
        for (ObjectIterator it(cclsleigh_519_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
    }
    event_756_6_end: ;
}
// Function purpose: generated callback event_func_3295 processes event block(s) 757_6. Actions/conditions:
//        757_6: sets the selected object's direction to 16.
void Frames::event_func_3295()
{
    // event 757_6 : sets the selected object's direction to 16
    {
        if (!(group_code_1 && group_code_dlc_ccl_1)) goto event_757_6_end;
        cclsleigh_519_instances.clear_selection();
        for (ObjectIterator it(cclsleigh_519_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(65536)) { it.deselect(); continue; }
        }
        if (!cclsleigh_519_instances.has_selection()) goto event_757_6_end;
        for (ObjectIterator it(cclsleigh_519_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_757_6_end: ;
}
// Function purpose: generated callback event_func_3296 processes event block(s) 758_6. Actions/conditions:
//        758_6: sets the selected object's direction to 16.
void Frames::event_func_3296()
{
    // event 758_6 : sets the selected object's direction to 16
    {
        if (!(group_code_1 && group_code_dlc_ccl_1)) goto event_758_6_end;
        cclsleigh_519_instances.clear_selection();
        for (ObjectIterator it(cclsleigh_519_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(65536)) { it.deselect(); continue; }
        }
        if (!cclsleigh_519_instances.has_selection()) goto event_758_6_end;
        for (ObjectIterator it(cclsleigh_519_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_758_6_end: ;
}
// Function purpose: generated callback event_func_3297 processes event block(s) 759_6. Actions/conditions:
//        759_6: adds a pathfinding obstacle; }; removes the selected object.
void Frames::event_func_3297()
{
    // event 759_6 : adds a pathfinding obstacle; }; removes the selected object
    {
        if (!(group_code_1)) goto event_759_6_end;
        if (!group_check_group_code_1_0) goto event_759_6_end;
        group_check_group_code_1_0 = false;
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindingguards_247_instances));
            mapsetupobstaclemarker_323_instances.clear_selection();
            for (ObjectIterator it(mapsetupobstaclemarker_323_instances); !it.end(); ++it) {
    planner->add_obstacle(((Active*)*it));        }
        }
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindinginmates_191_instances));
            for (ObjectIterator it(mapsetupobstaclemarker_323_instances); !it.end(); ++it) {
    planner->add_obstacle(((Active*)*it));        }
        }
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindinginmates_191_instances));
            qualifier_4.clear_selection();
            for (QualifierIterator it(qualifier_4); !it.end(); ++it) {
    planner->add_obstacle(((Active*)*it));        }
        }
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindinginmates_191_instances));
            qualifier_28.clear_selection();
            for (QualifierIterator it(qualifier_28); !it.end(); ++it) {
    planner->add_obstacle(((Active*)*it));        }
        }
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindinginmates_191_instances));
            // icache destruction
            containermedical_269_instances.clear_selection();
            desks_717_instances.clear_selection();
            table2_720_instances.clear_selection();
            for (QualifierIterator it(qualifier_22); !it.end(); ++it) {
    planner->add_obstacle(((Active*)*it));        }
        }
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindingguards_247_instances));
            for (QualifierIterator it(qualifier_4); !it.end(); ++it) {
    planner->add_obstacle(((Active*)*it));        }
        }
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindingguards_247_instances));
            for (QualifierIterator it(qualifier_28); !it.end(); ++it) {
    planner->add_obstacle(((Active*)*it));        }
        }
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindingguards_247_instances));
            for (QualifierIterator it(qualifier_22); !it.end(); ++it) {
    planner->add_obstacle(((Active*)*it));        }
        }
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindinginmates_191_instances));
            doorutility_259_instances.clear_selection();
            for (ObjectIterator it(doorutility_259_instances); !it.end(); ++it) {
    planner->add_obstacle(((Active*)*it));        }
        }
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindinginmates_191_instances));
            doorstaff_212_instances.clear_selection();
            for (ObjectIterator it(doorstaff_212_instances); !it.end(); ++it) {
    planner->add_obstacle(((Active*)*it));        }
        }
        powerupplot_353_instances.clear_selection();
        for (ObjectIterator it(powerupplot_353_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_759_6_end: ;
}
// Function purpose: generated callback event_func_3298 processes event block(s) 760_6. Actions/conditions:
//        760_6: removes the selected object; sets the selected object's layer to 7-1.
void Frames::event_func_3298()
{
    // event 760_6 : removes the selected object; sets the selected object's layer to 7-1
    {
        if (!(group_code_1)) goto event_760_6_end;
        if (!((shadow_324_instances.size()) == (0))) goto event_760_6_end;
        if (!((shady_348_instances.size()) == (0))) goto event_760_6_end;
        loadingCurtain_instances.clear_selection();
        for (ObjectIterator it(loadingCurtain_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        mapsetupobstaclemarker_323_instances.clear_selection();
        for (ObjectIterator it(mapsetupobstaclemarker_323_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(7-1);
        }
    }
    event_760_6_end: ;
}
// Function purpose: generated callback event_func_3299 processes event block(s) 761_6. Actions/conditions:
//        761_6: draws the selected image or tile; removes the selected object.
void Frames::event_func_3299()
{
    // event 761_6 : draws the selected image or tile; removes the selected object
    {
        if (!(group_code_1)) goto event_761_6_end;
        if (!((((Active*)get_instance(mapsetupobstaclemarker_323_instances, default_active_instance))->layer->index+1) == (7))) goto event_761_6_end;
        mapsetupobstaclemarker_323_instances.clear_selection();
        for (ObjectIterator it(mapsetupobstaclemarker_323_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(100))) { it.deselect(); continue; }
        }
        if (!mapsetupobstaclemarker_323_instances.has_selection()) goto event_761_6_end;
        if (!check_not_overlap(mapsetupobstaclemarker_323_instances, active2_105_instances)) goto event_761_6_end;
        for (ObjectIterator it(mapsetupobstaclemarker_323_instances); !it.end(); ++it) {
            ((Active*)*it)->paste(1);
            ((Active*)*it)->destroy();
        }
    }
    event_761_6_end: ;
}
// Function purpose: generated callback event_func_3300 processes event block(s) 762_6. Actions/conditions:
//        762_6: removes the selected object.
void Frames::event_func_3300()
{
    // event 762_6 : removes the selected object
    {
        if (!(group_code_1)) goto event_762_6_end;
        if (!((((Active*)get_instance(mapsetupobstaclemarker_323_instances, default_active_instance))->layer->index+1) == (7))) goto event_762_6_end;
        mapsetupobstaclemarker_323_instances.clear_selection();
        for (ObjectIterator it(mapsetupobstaclemarker_323_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(100))) { it.deselect(); continue; }
        }
        if (!mapsetupobstaclemarker_323_instances.has_selection()) goto event_762_6_end;
        for (ObjectIterator it(mapsetupobstaclemarker_323_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_762_6_end: ;
}
// Function purpose: generated callback event_func_3301 processes event block(s) 763_6. Actions/conditions:
//        763_6: removes the selected object.
void Frames::event_func_3301()
{
    // event 763_6 : removes the selected object
    {
        if (!(group_code_1)) goto event_763_6_end;
        if (!((((Active*)get_instance(mapsetupobstaclemarker_323_instances, default_active_instance))->layer->index+1) == (7))) goto event_763_6_end;
        mapsetupobstaclemarker_323_instances.clear_selection();
        active2_105_instances.clear_selection();
        if (!check_overlap(mapsetupobstaclemarker_323_instances, active2_105_instances)) goto event_763_6_end;
        for (ObjectIterator it(mapsetupobstaclemarker_323_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_763_6_end: ;
}
// Function purpose: generated callback event_func_3302 processes event block(s) 764_6. Actions/conditions:
//        764_6: removes the selected object.
void Frames::event_func_3302()
{
    // event 764_6 : removes the selected object
    {
        if (!(group_code_1)) goto event_764_6_end;
        if (!((mapsetupobstaclemarker_323_instances.size()) == (0))) goto event_764_6_end;
        active2_105_instances.clear_selection();
        for (ObjectIterator it(active2_105_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_764_6_end: ;
}
// Function purpose: generated callback event_func_3303 processes event block(s) 765_6. Actions/conditions:
//        765_6: adds a moveit 362 instance; sets the selected object's scale to 10; removes the selected object.
void Frames::event_func_3303()
{
    // event 765_6 : adds a moveit 362 instance; sets the selected object's scale to 10; removes the selected object
    {
        if (!(group_code_1)) goto event_765_6_end;
        if (!group_check_group_code_1_1) goto event_765_6_end;
        group_check_group_code_1_1 = false;
        moveit_362_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_moveit_362(0, 0), 5);
            moveit_362_instances.add_back();
        }
        ((Active*)get_instance(screenTint_instances))->set_scale(10);
            group_setup_1 = false;
    
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->destroy();
        }
    }
    event_765_6_end: ;
}
// Function purpose: generated callback event_func_3304 processes event block(s) 766_6. Actions/conditions:
//        766_6: sets Esc to 0.
void Frames::event_func_3304()
{
    // event 766_6 : sets Esc to 0
    {
        if (!(group_code_1)) goto event_766_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(561, str_esc_202)) == (1))) goto event_766_6_end;
        if (is_key_pressed(SDLK_ESCAPE)) goto event_766_6_end;
        if (is_key_pressed(SDLK_F1)) goto event_766_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(561, str_esc_202, 0);
    }
    event_766_6_end: ;
}
// Function purpose: generated callback event_func_3305 processes event block(s) 767_6. Actions/conditions:
//        767_6: sets the object's animation to 24; sets the selected object's visibility to true; plays a sound or
//        music track; plus 1 more actions.
void Frames::event_func_3305()
{
    // event 767_6 : sets the object's animation to 24; sets the selected object's visibility to true; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1)) goto event_767_6_end;
        if (!(is_key_pressed_once(SDLK_ESCAPE))) goto event_767_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(561, str_esc_202)) == (0))) goto event_767_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_767_6_end;
        ((Active*)get_instance(dialogPanel_instances))->force_animation(24);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        media.play_id(SOUND_OPEN_5, 1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(561, str_esc_202, 1);
        if (!group_code_menu_1) {
            group_code_menu_1 = true;
            group_check_group_code_menu_1_0 = true;
        }
    }
    event_767_6_end: ;
}
// Function purpose: generated callback event_func_3306 processes event block(s) 768_6. Actions/conditions:
//        768_6: sets the object's animation to 24; sets the selected object's direction to 8; sets the selected
//        object's visibility to true; plus 5 more actions.
void Frames::event_func_3306()
{
    // event 768_6 : sets the object's animation to 24; sets the selected object's direction to 8; sets the selected object's visibility to true; plus 5 more actions
    {
        if (!(group_code_1)) goto event_768_6_end;
        if (!(is_key_pressed_once(SDLK_F1))) goto event_768_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(561, str_esc_202)) == (0))) goto event_768_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_768_6_end;
        ((Active*)get_instance(dialogPanel_instances))->force_animation(24);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(8);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(561, str_esc_202, 1);
        if (!group_code_menu_1) {
            group_code_menu_1 = true;
            group_check_group_code_menu_1_0 = true;
        }
        {
            loop_basemenuhelp_running = true;
            int times = int(1);
            loop_basemenuhelp_index = 0;
            while (loop_basemenuhelp_index < times) {
                loop_basemenuhelp_6();
                if (!loop_basemenuhelp_running) break;
                loop_basemenuhelp_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_768_6_end: ;
}
// Function purpose: generated callback event_func_3307 processes event block(s) 769_6. Actions/conditions:
//        769_6: increments Playtime by 1.
void Frames::event_func_3307()
{
    // event 769_6 : increments Playtime by 1
    {
        if (!(group_code_1)) goto event_769_6_end;
        every_769_6 += manager.dt;
        if (every_769_6 < 60.0) goto event_769_6_end;
        every_769_6 -= 60.0;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(584, str_playtime_1553, 1);
    }
    event_769_6_end: ;
}
// Function purpose: generated callback event_func_3308 processes event block(s) 770_6. Actions/conditions:
//        770_6: checks scene is active; skips if menu 1 0 event group is active; skips if the required game action is
//        held; this handler gates a game event without a direct.
void Frames::event_func_3308()
{
    // event 770_6 : checks scene is active; skips if menu 1 0 event group is active; skips if the required game action is held; this handler gates a game event without a direct
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_770_6_end;
        if (!group_check_group_code_menu_1_0) goto event_770_6_end;
        group_check_group_code_menu_1_0 = false;
        if (is_key_pressed(SDLK_F1)) goto event_770_6_end;
        {
            loop_menubuttons_running = true;
            int times = int(1);
            loop_menubuttons_index = 0;
            while (loop_menubuttons_index < times) {
                loop_menubuttons_6();
                if (!loop_menubuttons_running) break;
                loop_menubuttons_index++;
            }
        }
    }
    event_770_6_end: ;
}
// Function purpose: generated callback event_func_3309 processes event block(s) 777_6. Actions/conditions:
//        777_6: saves the current object selection; saves the current object selection; sets Esc to 1; plus 5 more
//        actions.
void Frames::event_func_3309()
{
    // event 777_6 : saves the current object selection; saves the current object selection; sets Esc to 1; plus 5 more actions
    bool or_result_777_6 = false;
    bool or_temp_result_777_6_0 = false;
    {
        if (!(group_code_1 && group_code_menu_1)) goto or_event_777_6_0_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(33))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto or_event_777_6_0_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_777_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(57, str_lclick_203)) == (0))) goto or_event_777_6_0_end;
        or_result_777_6 = true;
        or_temp_result_777_6_0 = true;
    }
    or_event_777_6_0_end: ;
    dialogButton_instances.clear_saved_selection();
    dialogPanel_instances.clear_saved_selection();
    if (or_temp_result_777_6_0) {
        dialogButton_instances.save_selection();
        dialogPanel_instances.save_selection();
    }
    // event 777_6 : saves the current object selection; saves the current object selection; sets Esc to 1; plus 5 more actions
    bool or_temp_result_777_6_1 = false;
    {
        if (!(group_code_1 && group_code_menu_1)) goto or_event_777_6_1_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto or_event_777_6_1_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_777_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(57, str_lclick_203)) == (0))) goto or_event_777_6_1_end;
        or_result_777_6 = true;
        or_temp_result_777_6_1 = true;
        or_event_777_6_1_end: ;
        if (or_temp_result_777_6_1) {
            dialogPanel_instances.save_selection();
        }
        if (!or_result_777_6) goto or_final_or_event_777_6_1_end;
        dialogButton_instances.empty_selection();
        dialogPanel_instances.empty_selection();
        if (or_temp_result_777_6_0) {
            dialogButton_instances.restore_selection();
        }
        if (or_temp_result_777_6_0 || or_temp_result_777_6_1) {
            dialogPanel_instances.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(561, str_esc_202, 1);
            ((AssociateArray*)*it)->set_value(57, str_lclick_203, 1);
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
        {
            loop_menu_close_running = true;
            int times = int(1);
            loop_menu_close_index = 0;
            while (loop_menu_close_index < times) {
                loop_menu_close_6();
                if (!loop_menu_close_running) break;
                loop_menu_close_index++;
            }
        }
    }
    or_final_or_event_777_6_1_end: ;
}
// Function purpose: generated callback event_func_3310 processes event block(s) 778_6. Actions/conditions:
//        778_6: sets Esc to 1; sets LClick to 1; plays a sound or music track.
void Frames::event_func_3310()
{
    // event 778_6 : sets Esc to 1; sets LClick to 1; plays a sound or music track
    bool or_result_778_6 = false;
    bool or_temp_result_778_6_2 = false;
    {
        if (!(group_code_1 && group_code_menu_1)) goto or_event_778_6_2_end;
        if (!(is_key_pressed_once(SDLK_ESCAPE))) goto or_event_778_6_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(561, str_esc_202)) == (0))) goto or_event_778_6_2_end;
        or_result_778_6 = true;
        or_temp_result_778_6_2 = true;
    }
    or_event_778_6_2_end: ;
    // event 778_6 : sets Esc to 1; sets LClick to 1; plays a sound or music track
    bool or_temp_result_778_6_3 = false;
    {
        if (!(group_code_1 && group_code_menu_1)) goto or_event_778_6_3_end;
        if (!(is_key_pressed_once(SDLK_F1))) goto or_event_778_6_3_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(561, str_esc_202)) == (0))) goto or_event_778_6_3_end;
        or_result_778_6 = true;
        or_temp_result_778_6_3 = true;
        or_event_778_6_3_end: ;
        if (!or_result_778_6) goto or_final_or_event_778_6_3_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(561, str_esc_202, 1);
            ((AssociateArray*)*it)->set_value(57, str_lclick_203, 1);
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
        {
            loop_menu_close_running = true;
            int times = int(1);
            loop_menu_close_index = 0;
            while (loop_menu_close_index < times) {
                loop_menu_close_6();
                if (!loop_menu_close_running) break;
                loop_menu_close_index++;
            }
        }
    }
    or_final_or_event_778_6_3_end: ;
}
// Function purpose: generated callback event_func_3311 processes event block(s) 780_6. Actions/conditions:
//        780_6: sets LClick to 1; removes the selected object; plays a sound or music track.
void Frames::event_func_3311()
{
    // event 780_6 : sets LClick to 1; removes the selected object; plays a sound or music track
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_780_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(36))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_780_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(1))) goto event_780_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_780_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        buttontext_445_instances.clear_selection();
        for (ObjectIterator it(buttontext_445_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        {
            loop_menuquit_running = true;
            int times = int(1);
            loop_menuquit_index = 0;
            while (loop_menuquit_index < times) {
                loop_menuquit_6();
                if (!loop_menuquit_running) break;
                loop_menuquit_index++;
            }
        }
        media.play_id(SOUND_PLIP_16, 1-1);
    }
    event_780_6_end: ;
}
// Function purpose: generated callback event_func_3312 processes event block(s) 781_6. Actions/conditions:
//        781_6: removes the selected object; loads a game or save-data file; sets LClick to 1; plus 1 more actions.
void Frames::event_func_3312()
{
    // event 781_6 : removes the selected object; loads a game or save-data file; sets LClick to 1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_781_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(34))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_781_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(1))) goto event_781_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_781_6_end;
        buttontext_445_instances.clear_selection();
        for (ObjectIterator it(buttontext_445_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        ((INI*)get_instance(mapload_322_instances))->load_file(File::get_appdata_directory()+str_the_escapists_settings_cfg_62, false, false, true);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_menuoptions_running = true;
            int times = int(1);
            loop_menuoptions_index = 0;
            while (loop_menuoptions_index < times) {
                loop_menuoptions_6();
                if (!loop_menuoptions_running) break;
                loop_menuoptions_index++;
            }
        }
        {
            loop_options_screen_running = true;
            int times = int(1);
            loop_options_screen_index = 0;
            while (loop_options_screen_index < times) {
                loop_options_screen_6();
                if (!loop_options_screen_running) break;
                loop_options_screen_index++;
            }
        }
        media.play_id(SOUND_PLIP_16, 1-1);
    }
    event_781_6_end: ;
}
// Function purpose: generated callback event_func_3313 processes event block(s) 782_6. Actions/conditions:
//        782_6: removes the selected object; sets LClick to 1; plays a sound or music track.
void Frames::event_func_3313()
{
    // event 782_6 : removes the selected object; sets LClick to 1; plays a sound or music track
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_782_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(35))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_782_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(1))) goto event_782_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_782_6_end;
        buttontext_445_instances.clear_selection();
        for (ObjectIterator it(buttontext_445_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_basemenuhelp_running = true;
            int times = int(1);
            loop_basemenuhelp_index = 0;
            while (loop_basemenuhelp_index < times) {
                loop_basemenuhelp_6();
                if (!loop_basemenuhelp_running) break;
                loop_basemenuhelp_index++;
            }
        }
        media.play_id(SOUND_PLIP_16, 1-1);
    }
    event_782_6_end: ;
}
// Function purpose: generated callback event_func_3314 processes event block(s) 799_6. Actions/conditions:
//        799_6: sets the selected object's direction to 24; sets LClick to 1; removes the selected object; plus 1
//        more actions.
void Frames::event_func_3314()
{
    // event 799_6 : sets the selected object's direction to 24; sets LClick to 1; removes the selected object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_799_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(37))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_799_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(65536))) goto event_799_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_799_6_end;
        ((Active*)get_instance(dialogPanel_instances))->set_direction(24);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        settingsSlider_instances.clear_selection();
        for (ObjectIterator it(settingsSlider_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        {
            loop_menubuttons_running = true;
            int times = int(1);
            loop_menubuttons_index = 0;
            while (loop_menubuttons_index < times) {
                loop_menubuttons_6();
                if (!loop_menubuttons_running) break;
                loop_menubuttons_index++;
            }
        }
        media.play_id(SOUND_PLIP_16, 1-1);
    }
    event_799_6_end: ;
}
// Function purpose: generated callback event_func_3315 processes event block(s) 800_6. Actions/conditions:
//        800_6: sets LClick to 1; sets global value 9 from get_mouse_x()-(((Active*)get_single(settingsSlider_instances,
//        default_active_instance))->get_box_index(0)+5).
void Frames::event_func_3315()
{
    // event 800_6 : sets LClick to 1; sets global value 9 from get_mouse_x()-(((Active*)get_single(settingsSlider_instances, default_active_instance))->get_box_index(0)+5)
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_800_6_end;
        settingsSlider_instances.clear_selection();
        for (ObjectIterator it(settingsSlider_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_musicbar_668))) { it.deselect(); continue; }
        }
        if (!settingsSlider_instances.has_selection()) goto event_800_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_800_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        global_values->set(9, get_mouse_x()-(((Active*)get_single(settingsSlider_instances, default_active_instance))->get_box_index(0)+5));
        {
            loop_slider_music_running = true;
            int times = int(1);
            loop_slider_music_index = 0;
            while (loop_slider_music_index < times) {
                loop_slider_music_6();
                if (!loop_slider_music_running) break;
                loop_slider_music_index++;
            }
        }
    }
    event_800_6_end: ;
}
// Function purpose: generated callback event_func_3316 processes event block(s) 804_6. Actions/conditions:
//        804_6: sets LClick to 1; sets global value 10 from get_mouse_x()-(((Active*)get_single(settingsSlider_instances,
//        default_active_instance))->get_box_index(0)+5).
void Frames::event_func_3316()
{
    // event 804_6 : sets LClick to 1; sets global value 10 from get_mouse_x()-(((Active*)get_single(settingsSlider_instances, default_active_instance))->get_box_index(0)+5)
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_804_6_end;
        settingsSlider_instances.clear_selection();
        for (ObjectIterator it(settingsSlider_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_sfxbar_669))) { it.deselect(); continue; }
        }
        if (!settingsSlider_instances.has_selection()) goto event_804_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_804_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        global_values->set(10, get_mouse_x()-(((Active*)get_single(settingsSlider_instances, default_active_instance))->get_box_index(0)+5));
        {
            loop_slider_sfx_running = true;
            int times = int(1);
            loop_slider_sfx_index = 0;
            while (loop_slider_sfx_index < times) {
                loop_slider_sfx_6();
                if (!loop_slider_sfx_running) break;
                loop_slider_sfx_index++;
            }
        }
    }
    event_804_6_end: ;
}
// Function purpose: generated callback event_func_3317 processes event block(s) 808_6. Actions/conditions:
//        808_6: hides the game window; sets LClick to 1; sets global value 8 from 1; plus 8 more actions.
void Frames::event_func_3317()
{
    // event 808_6 : hides the game window; sets LClick to 1; sets global value 8 from 1; plus 8 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_808_6_end;
        settingsSlider_instances.clear_selection();
        for (ObjectIterator it(settingsSlider_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_win_670))) { it.deselect(); continue; }
        }
        if (!settingsSlider_instances.has_selection()) goto event_808_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_808_6_end;
        manager.set_window(false);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        global_values->set(8, 1);
        ((INI*)get_instance(mapload_322_instances))->set_string(str_settings_52, str_screen_57, str_window_59);
    WindowControl::restore();
    WindowControl::set_width(960);
    WindowControl::set_height(720);
    WindowControl::set_position((WindowControl::get_screen_width()/MathHelper()/2)-480, (WindowControl::get_screen_height()/MathHelper()/2)-360);
        {
            loop_options_screen_running = true;
            int times = int(1);
            loop_options_screen_index = 0;
            while (loop_options_screen_index < times) {
                loop_options_screen_6();
                if (!loop_options_screen_running) break;
                loop_options_screen_index++;
            }
        }
    }
    event_808_6_end: ;
}
// Function purpose: generated callback event_func_3318 processes event block(s) 809_6. Actions/conditions:
//        809_6: sets LClick to 1; sets global value 8 from 0; sets Screen to Full; plus 5 more actions.
void Frames::event_func_3318()
{
    // event 809_6 : sets LClick to 1; sets global value 8 from 0; sets Screen to Full; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_809_6_end;
        settingsSlider_instances.clear_selection();
        for (ObjectIterator it(settingsSlider_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_full_58))) { it.deselect(); continue; }
        }
        if (!settingsSlider_instances.has_selection()) goto event_809_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_809_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        global_values->set(8, 0);
        ((INI*)get_instance(mapload_322_instances))->set_string(str_settings_52, str_screen_57, str_full_58);
        {
            loop_options_screen_running = true;
            int times = int(1);
            loop_options_screen_index = 0;
            while (loop_options_screen_index < times) {
                loop_options_screen_6();
                if (!loop_options_screen_running) break;
                loop_options_screen_index++;
            }
        }
    WindowControl::maximize();
        manager.set_window(true);
        
        
        
    }
    event_809_6_end: ;
}
// Function purpose: generated callback event_func_3319 processes event block(s) 822_6. Actions/conditions:
//        822_6: sets LClick to 1; plays a sound or music track.
void Frames::event_func_3319()
{
    // event 822_6 : sets LClick to 1; plays a sound or music track
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_822_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_822_6_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_822_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->mouse_over())) goto event_822_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_822_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(256))) goto event_822_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_822_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_822_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_menuhelp_running = true;
            int times = int(1);
            loop_menuhelp_index = 0;
            while (loop_menuhelp_index < times) {
                loop_menuhelp_6();
                if (!loop_menuhelp_running) break;
                loop_menuhelp_index++;
            }
        }
        media.play_id(SOUND_PLIP_16, 1-1);
    }
    event_822_6_end: ;
}
// Function purpose: generated callback event_func_3320 processes event block(s) 823_6. Actions/conditions:
//        823_6: sets LClick to 1; plays a sound or music track.
void Frames::event_func_3320()
{
    // event 823_6 : sets LClick to 1; plays a sound or music track
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_823_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(41))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_823_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(256))) goto event_823_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_823_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_menubuttons_running = true;
            int times = int(1);
            loop_menubuttons_index = 0;
            while (loop_menubuttons_index < times) {
                loop_menubuttons_6();
                if (!loop_menubuttons_running) break;
                loop_menubuttons_index++;
            }
        }
        media.play_id(SOUND_PLIP_16, 1-1);
    }
    event_823_6_end: ;
}
// Function purpose: generated callback event_func_3321 processes event block(s) 832_6. Actions/conditions:
//        832_6: sets the selected object's direction to 0; sets LClick to 1; removes the selected object; plus 1 more
//        actions.
void Frames::event_func_3321()
{
    // event 832_6 : sets the selected object's direction to 0; sets LClick to 1; removes the selected object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_832_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(41))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_832_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(16))) goto event_832_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_832_6_end;
        ((Active*)get_instance(dialogPanel_instances))->set_direction(0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        {
            loop_basemenuhelp_running = true;
            int times = int(1);
            loop_basemenuhelp_index = 0;
            while (loop_basemenuhelp_index < times) {
                loop_basemenuhelp_6();
                if (!loop_basemenuhelp_running) break;
                loop_basemenuhelp_index++;
            }
        }
        media.play_id(SOUND_PLIP_16, 1-1);
    }
    event_832_6_end: ;
}
// Function purpose: generated callback event_func_3322 processes event block(s) 833_6. Actions/conditions:
//        833_6: sets the selected object's vertical position to
//        dialogPanel->get_box_index(1)+(((get_mouse_y()-dialogPanel->get_box_index(1))/MathHelper()/11)*11)-3; sets
//        the selected object's numeric value to ((selected
//        object->get_y()-dialogPanel->get_box_index(1))/MathHelper()/11)-1.
void Frames::event_func_3322()
{
    // event 833_6 : sets the selected object's vertical position to dialogPanel->get_box_index(1)+(((get_mouse_y()-dialogPanel->get_box_index(1))/MathHelper()/11)*11)-3; sets the selected object's numeric value to ((selected object->get_y()-dialogPanel->get_box_index(1))/MathHelper()/11)-1
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_833_6_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+(((get_mouse_y()-((Active*)get_instance(dialogPanel_instances))->get_box_index(1))/MathHelper()/11)*11)-3);
            ((Active*)*it)->alterables->values.set(0, ((((Active*)*it)->get_y()-((Active*)get_instance(dialogPanel_instances))->get_box_index(1))/MathHelper()/11)-1);
        }
    }
    event_833_6_end: ;
}
// Function purpose: generated callback event_func_3323 processes event block(s) 834_6. Actions/conditions:
//        834_6: saves the current object selection; saves the current object selection; sets the selected object's
//        visibility to false.
void Frames::event_func_3323()
{
    // event 834_6 : saves the current object selection; saves the current object selection; sets the selected object's visibility to false
    bool or_result_834_6 = false;
    bool or_temp_result_834_6_0 = false;
    {
        if (!(group_code_1 && group_code_menu_1)) goto or_event_834_6_0_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto or_event_834_6_0_end;
        or_result_834_6 = true;
        or_temp_result_834_6_0 = true;
    }
    or_event_834_6_0_end: ;
    helpTopicCursor_instances.clear_saved_selection();
    if (or_temp_result_834_6_0) {
        helpTopicCursor_instances.save_selection();
    }
    // event 834_6 : saves the current object selection; saves the current object selection; sets the selected object's visibility to false
    bool or_temp_result_834_6_1 = false;
    {
        if (!(group_code_1 && group_code_menu_1)) goto or_event_834_6_1_end;
        if (!((get_mouse_y()) > (((Active*)get_instance(dialogPanel_instances, default_active_instance))->get_y()+52))) goto or_event_834_6_1_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto or_event_834_6_1_end;
        or_result_834_6 = true;
        or_temp_result_834_6_1 = true;
    }
    or_event_834_6_1_end: ;
    if (or_temp_result_834_6_1) {
        helpTopicCursor_instances.save_selection();
    }
    // event 834_6 : saves the current object selection; saves the current object selection; sets the selected object's visibility to false
    bool or_temp_result_834_6_2 = false;
    {
        if (!(group_code_1 && group_code_menu_1)) goto or_event_834_6_2_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto or_event_834_6_2_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_834_6_2_end;
        or_result_834_6 = true;
        or_temp_result_834_6_2 = true;
    }
    or_event_834_6_2_end: ;
    dialogPanel_instances.clear_saved_selection();
    if (or_temp_result_834_6_2) {
        helpTopicCursor_instances.save_selection();
        dialogPanel_instances.save_selection();
    }
    // event 834_6 : saves the current object selection; saves the current object selection; sets the selected object's visibility to false
    bool or_temp_result_834_6_3 = false;
    {
        if (!(group_code_1 && group_code_menu_1)) goto or_event_834_6_3_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (20))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto or_event_834_6_3_end;
        or_result_834_6 = true;
        or_temp_result_834_6_3 = true;
        or_event_834_6_3_end: ;
        if (or_temp_result_834_6_3) {
            helpTopicCursor_instances.save_selection();
        }
        if (!or_result_834_6) goto or_final_or_event_834_6_3_end;
        helpTopicCursor_instances.empty_selection();
        dialogPanel_instances.empty_selection();
        if (or_temp_result_834_6_0 || or_temp_result_834_6_1 || or_temp_result_834_6_2 || or_temp_result_834_6_3) {
            helpTopicCursor_instances.restore_selection();
        }
        if (or_temp_result_834_6_2) {
            dialogPanel_instances.restore_selection();
        }
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    or_final_or_event_834_6_3_end: ;
}
// Function purpose: generated callback event_func_3324 processes event block(s) 835_6. Actions/conditions:
//        835_6: sets the selected object's horizontal position to dialogPanel->get_x()-112.
void Frames::event_func_3324()
{
    // event 835_6 : sets the selected object's horizontal position to dialogPanel->get_x()-112
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_835_6_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_835_6_end;
        if (!((get_mouse_x()) < (((Active*)get_instance(dialogPanel_instances))->get_x()))) goto event_835_6_end;
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(dialogPanel_instances))->get_x()-112);
        }
    }
    event_835_6_end: ;
}
// Function purpose: generated callback event_func_3325 processes event block(s) 836_6. Actions/conditions:
//        836_6: sets the selected object's horizontal position to dialogPanel->get_x()-2; changes a stored game
//        value.
void Frames::event_func_3325()
{
    // event 836_6 : sets the selected object's horizontal position to dialogPanel->get_x()-2; changes a stored game value
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_836_6_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_836_6_end;
        if (!((get_mouse_x()) > (((Active*)get_instance(dialogPanel_instances))->get_x()))) goto event_836_6_end;
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(dialogPanel_instances))->get_x()-2);
            ((Active*)*it)->alterables->values.add(0, 10);
        }
    }
    event_836_6_end: ;
}
// Function purpose: generated callback event_func_3326 processes event block(s) 837_6. Actions/conditions:
//        837_6: sets the selected object's visibility to true.
void Frames::event_func_3326()
{
    // event 837_6 : sets the selected object's visibility to true
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_837_6_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (20))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_837_6_end;
        if (!((get_mouse_y()) < (((Active*)get_instance(dialogPanel_instances))->get_y()+52))) goto event_837_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->mouse_over())) goto event_837_6_end;
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_837_6_end: ;
}
// Function purpose: generated callback event_func_3327 processes event block(s) 845_6. Actions/conditions:
//        845_6: sets the selected object's direction to 24; sets LClick to 1; removes the selected object; plus 1
//        more actions.
void Frames::event_func_3327()
{
    // event 845_6 : sets the selected object's direction to 24; sets LClick to 1; removes the selected object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_845_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(42))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_845_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(16777216))) goto event_845_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_845_6_end;
        ((Active*)get_instance(dialogPanel_instances))->set_direction(24);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        media.play_id(SOUND_PLIP_16, 1-1);
        {
            loop_menubuttons_running = true;
            int times = int(1);
            loop_menubuttons_index = 0;
            while (loop_menubuttons_index < times) {
                loop_menubuttons_6();
                if (!loop_menubuttons_running) break;
                loop_menubuttons_index++;
            }
        }
    }
    event_845_6_end: ;
}
// Function purpose: generated callback event_func_3328 processes event block(s) 846_6. Actions/conditions:
//        846_6: clears the current selection or contents; plays a sound or music track; plays a sound or music track;
//        plus 1 more actions.
void Frames::event_func_3328()
{
    // event 846_6 : clears the current selection or contents; plays a sound or music track; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_846_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(41))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_846_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(16777216))) goto event_846_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_846_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->clear();
        media.play_id(SOUND_RUMBLE_15, 1-1);
        media.play(str_music_theme_ogg_92, 10-1, 0);
        next_frame = 2 + 0;    
        if (loop_count != 0)
            manager.set_fade(Transition::DOOR, Color(0, 0, 0), 2.22222222222);
    
    }
    event_846_6_end: ;
}
// Function purpose: generated callback event_func_3329 processes event block(s) 847_6. Actions/conditions:
//        847_6: removes the selected object.
void Frames::event_func_3329()
{
    // event 847_6 : removes the selected object
    {
        if (!(group_code_1)) goto event_847_6_end;
        if (!((helpTopicCursor_instances.size()) > (0))) goto event_847_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_847_6_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_847_6_end: ;
}
// Function purpose: generated callback event_func_3330 processes event block(s) 848_6. Actions/conditions:
//        848_6: sets the selected object's layer to 2-1; sets the object's animation to 5; sets the selected object's
//        direction to ((Active*)get_qualifier(qualifier_2, default_active_instance))->get_direction(); plus 5 more
//        actions.
void Frames::event_func_3330()
{
    // event 848_6 : sets the selected object's layer to 2-1; sets the object's animation to 5; sets the selected object's direction to ((Active*)get_qualifier(qualifier_2, default_active_instance))->get_direction(); plus 5 more actions
    {
        if (!(group_code_1)) goto event_848_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (5))) goto event_848_6_end;
        ((Active*)get_instance(upperlevelcheck_206_instances))->set_layer(2-1);
        ((Active*)get_instance(upperlevelcheck_206_instances))->force_animation(5);
        ((Active*)get_instance(upperlevelcheck_206_instances))->set_direction(((Active*)get_qualifier(qualifier_2, default_active_instance))->get_direction());
        ((Active*)get_instance(upperlevelcheck_206_instances))->set_x((((Active*)get_instance(playerBase_instances))->get_x()));
        ((Active*)get_instance(upperlevelcheck_206_instances))->set_y((((Active*)get_instance(playerBase_instances))->get_y()));
    }
    event_848_6_end: ;
}
// Function purpose: generated callback event_func_3331 processes event block(s) 849_6. Actions/conditions:
//        849_6: sets LClick to 0.
void Frames::event_func_3331()
{
    // event 849_6 : sets LClick to 0
    {
        if (!(group_code_1)) goto event_849_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) != (0))) goto event_849_6_end;
        if (is_mouse_pressed(SDL_BUTTON_LEFT)) goto event_849_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 0);
    }
    event_849_6_end: ;
}
// Function purpose: generated callback event_func_3332 processes event block(s) 850_6. Actions/conditions:
//        850_6: sets RClick to 0.
void Frames::event_func_3332()
{
    // event 850_6 : sets RClick to 0
    {
        if (!(group_code_1)) goto event_850_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(750, str_rclick_1926)) != (0))) goto event_850_6_end;
        if (is_mouse_pressed(SDL_BUTTON_RIGHT)) goto event_850_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(750, str_rclick_1926, 0);
    }
    event_850_6_end: ;
}
// Function purpose: generated callback event_func_3333 processes event block(s) 851_6. Actions/conditions:
//        851_6: sets MouseUp to 0.
void Frames::event_func_3333()
{
    // event 851_6 : sets MouseUp to 0
    {
        if (!(group_code_1 && group_code_input_mousedown_1)) goto event_851_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(751, str_mouseup_1927)) == (1))) goto event_851_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(751, str_mouseup_1927, 0);
    }
    event_851_6_end: ;
}
// Function purpose: generated callback event_func_3334 processes event block(s) 852_6. Actions/conditions:
//        852_6: sets MouseUp to 1.
void Frames::event_func_3334()
{
    // event 852_6 : sets MouseUp to 1
    {
        if (!(group_code_1 && group_code_input_mousedown_1)) goto event_852_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(752, str_mousedown_1928)) == (1))) goto event_852_6_end;
        if (is_mouse_pressed(SDL_BUTTON_LEFT)) goto event_852_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(751, str_mouseup_1927, 1);
    }
    event_852_6_end: ;
}
// Function purpose: generated callback event_func_3335 processes event block(s) 853_6. Actions/conditions:
//        853_6: sets MouseDown to 0.
void Frames::event_func_3335()
{
    // event 853_6 : sets MouseDown to 0
    {
        if (!(group_code_1 && group_code_input_mousedown_1)) goto event_853_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(752, str_mousedown_1928)) == (1))) goto event_853_6_end;
        if (is_mouse_pressed(SDL_BUTTON_LEFT)) goto event_853_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(752, str_mousedown_1928, 0);
    }
    event_853_6_end: ;
}
// Function purpose: generated callback event_func_3336 processes event block(s) 854_6. Actions/conditions:
//        854_6: sets MouseDown to 1; sets MouseDownX to get_mouse_x()-sidePanel->get_x(); sets MouseDownY to
//        get_mouse_y()-sidePanel->get_y().
void Frames::event_func_3336()
{
    // event 854_6 : sets MouseDown to 1; sets MouseDownX to get_mouse_x()-sidePanel->get_x(); sets MouseDownY to get_mouse_y()-sidePanel->get_y()
    {
        if (!(group_code_1 && group_code_input_mousedown_1)) goto event_854_6_end;
        if (!(is_mouse_pressed(SDL_BUTTON_LEFT))) goto event_854_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(752, str_mousedown_1928)) == (0))) goto event_854_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(752, str_mousedown_1928, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(753, str_mousedownx_1929, get_mouse_x()-((Active*)get_instance(sidePanel_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(754, str_mousedowny_1930, get_mouse_y()-((Active*)get_instance(sidePanel_instances))->get_y());
    }
    event_854_6_end: ;
}
// Function purpose: generated callback event_func_3337 processes event block(s) 855_6. Actions/conditions:
//        855_6: sets MouseDrag to 0.
void Frames::event_func_3337()
{
    // event 855_6 : sets MouseDrag to 0
    {
        if (!(group_code_1 && group_code_input_mousedown_1)) goto event_855_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(752, str_mousedown_1928)) == (0))) goto event_855_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(751, str_mouseup_1927)) == (0))) goto event_855_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(755, str_mousedrag_1931)) != (0))) goto event_855_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(755, str_mousedrag_1931, 0);
    }
    event_855_6_end: ;
}
// Function purpose: generated callback event_func_3338 processes event block(s) 856_6. Actions/conditions:
//        856_6: sets MouseDrag to 1.
void Frames::event_func_3338()
{
    // event 856_6 : sets MouseDrag to 1
    {
        if (!(group_code_1 && group_code_input_mousedown_1)) goto event_856_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(752, str_mousedown_1928)) == (1))) goto event_856_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(755, str_mousedrag_1931)) == (0))) goto event_856_6_end;
        if (!((get_distance_int((get_mouse_x()-((Active*)get_instance(sidePanel_instances))->get_x()), (get_mouse_y()-((Active*)get_instance(sidePanel_instances))->get_y()), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(753, str_mousedownx_1929), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(754, str_mousedowny_1930))) >= (1))) goto event_856_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(755, str_mousedrag_1931, 1);
    }
    event_856_6_end: ;
}
// Function purpose: generated callback event_func_3339 processes event block(s) 857_6. Actions/conditions:
//        857_6: sets DirDown to 0.
void Frames::event_func_3339()
{
    // event 857_6 : sets DirDown to 0
    {
        if (!(group_code_1)) goto event_857_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(504, str_dirdown_1396)) == (1))) goto event_857_6_end;
        if (is_key_pressed(translate_string_to_key(translate_key_to_string(manager.up)))) goto event_857_6_end;
        if (is_key_pressed(translate_string_to_key(translate_key_to_string(manager.down)))) goto event_857_6_end;
        if (is_key_pressed(translate_string_to_key(translate_key_to_string(manager.left)))) goto event_857_6_end;
        if (is_key_pressed(translate_string_to_key(translate_key_to_string(manager.right)))) goto event_857_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(504, str_dirdown_1396, 0);
    }
    event_857_6_end: ;
}
// Function purpose: generated callback event_func_3340 processes event block(s) 858_6. Actions/conditions:
//        858_6: sets DirDown to 2.
void Frames::event_func_3340()
{
    // event 858_6 : sets DirDown to 2
    bool or_result_858_6 = false;
    bool or_temp_result_858_6_0 = false;
    {
        if (!(group_code_1)) goto or_event_858_6_0_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.left))))) goto or_event_858_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(504, str_dirdown_1396)) == (0))) goto or_event_858_6_0_end;
        or_result_858_6 = true;
        or_temp_result_858_6_0 = true;
    }
    or_event_858_6_0_end: ;
    // event 858_6 : sets DirDown to 2
    bool or_temp_result_858_6_1 = false;
    {
        if (!(group_code_1)) goto or_event_858_6_1_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.down))))) goto or_event_858_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(504, str_dirdown_1396)) == (0))) goto or_event_858_6_1_end;
        or_result_858_6 = true;
        or_temp_result_858_6_1 = true;
    }
    or_event_858_6_1_end: ;
    // event 858_6 : sets DirDown to 2
    bool or_temp_result_858_6_2 = false;
    {
        if (!(group_code_1)) goto or_event_858_6_2_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.right))))) goto or_event_858_6_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(504, str_dirdown_1396)) == (0))) goto or_event_858_6_2_end;
        or_result_858_6 = true;
        or_temp_result_858_6_2 = true;
    }
    or_event_858_6_2_end: ;
    // event 858_6 : sets DirDown to 2
    bool or_temp_result_858_6_3 = false;
    {
        if (!(group_code_1)) goto or_event_858_6_3_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.up))))) goto or_event_858_6_3_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(504, str_dirdown_1396)) == (0))) goto or_event_858_6_3_end;
        or_result_858_6 = true;
        or_temp_result_858_6_3 = true;
        or_event_858_6_3_end: ;
        if (!or_result_858_6) goto or_final_or_event_858_6_3_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(504, str_dirdown_1396, 2);
        }
    }
    or_final_or_event_858_6_3_end: ;
}
// Function purpose: generated callback event_func_3341 processes event block(s) 859_6. Actions/conditions:
//        859_6: saves the current object selection.
void Frames::event_func_3341()
{
    // event 859_6 : saves the current object selection
    bool or_result_859_6 = false;
    bool or_temp_result_859_6_0 = false;
    {
        if (!(group_code_1)) goto or_event_859_6_0_end;
        if (!(is_key_pressed(translate_string_to_key(translate_key_to_string(manager.up))))) goto or_event_859_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_string(756, str_zip_1932)) == (empty_string))) goto or_event_859_6_0_end;
        playerBase_instances.clear_selection();
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto or_event_859_6_0_end;
        or_result_859_6 = true;
        or_temp_result_859_6_0 = true;
    }
    or_event_859_6_0_end: ;
    playerBase_instances.clear_saved_selection();
    if (or_temp_result_859_6_0) {
        playerBase_instances.save_selection();
    }
    // event 859_6 : saves the current object selection
    bool or_temp_result_859_6_1 = false;
    {
        if (!(group_code_1)) goto or_event_859_6_1_end;
        if (!(is_key_pressed(translate_string_to_key(translate_key_to_string(manager.down))))) goto or_event_859_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_string(756, str_zip_1932)) == (empty_string))) goto or_event_859_6_1_end;
        playerBase_instances.clear_selection();
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto or_event_859_6_1_end;
        or_result_859_6 = true;
        or_temp_result_859_6_1 = true;
    }
    or_event_859_6_1_end: ;
    if (or_temp_result_859_6_1) {
        playerBase_instances.save_selection();
    }
    // event 859_6 : saves the current object selection
    bool or_temp_result_859_6_2 = false;
    {
        if (!(group_code_1)) goto or_event_859_6_2_end;
        if (!(is_key_pressed(translate_string_to_key(translate_key_to_string(manager.left))))) goto or_event_859_6_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_string(756, str_zip_1932)) == (empty_string))) goto or_event_859_6_2_end;
        playerBase_instances.clear_selection();
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto or_event_859_6_2_end;
        or_result_859_6 = true;
        or_temp_result_859_6_2 = true;
    }
    or_event_859_6_2_end: ;
    if (or_temp_result_859_6_2) {
        playerBase_instances.save_selection();
    }
    // event 859_6 : saves the current object selection
    bool or_temp_result_859_6_3 = false;
    {
        if (!(group_code_1)) goto or_event_859_6_3_end;
        if (!(is_key_pressed(translate_string_to_key(translate_key_to_string(manager.right))))) goto or_event_859_6_3_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_string(756, str_zip_1932)) == (empty_string))) goto or_event_859_6_3_end;
        playerBase_instances.clear_selection();
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto or_event_859_6_3_end;
        or_result_859_6 = true;
        or_temp_result_859_6_3 = true;
        or_event_859_6_3_end: ;
        if (or_temp_result_859_6_3) {
            playerBase_instances.save_selection();
        }
        if (!or_result_859_6) goto or_final_or_event_859_6_3_end;
        playerBase_instances.empty_selection();
        if (or_temp_result_859_6_0 || or_temp_result_859_6_1 || or_temp_result_859_6_2 || or_temp_result_859_6_3) {
            playerBase_instances.restore_selection();
        }
        if (!group_code_input_move_keys_movement_1) {
            group_code_input_move_keys_movement_1 = true;
        }
    }
    or_final_or_event_859_6_3_end: ;
}
// Function purpose: generated callback event_func_3342 processes event block(s) 860_6. Actions/conditions:
//        860_6: sets OnUnit to 0.
void Frames::event_func_3342()
{
    // event 860_6 : sets OnUnit to 0
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_860_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_18)) goto event_860_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(505, str_onunit_1397, 0);
    }
    event_860_6_end: ;
}
// Function purpose: generated callback event_func_3343 processes event block(s) 861_6. Actions/conditions:
//        861_6: sets OnUnit to 1.
void Frames::event_func_3343()
{
    // event 861_6 : sets OnUnit to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_861_6_end;
        playerBase_instances.clear_selection();
        qualifier_18.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_18)) goto event_861_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(505, str_onunit_1397, 1);
    }
    event_861_6_end: ;
}
// Function purpose: generated callback event_func_3344 processes event block(s) 862_6. Actions/conditions:
//        862_6: sets Blocked to 0; sets the selected object's vertical position to playerBase->get_y()-2.
void Frames::event_func_3344()
{
    // event 862_6 : sets Blocked to 0; sets the selected object's vertical position to playerBase->get_y()-2
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_862_6_end;
        if (!(is_key_pressed(translate_string_to_key(translate_key_to_string(manager.up))))) goto event_862_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y()))) goto event_862_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_862_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 0);
        VITA_MOVE(((Active*)get_instance(playerBase_instances)), false, -2);
        {
            loop_move_check_running = true;
            int times = int(1);
            loop_move_check_index = 0;
            while (loop_move_check_index < times) {
                loop_move_check_6();
                if (!loop_move_check_running) break;
                loop_move_check_index++;
            }
        }
        {
            loop_move_check_y_running = true;
            int times = int(1);
            loop_move_check_y_index = 0;
            while (loop_move_check_y_index < times) {
                loop_move_check_y_6();
                if (!loop_move_check_y_running) break;
                loop_move_check_y_index++;
            }
        }
        {
            loop_add_step_running = true;
            int times = int(1);
            loop_add_step_index = 0;
            while (loop_add_step_index < times) {
                loop_add_step_6();
                if (!loop_add_step_running) break;
                loop_add_step_index++;
            }
        }
    }
    event_862_6_end: ;
}
// Function purpose: generated callback event_func_3345 processes event block(s) 863_6. Actions/conditions:
//        863_6: sets Blocked to 0; sets the selected object's vertical position to playerBase->get_y()+2.
void Frames::event_func_3345()
{
    // event 863_6 : sets Blocked to 0; sets the selected object's vertical position to playerBase->get_y()+2
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_863_6_end;
        if (!(is_key_pressed(translate_string_to_key(translate_key_to_string(manager.down))))) goto event_863_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y()))) goto event_863_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_863_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 0);
        VITA_MOVE(((Active*)get_instance(playerBase_instances)), false, 2);
        {
            loop_move_check_running = true;
            int times = int(1);
            loop_move_check_index = 0;
            while (loop_move_check_index < times) {
                loop_move_check_6();
                if (!loop_move_check_running) break;
                loop_move_check_index++;
            }
        }
        {
            loop_move_check_y_running = true;
            int times = int(1);
            loop_move_check_y_index = 0;
            while (loop_move_check_y_index < times) {
                loop_move_check_y_6();
                if (!loop_move_check_y_running) break;
                loop_move_check_y_index++;
            }
        }
        {
            loop_add_step_running = true;
            int times = int(1);
            loop_add_step_index = 0;
            while (loop_add_step_index < times) {
                loop_add_step_6();
                if (!loop_add_step_running) break;
                loop_add_step_index++;
            }
        }
    }
    event_863_6_end: ;
}
// Function purpose: generated callback event_func_3346 processes event block(s) 864_6. Actions/conditions:
//        864_6: sets Blocked to 0; sets the selected object's horizontal position to playerBase->get_x()-2.
void Frames::event_func_3346()
{
    // event 864_6 : sets Blocked to 0; sets the selected object's horizontal position to playerBase->get_x()-2
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_864_6_end;
        if (!(is_key_pressed(translate_string_to_key(translate_key_to_string(manager.left))))) goto event_864_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x()))) goto event_864_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_864_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 0);
        VITA_MOVE(((Active*)get_instance(playerBase_instances)), true, -2);
        {
            loop_move_check_running = true;
            int times = int(1);
            loop_move_check_index = 0;
            while (loop_move_check_index < times) {
                loop_move_check_6();
                if (!loop_move_check_running) break;
                loop_move_check_index++;
            }
        }
        {
            loop_move_check_x_running = true;
            int times = int(1);
            loop_move_check_x_index = 0;
            while (loop_move_check_x_index < times) {
                loop_move_check_x_6();
                if (!loop_move_check_x_running) break;
                loop_move_check_x_index++;
            }
        }
        {
            loop_add_step_running = true;
            int times = int(1);
            loop_add_step_index = 0;
            while (loop_add_step_index < times) {
                loop_add_step_6();
                if (!loop_add_step_running) break;
                loop_add_step_index++;
            }
        }
    }
    event_864_6_end: ;
}
// Function purpose: generated callback event_func_3347 processes event block(s) 865_6. Actions/conditions:
//        865_6: sets Blocked to 0; sets the selected object's horizontal position to playerBase->get_x()+2.
void Frames::event_func_3347()
{
    // event 865_6 : sets Blocked to 0; sets the selected object's horizontal position to playerBase->get_x()+2
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_865_6_end;
        if (!(is_key_pressed(translate_string_to_key(translate_key_to_string(manager.right))))) goto event_865_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x()))) goto event_865_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_865_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 0);
        VITA_MOVE(((Active*)get_instance(playerBase_instances)), true, 2);
        {
            loop_move_check_running = true;
            int times = int(1);
            loop_move_check_index = 0;
            while (loop_move_check_index < times) {
                loop_move_check_6();
                if (!loop_move_check_running) break;
                loop_move_check_index++;
            }
        }
        {
            loop_move_check_x_running = true;
            int times = int(1);
            loop_move_check_x_index = 0;
            while (loop_move_check_x_index < times) {
                loop_move_check_x_6();
                if (!loop_move_check_x_running) break;
                loop_move_check_x_index++;
            }
        }
        {
            loop_add_step_running = true;
            int times = int(1);
            loop_add_step_index = 0;
            while (loop_add_step_index < times) {
                loop_add_step_6();
                if (!loop_add_step_running) break;
                loop_add_step_index++;
            }
        }
    }
    event_865_6_end: ;
}
// Function purpose: generated callback event_func_3348 processes event block(s) 866_6. Actions/conditions:
//        866_6: sets Blocked to 0; sets the selected object's vertical position to ((Active*)get_single(qualifier_18,
//        default_active_instance))->get_y()-8.
void Frames::event_func_3348()
{
    // event 866_6 : sets Blocked to 0; sets the selected object's vertical position to ((Active*)get_single(qualifier_18, default_active_instance))->get_y()-8
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_866_6_end;
        if (!(is_key_pressed(translate_string_to_key(translate_key_to_string(manager.up))))) goto event_866_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y()))) goto event_866_6_end;
        playerBase_instances.clear_selection();
        qualifier_18.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_18)) goto event_866_6_end;
        if (!((((Active*)get_single(qualifier_18, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_866_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_866_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_866_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 0);
        ((Active*)get_instance(playerBase_instances))->set_y(((Active*)get_single(qualifier_18, default_active_instance))->get_y()-8);
        {
            loop_move_check_running = true;
            int times = int(1);
            loop_move_check_index = 0;
            while (loop_move_check_index < times) {
                loop_move_check_6();
                if (!loop_move_check_running) break;
                loop_move_check_index++;
            }
        }
        {
            loop_move_check_y_running = true;
            int times = int(1);
            loop_move_check_y_index = 0;
            while (loop_move_check_y_index < times) {
                loop_move_check_y_6();
                if (!loop_move_check_y_running) break;
                loop_move_check_y_index++;
            }
        }
        {
            loop_add_step_running = true;
            int times = int(1);
            loop_add_step_index = 0;
            while (loop_add_step_index < times) {
                loop_add_step_6();
                if (!loop_add_step_running) break;
                loop_add_step_index++;
            }
        }
    }
    event_866_6_end: ;
}
// Function purpose: generated callback event_func_3349 processes event block(s) 867_6. Actions/conditions:
//        867_6: sets Blocked to 0; sets the selected object's vertical position to ((Active*)get_single(qualifier_18,
//        default_active_instance))->get_y()+20.
void Frames::event_func_3349()
{
    // event 867_6 : sets Blocked to 0; sets the selected object's vertical position to ((Active*)get_single(qualifier_18, default_active_instance))->get_y()+20
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_867_6_end;
        if (!(is_key_pressed(translate_string_to_key(translate_key_to_string(manager.down))))) goto event_867_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y()))) goto event_867_6_end;
        playerBase_instances.clear_selection();
        qualifier_18.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_18)) goto event_867_6_end;
        if (!((((Active*)get_single(qualifier_18, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_867_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_867_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_867_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 0);
        ((Active*)get_instance(playerBase_instances))->set_y(((Active*)get_single(qualifier_18, default_active_instance))->get_y()+20);
        {
            loop_move_check_running = true;
            int times = int(1);
            loop_move_check_index = 0;
            while (loop_move_check_index < times) {
                loop_move_check_6();
                if (!loop_move_check_running) break;
                loop_move_check_index++;
            }
        }
        {
            loop_move_check_y_running = true;
            int times = int(1);
            loop_move_check_y_index = 0;
            while (loop_move_check_y_index < times) {
                loop_move_check_y_6();
                if (!loop_move_check_y_running) break;
                loop_move_check_y_index++;
            }
        }
        {
            loop_add_step_running = true;
            int times = int(1);
            loop_add_step_index = 0;
            while (loop_add_step_index < times) {
                loop_add_step_6();
                if (!loop_add_step_running) break;
                loop_add_step_index++;
            }
        }
    }
    event_867_6_end: ;
}
// Function purpose: generated callback event_func_3350 processes event block(s) 868_6. Actions/conditions:
//        868_6: sets Blocked to 0; sets the selected object's horizontal position to playerBase->get_x()-16; sets
//        the selected object's vertical position to playerBase->get_y()+6.
void Frames::event_func_3350()
{
    // event 868_6 : sets Blocked to 0; sets the selected object's horizontal position to playerBase->get_x()-16; sets the selected object's vertical position to playerBase->get_y()+6
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_868_6_end;
        if (!(is_key_pressed(translate_string_to_key(translate_key_to_string(manager.left))))) goto event_868_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x()))) goto event_868_6_end;
        playerBase_instances.clear_selection();
        qualifier_18.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_18)) goto event_868_6_end;
        if (!((((Active*)get_single(qualifier_18, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_868_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_868_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_868_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 0);
        ((Active*)get_instance(playerBase_instances))->set_x(((Active*)get_instance(playerBase_instances))->get_x()-16);
        ((Active*)get_instance(playerBase_instances))->set_y(((Active*)get_instance(playerBase_instances))->get_y()+6);
        {
            loop_move_check_running = true;
            int times = int(1);
            loop_move_check_index = 0;
            while (loop_move_check_index < times) {
                loop_move_check_6();
                if (!loop_move_check_running) break;
                loop_move_check_index++;
            }
        }
        {
            loop_move_check_x_running = true;
            int times = int(1);
            loop_move_check_x_index = 0;
            while (loop_move_check_x_index < times) {
                loop_move_check_x_6();
                if (!loop_move_check_x_running) break;
                loop_move_check_x_index++;
            }
        }
        {
            loop_move_check_y_running = true;
            int times = int(1);
            loop_move_check_y_index = 0;
            while (loop_move_check_y_index < times) {
                loop_move_check_y_6();
                if (!loop_move_check_y_running) break;
                loop_move_check_y_index++;
            }
        }
        {
            loop_add_step_running = true;
            int times = int(1);
            loop_add_step_index = 0;
            while (loop_add_step_index < times) {
                loop_add_step_6();
                if (!loop_add_step_running) break;
                loop_add_step_index++;
            }
        }
    }
    event_868_6_end: ;
}
// Function purpose: generated callback event_func_3351 processes event block(s) 869_6. Actions/conditions:
//        869_6: sets Blocked to 0; sets the selected object's horizontal position to playerBase->get_x()+16; sets
//        the selected object's vertical position to playerBase->get_y()+6.
void Frames::event_func_3351()
{
    // event 869_6 : sets Blocked to 0; sets the selected object's horizontal position to playerBase->get_x()+16; sets the selected object's vertical position to playerBase->get_y()+6
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_869_6_end;
        if (!(is_key_pressed(translate_string_to_key(translate_key_to_string(manager.right))))) goto event_869_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x()))) goto event_869_6_end;
        playerBase_instances.clear_selection();
        qualifier_18.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_18)) goto event_869_6_end;
        if (!((((Active*)get_single(qualifier_18, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_869_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_869_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_869_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 0);
        ((Active*)get_instance(playerBase_instances))->set_x(((Active*)get_instance(playerBase_instances))->get_x()+16);
        ((Active*)get_instance(playerBase_instances))->set_y(((Active*)get_instance(playerBase_instances))->get_y()+6);
        {
            loop_move_check_running = true;
            int times = int(1);
            loop_move_check_index = 0;
            while (loop_move_check_index < times) {
                loop_move_check_6();
                if (!loop_move_check_running) break;
                loop_move_check_index++;
            }
        }
        {
            loop_move_check_x_running = true;
            int times = int(1);
            loop_move_check_x_index = 0;
            while (loop_move_check_x_index < times) {
                loop_move_check_x_6();
                if (!loop_move_check_x_running) break;
                loop_move_check_x_index++;
            }
        }
        {
            loop_move_check_y_running = true;
            int times = int(1);
            loop_move_check_y_index = 0;
            while (loop_move_check_y_index < times) {
                loop_move_check_y_6();
                if (!loop_move_check_y_running) break;
                loop_move_check_y_index++;
            }
        }
        {
            loop_add_step_running = true;
            int times = int(1);
            loop_add_step_index = 0;
            while (loop_add_step_index < times) {
                loop_add_step_6();
                if (!loop_add_step_running) break;
                loop_add_step_index++;
            }
        }
    }
    event_869_6_end: ;
}
// Function purpose: generated callback event_func_3352 processes event block(s) 909_6. Actions/conditions:
//        909_6: sets DirDown to 1.
void Frames::event_func_3352()
{
    // event 909_6 : sets DirDown to 1
    {
        if (!(group_code_1)) goto event_909_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(504, str_dirdown_1396)) == (2))) goto event_909_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(504, str_dirdown_1396, 1);
    }
    event_909_6_end: ;
}
// Function purpose: generated callback event_func_3353 processes event block(s) 910_6. Actions/conditions:
//        910_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_3353()
{
    // event 910_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_910_6_end;
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_910_6_end;
            group_code_input_move_keys_movement_1 = false;
    
    }
    event_910_6_end: ;
}
// Function purpose: generated callback event_func_3354 processes event block(s) 911_6. Actions/conditions:
//        911_6: checks scene is active; skips if the event-specific game state condition is met; skips if dialog is
//        open; this handler gates a game event without a direct va.
void Frames::event_func_3354()
{
    // event 911_6 : checks scene is active; skips if the event-specific game state condition is met; skips if dialog is open; this handler gates a game event without a direct va
    {
        if (!(group_code_1)) goto event_911_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) != (((Active*)get_instance(playerBase_instances))->get_y()))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(6)) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_911_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_911_6_end;
        {
            loop_align_char_y_running = true;
            int times = int(2);
            loop_align_char_y_index = 0;
            while (loop_align_char_y_index < times) {
                loop_align_char_y_6();
                if (!loop_align_char_y_running) break;
                loop_align_char_y_index++;
            }
        }
        {
            loop_cancel_actions_running = true;
            int times = int(1);
            loop_cancel_actions_index = 0;
            while (loop_cancel_actions_index < times) {
                loop_cancel_actions_6();
                if (!loop_cancel_actions_running) break;
                loop_cancel_actions_index++;
            }
        }
    }
    event_911_6_end: ;
}
// Function purpose: generated callback event_func_3355 processes event block(s) 914_6. Actions/conditions:
//        914_6: checks scene is active; skips if the event-specific game state condition is met; skips if dialog is
//        open; this handler gates a game event without a direct va.
void Frames::event_func_3355()
{
    // event 914_6 : checks scene is active; skips if the event-specific game state condition is met; skips if dialog is open; this handler gates a game event without a direct va
    {
        if (!(group_code_1)) goto event_914_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) != (((Active*)get_instance(playerBase_instances))->get_x()))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(6)) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_914_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_914_6_end;
        {
            loop_align_char_x_running = true;
            int times = int(2);
            loop_align_char_x_index = 0;
            while (loop_align_char_x_index < times) {
                loop_align_char_x_6();
                if (!loop_align_char_x_running) break;
                loop_align_char_x_index++;
            }
        }
        {
            loop_cancel_actions_running = true;
            int times = int(1);
            loop_cancel_actions_index = 0;
            while (loop_cancel_actions_index < times) {
                loop_cancel_actions_6();
                if (!loop_cancel_actions_running) break;
                loop_cancel_actions_index++;
            }
        }
    }
    event_914_6_end: ;
}
// Function purpose: generated callback event_func_3356 processes event block(s) 918_6. Actions/conditions:
//        918_6: saves the current object selection; saves the current object selection.
void Frames::event_func_3356()
{
    // event 918_6 : saves the current object selection; saves the current object selection
    bool or_result_918_6 = false;
    bool or_temp_result_918_6_0 = false;
    {
        if (!(group_code_1)) goto or_event_918_6_0_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.up))))) goto or_event_918_6_0_end;
        playerBase_instances.clear_selection();
        qualifier_1.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_1)) goto or_event_918_6_0_end;
        or_result_918_6 = true;
        or_temp_result_918_6_0 = true;
    }
    or_event_918_6_0_end: ;
    qualifier_1.clear_saved_selection();
    playerBase_instances.clear_saved_selection();
    if (or_temp_result_918_6_0) {
        qualifier_1.save_selection();
        playerBase_instances.save_selection();
    }
    // event 918_6 : saves the current object selection; saves the current object selection
    bool or_temp_result_918_6_1 = false;
    {
        if (!(group_code_1)) goto or_event_918_6_1_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.down))))) goto or_event_918_6_1_end;
        playerBase_instances.clear_selection();
        qualifier_1.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_1)) goto or_event_918_6_1_end;
        or_result_918_6 = true;
        or_temp_result_918_6_1 = true;
    }
    or_event_918_6_1_end: ;
    if (or_temp_result_918_6_1) {
        qualifier_1.save_selection();
        playerBase_instances.save_selection();
    }
    // event 918_6 : saves the current object selection; saves the current object selection
    bool or_temp_result_918_6_2 = false;
    {
        if (!(group_code_1)) goto or_event_918_6_2_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.left))))) goto or_event_918_6_2_end;
        playerBase_instances.clear_selection();
        qualifier_1.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_1)) goto or_event_918_6_2_end;
        or_result_918_6 = true;
        or_temp_result_918_6_2 = true;
    }
    or_event_918_6_2_end: ;
    if (or_temp_result_918_6_2) {
        qualifier_1.save_selection();
        playerBase_instances.save_selection();
    }
    // event 918_6 : saves the current object selection; saves the current object selection
    bool or_temp_result_918_6_3 = false;
    {
        if (!(group_code_1)) goto or_event_918_6_3_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.right))))) goto or_event_918_6_3_end;
        playerBase_instances.clear_selection();
        qualifier_1.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_1)) goto or_event_918_6_3_end;
        or_result_918_6 = true;
        or_temp_result_918_6_3 = true;
        or_event_918_6_3_end: ;
        if (or_temp_result_918_6_3) {
            qualifier_1.save_selection();
            playerBase_instances.save_selection();
        }
        if (!or_result_918_6) goto or_final_or_event_918_6_3_end;
        qualifier_1.empty_selection();
        playerBase_instances.empty_selection();
        if (or_temp_result_918_6_0 || or_temp_result_918_6_1 || or_temp_result_918_6_2 || or_temp_result_918_6_3) {
            qualifier_1.restore_selection();
        }
        if (or_temp_result_918_6_0 || or_temp_result_918_6_1 || or_temp_result_918_6_2 || or_temp_result_918_6_3) {
            playerBase_instances.restore_selection();
        }
        if (!group_code_input_dismount_1) {
            group_code_input_dismount_1 = true;
        }
    }
    or_final_or_event_918_6_3_end: ;
}
// Function purpose: generated callback event_func_3357 processes event block(s) 919_6. Actions/conditions:
//        919_6: adds a unmountcheck 197 instance; sets the selected object's layer to playerBase->layer->index+1-1;
//        sets the selected object's direction to 24; plus 6 more actions.
void Frames::event_func_3357()
{
    // event 919_6 : adds a unmountcheck 197 instance; sets the selected object's layer to playerBase->layer->index+1-1; sets the selected object's direction to 24; plus 6 more actions
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_919_6_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.up))))) goto event_919_6_end;
        playerBase_instances.clear_selection();
        qualifier_1.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_1)) goto event_919_6_end;
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (1))) { it.deselect(); continue; }
        }
        if (!qualifier_1.has_selection()) goto event_919_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_919_6_end;
        unmountcheck_197_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_unmountcheck_197(0, 0), 1);
            unmountcheck_197_instances.add_back();
        }
        for (ObjectIterator it(unmountcheck_197_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->set_x(((Active*)get_single(qualifier_1, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->set_y(((Active*)get_single(qualifier_1, it.current_index, default_active_instance))->get_y()-8);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(538, str_blocked_1439, 0);
        {
            loop_climb_off_running = true;
            int times = int(1);
            loop_climb_off_index = 0;
            while (loop_climb_off_index < times) {
                loop_climb_off_6();
                if (!loop_climb_off_running) break;
                loop_climb_off_index++;
            }
        }
    }
    event_919_6_end: ;
}
// Function purpose: generated callback event_func_3358 processes event block(s) 920_6. Actions/conditions:
//        920_6: adds a unmountcheck 197 instance; sets the selected object's layer to playerBase->layer->index+1-1;
//        sets the selected object's direction to 24; plus 6 more actions.
void Frames::event_func_3358()
{
    // event 920_6 : adds a unmountcheck 197 instance; sets the selected object's layer to playerBase->layer->index+1-1; sets the selected object's direction to 24; plus 6 more actions
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_920_6_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.down))))) goto event_920_6_end;
        playerBase_instances.clear_selection();
        qualifier_1.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_1)) goto event_920_6_end;
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (1))) { it.deselect(); continue; }
        }
        if (!qualifier_1.has_selection()) goto event_920_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_920_6_end;
        unmountcheck_197_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_unmountcheck_197(0, 0), 1);
            unmountcheck_197_instances.add_back();
        }
        for (ObjectIterator it(unmountcheck_197_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->set_x(((Active*)get_single(qualifier_1, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->set_y(((Active*)get_single(qualifier_1, it.current_index, default_active_instance))->get_y()+24);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(538, str_blocked_1439, 0);
        {
            loop_climb_off_running = true;
            int times = int(1);
            loop_climb_off_index = 0;
            while (loop_climb_off_index < times) {
                loop_climb_off_6();
                if (!loop_climb_off_running) break;
                loop_climb_off_index++;
            }
        }
    }
    event_920_6_end: ;
}
// Function purpose: generated callback event_func_3359 processes event block(s) 921_6. Actions/conditions:
//        921_6: adds a unmountcheck 197 instance; sets the selected object's layer to playerBase->layer->index+1-1;
//        sets the selected object's direction to 24; plus 6 more actions.
void Frames::event_func_3359()
{
    // event 921_6 : adds a unmountcheck 197 instance; sets the selected object's layer to playerBase->layer->index+1-1; sets the selected object's direction to 24; plus 6 more actions
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_921_6_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.right))))) goto event_921_6_end;
        playerBase_instances.clear_selection();
        qualifier_1.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_1)) goto event_921_6_end;
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (1))) { it.deselect(); continue; }
        }
        if (!qualifier_1.has_selection()) goto event_921_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_921_6_end;
        unmountcheck_197_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_unmountcheck_197(0, 0), 1);
            unmountcheck_197_instances.add_back();
        }
        for (ObjectIterator it(unmountcheck_197_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->set_x(((Active*)get_single(qualifier_1, it.current_index, default_active_instance))->get_x()+24);
            ((Active*)*it)->set_y(((Active*)get_single(qualifier_1, it.current_index, default_active_instance))->get_y()+8);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(538, str_blocked_1439, 0);
        {
            loop_climb_off_running = true;
            int times = int(1);
            loop_climb_off_index = 0;
            while (loop_climb_off_index < times) {
                loop_climb_off_6();
                if (!loop_climb_off_running) break;
                loop_climb_off_index++;
            }
        }
    }
    event_921_6_end: ;
}
// Function purpose: generated callback event_func_3360 processes event block(s) 922_6. Actions/conditions:
//        922_6: adds a unmountcheck 197 instance; sets the selected object's layer to playerBase->layer->index+1-1;
//        sets the selected object's direction to 24; plus 6 more actions.
void Frames::event_func_3360()
{
    // event 922_6 : adds a unmountcheck 197 instance; sets the selected object's layer to playerBase->layer->index+1-1; sets the selected object's direction to 24; plus 6 more actions
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_922_6_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.left))))) goto event_922_6_end;
        playerBase_instances.clear_selection();
        qualifier_1.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_1)) goto event_922_6_end;
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (1))) { it.deselect(); continue; }
        }
        if (!qualifier_1.has_selection()) goto event_922_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_922_6_end;
        unmountcheck_197_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_unmountcheck_197(0, 0), 1);
            unmountcheck_197_instances.add_back();
        }
        for (ObjectIterator it(unmountcheck_197_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->set_x(((Active*)get_single(qualifier_1, it.current_index, default_active_instance))->get_x()-8);
            ((Active*)*it)->set_y(((Active*)get_single(qualifier_1, it.current_index, default_active_instance))->get_y()+8);
        }
        {
            loop_climb_off_running = true;
            int times = int(1);
            loop_climb_off_index = 0;
            while (loop_climb_off_index < times) {
                loop_climb_off_6();
                if (!loop_climb_off_running) break;
                loop_climb_off_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(538, str_blocked_1439, 0);
    }
    event_922_6_end: ;
}
// Function purpose: generated callback event_func_3361 processes event block(s) 937_6. Actions/conditions:
//        937_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 14 more actions.
void Frames::event_func_3361()
{
    // event 937_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 14 more actions
    {
        if (!(group_code_1)) goto event_937_6_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto event_937_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(12))) goto event_937_6_end;
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(1))) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto event_937_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(ventCover_instances));
            if (obj1 == NULL) goto compare_937_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_937_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_937_6_end;
        }
        compare_937_6_0_end: ;
        playerBase_instances.clear_selection();
        qualifier_18.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_18)) goto event_937_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_937_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_937_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_937_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            FrameObject * parent = ((Active*)get_single(ventCover_instances));
            if (parent == NULL) goto pos_end_937_6_1;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_937_6_1: ;
        }
        ((Active*)get_instance(playerBase_instances))->set_layer(4-1);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_937_6_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_937_6_2: ;
        }
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_layer(4-1);
        }
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
        ((LayerObject*)get_instance(layerobject_37_instances))->show_layer(4-1);
        ((LayerObject*)get_instance(layerobject_37_instances))->set_alpha_coefficient(4-1, 0);
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
        ventDarkness_instances.clear_selection();
        for (ObjectIterator it(ventDarkness_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(40);
        }
        media.play_id(SOUND_DOOR_0, 1-1);
    }
    event_937_6_end: ;
}
// Function purpose: generated callback event_func_3362 processes event block(s) 938_6. Actions/conditions:
//        938_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 10 more actions.
void Frames::event_func_3362()
{
    // event 938_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 10 more actions
    {
        if (!(group_code_1)) goto event_938_6_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto event_938_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(14))) goto event_938_6_end;
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(1))) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto event_938_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(ventCover_instances));
            if (obj1 == NULL) goto compare_938_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_938_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_938_6_end;
        }
        compare_938_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (4))) goto event_938_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_938_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_938_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((Active*)get_instance(playerBase_instances))->set_layer(2-1);
        {
            FrameObject * parent = ((Active*)get_single(ventCover_instances));
            if (parent == NULL) goto pos_end_938_6_1;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 24);
            pos_end_938_6_1: ;
        }
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_layer(2-1);
        }
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_938_6_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_938_6_2: ;
        }
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
            loop_hide_vent_layer_running = true;
            int times = int(1);
            loop_hide_vent_layer_index = 0;
            while (loop_hide_vent_layer_index < times) {
                loop_hide_vent_layer_6();
                if (!loop_hide_vent_layer_running) break;
                loop_hide_vent_layer_index++;
            }
        }
        media.play_id(SOUND_DOOR_0, 1-1);
    }
    event_938_6_end: ;
}
// Function purpose: generated callback event_func_3363 processes event block(s) 939_6. Actions/conditions:
//        939_6: shows a game layer; changes the selected object transparency; changes the selected object
//        transparency.
void Frames::event_func_3363()
{
    // event 939_6 : shows a game layer; changes the selected object transparency; changes the selected object transparency
    {
        if (!(group_code_1)) goto event_939_6_end;
        playerBase_instances.clear_selection();
        qualifier_18.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_18)) goto event_939_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_939_6_end;
        if (!((((Active*)get_single(qualifier_18, default_active_instance))->layer->index+1) == (2))) goto event_939_6_end;
        if (layers[4-1].visible) goto event_939_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_939_6_end;
        ((LayerObject*)get_instance(layerobject_37_instances))->show_layer(4-1);
        ((LayerObject*)get_instance(layerobject_37_instances))->set_alpha_coefficient(4-1, 100);
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
    }
    event_939_6_end: ;
}
