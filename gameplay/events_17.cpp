#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_guard_see_item_6()
{
    event_func_1273();
}
// Function purpose: generated callback event_func_1274 processes event block(s) 2979_6. Actions/conditions:
//        2979_6: unlocks the TopWorld achievement.
void Frames::event_func_1274()
{
    // event 2979_6 : unlocks the TopWorld achievement
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2979_6_end;
        if (((SteamObject*)get_instance(steamworks2_469_instances))->is_achievement_unlocked(str_topworld_1127)) goto event_2979_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->unlock_achievement(str_topworld_1127);
    }
    event_2979_6_end: ;
}
void Frames::loop_dtaf_achieve_chair_6()
{
    event_func_1274();
}
// Function purpose: generated callback event_func_1275 processes event block(s) 2951_6. Actions/conditions:
//        2951_6: sets the object position in the world.
void Frames::event_func_1275()
{
    // event 2951_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2951_6_end;
        visitationinmate_382_instances.clear_selection();
        for (ObjectIterator it(visitationinmate_382_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!visitationinmate_382_instances.has_selection()) goto event_2951_6_end;
        {
            FrameObject * parent = ((Active*)get_single(visitationinmate_382_instances));
            if (parent == NULL) goto pos_end_2951_6_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_2951_6_0: ;
        }
    }
    event_2951_6_end: ;
}
// Function purpose: generated callback event_func_1276 processes event block(s) 2952_6. Actions/conditions:
//        2952_6: sets the object position in the world; sets the selected object's direction to 24.
void Frames::event_func_1276()
{
    // event 2952_6 : sets the object position in the world; sets the selected object's direction to 24
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2952_6_end;
        dtafvillainchair_500_instances.clear_selection();
        for (ObjectIterator it(dtafvillainchair_500_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!dtafvillainchair_500_instances.has_selection()) goto event_2952_6_end;
        {
            FrameObject * parent = ((Active*)get_single(dtafvillainchair_500_instances));
            if (parent == NULL) goto pos_end_2952_6_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_2952_6_0: ;
        }
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        {
            loop_dtaf_achieve_chair_running = true;
            int times = int(1);
            loop_dtaf_achieve_chair_index = 0;
            while (loop_dtaf_achieve_chair_index < times) {
                loop_dtaf_achieve_chair_6();
                if (!loop_dtaf_achieve_chair_running) break;
                loop_dtaf_achieve_chair_index++;
            }
        }
    }
    event_2952_6_end: ;
}
// Function purpose: generated callback event_func_1277 processes event block(s) 2953_6. Actions/conditions:
//        2953_6: sets the object position in the world.
void Frames::event_func_1277()
{
    // event 2953_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2953_6_end;
        bedlounger_405_instances.clear_selection();
        for (ObjectIterator it(bedlounger_405_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!bedlounger_405_instances.has_selection()) goto event_2953_6_end;
        {
            FrameObject * parent = ((Active*)get_single(bedlounger_405_instances));
            if (parent == NULL) goto pos_end_2953_6_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_2953_6_0: ;
        }
    }
    event_2953_6_end: ;
}
// Function purpose: generated callback event_func_1278 processes event block(s) 2954_6. Actions/conditions:
//        2954_6: sets the object position in the world; sets the selected object's direction to 24; plays a sound or
//        music track.
void Frames::event_func_1278()
{
    // event 2954_6 : sets the object position in the world; sets the selected object's direction to 24; plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2954_6_end;
        hiding_379_instances.clear_selection();
        for (ObjectIterator it(hiding_379_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!hiding_379_instances.has_selection()) goto event_2954_6_end;
        {
            FrameObject * parent = ((Active*)get_single(hiding_379_instances));
            if (parent == NULL) goto pos_end_2954_6_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_2954_6_0: ;
        }
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        media.play_id(SOUND_DOOR_0, 1-1);
    }
    event_2954_6_end: ;
}
// Function purpose: generated callback event_func_1279 processes event block(s) 2955_6. Actions/conditions:
//        2955_6: sets the object position in the world; sets the selected object's direction to
//        ((Active*)get_single(canteenchair_312_instances, it.current_index,
//        default_active_instance))->get_direction().
void Frames::event_func_1279()
{
    // event 2955_6 : sets the object position in the world; sets the selected object's direction to ((Active*)get_single(canteenchair_312_instances, it.current_index, default_active_instance))->get_direction()
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2955_6_end;
        canteenchair_312_instances.clear_selection();
        for (ObjectIterator it(canteenchair_312_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!canteenchair_312_instances.has_selection()) goto event_2955_6_end;
        {
            FrameObject * parent = ((Active*)get_single(canteenchair_312_instances));
            if (parent == NULL) goto pos_end_2955_6_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_2955_6_0: ;
        }
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(canteenchair_312_instances, it.current_index, default_active_instance))->get_direction());
        }
    }
    event_2955_6_end: ;
}
// Function purpose: generated callback event_func_1280 processes event block(s) 2956_6. Actions/conditions:
//        2956_6: sets the object position in the world; sets the selected object's direction to
//        ((Active*)get_single(gym3_317_instances, it.current_index, default_active_instance))->get_direction().
void Frames::event_func_1280()
{
    // event 2956_6 : sets the object position in the world; sets the selected object's direction to ((Active*)get_single(gym3_317_instances, it.current_index, default_active_instance))->get_direction()
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2956_6_end;
        gym3_317_instances.clear_selection();
        for (ObjectIterator it(gym3_317_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!gym3_317_instances.has_selection()) goto event_2956_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_2956_6_end;
        {
            FrameObject * parent = ((Active*)get_single(gym3_317_instances));
            if (parent == NULL) goto pos_end_2956_6_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 4);
            pos_end_2956_6_0: ;
        }
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(gym3_317_instances, it.current_index, default_active_instance))->get_direction());
        }
    }
    event_2956_6_end: ;
}
// Function purpose: generated callback event_func_1281 processes event block(s) 2957_6. Actions/conditions:
//        2957_6: sets SleepMenu to 1; sets the object position in the world; sets the selected object's direction to
//        ((Active*)get_single(bedplayer_338_instances, default_active_instance))->get_direction().
void Frames::event_func_1281()
{
    // event 2957_6 : sets SleepMenu to 1; sets the object position in the world; sets the selected object's direction to ((Active*)get_single(bedplayer_338_instances, default_active_instance))->get_direction()
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2957_6_end;
        bedplayer_338_instances.clear_selection();
        for (ObjectIterator it(bedplayer_338_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(16777216))) { it.deselect(); continue; }
        }
        if (!bedplayer_338_instances.has_selection()) goto event_2957_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(338, str_sleepmenu_1128, 1);
        {
            FrameObject * parent = ((Active*)get_single(bedplayer_338_instances));
            if (parent == NULL) goto pos_end_2957_6_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 10);
            pos_end_2957_6_0: ;
        }
        ((Active*)get_instance(playerBase_instances))->set_direction(((Active*)get_single(bedplayer_338_instances, default_active_instance))->get_direction());
    }
    event_2957_6_end: ;
}
// Function purpose: generated callback event_func_1282 processes event block(s) 2958_6. Actions/conditions:
//        2958_6: sets SleepMenu to 1; sets the object position in the world; sets the selected object's direction to
//        ((Active*)get_single(bedplayer_338_instances, default_active_instance))->get_direction().
void Frames::event_func_1282()
{
    // event 2958_6 : sets SleepMenu to 1; sets the object position in the world; sets the selected object's direction to ((Active*)get_single(bedplayer_338_instances, default_active_instance))->get_direction()
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2958_6_end;
        bedplayer_338_instances.clear_selection();
        for (ObjectIterator it(bedplayer_338_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!bedplayer_338_instances.has_selection()) goto event_2958_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(338, str_sleepmenu_1128, 1);
        {
            FrameObject * parent = ((Active*)get_single(bedplayer_338_instances));
            if (parent == NULL) goto pos_end_2958_6_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 13, parent->get_y() + 7);
            pos_end_2958_6_0: ;
        }
        ((Active*)get_instance(playerBase_instances))->set_direction(((Active*)get_single(bedplayer_338_instances, default_active_instance))->get_direction());
    }
    event_2958_6_end: ;
}
// Function purpose: generated callback event_func_1283 processes event block(s) 2960_6. Actions/conditions:
//        2960_6: sets the object position in the world; sets the selected object's direction to
//        ((Active*)get_single(bedmedical_234_instances, default_active_instance))->get_direction().
void Frames::event_func_1283()
{
    // event 2960_6 : sets the object position in the world; sets the selected object's direction to ((Active*)get_single(bedmedical_234_instances, default_active_instance))->get_direction()
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2960_6_end;
        bedmedical_234_instances.clear_selection();
        for (ObjectIterator it(bedmedical_234_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!bedmedical_234_instances.has_selection()) goto event_2960_6_end;
        {
            FrameObject * parent = ((Active*)get_single(bedmedical_234_instances));
            if (parent == NULL) goto pos_end_2960_6_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 10);
            pos_end_2960_6_0: ;
        }
        ((Active*)get_instance(playerBase_instances))->set_direction(((Active*)get_single(bedmedical_234_instances, default_active_instance))->get_direction());
    }
    event_2960_6_end: ;
}
// Function purpose: generated callback event_func_1284 processes event block(s) 2961_6. Actions/conditions:
//        2961_6: sets the object position in the world.
void Frames::event_func_1284()
{
    // event 2961_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2961_6_end;
        skippingmat_435_instances.clear_selection();
        for (ObjectIterator it(skippingmat_435_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!skippingmat_435_instances.has_selection()) goto event_2961_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_2961_6_end;
        {
            FrameObject * parent = ((Active*)get_single(skippingmat_435_instances));
            if (parent == NULL) goto pos_end_2961_6_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 6);
            pos_end_2961_6_0: ;
        }
    }
    event_2961_6_end: ;
}
// Function purpose: generated callback event_func_1285 processes event block(s) 2962_6. Actions/conditions:
//        2962_6: sets the object position in the world.
void Frames::event_func_1285()
{
    // event 2962_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2962_6_end;
        punchbag_436_instances.clear_selection();
        for (ObjectIterator it(punchbag_436_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!punchbag_436_instances.has_selection()) goto event_2962_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_2962_6_end;
        {
            FrameObject * parent = ((Active*)get_single(punchbag_436_instances));
            if (parent == NULL) goto pos_end_2962_6_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 2, parent->get_y() + 2);
            pos_end_2962_6_0: ;
        }
    }
    event_2962_6_end: ;
}
// Function purpose: generated callback event_func_1286 processes event block(s) 2963_6. Actions/conditions:
//        2963_6: sets the object position in the world.
void Frames::event_func_1286()
{
    // event 2963_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2963_6_end;
        speedbag_439_instances.clear_selection();
        for (ObjectIterator it(speedbag_439_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!speedbag_439_instances.has_selection()) goto event_2963_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_2963_6_end;
        {
            FrameObject * parent = ((Active*)get_single(speedbag_439_instances));
            if (parent == NULL) goto pos_end_2963_6_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 4, parent->get_y() + 4);
            pos_end_2963_6_0: ;
        }
    }
    event_2963_6_end: ;
}
// Function purpose: generated callback event_func_1287 processes event block(s) 2964_6. Actions/conditions:
//        2964_6: sets the object position in the world; sets the selected object's direction to 16; sets the selected
//        object's direction to 16.
void Frames::event_func_1287()
{
    // event 2964_6 : sets the object position in the world; sets the selected object's direction to 16; sets the selected object's direction to 16
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2964_6_end;
        pushupmat_408_instances.clear_selection();
        for (ObjectIterator it(pushupmat_408_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!pushupmat_408_instances.has_selection()) goto event_2964_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_2964_6_end;
        {
            FrameObject * parent = ((Active*)get_single(pushupmat_408_instances));
            if (parent == NULL) goto pos_end_2964_6_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_2964_6_0: ;
        }
        ((Active*)get_instance(playerBase_instances))->set_direction(16);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_2964_6_end: ;
}
// Function purpose: generated callback event_func_1288 processes event block(s) 2965_6. Actions/conditions:
//        2965_6: plays a sound or music track; sets the selected object's numeric value to 0.
void Frames::event_func_1288()
{
    // event 2965_6 : plays a sound or music track; sets the selected object's numeric value to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2965_6_end;
        qualifier_9.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!qualifier_9.has_selection()) goto event_2965_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) != (-1))) goto event_2965_6_end;
        media.play_id(SOUND_LOSE_8, 1-1);
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_2965_6_end: ;
}
// Function purpose: generated callback event_func_1289 processes event block(s) 2966_6. Actions/conditions:
//        2966_6: sets the object position in the world; sets the selected object's direction to 0; sets the selected
//        object's direction to ((Active*)get_single(gym4_318_instances, it.current_index,
//        default_active_instance))->get_direction().
void Frames::event_func_1289()
{
    // event 2966_6 : sets the object position in the world; sets the selected object's direction to 0; sets the selected object's direction to ((Active*)get_single(gym4_318_instances, it.current_index, default_active_instance))->get_direction()
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2966_6_end;
        gym4_318_instances.clear_selection();
        for (ObjectIterator it(gym4_318_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!gym4_318_instances.has_selection()) goto event_2966_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_2966_6_end;
        {
            FrameObject * parent = ((Active*)get_single(gym4_318_instances));
            if (parent == NULL) goto pos_end_2966_6_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_2966_6_0: ;
        }
        ((Active*)get_instance(playerBase_instances))->set_direction(0);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(gym4_318_instances, it.current_index, default_active_instance))->get_direction());
        }
    }
    event_2966_6_end: ;
}
// Function purpose: generated callback event_func_1290 processes event block(s) 2967_6. Actions/conditions:
//        2967_6: sets the object position in the world.
void Frames::event_func_1290()
{
    // event 2967_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2967_6_end;
        chinupbar_430_instances.clear_selection();
        for (ObjectIterator it(chinupbar_430_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!chinupbar_430_instances.has_selection()) goto event_2967_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_2967_6_end;
        {
            FrameObject * parent = ((Active*)get_single(chinupbar_430_instances));
            if (parent == NULL) goto pos_end_2967_6_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 4);
            pos_end_2967_6_0: ;
        }
    }
    event_2967_6_end: ;
}
// Function purpose: generated callback event_func_1291 processes event block(s) 2968_6. Actions/conditions:
//        2968_6: sets the selected object's numeric value to 0; sets the selected object's visibility to false.
void Frames::event_func_1291()
{
    // event 2968_6 : sets the selected object's numeric value to 0; sets the selected object's visibility to false
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2968_6_end;
        ((Active*)get_instance(target_177_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(target_177_instances))->set_visible(false);
    }
    event_2968_6_end: ;
}
// Function purpose: generated callback event_func_1292 processes event block(s) 2978_6. Actions/conditions:
//        2978_6: sets the object position in the world; sets the selected object's direction to 0; sets the selected
//        object's direction to 0.
void Frames::event_func_1292()
{
    // event 2978_6 : sets the object position in the world; sets the selected object's direction to 0; sets the selected object's direction to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2978_6_end;
        joggingmat_407_instances.clear_selection();
        for (ObjectIterator it(joggingmat_407_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!joggingmat_407_instances.has_selection()) goto event_2978_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_2978_6_end;
        {
            FrameObject * parent = ((Active*)get_single(joggingmat_407_instances));
            if (parent == NULL) goto pos_end_2978_6_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 4);
            pos_end_2978_6_0: ;
        }
        ((Active*)get_instance(playerBase_instances))->set_direction(0);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_2978_6_end: ;
}
void Frames::loop_perch_6()
{
    event_func_1275();
    event_func_1276();
    event_func_1277();
    event_func_1278();
    event_func_1279();
    event_func_1280();
    event_func_1281();
    event_func_1282();
    event_func_1283();
    event_func_1284();
    event_func_1285();
    event_func_1286();
    event_func_1287();
    event_func_1288();
    event_func_1289();
    event_func_1290();
    event_func_1291();
    event_func_1292();
}
// Function purpose: generated callback event_func_1293 processes event block(s) 3875_6. Actions/conditions:
//        3875_6: splits saved text into fields.
void Frames::event_func_1293()
{
    // event 3875_6 : splits saved text into fields
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3875_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3875_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(1), str__1130);
    }
    event_3875_6_end: ;
}
// Function purpose: generated callback event_func_1294 processes event block(s) 3876_6. Actions/conditions:
//        3876_6: creates a slot 224 object; sets the selected object's string to NPC_buy; sets the selected object's
//        numeric value to 1; plus 1 more actions.
void Frames::event_func_1294()
{
    // event 3876_6 : creates a slot 224 object; sets the selected object's string to NPC_buy; sets the selected object's numeric value to 1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3876_6_end;
        FrameObject * single_instance_3876_6_0; single_instance_3876_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemSlot(parent->x + -26, parent->y + -16), parent->layer);
                if (single_instance_3876_6_0 == NULL)
                    single_instance_3876_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3876_6_0))->alterables->strings.set(0, str_npc_buy_1131);
        ((Active*)((Active*)single_instance_3876_6_0))->alterables->values.set(0, 1);
        ((Active*)((Active*)single_instance_3876_6_0))->set_scale(2);
    }
    event_3876_6_end: ;
}
// Function purpose: generated callback event_func_1295 processes event block(s) 3877_6. Actions/conditions:
//        3877_6: creates a slot 224 object; sets the selected object's string to NPC_buy; sets the target object's
//        scale; plus 1 more actions.
void Frames::event_func_1295()
{
    // event 3877_6 : creates a slot 224 object; sets the selected object's string to NPC_buy; sets the target object's scale; plus 1 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3877_6_end;
        FrameObject * single_instance_3877_6_0; single_instance_3877_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemSlot(parent->x + 23, parent->y + -16), parent->layer);
                if (single_instance_3877_6_0 == NULL)
                    single_instance_3877_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3877_6_0))->alterables->strings.set(0, str_npc_buy_1131);
        ((Active*)((Active*)single_instance_3877_6_0))->set_scale(2);
        ((Active*)((Active*)single_instance_3877_6_0))->alterables->values.set(0, 2);
    }
    event_3877_6_end: ;
}
// Function purpose: generated callback event_func_1296 processes event block(s) 3878_6. Actions/conditions:
//        3878_6: creates a slot 224 object; sets the selected object's string to NPC_buy; sets the target object's
//        scale; plus 1 more actions.
void Frames::event_func_1296()
{
    // event 3878_6 : creates a slot 224 object; sets the selected object's string to NPC_buy; sets the target object's scale; plus 1 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3878_6_end;
        FrameObject * single_instance_3878_6_0; single_instance_3878_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemSlot(parent->x + -26, parent->y + 38), parent->layer);
                if (single_instance_3878_6_0 == NULL)
                    single_instance_3878_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3878_6_0))->alterables->strings.set(0, str_npc_buy_1131);
        ((Active*)((Active*)single_instance_3878_6_0))->set_scale(2);
        ((Active*)((Active*)single_instance_3878_6_0))->alterables->values.set(0, 3);
    }
    event_3878_6_end: ;
}
// Function purpose: generated callback event_func_1297 processes event block(s) 3879_6. Actions/conditions:
//        3879_6: creates a slot 224 object; sets the selected object's string to NPC_buy; sets the target object's
//        scale; plus 1 more actions.
void Frames::event_func_1297()
{
    // event 3879_6 : creates a slot 224 object; sets the selected object's string to NPC_buy; sets the target object's scale; plus 1 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3879_6_end;
        FrameObject * single_instance_3879_6_0; single_instance_3879_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemSlot(parent->x + 23, parent->y + 38), parent->layer);
                if (single_instance_3879_6_0 == NULL)
                    single_instance_3879_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3879_6_0))->alterables->strings.set(0, str_npc_buy_1131);
        ((Active*)((Active*)single_instance_3879_6_0))->set_scale(2);
        ((Active*)((Active*)single_instance_3879_6_0))->alterables->values.set(0, 4);
    }
    event_3879_6_end: ;
}
// Function purpose: generated callback event_func_1298 processes event block(s) 3880_6. Actions/conditions:
//        3880_6: splits saved text into fields; creates a itemshud 210 object; sets the selected object's numeric
//        value to string_to_number(stringtokenizer2_292->get(0)); plus 13 more actions.
void Frames::event_func_1298()
{
    // event 3880_6 : splits saved text into fields; creates a itemshud 210 object; sets the selected object's numeric value to string_to_number(stringtokenizer2_292->get(0)); plus 13 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3880_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) != (str_0_615))) goto event_3880_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_buy_1131))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3880_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0), str__96);
        FrameObject * single_instance_3880_6_0; single_instance_3880_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hudItem(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3880_6_0 == NULL)
                    single_instance_3880_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3880_6_0))->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        ((Active*)((Active*)single_instance_3880_6_0))->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)));
        ((Active*)((Active*)single_instance_3880_6_0))->alterables->flags.enable(-2);
        ((Active*)((Active*)single_instance_3880_6_0))->alterables->strings.set(0, str_npc_buy_1131);
        ((Active*)((Active*)single_instance_3880_6_0))->alterables->values.set(1, 1);
        ((Active*)((Active*)single_instance_3880_6_0))->set_scale(2);
        ((Active*)((Active*)single_instance_3880_6_0))->alterables->values.set(5, get_ceil(((INI*)get_instance(itemData_instances))->get_value_int(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0), str_buy_529)*(0.0+((AssociateArray*)get_instance(gameVariables_instances))->alterables->values.get(0))));
        FrameObject * single_instance_3880_6_1; single_instance_3880_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_givecash_261(parent->x + -21, parent->y + 19), parent->layer);
                if (single_instance_3880_6_1 == NULL)
                    single_instance_3880_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3880_6_1))->set_layer(((Active*)get_instance(dialogPanel_instances))->layer->index+1-1);
        ((Text*)((Text*)single_instance_3880_6_1))->set_string(str__1132+number_to_string(((Active*)single_instance_3880_6_0)->alterables->values.get(5)));
        ((Text*)((Text*)single_instance_3880_6_1))->blend_color.set(Color(120, 120, 120));
    }
    event_3880_6_end: ;
}
// Function purpose: generated callback event_func_1299 processes event block(s) 3881_6. Actions/conditions:
//        3881_6: splits saved text into fields; creates a itemshud 210 object; sets the selected object's numeric
//        value to string_to_number(stringtokenizer2_292->get(0)); plus 13 more actions.
void Frames::event_func_1299()
{
    // event 3881_6 : splits saved text into fields; creates a itemshud 210 object; sets the selected object's numeric value to string_to_number(stringtokenizer2_292->get(0)); plus 13 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3881_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) != (str_0_615))) goto event_3881_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_buy_1131))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3881_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1), str__96);
        FrameObject * single_instance_3881_6_0; single_instance_3881_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hudItem(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3881_6_0 == NULL)
                    single_instance_3881_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3881_6_0))->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        ((Active*)((Active*)single_instance_3881_6_0))->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)));
        ((Active*)((Active*)single_instance_3881_6_0))->alterables->flags.enable(-2);
        ((Active*)((Active*)single_instance_3881_6_0))->alterables->strings.set(0, str_npc_buy_1131);
        ((Active*)((Active*)single_instance_3881_6_0))->alterables->values.set(1, 2);
        ((Active*)((Active*)single_instance_3881_6_0))->set_scale(2);
        ((Active*)((Active*)single_instance_3881_6_0))->alterables->values.set(5, get_ceil(((INI*)get_instance(itemData_instances))->get_value_int(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0), str_buy_529)*(0.0+((AssociateArray*)get_instance(gameVariables_instances))->alterables->values.get(0))));
        FrameObject * single_instance_3881_6_1; single_instance_3881_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_givecash_261(parent->x + -21, parent->y + 19), parent->layer);
                if (single_instance_3881_6_1 == NULL)
                    single_instance_3881_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3881_6_1))->set_layer(((Active*)get_instance(dialogPanel_instances))->layer->index+1-1);
        ((Text*)((Text*)single_instance_3881_6_1))->set_string(str__1132+number_to_string(((Active*)single_instance_3881_6_0)->alterables->values.get(5)));
        ((Text*)((Text*)single_instance_3881_6_1))->blend_color.set(Color(120, 120, 120));
    }
    event_3881_6_end: ;
}
// Function purpose: generated callback event_func_1300 processes event block(s) 3882_6. Actions/conditions:
//        3882_6: splits saved text into fields; creates a itemshud 210 object; sets the selected object's numeric
//        value to string_to_number(stringtokenizer2_292->get(0)); plus 13 more actions.
void Frames::event_func_1300()
{
    // event 3882_6 : splits saved text into fields; creates a itemshud 210 object; sets the selected object's numeric value to string_to_number(stringtokenizer2_292->get(0)); plus 13 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3882_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)) != (str_0_615))) goto event_3882_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_buy_1131))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3882_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2), str__96);
        FrameObject * single_instance_3882_6_0; single_instance_3882_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hudItem(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3882_6_0 == NULL)
                    single_instance_3882_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3882_6_0))->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        ((Active*)((Active*)single_instance_3882_6_0))->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)));
        ((Active*)((Active*)single_instance_3882_6_0))->alterables->flags.enable(-2);
        ((Active*)((Active*)single_instance_3882_6_0))->alterables->strings.set(0, str_npc_buy_1131);
        ((Active*)((Active*)single_instance_3882_6_0))->alterables->values.set(1, 3);
        ((Active*)((Active*)single_instance_3882_6_0))->set_scale(2);
        ((Active*)((Active*)single_instance_3882_6_0))->alterables->values.set(5, get_ceil(((INI*)get_instance(itemData_instances))->get_value_int(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0), str_buy_529)*(0.0+((AssociateArray*)get_instance(gameVariables_instances))->alterables->values.get(0))));
        FrameObject * single_instance_3882_6_1; single_instance_3882_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_givecash_261(parent->x + -21, parent->y + 19), parent->layer);
                if (single_instance_3882_6_1 == NULL)
                    single_instance_3882_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3882_6_1))->set_layer(((Active*)get_instance(dialogPanel_instances))->layer->index+1-1);
        ((Text*)((Text*)single_instance_3882_6_1))->set_string(str__1132+number_to_string(((Active*)single_instance_3882_6_0)->alterables->values.get(5)));
        ((Text*)((Text*)single_instance_3882_6_1))->blend_color.set(Color(120, 120, 120));
    }
    event_3882_6_end: ;
}
// Function purpose: generated callback event_func_1301 processes event block(s) 3883_6. Actions/conditions:
//        3883_6: splits saved text into fields; creates a itemshud 210 object; sets the selected object's numeric
//        value to string_to_number(stringtokenizer2_292->get(0)); plus 13 more actions.
void Frames::event_func_1301()
{
    // event 3883_6 : splits saved text into fields; creates a itemshud 210 object; sets the selected object's numeric value to string_to_number(stringtokenizer2_292->get(0)); plus 13 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3883_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)) != (str_0_615))) goto event_3883_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_buy_1131))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3883_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3), str__96);
        FrameObject * single_instance_3883_6_0; single_instance_3883_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hudItem(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3883_6_0 == NULL)
                    single_instance_3883_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3883_6_0))->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        ((Active*)((Active*)single_instance_3883_6_0))->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)));
        ((Active*)((Active*)single_instance_3883_6_0))->alterables->flags.enable(-2);
        ((Active*)((Active*)single_instance_3883_6_0))->alterables->strings.set(0, str_npc_buy_1131);
        ((Active*)((Active*)single_instance_3883_6_0))->alterables->values.set(1, 4);
        ((Active*)((Active*)single_instance_3883_6_0))->set_scale(2);
        ((Active*)((Active*)single_instance_3883_6_0))->alterables->values.set(5, get_ceil(((INI*)get_instance(itemData_instances))->get_value_int(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0), str_buy_529)*(0.0+((AssociateArray*)get_instance(gameVariables_instances))->alterables->values.get(0))));
        FrameObject * single_instance_3883_6_1; single_instance_3883_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_givecash_261(parent->x + -21, parent->y + 19), parent->layer);
                if (single_instance_3883_6_1 == NULL)
                    single_instance_3883_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3883_6_1))->set_layer(((Active*)get_instance(dialogPanel_instances))->layer->index+1-1);
        ((Text*)((Text*)single_instance_3883_6_1))->set_string(str__1132+number_to_string(((Active*)single_instance_3883_6_0)->alterables->values.get(5)));
        ((Text*)((Text*)single_instance_3883_6_1))->blend_color.set(Color(120, 120, 120));
    }
    event_3883_6_end: ;
}
void Frames::loop_refresh_buy_list_6()
{
    event_func_1293();
    event_func_1294();
    event_func_1295();
    event_func_1296();
    event_func_1297();
    event_func_1298();
    event_func_1299();
    event_func_1300();
    event_func_1301();
}
// Function purpose: generated callback event_func_1302 processes event block(s) 3870_6. Actions/conditions:
//        3870_6: sets will_sell to 0; sets inRange to 0; sets isAwake to 0; plus 1 more actions.
void Frames::event_func_1302()
{
    // event 3870_6 : sets will_sell to 0; sets inRange to 0; sets isAwake to 0; plus 1 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3870_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(340, str_will_sell_1133, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(341, str_inrange_1134, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(342, str_isawake_1135, 0);
        givecash_261_instances.clear_selection();
        for (ObjectIterator it(givecash_261_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_3870_6_end: ;
}
// Function purpose: generated callback event_func_1303 processes event block(s) 3871_6. Actions/conditions:
//        3871_6: removes the selected object.
void Frames::event_func_1303()
{
    // event 3871_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3871_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_buy_1131))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3871_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3871_6_end: ;
}
// Function purpose: generated callback event_func_1304 processes event block(s) 3872_6. Actions/conditions:
//        3872_6: removes the selected object.
void Frames::event_func_1304()
{
    // event 3872_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3872_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_buy_1131))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3872_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3872_6_end: ;
}
// Function purpose: generated callback event_func_1305 processes event block(s) 3873_6. Actions/conditions:
//        3873_6: sets source to Profile entry 7; sets source to
//        StringReplace::replace(gameVariables->get_string(81, source), #, ); adds a dchar 214 instance; plus
//        7 more actions.
void Frames::event_func_1305()
{
    // event 3873_6 : sets source to Profile entry 7; sets source to StringReplace::replace(gameVariables->get_string(81, source), #, ); adds a dchar 214 instance; plus 7 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3873_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(1)) == (str_0_0_0_0_734))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3873_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_profile_281, str_7_323));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str__346, str__198));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_y()-10);
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
            ((Text*)*it)->blend_color.set(Color(192, 0, 32));
        }
    }
    event_3873_6_end: ;
}
// Function purpose: generated callback event_func_1306 processes event block(s) 3874_6. Actions/conditions:
//        3874_6: sets will_sell to 1.
void Frames::event_func_1306()
{
    // event 3874_6 : sets will_sell to 1
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3874_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(1)) != (str_0_0_0_0_734))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3874_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(340, str_will_sell_1133, 1);
        {
            loop_refresh_buy_list_running = true;
            int times = int(1);
            loop_refresh_buy_list_index = 0;
            while (loop_refresh_buy_list_index < times) {
                loop_refresh_buy_list_6();
                if (!loop_refresh_buy_list_running) break;
                loop_refresh_buy_list_index++;
            }
        }
    }
    event_3874_6_end: ;
}
void Frames::loop_npc_tab_buy_6()
{
    event_func_1302();
    event_func_1303();
    event_func_1304();
    event_func_1305();
    event_func_1306();
}
// Function purpose: generated callback event_func_1307 processes event block(s) 4454_6. Actions/conditions:
//        4454_6: sets the selected object's numeric value to 30.
void Frames::event_func_1307()
{
    // event 4454_6 : sets the selected object's numeric value to 30
    {
        ((TextBlitter*)get_instance(heatText_instances))->alterables->values.set(0, 30);
    }
    event_4454_6_end: ;
}
// Function purpose: generated callback event_func_1308 processes event block(s) 4455_6. Group(s): hud_shakes.
//        Actions/conditions: 4455_6: sets the target animation type; updates game state with set_animation_speed(2).
void Frames::event_func_1308()
{
    // event 4455_6 : sets the target animation type; updates game state with set_animation_speed(2)
    {
        // group: hud_shakes
        if (!((((TextBlitter*)get_instance(heatText_instances))->anim_type) == (0))) goto event_4455_6_end;
        ((TextBlitter*)get_instance(heatText_instances))->set_animation_type(2);
        ((TextBlitter*)get_instance(heatText_instances))->set_animation_speed(2);
    }
    event_4455_6_end: ;
}
void Frames::loop_hudshake_heat_6()
{
    event_func_1307();
    event_func_1308();
}
// Function purpose: generated callback event_func_1309 processes event block(s) 2128_6. Actions/conditions:
//        2128_6: adds a icons 433 instance; sets the selected object's direction to 8; sets the selected object's
//        horizontal position to gameVariables->get_value(343, IconX); plus 5 more actions.
void Frames::event_func_1309()
{
    // event 2128_6 : adds a icons 433 instance; sets the selected object's direction to 8; sets the selected object's horizontal position to gameVariables->get_value(343, IconX); plus 5 more actions
    {
        if (!(group_code_1)) goto event_2128_6_end;
        icons_433_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_icons_433(0, 0), 5);
            icons_433_instances.add_back();
        }
        for (ObjectIterator it(icons_433_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(343, str_iconx_1136));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(344, str_icony_1137));
            ((Active*)*it)->alterables->values.set(25, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(345, str_iconz_1138));
        }
    }
    event_2128_6_end: ;
}
void Frames::loop_icon_heat_6()
{
    event_func_1309();
}
// Function purpose: generated callback event_func_1310 processes event block(s) 4606_6. Actions/conditions:
//        4606_6: sets badword to gameVariables->get_string(346, badword)+*.
void Frames::event_func_1310()
{
    // event 4606_6 : sets badword to gameVariables->get_string(346, badword)+*
    {
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(346, str_badword_1139, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(346, str_badword_1139)+str__1140);
    }
    event_4606_6_end: ;
}
void Frames::loop_star_it_6()
{
    event_func_1310();
}
// Function purpose: generated callback event_func_1311 processes event block(s) 4605_6. Group(s): Anti-HAX.
//        Actions/conditions: 4605_6: sets badword to empty_string; sets a game or interface text string.
void Frames::event_func_1311()
{
    // event 4605_6 : sets badword to empty_string; sets a game or interface text string
    {
        // group: Anti-HAX
        if (!((string_find(lowercase_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(347, str_input_170)), lowercase_string(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_swear_filter_go_index)), 0)) != (-1))) goto event_4605_6_end;
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
    event_4605_6_end: ;
}
void Frames::loop_swear_filter_go_6()
{
    event_func_1311();
}
// Function purpose: generated callback event_func_1312 processes event block(s) 4604_6. Actions/conditions:
//        4604_6: splits saved text into fields; sets output to gameVariables->get_string(347, input).
void Frames::event_func_1312()
{
    // event 4604_6 : splits saved text into fields; sets output to gameVariables->get_string(347, input)
    {
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(str_shit_bastard_fuck_cunt_wank_fag_dick_twat_nigger_nigga_1141, str__96);
        {
            loop_swear_filter_go_running = true;
            int times = int(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get_count());
            loop_swear_filter_go_index = 0;
            while (loop_swear_filter_go_index < times) {
                loop_swear_filter_go_6();
                if (!loop_swear_filter_go_running) break;
                loop_swear_filter_go_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(348, str_output_171, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(347, str_input_170));
    }
    event_4604_6_end: ;
}
void Frames::loop_swear_filter_6()
{
    event_func_1312();
}
// Function purpose: generated callback event_func_1313 processes event block(s) 3966_6. Actions/conditions:
//        3966_6: sets input to gameVariables->get_string(349, SpeakText); sets SpeakText to
//        gameVariables->get_string(348, output).
void Frames::event_func_1313()
{
    // event 3966_6 : sets input to gameVariables->get_string(349, SpeakText); sets SpeakText to gameVariables->get_string(348, output)
    {
        if (!(group_code_1)) goto event_3966_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(347, str_input_170, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142));
        {
            loop_swear_filter_running = true;
            int times = int(1);
            loop_swear_filter_index = 0;
            while (loop_swear_filter_index < times) {
                loop_swear_filter_6();
                if (!loop_swear_filter_running) break;
                loop_swear_filter_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(348, str_output_171));
    }
    event_3966_6_end: ;
}
// Function purpose: generated callback event_func_1314 processes event block(s) 3967_6. Actions/conditions:
//        3967_6: sets SpeakText to gameVariables->get_string(349, SpeakText); updates the displayed text
//        layout.
void Frames::event_func_1314()
{
    // event 3967_6 : sets SpeakText to gameVariables->get_string(349, SpeakText); updates the displayed text layout
    {
        if (!(group_code_1)) goto event_3967_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142));
    CalcRect::set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142));
        
    }
    event_3967_6_end: ;
}
// Function purpose: generated callback event_func_1315 processes event block(s) 3968_6. Actions/conditions:
//        3968_6: sets the selected object's numeric value to 150; adds a activesystembox 450 instance; sets the
//        selected object's numeric value to ((Active*)get_single(qualifier_14, it.current_index,
//        default_active_instance))->alterables->values.get(25); plus 8 more actions.
void Frames::event_func_1315()
{
    // event 3968_6 : sets the selected object's numeric value to 150; adds a activesystembox 450 instance; sets the selected object's numeric value to ((Active*)get_single(qualifier_14, it.current_index, default_active_instance))->alterables->values.get(25); plus 8 more actions
    {
        if (!(group_code_1)) goto event_3968_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(350, str_speakcol_1143)) == (0))) goto event_3968_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(351, str_speakid_1144)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3968_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3968_6_end;
        if (!((string_size(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142))) > (1))) goto event_3968_6_end;
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
    event_3968_6_end: ;
}
// Function purpose: generated callback event_func_1316 processes event block(s) 3969_6. Actions/conditions:
//        3969_6: sets the selected object's numeric value to 150; adds a activesystembox 450 instance; sets the
//        selected object's numeric value to ((Active*)get_single(qualifier_14, it.current_index,
//        default_active_instance))->alterables->values.get(25); plus 8 more actions.
void Frames::event_func_1316()
{
    // event 3969_6 : sets the selected object's numeric value to 150; adds a activesystembox 450 instance; sets the selected object's numeric value to ((Active*)get_single(qualifier_14, it.current_index, default_active_instance))->alterables->values.get(25); plus 8 more actions
    {
        if (!(group_code_1)) goto event_3969_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(350, str_speakcol_1143)) == (1))) goto event_3969_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(352, str_telloff_1145)) == (1))) goto event_3969_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(351, str_speakid_1144)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3969_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3969_6_end;
        if (!((string_size(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142))) > (1))) goto event_3969_6_end;
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
            ((SystemBox*)*it)->blend_color.set(Color(157, 0, 0));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
        }
    }
    event_3969_6_end: ;
}
// Function purpose: generated callback event_func_1317 processes event block(s) 3970_6. Actions/conditions:
//        3970_6: sets the selected object's numeric value to 150; adds a activesystembox 450 instance; sets the
//        selected object's numeric value to ((Active*)get_single(qualifier_14, it.current_index,
//        default_active_instance))->alterables->values.get(25); plus 7 more actions.
void Frames::event_func_1317()
{
    // event 3970_6 : sets the selected object's numeric value to 150; adds a activesystembox 450 instance; sets the selected object's numeric value to ((Active*)get_single(qualifier_14, it.current_index, default_active_instance))->alterables->values.get(25); plus 7 more actions
    {
        if (!(group_code_1)) goto event_3970_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(350, str_speakcol_1143)) == (1))) goto event_3970_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(352, str_telloff_1145)) == (0))) goto event_3970_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(351, str_speakid_1144)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3970_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3970_6_end;
        if (!((string_size(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142))) > (1))) goto event_3970_6_end;
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
    event_3970_6_end: ;
}
// Function purpose: generated callback event_func_1318 processes event block(s) 3971_6. Actions/conditions:
//        3971_6: sets TellOff to 0.
void Frames::event_func_1318()
{
    // event 3971_6 : sets TellOff to 0
    {
        if (!(group_code_1)) goto event_3971_6_end;
        if (!((string_size(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142))) > (1))) goto event_3971_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(352, str_telloff_1145, 0);
    }
    event_3971_6_end: ;
}
void Frames::loop_speak_6()
{
    event_func_1313();
    event_func_1314();
    event_func_1315();
    event_func_1316();
    event_func_1317();
    event_func_1318();
}
// Function purpose: generated callback event_func_1319 processes event block(s) 1056_6. Actions/conditions:
//        1056_6: sets the selected object's numeric value to -1; sets TellOff to 1; increments Heat by 25; plus 8
//        more actions.
void Frames::event_func_1319()
{
    // event 1056_6 : sets the selected object's numeric value to -1; sets TellOff to 1; increments Heat by 25; plus 8 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1056_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1056_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1056_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -1);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(352, str_telloff_1145, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(32, str_heat_495, 25);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_29_1146));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142), str_name_693, ((Active*)get_instance(playerBase_instances))->alterables->strings.get(0)));
        media.play_id(SOUND_LOSE_8, 1-1);
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
        {
            loop_hudshake_heat_running = true;
            int times = int(1);
            loop_hudshake_heat_index = 0;
            while (loop_hudshake_heat_index < times) {
                loop_hudshake_heat_6();
                if (!loop_hudshake_heat_running) break;
                loop_hudshake_heat_index++;
            }
        }
    }
    event_1056_6_end: ;
}
// Function purpose: generated callback event_func_1320 processes event block(s) 1057_6. Actions/conditions:
//        1057_6: sets IconX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); sets
//        IconY to ((Active*)get_single(guardBase_instances, default_active_instance))->get_y(); sets IconZ to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25).
void Frames::event_func_1320()
{
    // event 1057_6 : sets IconX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); sets IconY to ((Active*)get_single(guardBase_instances, default_active_instance))->get_y(); sets IconZ to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25)
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1057_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1057_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1057_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(343, str_iconx_1136, ((Active*)get_single(guardBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(344, str_icony_1137, ((Active*)get_single(guardBase_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(345, str_iconz_1138, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        {
            loop_icon_heat_running = true;
            int times = int(1);
            loop_icon_heat_index = 0;
            while (loop_icon_heat_index < times) {
                loop_icon_heat_6();
                if (!loop_icon_heat_running) break;
                loop_icon_heat_index++;
            }
        }
    }
    event_1057_6_end: ;
}
void Frames::loop_policing_loot_6()
{
    event_func_1319();
    event_func_1320();
}
// Function purpose: generated callback event_func_1321 processes event block(s) 3504_6. Actions/conditions:
//        3504_6: sets the selected object's layer to 1-1.
void Frames::event_func_1321()
{
    // event 3504_6 : sets the selected object's layer to 1-1
    {
        if (!(group_code_1)) goto event_3504_6_end;
        dighole_207_instances.clear_selection();
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sort_holes_index+1))) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_3504_6_end;
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(1-1);
        }
    }
    event_3504_6_end: ;
}
// Function purpose: generated callback event_func_1322 processes event block(s) 3505_6. Actions/conditions:
//        3505_6: sets the selected object's layer to 2-1; sets the object's animation to 0; applies a visual shader.
void Frames::event_func_1322()
{
    // event 3505_6 : sets the selected object's layer to 2-1; sets the object's animation to 0; applies a visual shader
    {
        if (!(group_code_1)) goto event_3505_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) > (1))) goto event_3505_6_end;
        dighole_207_instances.clear_selection();
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sort_holes_index+1))) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_3505_6_end;
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(2-1);
            ((Active*)*it)->force_animation(0);
        }
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::NONE);
        }
    }
    event_3505_6_end: ;
}
// Function purpose: generated callback event_func_1323 processes event block(s) 3506_6. Actions/conditions:
//        3506_6: sets the selected object's layer to 1-1; sets the object's animation to 5; applies a visual shader.
void Frames::event_func_1323()
{
    // event 3506_6 : sets the selected object's layer to 1-1; sets the object's animation to 5; applies a visual shader
    {
        if (!(group_code_1)) goto event_3506_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_3506_6_end;
        dighole_207_instances.clear_selection();
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sort_holes_index+1))) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_3506_6_end;
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(1-1);
            ((Active*)*it)->force_animation(5);
        }
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::ADDITIVE);
        }
    }
    event_3506_6_end: ;
}
// Function purpose: generated callback event_func_1324 processes event block(s) 3507_6. Actions/conditions:
//        3507_6: sets the selected object's layer to 1-1; sets the object's animation to 5; applies a visual shader.
void Frames::event_func_1324()
{
    // event 3507_6 : sets the selected object's layer to 1-1; sets the object's animation to 5; applies a visual shader
    {
        if (!(group_code_1)) goto event_3507_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) > (1))) goto event_3507_6_end;
        dighole_207_instances.clear_selection();
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sort_holes_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_3507_6_end;
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(1-1);
            ((Active*)*it)->force_animation(5);
        }
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::ADDITIVE);
        }
    }
    event_3507_6_end: ;
}
void Frames::loop_sort_holes_6()
{
    event_func_1321();
    event_func_1322();
    event_func_1323();
    event_func_1324();
}
// Function purpose: generated callback event_func_1325 processes event block(s) 950_6. Actions/conditions:
//        950_6: sets the selected object's layer to playerBase->layer->index+1-1; sets the selected object's layer
//        to playerBase->layer->index+1-1.
void Frames::event_func_1325()
{
    // event 950_6 : sets the selected object's layer to playerBase->layer->index+1-1; sets the selected object's layer to playerBase->layer->index+1-1
    {
        if (!(group_code_1)) goto event_950_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
        }
        ((Active*)get_instance(cursor_178_instances))->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
    }
    event_950_6_end: ;
}
// Function purpose: generated callback event_func_1326 processes event block(s) 951_6. Actions/conditions:
//        951_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_1326()
{
    // event 951_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_951_6_end;
        dighole_207_instances.clear_selection();
        spread_value(dighole_207_instances, 0, 1);
    }
    event_951_6_end: ;
}
// Function purpose: generated callback event_func_1327 processes event block(s) 952_6. Actions/conditions:
//        952_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_1327()
{
    // event 952_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_952_6_end;
        {
            loop_sort_holes_running = true;
            int times = int(1);
            loop_sort_holes_index = 0;
            while (loop_sort_holes_index < times) {
                loop_sort_holes_6();
                if (!loop_sort_holes_running) break;
                loop_sort_holes_index++;
            }
        }
    }
    event_952_6_end: ;
}
void Frames::loop_layer_up_6()
{
    event_func_1325();
    event_func_1326();
    event_func_1327();
}
// Function purpose: generated callback event_func_1328 processes event block(s) 944_6. Actions/conditions:
//        944_6: sets the selected object's visibility to false.
void Frames::event_func_1328()
{
    // event 944_6 : sets the selected object's visibility to false
    {
        if (!(group_code_1)) goto event_944_6_end;
        if (!((activesystembox_450_instances.size()) > (0))) goto event_944_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_visible(false);
        }
    }
    event_944_6_end: ;
}
void Frames::loop_kill_speech_6()
{
    event_func_1328();
}
// Function purpose: generated callback event_func_1329 processes event block(s) 2827_6. Actions/conditions:
//        2827_6: sets the object's animation to 0; sets the selected object's horizontal position to
//        gameVariables->get_value(353, HoleX); sets the selected object's vertical position to
//        gameVariables->get_value(354, HoleY); plus 5 more actions.
void Frames::event_func_1329()
{
    // event 2827_6 : sets the object's animation to 0; sets the selected object's horizontal position to gameVariables->get_value(353, HoleX); sets the selected object's vertical position to gameVariables->get_value(354, HoleY); plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2827_6_end;
        ((Active*)get_instance(upperlevelcheck_206_instances))->force_animation(0);
        ((Active*)get_instance(upperlevelcheck_206_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(353, str_holex_1147));
        ((Active*)get_instance(upperlevelcheck_206_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(354, str_holey_1148));
        ((Active*)get_instance(upperlevelcheck_206_instances))->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1+1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_2827_6_end: ;
}
// Function purpose: generated callback event_func_1330 processes event block(s) 2828_6. Actions/conditions:
//        2828_6: sets Blocked to 0.
void Frames::event_func_1330()
{
    // event 2828_6 : sets Blocked to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2828_6_end;
        upperlevelcheck_206_instances.clear_selection();
        if (!check_not_overlap(upperlevelcheck_206_instances, qualifier_4)) goto event_2828_6_end;
        if (!check_not_overlap(upperlevelcheck_206_instances, qualifier_19)) goto event_2828_6_end;
        if (!check_not_overlap(upperlevelcheck_206_instances, qualifier_18)) goto event_2828_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 0);
    }
    event_2828_6_end: ;
}
// Function purpose: generated callback event_func_1331 processes event block(s) 2829_6. Actions/conditions:
//        2829_6: plays a sound or music track.
void Frames::event_func_1331()
{
    // event 2829_6 : plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2829_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(320, str_blocked_1101)) == (1))) goto event_2829_6_end;
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_2829_6_end: ;
}
// Function purpose: generated callback event_func_1332 processes event block(s) 2830_6. Actions/conditions:
//        2830_6: sets the selected object's layer to 2-1; sets the selected object's horizontal position to
//        gameVariables->get_value(353, HoleX)+8; sets the selected object's vertical position to
//        gameVariables->get_value(354, HoleY)+8; plus 9 more actions.
void Frames::event_func_1332()
{
    // event 2830_6 : sets the selected object's layer to 2-1; sets the selected object's horizontal position to gameVariables->get_value(353, HoleX)+8; sets the selected object's vertical position to gameVariables->get_value(354, HoleY)+8; plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2830_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(320, str_blocked_1101)) == (0))) goto event_2830_6_end;
        ((Active*)get_instance(playerBase_instances))->set_layer(2-1);
        ((Active*)get_instance(playerBase_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(353, str_holex_1147)+8);
        ((Active*)get_instance(playerBase_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(354, str_holey_1148)+8);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_2830_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2830_6_0: ;
        }
        ((LayerObject*)get_instance(layerobject_37_instances))->show_layer(1);
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(355, str_newlayer_1149, 2);
        ((Active*)get_instance(screenTint_instances))->set_visible(true);
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
                loop_layer_up_6();
                if (!loop_layer_up_running) break;
                loop_layer_up_index++;
            }
        }
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
        media.play_id(SOUND_PICKUP_3, 1-1);
    }
    event_2830_6_end: ;
}
void Frames::loop_exit_hole_6()
{
    event_func_1329();
    event_func_1330();
    event_func_1331();
    event_func_1332();
}
// Function purpose: generated callback event_func_1333 processes event block(s) 1085_6. Actions/conditions:
//        1085_6: increments Heat by 15*gameVariables->get_value(83, NPClvl); sets the selected object's
//        numeric value to -1; sets the selected object's numeric value to 80; plus 1 more actions.
void Frames::event_func_1333()
{
    // event 1085_6 : increments Heat by 15*gameVariables->get_value(83, NPClvl); sets the selected object's numeric value to -1; sets the selected object's numeric value to 80; plus 1 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1085_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1085_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1085_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(32, str_heat_495, 15*((AssociateArray*)get_instance(gameVariables_instances))->get_value(83, str_npclvl_587));
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -1);
            ((Active*)*it)->alterables->values.set(21, 80);
        }
        {
            loop_hudshake_heat_running = true;
            int times = int(1);
            loop_hudshake_heat_index = 0;
            while (loop_hudshake_heat_index < times) {
                loop_hudshake_heat_6();
                if (!loop_hudshake_heat_running) break;
                loop_hudshake_heat_index++;
            }
        }
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_1085_6_end: ;
}
void Frames::loop_policing_theft_6()
{
    event_func_1333();
    event_func_1320();
}
// Function purpose: generated callback event_func_1334 processes event block(s) 1369_6. Actions/conditions:
//        1369_6: sets the selected object's numeric value to 0.
void Frames::event_func_1334()
{
    // event 1369_6 : sets the selected object's numeric value to 0
    {
        if (!(group_code_1)) goto event_1369_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (-1))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1369_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
    }
    event_1369_6_end: ;
}
void Frames::loop_remove_targets_6()
{
    event_func_1334();
}
// Function purpose: generated callback event_func_1335 processes event block(s) 1370_6. Actions/conditions:
//        1370_6: splits saved text into fields.
void Frames::event_func_1335()
{
    // event 1370_6 : splits saved text into fields
    {
        if (!(group_code_1)) goto event_1370_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inv_512+number_to_string(loop_strip_illegal_items_index+1)), str__96);
    }
    event_1370_6_end: ;
}
// Function purpose: generated callback event_func_1336 processes event block(s) 1371_6. Actions/conditions:
//        1371_6: sets a game or interface text string.
void Frames::event_func_1336()
{
    // event 1371_6 : sets a game or interface text string
    {
        if (!(group_code_1)) goto event_1371_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0), str_illegal_618)) > (0))) goto event_1371_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(loop_strip_illegal_items_index+1), empty_string);
    }
    event_1371_6_end: ;
}
// Function purpose: generated callback event_func_1337 processes event block(s) 1372_6. Actions/conditions:
//        1372_6: removes the selected object.
void Frames::event_func_1337()
{
    // event 1372_6 : removes the selected object
    {
        if (!(group_code_1)) goto event_1372_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0), str_illegal_618)) > (0))) goto event_1372_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (loop_strip_illegal_items_index+1))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_1372_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1372_6_end: ;
}
void Frames::loop_strip_illegal_items_6()
{
    event_func_1335();
    event_func_1336();
    event_func_1337();
}
// Function purpose: generated callback event_func_1338 processes event block(s) 1353_6. Actions/conditions:
//        1353_6: removes the selected object.
void Frames::event_func_1338()
{
    // event 1353_6 : removes the selected object
    {
        if (!(group_code_1)) goto event_1353_6_end;
        qualifier_16.clear_selection();
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (-1))) { it.deselect(); continue; }
        }
        if (!qualifier_16.has_selection()) goto event_1353_6_end;
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1353_6_end: ;
}
// Function purpose: generated callback event_func_1339 processes event block(s) 1354_6. Actions/conditions:
//        1354_6: sets OutfitShort to 4; sets Outfit to 4_100; creates a outfitinmate 249 object; plus 5 more actions.
void Frames::event_func_1339()
{
    // event 1354_6 : sets OutfitShort to 4; sets Outfit to 4_100; creates a outfitinmate 249 object; plus 5 more actions
    {
        if (!(group_code_1)) goto event_1354_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) != (str_camp_504))) goto event_1354_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_1354_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_1354_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_1354_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (0))) goto event_1354_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(31, str_outfitshort_494, 4);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(44, str_outfit_505, str_4_100_506);
        FrameObject * single_instance_1354_6_0; single_instance_1354_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_outfitinmate_249(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1354_6_0 == NULL)
                    single_instance_1354_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1354_6_0))->alterables->values.set(0, -1);
        ((Active*)((Active*)single_instance_1354_6_0))->alterables->values.set(25, -1);
    }
    event_1354_6_end: ;
}
// Function purpose: generated callback event_func_1340 processes event block(s) 1355_6. Actions/conditions:
//        1355_6: sets OutfitShort to 238; sets Outfit to 238_100; creates a outfitinmatess 503 object; plus 5 more
//        actions.
void Frames::event_func_1340()
{
    // event 1355_6 : sets OutfitShort to 238; sets Outfit to 238_100; creates a outfitinmatess 503 object; plus 5 more actions
    {
        if (!(group_code_1)) goto event_1355_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_1355_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(31, str_outfitshort_494, 238);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(44, str_outfit_505, str_238_100_510);
        FrameObject * single_instance_1355_6_0; single_instance_1355_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_outfitinmatess_503(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1355_6_0 == NULL)
                    single_instance_1355_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1355_6_0))->alterables->values.set(0, -1);
        ((Active*)((Active*)single_instance_1355_6_0))->alterables->values.set(25, -1);
    }
    event_1355_6_end: ;
}
// Function purpose: generated callback event_func_1341 processes event block(s) 1356_6. Actions/conditions:
//        1356_6: sets OutfitShort to 238; sets Outfit to 238_100; creates a outfitinmatess 503 object; plus 5 more
//        actions.
void Frames::event_func_1341()
{
    // event 1356_6 : sets OutfitShort to 238; sets Outfit to 238_100; creates a outfitinmatess 503 object; plus 5 more actions
    {
        if (!(group_code_1)) goto event_1356_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_1356_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(31, str_outfitshort_494, 238);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(44, str_outfit_505, str_238_100_510);
        FrameObject * single_instance_1356_6_0; single_instance_1356_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_outfitinmatess_503(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1356_6_0 == NULL)
                    single_instance_1356_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1356_6_0))->alterables->values.set(0, -1);
        ((Active*)((Active*)single_instance_1356_6_0))->alterables->values.set(25, -1);
    }
    event_1356_6_end: ;
}
// Function purpose: generated callback event_func_1342 processes event block(s) 1357_6. Actions/conditions:
//        1357_6: sets OutfitShort to 127; sets Outfit to 127_100; creates a outfitpow 376 object; plus 5 more
//        actions.
void Frames::event_func_1342()
{
    // event 1357_6 : sets OutfitShort to 127; sets Outfit to 127_100; creates a outfitpow 376 object; plus 5 more actions
    {
        if (!(group_code_1)) goto event_1357_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) == (str_camp_504))) goto event_1357_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_1357_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_1357_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (0))) goto event_1357_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(31, str_outfitshort_494, 127);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(44, str_outfit_505, str_127_100_507);
        FrameObject * single_instance_1357_6_0; single_instance_1357_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_outfitpow_376(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1357_6_0 == NULL)
                    single_instance_1357_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1357_6_0))->alterables->values.set(0, -1);
        ((Active*)((Active*)single_instance_1357_6_0))->alterables->values.set(25, -1);
    }
    event_1357_6_end: ;
}
// Function purpose: generated callback event_func_1343 processes event block(s) 1358_6. Actions/conditions:
//        1358_6: sets OutfitShort to 210; sets Outfit to 210_100; creates a outfitinmateescteam 481 object; plus 5
//        more actions.
void Frames::event_func_1343()
{
    // event 1358_6 : sets OutfitShort to 210; sets Outfit to 210_100; creates a outfitinmateescteam 481 object; plus 5 more actions
    {
        if (!(group_code_1)) goto event_1358_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_1358_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(31, str_outfitshort_494, 210);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(44, str_outfit_505, str_210_100_508);
        FrameObject * single_instance_1358_6_0; single_instance_1358_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_outfitinmateescteam_481(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1358_6_0 == NULL)
                    single_instance_1358_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1358_6_0))->alterables->values.set(0, -1);
        ((Active*)((Active*)single_instance_1358_6_0))->alterables->values.set(25, -1);
    }
    event_1358_6_end: ;
}
// Function purpose: generated callback event_func_1344 processes event block(s) 1359_6. Actions/conditions:
//        1359_6: sets OutfitShort to 215; sets Outfit to 215_100; creates a outfitinmatebond 486 object; plus 5 more
//        actions.
void Frames::event_func_1344()
{
    // event 1359_6 : sets OutfitShort to 215; sets Outfit to 215_100; creates a outfitinmatebond 486 object; plus 5 more actions
    {
        if (!(group_code_1)) goto event_1359_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_1359_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(31, str_outfitshort_494, 215);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(44, str_outfit_505, str_215_100_509);
        FrameObject * single_instance_1359_6_0; single_instance_1359_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_outfitinmatebond_486(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1359_6_0 == NULL)
                    single_instance_1359_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1359_6_0))->alterables->values.set(0, -1);
        ((Active*)((Active*)single_instance_1359_6_0))->alterables->values.set(25, -1);
    }
    event_1359_6_end: ;
}
void Frames::loop_ko_check_outfit_6()
{
    event_func_1338();
    event_func_1339();
    event_func_1340();
    event_func_1341();
    event_func_1342();
    event_func_1343();
    event_func_1344();
}
// Function purpose: generated callback event_func_1345 processes event block(s) 610_6. Actions/conditions:
//        610_6: sets the selected object's direction to 16.
void Frames::event_func_1345()
{
    // event 610_6 : sets the selected object's direction to 16
    {
        if (!(group_tooltips_1)) goto event_610_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(356, str_tutstrlen_1150)) == (1))) goto event_610_6_end;
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_610_6_end: ;
}
// Function purpose: generated callback event_func_1346 processes event block(s) 611_6. Actions/conditions:
//        611_6: sets the selected object's direction to 8.
void Frames::event_func_1346()
{
    // event 611_6 : sets the selected object's direction to 8
    {
        if (!(group_tooltips_1)) goto event_611_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(356, str_tutstrlen_1150)) == (2))) goto event_611_6_end;
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
    }
    event_611_6_end: ;
}
// Function purpose: generated callback event_func_1347 processes event block(s) 612_6. Actions/conditions:
//        612_6: sets the selected object's direction to 0.
void Frames::event_func_1347()
{
    // event 612_6 : sets the selected object's direction to 0
    {
        if (!(group_tooltips_1)) goto event_612_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(356, str_tutstrlen_1150)) == (3))) goto event_612_6_end;
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_612_6_end: ;
}
// Function purpose: generated callback event_func_1348 processes event block(s) 613_6. Actions/conditions:
//        613_6: sets the selected object's direction to 24.
void Frames::event_func_1348()
{
    // event 613_6 : sets the selected object's direction to 24
    {
        if (!(group_tooltips_1)) goto event_613_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(356, str_tutstrlen_1150)) == (4))) goto event_613_6_end;
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
    }
    event_613_6_end: ;
}
void Frames::loop_lolol_6()
{
    event_func_1345();
    event_func_1346();
    event_func_1347();
    event_func_1348();
}
// Function purpose: generated callback event_func_1349 processes event block(s) 604_6. Actions/conditions:
//        604_6: splits saved text into fields; sets TutStrLen to string_to_number(stringtokenizer2_292->get(0)); sets
//        Tut_hp to 1; plus 10 more actions.
void Frames::event_func_1349()
{
    // event 604_6 : splits saved text into fields; sets TutStrLen to string_to_number(stringtokenizer2_292->get(0)); sets Tut_hp to 1; plus 10 more actions
    {
        if (!(group_tooltips_1)) goto event_604_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(357, str_tut_hp_1151)) == (0))) goto event_604_6_end;
        if (!((popupClouds_instances.size()) == (0))) goto event_604_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_604_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_604_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(translationData_instances))->get_string(str_popups_1152, str_7_323), str__254);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(356, str_tutstrlen_1150, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(357, str_tut_hp_1151, 1);
        popupClouds_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_popupCloud(0, 0), 5);
            popupClouds_instances.add_back();
        }
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            esc::createYellowPopUpCloud(static_cast<Active*>(*it), esc::Anchor::Right, 28, 20);
        }
        FrameObject * single_instance_604_6_1; single_instance_604_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(popupClouds_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_popupCloudText(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_604_6_1 == NULL)
                    single_instance_604_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_604_6_1))->set_string(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
        {
            loop_lolol_running = true;
            int times = int(1);
            loop_lolol_index = 0;
            while (loop_lolol_index < times) {
                loop_lolol_6();
                if (!loop_lolol_running) break;
                loop_lolol_index++;
            }
        }
    }
    event_604_6_end: ;
}
void Frames::loop_tut_hp_6()
{
    event_func_1349();
}
// Function purpose: generated callback event_func_1350 processes event block(s) 530_6. Actions/conditions:
//        530_6: removes the selected object.
void Frames::event_func_1350()
{
    // event 530_6 : removes the selected object
    {
        if (!(group_setup_1)) goto event_530_6_end;
        if (!((loop_refresh_inv_index) == (0))) goto event_530_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_530_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_530_6_end: ;
}
// Function purpose: generated callback event_func_1351 processes event block(s) 531_6. Actions/conditions:
//        531_6: splits saved text into fields; activates the get(0 event group; creates a itemshud 210 object; plus
//        10 more actions.
void Frames::event_func_1351()
{
    // event 531_6 : splits saved text into fields; activates the get(0 event group; creates a itemshud 210 object; plus 10 more actions
    {
        if (!(group_setup_1)) goto event_531_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_refresh_inv_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_531_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inv_512+number_to_string(loop_refresh_inv_index+1))) != (empty_string))) goto event_531_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inv_512+number_to_string(loop_refresh_inv_index+1)), str__96);
        ((INI*)get_instance(itemData_instances))->set_group(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        FrameObject * single_instance_531_6_0; single_instance_531_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hudItem(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_531_6_0 == NULL)
                    single_instance_531_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_531_6_0))->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((Active*)((Active*)single_instance_531_6_0))->alterables->strings.set(0, str_inven_820);
        ((Active*)((Active*)single_instance_531_6_0))->alterables->values.set(1, loop_refresh_inv_index+1);
        ((Active*)((Active*)single_instance_531_6_0))->alterables->values.set(6, ((INI*)get_instance(itemData_instances))->get_value_int(str_illegal_618));
        ((Active*)((Active*)single_instance_531_6_0))->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((Active*)((Active*)single_instance_531_6_0))->alterables->flags.enable(-2);
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
    }
    event_531_6_end: ;
}
