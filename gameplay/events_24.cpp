#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_1819 processes event block(s) 1889_6. Actions/conditions:
//        1889_6: sets charZ to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(25); sets found to 0; adds a usespot 208 instance; plus 1
//        more actions.
void Frames::event_func_1819()
{
    // event 1889_6 : sets charZ to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25); sets found to 0; adds a usespot 208 instance; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1)) goto event_1889_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(121, str_pos_kitchen_683)) == (loop_inmates_free_period_index+1))) goto event_1889_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(468, str_npc_kitchen_stage_1338)) == (1))) goto event_1889_6_end;
        lookinmateflag60_394_instances.clear_selection();
        if (!check_not_overlap(lookinmateflag60_394_instances, containerkitchen_229_instances)) goto event_1889_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1889_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(95, str_charz_607, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(369, str_found_1165, 0);
        usespot_208_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_usespot_208(0, 0), 1);
            usespot_208_instances.add_back();
        }
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(9, str_kitchen_12);
        }
        {
            loop_npc_kitchen_space_running = true;
            int times = int(1);
            loop_npc_kitchen_space_index = 0;
            while (loop_npc_kitchen_space_index < times) {
                loop_npc_kitchen_space_6();
                if (!loop_npc_kitchen_space_running) break;
                loop_npc_kitchen_space_index++;
            }
        }
    }
    event_1889_6_end: ;
}
// Function purpose: generated callback event_func_1820 processes event block(s) 1895_6. Actions/conditions:
//        1895_6: sets NPC_Kitchen_Stage to 3.
void Frames::event_func_1820()
{
    // event 1895_6 : sets NPC_Kitchen_Stage to 3
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1)) goto event_1895_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(121, str_pos_kitchen_683)) == (loop_inmates_free_period_index+1))) goto event_1895_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(468, str_npc_kitchen_stage_1338)) == (2))) goto event_1895_6_end;
        lookinmateflag60_394_instances.clear_selection();
        oven2_314_instances.clear_selection();
        if (!check_overlap(lookinmateflag60_394_instances, oven2_314_instances)) goto event_1895_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1895_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(468, str_npc_kitchen_stage_1338, 3);
    }
    event_1895_6_end: ;
}
// Function purpose: generated callback event_func_1821 processes event block(s) 1896_6. Actions/conditions:
//        1896_6: sets the selected object's numeric value to ((Active*)single_instance_1896_6_0)->get_x()+8; sets the
//        selected object's numeric value to ((Active*)single_instance_1896_6_0)->get_y()+24; enables flag 60 (guard
//        sight or target-tracking state) on the selected object.
void Frames::event_func_1821()
{
    // event 1896_6 : sets the selected object's numeric value to ((Active*)single_instance_1896_6_0)->get_x()+8; sets the selected object's numeric value to ((Active*)single_instance_1896_6_0)->get_y()+24; enables flag 60 (guard sight or target-tracking state) on the selected object
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1)) goto event_1896_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(121, str_pos_kitchen_683)) == (loop_inmates_free_period_index+1))) goto event_1896_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(468, str_npc_kitchen_stage_1338)) == (2))) goto event_1896_6_end;
        lookinmateflag60_394_instances.clear_selection();
        if (!check_not_overlap(lookinmateflag60_394_instances, oven2_314_instances)) goto event_1896_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1896_6_end;
        oven2_314_instances.clear_selection();
        FrameObject * single_instance_1896_6_0; single_instance_1896_6_0 = pick_random(oven2_314_instances);
        if (single_instance_1896_6_0 == NULL) goto event_1896_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)single_instance_1896_6_0)->get_x()+8);
            ((Active*)*it)->alterables->values.set(24, ((Active*)single_instance_1896_6_0)->get_y()+24);
            ((Active*)*it)->alterables->flags.enable(60);
        }
    }
    event_1896_6_end: ;
}
// Function purpose: generated callback event_func_1822 processes event block(s) 1897_6. Actions/conditions:
//        1897_6: increments JQ_Kitchen by 1; sets NPC_Kitchen_Stage to 1.
void Frames::event_func_1822()
{
    // event 1897_6 : increments JQ_Kitchen by 1; sets NPC_Kitchen_Stage to 1
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1)) goto event_1897_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(121, str_pos_kitchen_683)) == (loop_inmates_free_period_index+1))) goto event_1897_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(468, str_npc_kitchen_stage_1338)) == (3))) goto event_1897_6_end;
        lookinmateflag60_394_instances.clear_selection();
        canteenserving_277_instances.clear_selection();
        if (!check_overlap(lookinmateflag60_394_instances, canteenserving_277_instances)) goto event_1897_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1897_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(122, str_jq_kitchen_684, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(468, str_npc_kitchen_stage_1338, 1);
    }
    event_1897_6_end: ;
}
// Function purpose: generated callback event_func_1823 processes event block(s) 1898_6. Actions/conditions:
//        1898_6: sets the selected object's numeric value to ((Active*)single_instance_1898_6_0)->get_x()+8; sets the
//        selected object's numeric value to ((Active*)single_instance_1898_6_0)->get_y()+24; enables flag 60 (guard
//        sight or target-tracking state) on the selected object.
void Frames::event_func_1823()
{
    // event 1898_6 : sets the selected object's numeric value to ((Active*)single_instance_1898_6_0)->get_x()+8; sets the selected object's numeric value to ((Active*)single_instance_1898_6_0)->get_y()+24; enables flag 60 (guard sight or target-tracking state) on the selected object
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1)) goto event_1898_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(121, str_pos_kitchen_683)) == (loop_inmates_free_period_index+1))) goto event_1898_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(468, str_npc_kitchen_stage_1338)) == (3))) goto event_1898_6_end;
        lookinmateflag60_394_instances.clear_selection();
        if (!check_not_overlap(lookinmateflag60_394_instances, canteenserving_277_instances)) goto event_1898_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1898_6_end;
        canteenserving_277_instances.clear_selection();
        FrameObject * single_instance_1898_6_0; single_instance_1898_6_0 = pick_random(canteenserving_277_instances);
        if (single_instance_1898_6_0 == NULL) goto event_1898_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)single_instance_1898_6_0)->get_x()+8);
            ((Active*)*it)->alterables->values.set(24, ((Active*)single_instance_1898_6_0)->get_y()+24);
            ((Active*)*it)->alterables->flags.enable(60);
        }
    }
    event_1898_6_end: ;
}
// Function purpose: generated callback event_func_1824 processes event block(s) 1899_6. Actions/conditions:
//        1899_6: sets the object position in the world.
void Frames::event_func_1824()
{
    // event 1899_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1)) goto event_1899_6_end;
        {
            ((Active*)get_instance(lookinmateflag60_394_instances))->set_global_position(-100, -100);
            pos_end_1899_6_0: ;
        }
    }
    event_1899_6_end: ;
}
// Function purpose: generated callback event_func_1825 processes event block(s) 1901_6. Actions/conditions:
//        1901_6: sets the object position in the world; sets the object's animation to 5.
void Frames::event_func_1825()
{
    // event 1901_6 : sets the object position in the world; sets the object's animation to 5
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1)) goto event_1901_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(125, str_pos_woodshop_687)) == (loop_inmates_free_period_index+1))) goto event_1901_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1901_6_end;
        {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances));
            if (parent == NULL) goto pos_end_1901_6_0;
            ((Active*)get_instance(lookinmateflag60_394_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1901_6_0: ;
        }
        ((Active*)get_instance(lookinmateflag60_394_instances))->force_animation(5);
    }
    event_1901_6_end: ;
}
// Function purpose: generated callback event_func_1826 processes event block(s) 1902_6. Actions/conditions:
//        1902_6: sets NPC_Woodshop_Stage to 2.
void Frames::event_func_1826()
{
    // event 1902_6 : sets NPC_Woodshop_Stage to 2
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1)) goto event_1902_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(125, str_pos_woodshop_687)) == (loop_inmates_free_period_index+1))) goto event_1902_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(469, str_npc_woodshop_stage_1339)) == (1))) goto event_1902_6_end;
        lookinmateflag60_394_instances.clear_selection();
        containertimber_267_instances.clear_selection();
        if (!check_overlap(lookinmateflag60_394_instances, containertimber_267_instances)) goto event_1902_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1902_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(469, str_npc_woodshop_stage_1339, 2);
    }
    event_1902_6_end: ;
}
// Function purpose: generated callback event_func_1827 processes event block(s) 1903_6. Actions/conditions:
//        1903_6: sets charZ to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(25); sets found to 0.
void Frames::event_func_1827()
{
    // event 1903_6 : sets charZ to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25); sets found to 0
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1)) goto event_1903_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(125, str_pos_woodshop_687)) == (loop_inmates_free_period_index+1))) goto event_1903_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(469, str_npc_woodshop_stage_1339)) == (1))) goto event_1903_6_end;
        lookinmateflag60_394_instances.clear_selection();
        if (!check_not_overlap(lookinmateflag60_394_instances, containertimber_267_instances)) goto event_1903_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1903_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(95, str_charz_607, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(369, str_found_1165, 0);
        {
            loop_npc_woodshop_space_running = true;
            int times = int(1);
            loop_npc_woodshop_space_index = 0;
            while (loop_npc_woodshop_space_index < times) {
                loop_npc_woodshop_space_6();
                if (!loop_npc_woodshop_space_running) break;
                loop_npc_woodshop_space_index++;
            }
        }
    }
    event_1903_6_end: ;
}
// Function purpose: generated callback event_func_1828 processes event block(s) 1906_6. Actions/conditions:
//        1906_6: increments JQ_Woodshop by 1; sets NPC_Woodshop_Stage to 1.
void Frames::event_func_1828()
{
    // event 1906_6 : increments JQ_Woodshop by 1; sets NPC_Woodshop_Stage to 1
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1)) goto event_1906_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(125, str_pos_woodshop_687)) == (loop_inmates_free_period_index+1))) goto event_1906_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(469, str_npc_woodshop_stage_1339)) == (2))) goto event_1906_6_end;
        lookinmateflag60_394_instances.clear_selection();
        containertimber2_325_instances.clear_selection();
        if (!check_overlap(lookinmateflag60_394_instances, containertimber2_325_instances)) goto event_1906_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1906_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(126, str_jq_woodshop_688, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(469, str_npc_woodshop_stage_1339, 1);
    }
    event_1906_6_end: ;
}
// Function purpose: generated callback event_func_1829 processes event block(s) 1907_6. Actions/conditions:
//        1907_6: sets charZ to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(25); sets found to 0.
void Frames::event_func_1829()
{
    // event 1907_6 : sets charZ to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25); sets found to 0
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1)) goto event_1907_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(125, str_pos_woodshop_687)) == (loop_inmates_free_period_index+1))) goto event_1907_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(469, str_npc_woodshop_stage_1339)) == (2))) goto event_1907_6_end;
        lookinmateflag60_394_instances.clear_selection();
        if (!check_not_overlap(lookinmateflag60_394_instances, containertimber2_325_instances)) goto event_1907_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1907_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(95, str_charz_607, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(369, str_found_1165, 0);
        {
            loop_npc_woodshop_space_done_running = true;
            int times = int(1);
            loop_npc_woodshop_space_done_index = 0;
            while (loop_npc_woodshop_space_done_index < times) {
                loop_npc_woodshop_space_done_6();
                if (!loop_npc_woodshop_space_done_running) break;
                loop_npc_woodshop_space_done_index++;
            }
        }
    }
    event_1907_6_end: ;
}
// Function purpose: generated callback event_func_1830 processes event block(s) 1910_6. Actions/conditions:
//        1910_6: sets the object position in the world.
void Frames::event_func_1830()
{
    // event 1910_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1)) goto event_1910_6_end;
        {
            ((Active*)get_instance(lookinmateflag60_394_instances))->set_global_position(-100, -100);
            pos_end_1910_6_0: ;
        }
    }
    event_1910_6_end: ;
}
// Function purpose: generated callback event_func_1831 processes event block(s) 1912_6. Actions/conditions:
//        1912_6: sets the object position in the world; sets the object's animation to 5.
void Frames::event_func_1831()
{
    // event 1912_6 : sets the object position in the world; sets the object's animation to 5
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1)) goto event_1912_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(123, str_pos_tailor_685)) == (loop_inmates_free_period_index+1))) goto event_1912_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1912_6_end;
        {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances));
            if (parent == NULL) goto pos_end_1912_6_0;
            ((Active*)get_instance(lookinmateflag60_394_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1912_6_0: ;
        }
        ((Active*)get_instance(lookinmateflag60_394_instances))->force_animation(5);
    }
    event_1912_6_end: ;
}
// Function purpose: generated callback event_func_1832 processes event block(s) 1913_6. Actions/conditions:
//        1913_6: sets NPC_Tailorshop_Stage to 2.
void Frames::event_func_1832()
{
    // event 1913_6 : sets NPC_Tailorshop_Stage to 2
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1)) goto event_1913_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(123, str_pos_tailor_685)) == (loop_inmates_free_period_index+1))) goto event_1913_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(470, str_npc_tailorshop_stage_1340)) == (1))) goto event_1913_6_end;
        lookinmateflag60_394_instances.clear_selection();
        containertailorout_395_instances.clear_selection();
        if (!check_overlap(lookinmateflag60_394_instances, containertailorout_395_instances)) goto event_1913_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1913_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(470, str_npc_tailorshop_stage_1340, 2);
    }
    event_1913_6_end: ;
}
// Function purpose: generated callback event_func_1833 processes event block(s) 1914_6. Actions/conditions:
//        1914_6: sets charZ to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(25); sets found to 0.
void Frames::event_func_1833()
{
    // event 1914_6 : sets charZ to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25); sets found to 0
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1)) goto event_1914_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(123, str_pos_tailor_685)) == (loop_inmates_free_period_index+1))) goto event_1914_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(470, str_npc_tailorshop_stage_1340)) == (1))) goto event_1914_6_end;
        lookinmateflag60_394_instances.clear_selection();
        if (!check_not_overlap(lookinmateflag60_394_instances, containertailorout_395_instances)) goto event_1914_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1914_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(95, str_charz_607, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(369, str_found_1165, 0);
        {
            loop_npc_tailorshop_space_running = true;
            int times = int(1);
            loop_npc_tailorshop_space_index = 0;
            while (loop_npc_tailorshop_space_index < times) {
                loop_npc_tailorshop_space_6();
                if (!loop_npc_tailorshop_space_running) break;
                loop_npc_tailorshop_space_index++;
            }
        }
    }
    event_1914_6_end: ;
}
// Function purpose: generated callback event_func_1834 processes event block(s) 1917_6. Actions/conditions:
//        1917_6: increments JQ_Tailor by 1; sets NPC_Tailorshop_Stage to 1.
void Frames::event_func_1834()
{
    // event 1917_6 : increments JQ_Tailor by 1; sets NPC_Tailorshop_Stage to 1
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1)) goto event_1917_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(123, str_pos_tailor_685)) == (loop_inmates_free_period_index+1))) goto event_1917_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(470, str_npc_tailorshop_stage_1340)) == (2))) goto event_1917_6_end;
        lookinmateflag60_394_instances.clear_selection();
        containertailorin_396_instances.clear_selection();
        if (!check_overlap(lookinmateflag60_394_instances, containertailorin_396_instances)) goto event_1917_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1917_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(124, str_jq_tailor_686, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(470, str_npc_tailorshop_stage_1340, 1);
    }
    event_1917_6_end: ;
}
// Function purpose: generated callback event_func_1835 processes event block(s) 1918_6. Actions/conditions:
//        1918_6: sets charZ to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(25); sets found to 0.
void Frames::event_func_1835()
{
    // event 1918_6 : sets charZ to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25); sets found to 0
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1)) goto event_1918_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(123, str_pos_tailor_685)) == (loop_inmates_free_period_index+1))) goto event_1918_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(470, str_npc_tailorshop_stage_1340)) == (2))) goto event_1918_6_end;
        lookinmateflag60_394_instances.clear_selection();
        if (!check_not_overlap(lookinmateflag60_394_instances, containertailorin_396_instances)) goto event_1918_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1918_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(95, str_charz_607, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(369, str_found_1165, 0);
        {
            loop_npc_tailorshop_space_done_running = true;
            int times = int(1);
            loop_npc_tailorshop_space_done_index = 0;
            while (loop_npc_tailorshop_space_done_index < times) {
                loop_npc_tailorshop_space_done_6();
                if (!loop_npc_tailorshop_space_done_running) break;
                loop_npc_tailorshop_space_done_index++;
            }
        }
    }
    event_1918_6_end: ;
}
// Function purpose: generated callback event_func_1836 processes event block(s) 1921_6. Actions/conditions:
//        1921_6: sets the object position in the world.
void Frames::event_func_1836()
{
    // event 1921_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1)) goto event_1921_6_end;
        {
            ((Active*)get_instance(lookinmateflag60_394_instances))->set_global_position(-100, -100);
            pos_end_1921_6_0: ;
        }
    }
    event_1921_6_end: ;
}
// Function purpose: generated callback event_func_1837 processes event block(s) 1923_6. Actions/conditions:
//        1923_6: sets the object position in the world; sets the object's animation to 5.
void Frames::event_func_1837()
{
    // event 1923_6 : sets the object position in the world; sets the object's animation to 5
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1)) goto event_1923_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(119, str_pos_deliveries_681)) == (loop_inmates_free_period_index+1))) goto event_1923_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1923_6_end;
        {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances));
            if (parent == NULL) goto pos_end_1923_6_0;
            ((Active*)get_instance(lookinmateflag60_394_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1923_6_0: ;
        }
        ((Active*)get_instance(lookinmateflag60_394_instances))->force_animation(5);
    }
    event_1923_6_end: ;
}
// Function purpose: generated callback event_func_1838 processes event block(s) 1924_6. Actions/conditions:
//        1924_6: sets NPC_Deliv_Stage to 2.
void Frames::event_func_1838()
{
    // event 1924_6 : sets NPC_Deliv_Stage to 2
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1)) goto event_1924_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(119, str_pos_deliveries_681)) == (loop_inmates_free_period_index+1))) goto event_1924_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(471, str_npc_deliv_stage_1341)) == (1))) goto event_1924_6_end;
        lookinmateflag60_394_instances.clear_selection();
        truck_388_instances.clear_selection();
        if (!check_overlap(lookinmateflag60_394_instances, truck_388_instances)) goto event_1924_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1924_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(471, str_npc_deliv_stage_1341, 2);
    }
    event_1924_6_end: ;
}
// Function purpose: generated callback event_func_1839 processes event block(s) 1925_6. Actions/conditions:
//        1925_6: sets the selected object's numeric value to ((Active*)get_instance(truck_388_instances,
//        it.current_index, default_active_instance))->get_box_index(2)-8; sets the selected object's numeric value to
//        ((Active*)get_instance(truck_388_instances, it.current_index, default_active_instance))->get_box_index(1)-8;
//        enables flag 60 (guard sight or target-tracking state) on the selected object.
void Frames::event_func_1839()
{
    // event 1925_6 : sets the selected object's numeric value to ((Active*)get_instance(truck_388_instances, it.current_index, default_active_instance))->get_box_index(2)-8; sets the selected object's numeric value to ((Active*)get_instance(truck_388_instances, it.current_index, default_active_instance))->get_box_index(1)-8; enables flag 60 (guard sight or target-tracking state) on the selected object
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1)) goto event_1925_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(119, str_pos_deliveries_681)) == (loop_inmates_free_period_index+1))) goto event_1925_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(471, str_npc_deliv_stage_1341)) == (1))) goto event_1925_6_end;
        lookinmateflag60_394_instances.clear_selection();
        if (!check_not_overlap(lookinmateflag60_394_instances, truck_388_instances)) goto event_1925_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1925_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_instance(truck_388_instances, it.current_index, default_active_instance))->get_box_index(2)-8);
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_instance(truck_388_instances, it.current_index, default_active_instance))->get_box_index(1)-8);
            ((Active*)*it)->alterables->flags.enable(60);
        }
    }
    event_1925_6_end: ;
}
// Function purpose: generated callback event_func_1840 processes event block(s) 1926_6. Actions/conditions:
//        1926_6: increments JQ_Deliveries by 1; sets NPC_Deliv_Stage to 1.
void Frames::event_func_1840()
{
    // event 1926_6 : increments JQ_Deliveries by 1; sets NPC_Deliv_Stage to 1
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1)) goto event_1926_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(119, str_pos_deliveries_681)) == (loop_inmates_free_period_index+1))) goto event_1926_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(471, str_npc_deliv_stage_1341)) == (2))) goto event_1926_6_end;
        lookinmateflag60_394_instances.clear_selection();
        qualifier_27.clear_selection();
        if (!check_overlap(lookinmateflag60_394_instances, qualifier_27)) goto event_1926_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1926_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(120, str_jq_deliveries_682, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(471, str_npc_deliv_stage_1341, 1);
    }
    event_1926_6_end: ;
}
// Function purpose: generated callback event_func_1841 processes event block(s) 1927_6. Actions/conditions:
//        1927_6: sets charZ to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(25); sets found to 0; adds a usespot 208 instance; plus 1
//        more actions.
void Frames::event_func_1841()
{
    // event 1927_6 : sets charZ to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25); sets found to 0; adds a usespot 208 instance; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1)) goto event_1927_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(119, str_pos_deliveries_681)) == (loop_inmates_free_period_index+1))) goto event_1927_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(471, str_npc_deliv_stage_1341)) == (2))) goto event_1927_6_end;
        lookinmateflag60_394_instances.clear_selection();
        if (!check_not_overlap(lookinmateflag60_394_instances, qualifier_27)) goto event_1927_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1927_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(95, str_charz_607, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(369, str_found_1165, 0);
        usespot_208_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_usespot_208(0, 0), 1);
            usespot_208_instances.add_back();
        }
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(9, str_deliveries_577);
        }
        {
            loop_npc_deliv_space_running = true;
            int times = int(1);
            loop_npc_deliv_space_index = 0;
            while (loop_npc_deliv_space_index < times) {
                loop_npc_deliv_space_6();
                if (!loop_npc_deliv_space_running) break;
                loop_npc_deliv_space_index++;
            }
        }
    }
    event_1927_6_end: ;
}
// Function purpose: generated callback event_func_1842 processes event block(s) 1933_6. Actions/conditions:
//        1933_6: sets the object position in the world.
void Frames::event_func_1842()
{
    // event 1933_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1)) goto event_1933_6_end;
        {
            ((Active*)get_instance(lookinmateflag60_394_instances))->set_global_position(-100, -100);
            pos_end_1933_6_0: ;
        }
    }
    event_1933_6_end: ;
}
void Frames::loop_inmates_free_period_6()
{
    event_func_1776();
    event_func_1777();
    event_func_1778();
    event_func_1779();
    event_func_1780();
    event_func_1781();
    event_func_1782();
    event_func_1783();
    event_func_1784();
    event_func_1785();
    event_func_1786();
    event_func_1787();
    event_func_1788();
    event_func_1789();
    event_func_1790();
    event_func_1791();
    event_func_1792();
    event_func_1793();
    event_func_1794();
    event_func_1795();
    event_func_1796();
    event_func_1797();
    event_func_1798();
    event_func_1799();
    event_func_1800();
    event_func_1801();
    event_func_1802();
    event_func_1803();
    event_func_1804();
    event_func_1805();
    event_func_1806();
    event_func_1807();
    event_func_1808();
    event_func_1809();
    event_func_1810();
    event_func_1811();
    event_func_1812();
    event_func_1813();
    event_func_1814();
    event_func_1815();
    event_func_1816();
    event_func_1817();
    event_func_1818();
    event_func_1819();
    event_func_1820();
    event_func_1821();
    event_func_1822();
    event_func_1823();
    event_func_1824();
    event_func_1825();
    event_func_1826();
    event_func_1827();
    event_func_1828();
    event_func_1829();
    event_func_1830();
    event_func_1831();
    event_func_1832();
    event_func_1833();
    event_func_1834();
    event_func_1835();
    event_func_1836();
    event_func_1837();
    event_func_1838();
    event_func_1839();
    event_func_1840();
    event_func_1841();
    event_func_1842();
}
// Function purpose: generated callback event_func_1843 processes event block(s) 2682_6. Actions/conditions:
//        2682_6: sets teef to stringtokenizer2_292->get(0).
void Frames::event_func_1843()
{
    // event 2682_6 : sets teef to stringtokenizer2_292->get(0)
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2682_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()) == (1))) goto event_2682_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(472, str_teef_1342, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0));
    }
    event_2682_6_end: ;
}
// Function purpose: generated callback event_func_1844 processes event block(s) 2683_6. Actions/conditions:
//        2683_6: sets teef to StringReplace::replace(translationData->get_string(DTAF, Hench), $name,
//        stringtokenizer2_292->get(1)).
void Frames::event_func_1844()
{
    // event 2683_6 : sets teef to StringReplace::replace(translationData->get_string(DTAF, Hench), $name, stringtokenizer2_292->get(1))
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2683_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()) == (2))) goto event_2683_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(472, str_teef_1342, StringReplace::replace(((INI*)get_instance(translationData_instances))->get_string(str_dtaf_137, str_hench_1196), str_name_693, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)));
    }
    event_2683_6_end: ;
}
void Frames::loop_dtaf_name_chex_6()
{
    event_func_1843();
    event_func_1844();
}
// Function purpose: generated callback event_func_1845 processes event block(s) 2675_6. Actions/conditions:
//        2675_6: splits saved text into fields; adds a buttons 245 instance; sets the object's animation to 8; plus 6
//        more actions.
void Frames::event_func_1845()
{
    // event 2675_6 : splits saved text into fields; adds a buttons 245 instance; sets the object's animation to 8; plus 6 more actions
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2675_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((ListObject*)get_instance(missions_298_instances))->get_line(loop_journal_list_favours_index+1), str__254);
        dialogButton_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dialogButton(0, 0), 5);
            dialogButton_instances.add_back();
        }
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->set_x(((Active*)get_instance(dialogPanel_instances))->get_x()-110);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(473, str_liney_1343));
            ((Active*)*it)->alterables->values.set(13, loop_journal_list_favours_index+1);
        }
    }
    event_2675_6_end: ;
}
// Function purpose: generated callback event_func_1846 processes event block(s) 2676_6. Actions/conditions:
//        2676_6: sets source to translationData->get_string(Missions_Journal, 3)+($+stringtokenizer_81->get(4)+); sets a
//        game or interface text string; sets a game or interface text string; plus 7 more actions.
void Frames::event_func_1846()
{
    // event 2676_6 : sets source to translationData->get_string(Missions_Journal, 3)+($+stringtokenizer_81->get(4)+); sets a game or interface text string; sets a game or interface text string; plus 7 more actions
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2676_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_distract_706))) goto event_2676_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3))))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2676_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_missions_journal_1344, str_3_158)+str__586+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)+str__321);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_routine_888, lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_routines_196, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6)))));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_giver_1345, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(0)));
        FrameObject * single_instance_2676_6_0; single_instance_2676_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -110, parent->y + 0), parent->layer);
                if (single_instance_2676_6_0 == NULL)
                    single_instance_2676_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_2676_6_0))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(473, str_liney_1343));
        ((Text*)((Text*)single_instance_2676_6_0))->set_string(((Text*)single_instance_2676_6_0)->text+str__1346+((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584)+str__624);
        ((Text*)((Text*)single_instance_2676_6_0))->blend_color.set(Color(60, 60, 60));
    }
    event_2676_6_end: ;
}
// Function purpose: generated callback event_func_1847 processes event block(s) 2677_6. Actions/conditions:
//        2677_6: sets source to translationData->get_string(Missions_Journal, 2)+($+stringtokenizer_81->get(3)+); sets
//        source to StringReplace::replace(gameVariables->get_string(81, source), $giver,
//        stringtokenizer_81->get(4)); sets a game or interface text string; plus 7 more actions.
void Frames::event_func_1847()
{
    // event 2677_6 : sets source to translationData->get_string(Missions_Journal, 2)+($+stringtokenizer_81->get(3)+); sets source to StringReplace::replace(gameVariables->get_string(81, source), $giver, stringtokenizer_81->get(4)); sets a game or interface text string; plus 7 more actions
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2677_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_2677_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_beat_1232))) goto event_2677_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2))))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_2677_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_missions_journal_1344, str_2_155)+str__586+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)+str__321);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_giver_1345, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_target_1347, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->strings.get(0)));
        FrameObject * single_instance_2677_6_0; single_instance_2677_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -110, parent->y + 0), parent->layer);
                if (single_instance_2677_6_0 == NULL)
                    single_instance_2677_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_2677_6_0))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(473, str_liney_1343));
        ((Text*)((Text*)single_instance_2677_6_0))->set_string(((Text*)single_instance_2677_6_0)->text+str__1346+((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584)+str__624);
        ((Text*)((Text*)single_instance_2677_6_0))->blend_color.set(Color(60, 60, 60));
    }
    event_2677_6_end: ;
}
// Function purpose: generated callback event_func_1848 processes event block(s) 2678_6. Actions/conditions:
//        2678_6: sets source to translationData->get_string(Missions_Journal, 2)+($+stringtokenizer_81->get(3)+); sets
//        source to StringReplace::replace(gameVariables->get_string(81, source), $giver,
//        stringtokenizer_81->get(4)); sets a game or interface text string; plus 7 more actions.
void Frames::event_func_1848()
{
    // event 2678_6 : sets source to translationData->get_string(Missions_Journal, 2)+($+stringtokenizer_81->get(3)+); sets source to StringReplace::replace(gameVariables->get_string(81, source), $giver, stringtokenizer_81->get(4)); sets a game or interface text string; plus 7 more actions
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2678_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_2678_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_beat_1232))) goto event_2678_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2))))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2678_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_missions_journal_1344, str_2_155)+str__586+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)+str__321);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_giver_1345, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_target_1347, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(0)));
        FrameObject * single_instance_2678_6_0; single_instance_2678_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -110, parent->y + 0), parent->layer);
                if (single_instance_2678_6_0 == NULL)
                    single_instance_2678_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_2678_6_0))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(473, str_liney_1343));
        ((Text*)((Text*)single_instance_2678_6_0))->set_string(((Text*)single_instance_2678_6_0)->text+str__1346+((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584)+str__624);
        ((Text*)((Text*)single_instance_2678_6_0))->blend_color.set(Color(60, 60, 60));
    }
    event_2678_6_end: ;
}
// Function purpose: generated callback event_func_1849 processes event block(s) 2679_6. Actions/conditions:
//        2679_6: sets source to translationData->get_string(Missions_Journal, 2)+($+stringtokenizer_81->get(3)+); sets
//        source to StringReplace::replace(gameVariables->get_string(81, source), $giver,
//        stringtokenizer_81->get(4)); splits saved text into fields; plus 9 more actions.
void Frames::event_func_1849()
{
    // event 2679_6 : sets source to translationData->get_string(Missions_Journal, 2)+($+stringtokenizer_81->get(3)+); sets source to StringReplace::replace(gameVariables->get_string(81, source), $giver, stringtokenizer_81->get(4)); splits saved text into fields; plus 9 more actions
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2679_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_2679_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_beat_1232))) goto event_2679_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2))))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_2679_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_missions_journal_1344, str_2_155)+str__586+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)+str__321);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_giver_1345, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)));
        ((StringTokenizer*)get_instance(undergroundTileRow_instances))->split(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->strings.get(0), str__189);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(474, str_gname_1348, StringReplace::replace(((INI*)get_instance(translationData_instances))->get_string(str_dtaf_137, str_hench_1196), str_name_693, ((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_target_1347, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(474, str_gname_1348)));
        FrameObject * single_instance_2679_6_0; single_instance_2679_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -110, parent->y + 0), parent->layer);
                if (single_instance_2679_6_0 == NULL)
                    single_instance_2679_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_2679_6_0))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(473, str_liney_1343));
        ((Text*)((Text*)single_instance_2679_6_0))->set_string(((Text*)single_instance_2679_6_0)->text+str__1346+((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584)+str__624);
        ((Text*)((Text*)single_instance_2679_6_0))->blend_color.set(Color(60, 60, 60));
    }
    event_2679_6_end: ;
}
// Function purpose: generated callback event_func_1850 processes event block(s) 2680_6. Actions/conditions:
//        2680_6: sets teef to ((Active*)get_single(qualifier_14,
//        default_active_instance))->alterables->strings.get(0).
void Frames::event_func_1850()
{
    // event 2680_6 : sets teef to ((Active*)get_single(qualifier_14, default_active_instance))->alterables->strings.get(0)
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2680_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_2680_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_stealchar_1264))) goto event_2680_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2))))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_2680_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(472, str_teef_1342, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->strings.get(0));
    }
    event_2680_6_end: ;
}
// Function purpose: generated callback event_func_1851 processes event block(s) 2681_6. Actions/conditions:
//        2681_6: splits saved text into fields.
void Frames::event_func_1851()
{
    // event 2681_6 : splits saved text into fields
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2681_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_2681_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_stealchar_1264))) goto event_2681_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2))))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_2681_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((Active*)get_single(qualifier_14, default_active_instance))->alterables->strings.get(0), str__189);
        {
            loop_dtaf_name_chex_running = true;
            int times = int(1);
            loop_dtaf_name_chex_index = 0;
            while (loop_dtaf_name_chex_index < times) {
                loop_dtaf_name_chex_6();
                if (!loop_dtaf_name_chex_running) break;
                loop_dtaf_name_chex_index++;
            }
        }
    }
    event_2681_6_end: ;
}
// Function purpose: generated callback event_func_1852 processes event block(s) 2684_6. Actions/conditions:
//        2684_6: sets source to translationData->get_string(Missions_Journal, 5)+($+stringtokenizer_81->get(3)+); sets a
//        game or interface text string; sets source to StringReplace::replace(gameVariables->get_string(81,
//        source), $target, gameVariables->get_string(472, teef)); plus 8 more actions.
void Frames::event_func_1852()
{
    // event 2684_6 : sets source to translationData->get_string(Missions_Journal, 5)+($+stringtokenizer_81->get(3)+); sets a game or interface text string; sets source to StringReplace::replace(gameVariables->get_string(81, source), $target, gameVariables->get_string(472, teef)); plus 8 more actions
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2684_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_stealchar_1264))) goto event_2684_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(5))))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2684_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_missions_journal_1344, str_5_164)+str__586+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)+str__321);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_giver_1345, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_target_1347, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(472, str_teef_1342)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_item_1215, ((INI*)get_instance(itemData_instances))->get_string(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6), str_name_103)));
        FrameObject * single_instance_2684_6_0; single_instance_2684_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -110, parent->y + 0), parent->layer);
                if (single_instance_2684_6_0 == NULL)
                    single_instance_2684_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_2684_6_0))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(473, str_liney_1343));
        ((Text*)((Text*)single_instance_2684_6_0))->set_string(((Text*)single_instance_2684_6_0)->text+str__1346+((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584)+str__624);
        ((Text*)((Text*)single_instance_2684_6_0))->blend_color.set(Color(60, 60, 60));
    }
    event_2684_6_end: ;
}
// Function purpose: generated callback event_func_1853 processes event block(s) 2685_6. Actions/conditions:
//        2685_6: sets source to translationData->get_string(Missions_Journal, 4)+($+stringtokenizer_81->get(4)+); sets a
//        game or interface text string; sets a game or interface text string; plus 7 more actions.
void Frames::event_func_1853()
{
    // event 2685_6 : sets source to translationData->get_string(Missions_Journal, 4)+($+stringtokenizer_81->get(4)+); sets a game or interface text string; sets a game or interface text string; plus 7 more actions
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2685_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_give_1268))) goto event_2685_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2))))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2685_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_missions_journal_1344, str_4_161)+str__586+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)+str__321);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_giver_1345, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_item_1215, ((INI*)get_instance(itemData_instances))->get_string(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3), str_name_103)));
        FrameObject * single_instance_2685_6_0; single_instance_2685_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -110, parent->y + 0), parent->layer);
                if (single_instance_2685_6_0 == NULL)
                    single_instance_2685_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_2685_6_0))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(473, str_liney_1343));
        ((Text*)((Text*)single_instance_2685_6_0))->set_string(((Text*)single_instance_2685_6_0)->text+str__1346+((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584)+str__624);
        ((Text*)((Text*)single_instance_2685_6_0))->blend_color.set(Color(60, 60, 60));
    }
    event_2685_6_end: ;
}
// Function purpose: generated callback event_func_1854 processes event block(s) 2686_6. Actions/conditions:
//        2686_6: increments LineY by 24.
void Frames::event_func_1854()
{
    // event 2686_6 : increments LineY by 24
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2686_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(473, str_liney_1343, 24);
    }
    event_2686_6_end: ;
}
void Frames::loop_journal_list_favours_6()
{
    event_func_1845();
    event_func_1846();
    event_func_1847();
    event_func_1848();
    event_func_1849();
    event_func_1850();
    event_func_1851();
    event_func_1852();
    event_func_1853();
    event_func_1854();
}
// Function purpose: generated callback event_func_1855 processes event block(s) 3385_6. Actions/conditions:
//        3385_6: sets the selected object's numeric value to 1; sets the object position in the world; sets the
//        selected object's string to NPC_give; plus 7 more actions.
void Frames::event_func_1855()
{
    // event 3385_6 : sets the selected object's numeric value to 1; sets the object position in the world; sets the selected object's string to NPC_give; plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3385_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(368, str_currentinvslot_1162)))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3385_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_give_1349))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3385_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_3385_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3385_6_0: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
            ((Active*)*it)->alterables->strings.set(0, str_npc_give_1349);
            ((Active*)*it)->set_scale(2);
            ((Active*)*it)->alterables->flags.enable(-5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(475, str_newgiveitem_1350, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(368, str_currentinvslot_1162))));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(368, str_currentinvslot_1162)), empty_string);
    }
    event_3385_6_end: ;
}
void Frames::loop_give_npc_6()
{
    event_func_1855();
}
// Function purpose: generated callback event_func_1856 processes event block(s) 3384_6. Actions/conditions:
//        3384_6: checks scene is active; skips if the event-specific game state condition is met; this handler gates
//        a game event without a direct value/object action.
void Frames::event_func_1856()
{
    // event 3384_6 : checks scene is active; skips if the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3384_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_give_1349))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3384_6_end;
        {
            loop_give_npc_running = true;
            int times = int(1);
            loop_give_npc_index = 0;
            while (loop_give_npc_index < times) {
                loop_give_npc_6();
                if (!loop_give_npc_running) break;
                loop_give_npc_index++;
            }
        }
    }
    event_3384_6_end: ;
}
void Frames::loop_give_npc_check_6()
{
    event_func_1856();
}
// Function purpose: generated callback event_func_1857 processes event block(s) 3438_6. Actions/conditions:
//        3438_6: removes the selected object.
void Frames::event_func_1857()
{
    // event 3438_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3438_6_end;
        guardalert_266_instances.clear_selection();
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352)))) { it.deselect(); continue; }
        }
        if (!guardalert_266_instances.has_selection()) goto event_3438_6_end;
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3438_6_end: ;
}
void Frames::loop_wallremovealert_6()
{
    event_func_1857();
}
// Function purpose: generated callback event_func_1858 processes event block(s) 3400_6. Actions/conditions:
//        3400_6: saves the current object selection; saves the current object selection; saves the current object
//        selection; plus 6 more actions.
void Frames::event_func_1858()
{
    // event 3400_6 : saves the current object selection; saves the current object selection; saves the current object selection; plus 6 more actions
    bool or_result_3400_6 = false;
    bool or_temp_result_3400_6_0 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3400_6_0_end;
        cursor_178_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(cursor_178_instances, qualifier_19)) goto or_event_3400_6_0_end;
        or_result_3400_6 = true;
        or_temp_result_3400_6_0 = true;
    }
    or_event_3400_6_0_end: ;
    qualifier_19.clear_saved_selection();
    cursor_178_instances.clear_saved_selection();
    if (or_temp_result_3400_6_0) {
        qualifier_19.save_selection();
        cursor_178_instances.save_selection();
    }
    // event 3400_6 : saves the current object selection; saves the current object selection; saves the current object selection; plus 6 more actions
    bool or_temp_result_3400_6_1 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3400_6_1_end;
        cursor_178_instances.clear_selection();
        for (ObjectIterator it(cursor_178_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!cursor_178_instances.has_selection()) goto or_event_3400_6_1_end;
        or_result_3400_6 = true;
        or_temp_result_3400_6_1 = true;
    }
    or_event_3400_6_1_end: ;
    if (or_temp_result_3400_6_1) {
        cursor_178_instances.save_selection();
    }
    // event 3400_6 : saves the current object selection; saves the current object selection; saves the current object selection; plus 6 more actions
    bool or_temp_result_3400_6_2 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3400_6_2_end;
        cursor_178_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(cursor_178_instances, qualifier_8)) goto or_event_3400_6_2_end;
        or_result_3400_6 = true;
        or_temp_result_3400_6_2 = true;
    }
    or_event_3400_6_2_end: ;
    qualifier_8.clear_saved_selection();
    if (or_temp_result_3400_6_2) {
        cursor_178_instances.save_selection();
        qualifier_8.save_selection();
    }
    // event 3400_6 : saves the current object selection; saves the current object selection; saves the current object selection; plus 6 more actions
    bool or_temp_result_3400_6_3 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3400_6_3_end;
        cursor_178_instances.clear_selection();
        playerBase_instances.clear_selection();
        if (!check_overlap(cursor_178_instances, playerBase_instances)) goto or_event_3400_6_3_end;
        or_result_3400_6 = true;
        or_temp_result_3400_6_3 = true;
        or_event_3400_6_3_end: ;
        playerBase_instances.clear_saved_selection();
        if (or_temp_result_3400_6_3) {
            playerBase_instances.save_selection();
            cursor_178_instances.save_selection();
        }
        if (!or_result_3400_6) goto or_final_or_event_3400_6_3_end;
        qualifier_8.empty_selection();
        qualifier_19.empty_selection();
        cursor_178_instances.empty_selection();
        playerBase_instances.empty_selection();
        if (or_temp_result_3400_6_3) {
            playerBase_instances.restore_selection();
        }
        if (or_temp_result_3400_6_2) {
            qualifier_8.restore_selection();
        }
        if (or_temp_result_3400_6_0) {
            qualifier_19.restore_selection();
        }
        if (or_temp_result_3400_6_0 || or_temp_result_3400_6_1 || or_temp_result_3400_6_2 || or_temp_result_3400_6_3) {
            cursor_178_instances.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(478, str_allow_1353, 0);
        }
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    or_final_or_event_3400_6_3_end: ;
}
// Function purpose: generated callback event_func_1859 processes event block(s) 3401_6. Actions/conditions:
//        3401_6: plays a sound or music track.
void Frames::event_func_1859()
{
    // event 3401_6 : plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3401_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(478, str_allow_1353)) == (0))) goto event_3401_6_end;
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_3401_6_end: ;
}
// Function purpose: generated callback event_func_1860 processes event block(s) 3402_6. Actions/conditions:
//        3402_6: creates a mapsetupobstaclemarker 323 object; moves the target object to a layer; draws the selected
//        image or tile; plus 1 more actions.
void Frames::event_func_1860()
{
    // event 3402_6 : creates a mapsetupobstaclemarker 323 object; moves the target object to a layer; draws the selected image or tile; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3402_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(478, str_allow_1353)) == (1))) goto event_3402_6_end;
        FrameObject * single_instance_3402_6_0; single_instance_3402_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_mapsetupobstaclemarker_323(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3402_6_0 == NULL)
                    single_instance_3402_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3402_6_0))->set_layer(7-1);
        ((Active*)((Active*)single_instance_3402_6_0))->paste(1);
        ((Active*)((Active*)single_instance_3402_6_0))->destroy();
    }
    event_3402_6_end: ;
}
// Function purpose: generated callback event_func_1861 processes event block(s) 3403_6. Actions/conditions:
//        3403_6: creates a sheetsposters 294 object; sets the object's animation to 1; creates a dust 223 object;
//        plus 5 more actions.
void Frames::event_func_1861()
{
    // event 3403_6 : creates a sheetsposters 294 object; sets the object's animation to 1; creates a dust 223 object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3403_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(478, str_allow_1353)) == (1))) goto event_3403_6_end;
        FrameObject * single_instance_3403_6_0; single_instance_3403_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_sheetsposters_294(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3403_6_0 == NULL)
                    single_instance_3403_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3403_6_0))->force_animation(1);
        FrameObject * single_instance_3403_6_1; single_instance_3403_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 16), parent->layer);
                if (single_instance_3403_6_1 == NULL)
                    single_instance_3403_6_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3403_6_1))->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
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
        {
            loop_wallremovealert_running = true;
            int times = int(1);
            loop_wallremovealert_index = 0;
            while (loop_wallremovealert_index < times) {
                loop_wallremovealert_6();
                if (!loop_wallremovealert_running) break;
                loop_wallremovealert_index++;
            }
        }
        media.play_id(SOUND_STEP_1, 1-1);
    }
    event_3403_6_end: ;
}
// Function purpose: generated callback event_func_1862 processes event block(s) 3404_6. Actions/conditions:
//        3404_6: checks scene is active; game state allow; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_1862()
{
    // event 3404_6 : checks scene is active; game state allow; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3404_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(478, str_allow_1353)) == (1))) goto event_3404_6_end;
        sheetsposters_294_instances.clear_selection();
        spread_value(sheetsposters_294_instances, 0, 1);
    }
    event_3404_6_end: ;
}
void Frames::loop_hang_poster_6()
{
    event_func_1858();
    event_func_1859();
    event_func_1860();
    event_func_1861();
    event_func_1862();
}
// Function purpose: generated callback event_func_1863 processes event block(s) 4096_6. Actions/conditions:
//        4096_6: sets the selected object's layer to 2-1; draws the selected image or tile; sets
//        gameVariables->get_value(476, WallX) to gameVariables->get_value(477, WallY).
void Frames::event_func_1863()
{
    // event 4096_6 : sets the selected object's layer to 2-1; draws the selected image or tile; sets gameVariables->get_value(476, WallX) to gameVariables->get_value(477, WallY)
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4096_6_end;
        sheetsposters_294_instances.clear_selection();
        for (ObjectIterator it(sheetsposters_294_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_remove_posters_index+1))) { it.deselect(); continue; }
        }
        if (!sheetsposters_294_instances.has_selection()) goto event_4096_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 2)) == (6))) goto event_4096_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(((Active*)get_single(sheetsposters_294_instances, default_active_instance))->get_x(), ((Active*)get_single(sheetsposters_294_instances, default_active_instance))->get_y(), 0, (6*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(wallsarray_232_instances))->set_value(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 2);
    }
    event_4096_6_end: ;
}
// Function purpose: generated callback event_func_1864 processes event block(s) 4097_6. Actions/conditions:
//        4097_6: sets the selected object's layer to 2-1; draws the selected image or tile; sets
//        gameVariables->get_value(476, WallX) to gameVariables->get_value(477, WallY).
void Frames::event_func_1864()
{
    // event 4097_6 : sets the selected object's layer to 2-1; draws the selected image or tile; sets gameVariables->get_value(476, WallX) to gameVariables->get_value(477, WallY)
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4097_6_end;
        sheetsposters_294_instances.clear_selection();
        for (ObjectIterator it(sheetsposters_294_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_remove_posters_index+1))) { it.deselect(); continue; }
        }
        if (!sheetsposters_294_instances.has_selection()) goto event_4097_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 2)) == (7))) goto event_4097_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(((Active*)get_single(sheetsposters_294_instances, default_active_instance))->get_x(), ((Active*)get_single(sheetsposters_294_instances, default_active_instance))->get_y(), 0, (7*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(wallsarray_232_instances))->set_value(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 2);
    }
    event_4097_6_end: ;
}
void Frames::loop_fix_poster_wall_6()
{
    event_func_1863();
    event_func_1864();
}
// Function purpose: generated callback event_func_1865 processes event block(s) 4095_6. Actions/conditions:
//        4095_6: sets WallX to ((Active*)get_single(sheetsposters_294_instances,
//        default_active_instance))->get_x()/MathHelper()/16; sets WallY to
//        ((Active*)get_single(sheetsposters_294_instances, default_active_instance))->get_y()/MathHelper()/16; adds a
//        mapsetupobstaclemarker 323 instance; plus 7 more actions.
void Frames::event_func_1865()
{
    // event 4095_6 : sets WallX to ((Active*)get_single(sheetsposters_294_instances, default_active_instance))->get_x()/MathHelper()/16; sets WallY to ((Active*)get_single(sheetsposters_294_instances, default_active_instance))->get_y()/MathHelper()/16; adds a mapsetupobstaclemarker 323 instance; plus 7 more actions
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4095_6_end;
        sheetsposters_294_instances.clear_selection();
        for (ObjectIterator it(sheetsposters_294_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_remove_posters_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(1))) { it.deselect(); continue; }
        }
        if (!sheetsposters_294_instances.has_selection()) goto event_4095_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(476, str_wallx_1351, ((Active*)get_single(sheetsposters_294_instances, default_active_instance))->get_x()/MathHelper()/16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(477, str_wally_1352, ((Active*)get_single(sheetsposters_294_instances, default_active_instance))->get_y()/MathHelper()/16);
        mapsetupobstaclemarker_323_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_mapsetupobstaclemarker_323(0, 0), 6);
            mapsetupobstaclemarker_323_instances.add_back();
        }
        for (ObjectIterator it(mapsetupobstaclemarker_323_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(sheetsposters_294_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->set_y(((Active*)get_single(sheetsposters_294_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->paste(1);
            ((Active*)*it)->destroy();
        }
        {
            loop_fix_poster_wall_running = true;
            int times = int(1);
            loop_fix_poster_wall_index = 0;
            while (loop_fix_poster_wall_index < times) {
                loop_fix_poster_wall_6();
                if (!loop_fix_poster_wall_running) break;
                loop_fix_poster_wall_index++;
            }
        }
    }
    event_4095_6_end: ;
}
void Frames::loop_remove_posters_6()
{
    event_func_1865();
}
// Function purpose: generated callback event_func_1866 processes event block(s) 981_6. Actions/conditions:
//        981_6: sets found to 1.
void Frames::event_func_1866()
{
    // event 981_6 : sets found to 1
    {
        if (!(group_code_1 && group_code_pathfinding_missing_equip_1)) goto event_981_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_981_6_end;
        if (!check_not_overlap(usespot_208_instances, qualifier_19)) goto event_981_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(369, str_found_1165, 1);
    }
    event_981_6_end: ;
}
void Frames::loop_check_laundry_space_6()
{
    event_func_1866();
}
// Function purpose: generated callback event_func_1867 processes event block(s) 977_6. Actions/conditions:
//        977_6: sets the object position in the world.
void Frames::event_func_1867()
{
    // event 977_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_pathfinding_missing_equip_1)) goto event_977_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_977_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(containerlaundryclean_275_instances, it.current_index));
            if (parent == NULL) goto pos_end_977_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -16, parent->get_y() + 0);
            pos_end_977_6_0: ;
        }
        {
            loop_check_laundry_space_running = true;
            int times = int(1);
            loop_check_laundry_space_index = 0;
            while (loop_check_laundry_space_index < times) {
                loop_check_laundry_space_6();
                if (!loop_check_laundry_space_running) break;
                loop_check_laundry_space_index++;
            }
        }
    }
    event_977_6_end: ;
}
// Function purpose: generated callback event_func_1868 processes event block(s) 978_6. Actions/conditions:
//        978_6: sets the object position in the world.
void Frames::event_func_1868()
{
    // event 978_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_pathfinding_missing_equip_1)) goto event_978_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_978_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(containerlaundryclean_275_instances, it.current_index));
            if (parent == NULL) goto pos_end_978_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 16, parent->get_y() + 0);
            pos_end_978_6_0: ;
        }
        {
            loop_check_laundry_space_running = true;
            int times = int(1);
            loop_check_laundry_space_index = 0;
            while (loop_check_laundry_space_index < times) {
                loop_check_laundry_space_6();
                if (!loop_check_laundry_space_running) break;
                loop_check_laundry_space_index++;
            }
        }
    }
    event_978_6_end: ;
}
// Function purpose: generated callback event_func_1869 processes event block(s) 979_6. Actions/conditions:
//        979_6: sets the object position in the world.
void Frames::event_func_1869()
{
    // event 979_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_pathfinding_missing_equip_1)) goto event_979_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_979_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(containerlaundryclean_275_instances, it.current_index));
            if (parent == NULL) goto pos_end_979_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 32);
            pos_end_979_6_0: ;
        }
        {
            loop_check_laundry_space_running = true;
            int times = int(1);
            loop_check_laundry_space_index = 0;
            while (loop_check_laundry_space_index < times) {
                loop_check_laundry_space_6();
                if (!loop_check_laundry_space_running) break;
                loop_check_laundry_space_index++;
            }
        }
    }
    event_979_6_end: ;
}
// Function purpose: generated callback event_func_1870 processes event block(s) 980_6. Actions/conditions:
//        980_6: sets the object position in the world.
void Frames::event_func_1870()
{
    // event 980_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_pathfinding_missing_equip_1)) goto event_980_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_980_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(containerlaundryclean_275_instances, it.current_index));
            if (parent == NULL) goto pos_end_980_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + -16);
            pos_end_980_6_0: ;
        }
        {
            loop_check_laundry_space_running = true;
            int times = int(1);
            loop_check_laundry_space_index = 0;
            while (loop_check_laundry_space_index < times) {
                loop_check_laundry_space_6();
                if (!loop_check_laundry_space_running) break;
                loop_check_laundry_space_index++;
            }
        }
    }
    event_980_6_end: ;
}
// Function purpose: generated callback event_func_1871 processes event block(s) 982_6. Actions/conditions:
//        982_6: sets the selected object's numeric value to ((Active*)get_instance(usespot_208_instances,
//        it.current_index, default_active_instance))->get_x(); sets the selected object's numeric value to
//        ((Active*)get_instance(usespot_208_instances, it.current_index, default_active_instance))->get_y(); enables
//        flag 60 (guard sight or target-tracking state) on the selected object; plus 1 more actions.
void Frames::event_func_1871()
{
    // event 982_6 : sets the selected object's numeric value to ((Active*)get_instance(usespot_208_instances, it.current_index, default_active_instance))->get_x(); sets the selected object's numeric value to ((Active*)get_instance(usespot_208_instances, it.current_index, default_active_instance))->get_y(); enables flag 60 (guard sight or target-tracking state) on the selected object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_missing_equip_1)) goto event_982_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(411, str_currz_1227)))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_982_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_instance(usespot_208_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_instance(usespot_208_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->alterables->flags.enable(60);
        }
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_982_6_end: ;
}
void Frames::loop_find_laundry_space_6()
{
    event_func_1867();
    event_func_1868();
    event_func_1869();
    event_func_1870();
    event_func_1871();
}
// Function purpose: generated callback event_func_1872 processes event block(s) 1265_6. Actions/conditions:
//        1265_6: splits saved text into fields.
void Frames::event_func_1872()
{
    // event 1265_6 : splits saved text into fields
    {
        if (!(group_code_1 && group_code_conflict_you_attacking_old_beat_code_1)) goto event_1265_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((ListObject*)get_instance(missions_298_instances))->get_line(loop_beat_mission_index+1), str__254);
    }
    event_1265_6_end: ;
}
// Function purpose: generated callback event_func_1873 processes event block(s) 1266_6. Actions/conditions:
//        1266_6: increments m_cash by string_to_number(stringtokenizer_81->get(3)); increments m_done by 1;
//        increments Score_P by 10; plus 16 more actions.
void Frames::event_func_1873()
{
    // event 1266_6 : increments m_cash by string_to_number(stringtokenizer_81->get(3)); increments m_done by 1; increments Score_P by 10; plus 16 more actions
    {
        if (!(group_code_1 && group_code_conflict_you_attacking_old_beat_code_1)) goto event_1266_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_beat_1232))) goto event_1266_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)) == (number_to_string(((Active*)get_instance(target_177_instances))->alterables->values.get(0))))) goto event_1266_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(5))))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1266_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(416, str_m_cash_1234, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(417, str_m_done_1235, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(418, str_score_p_1236, 10);
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 15);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(219, str_cash_11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(str_you_have_completed_the_favour_for_1237+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)+str_and_earned_yourself_1238+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)+str__918);
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
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_y()-38);
            ((Text*)*it)->set_bold(1);
            ((Text*)*it)->blend_color.set(Color(0, 128, 0));
            ((Text*)*it)->set_string(str_favour_complete_1239);
        }
        FrameObject * single_instance_1266_6_1; single_instance_1266_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 43, parent->y + 20), parent->layer);
                if (single_instance_1266_6_1 == NULL)
                    single_instance_1266_6_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1266_6_1))->force_animation(28);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(142, str_del_missions_708, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(142, str_del_missions_708)+((ListObject*)get_instance(missions_298_instances))->get_line(loop_beat_mission_index+1)+str__346);
        {
            loop_hudshake_cash_running = true;
            int times = int(1);
            loop_hudshake_cash_index = 0;
            while (loop_hudshake_cash_index < times) {
                loop_hudshake_cash_6();
                if (!loop_hudshake_cash_running) break;
                loop_hudshake_cash_index++;
            }
        }
        media.play_id(SOUND_ACCOLADE_9, 1-1);
    }
    event_1266_6_end: ;
}
void Frames::loop_beat_mission_6()
{
    event_func_1872();
    event_func_1873();
}
// Function purpose: generated callback event_func_1874 processes event block(s) 4253_6. Actions/conditions:
//        4253_6: checks the event-specific game state condition is met; this handler gates a game event without a
//        direct value/object action.
void Frames::event_func_1874()
{
    // event 4253_6 : checks the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_loops_1)) goto event_4253_6_end;
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
    event_4253_6_end: ;
}
// Function purpose: generated callback event_func_1875 processes event block(s) 4254_6. Actions/conditions:
//        4254_6: sets AddSuccess to 0; sets SpeakText to Misc entry 7; plays a sound or music track.
void Frames::event_func_1875()
{
    // event 4254_6 : sets AddSuccess to 0; sets SpeakText to Misc entry 7; plays a sound or music track
    {
        if (!(group_loops_1)) goto event_4254_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) == (0))) goto event_4254_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(89, str_addsuccess_596, 0);
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
    event_4254_6_end: ;
}
// Function purpose: generated callback event_func_1876 processes event block(s) 4255_6. Actions/conditions:
//        4255_6: sets AddSuccess to 1; plays a sound or music track.
void Frames::event_func_1876()
{
    // event 4255_6 : sets AddSuccess to 1; plays a sound or music track
    {
        if (!(group_loops_1)) goto event_4255_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) > (0))) goto event_4255_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(89, str_addsuccess_596, 1);
        media.play_id(SOUND_PICKUP_3, 1-1);
    }
    event_4255_6_end: ;
}
// Function purpose: generated callback event_func_1877 processes event block(s) 4256_6. Actions/conditions:
//        4256_6: adds a itemshud 210 instance; sets the selected object's numeric value to
//        gameVariables->get_value(9, ItemID); enables flag -2 (legacy object-specific state; original label
//        was not retained) on the selected object; plus 13 more actions.
void Frames::event_func_1877()
{
    // event 4256_6 : adds a itemshud 210 instance; sets the selected object's numeric value to gameVariables->get_value(9, ItemID); enables flag -2 (legacy object-specific state; original label was not retained) on the selected object; plus 13 more actions
    {
        if (!(group_loops_1)) goto event_4256_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) > (0))) goto event_4256_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(479, str_offfloor_1354)) == (0))) goto event_4256_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_decay_1212)) == (0))) goto event_4256_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_4256_6_end;
        hudItem_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_hudItem(-16, -16), 5);
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
            if (parent == NULL) goto pos_end_4256_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_4256_6_1: ;
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
    event_4256_6_end: ;
}
// Function purpose: generated callback event_func_1878 processes event block(s) 4257_6. Actions/conditions:
//        4257_6: adds a itemshud 210 instance; sets the selected object's numeric value to
//        gameVariables->get_value(9, ItemID); enables flag -2 (legacy object-specific state; original label
//        was not retained) on the selected object; plus 14 more actions.
void Frames::event_func_1878()
{
    // event 4257_6 : adds a itemshud 210 instance; sets the selected object's numeric value to gameVariables->get_value(9, ItemID); enables flag -2 (legacy object-specific state; original label was not retained) on the selected object; plus 14 more actions
    {
        if (!(group_loops_1)) goto event_4257_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) > (0))) goto event_4257_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(479, str_offfloor_1354)) == (1))) goto event_4257_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_4257_6_end;
        hudItem_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_hudItem(-16, -16), 5);
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
            if (parent == NULL) goto pos_end_4257_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_4257_6_1: ;
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
    event_4257_6_end: ;
}
// Function purpose: generated callback event_func_1879 processes event block(s) 4258_6. Actions/conditions:
//        4258_6: sets SpeakText to Misc entry 25; sets a game or interface text string; sets OffFloor to 0.
void Frames::event_func_1879()
{
    // event 4258_6 : sets SpeakText to Misc entry 25; sets a game or interface text string; sets OffFloor to 0
    {
        if (!(group_loops_1)) goto event_4258_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(479, str_offfloor_1354)) == (0))) goto event_4258_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) > (0))) goto event_4258_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(482, str_newitemhp_1357)) <= (0))) goto event_4258_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_decay_1212)) > (0))) goto event_4258_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_25_1214));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142), str_item_1215, lowercase_string(((INI*)get_instance(itemData_instances))->get_string(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_name_103))));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(479, str_offfloor_1354, 0);
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
    }
    event_4258_6_end: ;
}
// Function purpose: generated callback event_func_1880 processes event block(s) 4259_6. Actions/conditions:
//        4259_6: adds a itemshud 210 instance; sets the selected object's numeric value to
//        gameVariables->get_value(9, ItemID); enables flag -2 (legacy object-specific state; original label
//        was not retained) on the selected object; plus 14 more actions.
void Frames::event_func_1880()
{
    // event 4259_6 : adds a itemshud 210 instance; sets the selected object's numeric value to gameVariables->get_value(9, ItemID); enables flag -2 (legacy object-specific state; original label was not retained) on the selected object; plus 14 more actions
    {
        if (!(group_loops_1)) goto event_4259_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(479, str_offfloor_1354)) == (0))) goto event_4259_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) > (0))) goto event_4259_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(482, str_newitemhp_1357)) > (0))) goto event_4259_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_decay_1212)) > (0))) goto event_4259_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_4259_6_end;
        hudItem_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_hudItem(-16, -16), 5);
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
            if (parent == NULL) goto pos_end_4259_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_4259_6_1: ;
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
    event_4259_6_end: ;
}
void Frames::loop_inv_add_6()
{
    event_func_1874();
    event_func_1875();
    event_func_1876();
    event_func_1877();
    event_func_1878();
    event_func_1879();
    event_func_1880();
}
// Function purpose: generated callback event_func_1881 processes event block(s) 3677_6. Actions/conditions:
//        3677_6: checks scene is active; game state NewItemHP; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_1881()
{
    // event 3677_6 : checks scene is active; game state NewItemHP; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_3677_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(482, str_newitemhp_1357)) > (0))) goto event_3677_6_end;
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
    event_3677_6_end: ;
}
void Frames::loop_inv_add_ifhpok_6()
{
    event_func_1881();
}
// Function purpose: generated callback event_func_1882 processes event block(s) 2691_6. Actions/conditions:
//        2691_6: creates a dialogue2 179 object; reads an object position for this event; updates a value on the
//        target object; plus 1 more actions.
void Frames::event_func_1882()
{
    // event 2691_6 : creates a dialogue2 179 object; reads an object position for this event; updates a value on the target object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2691_6_end;
        FrameObject * single_instance_2691_6_0; single_instance_2691_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -110, parent->y + 0), parent->layer);
                if (single_instance_2691_6_0 == NULL)
                    single_instance_2691_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_2691_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_y()-47+(33*(loop_journal_craftnotes_index*1)));
        ((Text*)((Text*)single_instance_2691_6_0))->blend_color.set(Color(170, 85, 0));
        ((Text*)((Text*)single_instance_2691_6_0))->set_string(str__199+((INI*)get_instance(itemData_instances))->get_string(str_name_103));
    }
    event_2691_6_end: ;
}
// Function purpose: generated callback event_func_1883 processes event block(s) 2692_6. Actions/conditions:
//        2692_6: creates a dialogue2 179 object; reads an object position for this event; updates a value on the
//        target object; plus 1 more actions.
void Frames::event_func_1883()
{
    // event 2692_6 : creates a dialogue2 179 object; reads an object position for this event; updates a value on the target object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2692_6_end;
        FrameObject * single_instance_2692_6_0; single_instance_2692_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -110, parent->y + 0), parent->layer);
                if (single_instance_2692_6_0 == NULL)
                    single_instance_2692_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_2692_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_y()-47+(33*(loop_journal_craftnotes_index*1)));
        ((Text*)((Text*)single_instance_2692_6_0))->blend_color.set(Color(75, 75, 75));
        ((Text*)((Text*)single_instance_2692_6_0))->set_string(str__200+((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
    }
    event_2692_6_end: ;
}
// Function purpose: generated callback event_func_1884 processes event block(s) 2693_6. Actions/conditions:
//        2693_6: adds a slot 224 instance; sets the selected object's horizontal position to
//        dialogPanel->get_x()-100; sets the selected object's vertical position to
//        dialogPanel->get_y()-35+(33*(loop_journal_craftnotes_index*1)); plus 10 more actions.
void Frames::event_func_1884()
{
    // event 2693_6 : adds a slot 224 instance; sets the selected object's horizontal position to dialogPanel->get_x()-100; sets the selected object's vertical position to dialogPanel->get_y()-35+(33*(loop_journal_craftnotes_index*1)); plus 10 more actions
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2693_6_end;
        itemSlot_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_itemSlot(0, 0), 5);
            itemSlot_instances.add_back();
        }
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(dialogPanel_instances))->get_x()-100);
            ((Active*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_y()-35+(33*(loop_journal_craftnotes_index*1)));
            ((Active*)*it)->alterables->strings.set(0, str_craftnote_716);
        }
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::MONOCHROME);
        }
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(150);
        }
        hudItem_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_hudItem(0, 0), 5);
            hudItem_instances.add_back();
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(147, str_tempitemid_717));
            ((Active*)*it)->alterables->flags.enable(-2);
            ((Active*)*it)->set_x(((Active*)get_instance(dialogPanel_instances))->get_x()-100);
            ((Active*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_y()-35+(33*(loop_journal_craftnotes_index*1)));
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::MONOCHROME);
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(100);
            ((Active*)*it)->alterables->strings.set(0, str_craftnote_716);
        }
    }
    event_2693_6_end: ;
}
void Frames::loop_write_crafting_item_6()
{
    event_func_1882();
    event_func_1883();
    event_func_1884();
}
// Function purpose: generated callback event_func_1885 processes event block(s) 2688_6. Actions/conditions:
//        2688_6: activates the get(loop_journal_craftnotes_index+((get_value(483, J_page event group; sets tempItemID
//        to
//        string_to_number(stringtokenizer_81->get(loop_journal_craftnotes_index+((gameVariables->get_value(483,
//        J_page)-1)*4))).
void Frames::event_func_1885()
{
    // event 2688_6 : activates the get(loop_journal_craftnotes_index+((get_value(483, J_page event group; sets tempItemID to string_to_number(stringtokenizer_81->get(loop_journal_craftnotes_index+((gameVariables->get_value(483, J_page)-1)*4)))
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2688_6_end;
        ((INI*)get_instance(itemData_instances))->set_group(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_journal_craftnotes_index+((((AssociateArray*)get_instance(gameVariables_instances))->get_value(483, str_j_page_1358)-1)*4)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(147, str_tempitemid_717, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_journal_craftnotes_index+((((AssociateArray*)get_instance(gameVariables_instances))->get_value(483, str_j_page_1358)-1)*4))));
    }
    event_2688_6_end: ;
}
// Function purpose: generated callback event_func_1886 processes event block(s) 2689_6. Actions/conditions:
//        2689_6: unlocks the MasterCraftsman achievement.
void Frames::event_func_1886()
{
    // event 2689_6 : unlocks the MasterCraftsman achievement
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2689_6_end;
        if (!((global_values->get(16)) == (1))) goto event_2689_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(484, str_j_maxpages_1359)) >= (13))) goto event_2689_6_end;
        if (((SteamObject*)get_instance(steamworks2_469_instances))->is_achievement_unlocked(str_mastercraftsman_1360)) goto event_2689_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->unlock_achievement(str_mastercraftsman_1360);
    }
    event_2689_6_end: ;
}
// Function purpose: generated callback event_func_1887 processes event block(s) 2690_6. Actions/conditions:
//        2690_6: splits saved text into fields.
void Frames::event_func_1887()
{
    // event 2690_6 : splits saved text into fields
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2690_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_string(str_name_103)) != (empty_string))) goto event_2690_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_string(str_craft_900)) != (empty_string))) goto event_2690_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(itemData_instances))->get_string(str_craft_900), str__96);
        {
            loop_write_crafting_item_running = true;
            int times = int(1);
            loop_write_crafting_item_index = 0;
            while (loop_write_crafting_item_index < times) {
                loop_write_crafting_item_6();
                if (!loop_write_crafting_item_running) break;
                loop_write_crafting_item_index++;
            }
        }
    }
    event_2690_6_end: ;
}
// Function purpose: generated callback event_func_1888 processes event block(s) 2694_6. Actions/conditions:
//        2694_6: creates a dialogue2 179 object; reads an object position for this event; updates a value on the
//        target object; plus 10 more actions.
void Frames::event_func_1888()
{
    // event 2694_6 : creates a dialogue2 179 object; reads an object position for this event; updates a value on the target object; plus 10 more actions
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2694_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_string(str_name_103)) != (empty_string))) goto event_2694_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_string(str_craft_900)) == (empty_string))) goto event_2694_6_end;
        FrameObject * single_instance_2694_6_0; single_instance_2694_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -110, parent->y + 0), parent->layer);
                if (single_instance_2694_6_0 == NULL)
                    single_instance_2694_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_2694_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_y()-44+(33*(loop_journal_craftnotes_index*1)));
        ((Text*)((Text*)single_instance_2694_6_0))->blend_color.set(Color(180, 180, 180));
        ((Text*)((Text*)single_instance_2694_6_0))->set_string(str_invalid_item_1361+((INI*)get_instance(itemData_instances))->get_string(str_name_103)+str__1362);
        itemSlot_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_itemSlot(0, 0), 5);
            itemSlot_instances.add_back();
        }
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(dialogPanel_instances))->get_x()-100);
            ((Active*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_y()-32+(33*(loop_journal_craftnotes_index*1)));
            ((Active*)*it)->alterables->strings.set(0, str_craftnote_716);
        }
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::MONOCHROME);
        }
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(150);
        }
    }
    event_2694_6_end: ;
}
void Frames::loop_journal_craftnotes_6()
{
    event_func_1885();
    event_func_1886();
    event_func_1887();
    event_func_1888();
}
// Function purpose: generated callback event_func_1889 processes event block(s) 1022_6. Actions/conditions:
//        1022_6: enables flag 60 (guard sight or target-tracking state) on the selected object; sets the selected
//        object's numeric value to gameVariables->get_value(485, SourceX); sets the selected object's numeric
//        value to gameVariables->get_value(486, SourceY); plus 7 more actions.
void Frames::event_func_1889()
{
    // event 1022_6 : enables flag 60 (guard sight or target-tracking state) on the selected object; sets the selected object's numeric value to gameVariables->get_value(485, SourceX); sets the selected object's numeric value to gameVariables->get_value(486, SourceY); plus 7 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1022_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1022_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1022_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(60);
            ((Active*)*it)->alterables->values.set(23, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(485, str_sourcex_1363));
            ((Active*)*it)->alterables->values.set(24, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(486, str_sourcey_1364));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, str_the_heck_1365);
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
    event_1022_6_end: ;
}
void Frames::loop_see_water_6()
{
    event_func_1889();
}
// Function purpose: generated callback event_func_1890 processes event block(s) 983_6. Actions/conditions:
//        983_6: sets currZ to ((Active*)get_single(guardBase_instances,
//        default_active_instance))->alterables->values.get(25); sets currTarg to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(2); sets
//        currHP to ((Active*)get_single(guardBase_instances,
//        default_active_instance))->alterables->values.get(7); plus 1 more actions.
void Frames::event_func_1890()
{
    // event 983_6 : sets currZ to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25); sets currTarg to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(2); sets currHP to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(7); plus 1 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_missing_equip_1)) goto event_983_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_check_g_weap_index+1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_983_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(411, str_currz_1227, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(487, str_currtarg_1366, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(488, str_currhp_1367, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(7));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(489, str_currflag60_1368, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->flags.get(60));
    }
    event_983_6_end: ;
}
// Function purpose: generated callback event_func_1891 processes event block(s) 984_6. Actions/conditions:
//        984_6: checks scene is active; game state NPC_Weapon_; game state currHP; game state currTarg; this handler
//        gates a game event without a direct value/object action.
void Frames::event_func_1891()
{
    // event 984_6 : checks scene is active; game state NPC_Weapon_; game state currHP; game state currTarg; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_pathfinding_missing_equip_1)) goto event_984_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_weapon_460+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(411, str_currz_1227)))) == (empty_string))) goto event_984_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(488, str_currhp_1367)) > (0))) goto event_984_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(487, str_currtarg_1366)) == (0))) goto event_984_6_end;
        {
            loop_found_unarmed_running = true;
            int times = int(1);
            loop_found_unarmed_index = 0;
            while (loop_found_unarmed_index < times) {
                loop_found_unarmed_6();
                if (!loop_found_unarmed_running) break;
                loop_found_unarmed_index++;
            }
        }
    }
    event_984_6_end: ;
}
void Frames::loop_check_g_weap_6()
{
    event_func_1890();
    event_func_1891();
}
// Function purpose: generated callback event_func_1892 processes event block(s) 65_6. Actions/conditions:
//        65_6: adds a mapsetupobstaclemarker 323 instance; sets the selected object's horizontal position to
//        loop_load_x_index*16; sets the selected object's vertical position to gameVariables->get_value(490,
//        MapLoop)*16; plus 1 more actions.
void Frames::event_func_1892()
{
    // event 65_6 : adds a mapsetupobstaclemarker 323 instance; sets the selected object's horizontal position to loop_load_x_index*16; sets the selected object's vertical position to gameVariables->get_value(490, MapLoop)*16; plus 1 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_65_6_end;
        if (!((global_values->get(18)) != (2))) goto event_65_6_end;
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
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(491, str_boo_1370, 1);
    }
    event_65_6_end: ;
}
// Function purpose: generated callback event_func_1893 processes event block(s) 66_6. Actions/conditions:
//        66_6: increments boo by 1; adds a mapsetupobstaclemarker 323 instance; sets the selected object's horizontal
//        position to loop_load_x_index*16; plus 1 more actions.
void Frames::event_func_1893()
{
    // event 66_6 : increments boo by 1; adds a mapsetupobstaclemarker 323 instance; sets the selected object's horizontal position to loop_load_x_index*16; plus 1 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_66_6_end;
        if (!((global_values->get(18)) == (2))) goto event_66_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(296, str_nol7block_977), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) == (-1))) goto event_66_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(491, str_boo_1370, 1);
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
    event_66_6_end: ;
}
// Function purpose: generated callback event_func_1894 processes event block(s) 115_6. Actions/conditions:
//        115_6: adds a mapsetupobstaclemarker 323 instance; sets the selected object's horizontal position to
//        loop_load_x_index*16; sets the selected object's vertical position to gameVariables->get_value(490,
//        MapLoop)*16; plus 1 more actions.
void Frames::event_func_1894()
{
    // event 115_6 : adds a mapsetupobstaclemarker 323 instance; sets the selected object's horizontal position to loop_load_x_index*16; sets the selected object's vertical position to gameVariables->get_value(490, MapLoop)*16; plus 1 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_115_6_end;
        if (!((global_values->get(18)) != (2))) goto event_115_6_end;
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
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(492, str_block_log_1371, 1);
    }
    event_115_6_end: ;
}
// Function purpose: generated callback event_func_1895 processes event block(s) 116_6. Actions/conditions:
//        116_6: adds a mapsetupobstaclemarker 323 instance; sets the selected object's horizontal position to
//        loop_load_x_index*16; sets the selected object's vertical position to gameVariables->get_value(490,
//        MapLoop)*16; plus 1 more actions.
void Frames::event_func_1895()
{
    // event 116_6 : adds a mapsetupobstaclemarker 323 instance; sets the selected object's horizontal position to loop_load_x_index*16; sets the selected object's vertical position to gameVariables->get_value(490, MapLoop)*16; plus 1 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_116_6_end;
        if (!((global_values->get(18)) == (2))) goto event_116_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(296, str_nol7block_977), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) == (-1))) goto event_116_6_end;
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
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(492, str_block_log_1371, 1);
    }
    event_116_6_end: ;
}
void Frames::loop_make_layer7_block_6()
{
    event_func_1892();
    event_func_1893();
    event_func_1894();
    event_func_1895();
}
// Function purpose: generated callback event_func_1896 processes event block(s) 64_6. Actions/conditions:
//        64_6: sets loop_load_x_index to gameVariables->get_value(490, MapLoop).
void Frames::event_func_1896()
{
    // event 64_6 : sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_64_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(295, str_shadow_override_975), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) == (-1))) goto event_64_6_end;
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(-1, loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        }
    }
    event_64_6_end: ;
}
// Function purpose: generated callback event_func_1897 processes event block(s) 114_6. Actions/conditions:
//        114_6: sets loop_load_x_index to gameVariables->get_value(490, MapLoop).
void Frames::event_func_1897()
{
    // event 114_6 : sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_114_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(295, str_shadow_override_975), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) == (-1))) goto event_114_6_end;
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(-1, loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        }
    }
    event_114_6_end: ;
}
void Frames::loop_check_shad_override_6()
{
    event_func_1896();
    event_func_1897();
}
// Function purpose: generated callback event_func_1898 processes event block(s) 54_6. Actions/conditions:
//        54_6: sets ignore to 0; sets Ground_Obs to 0; sets Vent_Obs to 0; plus 5 more actions.
void Frames::event_func_1898()
{
    // event 54_6 : sets ignore to 0; sets Ground_Obs to 0; sets Vent_Obs to 0; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_54_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(493, str_ignore_1372, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(494, str_ground_obs_1373, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(495, str_vent_obs_1374, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(496, str_roof_obs_1375, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(497, str_obs_1376, 0);
    }
    event_54_6_end: ;
}
