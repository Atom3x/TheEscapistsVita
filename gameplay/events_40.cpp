#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_3100()
{
    // event 2171_6
    {
        if (!(group_code_1 && group_code_misc_reindeer_1)) goto event_2171_6_end;
        if (!((((Active*)foreach_instance_odeer)->alterables->values.get(1)) == (0))) goto event_2171_6_end;
        if (!((((Active*)foreach_instance_odeer)->get_y()) < (((Active*)foreach_instance_odeer)->alterables->values.get(24)))) goto event_2171_6_end;
        ((Active*)((Active*)foreach_instance_odeer))->set_y(((Active*)foreach_instance_odeer)->get_y()+1);
        ((Active*)((Active*)foreach_instance_odeer))->set_direction(24);
    }
    event_2171_6_end: ;
}
void Frames::event_func_3101()
{
    // event 2172_6
    {
        if (!(group_code_1 && group_code_misc_reindeer_1)) goto event_2172_6_end;
        if (!((((Active*)foreach_instance_odeer)->alterables->values.get(1)) == (0))) goto event_2172_6_end;
        if (!((((Active*)foreach_instance_odeer)->get_y()) > (((Active*)foreach_instance_odeer)->alterables->values.get(24)))) goto event_2172_6_end;
        ((Active*)((Active*)foreach_instance_odeer))->set_y(((Active*)foreach_instance_odeer)->get_y()-1);
        ((Active*)((Active*)foreach_instance_odeer))->set_direction(8);
    }
    event_2172_6_end: ;
}
void Frames::foreach_odeer_6()
{
    event_func_3094();
    event_func_3095();
    event_func_3096();
    event_func_3097();
    event_func_3098();
    event_func_3099();
    event_func_3100();
    event_func_3101();
}
void Frames::event_func_3102()
{
    // event 3951_6
    {
        if (!(group_code_1)) goto event_3951_6_end;
        qualifier_5.clear_selection();
        for (QualifierIterator it(qualifier_5); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((SystemBox*)foreach_instance_speech)->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!qualifier_5.has_selection()) goto event_3951_6_end;
        if (!((((SystemBox*)foreach_instance_speech)->alterables->values.get(0)) >= (0))) goto event_3951_6_end;
        ((SystemBox*)((SystemBox*)foreach_instance_speech))->set_x(((Active*)get_single(qualifier_5, default_active_instance))->get_x()-(((SystemBox*)foreach_instance_speech)->width/MathHelper()/2));
        ((SystemBox*)((SystemBox*)foreach_instance_speech))->set_y(((Active*)get_single(qualifier_5, default_active_instance))->get_y()-(((SystemBox*)foreach_instance_speech)->get_generic_height()+10));
    }
    event_3951_6_end: ;
}
void Frames::event_func_3103()
{
    // event 3952_6
    {
        if (!(group_code_1)) goto event_3952_6_end;
        if (!((((SystemBox*)foreach_instance_speech)->alterables->values.get(0)) == (-1))) goto event_3952_6_end;
        ((SystemBox*)((SystemBox*)foreach_instance_speech))->set_x(((Active*)get_instance(playerBase_instances))->get_x()-(((SystemBox*)foreach_instance_speech)->width/MathHelper()/2));
        ((SystemBox*)((SystemBox*)foreach_instance_speech))->set_y(((Active*)get_instance(playerBase_instances))->get_y()-(((SystemBox*)foreach_instance_speech)->get_generic_height()+10));
    }
    event_3952_6_end: ;
}
void Frames::event_func_3104()
{
    // event 3953_6
    {
        if (!(group_code_1)) goto event_3953_6_end;
        if (!((((SystemBox*)foreach_instance_speech)->alterables->values.get(0)) == (-2))) goto event_3953_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_visitor_593))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_3953_6_end;
        ((SystemBox*)((SystemBox*)foreach_instance_speech))->set_x(((Active*)get_single(serviceNpc_instances, default_active_instance))->get_x()-(((SystemBox*)foreach_instance_speech)->width/MathHelper()/2));
        ((SystemBox*)((SystemBox*)foreach_instance_speech))->set_y(((Active*)get_single(serviceNpc_instances, default_active_instance))->get_y()-(((SystemBox*)foreach_instance_speech)->get_generic_height()+10));
    }
    event_3953_6_end: ;
}
void Frames::event_func_3105()
{
    // event 3954_6
    {
        if (!(group_code_1)) goto event_3954_6_end;
        if (!((((SystemBox*)foreach_instance_speech)->alterables->values.get(0)) == (-3))) goto event_3954_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_warden_594))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_3954_6_end;
        ((SystemBox*)((SystemBox*)foreach_instance_speech))->set_x(((Active*)get_single(serviceNpc_instances, default_active_instance))->get_x()-(((SystemBox*)foreach_instance_speech)->width/MathHelper()/2));
        ((SystemBox*)((SystemBox*)foreach_instance_speech))->set_y(((Active*)get_single(serviceNpc_instances, default_active_instance))->get_y()-(((SystemBox*)foreach_instance_speech)->get_generic_height()+10));
    }
    event_3954_6_end: ;
}
void Frames::event_func_3106()
{
    // event 3955_6
    {
        if (!(group_code_1)) goto event_3955_6_end;
        if (!((((SystemBox*)foreach_instance_speech)->alterables->values.get(0)) == (-4))) goto event_3955_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_jobstaff_1891))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_3955_6_end;
        ((SystemBox*)((SystemBox*)foreach_instance_speech))->set_x(((Active*)get_single(serviceNpc_instances, default_active_instance))->get_x()-(((SystemBox*)foreach_instance_speech)->width/MathHelper()/2));
        ((SystemBox*)((SystemBox*)foreach_instance_speech))->set_y(((Active*)get_single(serviceNpc_instances, default_active_instance))->get_y()-(((SystemBox*)foreach_instance_speech)->get_generic_height()+10));
    }
    event_3955_6_end: ;
}
void Frames::event_func_3107()
{
    // event 3956_6
    {
        if (!(group_code_1)) goto event_3956_6_end;
        if (!((((SystemBox*)foreach_instance_speech)->alterables->values.get(0)) == (-5))) goto event_3956_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_medstaff_1892))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_3956_6_end;
        ((SystemBox*)((SystemBox*)foreach_instance_speech))->set_x(((Active*)get_single(serviceNpc_instances, default_active_instance))->get_x()-(((SystemBox*)foreach_instance_speech)->width/MathHelper()/2));
        ((SystemBox*)((SystemBox*)foreach_instance_speech))->set_y(((Active*)get_single(serviceNpc_instances, default_active_instance))->get_y()-(((SystemBox*)foreach_instance_speech)->get_generic_height()+10));
    }
    event_3956_6_end: ;
}
void Frames::event_func_3108()
{
    // event 3957_6
    {
        if (!(group_code_1)) goto event_3957_6_end;
        if (!((((SystemBox*)foreach_instance_speech)->alterables->values.get(0)) == (-6))) goto event_3957_6_end;
        ((SystemBox*)((SystemBox*)foreach_instance_speech))->set_x(((Active*)get_instance(checkpointguard_423_instances, default_active_instance))->get_x()-(((SystemBox*)foreach_instance_speech)->width/MathHelper()/2));
        ((SystemBox*)((SystemBox*)foreach_instance_speech))->set_y(((Active*)get_instance(checkpointguard_423_instances, default_active_instance))->get_y()-(((SystemBox*)foreach_instance_speech)->get_generic_height()+10));
    }
    event_3957_6_end: ;
}
void Frames::event_func_3109()
{
    // event 3958_6
    {
        if (!(group_code_1)) goto event_3958_6_end;
        if (!((((SystemBox*)foreach_instance_speech)->alterables->values.get(0)) == (-7))) goto event_3958_6_end;
        ((SystemBox*)((SystemBox*)foreach_instance_speech))->set_x((((Active*)get_instance(alcaboat_459_instances, default_active_instance))->get_x()+24)-(((SystemBox*)foreach_instance_speech)->width/MathHelper()/2));
        ((SystemBox*)((SystemBox*)foreach_instance_speech))->set_y(((Active*)get_instance(alcaboat_459_instances, default_active_instance))->get_y()-(((SystemBox*)foreach_instance_speech)->get_generic_height()+10));
    }
    event_3958_6_end: ;
}
void Frames::foreach_speech_6()
{
    event_func_3102();
    event_func_3103();
    event_func_3104();
    event_func_3105();
    event_func_3106();
    event_func_3107();
    event_func_3108();
    event_func_3109();
}
void Frames::event_func_3110()
{
    // event 347_6
    {
        if (!(group_setup_1)) goto event_347_6_end;
        if (!((((Active*)foreach_instance_setbedid)->alterables->values.get(0)) == (-1))) goto event_347_6_end;
        ((Active*)((Active*)foreach_instance_setbedid))->alterables->values.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(130, str_bednum_692));
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(130, str_bednum_692, 1);
    }
    event_347_6_end: ;
}
void Frames::foreach_setbedid_6()
{
    event_func_3110();
}
void Frames::event_func_3111()
{
    // event 4556_6
    {
        // group: Door key degrades
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4556_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(701, str_degradekey_1851, str_orange_1852);
    }
    event_4556_6_end: ;
}
void Frames::col_0_6()
{
    event_func_3111();
}
void Frames::event_func_3112()
{
    // event 4566_6
    {
        // group: Door key degrades
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_tailor_479))) goto event_4566_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4566_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(701, str_degradekey_1851, str_green_1860);
    }
    event_4566_6_end: ;
}
void Frames::col_1_6()
{
    event_func_3112();
}
void Frames::event_func_3113()
{
    // event 2144_6
    {
        if (!(group_code_1 && group_code_misc_jeep_1)) goto event_2144_6_end;
        if (((Active*)col_instance_2)->get_movement()->is_stopped()) goto event_2144_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2144_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(410, str_npcz_1226, ((Active*)col_instance_1)->alterables->values.get(25));
        {
            loop_jeep_ko_npc_running = true;
            int times = int(1);
            loop_jeep_ko_npc_index = 0;
            while (loop_jeep_ko_npc_index < times) {
                loop_jeep_ko_npc_6();
                if (!loop_jeep_ko_npc_running) break;
                loop_jeep_ko_npc_index++;
            }
        }
    }
    event_2144_6_end: ;
}
void Frames::col_2_6()
{
    event_func_3113();
}
void Frames::event_func_3114()
{
    // event 2264_6
    {
        if (!(group_code_1)) goto event_2264_6_end;
        if (!((((Active*)col_instance_2)->layer->index+1) == (((Active*)col_instance_1)->layer->index+1))) goto event_2264_6_end;
        if (!(((Active*)col_instance_2)->flags & VISIBLE)) goto event_2264_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2264_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_2264_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_endstring_435, ((INI*)get_instance(translationData_instances))->get_string(str_caught_436, str_4_161));
        if (!group_code_caught_solitary_1) {
            group_code_caught_solitary_1 = true;
            group_check_group_code_caught_solitary_1_0 = true;
            group_check_group_code_caught_solitary_1_1 = true;
            group_check_group_code_caught_solitary_1_2 = true;
            group_check_group_code_caught_solitary_1_3 = true;
            group_check_group_code_caught_solitary_1_4 = true;
            group_check_group_code_caught_solitary_1_5 = true;
            group_check_group_code_caught_solitary_1_6 = true;
            group_check_group_code_caught_solitary_1_7 = true;
        }
    }
    event_2264_6_end: ;
}
void Frames::col_3_6()
{
    event_func_3114();
}
void Frames::event_func_3115()
{
    // event 4560_6
    {
        // group: Door key degrades
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_laundry_29))) goto event_4560_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4560_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(701, str_degradekey_1851, str_green_1860);
    }
    event_4560_6_end: ;
}
void Frames::col_4_6()
{
    event_func_3115();
}
void Frames::event_func_3116()
{
    // event 4562_6
    {
        // group: Door key degrades
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_library_25))) goto event_4562_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4562_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(701, str_degradekey_1851, str_green_1860);
    }
    event_4562_6_end: ;
}
void Frames::col_5_6()
{
    event_func_3116();
}
void Frames::event_func_3117()
{
    // event 4568_6
    {
        // group: Door key degrades
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_deliveries_577))) goto event_4568_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4568_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(701, str_degradekey_1851, str_green_1860);
    }
    event_4568_6_end: ;
}
void Frames::col_6_6()
{
    event_func_3117();
}
void Frames::event_func_3118()
{
    // event 4554_6
    {
        // group: Door key degrades
        if (!(((Active*)col_instance_2)->test_directions(1))) goto event_4554_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4554_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(701, str_degradekey_1851, str_yellow_1856);
    }
    event_4554_6_end: ;
}
void Frames::col_7_6()
{
    event_func_3118();
}
void Frames::event_func_3119()
{
    // event 4567_6
    {
        // group: Door key degrades
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_gardening_43))) goto event_4567_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4567_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(701, str_degradekey_1851, str_green_1860);
    }
    event_4567_6_end: ;
}
void Frames::col_8_6()
{
    event_func_3119();
}
void Frames::event_func_3120()
{
    // event 4559_6
    {
        // group: Door key degrades
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_kitchen_12))) goto event_4559_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4559_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(701, str_degradekey_1851, str_green_1860);
    }
    event_4559_6_end: ;
}
void Frames::col_9_6()
{
    event_func_3120();
}
void Frames::event_func_3121()
{
    // event 4564_6
    {
        // group: Door key degrades
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_metalshop_35))) goto event_4564_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4564_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(701, str_degradekey_1851, str_green_1860);
    }
    event_4564_6_end: ;
}
void Frames::col_10_6()
{
    event_func_3121();
}
void Frames::event_func_3122()
{
    // event 4555_6
    {
        // group: Door key degrades
        if (!(((Active*)col_instance_2)->test_directions(1))) goto event_4555_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4555_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(701, str_degradekey_1851, str_purple_1858);
    }
    event_4555_6_end: ;
}
void Frames::col_12_6()
{
    event_func_3122();
}
void Frames::event_func_3123()
{
    // event 4561_6
    {
        // group: Door key degrades
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_janitor_24))) goto event_4561_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4561_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(701, str_degradekey_1851, str_green_1860);
    }
    event_4561_6_end: ;
}
void Frames::col_13_6()
{
    event_func_3123();
}
void Frames::event_func_3124()
{
    // event 4558_6
    {
        // group: Door key degrades
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4558_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(701, str_degradekey_1851, str_red_1854);
    }
    event_4558_6_end: ;
}
void Frames::col_14_6()
{
    event_func_3124();
}
void Frames::event_func_3125()
{
    // event 2185_6
    {
        if (!(group_code_1)) goto event_2185_6_end;
        ((Active*)((Active*)col_instance_1))->set_visible(false);
        media.play_id(SOUND_DOOR_0, 1-1);
    }
    event_2185_6_end: ;
}
void Frames::col_15_6()
{
    event_func_3125();
}
void Frames::event_func_3126()
{
    // event 4565_6
    {
        // group: Door key degrades
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_mailroom_41))) goto event_4565_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4565_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(701, str_degradekey_1851, str_green_1860);
    }
    event_4565_6_end: ;
}
void Frames::col_16_6()
{
    event_func_3126();
}
void Frames::event_func_3127()
{
    // event 2143_6
    {
        if (!(group_code_1 && group_code_misc_jeep_1)) goto event_2143_6_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(7)) > (0))) goto event_2143_6_end;
        if (((Active*)col_instance_2)->get_movement()->is_stopped()) goto event_2143_6_end;
        ((Active*)((Active*)col_instance_1))->alterables->values.set(7, 0);
        media.play_id(SOUND_EN_HIT_7, 1-1);
    }
    event_2143_6_end: ;
}
void Frames::col_17_6()
{
    event_func_3127();
}
void Frames::event_func_3128()
{
    // event 2193_6
    {
        if (!(group_code_1)) goto event_2193_6_end;
        if (!((((Active*)col_instance_1)->layer->index+1) == (((Active*)col_instance_2)->layer->index+1))) goto event_2193_6_end;
        if (!(((Active*)col_instance_2)->test_animation(0))) goto event_2193_6_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(143, str_illegal_618, 0);
            ((AssociateArray*)*it)->set_value(144, str_pouch_713, 0);
        }
        {
            loop_metal_scan_running = true;
            int times = int(6);
            loop_metal_scan_index = 0;
            while (loop_metal_scan_index < times) {
                loop_metal_scan_6();
                if (!loop_metal_scan_running) break;
                loop_metal_scan_index++;
            }
        }
        {
            loop_pouch_used_running = true;
            int times = int(1);
            loop_pouch_used_index = 0;
            while (loop_pouch_used_index < times) {
                loop_pouch_used_6();
                if (!loop_pouch_used_running) break;
                loop_pouch_used_index++;
            }
        }
    }
    event_2193_6_end: ;
}
void Frames::event_func_3129()
{
    // event 2203_6
    {
        if (!(group_code_1)) goto event_2203_6_end;
        if (!((((Active*)col_instance_1)->layer->index+1) == (((Active*)col_instance_2)->layer->index+1))) goto event_2203_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(143, str_illegal_618)) > (0))) goto event_2203_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(144, str_pouch_713)) == (0))) goto event_2203_6_end;
        if (!(((Active*)col_instance_2)->test_animation(0))) goto event_2203_6_end;
        ((Active*)((Active*)col_instance_2))->force_animation(5);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(1, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(32, str_heat_495, 99);
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
        media.play_id(SOUND_HP_10, 1-1);
    }
    event_2203_6_end: ;
}
void Frames::col_18_6()
{
    event_func_3128();
    event_func_3129();
}
void Frames::event_func_3130()
{
    // event 4563_6
    {
        // group: Door key degrades
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_woodshop_21))) goto event_4563_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_4563_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(701, str_degradekey_1851, str_green_1860);
    }
    event_4563_6_end: ;
}
void Frames::col_19_6()
{
    event_func_3130();
}
void Frames::event_func_3131()
{
    // event 2213_6
    {
        if (!(group_code_1)) goto event_2213_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(719, str_type_1893, ((Active*)col_instance_2)->alterables->strings.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(35, str_startx_498, ((Active*)col_instance_2)->alterables->values.get(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(36, str_starty_499, ((Active*)col_instance_2)->alterables->values.get(3));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(33, str_endx_496, ((Active*)col_instance_1)->get_x()+8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(34, str_endy_497, ((Active*)col_instance_1)->get_y()+8);
        ((Active*)((Active*)col_instance_2))->destroy();
        {
            if (loops == NULL) goto dynamic_2213_6_0_end;
            DynamicLoops::iterator dyn_it = (*loops).find(str_create_1894+((AssociateArray*)get_instance(gameVariables_instances))->get_string(719, str_type_1893)+str_zip_1895);
            if (dyn_it == (*loops).end()) goto dynamic_2213_6_0_end;
            DynamicLoop & dyn_loop = dyn_it->second;
            (*dyn_loop.running) = true;
            int times = int(1);
            (*dyn_loop.index) = 0;
            while ((*dyn_loop.index) < times) {
                dyn_loop.callback(this);
                if (!(*dyn_loop.running)) break;
                (*dyn_loop.index)++;
            }
        }
        dynamic_2213_6_0_end: ;
    }
    event_2213_6_end: ;
}
void Frames::col_20_6()
{
    event_func_3131();
}
void Frames::event_func_3132()
{
    // event 2257_6
    {
        if (!(group_code_1)) goto event_2257_6_end;
        ((Active*)((Active*)col_instance_1))->get_movement()->bounce(true);
    }
    event_2257_6_end: ;
}
void Frames::col_21_6()
{
    event_func_3132();
}
void Frames::test_collisions_6()
{
    test_collisions(playerBase_instances, doorutility_259_instances, 1, 1, (EventFunction)&Frames::col_0_6);
    test_collisions(playerBase_instances, doortailor_403_instances, 2, 1, (EventFunction)&Frames::col_1_6);
    test_collisions(qualifier_14, patroljeep_416_instances, 2147483648, 1, (EventFunction)&Frames::col_2_6);
    test_collisions(playerBase_instances, spotlightsroof_213_instances, 4, 1, (EventFunction)&Frames::col_3_6);
    test_collisions(playerBase_instances, doorlaundry_276_instances, 8, 1, (EventFunction)&Frames::col_4_6);
    test_collisions(playerBase_instances, doorlibrary_272_instances, 16, 1, (EventFunction)&Frames::col_5_6);
    test_collisions(playerBase_instances, doordeliveries_401_instances, 32, 1, (EventFunction)&Frames::col_6_6);
    test_collisions(playerBase_instances, doorcell_174_instances, 64, 1, (EventFunction)&Frames::col_7_6);
    test_collisions(playerBase_instances, doorgardening_402_instances, 128, 1, (EventFunction)&Frames::col_8_6);
    test_collisions(playerBase_instances, doorkitchen_211_instances, 256, 1, (EventFunction)&Frames::col_9_6);
    test_collisions(playerBase_instances, doormetalshop_328_instances, 512, 1, (EventFunction)&Frames::col_10_6);
    test_collisions(playerBase_instances, doorutilityvents_457_instances, 1024, 1, (EventFunction)&Frames::col_0_6);
    test_collisions(playerBase_instances, dooroutside_262_instances, 2048, 1, (EventFunction)&Frames::col_12_6);
    test_collisions(playerBase_instances, doorjanitor_271_instances, 4096, 1, (EventFunction)&Frames::col_13_6);
    test_collisions(playerBase_instances, doorstaff_212_instances, 8192, 1, (EventFunction)&Frames::col_14_6);
    test_collisions(qualifier_8, playerBase_instances, 2147483648, 16384, (EventFunction)&Frames::col_15_6);
    test_collisions(playerBase_instances, doormailroom_400_instances, 32768, 1, (EventFunction)&Frames::col_16_6);
    test_collisions(playerBase_instances, patroljeep_416_instances, 65536, 2, (EventFunction)&Frames::col_17_6);
    test_collisions(playerBase_instances, metaldetector_231_instances, 131072, 1, (EventFunction)&Frames::col_18_6);
    test_collisions(playerBase_instances, doorwoodshop_268_instances, 262144, 1, (EventFunction)&Frames::col_19_6);
    test_collisions(zipend_390_instances, ziplinesniffer_454_instances, 1, 1, (EventFunction)&Frames::col_20_6);
    ObjectList::iterator it1, it2;
    for (it1 = spotlightsroof_213_instances.begin(); it1 != spotlightsroof_213_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background_save()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_21_6();
    }
}
void Frames::event_func_3133()
{
    // event 4007_6
    {
        if (!(group_code_1)) goto event_4007_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)foreach_instance_align_markers)->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_4007_6_end;
        {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances));
            if (parent == NULL) goto pos_end_4007_6_0;
            ((Active*)foreach_instance_align_markers)->set_global_position(parent->get_x() + -1, parent->get_y() + -14);
            pos_end_4007_6_0: ;
        }
        ((Active*)((Active*)foreach_instance_align_markers))->move_front();
    }
    event_4007_6_end: ;
}
void Frames::foreach_align_markers_6()
{
    event_func_3133();
}
void Frames::event_func_3134()
{
    // event 4052_6
    {
        if (!(group_code_1 && group_code_fire_1)) goto event_4052_6_end;
        if (!((((Active*)foreach_instance_spread)->alterables->values.get(3)) == (1))) goto event_4052_6_end;
        if (!((((Active*)foreach_instance_spread)->alterables->values.get(2)) > (0))) goto event_4052_6_end;
        ((Active*)((Active*)foreach_instance_spread))->alterables->values.set(3, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(720, str_spread_1896, ((Active*)foreach_instance_spread)->alterables->values.get(2)-1);
        FrameObject * single_instance_4052_6_0; single_instance_4052_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_usespot2_378(((Active*)foreach_instance_spread)->x + 0, ((Active*)foreach_instance_spread)->y + -16), ((Active*)foreach_instance_spread)->layer);
            if (single_instance_4052_6_0 == NULL)
                single_instance_4052_6_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_4052_6_0))->alterables->values.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(720, str_spread_1896));
        FrameObject * single_instance_4052_6_1; single_instance_4052_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_usespot2_378(((Active*)foreach_instance_spread)->x + -16, ((Active*)foreach_instance_spread)->y + 0), ((Active*)foreach_instance_spread)->layer);
            if (single_instance_4052_6_1 == NULL)
                single_instance_4052_6_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_4052_6_1))->alterables->values.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(720, str_spread_1896));
        FrameObject * single_instance_4052_6_2; single_instance_4052_6_2 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_usespot2_378(((Active*)foreach_instance_spread)->x + 16, ((Active*)foreach_instance_spread)->y + 0), ((Active*)foreach_instance_spread)->layer);
            if (single_instance_4052_6_2 == NULL)
                single_instance_4052_6_2 = new_obj;
        }
        ((Active*)((Active*)single_instance_4052_6_2))->alterables->values.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(720, str_spread_1896));
        FrameObject * single_instance_4052_6_3; single_instance_4052_6_3 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_usespot2_378(((Active*)foreach_instance_spread)->x + 0, ((Active*)foreach_instance_spread)->y + 16), ((Active*)foreach_instance_spread)->layer);
            if (single_instance_4052_6_3 == NULL)
                single_instance_4052_6_3 = new_obj;
        }
        ((Active*)((Active*)single_instance_4052_6_3))->alterables->values.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(720, str_spread_1896));
    }
    event_4052_6_end: ;
}
void Frames::foreach_spread_6()
{
    event_func_3134();
}
void Frames::event_func_3135()
{
    // event 4371_6
    {
        if (!(group_set_item_graphic_1)) goto event_4371_6_end;
        if (!((((Active*)foreach_instance_item2_setup)->alterables->values.get(2)) > (255))) goto event_4371_6_end;
        ((Active*)((Active*)foreach_instance_item2_setup))->force_animation(10);
        ((Active*)((Active*)foreach_instance_item2_setup))->set_direction(((Active*)foreach_instance_item2_setup)->alterables->values.get(2)-256);
        ((Active*)((Active*)foreach_instance_item2_setup))->alterables->flags.disable(-2);
        ((Active*)((Active*)foreach_instance_item2_setup))->alterables->values.set(3, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((Active*)foreach_instance_item2_setup)->alterables->values.get(2)), str_illegal_618));
    }
    event_4371_6_end: ;
}
void Frames::event_func_3136()
{
    // event 4372_6
    {
        if (!(group_set_item_graphic_1)) goto event_4372_6_end;
        if (!((((Active*)foreach_instance_item2_setup)->alterables->values.get(2)) > (223))) goto event_4372_6_end;
        if (!((((Active*)foreach_instance_item2_setup)->alterables->values.get(2)) <= (255))) goto event_4372_6_end;
        ((Active*)((Active*)foreach_instance_item2_setup))->force_animation(9);
        ((Active*)((Active*)foreach_instance_item2_setup))->set_direction(((Active*)foreach_instance_item2_setup)->alterables->values.get(2)-224);
        ((Active*)((Active*)foreach_instance_item2_setup))->alterables->flags.disable(-2);
        ((Active*)((Active*)foreach_instance_item2_setup))->alterables->values.set(3, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((Active*)foreach_instance_item2_setup)->alterables->values.get(2)), str_illegal_618));
    }
    event_4372_6_end: ;
}
void Frames::event_func_3137()
{
    // event 4373_6
    {
        if (!(group_set_item_graphic_1)) goto event_4373_6_end;
        if (!((((Active*)foreach_instance_item2_setup)->alterables->values.get(2)) > (191))) goto event_4373_6_end;
        if (!((((Active*)foreach_instance_item2_setup)->alterables->values.get(2)) <= (223))) goto event_4373_6_end;
        ((Active*)((Active*)foreach_instance_item2_setup))->force_animation(8);
        ((Active*)((Active*)foreach_instance_item2_setup))->set_direction(((Active*)foreach_instance_item2_setup)->alterables->values.get(2)-192);
        ((Active*)((Active*)foreach_instance_item2_setup))->alterables->flags.disable(-2);
        ((Active*)((Active*)foreach_instance_item2_setup))->alterables->values.set(3, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((Active*)foreach_instance_item2_setup)->alterables->values.get(2)), str_illegal_618));
    }
    event_4373_6_end: ;
}
void Frames::event_func_3138()
{
    // event 4374_6
    {
        if (!(group_set_item_graphic_1)) goto event_4374_6_end;
        if (!(((Active*)foreach_instance_item2_setup)->alterables->flags.is_on(-2))) goto event_4374_6_end;
        if (!((((Active*)foreach_instance_item2_setup)->alterables->values.get(2)) > (159))) goto event_4374_6_end;
        if (!((((Active*)foreach_instance_item2_setup)->alterables->values.get(2)) <= (191))) goto event_4374_6_end;
        ((Active*)((Active*)foreach_instance_item2_setup))->force_animation(7);
        ((Active*)((Active*)foreach_instance_item2_setup))->set_direction(((Active*)foreach_instance_item2_setup)->alterables->values.get(2)-160);
        ((Active*)((Active*)foreach_instance_item2_setup))->alterables->flags.disable(-2);
        ((Active*)((Active*)foreach_instance_item2_setup))->alterables->values.set(3, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((Active*)foreach_instance_item2_setup)->alterables->values.get(2)), str_illegal_618));
    }
    event_4374_6_end: ;
}
void Frames::event_func_3139()
{
    // event 4375_6
    {
        if (!(group_set_item_graphic_1)) goto event_4375_6_end;
        if (!(((Active*)foreach_instance_item2_setup)->alterables->flags.is_on(-2))) goto event_4375_6_end;
        if (!((((Active*)foreach_instance_item2_setup)->alterables->values.get(2)) > (127))) goto event_4375_6_end;
        if (!((((Active*)foreach_instance_item2_setup)->alterables->values.get(2)) <= (159))) goto event_4375_6_end;
        ((Active*)((Active*)foreach_instance_item2_setup))->force_animation(6);
        ((Active*)((Active*)foreach_instance_item2_setup))->set_direction(((Active*)foreach_instance_item2_setup)->alterables->values.get(2)-128);
        ((Active*)((Active*)foreach_instance_item2_setup))->alterables->flags.disable(-2);
        ((Active*)((Active*)foreach_instance_item2_setup))->alterables->values.set(3, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((Active*)foreach_instance_item2_setup)->alterables->values.get(2)), str_illegal_618));
    }
    event_4375_6_end: ;
}
void Frames::event_func_3140()
{
    // event 4376_6
    {
        if (!(group_set_item_graphic_1)) goto event_4376_6_end;
        if (!(((Active*)foreach_instance_item2_setup)->alterables->flags.is_on(-2))) goto event_4376_6_end;
        if (!((((Active*)foreach_instance_item2_setup)->alterables->values.get(2)) > (95))) goto event_4376_6_end;
        if (!((((Active*)foreach_instance_item2_setup)->alterables->values.get(2)) <= (127))) goto event_4376_6_end;
        ((Active*)((Active*)foreach_instance_item2_setup))->force_animation(5);
        ((Active*)((Active*)foreach_instance_item2_setup))->set_direction(((Active*)foreach_instance_item2_setup)->alterables->values.get(2)-96);
        ((Active*)((Active*)foreach_instance_item2_setup))->alterables->flags.disable(-2);
        ((Active*)((Active*)foreach_instance_item2_setup))->alterables->values.set(3, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((Active*)foreach_instance_item2_setup)->alterables->values.get(2)), str_illegal_618));
    }
    event_4376_6_end: ;
}
void Frames::event_func_3141()
{
    // event 4377_6
    {
        if (!(group_set_item_graphic_1)) goto event_4377_6_end;
        if (!(((Active*)foreach_instance_item2_setup)->alterables->flags.is_on(-2))) goto event_4377_6_end;
        if (!((((Active*)foreach_instance_item2_setup)->alterables->values.get(2)) > (63))) goto event_4377_6_end;
        if (!((((Active*)foreach_instance_item2_setup)->alterables->values.get(2)) <= (95))) goto event_4377_6_end;
        ((Active*)((Active*)foreach_instance_item2_setup))->force_animation(2);
        ((Active*)((Active*)foreach_instance_item2_setup))->set_direction(((Active*)foreach_instance_item2_setup)->alterables->values.get(2)-64);
        ((Active*)((Active*)foreach_instance_item2_setup))->alterables->flags.disable(-2);
        ((Active*)((Active*)foreach_instance_item2_setup))->alterables->values.set(3, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((Active*)foreach_instance_item2_setup)->alterables->values.get(2)), str_illegal_618));
    }
    event_4377_6_end: ;
}
void Frames::event_func_3142()
{
    // event 4378_6
    {
        if (!(group_set_item_graphic_1)) goto event_4378_6_end;
        if (!(((Active*)foreach_instance_item2_setup)->alterables->flags.is_on(-2))) goto event_4378_6_end;
        if (!((((Active*)foreach_instance_item2_setup)->alterables->values.get(2)) > (31))) goto event_4378_6_end;
        if (!((((Active*)foreach_instance_item2_setup)->alterables->values.get(2)) <= (63))) goto event_4378_6_end;
        ((Active*)((Active*)foreach_instance_item2_setup))->force_animation(1);
        ((Active*)((Active*)foreach_instance_item2_setup))->set_direction(((Active*)foreach_instance_item2_setup)->alterables->values.get(2)-32);
        ((Active*)((Active*)foreach_instance_item2_setup))->alterables->flags.disable(-2);
        ((Active*)((Active*)foreach_instance_item2_setup))->alterables->values.set(3, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((Active*)foreach_instance_item2_setup)->alterables->values.get(2)), str_illegal_618));
    }
    event_4378_6_end: ;
}
void Frames::event_func_3143()
{
    // event 4379_6
    {
        if (!(group_set_item_graphic_1)) goto event_4379_6_end;
        if (!(((Active*)foreach_instance_item2_setup)->alterables->flags.is_on(-2))) goto event_4379_6_end;
        if (!((((Active*)foreach_instance_item2_setup)->alterables->values.get(2)) <= (31))) goto event_4379_6_end;
        ((Active*)((Active*)foreach_instance_item2_setup))->force_animation(0);
        ((Active*)((Active*)foreach_instance_item2_setup))->set_direction(((Active*)foreach_instance_item2_setup)->alterables->values.get(2));
        ((Active*)((Active*)foreach_instance_item2_setup))->alterables->flags.disable(-2);
        ((Active*)((Active*)foreach_instance_item2_setup))->alterables->values.set(3, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((Active*)foreach_instance_item2_setup)->alterables->values.get(2)), str_illegal_618));
    }
    event_4379_6_end: ;
}
void Frames::foreach_item2_setup_6()
{
    event_func_3135();
    event_func_3136();
    event_func_3137();
    event_func_3138();
    event_func_3139();
    event_func_3140();
    event_func_3141();
    event_func_3142();
    event_func_3143();
}
void Frames::event_func_3144()
{
    // event 4361_6
    {
        if (!(group_set_item_graphic_1)) goto event_4361_6_end;
        if (!(((Active*)foreach_instance_item_setup)->alterables->flags.is_on(-2))) goto event_4361_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((Active*)foreach_instance_item_setup)->alterables->values.get(2)), str_decay_1212)) == (0))) goto event_4361_6_end;
        ((Active*)((Active*)foreach_instance_item_setup))->alterables->values.set(7, -100);
        ((Active*)((Active*)foreach_instance_item_setup))->alterables->values.set(6, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((Active*)foreach_instance_item_setup)->alterables->values.get(2)), str_illegal_618));
    }
    event_4361_6_end: ;
}
void Frames::event_func_3145()
{
    // event 4362_6
    {
        if (!(group_set_item_graphic_1)) goto event_4362_6_end;
        if (!((((Active*)foreach_instance_item_setup)->alterables->values.get(2)) > (255))) goto event_4362_6_end;
        ((Active*)((Active*)foreach_instance_item_setup))->force_animation(10);
        ((Active*)((Active*)foreach_instance_item_setup))->set_direction(((Active*)foreach_instance_item_setup)->alterables->values.get(2)-256);
        ((Active*)((Active*)foreach_instance_item_setup))->alterables->values.set(6, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((Active*)foreach_instance_item_setup)->alterables->values.get(2)), str_illegal_618));
        ((Active*)((Active*)foreach_instance_item_setup))->alterables->flags.disable(-2);
    }
    event_4362_6_end: ;
}
void Frames::event_func_3146()
{
    // event 4363_6
    {
        if (!(group_set_item_graphic_1)) goto event_4363_6_end;
        if (!((((Active*)foreach_instance_item_setup)->alterables->values.get(2)) > (223))) goto event_4363_6_end;
        if (!((((Active*)foreach_instance_item_setup)->alterables->values.get(2)) <= (255))) goto event_4363_6_end;
        ((Active*)((Active*)foreach_instance_item_setup))->force_animation(9);
        ((Active*)((Active*)foreach_instance_item_setup))->set_direction(((Active*)foreach_instance_item_setup)->alterables->values.get(2)-224);
        ((Active*)((Active*)foreach_instance_item_setup))->alterables->values.set(6, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((Active*)foreach_instance_item_setup)->alterables->values.get(2)), str_illegal_618));
        ((Active*)((Active*)foreach_instance_item_setup))->alterables->flags.disable(-2);
    }
    event_4363_6_end: ;
}
void Frames::event_func_3147()
{
    // event 4364_6
    {
        if (!(group_set_item_graphic_1)) goto event_4364_6_end;
        if (!((((Active*)foreach_instance_item_setup)->alterables->values.get(2)) > (191))) goto event_4364_6_end;
        if (!((((Active*)foreach_instance_item_setup)->alterables->values.get(2)) <= (223))) goto event_4364_6_end;
        ((Active*)((Active*)foreach_instance_item_setup))->force_animation(8);
        ((Active*)((Active*)foreach_instance_item_setup))->set_direction(((Active*)foreach_instance_item_setup)->alterables->values.get(2)-192);
        ((Active*)((Active*)foreach_instance_item_setup))->alterables->values.set(6, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((Active*)foreach_instance_item_setup)->alterables->values.get(2)), str_illegal_618));
        ((Active*)((Active*)foreach_instance_item_setup))->alterables->flags.disable(-2);
    }
    event_4364_6_end: ;
}
void Frames::event_func_3148()
{
    // event 4365_6
    {
        if (!(group_set_item_graphic_1)) goto event_4365_6_end;
        if (!((((Active*)foreach_instance_item_setup)->alterables->values.get(2)) > (159))) goto event_4365_6_end;
        if (!((((Active*)foreach_instance_item_setup)->alterables->values.get(2)) <= (191))) goto event_4365_6_end;
        ((Active*)((Active*)foreach_instance_item_setup))->force_animation(7);
        ((Active*)((Active*)foreach_instance_item_setup))->set_direction(((Active*)foreach_instance_item_setup)->alterables->values.get(2)-160);
        ((Active*)((Active*)foreach_instance_item_setup))->alterables->values.set(6, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((Active*)foreach_instance_item_setup)->alterables->values.get(2)), str_illegal_618));
        ((Active*)((Active*)foreach_instance_item_setup))->alterables->flags.disable(-2);
    }
    event_4365_6_end: ;
}
void Frames::event_func_3149()
{
    // event 4366_6
    {
        if (!(group_set_item_graphic_1)) goto event_4366_6_end;
        if (!((((Active*)foreach_instance_item_setup)->alterables->values.get(2)) > (127))) goto event_4366_6_end;
        if (!((((Active*)foreach_instance_item_setup)->alterables->values.get(2)) <= (159))) goto event_4366_6_end;
        ((Active*)((Active*)foreach_instance_item_setup))->force_animation(6);
        ((Active*)((Active*)foreach_instance_item_setup))->set_direction(((Active*)foreach_instance_item_setup)->alterables->values.get(2)-128);
        ((Active*)((Active*)foreach_instance_item_setup))->alterables->values.set(6, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((Active*)foreach_instance_item_setup)->alterables->values.get(2)), str_illegal_618));
        ((Active*)((Active*)foreach_instance_item_setup))->alterables->flags.disable(-2);
    }
    event_4366_6_end: ;
}
void Frames::event_func_3150()
{
    // event 4367_6
    {
        if (!(group_set_item_graphic_1)) goto event_4367_6_end;
        if (!(((Active*)foreach_instance_item_setup)->alterables->flags.is_on(-2))) goto event_4367_6_end;
        if (!((((Active*)foreach_instance_item_setup)->alterables->values.get(2)) > (95))) goto event_4367_6_end;
        if (!((((Active*)foreach_instance_item_setup)->alterables->values.get(2)) <= (127))) goto event_4367_6_end;
        ((Active*)((Active*)foreach_instance_item_setup))->force_animation(5);
        ((Active*)((Active*)foreach_instance_item_setup))->set_direction(((Active*)foreach_instance_item_setup)->alterables->values.get(2)-96);
        ((Active*)((Active*)foreach_instance_item_setup))->alterables->values.set(6, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((Active*)foreach_instance_item_setup)->alterables->values.get(2)), str_illegal_618));
        ((Active*)((Active*)foreach_instance_item_setup))->alterables->flags.disable(-2);
    }
    event_4367_6_end: ;
}
void Frames::event_func_3151()
{
    // event 4368_6
    {
        if (!(group_set_item_graphic_1)) goto event_4368_6_end;
        if (!(((Active*)foreach_instance_item_setup)->alterables->flags.is_on(-2))) goto event_4368_6_end;
        if (!((((Active*)foreach_instance_item_setup)->alterables->values.get(2)) > (63))) goto event_4368_6_end;
        if (!((((Active*)foreach_instance_item_setup)->alterables->values.get(2)) <= (95))) goto event_4368_6_end;
        ((Active*)((Active*)foreach_instance_item_setup))->force_animation(2);
        ((Active*)((Active*)foreach_instance_item_setup))->set_direction(((Active*)foreach_instance_item_setup)->alterables->values.get(2)-64);
        ((Active*)((Active*)foreach_instance_item_setup))->alterables->values.set(6, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((Active*)foreach_instance_item_setup)->alterables->values.get(2)), str_illegal_618));
        ((Active*)((Active*)foreach_instance_item_setup))->alterables->flags.disable(-2);
    }
    event_4368_6_end: ;
}
void Frames::event_func_3152()
{
    // event 4369_6
    {
        if (!(group_set_item_graphic_1)) goto event_4369_6_end;
        if (!(((Active*)foreach_instance_item_setup)->alterables->flags.is_on(-2))) goto event_4369_6_end;
        if (!((((Active*)foreach_instance_item_setup)->alterables->values.get(2)) > (31))) goto event_4369_6_end;
        if (!((((Active*)foreach_instance_item_setup)->alterables->values.get(2)) <= (63))) goto event_4369_6_end;
        ((Active*)((Active*)foreach_instance_item_setup))->force_animation(1);
        ((Active*)((Active*)foreach_instance_item_setup))->set_direction(((Active*)foreach_instance_item_setup)->alterables->values.get(2)-32);
        ((Active*)((Active*)foreach_instance_item_setup))->alterables->values.set(6, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((Active*)foreach_instance_item_setup)->alterables->values.get(2)), str_illegal_618));
        ((Active*)((Active*)foreach_instance_item_setup))->alterables->flags.disable(-2);
    }
    event_4369_6_end: ;
}
void Frames::event_func_3153()
{
    // event 4370_6
    {
        if (!(group_set_item_graphic_1)) goto event_4370_6_end;
        if (!(((Active*)foreach_instance_item_setup)->alterables->flags.is_on(-2))) goto event_4370_6_end;
        if (!((((Active*)foreach_instance_item_setup)->alterables->values.get(2)) <= (31))) goto event_4370_6_end;
        ((Active*)((Active*)foreach_instance_item_setup))->force_animation(0);
        ((Active*)((Active*)foreach_instance_item_setup))->set_direction(((Active*)foreach_instance_item_setup)->alterables->values.get(2));
        ((Active*)((Active*)foreach_instance_item_setup))->alterables->values.set(6, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((Active*)foreach_instance_item_setup)->alterables->values.get(2)), str_illegal_618));
        ((Active*)((Active*)foreach_instance_item_setup))->alterables->flags.disable(-2);
    }
    event_4370_6_end: ;
}
void Frames::foreach_item_setup_6()
{
    event_func_3144();
    event_func_3145();
    event_func_3146();
    event_func_3147();
    event_func_3148();
    event_func_3149();
    event_func_3150();
    event_func_3151();
    event_func_3152();
    event_func_3153();
}
void Frames::event_func_3154()
{
    // event 3988_6
    {
        if (!(group_code_1)) goto event_3988_6_end;
        if (!((((Active*)foreach_instance_align_g)->alterables->values.get(0)) != (-1))) goto event_3988_6_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)foreach_instance_align_g)->alterables->values.get(25)))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_3988_6_end;
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)foreach_instance_align_g)->get_direction());
        }
    }
    event_3988_6_end: ;
}
void Frames::event_func_3155()
{
    // event 3989_6
    {
        if (!(group_code_1)) goto event_3989_6_end;
        if (!((((Active*)foreach_instance_align_g)->alterables->values.get(0)) != (-1))) goto event_3989_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(137, str_curr_x_702, ((Active*)foreach_instance_align_g)->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(138, str_curr_y_703, ((Active*)foreach_instance_align_g)->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(136, str_curr_z_701, ((Active*)foreach_instance_align_g)->alterables->values.get(25));
        {
            loop_hehe_running = true;
            int times = int(3);
            loop_hehe_index = 0;
            while (loop_hehe_index < times) {
                loop_hehe_6();
                if (!loop_hehe_running) break;
                loop_hehe_index++;
            }
        }
    }
    event_3989_6_end: ;
}
void Frames::event_func_3156()
{
    // event 3995_6
    {
        if (!(group_code_1)) goto event_3995_6_end;
        icons_433_instances.clear_selection();
        for (ObjectIterator it(icons_433_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) != (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)foreach_instance_align_g)->alterables->values.get(25)))) { it.deselect(); continue; }
        }
        if (!icons_433_instances.has_selection()) goto event_3995_6_end;
        for (ObjectIterator it(icons_433_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)foreach_instance_align_g)->get_x());
            ((Active*)*it)->set_y(((Active*)foreach_instance_align_g)->get_y()-(((Active*)*it)->alterables->values.get(0)/MathHelper()/4));
        }
    }
    event_3995_6_end: ;
}
void Frames::event_func_3157()
{
    // event 3996_6
    {
        if (!(group_code_1)) goto event_3996_6_end;
        icons_433_instances.clear_selection();
        for (ObjectIterator it(icons_433_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (5))) { it.deselect(); continue; }
        }
        if (!icons_433_instances.has_selection()) goto event_3996_6_end;
        for (ObjectIterator it(icons_433_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_3996_6_end: ;
}
void Frames::event_func_3158()
{
    // event 3997_6
    {
        if (!(group_code_1)) goto event_3997_6_end;
        if (!((((Active*)foreach_instance_align_g)->alterables->values.get(0)) != (-1))) goto event_3997_6_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)foreach_instance_align_g)->alterables->values.get(25)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(8))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_3997_6_end;
        if (((Active*)foreach_instance_align_g)->get_movement()->is_stopped()) goto event_3997_6_end;
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_3997_6_end: ;
}
void Frames::event_func_3159()
{
    // event 3998_6
    {
        if (!(group_code_1)) goto event_3998_6_end;
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_3998_6_end;
        if (!((((Active*)foreach_instance_align_g)->alterables->values.get(0)) != (-1))) goto event_3998_6_end;
        qualifier_6.clear_selection();
        if (!check_overlap(((Active*)foreach_instance_align_g), qualifier_6)) goto event_3998_6_end;
        for (QualifierIterator it(qualifier_6); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(16777216))) { it.deselect(); continue; }
        }
        if (!qualifier_6.has_selection()) goto event_3998_6_end;
        if (!((((Active*)foreach_instance_align_g)->alterables->values.get(2)) == (0))) goto event_3998_6_end;
        if (!((((Active*)foreach_instance_align_g)->get_x()) == (((Active*)get_single(qualifier_6, default_active_instance))->get_box_index(0)+8))) goto event_3998_6_end;
        if (!((((Active*)foreach_instance_align_g)->get_y()) == (((Active*)get_single(qualifier_6, default_active_instance))->get_box_index(1)+10))) goto event_3998_6_end;
        if (!((((Active*)foreach_instance_align_g)->alterables->values.get(7)) > (0))) goto event_3998_6_end;
        if (!(((Active*)foreach_instance_align_g)->get_movement()->is_stopped())) goto event_3998_6_end;
        if (!((((Active*)foreach_instance_align_g)->alterables->values.get(15)) == (0))) goto event_3998_6_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)foreach_instance_align_g)->alterables->values.get(25)))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_3998_6_end;
        {
            FrameObject * parent = ((Active*)get_single(qualifier_6));
            if (parent == NULL) goto pos_end_3998_6_0;
            ((Active*)foreach_instance_align_g)->set_global_position(parent->get_x() + 8, parent->get_y() + 10);
            pos_end_3998_6_0: ;
        }
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->set_direction(24);
        }
    }
    event_3998_6_end: ;
}
void Frames::event_func_3160()
{
    // event 3999_6
    {
        if (!(group_code_1)) goto event_3999_6_end;
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_3999_6_end;
        if (!((((Active*)foreach_instance_align_g)->alterables->values.get(0)) != (-1))) goto event_3999_6_end;
        qualifier_6.clear_selection();
        if (!check_overlap(((Active*)foreach_instance_align_g), qualifier_6)) goto event_3999_6_end;
        for (QualifierIterator it(qualifier_6); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!qualifier_6.has_selection()) goto event_3999_6_end;
        if (!((((Active*)foreach_instance_align_g)->alterables->values.get(2)) == (0))) goto event_3999_6_end;
        if (!((((Active*)foreach_instance_align_g)->get_x()) == (((Active*)get_single(qualifier_6, default_active_instance))->get_box_index(0)+13))) goto event_3999_6_end;
        if (!((((Active*)foreach_instance_align_g)->get_y()) == (((Active*)get_single(qualifier_6, default_active_instance))->get_box_index(1)+7))) goto event_3999_6_end;
        if (!((((Active*)foreach_instance_align_g)->alterables->values.get(7)) > (0))) goto event_3999_6_end;
        if (!(((Active*)foreach_instance_align_g)->get_movement()->is_stopped())) goto event_3999_6_end;
        if (!((((Active*)foreach_instance_align_g)->alterables->values.get(15)) == (0))) goto event_3999_6_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)foreach_instance_align_g)->alterables->values.get(25)))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_3999_6_end;
        {
            FrameObject * parent = ((Active*)get_single(qualifier_6));
            if (parent == NULL) goto pos_end_3999_6_0;
            ((Active*)foreach_instance_align_g)->set_global_position(parent->get_x() + 13, parent->get_y() + 7);
            pos_end_3999_6_0: ;
        }
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_3999_6_end: ;
}
void Frames::event_func_3161()
{
    // event 4000_6
    {
        if (!(group_code_1)) goto event_4000_6_end;
        if (!((((Active*)foreach_instance_align_g)->alterables->values.get(0)) != (-1))) goto event_4000_6_end;
        qualifier_1.clear_selection();
        if (!check_overlap(((Active*)foreach_instance_align_g), qualifier_1)) goto event_4000_6_end;
        if (!(((Active*)foreach_instance_align_g)->get_movement()->is_stopped())) goto event_4000_6_end;
        if (!((((Active*)foreach_instance_align_g)->alterables->values.get(2)) == (0))) goto event_4000_6_end;
        ((Active*)((Active*)foreach_instance_align_g))->set_direction(((Active*)get_single(qualifier_1, default_active_instance))->get_direction());
    }
    event_4000_6_end: ;
}
void Frames::event_func_3162()
{
    // event 4001_6
    {
        if (!(group_code_1)) goto event_4001_6_end;
        if (!((((Active*)foreach_instance_align_g)->alterables->values.get(0)) != (-1))) goto event_4001_6_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)foreach_instance_align_g)->alterables->values.get(25)))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_4001_6_end;
        qualifier_16.clear_selection();
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)foreach_instance_align_g)->alterables->values.get(25)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!qualifier_16.has_selection()) goto event_4001_6_end;
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)foreach_instance_align_g)->layer->index+1-1);
        }
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(qualifier_3, it.current_index));
            if (parent == NULL) goto pos_end_4001_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_4001_6_0: ;
        }
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(qualifier_3, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->force_animation(((Active*)get_single(qualifier_3, it.current_index, default_active_instance))->current_animation);
            ((Active*)*it)->force_frame(((Active*)get_single(qualifier_3, it.current_index, default_active_instance))->get_frame());
        }
        {
            QualifierIterator other_it(qualifier_3);
            for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
                if (other_it.end()) goto action_4001_6_1_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_4001_6_1_end: ;
    }
    event_4001_6_end: ;
}
void Frames::event_func_3163()
{
    // event 4002_6
    {
        if (!(group_code_1)) goto event_4002_6_end;
        if (!((((Active*)foreach_instance_align_g)->alterables->values.get(0)) != (-1))) goto event_4002_6_end;
        torch_331_instances.clear_selection();
        for (ObjectIterator it(torch_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)foreach_instance_align_g)->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!torch_331_instances.has_selection()) goto event_4002_6_end;
        for (ObjectIterator it(torch_331_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_4002_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_4002_6_0: ;
        }
        for (ObjectIterator it(torch_331_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_instance(guardBase_instances, it.current_index, default_active_instance))->get_direction());
        }
    }
    event_4002_6_end: ;
}
void Frames::event_func_3164()
{
    // event 4003_6
    {
        if (!(group_code_1)) goto event_4003_6_end;
        if (!((((Active*)foreach_instance_align_g)->alterables->values.get(0)) != (-1))) goto event_4003_6_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)foreach_instance_align_g)->alterables->values.get(25)))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_4003_6_end;
        dizzy_467_instances.clear_selection();
        for (ObjectIterator it(dizzy_467_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)foreach_instance_align_g)->alterables->values.get(25)))) { it.deselect(); continue; }
        }
        if (!dizzy_467_instances.has_selection()) goto event_4003_6_end;
        for (ObjectIterator it(dizzy_467_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)foreach_instance_align_g)->layer->index+1-1);
        }
        for (ObjectIterator it(dizzy_467_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)foreach_instance_align_g);
            if (parent == NULL) goto pos_end_4003_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_4003_6_0: ;
        }
        for (ObjectIterator it(dizzy_467_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
            ((Active*)*it)->alterables->values.set(1, ((Active*)foreach_instance_align_g)->alterables->values.get(7));
        }
    }
    event_4003_6_end: ;
}
void Frames::foreach_align_g_6()
{
    event_func_3154();
    event_func_3155();
    event_func_3156();
    event_func_3157();
    event_func_3158();
    event_func_3159();
    event_func_3160();
    event_func_3161();
    event_func_3162();
    event_func_3163();
    event_func_3164();
}
void Frames::steam_download_success_6()
{
    folder_search_loop_0();
}
void Frames::steam_download_fail_6()
{
    folder_search_loop_0();
}
void Frames::steam_on_loop_6()
{
    folder_search_loop_0();
}
void Frames::steam_on_loop_finish_6()
{
    folder_search_loop_0();
}
void Frames::steam_search_success_6()
{
    folder_search_loop_0();
}
