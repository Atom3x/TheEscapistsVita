#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_2856()
{
    // event 1665_6
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1665_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(700, str_currd_1850)) != (((AssociateArray*)get_instance(gameVariables_instances))->get_value(698, str_currw_1848)))) goto event_1665_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sleeping_guards_index+1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1665_6_end;
        waypointguard2_315_instances.clear_selection();
        for (ObjectIterator it(waypointguard2_315_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(10)))) { it.deselect(); continue; }
        }
        if (!waypointguard2_315_instances.has_selection()) goto event_1665_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(waypointguard2_315_instances, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(waypointguard2_315_instances, it.current_index, default_active_instance))->get_y()+8);
        }
    }
    event_1665_6_end: ;
}
void Frames::event_func_2857()
{
    // event 1666_6
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1666_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(700, str_currd_1850)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(698, str_currw_1848)))) goto event_1666_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(697, str_newdest_1847, 0);
        {
            loop_patrol_target_running = true;
            int times = int(1);
            loop_patrol_target_index = 0;
            while (loop_patrol_target_index < times) {
                loop_patrol_target_6();
                if (!loop_patrol_target_running) break;
                loop_patrol_target_index++;
            }
        }
    }
    event_1666_6_end: ;
}
void Frames::loop_patrol_target_check_6()
{
    event_func_2856();
    event_func_2857();
}
void Frames::event_func_2858()
{
    // event 1000_6
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1000_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1000_6_end;
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
    }
    event_1000_6_end: ;
}
void Frames::event_func_2859()
{
    // event 1001_6
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1001_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1001_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1001_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->alterables->values.set(2, -1);
            ((Active*)*it)->alterables->flags.enable(250);
            ((Active*)*it)->alterables->values.set(21, 80);
        }
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_guards_heat_1771);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(352, str_telloff_1145, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142), str_name_693, ((Active*)get_instance(playerBase_instances))->alterables->strings.get(0)));
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
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_1001_6_end: ;
}
void Frames::loop_policing_nogo_6()
{
    event_func_2858();
    event_func_2859();
}
void Frames::event_func_2860()
{
    // event 4570_6
    {
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inv_512+number_to_string(loop_key_degrade_index+1)), str__96);
    }
    event_4570_6_end: ;
}
void Frames::event_func_2861()
{
    // event 4571_6
    {
        // group: Door key degrades
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(701, str_degradekey_1851)) == (str_orange_1852))) goto event_4571_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) == (str_7_323))) goto event_4571_6_end;
        {
            loop_key_degrade_go_running = true;
            int times = int(1);
            loop_key_degrade_go_index = 0;
            while (loop_key_degrade_go_index < times) {
                loop_key_degrade_go_6();
                if (!loop_key_degrade_go_running) break;
                loop_key_degrade_go_index++;
            }
        }
            loop_key_degrade_running = false;
    
    }
    event_4571_6_end: ;
}
void Frames::event_func_2862()
{
    // event 4572_6
    {
        // group: Door key degrades
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(701, str_degradekey_1851)) == (str_orange_1852))) goto event_4572_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) == (str_85_1853))) goto event_4572_6_end;
        {
            loop_key_degrade_go_running = true;
            int times = int(1);
            loop_key_degrade_go_index = 0;
            while (loop_key_degrade_go_index < times) {
                loop_key_degrade_go_6();
                if (!loop_key_degrade_go_running) break;
                loop_key_degrade_go_index++;
            }
        }
            loop_key_degrade_running = false;
    
    }
    event_4572_6_end: ;
}
void Frames::event_func_2863()
{
    // event 4573_6
    {
        // group: Door key degrades
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(701, str_degradekey_1851)) == (str_red_1854))) goto event_4573_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) == (str_1_97))) goto event_4573_6_end;
        {
            loop_key_degrade_go_running = true;
            int times = int(1);
            loop_key_degrade_go_index = 0;
            while (loop_key_degrade_go_index < times) {
                loop_key_degrade_go_6();
                if (!loop_key_degrade_go_running) break;
                loop_key_degrade_go_index++;
            }
        }
            loop_key_degrade_running = false;
    
    }
    event_4573_6_end: ;
}
void Frames::event_func_2864()
{
    // event 4574_6
    {
        // group: Door key degrades
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(701, str_degradekey_1851)) == (str_red_1854))) goto event_4574_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) == (str_86_1855))) goto event_4574_6_end;
        {
            loop_key_degrade_go_running = true;
            int times = int(1);
            loop_key_degrade_go_index = 0;
            while (loop_key_degrade_go_index < times) {
                loop_key_degrade_go_6();
                if (!loop_key_degrade_go_running) break;
                loop_key_degrade_go_index++;
            }
        }
            loop_key_degrade_running = false;
    
    }
    event_4574_6_end: ;
}
void Frames::event_func_2865()
{
    // event 4575_6
    {
        // group: Door key degrades
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(701, str_degradekey_1851)) == (str_yellow_1856))) goto event_4575_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) == (str_0_615))) goto event_4575_6_end;
        {
            loop_key_degrade_go_running = true;
            int times = int(1);
            loop_key_degrade_go_index = 0;
            while (loop_key_degrade_go_index < times) {
                loop_key_degrade_go_6();
                if (!loop_key_degrade_go_running) break;
                loop_key_degrade_go_index++;
            }
        }
            loop_key_degrade_running = false;
    
    }
    event_4575_6_end: ;
}
void Frames::event_func_2866()
{
    // event 4576_6
    {
        // group: Door key degrades
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(701, str_degradekey_1851)) == (str_yellow_1856))) goto event_4576_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) == (str_87_1857))) goto event_4576_6_end;
        {
            loop_key_degrade_go_running = true;
            int times = int(1);
            loop_key_degrade_go_index = 0;
            while (loop_key_degrade_go_index < times) {
                loop_key_degrade_go_6();
                if (!loop_key_degrade_go_running) break;
                loop_key_degrade_go_index++;
            }
        }
            loop_key_degrade_running = false;
    
    }
    event_4576_6_end: ;
}
void Frames::event_func_2867()
{
    // event 4577_6
    {
        // group: Door key degrades
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(701, str_degradekey_1851)) == (str_purple_1858))) goto event_4577_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) == (str_6_241))) goto event_4577_6_end;
        {
            loop_key_degrade_go_running = true;
            int times = int(1);
            loop_key_degrade_go_index = 0;
            while (loop_key_degrade_go_index < times) {
                loop_key_degrade_go_6();
                if (!loop_key_degrade_go_running) break;
                loop_key_degrade_go_index++;
            }
        }
            loop_key_degrade_running = false;
    
    }
    event_4577_6_end: ;
}
void Frames::event_func_2868()
{
    // event 4578_6
    {
        // group: Door key degrades
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(701, str_degradekey_1851)) == (str_purple_1858))) goto event_4578_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) == (str_88_1859))) goto event_4578_6_end;
        {
            loop_key_degrade_go_running = true;
            int times = int(1);
            loop_key_degrade_go_index = 0;
            while (loop_key_degrade_go_index < times) {
                loop_key_degrade_go_6();
                if (!loop_key_degrade_go_running) break;
                loop_key_degrade_go_index++;
            }
        }
            loop_key_degrade_running = false;
    
    }
    event_4578_6_end: ;
}
void Frames::event_func_2869()
{
    // event 4579_6
    {
        // group: Door key degrades
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(701, str_degradekey_1851)) == (str_green_1860))) goto event_4579_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) == (str_43_695))) goto event_4579_6_end;
        {
            loop_key_degrade_go_running = true;
            int times = int(1);
            loop_key_degrade_go_index = 0;
            while (loop_key_degrade_go_index < times) {
                loop_key_degrade_go_6();
                if (!loop_key_degrade_go_running) break;
                loop_key_degrade_go_index++;
            }
        }
            loop_key_degrade_running = false;
    
    }
    event_4579_6_end: ;
}
void Frames::event_func_2870()
{
    // event 4580_6
    {
        // group: Door key degrades
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(701, str_degradekey_1851)) == (str_green_1860))) goto event_4580_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) == (str_58_1861))) goto event_4580_6_end;
        {
            loop_key_degrade_go_running = true;
            int times = int(1);
            loop_key_degrade_go_index = 0;
            while (loop_key_degrade_go_index < times) {
                loop_key_degrade_go_6();
                if (!loop_key_degrade_go_running) break;
                loop_key_degrade_go_index++;
            }
        }
            loop_key_degrade_running = false;
    
    }
    event_4580_6_end: ;
}
void Frames::loop_key_degrade_6()
{
    event_func_2860();
    event_func_2861();
    event_func_2862();
    event_func_2863();
    event_func_2864();
    event_func_2865();
    event_func_2866();
    event_func_2867();
    event_func_2868();
    event_func_2869();
    event_func_2870();
}
void Frames::event_func_2871()
{
    // event 4389_6
    {
        if (!(group_guard_towers_1)) goto event_4389_6_end;
        waypointtowerent_341_instances.clear_selection();
        for (ObjectIterator it(waypointtowerent_341_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(702, str_nearestent_1862)))) { it.deselect(); continue; }
        }
        if (!waypointtowerent_341_instances.has_selection()) goto event_4389_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(703, str_newz_1863, qualifier_14.size()+1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(704, str_newid_1864, guardBase_instances.size()+1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(650, str_entx_1750, ((Active*)get_single(waypointtowerent_341_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(651, str_enty_1751, ((Active*)get_single(waypointtowerent_341_instances, default_active_instance))->get_y());
        for (ObjectIterator it(waypointtowerent_341_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(704, str_newid_1864));
        }
    }
    event_4389_6_end: ;
}
void Frames::event_func_2872()
{
    // event 4390_6
    {
        if (!(group_guard_towers_1)) goto event_4390_6_end;
        guardBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guardBase(0, 0), 1);
            guardBase_instances.add_back();
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(704, str_newid_1864));
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(650, str_entx_1750)+8);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(651, str_enty_1751)+8);
            ((Active*)*it)->alterables->values.set(14, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(657, str_currtowerid_1757));
            ((Active*)*it)->alterables->values.set(25, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(703, str_newz_1863));
            ((Active*)*it)->alterables->values.set(8, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(705, str_currtowerspd_1865));
            ((Active*)*it)->alterables->values.set(9, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(706, str_currtowerstr_1866));
            ((Active*)*it)->alterables->values.set(5, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(707, str_currtowerint_1867));
            ((Active*)*it)->alterables->values.set(12, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(708, str_currtoweropn_1868));
            ((Active*)*it)->alterables->values.set(7, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(709, str_currtowerhp_1869));
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(474, str_gname_1348));
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_instance(bedguard_337_instances, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_instance(bedguard_337_instances, it.current_index, default_active_instance))->get_y()+8);
            ((Active*)*it)->alterables->flags.enable(5050);
            ((Active*)*it)->get_movement()->set_speed(4+(((Active*)*it)->alterables->values.get(9)/MathHelper()/15));
        }
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindingguards_247_instances));
            for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
    planner->add_agent(((Active*)*it));        }
        }
        FrameObject * single_instance_4390_6_1; single_instance_4390_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(guardBase_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_guard_169(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_4390_6_1 == NULL)
                    single_instance_4390_6_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_4390_6_1))->alterables->values.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(704, str_newid_1864));
        ((Active*)((Active*)single_instance_4390_6_1))->alterables->values.set(25, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(703, str_newz_1863));
        outfitguard_248_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitguard_248(0, 0), 1);
            outfitguard_248_instances.add_back();
        }
        for (ObjectIterator it(outfitguard_248_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(704, str_newid_1864));
            ((Active*)*it)->alterables->values.set(25, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(703, str_newz_1863));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_weapon_460+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(703, str_newz_1863)), str_29_100_539);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(703, str_newz_1863)), str_3_100_540);
    }
    event_4390_6_end: ;
}
void Frames::event_func_2873()
{
    // event 4391_6
    {
        if (!(group_guard_towers_1)) goto event_4391_6_end;
        towerguard_342_instances.clear_selection();
        for (ObjectIterator it(towerguard_342_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(657, str_currtowerid_1757)))) { it.deselect(); continue; }
        }
        if (!towerguard_342_instances.has_selection()) goto event_4391_6_end;
        for (ObjectIterator it(towerguard_342_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->flags.enable(2055);
        }
    }
    event_4391_6_end: ;
}
void Frames::loop_tower_guard_break_6()
{
    event_func_2871();
    event_func_2872();
    event_func_2873();
}
void Frames::event_func_2874()
{
    // event 4387_6
    {
        if (!(group_guard_towers_1)) goto event_4387_6_end;
        towerguard_342_instances.clear_selection();
        for (ObjectIterator it(towerguard_342_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_check_tower_breaks_index+1))) { it.deselect(); continue; }
        }
        if (!towerguard_342_instances.has_selection()) goto event_4387_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((Active*)get_single(towerguard_342_instances, default_active_instance))->alterables->strings.get(1), str__96);
    }
    event_4387_6_end: ;
}
void Frames::event_func_2875()
{
    // event 4388_6
    bool or_result_4388_6 = false;
    bool or_temp_result_4388_6_0 = false;
    {
        if (!(group_guard_towers_1)) goto or_event_4388_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(25, str_t_hour_488)) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0))))) goto or_event_4388_6_0_end;
        towerguard_342_instances.clear_selection();
        for (ObjectIterator it(towerguard_342_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_check_tower_breaks_index+1))) { it.deselect(); continue; }
        }
        if (!towerguard_342_instances.has_selection()) goto or_event_4388_6_0_end;
        or_result_4388_6 = true;
        or_temp_result_4388_6_0 = true;
    }
    or_event_4388_6_0_end: ;
    towerguard_342_instances.clear_saved_selection();
    if (or_temp_result_4388_6_0) {
        towerguard_342_instances.save_selection();
    }
    // event 4388_6
    bool or_temp_result_4388_6_1 = false;
    {
        if (!(group_guard_towers_1)) goto or_event_4388_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(25, str_t_hour_488)) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1))))) goto or_event_4388_6_1_end;
        towerguard_342_instances.clear_selection();
        for (ObjectIterator it(towerguard_342_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_check_tower_breaks_index+1))) { it.deselect(); continue; }
        }
        if (!towerguard_342_instances.has_selection()) goto or_event_4388_6_1_end;
        or_result_4388_6 = true;
        or_temp_result_4388_6_1 = true;
        or_event_4388_6_1_end: ;
        if (or_temp_result_4388_6_1) {
            towerguard_342_instances.save_selection();
        }
        if (!or_result_4388_6) goto or_final_or_event_4388_6_1_end;
        towerguard_342_instances.empty_selection();
        if (or_temp_result_4388_6_0 || or_temp_result_4388_6_1) {
            towerguard_342_instances.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_string(474, str_gname_1348, ((Active*)get_single(towerguard_342_instances, it.current_index, default_active_instance))->alterables->strings.get(0));
            ((AssociateArray*)*it)->set_value(657, str_currtowerid_1757, ((Active*)get_single(towerguard_342_instances, it.current_index, default_active_instance))->alterables->values.get(0));
            ((AssociateArray*)*it)->set_value(702, str_nearestent_1862, ((Active*)get_single(towerguard_342_instances, it.current_index, default_active_instance))->alterables->values.get(3));
            ((AssociateArray*)*it)->set_value(653, str_currtowerx_1753, ((Active*)get_single(towerguard_342_instances, it.current_index, default_active_instance))->get_x());
            ((AssociateArray*)*it)->set_value(654, str_currtowery_1754, ((Active*)get_single(towerguard_342_instances, it.current_index, default_active_instance))->get_y());
            ((AssociateArray*)*it)->set_value(706, str_currtowerstr_1866, ((Active*)get_single(towerguard_342_instances, it.current_index, default_active_instance))->alterables->values.get(8));
            ((AssociateArray*)*it)->set_value(705, str_currtowerspd_1865, ((Active*)get_single(towerguard_342_instances, it.current_index, default_active_instance))->alterables->values.get(9));
            ((AssociateArray*)*it)->set_value(706, str_currtowerstr_1866, ((Active*)get_single(towerguard_342_instances, it.current_index, default_active_instance))->alterables->values.get(8));
            ((AssociateArray*)*it)->set_value(705, str_currtowerspd_1865, ((Active*)get_single(towerguard_342_instances, it.current_index, default_active_instance))->alterables->values.get(9));
            ((AssociateArray*)*it)->set_value(707, str_currtowerint_1867, ((Active*)get_single(towerguard_342_instances, it.current_index, default_active_instance))->alterables->values.get(5));
            ((AssociateArray*)*it)->set_value(708, str_currtoweropn_1868, ((Active*)get_single(towerguard_342_instances, it.current_index, default_active_instance))->alterables->values.get(12));
            ((AssociateArray*)*it)->set_value(709, str_currtowerhp_1869, ((Active*)get_single(towerguard_342_instances, it.current_index, default_active_instance))->alterables->values.get(7));
            ((AssociateArray*)*it)->set_value(655, str_closesttowerdist_1755, 10000);
        }
        {
            loop_tower_guard_break_running = true;
            int times = int(1);
            loop_tower_guard_break_index = 0;
            while (loop_tower_guard_break_index < times) {
                loop_tower_guard_break_6();
                if (!loop_tower_guard_break_running) break;
                loop_tower_guard_break_index++;
            }
        }
    }
    or_final_or_event_4388_6_1_end: ;
}
void Frames::loop_check_tower_breaks_6()
{
    event_func_2874();
    event_func_2875();
}
void Frames::event_func_2876()
{
    // event 2744_6
    {
        if (!(group_code_1 && group_code_job_related_kitchen_1)) goto event_2744_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(710, str_oveninput_1870)) != (274))) goto event_2744_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 66);
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
    event_2744_6_end: ;
}
void Frames::event_func_2877()
{
    // event 2745_6
    {
        if (!(group_code_1 && group_code_job_related_kitchen_1)) goto event_2745_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(710, str_oveninput_1870)) == (274))) goto event_2745_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 275);
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
    event_2745_6_end: ;
}
void Frames::event_func_2878()
{
    // event 2746_6
    {
        if (!(group_code_1 && group_code_job_related_kitchen_1)) goto event_2746_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(89, str_addsuccess_596)) == (1))) goto event_2746_6_end;
        oven2_314_instances.clear_selection();
        for (ObjectIterator it(oven2_314_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(227, str_curroven_837)))) { it.deselect(); continue; }
        }
        if (!oven2_314_instances.has_selection()) goto event_2746_6_end;
        for (ObjectIterator it(oven2_314_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(50);
            ((Active*)*it)->force_animation(0);
        }
    }
    event_2746_6_end: ;
}
void Frames::loop_collect_oven_6()
{
    event_func_2876();
    event_func_2877();
    event_func_2878();
}
void Frames::event_func_2879()
{
    // event 3770_6
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_weights_1)) goto event_3770_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(711, str_weights_reps_1871)) > (0))) goto event_3770_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(711, str_weights_reps_1871)%MathHelper()%2) == (0))) goto event_3770_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(8)) < (100))) goto event_3770_6_end;
        ((Active*)get_instance(playerBase_instances))->alterables->values.add(8, 1);
        {
            loop_icon_str_running = true;
            int times = int(1);
            loop_icon_str_index = 0;
            while (loop_icon_str_index < times) {
                loop_icon_str_6();
                if (!loop_icon_str_running) break;
                loop_icon_str_index++;
            }
        }
    }
    event_3770_6_end: ;
}
void Frames::loop_weights_check_str_6()
{
    event_func_2879();
}
void Frames::event_func_2880()
{
    // event 1070_6
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1070_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1070_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1070_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_guards_naked_1872);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(352, str_telloff_1145, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(32, str_heat_495, 5*((AssociateArray*)get_instance(gameVariables_instances))->get_value(83, str_npclvl_587));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142), str_name_693, ((Active*)get_instance(playerBase_instances))->alterables->strings.get(0)));
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(playerBase_instances))->x + 0, ((Active*)get_instance(playerBase_instances))->y + 0));
            ((Active*)*it)->get_movement()->stop(false);
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
    event_1070_6_end: ;
}
void Frames::event_func_2881()
{
    // event 1071_6
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1071_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1071_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1071_6_end;
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
    event_1071_6_end: ;
}
void Frames::loop_policing_naked_6()
{
    event_func_2880();
    event_func_2881();
}
void Frames::event_func_2882()
{
    // event 52_6
    {
        if (!(group_load_map_from_file_1)) goto event_52_6_end;
        if (!((global_values->get(18)) != (2))) goto event_52_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_tiles_1873, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)), empty_string), str__96);
        ((StringTokenizer*)get_instance(ventTileRow_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_vents_1874, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)), empty_string), str__96);
        ((StringTokenizer*)get_instance(roofTileRow_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_roof_1875, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)), empty_string), str__96);
        ((StringTokenizer*)get_instance(undergroundTileRow_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_underground_1876, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)), empty_string), str__96);
        {
            loop_load_x_running = true;
            int times = int(width/MathHelper()/16);
            loop_load_x_index = 0;
            while (loop_load_x_index < times) {
                loop_load_x_6();
                if (!loop_load_x_running) break;
                loop_load_x_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(490, str_maploop_1369, 1);
    }
    event_52_6_end: ;
}
void Frames::event_func_2883()
{
    // event 53_6
    {
        if (!(group_load_map_from_file_1)) goto event_53_6_end;
        if (!((global_values->get(18)) == (2))) goto event_53_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(newmapini_468_instances))->get_string(str_tiles_1873, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369))), str__96);
        ((StringTokenizer*)get_instance(ventTileRow_instances))->split(((INI*)get_instance(newmapini_468_instances))->get_string(str_vents_1874, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369))), str__96);
        ((StringTokenizer*)get_instance(roofTileRow_instances))->split(((INI*)get_instance(newmapini_468_instances))->get_string(str_roof_1875, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369))), str__96);
        ((StringTokenizer*)get_instance(undergroundTileRow_instances))->split(((INI*)get_instance(newmapini_468_instances))->get_string(str_underground_1876, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369))), str__96);
        {
            loop_load_x_running = true;
            int times = int(width/MathHelper()/16);
            loop_load_x_index = 0;
            while (loop_load_x_index < times) {
                loop_load_x_6();
                if (!loop_load_x_running) break;
                loop_load_x_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(490, str_maploop_1369, 1);
    }
    event_53_6_end: ;
}
void Frames::loop_load_y_6()
{
    event_func_2882();
    event_func_2883();
}
void Frames::event_func_2884()
{
    // event 2811_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2811_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(upperlevelcheck_206_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(upperlevelcheck_206_instances))->get_y()/MathHelper()/16), 4)) != (0))) goto event_2811_6_end;
        {
            FrameObject * parent = ((Active*)get_instance(upperlevelcheck_206_instances));
            if (parent == NULL) goto pos_end_2811_6_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_2811_6_0: ;
        }
        ((Active*)get_instance(playerBase_instances))->set_layer(4-1);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(upperlevelcheck_206_instances));
            if (parent == NULL) goto pos_end_2811_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_2811_6_1: ;
        }
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_layer(4-1);
        }
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
        dighole_207_instances.clear_selection();
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(2-1);
            ((Active*)*it)->move_back();
        }
    }
    event_2811_6_end: ;
}
void Frames::event_func_2885()
{
    // event 2812_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2812_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(upperlevelcheck_206_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(upperlevelcheck_206_instances))->get_y()/MathHelper()/16), 4)) == (0))) goto event_2812_6_end;
        {
            FrameObject * parent = ((Active*)get_instance(upperlevelcheck_206_instances));
            if (parent == NULL) goto pos_end_2812_6_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 24);
            pos_end_2812_6_0: ;
        }
        ((Active*)get_instance(playerBase_instances))->set_layer(2-1);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(upperlevelcheck_206_instances));
            if (parent == NULL) goto pos_end_2812_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 24);
            pos_end_2812_6_1: ;
        }
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_layer(2-1);
        }
        dighole_207_instances.clear_selection();
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(2-1);
            ((Active*)*it)->move_back();
        }
    }
    event_2812_6_end: ;
}
void Frames::loop_laddergodowncheck_6()
{
    event_func_2884();
    event_func_2885();
    event_func_1719();
}
void Frames::event_func_2886()
{
    // event 4591_6
    {
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(11, str_done_447)) == (0))) goto event_4591_6_end;
        guardBase_instances.clear_selection();
        FrameObject * single_instance_4591_6_0; single_instance_4591_6_0 = pick_random(guardBase_instances);
        if (single_instance_4591_6_0 == NULL) goto event_4591_6_end;
        if (!((((Active*)single_instance_4591_6_0)->alterables->values.get(0)) > (1))) goto event_4591_6_end;
        if (!((((Active*)single_instance_4591_6_0)->alterables->values.get(7)) > (0))) goto event_4591_6_end;
        if (!((((Active*)single_instance_4591_6_0)->alterables->values.get(2)) == (0))) goto event_4591_6_end;
        ((Active*)((Active*)single_instance_4591_6_0))->alterables->values.set(23, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(370, str_foundx_1166));
        ((Active*)((Active*)single_instance_4591_6_0))->alterables->values.set(24, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(371, str_foundy_1167));
        ((Active*)((Active*)single_instance_4591_6_0))->alterables->flags.enable(60);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(11, str_done_447, 1);
            loop_summon_guard_running = false;
    
    }
    event_4591_6_end: ;
}
void Frames::loop_summon_guard_6()
{
    event_func_2886();
}
void Frames::event_func_2887()
{
    // event 2245_6
    {
        if (!(group_code_1 && group_code_misc_cameras_1)) goto event_2245_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_2245_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_2245_6_end;
        camera_237_instances.clear_selection();
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(712, str_currcam_1877)))) { it.deselect(); continue; }
        }
        if (!camera_237_instances.has_selection()) goto event_2245_6_end;
        media.play_id(SOUND_LOSE_8, 1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(372, str_spacex_1168, (((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16)*16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(373, str_spacey_1169, (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16)*16);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(32, str_heat_495, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(150, str_heat_add_723));
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
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
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(11, str_done_447, 0);
        {
            loop_summon_guard_running = true;
            loop_summon_guard_index = 0;
            while (true) {
                loop_summon_guard_6();
                if (!loop_summon_guard_running) break;
                loop_summon_guard_index++;
            }
        }
    }
    event_2245_6_end: ;
}
void Frames::event_func_2888()
{
    // event 2246_6
    {
        if (!(group_code_1 && group_code_misc_cameras_1)) goto event_2246_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_2246_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_2246_6_end;
        camera_237_instances.clear_selection();
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(712, str_currcam_1877)))) { it.deselect(); continue; }
        }
        if (!camera_237_instances.has_selection()) goto event_2246_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(343, str_iconx_1136, ((Active*)get_single(camera_237_instances, default_active_instance))->get_x()+8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(344, str_icony_1137, ((Active*)get_single(camera_237_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(345, str_iconz_1138, -2);
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
    event_2246_6_end: ;
}
void Frames::event_func_2889()
{
    // event 2247_6
    {
        if (!(group_code_1 && group_code_misc_cameras_1)) goto event_2247_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_2247_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) != (-1))) goto event_2247_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(32, str_heat_495, 3);
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
    event_2247_6_end: ;
}
void Frames::loop_cam_spotted_6()
{
    event_func_2887();
    event_func_2888();
    event_func_2889();
}
void Frames::event_func_2890()
{
    // event 327_6
    {
        if (!(group_load_map_from_file_1)) goto event_327_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3))) == (1))) goto event_327_6_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))+1), (string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))+1), 2)) == (0))) goto event_327_6_end;
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(1, (string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))+1), (string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))+1), 2);
        }
    }
    event_327_6_end: ;
}
void Frames::event_func_2891()
{
    // event 329_6
    {
        if (!(group_load_map_from_file_1)) goto event_329_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3))) == (1))) goto event_329_6_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))), (string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))), 2)) == (0))) goto event_329_6_end;
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(1, (string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))), (string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))), 2);
        }
    }
    event_329_6_end: ;
}
void Frames::loop_door_shadow_6()
{
    event_func_2890();
    event_func_2890();
    event_func_2891();
}
void Frames::event_func_2892()
{
    // event 228_6
    {
        if (!(group_load_map_from_file_1)) goto event_228_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(713, str_rndx_1878, (string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16)+(randrange_event(2)*16));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(714, str_rndy_1879, (string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16)+(randrange_event(2)*16));
        mine_414_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_mine_414(0, 0), 0);
            mine_414_instances.add_back();
        }
        for (ObjectIterator it(mine_414_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(713, str_rndx_1878)+8);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(714, str_rndy_1879)+8);
        }
        soil_173_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_soil_173(0, 0), 0);
            soil_173_instances.add_back();
        }
        for (ObjectIterator it(soil_173_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(713, str_rndx_1878));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(714, str_rndy_1879));
            ((Active*)*it)->paste(0);
            ((Active*)*it)->destroy();
        }
    }
    event_228_6_end: ;
}
void Frames::loop_make_mines_6()
{
    event_func_2892();
}
void Frames::event_func_2893()
{
    // event 157_6
    {
        if (!(group_load_map_from_file_1)) goto event_157_6_end;
        if (!((global_values->get(18)) != (2))) goto event_157_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_objects_1880, number_to_string(loop_load_map_objects_index+1), empty_string), str_x_437);
    }
    event_157_6_end: ;
}
void Frames::event_func_2894()
{
    // event 158_6
    {
        if (!(group_load_map_from_file_1)) goto event_158_6_end;
        if (!((global_values->get(18)) == (2))) goto event_158_6_end;
        if (!((((INI*)get_instance(newmapini_468_instances))->get_string(str_objects_1880, number_to_string(loop_load_map_objects_index+1))) == (empty_string))) goto event_158_6_end;
            loop_load_map_objects_running = false;
    
    }
    event_158_6_end: ;
}
void Frames::event_func_2895()
{
    // event 159_6
    {
        if (!(group_load_map_from_file_1)) goto event_159_6_end;
        if (!((global_values->get(18)) == (2))) goto event_159_6_end;
        if (!((((INI*)get_instance(newmapini_468_instances))->get_string(str_objects_1880, number_to_string(loop_load_map_objects_index+1))) != (empty_string))) goto event_159_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(newmapini_468_instances))->get_string(str_objects_1880, number_to_string(loop_load_map_objects_index+1)), str_x_437);
    }
    event_159_6_end: ;
}
void Frames::event_func_2896()
{
    // event 160_6
    {
        if (!(group_load_map_from_file_1)) goto event_160_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (14))) goto event_160_6_end;
        guardpostshower_254_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guardpostshower_254(0, 0), 1);
            guardpostshower_254_instances.add_back();
        }
        for (ObjectIterator it(guardpostshower_254_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_160_6_end: ;
}
void Frames::event_func_2897()
{
    // event 161_6
    {
        if (!(group_load_map_from_file_1)) goto event_161_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (16))) goto event_161_6_end;
        waypointinmaterollcall2_310_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_waypointinmaterollcall2_310(0, 0), 1);
            waypointinmaterollcall2_310_instances.add_back();
        }
        for (ObjectIterator it(waypointinmaterollcall2_310_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_161_6_end: ;
}
void Frames::event_func_2898()
{
    // event 162_6
    {
        if (!(group_load_map_from_file_1)) goto event_162_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (17))) goto event_162_6_end;
        waypointrollcall2_189_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_waypointrollcall2_189(0, 0), 1);
            waypointrollcall2_189_instances.add_back();
        }
        for (ObjectIterator it(waypointrollcall2_189_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_162_6_end: ;
}
void Frames::event_func_2899()
{
    // event 163_6
    {
        if (!(group_load_map_from_file_1)) goto event_163_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (18))) goto event_163_6_end;
        waypointinmate2_311_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_waypointinmate2_311(0, 0), 1);
            waypointinmate2_311_instances.add_back();
        }
        for (ObjectIterator it(waypointinmate2_311_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_163_6_end: ;
}
void Frames::event_func_2900()
{
    // event 164_6
    {
        if (!(group_load_map_from_file_1)) goto event_164_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (19))) goto event_164_6_end;
        waypointguard2_315_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_waypointguard2_315(0, 0), 1);
            waypointguard2_315_instances.add_back();
        }
        for (ObjectIterator it(waypointguard2_315_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_164_6_end: ;
}
void Frames::event_func_2901()
{
    // event 165_6
    {
        if (!(group_load_map_from_file_1)) goto event_165_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (21))) goto event_165_6_end;
        waypointinmateshower2_309_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_waypointinmateshower2_309(0, 0), 1);
            waypointinmateshower2_309_instances.add_back();
        }
        for (ObjectIterator it(waypointinmateshower2_309_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        shower_183_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_shower_183(0, 0), 1);
            shower_183_instances.add_back();
        }
        for (ObjectIterator it(shower_183_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_165_6_end: ;
}
void Frames::event_func_2902()
{
    // event 166_6
    {
        if (!(group_load_map_from_file_1)) goto event_166_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (22))) goto event_166_6_end;
        waypointcanteenguard_181_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_waypointcanteenguard_181(0, 0), 1);
            waypointcanteenguard_181_instances.add_back();
        }
        for (ObjectIterator it(waypointcanteenguard_181_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_166_6_end: ;
}
void Frames::event_func_2903()
{
    // event 167_6
    {
        if (!(group_load_map_from_file_1)) goto event_167_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (23))) goto event_167_6_end;
        waypointcanteenguard3_221_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_waypointcanteenguard3_221(0, 0), 1);
            waypointcanteenguard3_221_instances.add_back();
        }
        for (ObjectIterator it(waypointcanteenguard3_221_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_167_6_end: ;
}
void Frames::event_func_2904()
{
    // event 168_6
    {
        if (!(group_load_map_from_file_1)) goto event_168_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (39))) goto event_168_6_end;
        waypointguardgym_182_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_waypointguardgym_182(0, 0), 1);
            waypointguardgym_182_instances.add_back();
        }
        for (ObjectIterator it(waypointguardgym_182_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_168_6_end: ;
}
void Frames::event_func_2905()
{
    // event 169_6
    {
        if (!(group_load_map_from_file_1)) goto event_169_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (57))) goto event_169_6_end;
        towerguard_342_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_towerguard_342(0, 0), 1);
            towerguard_342_instances.add_back();
        }
        for (ObjectIterator it(towerguard_342_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16)+8);
            ((Active*)*it)->set_y((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16)+8);
            ((Active*)*it)->alterables->values.set(2, 11+randrange_event(4));
            ((Active*)*it)->alterables->strings.set(0, str_tower_guard_1881);
            ((Active*)*it)->alterables->values.set(7, 30+randrange_event(30));
            ((Active*)*it)->alterables->values.set(8, 60+randrange_event(40));
            ((Active*)*it)->alterables->values.set(9, 40+randrange_event(60));
            ((Active*)*it)->alterables->values.set(5, 40+randrange_event(60));
            ((Active*)*it)->alterables->values.set(12, 20+randrange_event(60));
        }
    }
    event_169_6_end: ;
}
void Frames::event_func_2906()
{
    // event 170_6
    {
        if (!(group_load_map_from_file_1)) goto event_170_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (60))) goto event_170_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_170_6_end;
        sssobjects_502_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_sssobjects_502(0, 0), 1);
            sssobjects_502_instances.add_back();
        }
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_170_6_end: ;
}
void Frames::event_func_2907()
{
    // event 171_6
    {
        if (!(group_load_map_from_file_1)) goto event_171_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (58))) goto event_171_6_end;
        waypointtowerent_341_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_waypointtowerent_341(0, 0), 1);
            waypointtowerent_341_instances.add_back();
        }
        for (ObjectIterator it(waypointtowerent_341_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_171_6_end: ;
}
void Frames::event_func_2908()
{
    // event 172_6
    {
        if (!(group_load_map_from_file_1)) goto event_172_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (75))) goto event_172_6_end;
        doormaster_387_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_doormaster_387(0, 0), 1);
            doormaster_387_instances.add_back();
        }
        for (ObjectIterator it(doormaster_387_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
        {
            loop_door_shadow_running = true;
            int times = int(1);
            loop_door_shadow_index = 0;
            while (loop_door_shadow_index < times) {
                loop_door_shadow_6();
                if (!loop_door_shadow_running) break;
                loop_door_shadow_index++;
            }
        }
    }
    event_172_6_end: ;
}
void Frames::event_func_2909()
{
    // event 173_6
    {
        if (!(group_load_map_from_file_1)) goto event_173_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (109))) goto event_173_6_end;
        doornormal_465_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_doornormal_465(0, 0), 1);
            doornormal_465_instances.add_back();
        }
        for (ObjectIterator it(doornormal_465_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
        {
            loop_door_shadow_running = true;
            int times = int(1);
            loop_door_shadow_index = 0;
            while (loop_door_shadow_index < times) {
                loop_door_shadow_6();
                if (!loop_door_shadow_running) break;
                loop_door_shadow_index++;
            }
        }
    }
    event_173_6_end: ;
}
void Frames::event_func_2910()
{
    // event 174_6
    {
        if (!(group_load_map_from_file_1)) goto event_174_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (24))) goto event_174_6_end;
        doorcell_174_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_doorcell_174(0, 0), 1);
            doorcell_174_instances.add_back();
        }
        for (ObjectIterator it(doorcell_174_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        {
            loop_door_shadow_running = true;
            int times = int(1);
            loop_door_shadow_index = 0;
            while (loop_door_shadow_index < times) {
                loop_door_shadow_6();
                if (!loop_door_shadow_running) break;
                loop_door_shadow_index++;
            }
        }
    }
    event_174_6_end: ;
}
void Frames::event_func_2911()
{
    // event 175_6
    {
        if (!(group_load_map_from_file_1)) goto event_175_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (25))) goto event_175_6_end;
        dooroutside_262_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dooroutside_262(0, 0), 1);
            dooroutside_262_instances.add_back();
        }
        for (ObjectIterator it(dooroutside_262_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        {
            loop_door_shadow_running = true;
            int times = int(1);
            loop_door_shadow_index = 0;
            while (loop_door_shadow_index < times) {
                loop_door_shadow_6();
                if (!loop_door_shadow_running) break;
                loop_door_shadow_index++;
            }
        }
    }
    event_175_6_end: ;
}
void Frames::event_func_2912()
{
    // event 176_6
    {
        if (!(group_load_map_from_file_1)) goto event_176_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (26))) goto event_176_6_end;
        doorutility_259_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_doorutility_259(0, 0), 1);
            doorutility_259_instances.add_back();
        }
        for (ObjectIterator it(doorutility_259_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        {
            loop_door_shadow_running = true;
            int times = int(1);
            loop_door_shadow_index = 0;
            while (loop_door_shadow_index < times) {
                loop_door_shadow_6();
                if (!loop_door_shadow_running) break;
                loop_door_shadow_index++;
            }
        }
    }
    event_176_6_end: ;
}
void Frames::event_func_2913()
{
    // event 177_6
    {
        if (!(group_load_map_from_file_1)) goto event_177_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (103))) goto event_177_6_end;
        doorutilityvents_457_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_doorutilityvents_457(0, 0), 3);
            doorutilityvents_457_instances.add_back();
        }
        for (ObjectIterator it(doorutilityvents_457_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_177_6_end: ;
}
void Frames::event_func_2914()
{
    // event 178_6
    {
        if (!(group_load_map_from_file_1)) goto event_178_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (27))) goto event_178_6_end;
        doorkitchen_211_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_doorkitchen_211(0, 0), 1);
            doorkitchen_211_instances.add_back();
        }
        for (ObjectIterator it(doorkitchen_211_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        {
            loop_door_shadow_running = true;
            int times = int(1);
            loop_door_shadow_index = 0;
            while (loop_door_shadow_index < times) {
                loop_door_shadow_6();
                if (!loop_door_shadow_running) break;
                loop_door_shadow_index++;
            }
        }
    }
    event_178_6_end: ;
}
void Frames::event_func_2915()
{
    // event 179_6
    {
        if (!(group_load_map_from_file_1)) goto event_179_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (28))) goto event_179_6_end;
        doorlaundry_276_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_doorlaundry_276(0, 0), 1);
            doorlaundry_276_instances.add_back();
        }
        for (ObjectIterator it(doorlaundry_276_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        {
            loop_door_shadow_running = true;
            int times = int(1);
            loop_door_shadow_index = 0;
            while (loop_door_shadow_index < times) {
                loop_door_shadow_6();
                if (!loop_door_shadow_running) break;
                loop_door_shadow_index++;
            }
        }
    }
    event_179_6_end: ;
}
void Frames::event_func_2916()
{
    // event 180_6
    {
        if (!(group_load_map_from_file_1)) goto event_180_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (29))) goto event_180_6_end;
        doorjanitor_271_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_doorjanitor_271(0, 0), 1);
            doorjanitor_271_instances.add_back();
        }
        for (ObjectIterator it(doorjanitor_271_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        {
            loop_door_shadow_running = true;
            int times = int(1);
            loop_door_shadow_index = 0;
            while (loop_door_shadow_index < times) {
                loop_door_shadow_6();
                if (!loop_door_shadow_running) break;
                loop_door_shadow_index++;
            }
        }
    }
    event_180_6_end: ;
}
void Frames::event_func_2917()
{
    // event 181_6
    {
        if (!(group_load_map_from_file_1)) goto event_181_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (30))) goto event_181_6_end;
        doorstaff_212_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_doorstaff_212(0, 0), 1);
            doorstaff_212_instances.add_back();
        }
        for (ObjectIterator it(doorstaff_212_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        {
            loop_door_shadow_running = true;
            int times = int(1);
            loop_door_shadow_index = 0;
            while (loop_door_shadow_index < times) {
                loop_door_shadow_6();
                if (!loop_door_shadow_running) break;
                loop_door_shadow_index++;
            }
        }
    }
    event_181_6_end: ;
}
void Frames::event_func_2918()
{
    // event 182_6
    {
        if (!(group_load_map_from_file_1)) goto event_182_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (37))) goto event_182_6_end;
        doorlibrary_272_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_doorlibrary_272(0, 0), 1);
            doorlibrary_272_instances.add_back();
        }
        for (ObjectIterator it(doorlibrary_272_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        {
            loop_door_shadow_running = true;
            int times = int(1);
            loop_door_shadow_index = 0;
            while (loop_door_shadow_index < times) {
                loop_door_shadow_6();
                if (!loop_door_shadow_running) break;
                loop_door_shadow_index++;
            }
        }
    }
    event_182_6_end: ;
}
void Frames::event_func_2919()
{
    // event 183_6
    {
        if (!(group_load_map_from_file_1)) goto event_183_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (38))) goto event_183_6_end;
        doorwoodshop_268_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_doorwoodshop_268(0, 0), 1);
            doorwoodshop_268_instances.add_back();
        }
        for (ObjectIterator it(doorwoodshop_268_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        {
            loop_door_shadow_running = true;
            int times = int(1);
            loop_door_shadow_index = 0;
            while (loop_door_shadow_index < times) {
                loop_door_shadow_6();
                if (!loop_door_shadow_running) break;
                loop_door_shadow_index++;
            }
        }
    }
    event_183_6_end: ;
}
void Frames::event_func_2920()
{
    // event 184_6
    {
        if (!(group_load_map_from_file_1)) goto event_184_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (31))) goto event_184_6_end;
        doormetalshop_328_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_doormetalshop_328(0, 0), 1);
            doormetalshop_328_instances.add_back();
        }
        for (ObjectIterator it(doormetalshop_328_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        {
            loop_door_shadow_running = true;
            int times = int(1);
            loop_door_shadow_index = 0;
            while (loop_door_shadow_index < times) {
                loop_door_shadow_6();
                if (!loop_door_shadow_running) break;
                loop_door_shadow_index++;
            }
        }
    }
    event_184_6_end: ;
}
void Frames::event_func_2921()
{
    // event 185_6
    {
        if (!(group_load_map_from_file_1)) goto event_185_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (102))) goto event_185_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_185_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_185_6_end;
        chinupbar_430_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_chinupbar_430(0, 0), 1);
            chinupbar_430_instances.add_back();
        }
        for (ObjectIterator it(chinupbar_430_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_185_6_end: ;
}
void Frames::event_func_2922()
{
    // event 186_6
    {
        if (!(group_load_map_from_file_1)) goto event_186_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (102))) goto event_186_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_186_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(0, 0), 1);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->paste(0);
            ((Active*)*it)->destroy();
        }
    }
    event_186_6_end: ;
}
void Frames::event_func_2923()
{
    // event 187_6
    {
        if (!(group_load_map_from_file_1)) goto event_187_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (102))) goto event_187_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_187_6_end;
        sssobjects_502_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_sssobjects_502(0, 0), 1);
            sssobjects_502_instances.add_back();
        }
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_187_6_end: ;
}
void Frames::event_func_2924()
{
    // event 188_6
    {
        if (!(group_load_map_from_file_1)) goto event_188_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (1))) goto event_188_6_end;
        if (!((global_values->get(18)) == (0))) goto event_188_6_end;
        inmateBed_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBed(0, 0), 1);
            inmateBed_instances.add_back();
        }
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
            ((Active*)*it)->set_direction(24);
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_188_6_end: ;
}
void Frames::event_func_2925()
{
    // event 189_6
    {
        if (!(group_load_map_from_file_1)) goto event_189_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (1))) goto event_189_6_end;
        if (!((global_values->get(18)) != (0))) goto event_189_6_end;
        inmateBed_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBed(0, 0), 1);
            inmateBed_instances.add_back();
        }
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
            ((Active*)*it)->set_direction(24);
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_189_6_end: ;
}
void Frames::event_func_2926()
{
    // event 190_6
    {
        if (!(group_load_map_from_file_1)) goto event_190_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (110))) goto event_190_6_end;
        if (!((global_values->get(18)) != (0))) goto event_190_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_190_6_end;
        inmateBed_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBed(0, 0), 1);
            inmateBed_instances.add_back();
        }
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
            ((Active*)*it)->set_direction(0);
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_190_6_end: ;
}
void Frames::event_func_2927()
{
    // event 191_6
    {
        if (!(group_load_map_from_file_1)) goto event_191_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (110))) goto event_191_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_191_6_end;
        sssobjects_502_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_sssobjects_502(0, 0), 1);
            sssobjects_502_instances.add_back();
        }
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_191_6_end: ;
}
void Frames::event_func_2928()
{
    // event 192_6
    {
        if (!(group_load_map_from_file_1)) goto event_192_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (2))) goto event_192_6_end;
        canteenchair_312_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_canteenchair_312(0, 0), 1);
            canteenchair_312_instances.add_back();
        }
        for (ObjectIterator it(canteenchair_312_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_192_6_end: ;
}
void Frames::event_func_2929()
{
    // event 193_6
    {
        if (!(group_load_map_from_file_1)) goto event_193_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (3))) goto event_193_6_end;
        if (!((global_values->get(18)) < (2))) goto event_193_6_end;
        if (!((global_strings->get(0)) != (str_tol_134))) goto event_193_6_end;
        toilet2_307_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_toilet2_307(0, 0), 1);
            toilet2_307_instances.add_back();
        }
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_193_6_end: ;
}
void Frames::event_func_2930()
{
    // event 194_6
    {
        if (!(group_load_map_from_file_1)) goto event_194_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (3))) goto event_194_6_end;
        if (!((global_values->get(18)) == (1))) goto event_194_6_end;
        if (!((global_strings->get(0)) == (str_tol_134))) goto event_194_6_end;
        toilet2_307_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_toilet2_307(0, 0), 1);
            toilet2_307_instances.add_back();
        }
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->set_direction(0);
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_194_6_end: ;
}
void Frames::event_func_2931()
{
    // event 195_6
    {
        if (!(group_load_map_from_file_1)) goto event_195_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (3))) goto event_195_6_end;
        if (!((global_values->get(18)) == (2))) goto event_195_6_end;
        toilet2_307_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_toilet2_307(0, 0), 1);
            toilet2_307_instances.add_back();
        }
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(4, 1);
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_195_6_end: ;
}
void Frames::event_func_2932()
{
    // event 196_6
    {
        if (!(group_load_map_from_file_1)) goto event_196_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (105))) goto event_196_6_end;
        if (!((global_values->get(18)) == (1))) goto event_196_6_end;
        if (!((global_strings->get(0)) == (str_escapeteam_138))) goto event_196_6_end;
        toilet2_307_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_toilet2_307(0, 0), 1);
            toilet2_307_instances.add_back();
        }
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->set_direction(16);
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_196_6_end: ;
}
void Frames::event_func_2933()
{
    // event 197_6
    {
        if (!(group_load_map_from_file_1)) goto event_197_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (105))) goto event_197_6_end;
        if (!((global_values->get(18)) == (1))) goto event_197_6_end;
        if (!((global_strings->get(0)) == (str_ccl_130))) goto event_197_6_end;
        toilet2_307_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_toilet2_307(0, 0), 1);
            toilet2_307_instances.add_back();
        }
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->set_direction(16);
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_197_6_end: ;
}
void Frames::event_func_2934()
{
    // event 198_6
    {
        if (!(group_load_map_from_file_1)) goto event_198_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (105))) goto event_198_6_end;
        if (!((global_values->get(18)) == (1))) goto event_198_6_end;
        if (!((global_strings->get(0)) == (str_ss_136))) goto event_198_6_end;
        toilet2_307_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_toilet2_307(0, 0), 1);
            toilet2_307_instances.add_back();
        }
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->set_direction(16);
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_198_6_end: ;
}
void Frames::event_func_2935()
{
    // event 199_6
    {
        if (!(group_load_map_from_file_1)) goto event_199_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (105))) goto event_199_6_end;
        if (!((global_values->get(18)) == (1))) goto event_199_6_end;
        if (!((global_strings->get(0)) == (str_pcpen_135))) goto event_199_6_end;
        toilet2_307_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_toilet2_307(0, 0), 1);
            toilet2_307_instances.add_back();
        }
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->set_direction(16);
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_199_6_end: ;
}
void Frames::event_func_2936()
{
    // event 200_6
    {
        if (!(group_load_map_from_file_1)) goto event_200_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (105))) goto event_200_6_end;
        if (!((global_values->get(18)) == (1))) goto event_200_6_end;
        if (!((global_strings->get(0)) == (str_tol_134))) goto event_200_6_end;
        toilet2_307_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_toilet2_307(0, 0), 1);
            toilet2_307_instances.add_back();
        }
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->set_direction(16);
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_200_6_end: ;
}
void Frames::event_func_2937()
{
    // event 201_6
    {
        if (!(group_load_map_from_file_1)) goto event_201_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (105))) goto event_201_6_end;
        if (!((global_values->get(18)) == (1))) goto event_201_6_end;
        if (!((global_strings->get(0)) == (str_bc_133))) goto event_201_6_end;
        toilet2_307_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_toilet2_307(0, 0), 1);
            toilet2_307_instances.add_back();
        }
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->set_direction(16);
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_201_6_end: ;
}
void Frames::event_func_2938()
{
    // event 202_6
    {
        if (!(group_load_map_from_file_1)) goto event_202_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (105))) goto event_202_6_end;
        if (!((global_values->get(18)) == (2))) goto event_202_6_end;
        toilet2_307_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_toilet2_307(0, 0), 1);
            toilet2_307_instances.add_back();
        }
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(4, 1);
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_202_6_end: ;
}
void Frames::event_func_2939()
{
    // event 203_6
    {
        if (!(group_load_map_from_file_1)) goto event_203_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (106))) goto event_203_6_end;
        if (!((global_values->get(18)) == (2))) goto event_203_6_end;
        toilet2_307_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_toilet2_307(0, 0), 1);
            toilet2_307_instances.add_back();
        }
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(4, 1);
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
    }
    event_203_6_end: ;
}
void Frames::event_func_2940()
{
    // event 204_6
    {
        if (!(group_load_map_from_file_1)) goto event_204_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (106))) goto event_204_6_end;
        if (!((global_values->get(18)) == (1))) goto event_204_6_end;
        if (!((global_strings->get(0)) == (str_tol_134))) goto event_204_6_end;
        toilet2_307_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_toilet2_307(0, 0), 1);
            toilet2_307_instances.add_back();
        }
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(4, 1);
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
    }
    event_204_6_end: ;
}
void Frames::event_func_2941()
{
    // event 205_6
    {
        if (!(group_load_map_from_file_1)) goto event_205_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (4))) goto event_205_6_end;
        oven2_314_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_oven2_314(0, 0), 1);
            oven2_314_instances.add_back();
        }
        for (ObjectIterator it(oven2_314_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_205_6_end: ;
}
