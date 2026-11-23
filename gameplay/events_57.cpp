#include "vitaframetime.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_4764 processes event block(s) 3919_6. Actions/conditions:
//        3919_6: sets Esc to 1; sets the selected object's visibility to false; plays a sound or music track.
void Frames::event_func_4764()
{
    // event 3919_6 : sets Esc to 1; sets the selected object's visibility to false; plays a sound or music track
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3919_6_end;
        if (!(is_key_pressed_once(SDLK_ESCAPE))) goto event_3919_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(561, str_esc_202)) == (0))) goto event_3919_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(21))) goto event_3919_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3919_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(561, str_esc_202, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
        {
            loop_stats_close_npc_running = true;
            int times = int(1);
            loop_stats_close_npc_index = 0;
            while (loop_stats_close_npc_index < times) {
                loop_stats_close_npc_6();
                if (!loop_stats_close_npc_running) break;
                loop_stats_close_npc_index++;
            }
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
    }
    event_3919_6_end: ;
}
// Function purpose: generated callback event_func_4765 processes event block(s) 3932_6. Actions/conditions:
//        3932_6: checks scene is active; skips if dialog is open; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_4765()
{
    // event 3932_6 : checks scene is active; skips if dialog is open; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_3932_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3932_6_end;
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3932_6_end;
            group_code_npc_profiles_npc_profile_1 = false;
    
    }
    event_3932_6_end: ;
}
// Function purpose: generated callback event_func_4766 processes event block(s) 3933_6. Actions/conditions:
//        3933_6: sets the selected object's visibility to false.
void Frames::event_func_4766()
{
    // event 3933_6 : sets the selected object's visibility to false
    {
        if (!(group_code_1)) goto event_3933_6_end;
        shower_183_instances.clear_selection();
        for (ObjectIterator it(shower_183_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!shower_183_instances.has_selection()) goto event_3933_6_end;
        for (ObjectIterator it(shower_183_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_3933_6_end: ;
}
// Function purpose: generated callback event_func_4767 processes event block(s) 3934_6. Actions/conditions:
//        3934_6: sets the selected object's visibility to true.
void Frames::event_func_4767()
{
    // event 3934_6 : sets the selected object's visibility to true
    {
        if (!(group_code_1)) goto event_3934_6_end;
        shower_183_instances.clear_selection();
        qualifier_15.clear_selection();
        if (!check_overlap(shower_183_instances, qualifier_15)) goto event_3934_6_end;
        for (ObjectIterator it(shower_183_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_3934_6_end: ;
}
// Function purpose: generated callback event_func_4768 processes event block(s) 3935_6. Actions/conditions:
//        3935_6: changes a stored game value; creates a stats 340 object; sets the displayed text; plus 1 more
//        actions.
void Frames::event_func_4768()
{
    // event 3935_6 : changes a stored game value; creates a stats 340 object; sets the displayed text; plus 1 more actions
    {
        if (!(group_code_1)) goto event_3935_6_end;
        every_3935_6 += manager.dt;
        if (every_3935_6 < 1.0) goto event_3935_6_end;
        every_3935_6 -= 1.0;
        playerBase_instances.clear_selection();
        bedmedical_234_instances.clear_selection();
        if (!check_overlap(playerBase_instances, bedmedical_234_instances)) goto event_3935_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (((Active*)get_single(bedmedical_234_instances, default_active_instance))->layer->index+1))) goto event_3935_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(7)) < (((Active*)get_instance(playerBase_instances))->alterables->values.get(8)/MathHelper()/2))) goto event_3935_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3935_6_end;
        ((Active*)get_instance(playerBase_instances))->alterables->values.add(7, 1);
        FrameObject * single_instance_3935_6_0; single_instance_3935_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_stats_340(parent->x + -18, parent->y + -16), parent->layer);
                if (single_instance_3935_6_0 == NULL)
                    single_instance_3935_6_0 = new_obj;
            }
        }
        ((TextBlitter*)((TextBlitter*)single_instance_3935_6_0))->set_text(str_hp_2296);
        ((TextBlitter*)((TextBlitter*)single_instance_3935_6_0))->set_text(str__2271);
    }
    event_3935_6_end: ;
}
// Function purpose: generated callback event_func_4769 processes event block(s) 3936_6. Actions/conditions:
//        3936_6: sets the selected object's direction to 24; sets the selected object's direction to 24; sets the
//        object position in the world.
void Frames::event_func_4769()
{
    // event 3936_6 : sets the selected object's direction to 24; sets the selected object's direction to 24; sets the object position in the world
    {
        if (!(group_code_1)) goto event_3936_6_end;
        playerBase_instances.clear_selection();
        bedmedical_234_instances.clear_selection();
        if (!check_overlap(playerBase_instances, bedmedical_234_instances)) goto event_3936_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (((Active*)get_single(bedmedical_234_instances, default_active_instance))->layer->index+1))) goto event_3936_6_end;
        qualifier_16.clear_selection();
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (-1))) { it.deselect(); continue; }
        }
        if (!qualifier_16.has_selection()) goto event_3936_6_end;
        ((Active*)get_instance(playerBase_instances))->set_direction(24);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(qualifier_2, it.current_index));
            if (parent == NULL) goto pos_end_3936_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3936_6_0: ;
        }
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
    }
    event_3936_6_end: ;
}
// Function purpose: generated callback event_func_4770 processes event block(s) 3937_6. Actions/conditions:
//        3937_6: adds a undergroundlighting 226 instance.
void Frames::event_func_4770()
{
    // event 3937_6 : adds a undergroundlighting 226 instance
    {
        if (!(group_code_1)) goto event_3937_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_3937_6_end;
        if (!((undergroundGlow_instances.size()) == (0))) goto event_3937_6_end;
        undergroundGlow_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_undergroundGlow(0, 0), 0);
            undergroundGlow_instances.add_back();
        }
    }
    event_3937_6_end: ;
}
// Function purpose: generated callback event_func_4771 processes event block(s) 3938_6. Actions/conditions:
//        3938_6: removes the selected object.
void Frames::event_func_4771()
{
    // event 3938_6 : removes the selected object
    {
        if (!(group_code_1)) goto event_3938_6_end;
        if (!((undergroundGlow_instances.size()) > (0))) goto event_3938_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) != (1))) goto event_3938_6_end;
        undergroundGlow_instances.clear_selection();
        for (ObjectIterator it(undergroundGlow_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3938_6_end: ;
}
// Function purpose: generated callback event_func_4772 processes event block(s) 3939_6. Actions/conditions:
//        3939_6: sets the selected object's visibility to false.
void Frames::event_func_4772()
{
    // event 3939_6 : sets the selected object's visibility to false
    {
        if (!(group_code_1)) goto event_3939_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_3939_6_end;
        if (!(((Active*)get_instance(screenTint_instances))->flags & VISIBLE)) goto event_3939_6_end;
        ((Active*)get_instance(screenTint_instances))->set_visible(false);
    }
    event_3939_6_end: ;
}
// Function purpose: generated callback event_func_4773 processes event block(s) 3940_6. Actions/conditions:
//        3940_6: sets the selected object's visibility to true.
void Frames::event_func_4773()
{
    // event 3940_6 : sets the selected object's visibility to true
    {
        if (!(group_code_1)) goto event_3940_6_end;
        if (((Active*)get_instance(screenTint_instances))->flags & VISIBLE) goto event_3940_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) != (1))) goto event_3940_6_end;
        ((Active*)get_instance(screenTint_instances))->set_visible(true);
    }
    event_3940_6_end: ;
}
// Function purpose: generated callback event_func_4774 processes event block(s) 3941_6. Actions/conditions:
//        3941_6: sets the selected object's scale to (1.0+(gameVariables->get_value(96,
//        LightSize))+sin_deg(randrange_event(100))*0.2); sets the object position in the world.
void Frames::event_func_4774()
{
    // event 3941_6 : sets the selected object's scale to (1.0+(gameVariables->get_value(96, LightSize))+sin_deg(randrange_event(100))*0.2); sets the object position in the world
    {
        if (!(group_code_1)) goto event_3941_6_end;
        if (!((undergroundGlow_instances.size()) > (0))) goto event_3941_6_end;
        every_3941_6 += manager.dt;
        if (every_3941_6 < 0.04) goto event_3941_6_end;
        every_3941_6 -= 0.04;
        undergroundGlow_instances.clear_selection();
        for (ObjectIterator it(undergroundGlow_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale((1.0+(((AssociateArray*)get_instance(gameVariables_instances))->get_value(96, str_lightsize_611))+sin_deg(randrange_event(100))*0.2));
        }
        for (ObjectIterator it(undergroundGlow_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_3941_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3941_6_0: ;
        }
    }
    event_3941_6_end: ;
}
// Function purpose: generated callback event_func_4775 processes event block(s) 3942_6. Actions/conditions:
//        3942_6: sets LightSize to 0.
void Frames::event_func_4775()
{
    // event 3942_6 : sets LightSize to 0
    {
        if (!(group_code_1)) goto event_3942_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_3942_6_end;
        every_3942_6 += manager.dt;
        if (every_3942_6 < 1.0) goto event_3942_6_end;
        every_3942_6 -= 1.0;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(96, str_lightsize_611, 0);
        {
            loop_ug_lighting_running = true;
            int times = int(6);
            loop_ug_lighting_index = 0;
            while (loop_ug_lighting_index < times) {
                loop_ug_lighting_6();
                if (!loop_ug_lighting_running) break;
                loop_ug_lighting_index++;
            }
        }
    }
    event_3942_6_end: ;
}
// Function purpose: generated callback event_func_4776 processes event block(s) 3946_6. Actions/conditions:
//        3946_6: sets the selected object's visibility to false.
void Frames::event_func_4776()
{
    // event 3946_6 : sets the selected object's visibility to false
    {
        if (!(group_code_1)) goto event_3946_6_end;
        qualifier_16.clear_selection();
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (-1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!qualifier_16.has_selection()) goto event_3946_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3946_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(541, str_zone_showers_1442)) == (1))) goto event_3946_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505)) != (empty_string))) goto event_3946_6_end;
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_3946_6_end: ;
}
// Function purpose: generated callback event_func_4777 processes event block(s) 3947_6. Actions/conditions:
//        3947_6: sets the selected object's visibility to true.
void Frames::event_func_4777()
{
    // event 3947_6 : sets the selected object's visibility to true
    {
        if (!(group_code_1)) goto event_3947_6_end;
        qualifier_16.clear_selection();
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (-1))) { it.deselect(); continue; }
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!qualifier_16.has_selection()) goto event_3947_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3947_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(541, str_zone_showers_1442)) == (0))) goto event_3947_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505)) != (empty_string))) goto event_3947_6_end;
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_3947_6_end: ;
}
// Function purpose: generated callback event_func_4778 processes event block(s) 3948_6. Actions/conditions:
//        3948_6: changes a stored game value.
void Frames::event_func_4778()
{
    VITA_LEGACY_EVENT();
    // event 3948_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_3948_6_end;
        powergen_360_instances.clear_selection();
        for (ObjectIterator it(powergen_360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!powergen_360_instances.has_selection()) goto event_3948_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3948_6_end;
        for (ObjectIterator it(powergen_360_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(2, 1);
        }
    }
    event_3948_6_end: ;
}
// Function purpose: generated callback event_func_4779 processes event block(s) 3949_6. Actions/conditions:
//        3949_6: sets the object's animation to 0; sets the selected object's numeric value to 0; plays a sound or
//        music track.
void Frames::event_func_4779()
{
    // event 3949_6 : sets the object's animation to 0; sets the selected object's numeric value to 0; plays a sound or music track
    {
        if (!(group_code_1)) goto event_3949_6_end;
        powergen_360_instances.clear_selection();
        for (ObjectIterator it(powergen_360_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!powergen_360_instances.has_selection()) goto event_3949_6_end;
        for (ObjectIterator it(powergen_360_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->values.set(2, 0);
        }
        metaldetector_231_instances.clear_selection();
        for (ObjectIterator it(metaldetector_231_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        camera_237_instances.clear_selection();
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        media.play_id(SOUND_GENERATOR_19, 1-1);
    }
    event_3949_6_end: ;
}
// Function purpose: generated callback event_func_4780 processes event block(s) 3950_6. Actions/conditions:
//        3950_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_4780()
{
    // event 3950_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_3950_6_end;
        {
            activesystembox_450_instances.clear_selection();
            SavedSelection extra_activesystembox_450_instances(activesystembox_450_instances);
            for (SavedIterator it(extra_activesystembox_450_instances); !it.end(); ++it) {
                foreach_instance_speech = ((SystemBox*)*it);
                foreach_speech_6();
            }
        }
    }
    event_3950_6_end: ;
}
// Function purpose: generated callback event_func_4781 processes event block(s) 3959_6. Actions/conditions:
//        3959_6: changes a stored game value.
void Frames::event_func_4781()
{
    VITA_LEGACY_EVENT();
    // event 3959_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_3959_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!((((SystemBox*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
            if (!(((SystemBox*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_3959_6_end;
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.sub(1, 1);
        }
    }
    event_3959_6_end: ;
}
// Function purpose: generated callback event_func_4782 processes event block(s) 3960_6. Actions/conditions:
//        3960_6: removes the selected object.
void Frames::event_func_4782()
{
    // event 3960_6 : removes the selected object
    {
        if (!(group_code_1)) goto event_3960_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!((((SystemBox*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!(((SystemBox*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_3960_6_end;
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
    }
    event_3960_6_end: ;
}
// Function purpose: generated callback event_func_4783 processes event block(s) 3961_6. Actions/conditions:
//        3961_6: changes a stored game value.
void Frames::event_func_4783()
{
    VITA_LEGACY_EVENT();
    // event 3961_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_3961_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(22)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3961_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3961_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(22, 1);
        }
    }
    event_3961_6_end: ;
}
// Function purpose: generated callback event_func_4784 processes event block(s) 3962_6. Actions/conditions:
//        3962_6: sets the object's animation to 0.
void Frames::event_func_4784()
{
    // event 3962_6 : sets the object's animation to 0
    {
        if (!(group_code_1)) goto event_3962_6_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!(((Active*)(*it))->animation_finished == 9)) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_3962_6_end;
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_3962_6_end: ;
}
// Function purpose: generated callback event_func_4785 processes event block(s) 3963_6. Actions/conditions:
//        3963_6: changes a stored game value.
void Frames::event_func_4785()
{
    VITA_LEGACY_EVENT();
    // event 3963_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_3963_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(379, str_lastnotice_1176)) > (0))) goto event_3963_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(379, str_lastnotice_1176, 1);
    }
    event_3963_6_end: ;
}
// Function purpose: generated callback event_func_4786 processes event block(s) 3984_6. Actions/conditions:
//        3984_6: sets the object's animation to 1.
void Frames::event_func_4786()
{
    // event 3984_6 : sets the object's animation to 1
    {
        if (!(group_code_1)) goto event_3984_6_end;
        gym4_318_instances.clear_selection();
        for (ObjectIterator it(gym4_318_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!gym4_318_instances.has_selection()) goto event_3984_6_end;
        for (ObjectIterator it(gym4_318_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
    }
    event_3984_6_end: ;
}
// Function purpose: generated callback event_func_4787 processes event block(s) 3985_6. Actions/conditions:
//        3985_6: sets the object's animation to 0.
void Frames::event_func_4787()
{
    // event 3985_6 : sets the object's animation to 0
    {
        if (!(group_code_1)) goto event_3985_6_end;
        gym4_318_instances.clear_selection();
        for (ObjectIterator it(gym4_318_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(0)) { it.deselect(); continue; }
        }
        if (!gym4_318_instances.has_selection()) goto event_3985_6_end;
        for (ObjectIterator it(gym4_318_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_3985_6_end: ;
}
// Function purpose: generated callback event_func_4788 processes event block(s) 3986_6. Actions/conditions:
//        3986_6: checks scene is active; skips if dialog is open; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_4788()
{
    // event 3986_6 : checks scene is active; skips if dialog is open; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_3986_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3986_6_end;
        {
            qualifier_5.clear_selection();
            SavedSelection extra_qualifier_5(qualifier_5);
            for (SavedIterator selected(extra_qualifier_5); !selected.end(); ++selected) {
                foreach_instance_align_g = ((Active*)*selected);
                foreach_align_g_6();
            }
        }
    }
    event_3986_6_end: ;
}
// Function purpose: generated callback event_func_4789 processes event block(s) 3987_6. Actions/conditions:
//        3987_6: checks scene is active; skips if dialog is open; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_4789()
{
    // event 3987_6 : checks scene is active; skips if dialog is open; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_3987_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3987_6_end;
        {
            qualifier_23.clear_selection();
            SavedSelection extra_qualifier_23(qualifier_23);
            for (SavedIterator selected(extra_qualifier_23); !selected.end(); ++selected) {
                foreach_instance_align_markers = ((Active*)*selected);
                foreach_align_markers_6();
            }
        }
    }
    event_3987_6_end: ;
}
// Function purpose: generated callback event_func_4790 processes event block(s) 4004_6. Actions/conditions:
//        4004_6: sets the object position in the world; sets the selected object's direction to
//        ((Active*)get_instance(patroljeep_416_instances, it.current_index,
//        default_active_instance))->get_direction().
void Frames::event_func_4790()
{
    // event 4004_6 : sets the object position in the world; sets the selected object's direction to ((Active*)get_instance(patroljeep_416_instances, it.current_index, default_active_instance))->get_direction()
    {
        if (!(group_code_1)) goto event_4004_6_end;
        torch_331_instances.clear_selection();
        for (ObjectIterator it(torch_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!torch_331_instances.has_selection()) goto event_4004_6_end;
        for (ObjectIterator it(torch_331_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(patroljeep_416_instances, it.current_index));
            if (parent == NULL) goto pos_end_4004_6_0;
            int x_off; x_off = 22;
            int y_off; y_off = -6;
            transform_pos(x_off, y_off, parent);
            ((Active*)*it)->set_global_position(parent->get_x() + x_off, parent->get_y() + y_off);
            pos_end_4004_6_0: ;
        }
        for (ObjectIterator it(torch_331_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_instance(patroljeep_416_instances, it.current_index, default_active_instance))->get_direction());
        }
    }
    event_4004_6_end: ;
}
// Function purpose: generated callback event_func_4791 processes event block(s) 4005_6. Actions/conditions:
//        4005_6: sets the object position in the world; sets the selected object's direction to
//        ((Active*)get_instance(patroljeep_416_instances, it.current_index,
//        default_active_instance))->get_direction().
void Frames::event_func_4791()
{
    // event 4005_6 : sets the object position in the world; sets the selected object's direction to ((Active*)get_instance(patroljeep_416_instances, it.current_index, default_active_instance))->get_direction()
    {
        if (!(group_code_1)) goto event_4005_6_end;
        torch_331_instances.clear_selection();
        for (ObjectIterator it(torch_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-2))) { it.deselect(); continue; }
        }
        if (!torch_331_instances.has_selection()) goto event_4005_6_end;
        for (ObjectIterator it(torch_331_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(patroljeep_416_instances, it.current_index));
            if (parent == NULL) goto pos_end_4005_6_0;
            int x_off; x_off = 22;
            int y_off; y_off = 8;
            transform_pos(x_off, y_off, parent);
            ((Active*)*it)->set_global_position(parent->get_x() + x_off, parent->get_y() + y_off);
            pos_end_4005_6_0: ;
        }
        for (ObjectIterator it(torch_331_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_instance(patroljeep_416_instances, it.current_index, default_active_instance))->get_direction());
        }
    }
    event_4005_6_end: ;
}
// Function purpose: generated callback event_func_4792 processes event block(s) 4006_6. Actions/conditions:
//        4006_6: removes the selected object.
void Frames::event_func_4792()
{
    // event 4006_6 : removes the selected object
    {
        if (!(group_code_1)) goto event_4006_6_end;
        dizzy_467_instances.clear_selection();
        for (ObjectIterator it(dizzy_467_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (0))) { it.deselect(); continue; }
        }
        if (!dizzy_467_instances.has_selection()) goto event_4006_6_end;
        for (ObjectIterator it(dizzy_467_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4006_6_end: ;
}
// Function purpose: generated callback event_func_4793 processes event block(s) 4008_6. Actions/conditions:
//        4008_6: checks scene is active; dialog is open; the event-specific game state condition is met; skips if
//        scene is active; this handler gates a game event without a d.
void Frames::event_func_4793()
{
    // event 4008_6 : checks scene is active; dialog is open; the event-specific game state condition is met; skips if scene is active; this handler gates a game event without a d
    {
        if (!(group_code_1)) goto event_4008_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_4008_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(12))) goto event_4008_6_end;
        if (group_code_1 && group_code_missions_1) goto event_4008_6_end;
        if (!group_code_missions_1) {
            group_code_missions_1 = true;
        }
    }
    event_4008_6_end: ;
}
// Function purpose: generated callback event_func_4794 processes event block(s) 4009_6. Actions/conditions:
//        4009_6: checks scene is active; skips if dialog is open; skips if scene is active; this handler gates a game
//        event without a direct value/object action.
void Frames::event_func_4794()
{
    // event 4009_6 : checks scene is active; skips if dialog is open; skips if scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_4009_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4009_6_end;
        if (group_code_1 && group_code_missions_1) goto event_4009_6_end;
            group_code_missions_1 = false;
    
    }
    event_4009_6_end: ;
}
// Function purpose: generated callback event_func_4795 processes event block(s) 4010_6. Actions/conditions:
//        4010_6: sets LClick to 1; splits saved text into fields; sets FlashJournal to 1; plus 1 more actions.
void Frames::event_func_4795()
{
    // event 4010_6 : sets LClick to 1; splits saved text into fields; sets FlashJournal to 1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_missions_1)) goto event_4010_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(25))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_4010_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_4010_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(12))) goto event_4010_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_4010_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(920, str_currmission_2235), str__254);
        {
            loop_compile_mission_running = true;
            int times = int(1);
            loop_compile_mission_index = 0;
            while (loop_compile_mission_index < times) {
                loop_compile_mission_6();
                if (!loop_compile_mission_running) break;
                loop_compile_mission_index++;
            }
        }
        {
            loop_close_mission_running = true;
            int times = int(1);
            loop_close_mission_index = 0;
            while (loop_close_mission_index < times) {
                loop_close_mission_6();
                if (!loop_close_mission_running) break;
                loop_close_mission_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(613, str_flashjournal_1595, 1);
        media.play_id(SOUND_HP_10, 1-1);
    }
    event_4010_6_end: ;
}
// Function purpose: generated callback event_func_4796 processes event block(s) 4025_6. Actions/conditions:
//        4025_6: sets LClick to 1.
void Frames::event_func_4796()
{
    // event 4025_6 : sets LClick to 1
    {
        if (!(group_code_1 && group_code_missions_1)) goto event_4025_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(26))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_4025_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_4025_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(12))) goto event_4025_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_4025_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_decline_mission_running = true;
            int times = int(1);
            loop_decline_mission_index = 0;
            while (loop_decline_mission_index < times) {
                loop_decline_mission_6();
                if (!loop_decline_mission_running) break;
                loop_decline_mission_index++;
            }
        }
        {
            loop_close_mission_running = true;
            int times = int(1);
            loop_close_mission_index = 0;
            while (loop_close_mission_index < times) {
                loop_close_mission_6();
                if (!loop_close_mission_running) break;
                loop_close_mission_index++;
            }
        }
    }
    event_4025_6_end: ;
}
// Function purpose: generated callback event_func_4797 processes event block(s) 4028_6. Actions/conditions:
//        4028_6: checks scene is active; the event-specific game state condition is met; dialog is open; skips if the
//        event-specific game state condition is met; this handler.
void Frames::event_func_4797()
{
    // event 4028_6 : checks scene is active; the event-specific game state condition is met; dialog is open; skips if the event-specific game state condition is met; this handler
    {
        if (!(group_code_1 && group_code_missions_1)) goto event_4028_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_4028_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_4028_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(12))) goto event_4028_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->mouse_over()) goto event_4028_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_4028_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_4028_6_end;
        {
            loop_close_mission_running = true;
            int times = int(1);
            loop_close_mission_index = 0;
            while (loop_close_mission_index < times) {
                loop_close_mission_6();
                if (!loop_close_mission_running) break;
                loop_close_mission_index++;
            }
        }
    }
    event_4028_6_end: ;
}
// Function purpose: generated callback event_func_4798 processes event block(s) 4029_6. Actions/conditions:
//        4029_6: checks scene is active; skips if the event-specific game state condition is met; dialog is open;
//        game state LClick; this handler gates a game event without a.
void Frames::event_func_4798()
{
    // event 4029_6 : checks scene is active; skips if the event-specific game state condition is met; dialog is open; game state LClick; this handler gates a game event without a
    {
        if (!(group_code_1 && group_code_missions_1)) goto event_4029_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(27))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_4029_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_4029_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_4029_6_end;
        {
            loop_close_mission_running = true;
            int times = int(1);
            loop_close_mission_index = 0;
            while (loop_close_mission_index < times) {
                loop_close_mission_6();
                if (!loop_close_mission_running) break;
                loop_close_mission_index++;
            }
        }
    }
    event_4029_6_end: ;
}
// Function purpose: generated callback event_func_4799 processes event block(s) 4030_6. Actions/conditions:
//        4030_6: checks scene is active; skips if the event-specific game state condition is met; dialog is open;
//        game state LClick; this handler gates a game event without a.
void Frames::event_func_4799()
{
    // event 4030_6 : checks scene is active; skips if the event-specific game state condition is met; dialog is open; game state LClick; this handler gates a game event without a
    {
        if (!(group_code_1 && group_code_missions_1)) goto event_4030_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(28))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_4030_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_4030_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_4030_6_end;
        {
            loop_close_mission_running = true;
            int times = int(1);
            loop_close_mission_index = 0;
            while (loop_close_mission_index < times) {
                loop_close_mission_6();
                if (!loop_close_mission_running) break;
                loop_close_mission_index++;
            }
        }
    }
    event_4030_6_end: ;
}
// Function purpose: generated callback event_func_4800 processes event block(s) 4031_6. Actions/conditions:
//        4031_6: stops the object's movement.
void Frames::event_func_4800()
{
    // event 4031_6 : stops the object's movement
    {
        if (!(group_code_1 && group_code_missions_1)) goto event_4031_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_4031_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(12))) goto event_4031_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(438, str_missionby_1294)))) { it.deselect(); continue; }
            if (((Active*)(*it))->get_movement()->is_stopped()) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_4031_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
    }
    event_4031_6_end: ;
}
// Function purpose: generated callback event_func_4801 processes event block(s) 4032_6. Actions/conditions:
//        4032_6: sets the selected object's direction to 0.
void Frames::event_func_4801()
{
    // event 4032_6 : sets the selected object's direction to 0
    {
        if (!(group_code_1 && group_code_missions_1)) goto event_4032_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_4032_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(12))) goto event_4032_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(65536))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_4032_6_end;
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_4032_6_end: ;
}
// Function purpose: generated callback event_func_4802 processes event block(s) 4033_6. Actions/conditions:
//        4033_6: sets the selected object's direction to 16.
void Frames::event_func_4802()
{
    // event 4033_6 : sets the selected object's direction to 16
    {
        if (!(group_code_1 && group_code_missions_1)) goto event_4033_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_4033_6_end;
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_4033_6_end: ;
}
// Function purpose: generated callback event_func_4803 processes event block(s) 4035_6. Actions/conditions:
//        4035_6: checks scene is active; the event-specific game state condition is met; skips if scene is active;
//        this handler gates a game event without a direct value/obje.
void Frames::event_func_4803()
{
    // event 4035_6 : checks scene is active; the event-specific game state condition is met; skips if scene is active; this handler gates a game event without a direct value/obje
    {
        if (!(group_code_1)) goto event_4035_6_end;
        if (!((water_303_instances.size()) > (0))) goto event_4035_6_end;
        if (group_code_1 && group_code_flooding_1) goto event_4035_6_end;
        if (!group_code_flooding_1) {
            group_code_flooding_1 = true;
        }
    }
    event_4035_6_end: ;
}
// Function purpose: generated callback event_func_4804 processes event block(s) 4036_6. Actions/conditions:
//        4036_6: checks scene is active; the event-specific game state condition is met; this handler gates a game
//        event without a direct value/object action.
void Frames::event_func_4804()
{
    // event 4036_6 : checks scene is active; the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_4036_6_end;
        if (!(group_code_1 && group_code_flooding_1)) goto event_4036_6_end;
        if (!((water_303_instances.size()) == (0))) goto event_4036_6_end;
            group_code_flooding_1 = false;
    
    }
    event_4036_6_end: ;
}
// Function purpose: generated callback event_func_4805 processes event block(s) 4037_6. Actions/conditions:
//        4037_6: checks scene is active; skips if the event-specific game state condition is met; the event-specific
//        game state condition is met; skips if dialog is open; thi.
void Frames::event_func_4805()
{
    // event 4037_6 : checks scene is active; skips if the event-specific game state condition is met; the event-specific game state condition is met; skips if dialog is open; thi
    {
        if (!(group_code_1 && group_code_flooding_1)) goto event_4037_6_end;
        every_4037_6 += manager.dt;
        if (every_4037_6 < 3.0) goto event_4037_6_end;
        every_4037_6 -= 3.0;
        if (!((water_303_instances.size()) > (0))) goto event_4037_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4037_6_end;
        {
            water_303_instances.clear_selection();
            SavedSelection extra_water_303_instances(water_303_instances);
            for (SavedIterator it(extra_water_303_instances); !it.end(); ++it) {
                foreach_instance_flood = ((Active*)*it);
                foreach_flood_6();
            }
        }
    }
    event_4037_6_end: ;
}
// Function purpose: generated callback event_func_4806 processes event block(s) 4046_6. Actions/conditions:
//        4046_6: removes the selected object.
void Frames::event_func_4806()
{
    // event 4046_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_flooding_1)) goto event_4046_6_end;
        water_303_instances.clear_selection();
        for (ObjectIterator it(water_303_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!water_303_instances.has_selection()) goto event_4046_6_end;
        for (ObjectIterator it(water_303_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4046_6_end: ;
}
// Function purpose: generated callback event_func_4807 processes event block(s) 4047_6. Actions/conditions:
//        4047_6: removes the selected object.
void Frames::event_func_4807()
{
    // event 4047_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_flooding_1)) goto event_4047_6_end;
        water_303_instances.clear_selection();
        qualifier_6.clear_selection();
        if (!check_overlap(water_303_instances, qualifier_6)) goto event_4047_6_end;
        for (ObjectIterator it(water_303_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4047_6_end: ;
}
// Function purpose: generated callback event_func_4808 processes event block(s) 4048_6. Actions/conditions:
//        4048_6: adds a fire 377 instance; sets the selected object's horizontal position to
//        (get_mouse_x()/MathHelper()/16)*16; sets the selected object's vertical position to
//        (get_mouse_y()/MathHelper()/16)*16.
void Frames::event_func_4808()
{
    // event 4048_6 : adds a fire 377 instance; sets the selected object's horizontal position to (get_mouse_x()/MathHelper()/16)*16; sets the selected object's vertical position to (get_mouse_y()/MathHelper()/16)*16
    {
        if (!(group_code_1 && group_code_fire_1)) goto event_4048_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_RIGHT))) goto event_4048_6_end;
        fire_377_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fire_377(-84, 84), 1);
            fire_377_instances.add_back();
        }
        for (ObjectIterator it(fire_377_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((get_mouse_x()/MathHelper()/16)*16);
            ((Active*)*it)->set_y((get_mouse_y()/MathHelper()/16)*16);
        }
    }
    event_4048_6_end: ;
}
// Function purpose: generated callback event_func_4809 processes event block(s) 4049_6. Actions/conditions:
//        4049_6: changes a stored game value.
void Frames::event_func_4809()
{
    VITA_LEGACY_EVENT();
    // event 4049_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_fire_1)) goto event_4049_6_end;
        fire_377_instances.clear_selection();
        for (ObjectIterator it(fire_377_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!fire_377_instances.has_selection()) goto event_4049_6_end;
        for (ObjectIterator it(fire_377_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 1);
        }
    }
    event_4049_6_end: ;
}
// Function purpose: generated callback event_func_4810 processes event block(s) 4050_6. Actions/conditions:
//        4050_6: removes the selected object.
void Frames::event_func_4810()
{
    // event 4050_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_fire_1)) goto event_4050_6_end;
        fire_377_instances.clear_selection();
        for (ObjectIterator it(fire_377_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!fire_377_instances.has_selection()) goto event_4050_6_end;
        for (ObjectIterator it(fire_377_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4050_6_end: ;
}
// Function purpose: generated callback event_func_4811 processes event block(s) 4051_6. Actions/conditions:
//        4051_6: checks scene is active; skips if the event-specific game state condition is met; the event-specific
//        game state condition is met; this handler gates a game ev.
void Frames::event_func_4811()
{
    // event 4051_6 : checks scene is active; skips if the event-specific game state condition is met; the event-specific game state condition is met; this handler gates a game ev
    {
        if (!(group_code_1 && group_code_fire_1)) goto event_4051_6_end;
        every_4051_6 += manager.dt;
        if (every_4051_6 < 3.0) goto event_4051_6_end;
        every_4051_6 -= 3.0;
        if (!((fire_377_instances.size()) > (0))) goto event_4051_6_end;
        {
            fire_377_instances.clear_selection();
            SavedSelection extra_fire_377_instances(fire_377_instances);
            for (SavedIterator selected(extra_fire_377_instances); !selected.end(); ++selected) {
                foreach_instance_spread = ((Active*)*selected);
                foreach_spread_6();
            }
        }
    }
    event_4051_6_end: ;
}
// Function purpose: generated callback event_func_4812 processes event block(s) 4053_6. Actions/conditions:
//        4053_6: saves the current object selection; saves the current object selection; saves the current object
//        selection; plus 6 more actions.
void Frames::event_func_4812()
{
    // event 4053_6 : saves the current object selection; saves the current object selection; saves the current object selection; plus 6 more actions
    bool or_result_4053_6 = false;
    bool or_temp_result_4053_6_0 = false;
    {
        if (!(group_code_1 && group_code_fire_1)) goto or_event_4053_6_0_end;
        usespot2_378_instances.clear_selection();
        for (ObjectIterator it(usespot2_378_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!usespot2_378_instances.has_selection()) goto or_event_4053_6_0_end;
        or_result_4053_6 = true;
        or_temp_result_4053_6_0 = true;
    }
    or_event_4053_6_0_end: ;
    usespot2_378_instances.clear_saved_selection();
    if (or_temp_result_4053_6_0) {
        usespot2_378_instances.save_selection();
    }
    // event 4053_6 : saves the current object selection; saves the current object selection; saves the current object selection; plus 6 more actions
    bool or_temp_result_4053_6_1 = false;
    {
        if (!(group_code_1 && group_code_fire_1)) goto or_event_4053_6_1_end;
        usespot2_378_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(usespot2_378_instances, qualifier_19)) goto or_event_4053_6_1_end;
        or_result_4053_6 = true;
        or_temp_result_4053_6_1 = true;
    }
    or_event_4053_6_1_end: ;
    qualifier_19.clear_saved_selection();
    if (or_temp_result_4053_6_1) {
        qualifier_19.save_selection();
        usespot2_378_instances.save_selection();
    }
    // event 4053_6 : saves the current object selection; saves the current object selection; saves the current object selection; plus 6 more actions
    bool or_temp_result_4053_6_2 = false;
    {
        if (!(group_code_1 && group_code_fire_1)) goto or_event_4053_6_2_end;
        usespot2_378_instances.clear_selection();
        fire_377_instances.clear_selection();
        if (!check_overlap(usespot2_378_instances, fire_377_instances)) goto or_event_4053_6_2_end;
        or_result_4053_6 = true;
        or_temp_result_4053_6_2 = true;
    }
    or_event_4053_6_2_end: ;
    fire_377_instances.clear_saved_selection();
    if (or_temp_result_4053_6_2) {
        fire_377_instances.save_selection();
        usespot2_378_instances.save_selection();
    }
    // event 4053_6 : saves the current object selection; saves the current object selection; saves the current object selection; plus 6 more actions
    bool or_temp_result_4053_6_3 = false;
    {
        if (!(group_code_1 && group_code_fire_1)) goto or_event_4053_6_3_end;
        usespot2_378_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(usespot2_378_instances, qualifier_8)) goto or_event_4053_6_3_end;
        or_result_4053_6 = true;
        or_temp_result_4053_6_3 = true;
    }
    or_event_4053_6_3_end: ;
    qualifier_8.clear_saved_selection();
    if (or_temp_result_4053_6_3) {
        qualifier_8.save_selection();
        usespot2_378_instances.save_selection();
    }
    // event 4053_6 : saves the current object selection; saves the current object selection; saves the current object selection; plus 6 more actions
    bool or_temp_result_4053_6_4 = false;
    {
        if (!(group_code_1 && group_code_fire_1)) goto or_event_4053_6_4_end;
        usespot2_378_instances.clear_selection();
        qualifier_22.clear_selection();
        if (!check_overlap(usespot2_378_instances, qualifier_22)) goto or_event_4053_6_4_end;
        or_result_4053_6 = true;
        or_temp_result_4053_6_4 = true;
        or_event_4053_6_4_end: ;
        qualifier_22.clear_saved_selection();
        if (or_temp_result_4053_6_4) {
            qualifier_22.save_selection();
            usespot2_378_instances.save_selection();
        }
        if (!or_result_4053_6) goto or_final_or_event_4053_6_4_end;
        usespot2_378_instances.empty_selection();
        qualifier_8.empty_selection();
        qualifier_22.empty_selection();
        qualifier_19.empty_selection();
        fire_377_instances.empty_selection();
        if (or_temp_result_4053_6_2) {
            fire_377_instances.restore_selection();
        }
        if (or_temp_result_4053_6_3) {
            qualifier_8.restore_selection();
        }
        if (or_temp_result_4053_6_4) {
            qualifier_22.restore_selection();
        }
        if (or_temp_result_4053_6_1) {
            qualifier_19.restore_selection();
        }
        if (or_temp_result_4053_6_0 || or_temp_result_4053_6_1 || or_temp_result_4053_6_2 || or_temp_result_4053_6_3 || or_temp_result_4053_6_4) {
            usespot2_378_instances.restore_selection();
        }
        for (ObjectIterator it(usespot2_378_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    or_final_or_event_4053_6_4_end: ;
}
// Function purpose: generated callback event_func_4813 processes event block(s) 4054_6. Actions/conditions:
//        4054_6: creates a fire 377 object; sets the selected object's numeric value to
//        ((Active*)get_single(usespot2_378_instances, default_active_instance))->alterables->values.get(0); removes
//        the selected object; plus 1 more actions.
void Frames::event_func_4813()
{
    // event 4054_6 : creates a fire 377 object; sets the selected object's numeric value to ((Active*)get_single(usespot2_378_instances, default_active_instance))->alterables->values.get(0); removes the selected object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_fire_1)) goto event_4054_6_end;
        usespot2_378_instances.clear_selection();
        for (ObjectIterator it(usespot2_378_instances); !it.end(); ++it) {
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!usespot2_378_instances.has_selection()) goto event_4054_6_end;
        if (!check_not_overlap(usespot2_378_instances, qualifier_19)) goto event_4054_6_end;
        if (!check_not_overlap(usespot2_378_instances, fire_377_instances)) goto event_4054_6_end;
        if (!check_not_overlap(usespot2_378_instances, qualifier_22)) goto event_4054_6_end;
        if (!check_not_overlap(usespot2_378_instances, qualifier_8)) goto event_4054_6_end;
        FrameObject * single_instance_4054_6_0; single_instance_4054_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(usespot2_378_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fire_377(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_4054_6_0 == NULL)
                    single_instance_4054_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_4054_6_0))->alterables->values.set(2, ((Active*)get_single(usespot2_378_instances, default_active_instance))->alterables->values.get(0));
        for (ObjectIterator it(usespot2_378_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)((Active*)single_instance_4054_6_0))->move_back();
    }
    event_4054_6_end: ;
}
// Function purpose: generated callback event_func_4814 processes event block(s) 4055_6. Actions/conditions:
//        4055_6: creates a dust 223 object; chooses a random value; updates game state with
//        ((Active*)((Active*)single_instance_4055_6_0))->set_movement(1); plus 6 more actions.
void Frames::event_func_4814()
{
    // event 4055_6 : creates a dust 223 object; chooses a random value; updates game state with ((Active*)((Active*)single_instance_4055_6_0))->set_movement(1); plus 6 more actions
    {
        if (!(group_code_1 && group_code_fire_1)) goto event_4055_6_end;
        if (!((fire_377_instances.size()) > (0))) goto event_4055_6_end;
        every_4055_6 += manager.dt;
        if (every_4055_6 < 0.5) goto event_4055_6_end;
        every_4055_6 -= 0.5;
        if (!((randrange_event(2)) == (1))) goto event_4055_6_end;
        FrameObject * single_instance_4055_6_0; single_instance_4055_6_0 = NULL;
        // select single: true false false
        fire_377_instances.clear_selection();
        for (ObjectIterator p_it(fire_377_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 0), parent->layer);
                if (single_instance_4055_6_0 == NULL)
                    single_instance_4055_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_4055_6_0))->set_scale(1+randrange_event(2));
        ((Active*)((Active*)single_instance_4055_6_0))->set_movement(1);
        ((Active*)((Active*)single_instance_4055_6_0))->get_movement()->set_speed(6+randrange_event(10));
        ((Active*)((Active*)single_instance_4055_6_0))->force_speed(30);
        ((Active*)((Active*)single_instance_4055_6_0))->get_movement()->start();
    }
    event_4055_6_end: ;
}
// Function purpose: generated callback event_func_4815 processes event block(s) 4056_6. Actions/conditions:
//        4056_6: checks scene is active; skips if caught solitary 1 0 event group is active; game state Outfit; this
//        handler gates a game event without a direct value/object.
void Frames::event_func_4815()
{
    // event 4056_6 : checks scene is active; skips if caught solitary 1 0 event group is active; game state Outfit; this handler gates a game event without a direct value/object
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4056_6_end;
        if (!group_check_group_code_caught_solitary_1_0) goto event_4056_6_end;
        group_check_group_code_caught_solitary_1_0 = false;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 1)) != (str_4_161))) goto event_4056_6_end;
        {
            loop_sol_check_outfit_running = true;
            int times = int(1);
            loop_sol_check_outfit_index = 0;
            while (loop_sol_check_outfit_index < times) {
                loop_sol_check_outfit_6();
                if (!loop_sol_check_outfit_running) break;
                loop_sol_check_outfit_index++;
            }
        }
    }
    event_4056_6_end: ;
}
// Function purpose: generated callback event_func_4816 processes event block(s) 4064_6. Actions/conditions:
//        4064_6: creates a fade 343 object; sets the target object's scale; changes the selected object transparency;
//        plus 19 more actions.
void Frames::event_func_4816()
{
    // event 4064_6 : creates a fade 343 object; sets the target object's scale; changes the selected object transparency; plus 19 more actions
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4064_6_end;
        if (!group_check_group_code_caught_solitary_1_1) goto event_4064_6_end;
        group_check_group_code_caught_solitary_1_1 = false;
        FrameObject * single_instance_4064_6_0; single_instance_4064_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(sidePanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_screenFade(parent->x + 0, parent->y + -17), parent->layer);
                if (single_instance_4064_6_0 == NULL)
                    single_instance_4064_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_4064_6_0))->set_scale(10);
        ((Active*)((Active*)single_instance_4064_6_0))->blend_color.set_alpha_coefficient(255);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(29);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(8);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(32, str_heat_495, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(363, str_score_n_1157, 100);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(608, str_susp_total_1588, 100);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_1_97));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(31, str_outfitshort_494, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(139, str_weapon_704, empty_string);
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(25);
            ((Active*)*it)->alterables->values.set(16, 0);
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->alterables->values.get(8)/MathHelper()/2);
            ((Active*)*it)->alterables->values.set(18, 0);
            ((Active*)*it)->alterables->values.set(15, 0);
        }
        activityPanel_instances.clear_selection();
        for (ObjectIterator it(activityPanel_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        activityProgress_instances.clear_selection();
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        activityText_instances.clear_selection();
        for (ObjectIterator it(activityText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        quota_358_instances.clear_selection();
        for (ObjectIterator it(quota_358_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        {
            loop_letter_busted_running = true;
            int times = int(1);
            loop_letter_busted_index = 0;
            while (loop_letter_busted_index < times) {
                loop_letter_busted_6();
                if (!loop_letter_busted_running) break;
                loop_letter_busted_index++;
            }
        }
        {
            loop_assign_keys_running = true;
            int times = int(1);
            loop_assign_keys_index = 0;
            while (loop_assign_keys_index < times) {
                loop_assign_keys_6();
                if (!loop_assign_keys_running) break;
                loop_assign_keys_index++;
            }
        }
    }
    event_4064_6_end: ;
}
// Function purpose: generated callback event_func_4817 processes event block(s) 4066_6. Actions/conditions:
//        4066_6: sets the selected object's horizontal position to dialogPanel->get_box_index(2)-90; sets the
//        selected object's vertical position to dialogPanel->get_box_index(3)-25; sets the object position in the
//        world.
void Frames::event_func_4817()
{
    // event 4066_6 : sets the selected object's horizontal position to dialogPanel->get_box_index(2)-90; sets the selected object's vertical position to dialogPanel->get_box_index(3)-25; sets the object position in the world
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4066_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(29))) goto event_4066_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_4066_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(dialogPanel_instances))->get_box_index(2)-90);
            ((Active*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(3)-25);
        }
        buttontext_445_instances.clear_selection();
        for (ObjectIterator it(buttontext_445_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(dialogButton_instances, it.current_index));
            if (parent == NULL) goto pos_end_4066_6_0;
            ((Text*)*it)->set_global_position(parent->get_x() + 3, parent->get_y() + 3);
            pos_end_4066_6_0: ;
        }
    }
    event_4066_6_end: ;
}
// Function purpose: generated callback event_func_4818 processes event block(s) 4067_6. Actions/conditions:
//        4067_6: removes the selected object.
void Frames::event_func_4818()
{
    // event 4067_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4067_6_end;
        if (!group_check_group_code_caught_solitary_1_2) goto event_4067_6_end;
        group_check_group_code_caught_solitary_1_2 = false;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_jobstaff_1891))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4067_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4067_6_end: ;
}
// Function purpose: generated callback event_func_4819 processes event block(s) 4068_6. Actions/conditions:
//        4068_6: removes the selected object.
void Frames::event_func_4819()
{
    // event 4068_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4068_6_end;
        if (!group_check_group_code_caught_solitary_1_3) goto event_4068_6_end;
        group_check_group_code_caught_solitary_1_3 = false;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_warden_594))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4068_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4068_6_end: ;
}
// Function purpose: generated callback event_func_4820 processes event block(s) 4069_6. Actions/conditions:
//        4069_6: removes the selected object.
void Frames::event_func_4820()
{
    // event 4069_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4069_6_end;
        if (!group_check_group_code_caught_solitary_1_4) goto event_4069_6_end;
        group_check_group_code_caught_solitary_1_4 = false;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_visitor_593))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4069_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4069_6_end: ;
}
// Function purpose: generated callback event_func_4821 processes event block(s) 4070_6. Actions/conditions:
//        4070_6: removes the selected object.
void Frames::event_func_4821()
{
    // event 4070_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4070_6_end;
        if (!group_check_group_code_caught_solitary_1_5) goto event_4070_6_end;
        group_check_group_code_caught_solitary_1_5 = false;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_medstaff_1892))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4070_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4070_6_end: ;
}
// Function purpose: generated callback event_func_4822 processes event block(s) 4071_6. Actions/conditions:
//        4071_6: adds a activesystembox 450 instance; enables flag 1 (object-specific active or interaction state) on
//        the selected object; updates game state with selected object->set_fill(Color(make_color_int(36, 36, 36)));
//        plus 1 more actions.
void Frames::event_func_4822()
{
    // event 4071_6 : adds a activesystembox 450 instance; enables flag 1 (object-specific active or interaction state) on the selected object; updates game state with selected object->set_fill(Color(make_color_int(36, 36, 36))); plus 1 more actions
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4071_6_end;
        if (!group_check_group_code_caught_solitary_1_6) goto event_4071_6_end;
        group_check_group_code_caught_solitary_1_6 = false;
        activesystembox_450_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_activesystembox_450(-88, 129), 5);
            activesystembox_450_instances.add_back();
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->flags.enable(1);
            ((SystemBox*)*it)->set_fill(Color(make_color_int(36, 36, 36)));
            ((SystemBox*)*it)->blend_color.set(Color(255, 255, 255));
        }
    }
    event_4071_6_end: ;
}
// Function purpose: generated callback event_func_4823 processes event block(s) 4072_6. Actions/conditions:
//        4072_6: sets source to Caught entry 1; sets source to
//        StringReplace::replace(gameVariables->get_string(81, source), $crime,
//        gameVariables->get_string(2, EndString)); sets source to
//        StringReplace::replace(gameVariables->get_string(81, source), $name,
//        playerBase->alterables->strings.get(0)); plus 12 more actions.
void Frames::event_func_4823()
{
    // event 4072_6 : sets source to Caught entry 1; sets source to StringReplace::replace(gameVariables->get_string(81, source), $crime, gameVariables->get_string(2, EndString)); sets source to StringReplace::replace(gameVariables->get_string(81, source), $name, playerBase->alterables->strings.get(0)); plus 12 more actions
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4072_6_end;
        if (!group_check_group_code_caught_solitary_1_7) goto event_4072_6_end;
        group_check_group_code_caught_solitary_1_7 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_caught_436, str_1_97));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_crime_2299, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(2, str_endstring_435)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_name_693, ((Active*)get_instance(playerBase_instances))->alterables->strings.get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str__346, str__624));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(957, str_endcounter_2300, 50);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(151, str_carrying_724, 0);
        ((Active*)get_instance(camera_202_instances))->alterables->values.set(0, 5);
        FrameObject * single_instance_4072_6_0; single_instance_4072_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -112, parent->y + -66), parent->layer);
                if (single_instance_4072_6_0 == NULL)
                    single_instance_4072_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_4072_6_0))->blend_color.set(Color(0, 61, 128));
        ((Text*)((Text*)single_instance_4072_6_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
        water_303_instances.clear_selection();
        for (ObjectIterator it(water_303_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        {
            loop_empty_bogs_running = true;
            int times = int(toilet2_307_instances.size());
            loop_empty_bogs_index = 0;
            while (loop_empty_bogs_index < times) {
                loop_empty_bogs_6();
                if (!loop_empty_bogs_running) break;
                loop_empty_bogs_index++;
            }
        }
        media.play_id(SOUND_GENERATOR_19, 1-1);
    }
    event_4072_6_end: ;
}
// Function purpose: generated callback event_func_4824 processes event block(s) 4073_6. Actions/conditions:
//        4073_6: changes a stored game value.
void Frames::event_func_4824()
{
    VITA_LEGACY_EVENT();
    // event 4073_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4073_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(957, str_endcounter_2300)) > (0))) goto event_4073_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(957, str_endcounter_2300, 1);
    }
    event_4073_6_end: ;
}
// Function purpose: generated callback event_func_4825 processes event block(s) 4074_6. Actions/conditions:
//        4074_6: sets global value 12 from 4; removes the selected object; sets the selected object's visibility to
//        false.
void Frames::event_func_4825()
{
    // event 4074_6 : sets global value 12 from 4; removes the selected object; sets the selected object's visibility to false
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4074_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_4074_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_4074_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(29))) goto event_4074_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(256))) goto event_4074_6_end;
        if (!((((Active*)get_instance(screenFade_instances, default_active_instance))->blend_color.get_alpha_coefficient()) == (0))) goto event_4074_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(957, str_endcounter_2300)) == (0))) goto event_4074_6_end;
        global_values->set(12, 4);
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        buttontext_445_instances.clear_selection();
        for (ObjectIterator it(buttontext_445_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
        {
            loop_shu_running = true;
            int times = int(1);
            loop_shu_index = 0;
            while (loop_shu_index < times) {
                loop_shu_6();
                if (!loop_shu_running) break;
                loop_shu_index++;
            }
        }
    }
    event_4074_6_end: ;
}
// Function purpose: generated callback event_func_4826 processes event block(s) 4113_6. Actions/conditions:
//        4113_6: changes the selected object transparency.
void Frames::event_func_4826()
{
    VITA_LEGACY_EVENT();
    // event 4113_6 : changes the selected object transparency
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4113_6_end;
        if (!((((Active*)get_instance(screenFade_instances, default_active_instance))->blend_color.get_alpha_coefficient()) > (0))) goto event_4113_6_end;
        screenFade_instances.clear_selection();
        for (ObjectIterator it(screenFade_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(((Active*)*it)->blend_color.get_alpha_coefficient()-6);
        }
    }
    event_4113_6_end: ;
}
// Function purpose: generated callback event_func_4827 processes event block(s) 4114_6. Actions/conditions:
//        4114_6: checks scene is active; the event-specific game state condition is met; this handler gates a game
//        event without a direct value/object action.
void Frames::event_func_4827()
{
    // event 4114_6 : checks scene is active; the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4114_6_end;
        if (!((screenFade_instances.size()) == (0))) goto event_4114_6_end;
            group_code_caught_solitary_1 = false;
    
    }
    event_4114_6_end: ;
}
// Function purpose: generated callback event_func_4828 processes event block(s) 4115_6. Actions/conditions:
//        4115_6: checks scene is active; the event-specific game state condition is met; dialog is open; skips if
//        scene is active; this handler gates a game event without a d.
void Frames::event_func_4828()
{
    // event 4115_6 : checks scene is active; the event-specific game state condition is met; dialog is open; skips if scene is active; this handler gates a game event without a d
    {
        if (!(group_code_1)) goto event_4115_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(17))) goto event_4115_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_4115_6_end;
        if (group_code_1 && group_code_toilet_1) goto event_4115_6_end;
        if (!group_code_toilet_1) {
            group_code_toilet_1 = true;
        }
    }
    event_4115_6_end: ;
}
// Function purpose: generated callback event_func_4829 processes event block(s) 4116_6. Actions/conditions:
//        4116_6: sets the selected object's direction to 0.
void Frames::event_func_4829()
{
    // event 4116_6 : sets the selected object's direction to 0
    {
        if (!(group_code_1 && group_code_toilet_1)) goto event_4116_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(14))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_4116_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_4116_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(17))) goto event_4116_6_end;
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_4116_6_end: ;
}
// Function purpose: generated callback event_func_4830 processes event block(s) 4117_6. Actions/conditions:
//        4117_6: sets the selected object's direction to 16.
void Frames::event_func_4830()
{
    // event 4117_6 : sets the selected object's direction to 16
    {
        if (!(group_code_1 && group_code_toilet_1)) goto event_4117_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(14))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_4117_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_4117_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(17))) goto event_4117_6_end;
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_4117_6_end: ;
}
// Function purpose: generated callback event_func_4831 processes event block(s) 4118_6. Actions/conditions:
//        4118_6: changes a stored game value.
void Frames::event_func_4831()
{
    VITA_LEGACY_EVENT();
    // event 4118_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_toilet_1)) goto event_4118_6_end;
        toilet2_307_instances.clear_selection();
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!toilet2_307_instances.has_selection()) goto event_4118_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4118_6_end;
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 1);
        }
    }
    event_4118_6_end: ;
}
// Function purpose: generated callback event_func_4832 processes event block(s) 4119_6. Actions/conditions:
//        4119_6: sets the object's animation to 0.
void Frames::event_func_4832()
{
    // event 4119_6 : sets the object's animation to 0
    {
        if (!(group_code_1 && group_code_toilet_1)) goto event_4119_6_end;
        toilet2_307_instances.clear_selection();
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!toilet2_307_instances.has_selection()) goto event_4119_6_end;
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_4119_6_end: ;
}
// Function purpose: generated callback event_func_4833 processes event block(s) 4120_6. Actions/conditions:
//        4120_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_4833()
{
    // event 4120_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1)) goto event_4120_6_end;
        payphone_386_instances.clear_selection();
        for (ObjectIterator it(payphone_386_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!payphone_386_instances.has_selection()) goto event_4120_6_end;
        if (group_code_1 && group_code_payphone_1) goto event_4120_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(playerBase_instances));
            if (obj1 == NULL) goto compare_4120_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_single(payphone_386_instances));
            if (obj2 == NULL) goto compare_4120_6_0_end;
            x2 = obj2->get_x() + 8;
            y2 = obj2->get_y() + 8;
            if (!(get_distance(x1, y1, x2, y2) <= 30)) goto event_4120_6_end;
        }
        compare_4120_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_4120_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_4120_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4120_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        if (!group_code_payphone_1) {
            group_code_payphone_1 = true;
            group_check_group_code_payphone_1_0 = true;
        }
    }
    event_4120_6_end: ;
}
// Function purpose: generated callback event_func_4834 processes event block(s) 4121_6. Actions/conditions:
//        4121_6: sets the object's animation to 30; sets the selected object's visibility to true; plays a sound or
//        music track.
void Frames::event_func_4834()
{
    // event 4121_6 : sets the object's animation to 30; sets the selected object's visibility to true; plays a sound or music track
    {
        if (!(group_code_1 && group_code_payphone_1)) goto event_4121_6_end;
        if (!group_check_group_code_payphone_1_0) goto event_4121_6_end;
        group_check_group_code_payphone_1_0 = false;
        ((Active*)get_instance(dialogPanel_instances))->force_animation(30);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        {
            loop_phones_list_running = true;
            int times = int(1);
            loop_phones_list_index = 0;
            while (loop_phones_list_index < times) {
                loop_phones_list_6();
                if (!loop_phones_list_running) break;
                loop_phones_list_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_4121_6_end: ;
}
// Function purpose: generated callback event_func_4835 processes event block(s) 4133_6. Actions/conditions:
//        4133_6: sets LClick to 1; sets hint_clicked to ((Active*)get_single(dialogButton_instances,
//        default_active_instance))->alterables->values.get(10).
void Frames::event_func_4835()
{
    // event 4133_6 : sets LClick to 1; sets hint_clicked to ((Active*)get_single(dialogButton_instances, default_active_instance))->alterables->values.get(10)
    {
        if (!(group_code_1 && group_code_payphone_1)) goto event_4133_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(38))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_4133_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_4133_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(30))) goto event_4133_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_4133_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(628, str_hint_clicked_1709, ((Active*)get_single(dialogButton_instances, default_active_instance))->alterables->values.get(10));
        {
            loop_ph_click_check_running = true;
            int times = int(1);
            loop_ph_click_check_index = 0;
            while (loop_ph_click_check_index < times) {
                loop_ph_click_check_6();
                if (!loop_ph_click_check_running) break;
                loop_ph_click_check_index++;
            }
        }
    }
    event_4133_6_end: ;
}
// Function purpose: generated callback event_func_4836 processes event block(s) 4142_6. Actions/conditions:
//        4142_6: sets LClick to 1; plays a sound or music track.
void Frames::event_func_4836()
{
    // event 4142_6 : sets LClick to 1; plays a sound or music track
    {
        if (!(group_code_1 && group_code_payphone_1)) goto event_4142_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(29))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_4142_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_4142_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(30))) goto event_4142_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_4142_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_phones_list_running = true;
            int times = int(1);
            loop_phones_list_index = 0;
            while (loop_phones_list_index < times) {
                loop_phones_list_6();
                if (!loop_phones_list_running) break;
                loop_phones_list_index++;
            }
        }
        media.play_id(SOUND_PLIP_16, 1-1);
    }
    event_4142_6_end: ;
}
// Function purpose: generated callback event_func_4837 processes event block(s) 4143_6. Actions/conditions:
//        4143_6: sets the selected object's visibility to false; sets LClick to 1; plays a sound or music track.
void Frames::event_func_4837()
{
    // event 4143_6 : sets the selected object's visibility to false; sets LClick to 1; plays a sound or music track
    {
        if (!(group_code_1 && group_code_payphone_1)) goto event_4143_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_4143_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->mouse_over()) goto event_4143_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_4143_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(30))) goto event_4143_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_4143_6_end;
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_phones_close_running = true;
            int times = int(1);
            loop_phones_close_index = 0;
            while (loop_phones_close_index < times) {
                loop_phones_close_6();
                if (!loop_phones_close_running) break;
                loop_phones_close_index++;
            }
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
    }
    event_4143_6_end: ;
}
// Function purpose: generated callback event_func_4838 processes event block(s) 4145_6. Actions/conditions:
//        4145_6: checks scene is active; skips if dialog is open; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_4838()
{
    // event 4145_6 : checks scene is active; skips if dialog is open; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_4145_6_end;
        if (!(group_code_1 && group_code_payphone_1)) goto event_4145_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4145_6_end;
            group_code_payphone_1 = false;
    
    }
    event_4145_6_end: ;
}
// Function purpose: generated callback event_func_4839 processes event block(s) 4146_6. Actions/conditions:
//        4146_6: sets GoNpcInv to 1; sets GoMerchant to 1.
void Frames::event_func_4839()
{
    // event 4146_6 : sets GoNpcInv to 1; sets GoMerchant to 1
    {
        if (!(group_code_1)) goto event_4146_6_end;
        every_4146_6 += manager.dt;
        if (every_4146_6 < 180.0) goto event_4146_6_end;
        every_4146_6 -= 180.0;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(548, str_gonpcinv_1451, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(660, str_gomerchant_1760, 1);
    }
    event_4146_6_end: ;
}
// Function purpose: generated callback event_func_4840 processes event block(s) 4147_6. Actions/conditions:
//        4147_6: checks scene is active; skips if scene is active; the event-specific game state condition is met;
//        this handler gates a game event without a direct value/obje.
void Frames::event_func_4840()
{
    // event 4147_6 : checks scene is active; skips if scene is active; the event-specific game state condition is met; this handler gates a game event without a direct value/obje
    {
        if (!(group_code_1)) goto event_4147_6_end;
        if (!group_check_group_code_1_2) goto event_4147_6_end;
        group_check_group_code_1_2 = false;
        if (!((global_values->get(11)) == (0))) goto event_4147_6_end;
        {
            loop_loop_npc_merchants_running = true;
            int times = int(1);
            loop_loop_npc_merchants_index = 0;
            while (loop_loop_npc_merchants_index < times) {
                loop_loop_npc_merchants_6();
                if (!loop_loop_npc_merchants_running) break;
                loop_loop_npc_merchants_index++;
            }
        }
    }
    event_4147_6_end: ;
}
// Function purpose: generated callback event_func_4841 processes event block(s) 4148_6. Actions/conditions:
//        4148_6: checks scene is active; game state GoMerchant; skips if dialog is open; this handler gates a game
//        event without a direct value/object action.
void Frames::event_func_4841()
{
    // event 4148_6 : checks scene is active; game state GoMerchant; skips if dialog is open; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_4148_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(660, str_gomerchant_1760)) == (1))) goto event_4148_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4148_6_end;
        {
            loop_loop_npc_merchants_running = true;
            int times = int(1);
            loop_loop_npc_merchants_index = 0;
            while (loop_loop_npc_merchants_index < times) {
                loop_loop_npc_merchants_6();
                if (!loop_loop_npc_merchants_running) break;
                loop_loop_npc_merchants_index++;
            }
        }
    }
    event_4148_6_end: ;
}
// Function purpose: generated callback event_func_4842 processes event block(s) 4151_6. Actions/conditions:
//        4151_6: checks scene is active; skips if scene is active; the event-specific game state condition is met;
//        this handler gates a game event without a direct value/obje.
void Frames::event_func_4842()
{
    // event 4151_6 : checks scene is active; skips if scene is active; the event-specific game state condition is met; this handler gates a game event without a direct value/obje
    {
        if (!(group_code_1)) goto event_4151_6_end;
        if (!group_check_group_code_1_3) goto event_4151_6_end;
        group_check_group_code_1_3 = false;
        if (!((global_values->get(11)) == (0))) goto event_4151_6_end;
        {
            loop_loop_npc_equip_running = true;
            int times = int(1);
            loop_loop_npc_equip_index = 0;
            while (loop_loop_npc_equip_index < times) {
                loop_loop_npc_equip_6();
                if (!loop_loop_npc_equip_running) break;
                loop_loop_npc_equip_index++;
            }
        }
    }
    event_4151_6_end: ;
}
// Function purpose: generated callback event_func_4843 processes event block(s) 4152_6. Actions/conditions:
//        4152_6: checks scene is active; game state InmateEquip; skips if dialog is open; this handler gates a game
//        event without a direct value/object action.
void Frames::event_func_4843()
{
    // event 4152_6 : checks scene is active; game state InmateEquip; skips if dialog is open; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_4152_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(257, str_inmateequip_912)) == (1))) goto event_4152_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4152_6_end;
        {
            loop_loop_npc_equip_running = true;
            int times = int(1);
            loop_loop_npc_equip_index = 0;
            while (loop_loop_npc_equip_index < times) {
                loop_loop_npc_equip_6();
                if (!loop_loop_npc_equip_running) break;
                loop_loop_npc_equip_index++;
            }
        }
    }
    event_4152_6_end: ;
}
// Function purpose: generated callback event_func_4844 processes event block(s) 4154_6. Actions/conditions:
//        4154_6: checks scene is active; skips if scene is active; the event-specific game state condition is met;
//        this handler gates a game event without a direct value/obje.
void Frames::event_func_4844()
{
    // event 4154_6 : checks scene is active; skips if scene is active; the event-specific game state condition is met; this handler gates a game event without a direct value/obje
    {
        if (!(group_code_1)) goto event_4154_6_end;
        if (!group_check_group_code_1_4) goto event_4154_6_end;
        group_check_group_code_1_4 = false;
        if (!((global_values->get(11)) == (0))) goto event_4154_6_end;
        {
            loop_loop_npc_inv_running = true;
            int times = int(1);
            loop_loop_npc_inv_index = 0;
            while (loop_loop_npc_inv_index < times) {
                loop_loop_npc_inv_6();
                if (!loop_loop_npc_inv_running) break;
                loop_loop_npc_inv_index++;
            }
        }
    }
    event_4154_6_end: ;
}
// Function purpose: generated callback event_func_4845 processes event block(s) 4155_6. Actions/conditions:
//        4155_6: checks scene is active; game state GoNpcInv; skips if scene is active; skips if dialog is open; this
//        handler gates a game event without a direct value/object.
void Frames::event_func_4845()
{
    // event 4155_6 : checks scene is active; game state GoNpcInv; skips if scene is active; skips if dialog is open; this handler gates a game event without a direct value/object
    {
        if (!(group_code_1)) goto event_4155_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(548, str_gonpcinv_1451)) == (1))) goto event_4155_6_end;
        if (group_code_1 && group_code_schedules_sleeping_1) goto event_4155_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4155_6_end;
        {
            loop_loop_npc_inv_running = true;
            int times = int(1);
            loop_loop_npc_inv_index = 0;
            while (loop_loop_npc_inv_index < times) {
                loop_loop_npc_inv_6();
                if (!loop_loop_npc_inv_running) break;
                loop_loop_npc_inv_index++;
            }
        }
    }
    event_4155_6_end: ;
}
// Function purpose: generated callback event_func_4846 processes event block(s) 4157_6. Actions/conditions:
//        4157_6: sets mCount to 0.
void Frames::event_func_4846()
{
    // event 4157_6 : sets mCount to 0
    {
        if (!(group_code_1)) goto event_4157_6_end;
        if (!group_check_group_code_1_5) goto event_4157_6_end;
        group_check_group_code_1_5 = false;
        if (!((global_values->get(11)) == (0))) goto event_4157_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(323, str_mcount_1104, 0);
        {
            loop_count_avail_missions_running = true;
            int times = int(inmateBase_instances.size());
            loop_count_avail_missions_index = 0;
            while (loop_count_avail_missions_index < times) {
                loop_count_avail_missions_6();
                if (!loop_count_avail_missions_running) break;
                loop_count_avail_missions_index++;
            }
        }
        {
            loop_loop_npc_missions_running = true;
            int times = int(1);
            loop_loop_npc_missions_index = 0;
            while (loop_loop_npc_missions_index < times) {
                loop_loop_npc_missions_6();
                if (!loop_loop_npc_missions_running) break;
                loop_loop_npc_missions_index++;
            }
        }
    }
    event_4157_6_end: ;
}
// Function purpose: generated callback event_func_4847 processes event block(s) 4158_6. Actions/conditions:
//        4158_6: sets mCount to 0.
void Frames::event_func_4847()
{
    // event 4158_6 : sets mCount to 0
    {
        if (!(group_code_1)) goto event_4158_6_end;
        every_4158_6 += manager.dt;
        if (every_4158_6 < 30.0) goto event_4158_6_end;
        every_4158_6 -= 30.0;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4158_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(323, str_mcount_1104, 0);
        {
            loop_count_avail_missions_running = true;
            int times = int(inmateBase_instances.size());
            loop_count_avail_missions_index = 0;
            while (loop_count_avail_missions_index < times) {
                loop_count_avail_missions_6();
                if (!loop_count_avail_missions_running) break;
                loop_count_avail_missions_index++;
            }
        }
        {
            loop_loop_npc_missions_running = true;
            int times = int(1);
            loop_loop_npc_missions_index = 0;
            while (loop_loop_npc_missions_index < times) {
                loop_loop_npc_missions_6();
                if (!loop_loop_npc_missions_running) break;
                loop_loop_npc_missions_index++;
            }
        }
    }
    event_4158_6_end: ;
}
// Function purpose: generated callback event_func_4848 processes event block(s) 4167_6. Actions/conditions:
//        4167_6: changes a stored game value.
void Frames::event_func_4848()
{
    VITA_LEGACY_EVENT();
    // event 4167_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_4167_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(550, str_checkdistract_1453)) > (0))) goto event_4167_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4167_6_end;
        {
            loop_check_distract_mish_running = true;
            int times = int(1);
            loop_check_distract_mish_index = 0;
            while (loop_check_distract_mish_index < times) {
                loop_check_distract_mish_6();
                if (!loop_check_distract_mish_running) break;
                loop_check_distract_mish_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(550, str_checkdistract_1453, 1);
    }
    event_4167_6_end: ;
}
// Function purpose: generated callback event_func_4849 processes event block(s) 4171_6. Actions/conditions:
//        4171_6: splits saved text into fields.
void Frames::event_func_4849()
{
    // event 4171_6 : splits saved text into fields
    {
        if (!(group_code_1)) goto event_4171_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(550, str_checkdistract_1453)) == (0))) goto event_4171_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(142, str_del_missions_708)) != (empty_string))) goto event_4171_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(142, str_del_missions_708), str__346);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_rem_missions_running = true;
            int times = int(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count());
            loop_rem_missions_index = 0;
            while (loop_rem_missions_index < times) {
                loop_rem_missions_6();
                if (!loop_rem_missions_running) break;
                loop_rem_missions_index++;
            }
        }
    }
    event_4171_6_end: ;
}
// Function purpose: generated callback event_func_4850 processes event block(s) 4172_6. Actions/conditions:
//        4172_6: sets del_missions to empty_string.
void Frames::event_func_4850()
{
    // event 4172_6 : sets del_missions to empty_string
    {
        if (!(group_code_1)) goto event_4172_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(550, str_checkdistract_1453)) == (0))) goto event_4172_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(142, str_del_missions_708, empty_string);
    }
    event_4172_6_end: ;
}
// Function purpose: generated callback event_func_4851 processes event block(s) 4358_6. Actions/conditions:
//        4358_6: runs the event-specific checks.
void Frames::event_func_4851()
{
    // event 4358_6 : runs the event-specific checks
    {
            group_loops_1 = false;
    
            group_align_color_1 = false;
    
    }
    event_4358_6_end: ;
}
// Function purpose: generated callback event_func_4852 processes event block(s) 4359_6. Actions/conditions:
//        4359_6: checks skips if the event-specific game state condition is met; this handler gates a game event
//        without a direct value/object action.
void Frames::event_func_4852()
{
    // event 4359_6 : checks skips if the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(-2))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_4359_6_end;
        if (!group_set_item_graphic_1) {
            group_set_item_graphic_1 = true;
        }
        {
            SavedSelection extra_hudItem_instances(hudItem_instances);
            for (SavedIterator selected(extra_hudItem_instances); !selected.end(); ++selected) {
                foreach_instance_item_setup = ((Active*)*selected);
                foreach_item_setup_6();
            }
        }
    }
    event_4359_6_end: ;
}
// Function purpose: generated callback event_func_4853 processes event block(s) 4360_6. Actions/conditions:
//        4360_6: checks skips if the event-specific game state condition is met; this handler gates a game event
//        without a direct value/object action.
void Frames::event_func_4853()
{
    // event 4360_6 : checks skips if the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        items_184_instances.clear_selection();
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(-2))) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_4360_6_end;
        if (!group_set_item_graphic_1) {
            group_set_item_graphic_1 = true;
        }
        {
            SavedSelection extra_items_184_instances(items_184_instances);
            for (SavedIterator selected(extra_items_184_instances); !selected.end(); ++selected) {
                foreach_instance_item2_setup = ((Active*)*selected);
                foreach_item2_setup_6();
            }
        }
    }
    event_4360_6_end: ;
}
// Function purpose: generated callback event_func_4854 processes event block(s) 4380_6. Actions/conditions:
//        4380_6: sets the selected object's direction to pick_random(4, 0, 8, 16, 24); sets the selected object's
//        visibility to true.
void Frames::event_func_4854()
{
    // event 4380_6 : sets the selected object's direction to pick_random(4, 0, 8, 16, 24); sets the selected object's visibility to true
    {
        every_4380_6 += manager.dt;
        if (every_4380_6 < 5.0) goto event_4380_6_end;
        every_4380_6 -= 5.0;
        if (!((towerguard_342_instances.size()) > (0))) goto event_4380_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (8))) goto event_4380_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (23))) goto event_4380_6_end;
        towerguard_342_instances.clear_selection();
        for (ObjectIterator it(towerguard_342_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(pick_random(4, 0, 8, 16, 24));
            ((Active*)*it)->set_visible(true);
        }
    }
    event_4380_6_end: ;
}
// Function purpose: generated callback event_func_4855 processes event block(s) 4381_6. Actions/conditions:
//        4381_6: saves the current object selection; sets the selected object's visibility to false.
void Frames::event_func_4855()
{
    // event 4381_6 : saves the current object selection; sets the selected object's visibility to false
    bool or_result_4381_6 = false;
    bool or_temp_result_4381_6_0 = false;
    {
        towerguard_342_instances.clear_selection();
        for (ObjectIterator it(towerguard_342_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!towerguard_342_instances.has_selection()) goto or_event_4381_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(25, str_t_hour_488)) >= (23))) goto or_event_4381_6_0_end;
        or_result_4381_6 = true;
        or_temp_result_4381_6_0 = true;
    }
    or_event_4381_6_0_end: ;
    towerguard_342_instances.clear_saved_selection();
    if (or_temp_result_4381_6_0) {
        towerguard_342_instances.save_selection();
    }
    // event 4381_6 : saves the current object selection; sets the selected object's visibility to false
    bool or_temp_result_4381_6_1 = false;
    {
        towerguard_342_instances.clear_selection();
        for (ObjectIterator it(towerguard_342_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!towerguard_342_instances.has_selection()) goto or_event_4381_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(25, str_t_hour_488)) < (6))) goto or_event_4381_6_1_end;
        or_result_4381_6 = true;
        or_temp_result_4381_6_1 = true;
        or_event_4381_6_1_end: ;
        if (or_temp_result_4381_6_1) {
            towerguard_342_instances.save_selection();
        }
        if (!or_result_4381_6) goto or_final_or_event_4381_6_1_end;
        towerguard_342_instances.empty_selection();
        if (or_temp_result_4381_6_0 || or_temp_result_4381_6_1) {
            towerguard_342_instances.restore_selection();
        }
        for (ObjectIterator it(towerguard_342_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    or_final_or_event_4381_6_1_end: ;
}
// Function purpose: generated callback event_func_4856 processes event block(s) 4392_6. Actions/conditions:
//        4392_6: sets the selected object's numeric value to ((Active*)get_instance(bedguard_337_instances,
//        it.current_index, default_active_instance))->get_x()+8; sets the selected object's numeric value to
//        ((Active*)get_instance(bedguard_337_instances, it.current_index, default_active_instance))->get_y()+8.
void Frames::event_func_4856()
{
    // event 4392_6 : sets the selected object's numeric value to ((Active*)get_instance(bedguard_337_instances, it.current_index, default_active_instance))->get_x()+8; sets the selected object's numeric value to ((Active*)get_instance(bedguard_337_instances, it.current_index, default_active_instance))->get_y()+8
    {
        if (!(group_guard_towers_1)) goto event_4392_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_4392_6_end;
        if (!check_not_overlap(guardBase_instances, bedguard_337_instances)) goto event_4392_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5552))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_4392_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_instance(bedguard_337_instances, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_instance(bedguard_337_instances, it.current_index, default_active_instance))->get_y()+8);
        }
    }
    event_4392_6_end: ;
}
// Function purpose: generated callback event_func_4857 processes event block(s) 4393_6. Actions/conditions:
//        4393_6: saves the current object selection; saves the current object selection; sets currGuard to
//        ((Active*)get_single(guardBase_instances, it.current_index,
//        default_active_instance))->alterables->values.get(0).
void Frames::event_func_4857()
{
    // event 4393_6 : saves the current object selection; saves the current object selection; sets currGuard to ((Active*)get_single(guardBase_instances, it.current_index, default_active_instance))->alterables->values.get(0)
    bool or_result_4393_6 = false;
    bool or_temp_result_4393_6_0 = false;
    {
        if (!(group_guard_towers_1)) goto or_event_4393_6_0_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto or_event_4393_6_0_end;
        bedguard_337_instances.clear_selection();
        if (!check_overlap(guardBase_instances, bedguard_337_instances)) goto or_event_4393_6_0_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto or_event_4393_6_0_end;
        or_result_4393_6 = true;
        or_temp_result_4393_6_0 = true;
    }
    or_event_4393_6_0_end: ;
    bedguard_337_instances.clear_saved_selection();
    guardBase_instances.clear_saved_selection();
    if (or_temp_result_4393_6_0) {
        bedguard_337_instances.save_selection();
        guardBase_instances.save_selection();
    }
    // event 4393_6 : saves the current object selection; saves the current object selection; sets currGuard to ((Active*)get_single(guardBase_instances, it.current_index, default_active_instance))->alterables->values.get(0)
    bool or_temp_result_4393_6_1 = false;
    {
        if (!(group_guard_towers_1)) goto or_event_4393_6_1_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto or_event_4393_6_1_end;
        if (!check_not_overlap(guardBase_instances, waypointtowerent_341_instances)) goto or_event_4393_6_1_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(5552))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto or_event_4393_6_1_end;
        or_result_4393_6 = true;
        or_temp_result_4393_6_1 = true;
        or_event_4393_6_1_end: ;
        if (or_temp_result_4393_6_1) {
            guardBase_instances.save_selection();
        }
        if (!or_result_4393_6) goto or_final_or_event_4393_6_1_end;
        guardBase_instances.empty_selection();
        bedguard_337_instances.empty_selection();
        if (or_temp_result_4393_6_0) {
            bedguard_337_instances.restore_selection();
        }
        if (or_temp_result_4393_6_0 || or_temp_result_4393_6_1) {
            guardBase_instances.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(303, str_currguard_1079, ((Active*)get_single(guardBase_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        {
            loop_back2tower_running = true;
            int times = int(1);
            loop_back2tower_index = 0;
            while (loop_back2tower_index < times) {
                loop_back2tower_6();
                if (!loop_back2tower_running) break;
                loop_back2tower_index++;
            }
        }
    }
    or_final_or_event_4393_6_1_end: ;
}
// Function purpose: generated callback event_func_4858 processes event block(s) 4399_6. Actions/conditions:
//        4399_6: sets Cursor to Normal.
void Frames::event_func_4858()
{
    // event 4399_6 : sets Cursor to Normal
    bool or_result_4399_6 = false;
    bool or_temp_result_4399_6_0 = false;
    {
        if (!(is_mouse_pressed(SDL_BUTTON_LEFT))) goto or_event_4399_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(546, str_itemselected_1448)) == (0))) goto or_event_4399_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_string(49, str_cursor_517)) == (str_use_518))) goto or_event_4399_6_0_end;
        or_result_4399_6 = true;
        or_temp_result_4399_6_0 = true;
    }
    or_event_4399_6_0_end: ;
    // event 4399_6 : sets Cursor to Normal
    bool or_temp_result_4399_6_1 = false;
    {
        if (!(is_mouse_pressed(SDL_BUTTON_RIGHT))) goto or_event_4399_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_string(49, str_cursor_517)) == (str_use_518))) goto or_event_4399_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(546, str_itemselected_1448)) == (0))) goto or_event_4399_6_1_end;
        or_result_4399_6 = true;
        or_temp_result_4399_6_1 = true;
        or_event_4399_6_1_end: ;
        if (!or_result_4399_6) goto or_final_or_event_4399_6_1_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_string(49, str_cursor_517, str_normal_1934);
        }
        {
            loop_disableselected_running = true;
            int times = int(1);
            loop_disableselected_index = 0;
            while (loop_disableselected_index < times) {
                loop_disableselected_6();
                if (!loop_disableselected_running) break;
                loop_disableselected_index++;
            }
        }
    }
    or_final_or_event_4399_6_1_end: ;
}
// Function purpose: generated callback event_func_4859 processes event block(s) 4402_6. Actions/conditions:
//        4402_6: sets the selected object's visibility to false.
void Frames::event_func_4859()
{
    // event 4402_6 : sets the selected object's visibility to false
    {
        fan_281_instances.clear_selection();
        for (ObjectIterator it(fan_281_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!fan_281_instances.has_selection()) goto event_4402_6_end;
        for (ObjectIterator it(fan_281_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_4402_6_end: ;
}
// Function purpose: generated callback event_func_4860 processes event block(s) 4403_6. Actions/conditions:
//        4403_6: removes the selected object; sets SaveDir to File::get_appdata_directory()+\The
//        Escapists\save+number_to_string(global_values->get(14))+\; decrypts a save-data file; plus 1 more actions.
void Frames::event_func_4860()
{
    // event 4403_6 : removes the selected object; sets SaveDir to File::get_appdata_directory()+\The Escapists\save+number_to_string(global_values->get(14))+\; decrypts a save-data file; plus 1 more actions
    {
        if (!(group_saving_1)) goto event_4403_6_end;
        if (!group_check_group_saving_1_0) goto event_4403_6_end;
        group_check_group_saving_1_0 = false;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(604, str_savedir_1580, File::get_appdata_directory()+str_the_escapists_save_190+number_to_string(global_values->get(14))+str__2303);
        items_184_instances.clear_selection();
        spread_value(items_184_instances, 25, 1);
        guardalert_266_instances.clear_selection();
        spread_value(guardalert_266_instances, 25, 1);
        sheetsposters_294_instances.clear_selection();
        spread_value(sheetsposters_294_instances, 25, 1);
    BlowfishObject::decrypt_file(str_mothking_99, File::get_appdata_directory()+str_the_escapists_global_dat_300);
        ((INI*)get_instance(globals_127_instances))->load_file(File::get_appdata_directory()+str_the_escapists_global_dat_300, false, false, true);
    }
    event_4403_6_end: ;
}
// Function purpose: generated callback event_func_4861 processes event block(s) 4404_6. Actions/conditions:
//        4404_6: creates the required directory; loads a game or save-data file; loads a game or save-data file; plus
//        7 more actions.
void Frames::event_func_4861()
{
    // event 4404_6 : creates the required directory; loads a game or save-data file; loads a game or save-data file; plus 7 more actions
    {
        if (!(group_saving_1)) goto event_4404_6_end;
        if (!group_check_group_saving_1_1) goto event_4404_6_end;
        group_check_group_saving_1_1 = false;
    File::create_directory(File::get_appdata_directory()+str_the_escapists_save_190+number_to_string(global_values->get(14))+str__2303);
        ((INI*)get_instance(saving_350_instances))->load_file(File::get_appdata_directory()+str_the_escapists_save_190+number_to_string(global_values->get(14))+str_save_dat_211, false, false, true);
        ((INI*)get_instance(filesave_473_instances))->load_file(File::get_appdata_directory()+str_the_escapists_save_190+number_to_string(global_values->get(14))+str_mname_dat_192, false, false, true);
        {
            loop_save_game_running = true;
            int times = int(1);
            loop_save_game_index = 0;
            while (loop_save_game_index < times) {
                loop_save_game_6();
                if (!loop_save_game_running) break;
                loop_save_game_index++;
            }
        }
        ((INI*)get_instance(saving_350_instances))->save_file();
        ((INI*)get_instance(globals_127_instances))->save_file();
    BlowfishObject::encrypt_file(str_mothking_99, File::get_appdata_directory()+str_the_escapists_save_190+number_to_string(global_values->get(14))+str_save_dat_211);
    BlowfishObject::encrypt_file(str_mothking_99, File::get_appdata_directory()+str_the_escapists_global_dat_300);
        {
            loop_new_filesave_running = true;
            int times = int(1);
            loop_new_filesave_index = 0;
            while (loop_new_filesave_index < times) {
                loop_new_filesave_6();
                if (!loop_new_filesave_running) break;
                loop_new_filesave_index++;
            }
        }
    }
    event_4404_6_end: ;
}
// Function purpose: generated callback event_func_4862 processes event block(s) 4452_6. Actions/conditions:
//        4452_6: sets the object's animation to 2.
void Frames::event_func_4862()
{
    // event 4452_6 : sets the object's animation to 2
    {
        if (!(group_saving_1)) goto event_4452_6_end;
        if (!group_check_group_saving_1_2) goto event_4452_6_end;
        group_check_group_saving_1_2 = false;
        ((Active*)get_instance(interfaceButtons_instances))->force_animation(2);
            group_saving_1 = false;
    
    }
    event_4452_6_end: ;
}
// Function purpose: generated callback event_func_4863 processes event block(s) 4453_6. Actions/conditions:
//        4453_6: checks the event-specific game state condition is met; this handler gates a game event without a
//        direct value/object action.
void Frames::event_func_4863()
{
    // event 4453_6 : checks the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_saving_1)) goto event_4453_6_end;
            group_saving_1 = false;
    
    }
    event_4453_6_end: ;
}
