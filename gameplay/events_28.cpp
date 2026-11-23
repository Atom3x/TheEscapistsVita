#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_2154 processes event block(s) 2012_6. Actions/conditions:
//        2012_6: saves the current object selection; disables flag 30 (gym activity or target-position state) on the
//        selected object; disables flag 31 (gym activity or movement phase) on the selected object.
void Frames::event_func_2154()
{
    // event 2012_6 : saves the current object selection; disables flag 30 (gym activity or target-position state) on the selected object; disables flag 31 (gym activity or movement phase) on the selected object
    bool or_result_2012_6 = false;
    bool or_temp_result_2012_6_0 = false;
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto or_event_2012_6_0_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_using_gym_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) != (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto or_event_2012_6_0_end;
        or_result_2012_6 = true;
        or_temp_result_2012_6_0 = true;
    }
    or_event_2012_6_0_end: ;
    inmateBase_instances.clear_saved_selection();
    if (or_temp_result_2012_6_0) {
        inmateBase_instances.save_selection();
    }
    // event 2012_6 : saves the current object selection; disables flag 30 (gym activity or target-position state) on the selected object; disables flag 31 (gym activity or movement phase) on the selected object
    bool or_temp_result_2012_6_1 = false;
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto or_event_2012_6_1_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_using_gym_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto or_event_2012_6_1_end;
        or_result_2012_6 = true;
        or_temp_result_2012_6_1 = true;
    }
    or_event_2012_6_1_end: ;
    if (or_temp_result_2012_6_1) {
        inmateBase_instances.save_selection();
    }
    // event 2012_6 : saves the current object selection; disables flag 30 (gym activity or target-position state) on the selected object; disables flag 31 (gym activity or movement phase) on the selected object
    bool or_temp_result_2012_6_2 = false;
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto or_event_2012_6_2_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_using_gym_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(60))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto or_event_2012_6_2_end;
        or_result_2012_6 = true;
        or_temp_result_2012_6_2 = true;
    }
    or_event_2012_6_2_end: ;
    if (or_temp_result_2012_6_2) {
        inmateBase_instances.save_selection();
    }
    // event 2012_6 : saves the current object selection; disables flag 30 (gym activity or target-position state) on the selected object; disables flag 31 (gym activity or movement phase) on the selected object
    bool or_temp_result_2012_6_3 = false;
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto or_event_2012_6_3_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_using_gym_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) != (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto or_event_2012_6_3_end;
        or_result_2012_6 = true;
        or_temp_result_2012_6_3 = true;
        or_event_2012_6_3_end: ;
        if (or_temp_result_2012_6_3) {
            inmateBase_instances.save_selection();
        }
        if (!or_result_2012_6) goto or_final_or_event_2012_6_3_end;
        inmateBase_instances.empty_selection();
        if (or_temp_result_2012_6_0 || or_temp_result_2012_6_1 || or_temp_result_2012_6_2 || or_temp_result_2012_6_3) {
            inmateBase_instances.restore_selection();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(30);
            ((Active*)*it)->alterables->flags.disable(31);
        }
        {
            loop_unmount_npc_running = true;
            int times = int(1);
            loop_unmount_npc_index = 0;
            while (loop_unmount_npc_index < times) {
                loop_unmount_npc_6();
                if (!loop_unmount_npc_running) break;
                loop_unmount_npc_index++;
            }
        }
    }
    or_final_or_event_2012_6_3_end: ;
}
// Function purpose: generated callback event_func_2155 processes event block(s) 2014_6. Actions/conditions:
//        2014_6: sets found_chair to 0; sets charID to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(0).
void Frames::event_func_2155()
{
    // event 2014_6 : sets found_chair to 0; sets charID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0)
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2014_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_using_gym_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(30))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(31))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2014_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_outfit_459+number_to_string(loop_using_gym_index+1))) != (empty_string))) goto event_2014_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(419, str_found_chair_1244, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(94, str_charid_605, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0));
        {
            loop_find_gym_running = true;
            int times = int(qualifier_9.size());
            loop_find_gym_index = 0;
            while (loop_find_gym_index < times) {
                loop_find_gym_6();
                if (!loop_find_gym_running) break;
                loop_find_gym_index++;
            }
        }
    }
    event_2014_6_end: ;
}
// Function purpose: generated callback event_func_2156 processes event block(s) 2017_6. Actions/conditions:
//        2017_6: disables flag 30 (gym activity or target-position state) on the selected object; enables flag 31
//        (gym activity or movement phase) on the selected object; sets the selected object's direction to
//        ((Active*)get_single(gym3_317_instances, it.current_index, default_active_instance))->get_direction(); plus
//        5 more actions.
void Frames::event_func_2156()
{
    // event 2017_6 : disables flag 30 (gym activity or target-position state) on the selected object; enables flag 31 (gym activity or movement phase) on the selected object; sets the selected object's direction to ((Active*)get_single(gym3_317_instances, it.current_index, default_active_instance))->get_direction(); plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2017_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_using_gym_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2017_6_end;
        gym3_317_instances.clear_selection();
        if (!check_overlap(inmateBase_instances, gym3_317_instances)) goto event_2017_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(30))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(31))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2017_6_end;
        for (ObjectIterator it(gym3_317_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!gym3_317_instances.has_selection()) goto event_2017_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(30);
            ((Active*)*it)->alterables->flags.enable(31);
            ((Active*)*it)->set_direction(((Active*)get_single(gym3_317_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->set_x(((Active*)get_single(gym3_317_instances, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->set_y(((Active*)get_single(gym3_317_instances, it.current_index, default_active_instance))->get_y()+4);
        }
    }
    event_2017_6_end: ;
}
// Function purpose: generated callback event_func_2157 processes event block(s) 2018_6. Actions/conditions:
//        2018_6: disables flag 30 (gym activity or target-position state) on the selected object; enables flag 31
//        (gym activity or movement phase) on the selected object; sets the selected object's direction to 0; plus 6
//        more actions.
void Frames::event_func_2157()
{
    // event 2018_6 : disables flag 30 (gym activity or target-position state) on the selected object; enables flag 31 (gym activity or movement phase) on the selected object; sets the selected object's direction to 0; plus 6 more actions
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2018_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_using_gym_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2018_6_end;
        punchbag_436_instances.clear_selection();
        if (!check_overlap(inmateBase_instances, punchbag_436_instances)) goto event_2018_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(30))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(31))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2018_6_end;
        for (ObjectIterator it(punchbag_436_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!punchbag_436_instances.has_selection()) goto event_2018_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(30);
            ((Active*)*it)->alterables->flags.enable(31);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)get_single(punchbag_436_instances, it.current_index, default_active_instance))->get_x()+2);
            ((Active*)*it)->set_y(((Active*)get_single(punchbag_436_instances, it.current_index, default_active_instance))->get_y()+2);
        }
        for (ObjectIterator it(punchbag_436_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 25+randrange_event(50));
        }
    }
    event_2018_6_end: ;
}
// Function purpose: generated callback event_func_2158 processes event block(s) 2019_6. Actions/conditions:
//        2019_6: disables flag 30 (gym activity or target-position state) on the selected object; enables flag 31
//        (gym activity or movement phase) on the selected object; sets the selected object's direction to 0; plus 6
//        more actions.
void Frames::event_func_2158()
{
    // event 2019_6 : disables flag 30 (gym activity or target-position state) on the selected object; enables flag 31 (gym activity or movement phase) on the selected object; sets the selected object's direction to 0; plus 6 more actions
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2019_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_using_gym_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2019_6_end;
        speedbag_439_instances.clear_selection();
        if (!check_overlap(inmateBase_instances, speedbag_439_instances)) goto event_2019_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(30))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(31))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2019_6_end;
        for (ObjectIterator it(speedbag_439_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!speedbag_439_instances.has_selection()) goto event_2019_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(30);
            ((Active*)*it)->alterables->flags.enable(31);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)get_single(speedbag_439_instances, it.current_index, default_active_instance))->get_x()+2);
            ((Active*)*it)->set_y(((Active*)get_single(speedbag_439_instances, it.current_index, default_active_instance))->get_y()+2);
        }
        for (ObjectIterator it(speedbag_439_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 25+randrange_event(30));
        }
    }
    event_2019_6_end: ;
}
// Function purpose: generated callback event_func_2159 processes event block(s) 2030_6. Actions/conditions:
//        2030_6: disables flag 30 (gym activity or target-position state) on the selected object; enables flag 31
//        (gym activity or movement phase) on the selected object; sets the selected object's direction to
//        ((Active*)get_single(joggingmat_407_instances, it.current_index, default_active_instance))->get_direction();
//        plus 5 more actions.
void Frames::event_func_2159()
{
    // event 2030_6 : disables flag 30 (gym activity or target-position state) on the selected object; enables flag 31 (gym activity or movement phase) on the selected object; sets the selected object's direction to ((Active*)get_single(joggingmat_407_instances, it.current_index, default_active_instance))->get_direction(); plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2030_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_using_gym_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2030_6_end;
        joggingmat_407_instances.clear_selection();
        if (!check_overlap(inmateBase_instances, joggingmat_407_instances)) goto event_2030_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(30))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(31))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2030_6_end;
        for (ObjectIterator it(joggingmat_407_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!joggingmat_407_instances.has_selection()) goto event_2030_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(30);
            ((Active*)*it)->alterables->flags.enable(31);
            ((Active*)*it)->set_direction(((Active*)get_single(joggingmat_407_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->set_x(((Active*)get_single(joggingmat_407_instances, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->set_y(((Active*)get_single(joggingmat_407_instances, it.current_index, default_active_instance))->get_y()+4);
        }
    }
    event_2030_6_end: ;
}
// Function purpose: generated callback event_func_2160 processes event block(s) 2031_6. Actions/conditions:
//        2031_6: sets the object's animation to 10; disables flag 30 (gym activity or target-position state) on the
//        selected object; enables flag 31 (gym activity or movement phase) on the selected object; plus 5 more
//        actions.
void Frames::event_func_2160()
{
    // event 2031_6 : sets the object's animation to 10; disables flag 30 (gym activity or target-position state) on the selected object; enables flag 31 (gym activity or movement phase) on the selected object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2031_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_using_gym_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2031_6_end;
        gym4_318_instances.clear_selection();
        if (!check_overlap(inmateBase_instances, gym4_318_instances)) goto event_2031_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(30))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(31))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2031_6_end;
        for (ObjectIterator it(gym4_318_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!gym4_318_instances.has_selection()) goto event_2031_6_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_using_gym_index+1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_2031_6_end;
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(30);
            ((Active*)*it)->alterables->flags.enable(31);
            ((Active*)*it)->set_x(((Active*)get_single(gym4_318_instances, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->set_y(((Active*)get_single(gym4_318_instances, it.current_index, default_active_instance))->get_y()+8);
        }
    }
    event_2031_6_end: ;
}
// Function purpose: generated callback event_func_2161 processes event block(s) 2032_6. Actions/conditions:
//        2032_6: sets the object's animation to 9; disables flag 30 (gym activity or target-position state) on the
//        selected object; enables flag 31 (gym activity or movement phase) on the selected object; plus 5 more
//        actions.
void Frames::event_func_2161()
{
    // event 2032_6 : sets the object's animation to 9; disables flag 30 (gym activity or target-position state) on the selected object; enables flag 31 (gym activity or movement phase) on the selected object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2032_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_using_gym_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2032_6_end;
        pushupmat_408_instances.clear_selection();
        if (!check_overlap(inmateBase_instances, pushupmat_408_instances)) goto event_2032_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(30))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(31))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2032_6_end;
        for (ObjectIterator it(pushupmat_408_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!pushupmat_408_instances.has_selection()) goto event_2032_6_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_using_gym_index+1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(9)) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_2032_6_end;
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(30);
            ((Active*)*it)->alterables->flags.enable(31);
            ((Active*)*it)->set_x(((Active*)get_single(pushupmat_408_instances, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->set_y(((Active*)get_single(pushupmat_408_instances, it.current_index, default_active_instance))->get_y()+6);
        }
    }
    event_2032_6_end: ;
}
// Function purpose: generated callback event_func_2162 processes event block(s) 2033_6. Actions/conditions:
//        2033_6: sets the object's animation to 18; disables flag 30 (gym activity or target-position state) on the
//        selected object; enables flag 31 (gym activity or movement phase) on the selected object; plus 5 more
//        actions.
void Frames::event_func_2162()
{
    // event 2033_6 : sets the object's animation to 18; disables flag 30 (gym activity or target-position state) on the selected object; enables flag 31 (gym activity or movement phase) on the selected object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2033_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_using_gym_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2033_6_end;
        skippingmat_435_instances.clear_selection();
        if (!check_overlap(inmateBase_instances, skippingmat_435_instances)) goto event_2033_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(30))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(31))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2033_6_end;
        for (ObjectIterator it(skippingmat_435_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!skippingmat_435_instances.has_selection()) goto event_2033_6_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_using_gym_index+1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(18)) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_2033_6_end;
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->force_animation(18);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(30);
            ((Active*)*it)->alterables->flags.enable(31);
            ((Active*)*it)->set_x(((Active*)get_single(skippingmat_435_instances, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->set_y(((Active*)get_single(skippingmat_435_instances, it.current_index, default_active_instance))->get_y()+4);
        }
    }
    event_2033_6_end: ;
}
// Function purpose: generated callback event_func_2163 processes event block(s) 2034_6. Actions/conditions:
//        2034_6: sets the object's animation to 19; disables flag 30 (gym activity or target-position state) on the
//        selected object; enables flag 31 (gym activity or movement phase) on the selected object; plus 5 more
//        actions.
void Frames::event_func_2163()
{
    // event 2034_6 : sets the object's animation to 19; disables flag 30 (gym activity or target-position state) on the selected object; enables flag 31 (gym activity or movement phase) on the selected object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2034_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_using_gym_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2034_6_end;
        chinupbar_430_instances.clear_selection();
        if (!check_overlap(inmateBase_instances, chinupbar_430_instances)) goto event_2034_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(30))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(31))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2034_6_end;
        for (ObjectIterator it(chinupbar_430_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!chinupbar_430_instances.has_selection()) goto event_2034_6_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_using_gym_index+1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(19)) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_2034_6_end;
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->force_animation(19);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(30);
            ((Active*)*it)->alterables->flags.enable(31);
            ((Active*)*it)->set_x(((Active*)get_single(chinupbar_430_instances, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->set_y(((Active*)get_single(chinupbar_430_instances, it.current_index, default_active_instance))->get_y()+4);
        }
    }
    event_2034_6_end: ;
}
// Function purpose: generated callback event_func_2164 processes event block(s) 2035_6. Actions/conditions:
//        2035_6: sets found_chair to 0; sets charID to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(0).
void Frames::event_func_2164()
{
    // event 2035_6 : sets found_chair to 0; sets charID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0)
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2035_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_using_gym_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2035_6_end;
        qualifier_9.clear_selection();
        if (!check_overlap(inmateBase_instances, qualifier_9)) goto event_2035_6_end;
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!qualifier_9.has_selection()) goto event_2035_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(30))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(31))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2035_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(419, str_found_chair_1244, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(94, str_charid_605, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0));
        {
            loop_find_gym_running = true;
            int times = int(qualifier_9.size());
            loop_find_gym_index = 0;
            while (loop_find_gym_index < times) {
                loop_find_gym_6();
                if (!loop_find_gym_running) break;
                loop_find_gym_index++;
            }
        }
    }
    event_2035_6_end: ;
}
// Function purpose: generated callback event_func_2165 processes event block(s) 2036_6. Actions/conditions:
//        2036_6: saves the current object selection; saves the current object selection; sets the object's animation
//        to 0.
void Frames::event_func_2165()
{
    // event 2036_6 : saves the current object selection; saves the current object selection; sets the object's animation to 0
    bool or_result_2036_6 = false;
    bool or_temp_result_2036_6_0 = false;
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto or_event_2036_6_0_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_using_gym_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(31))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto or_event_2036_6_0_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(10))) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto or_event_2036_6_0_end;
        or_result_2036_6 = true;
        or_temp_result_2036_6_0 = true;
    }
    or_event_2036_6_0_end: ;
    inmateBase_instances.clear_saved_selection();
    qualifier_12.clear_saved_selection();
    if (or_temp_result_2036_6_0) {
        qualifier_12.save_selection();
        inmateBase_instances.save_selection();
    }
    // event 2036_6 : saves the current object selection; saves the current object selection; sets the object's animation to 0
    bool or_temp_result_2036_6_1 = false;
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto or_event_2036_6_1_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_using_gym_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(31))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto or_event_2036_6_1_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(7))) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto or_event_2036_6_1_end;
        or_result_2036_6 = true;
        or_temp_result_2036_6_1 = true;
        or_event_2036_6_1_end: ;
        if (or_temp_result_2036_6_1) {
            qualifier_12.save_selection();
            inmateBase_instances.save_selection();
        }
        if (!or_result_2036_6) goto or_final_or_event_2036_6_1_end;
        inmateBase_instances.empty_selection();
        qualifier_12.empty_selection();
        if (or_temp_result_2036_6_0 || or_temp_result_2036_6_1) {
            qualifier_12.restore_selection();
        }
        if (or_temp_result_2036_6_0 || or_temp_result_2036_6_1) {
            inmateBase_instances.restore_selection();
        }
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    or_final_or_event_2036_6_1_end: ;
}
void Frames::loop_using_gym_6()
{
    event_func_2154();
    event_func_2155();
    event_func_2156();
    event_func_2157();
    event_func_2158();
    event_func_2159();
    event_func_2160();
    event_func_2161();
    event_func_2162();
    event_func_2163();
    event_func_2164();
    event_func_2165();
}
// Function purpose: generated callback event_func_2166 processes event block(s) 4199_6. Actions/conditions:
//        4199_6: sets mID to ((Active*)single_instance_4199_6_0)->alterables->values.get(0); sets mZ to
//        ((Active*)single_instance_4199_6_0)->alterables->values.get(25); adds a markervendor 332 instance; plus 6
//        more actions.
void Frames::event_func_2166()
{
    // event 4199_6 : sets mID to ((Active*)single_instance_4199_6_0)->alterables->values.get(0); sets mZ to ((Active*)single_instance_4199_6_0)->alterables->values.get(25); adds a markervendor 332 instance; plus 6 more actions
    {
        if (!(group_loops_1)) goto event_4199_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(534, str_p_found_1434)) == (0))) goto event_4199_6_end;
        inmateBase_instances.clear_selection();
        FrameObject * single_instance_4199_6_0; single_instance_4199_6_0 = pick_random(inmateBase_instances);
        if (single_instance_4199_6_0 == NULL) goto event_4199_6_end;
        if (!((((Active*)single_instance_4199_6_0)->alterables->strings.get(2)) == (empty_string))) goto event_4199_6_end;
        if (!((((Active*)single_instance_4199_6_0)->alterables->strings.get(1)) == (str_0_0_0_0_734))) goto event_4199_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(135, str_mid_700, ((Active*)single_instance_4199_6_0)->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(392, str_mz_1194, ((Active*)single_instance_4199_6_0)->alterables->values.get(25));
        markervendor_332_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_markervendor_332(0, 0), 1);
            markervendor_332_instances.add_back();
        }
        for (ObjectIterator it(markervendor_332_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->alterables->values.set(0, ((Active*)single_instance_4199_6_0)->alterables->values.get(0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(534, str_p_found_1434, 1);
            loop_create_mission_player_running = false;
    
    }
    event_4199_6_end: ;
}
void Frames::loop_create_mission_player_6()
{
    event_func_2166();
}
// Function purpose: generated callback event_func_2167 processes event block(s) 4160_6. Actions/conditions:
//        4160_6: splits saved text into fields; sets MissionType to
//        stringtokenizer_81->get(randrange_event(stringtokenizer_81->get_count())); sets mID to -10; plus 6 more
//        actions.
void Frames::event_func_2167()
{
    // event 4160_6 : splits saved text into fields; sets MissionType to stringtokenizer_81->get(randrange_event(stringtokenizer_81->get_count())); sets mID to -10; plus 6 more actions
    {
        if (!(group_code_1)) goto event_4160_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(323, str_mcount_1104)) < (3))) goto event_4160_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_4160_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(str_stealchar_beat_give_distract_1435, str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(244, str_missiontype_883, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get_count())));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(135, str_mid_700, -10);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(534, str_p_found_1434, 0);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_create_mission_player_running = true;
            int times = int(30);
            loop_create_mission_player_index = 0;
            while (loop_create_mission_player_index < times) {
                loop_create_mission_player_6();
                if (!loop_create_mission_player_running) break;
                loop_create_mission_player_index++;
            }
        }
        {
            if (loops == NULL) goto dynamic_4160_6_0_end;
            DynamicLoops::iterator dyn_it = (*loops).find(str_create_mission_1436+((AssociateArray*)get_instance(gameVariables_instances))->get_string(244, str_missiontype_883));
            if (dyn_it == (*loops).end()) goto dynamic_4160_6_0_end;
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
        dynamic_4160_6_0_end: ;
    }
    event_4160_6_end: ;
}
// Function purpose: generated callback event_func_2168 processes event block(s) 4161_6. Actions/conditions:
//        4161_6: splits saved text into fields; sets MissionType to
//        stringtokenizer_81->get(randrange_event(stringtokenizer_81->get_count())); sets mID to -10; plus 6 more
//        actions.
void Frames::event_func_2168()
{
    // event 4161_6 : splits saved text into fields; sets MissionType to stringtokenizer_81->get(randrange_event(stringtokenizer_81->get_count())); sets mID to -10; plus 6 more actions
    {
        if (!(group_code_1)) goto event_4161_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(323, str_mcount_1104)) < (2))) goto event_4161_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_4161_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(str_stealchar_beat_give_distract_1435, str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(244, str_missiontype_883, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get_count())));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(135, str_mid_700, -10);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(534, str_p_found_1434, 0);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_create_mission_player_running = true;
            int times = int(30);
            loop_create_mission_player_index = 0;
            while (loop_create_mission_player_index < times) {
                loop_create_mission_player_6();
                if (!loop_create_mission_player_running) break;
                loop_create_mission_player_index++;
            }
        }
        {
            if (loops == NULL) goto dynamic_4161_6_0_end;
            DynamicLoops::iterator dyn_it = (*loops).find(str_create_mission_1436+((AssociateArray*)get_instance(gameVariables_instances))->get_string(244, str_missiontype_883));
            if (dyn_it == (*loops).end()) goto dynamic_4161_6_0_end;
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
        dynamic_4161_6_0_end: ;
    }
    event_4161_6_end: ;
}
void Frames::loop_loop_npc_missions_6()
{
    event_func_2167();
    event_func_2168();
}
// Function purpose: generated callback event_func_2169 processes event block(s) 970_6. Actions/conditions:
//        970_6: sets a game or interface text string; adds a outfitguard 248 instance; sets the selected object's
//        numeric value to gameVariables->get_value(411, currZ).
void Frames::event_func_2169()
{
    // event 970_6 : sets a game or interface text string; adds a outfitguard 248 instance; sets the selected object's numeric value to gameVariables->get_value(411, currZ)
    {
        if (!(group_code_1 && group_code_pathfinding_missing_equip_1)) goto event_970_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(383, str_range_1181)) <= (24))) goto event_970_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_check_g_outfits_index+1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_970_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(411, str_currz_1227)), str_3_100_540);
        outfitguard_248_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitguard_248(0, 0), 1);
            outfitguard_248_instances.add_back();
        }
        for (ObjectIterator it(outfitguard_248_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(411, str_currz_1227));
        }
    }
    event_970_6_end: ;
}
// Function purpose: generated callback event_func_2170 processes event block(s) 971_6. Actions/conditions:
//        971_6: adds a usespot 208 instance; sets found to 0.
void Frames::event_func_2170()
{
    // event 971_6 : adds a usespot 208 instance; sets found to 0
    {
        if (!(group_code_1 && group_code_pathfinding_missing_equip_1)) goto event_971_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(383, str_range_1181)) > (24))) goto event_971_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_check_g_outfits_index+1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_971_6_end;
        usespot_208_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_usespot_208(0, 0), 1);
            usespot_208_instances.add_back();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(369, str_found_1165, 0);
        {
            loop_find_laundry_space_running = true;
            int times = int(1);
            loop_find_laundry_space_index = 0;
            while (loop_find_laundry_space_index < times) {
                loop_find_laundry_space_6();
                if (!loop_find_laundry_space_running) break;
                loop_find_laundry_space_index++;
            }
        }
    }
    event_971_6_end: ;
}
// Function purpose: generated callback event_func_2171 processes event block(s) 972_6. Actions/conditions:
//        972_6: sets a game or interface text string; adds a outfitinmate 249 instance; sets the selected object's
//        numeric value to gameVariables->get_value(411, currZ).
void Frames::event_func_2171()
{
    // event 972_6 : sets a game or interface text string; adds a outfitinmate 249 instance; sets the selected object's numeric value to gameVariables->get_value(411, currZ)
    {
        if (!(group_code_1 && group_code_pathfinding_missing_equip_1)) goto event_972_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(383, str_range_1181)) <= (24))) goto event_972_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_972_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_972_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_972_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_check_g_outfits_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_972_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(411, str_currz_1227)), str_4_100_506);
        outfitinmate_249_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmate_249(0, 0), 1);
            outfitinmate_249_instances.add_back();
        }
        for (ObjectIterator it(outfitinmate_249_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(411, str_currz_1227));
        }
    }
    event_972_6_end: ;
}
// Function purpose: generated callback event_func_2172 processes event block(s) 973_6. Actions/conditions:
//        973_6: sets a game or interface text string; adds a outfitinmateescteam 481 instance; sets the selected
//        object's numeric value to gameVariables->get_value(411, currZ).
void Frames::event_func_2172()
{
    // event 973_6 : sets a game or interface text string; adds a outfitinmateescteam 481 instance; sets the selected object's numeric value to gameVariables->get_value(411, currZ)
    {
        if (!(group_code_1 && group_code_pathfinding_missing_equip_1)) goto event_973_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(383, str_range_1181)) <= (24))) goto event_973_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_973_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_check_g_outfits_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_973_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(411, str_currz_1227)), str_210_100_508);
        outfitinmateescteam_481_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmateescteam_481(0, 0), 1);
            outfitinmateescteam_481_instances.add_back();
        }
        for (ObjectIterator it(outfitinmateescteam_481_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(411, str_currz_1227));
        }
    }
    event_973_6_end: ;
}
// Function purpose: generated callback event_func_2173 processes event block(s) 974_6. Actions/conditions:
//        974_6: sets a game or interface text string; adds a outfitinmatebond 486 instance; sets the selected
//        object's numeric value to gameVariables->get_value(411, currZ).
void Frames::event_func_2173()
{
    // event 974_6 : sets a game or interface text string; adds a outfitinmatebond 486 instance; sets the selected object's numeric value to gameVariables->get_value(411, currZ)
    {
        if (!(group_code_1 && group_code_pathfinding_missing_equip_1)) goto event_974_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(383, str_range_1181)) <= (24))) goto event_974_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_974_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_check_g_outfits_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_974_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(411, str_currz_1227)), str_215_100_509);
        outfitinmatebond_486_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmatebond_486(0, 0), 1);
            outfitinmatebond_486_instances.add_back();
        }
        for (ObjectIterator it(outfitinmatebond_486_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(411, str_currz_1227));
        }
    }
    event_974_6_end: ;
}
// Function purpose: generated callback event_func_2174 processes event block(s) 975_6. Actions/conditions:
//        975_6: sets a game or interface text string; adds a outfitinmatess 503 instance; sets the selected object's
//        numeric value to gameVariables->get_value(411, currZ).
void Frames::event_func_2174()
{
    // event 975_6 : sets a game or interface text string; adds a outfitinmatess 503 instance; sets the selected object's numeric value to gameVariables->get_value(411, currZ)
    {
        if (!(group_code_1 && group_code_pathfinding_missing_equip_1)) goto event_975_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(383, str_range_1181)) <= (24))) goto event_975_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_975_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_check_g_outfits_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_975_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(411, str_currz_1227)), str_238_100_510);
        outfitinmatess_503_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmatess_503(0, 0), 1);
            outfitinmatess_503_instances.add_back();
        }
        for (ObjectIterator it(outfitinmatess_503_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(411, str_currz_1227));
        }
    }
    event_975_6_end: ;
}
// Function purpose: generated callback event_func_2175 processes event block(s) 976_6. Actions/conditions:
//        976_6: adds a usespot 208 instance; sets found to 0.
void Frames::event_func_2175()
{
    // event 976_6 : adds a usespot 208 instance; sets found to 0
    {
        if (!(group_code_1 && group_code_pathfinding_missing_equip_1)) goto event_976_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(383, str_range_1181)) > (24))) goto event_976_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_check_g_outfits_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_976_6_end;
        usespot_208_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_usespot_208(0, 0), 1);
            usespot_208_instances.add_back();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(369, str_found_1165, 0);
        {
            loop_find_laundry_space_running = true;
            int times = int(1);
            loop_find_laundry_space_index = 0;
            while (loop_find_laundry_space_index < times) {
                loop_find_laundry_space_6();
                if (!loop_find_laundry_space_running) break;
                loop_find_laundry_space_index++;
            }
        }
    }
    event_976_6_end: ;
}
void Frames::loop_naked_check_pos_6()
{
    event_func_2169();
    event_func_2170();
    event_func_2171();
    event_func_2172();
    event_func_2173();
    event_func_2174();
    event_func_2175();
}
// Function purpose: generated callback event_func_2176 processes event block(s) 969_6. Actions/conditions:
//        969_6: sets currX to ((Active*)get_single(qualifier_14, default_active_instance))->get_x(); sets currY to
//        ((Active*)get_single(qualifier_14, default_active_instance))->get_y(); sets currZ to
//        ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25); plus 1 more
//        actions.
void Frames::event_func_2176()
{
    // event 969_6 : sets currX to ((Active*)get_single(qualifier_14, default_active_instance))->get_x(); sets currY to ((Active*)get_single(qualifier_14, default_active_instance))->get_y(); sets currZ to ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25); plus 1 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_missing_equip_1)) goto event_969_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_check_g_outfits_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(60))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_969_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(535, str_currx_1437, ((Active*)get_single(qualifier_14, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(536, str_curry_290, ((Active*)get_single(qualifier_14, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(411, str_currz_1227, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(383, str_range_1181, get_distance_int(((Active*)get_single(qualifier_14, default_active_instance))->get_x(), ((Active*)get_single(qualifier_14, default_active_instance))->get_y(), ((Active*)get_instance(containerlaundryclean_275_instances, default_active_instance))->get_x(), ((Active*)get_instance(containerlaundryclean_275_instances, default_active_instance))->get_y()));
        {
            loop_naked_check_pos_running = true;
            int times = int(1);
            loop_naked_check_pos_index = 0;
            while (loop_naked_check_pos_index < times) {
                loop_naked_check_pos_6();
                if (!loop_naked_check_pos_running) break;
                loop_naked_check_pos_index++;
            }
        }
    }
    event_969_6_end: ;
}
void Frames::loop_found_naked_6()
{
    event_func_2176();
}
// Function purpose: generated callback event_func_2177 processes event block(s) 935_6. Actions/conditions:
//        935_6: sets the object's animation to 0; removes the selected object.
void Frames::event_func_2177()
{
    // event 935_6 : sets the object's animation to 0; removes the selected object
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_935_6_end;
        activityPanel_instances.clear_selection();
        for (ObjectIterator it(activityPanel_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_workout_16))) { it.deselect(); continue; }
        }
        if (!activityPanel_instances.has_selection()) goto event_935_6_end;
        activityProgress_instances.clear_selection();
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_workout_16))) { it.deselect(); continue; }
        }
        if (!activityProgress_instances.has_selection()) goto event_935_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(activityPanel_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        activityText_instances.clear_selection();
        for (ObjectIterator it(activityText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
            group_code_gym_equip_punch_bag_1 = false;
    
            group_code_gym_equip_speed_bag_1 = false;
    
            group_code_gym_equip_skipping_1 = false;
    
            group_code_gym_equip_press_ups_1 = false;
    
            group_code_gym_equip_weights_1 = false;
    
            group_code_gym_equip_treadmill_1 = false;
    
        activityMarker_instances.clear_selection();
        for (ObjectIterator it(activityMarker_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_935_6_end: ;
}
void Frames::loop_climb_off_2_6()
{
    event_func_2177();
}
// Function purpose: generated callback event_func_2178 processes event block(s) 923_6. Actions/conditions:
//        923_6: sets mat to 0.
void Frames::event_func_2178()
{
    // event 923_6 : sets mat to 0
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_923_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(537, str_mat_1438, 0);
    }
    event_923_6_end: ;
}
// Function purpose: generated callback event_func_2179 processes event block(s) 924_6. Actions/conditions:
//        924_6: sets blocked to 1.
void Frames::event_func_2179()
{
    // event 924_6 : sets blocked to 1
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_924_6_end;
        unmountcheck_197_instances.clear_selection();
        for (ObjectIterator it(unmountcheck_197_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!unmountcheck_197_instances.has_selection()) goto event_924_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(538, str_blocked_1439, 1);
    }
    event_924_6_end: ;
}
// Function purpose: generated callback event_func_2180 processes event block(s) 925_6. Actions/conditions:
//        925_6: sets blocked to 1.
void Frames::event_func_2180()
{
    // event 925_6 : sets blocked to 1
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_925_6_end;
        unmountcheck_197_instances.clear_selection();
        qualifier_1.clear_selection();
        if (!check_overlap(unmountcheck_197_instances, qualifier_1)) goto event_925_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(538, str_blocked_1439, 1);
    }
    event_925_6_end: ;
}
// Function purpose: generated callback event_func_2181 processes event block(s) 926_6. Actions/conditions:
//        926_6: sets blocked to 1.
void Frames::event_func_2181()
{
    // event 926_6 : sets blocked to 1
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_926_6_end;
        unmountcheck_197_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(unmountcheck_197_instances, qualifier_7)) goto event_926_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, bedplayer_338_instances)) goto event_926_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(538, str_blocked_1439, 1);
    }
    event_926_6_end: ;
}
// Function purpose: generated callback event_func_2182 processes event block(s) 927_6. Actions/conditions:
//        927_6: sets blocked to 1.
void Frames::event_func_2182()
{
    // event 927_6 : sets blocked to 1
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_927_6_end;
        unmountcheck_197_instances.clear_selection();
        qualifier_4.clear_selection();
        if (!check_overlap(unmountcheck_197_instances, qualifier_4)) goto event_927_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(538, str_blocked_1439, 1);
    }
    event_927_6_end: ;
}
// Function purpose: generated callback event_func_2183 processes event block(s) 928_6. Actions/conditions:
//        928_6: sets blocked to 1.
void Frames::event_func_2183()
{
    // event 928_6 : sets blocked to 1
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_928_6_end;
        unmountcheck_197_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(unmountcheck_197_instances, qualifier_19)) goto event_928_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(538, str_blocked_1439, 1);
    }
    event_928_6_end: ;
}
// Function purpose: generated callback event_func_2184 processes event block(s) 929_6. Actions/conditions:
//        929_6: sets the selected object's vertical position to selected object->get_y()+16.
void Frames::event_func_2184()
{
    // event 929_6 : sets the selected object's vertical position to selected object->get_y()+16
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_929_6_end;
        unmountcheck_197_instances.clear_selection();
        qualifier_18.clear_selection();
        if (!check_overlap(unmountcheck_197_instances, qualifier_18)) goto event_929_6_end;
        for (ObjectIterator it(unmountcheck_197_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+16);
        }
    }
    event_929_6_end: ;
}
// Function purpose: generated callback event_func_2185 processes event block(s) 930_6. Actions/conditions:
//        930_6: sets blocked to 1.
void Frames::event_func_2185()
{
    // event 930_6 : sets blocked to 1
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_930_6_end;
        unmountcheck_197_instances.clear_selection();
        qualifier_18.clear_selection();
        if (!check_overlap(unmountcheck_197_instances, qualifier_18)) goto event_930_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, bedplayer_338_instances)) goto event_930_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(538, str_blocked_1439, 1);
    }
    event_930_6_end: ;
}
// Function purpose: generated callback event_func_2186 processes event block(s) 931_6. Actions/conditions:
//        931_6: sets blocked to 1.
void Frames::event_func_2186()
{
    // event 931_6 : sets blocked to 1
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_931_6_end;
        unmountcheck_197_instances.clear_selection();
        qualifier_22.clear_selection();
        if (!check_overlap(unmountcheck_197_instances, qualifier_22)) goto event_931_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, bedplayer_338_instances)) goto event_931_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(538, str_blocked_1439, 1);
    }
    event_931_6_end: ;
}
// Function purpose: generated callback event_func_2187 processes event block(s) 932_6. Actions/conditions:
//        932_6: sets the object's animation to 0; sets the object position in the world.
void Frames::event_func_2187()
{
    // event 932_6 : sets the object's animation to 0; sets the object position in the world
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_932_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(538, str_blocked_1439)) == (0))) goto event_932_6_end;
        playerBase_instances.clear_selection();
        qualifier_1.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_1)) goto event_932_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        {
            FrameObject * parent = ((Active*)get_instance(unmountcheck_197_instances));
            if (parent == NULL) goto pos_end_932_6_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_932_6_0: ;
        }
    }
    event_932_6_end: ;
}
// Function purpose: generated callback event_func_2188 processes event block(s) 933_6. Actions/conditions:
//        933_6: sets the selected object's numeric value to 0.
void Frames::event_func_2188()
{
    // event 933_6 : sets the selected object's numeric value to 0
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_933_6_end;
        qualifier_1.clear_selection();
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!qualifier_1.has_selection()) goto event_933_6_end;
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_933_6_end: ;
}
// Function purpose: generated callback event_func_2189 processes event block(s) 934_6. Actions/conditions:
//        934_6: checks scene is active; game state blocked; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_2189()
{
    // event 934_6 : checks scene is active; game state blocked; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_934_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(538, str_blocked_1439)) == (0))) goto event_934_6_end;
        {
            loop_climb_off_2_running = true;
            int times = int(1);
            loop_climb_off_2_index = 0;
            while (loop_climb_off_2_index < times) {
                loop_climb_off_2_6();
                if (!loop_climb_off_2_running) break;
                loop_climb_off_2_index++;
            }
        }
    }
    event_934_6_end: ;
}
// Function purpose: generated callback event_func_2190 processes event block(s) 936_6. Actions/conditions:
//        936_6: removes the selected object.
void Frames::event_func_2190()
{
    // event 936_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_936_6_end;
            group_code_input_dismount_1 = false;
    
        unmountcheck_197_instances.clear_selection();
        for (ObjectIterator it(unmountcheck_197_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_936_6_end: ;
}
void Frames::loop_climb_off_6()
{
    event_func_2178();
    event_func_2179();
    event_func_2180();
    event_func_2181();
    event_func_2182();
    event_func_2183();
    event_func_2184();
    event_func_2185();
    event_func_2186();
    event_func_2187();
    event_func_2188();
    event_func_2189();
    event_func_2190();
}
// Function purpose: generated callback event_func_2191 processes event block(s) 2028_6. Actions/conditions:
//        2028_6: sets the object's animation to 6.
void Frames::event_func_2191()
{
    // event 2028_6 : sets the object's animation to 6
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2028_6_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(539, str_npcid_1440)))) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_2028_6_end;
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->force_animation(6);
        }
    }
    event_2028_6_end: ;
}
// Function purpose: generated callback event_func_2192 processes event block(s) 2029_6. Actions/conditions:
//        2029_6: sets the object's animation to 1.
void Frames::event_func_2192()
{
    // event 2029_6 : sets the object's animation to 1
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2029_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(539, str_npcid_1440)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2029_6_end;
        punchbag3_440_instances.clear_selection();
        if (!check_overlap(inmateBase_instances, punchbag3_440_instances)) goto event_2029_6_end;
        for (ObjectIterator it(punchbag3_440_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
    }
    event_2029_6_end: ;
}
void Frames::loop_npc_speedbag_go_2_6()
{
    event_func_2191();
    event_func_2192();
}
// Function purpose: generated callback event_func_2193 processes event block(s) 2027_6. Actions/conditions:
//        2027_6: checks scene is active; skips if the event-specific game state condition is met; this handler gates
//        a game event without a direct value/object action.
void Frames::event_func_2193()
{
    // event 2027_6 : checks scene is active; skips if the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2027_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(539, str_npcid_1440)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2027_6_end;
        speedbag_439_instances.clear_selection();
        if (!check_overlap(inmateBase_instances, speedbag_439_instances)) goto event_2027_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2027_6_end;
        {
            loop_npc_speedbag_go_2_running = true;
            int times = int(1);
            loop_npc_speedbag_go_2_index = 0;
            while (loop_npc_speedbag_go_2_index < times) {
                loop_npc_speedbag_go_2_6();
                if (!loop_npc_speedbag_go_2_running) break;
                loop_npc_speedbag_go_2_index++;
            }
        }
    }
    event_2027_6_end: ;
}
void Frames::loop_npc_speedbag_go_6()
{
    event_func_2193();
}
// Function purpose: generated callback event_func_2194 processes event block(s) 1660_6. Actions/conditions:
//        1660_6: creates a snoozy 466 object.
void Frames::event_func_2194()
{
    // event 1660_6 : creates a snoozy 466 object
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1660_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sleeping_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1660_6_end;
        FrameObject * single_instance_1660_6_0; single_instance_1660_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(inmateBase_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_snoozy_466(parent->x + -2, parent->y + -6), parent->layer);
                if (single_instance_1660_6_0 == NULL)
                    single_instance_1660_6_0 = new_obj;
            }
        }
    }
    event_1660_6_end: ;
}
void Frames::loop_snore_6()
{
    event_func_2194();
}
// Event 1655_6: return a stopped inmate to its assigned bed, including when it
// is standing on somebody else's bed. Keep the generated callback ID stable.
void Frames::event_func_2195() {
    if (!(group_code_1 && group_code_schedules_sleeping_1)) return;

    inmateBase_instances.clear_selection();
    for (ObjectIterator entry(inmateBase_instances); !entry.end(); ++entry) {
        Active* inmate = static_cast<Active*>(*entry);
        if (inmate->alterables->values.get(0) != loop_sleeping_inmates_index + 1 ||
            !inmate->get_movement()->is_stopped() || inmate->alterables->values.get(7) <= 0 ||
            inmate->alterables->values.get(15) != 0 || inmate->alterables->values.get(2) != 0) entry.deselect();
    }

    if (!inmateBase_instances.has_selection()) return;
    Active* inmate = static_cast<Active*>(get_single(inmateBase_instances, default_active_instance));
    int inmateId = inmate->alterables->values.get(0);

    inmateBed_instances.clear_selection();
    for (ObjectIterator entry(inmateBed_instances); !entry.end(); ++entry)
        if ((*entry)->alterables->values.get(0) != inmateId) entry.deselect();

    if (!inmateBed_instances.has_selection()) return;
    FrameObject* assignedBed = get_single(inmateBed_instances, default_active_instance);
    if (inmate->overlaps(assignedBed)) return;

    // Negated list overlaps inspect all beds, regardless of the selection.
    // Test the assigned instance directly and reuse the original bed offsets.
    static_cast<AssociateArray*>(get_instance(gameVariables_instances))->set_value(135, str_mid_700, inmateId);
    loop_npc_gobed_running = true;
    loop_npc_gobed_index = 0;
    while (loop_npc_gobed_index < 1) {
        loop_npc_gobed_6();
        if (!loop_npc_gobed_running) break;
        loop_npc_gobed_index++;
    }
}
// Function purpose: generated callback event_func_2196 processes event block(s) 1656_6. Actions/conditions:
//        1656_6: sets the object position in the world; enables flag 87 (NPC cell-counting or presence state) on the
//        selected object.
void Frames::event_func_2196()
{
    // event 1656_6 : sets the object position in the world; enables flag 87 (NPC cell-counting or presence state) on the selected object
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1656_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sleeping_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1656_6_end;
        inmateBed_instances.clear_selection();
        if (!check_overlap(inmateBase_instances, inmateBed_instances)) goto event_1656_6_end;
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_1656_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1656_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_1656_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 13, parent->get_y() + 7);
            pos_end_1656_6_0: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(87);
        }
    }
    event_1656_6_end: ;
}
// Function purpose: generated callback event_func_2197 processes event block(s) 1657_6. Actions/conditions:
//        1657_6: sets the object position in the world; enables flag 87 (NPC cell-counting or presence state) on the
//        selected object.
void Frames::event_func_2197()
{
    // event 1657_6 : sets the object position in the world; enables flag 87 (NPC cell-counting or presence state) on the selected object
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1657_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sleeping_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1657_6_end;
        inmateBed_instances.clear_selection();
        if (!check_overlap(inmateBase_instances, inmateBed_instances)) goto event_1657_6_end;
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(16777216))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_1657_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1657_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_1657_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 10);
            pos_end_1657_6_0: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(87);
        }
    }
    event_1657_6_end: ;
}
// Function purpose: generated callback event_func_2198 processes event block(s) 1658_6. Actions/conditions:
//        1658_6: disables flag 87 (NPC cell-counting or presence state) on the selected object.
void Frames::event_func_2198()
{
    // event 1658_6 : disables flag 87 (NPC cell-counting or presence state) on the selected object
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1658_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sleeping_inmates_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(87))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1658_6_end;
        if (!check_not_overlap(inmateBase_instances, inmateBed_instances)) goto event_1658_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(87);
        }
    }
    event_1658_6_end: ;
}
// Function purpose: generated callback event_func_2199 processes event block(s) 1659_6. Actions/conditions:
//        1659_6: increments Count_InCells by 1.
void Frames::event_func_2199()
{
    // event 1659_6 : increments Count_InCells by 1
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1659_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sleeping_inmates_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(87))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1659_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(282, str_count_incells_939, 1);
        {
            loop_snore_running = true;
            int times = int(1);
            loop_snore_index = 0;
            while (loop_snore_index < times) {
                loop_snore_6();
                if (!loop_snore_running) break;
                loop_snore_index++;
            }
        }
    }
    event_1659_6_end: ;
}
void Frames::loop_sleeping_inmates_6()
{
    event_func_2195();
    event_func_2196();
    event_func_2197();
    event_func_2198();
    event_func_2199();
}
// Function purpose: generated callback event_func_2200 processes event block(s) 3466_6. Actions/conditions:
//        3466_6: unlocks the ButterFingers achievement.
void Frames::event_func_2200()
{
    // event 3466_6 : unlocks the ButterFingers achievement
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3466_6_end;
        if (!((global_values->get(16)) == (1))) goto event_3466_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(540, str_dropitem_1441)) == (48))) goto event_3466_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(541, str_zone_showers_1442)) == (1))) goto event_3466_6_end;
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_3466_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3466_6_end;
        if (((SteamObject*)get_instance(steamworks2_469_instances))->is_achievement_unlocked(str_butterfingers_1443)) goto event_3466_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->unlock_achievement(str_butterfingers_1443);
    }
    event_3466_6_end: ;
}
void Frames::loop_check_soap_drop_6()
{
    event_func_2200();
}
// Function purpose: generated callback event_func_2201 processes event block(s) 2448_6. Actions/conditions:
//        2448_6: disables flag 5000 (inventory item selected state) on the selected object.
void Frames::event_func_2201()
{
    // event 2448_6 : disables flag 5000 (inventory item selected state) on the selected object
    {
        if (!(group_code_1)) goto event_2448_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(5000);
        }
    }
    event_2448_6_end: ;
}
// Function purpose: generated callback event_func_2202 processes event block(s) 2449_6. Actions/conditions:
//        2449_6: sets the selected object's direction to selected object->alterables->values.get(0)-1.
void Frames::event_func_2202()
{
    // event 2449_6 : sets the selected object's direction to selected object->alterables->values.get(0)-1
    {
        if (!(group_code_1)) goto event_2449_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_2449_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(0)-1);
        }
    }
    event_2449_6_end: ;
}
void Frames::loop_unselect_item_6()
{
    event_func_2201();
    event_func_2202();
}
// Function purpose: generated callback event_func_2203 processes event block(s) 3454_6. Actions/conditions:
//        3454_6: sets OK to 0.
void Frames::event_func_2203()
{
    // event 3454_6 : sets OK to 0
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3454_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(540, str_dropitem_1441)) == (26))) goto event_3454_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_3454_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(542, str_ok_1444, 0);
    }
    event_3454_6_end: ;
}
// Function purpose: generated callback event_func_2204 processes event block(s) 3455_6. Actions/conditions:
//        3455_6: sets OK to 0.
void Frames::event_func_2204()
{
    // event 3455_6 : sets OK to 0
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3455_6_end;
        playerBase_instances.clear_selection();
        qualifier_6.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_6)) goto event_3455_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(542, str_ok_1444, 0);
    }
    event_3455_6_end: ;
}
// Function purpose: generated callback event_func_2205 processes event block(s) 3456_6. Actions/conditions:
//        3456_6: sets OK to 0.
void Frames::event_func_2205()
{
    // event 3456_6 : sets OK to 0
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3456_6_end;
        playerBase_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_7)) goto event_3456_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(542, str_ok_1444, 0);
    }
    event_3456_6_end: ;
}
// Function purpose: generated callback event_func_2206 processes event block(s) 3457_6. Actions/conditions:
//        3457_6: sets OK to 0.
void Frames::event_func_2206()
{
    // event 3457_6 : sets OK to 0
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3457_6_end;
        playerBase_instances.clear_selection();
        qualifier_18.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_18)) goto event_3457_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(542, str_ok_1444, 0);
    }
    event_3457_6_end: ;
}
// Function purpose: generated callback event_func_2207 processes event block(s) 3458_6. Actions/conditions:
//        3458_6: sets OK to 0.
void Frames::event_func_2207()
{
    // event 3458_6 : sets OK to 0
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3458_6_end;
        savecheckground_351_instances.clear_selection();
        items_184_instances.clear_selection();
        if (!check_overlap(savecheckground_351_instances, items_184_instances)) goto event_3458_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(542, str_ok_1444, 0);
    }
    event_3458_6_end: ;
}
// Function purpose: generated callback event_func_2208 processes event block(s) 3459_6. Actions/conditions:
//        3459_6: sets OK to 0.
void Frames::event_func_2208()
{
    // event 3459_6 : sets OK to 0
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3459_6_end;
        savecheckground_351_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(savecheckground_351_instances, qualifier_8)) goto event_3459_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(542, str_ok_1444, 0);
    }
    event_3459_6_end: ;
}
// Function purpose: generated callback event_func_2209 processes event block(s) 3460_6. Actions/conditions:
//        3460_6: sets OK to 0.
void Frames::event_func_2209()
{
    // event 3460_6 : sets OK to 0
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3460_6_end;
        playerBase_instances.clear_selection();
        qualifier_1.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_1)) goto event_3460_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(542, str_ok_1444, 0);
    }
    event_3460_6_end: ;
}
// Function purpose: generated callback event_func_2210 processes event block(s) 3461_6. Actions/conditions:
//        3461_6: plays a sound or music track.
void Frames::event_func_2210()
{
    // event 3461_6 : plays a sound or music track
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3461_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(542, str_ok_1444)) == (0))) goto event_3461_6_end;
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_3461_6_end: ;
}
// Function purpose: generated callback event_func_2211 processes event block(s) 3462_6. Actions/conditions:
//        3462_6: removes the selected object; plays a sound or music track.
void Frames::event_func_2211()
{
    // event 3462_6 : removes the selected object; plays a sound or music track
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3462_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(542, str_ok_1444)) == (1))) goto event_3462_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(543, str_dropslot_1445)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3462_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_THROW_4, 1-1);
    }
    event_3462_6_end: ;
}
// Function purpose: generated callback event_func_2212 processes event block(s) 3463_6. Actions/conditions:
//        3463_6: sets the selected object's numeric value to 0.
void Frames::event_func_2212()
{
    // event 3463_6 : sets the selected object's numeric value to 0
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3463_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(542, str_ok_1444)) == (1))) goto event_3463_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(543, str_dropslot_1445)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3463_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_3463_6_end: ;
}
// Function purpose: generated callback event_func_2213 processes event block(s) 3464_6. Actions/conditions:
//        3464_6: sets a game or interface text string; creates a items 184 object; moves the selected object behind
//        other objects; plus 8 more actions.
void Frames::event_func_2213()
{
    // event 3464_6 : sets a game or interface text string; creates a items 184 object; moves the selected object behind other objects; plus 8 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3464_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(542, str_ok_1444)) == (1))) goto event_3464_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(543, str_dropslot_1445)), empty_string);
        FrameObject * single_instance_3464_6_0; single_instance_3464_6_0 = NULL;
        // select single: true false false
        savecheckground_351_instances.clear_selection();
        for (ObjectIterator p_it(savecheckground_351_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_items_184(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_3464_6_0 == NULL)
                    single_instance_3464_6_0 = new_obj;
            }
        }
        ((Active*)single_instance_3464_6_0)->move_back(((Active*)get_qualifier(qualifier_2)));
        ((Active*)((Active*)single_instance_3464_6_0))->alterables->values.set(2, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(540, str_dropitem_1441));
        ((Active*)((Active*)single_instance_3464_6_0))->alterables->strings.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(544, str_dropnameappend_1446));
        ((Active*)((Active*)single_instance_3464_6_0))->alterables->values.set(7, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(545, str_drophp_1447));
        ((Active*)((Active*)single_instance_3464_6_0))->alterables->values.set(8, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(254, str_t_day_902));
        ((Active*)((Active*)single_instance_3464_6_0))->alterables->flags.enable(-2);
        {
            loop_check_soap_drop_running = true;
            int times = int(1);
            loop_check_soap_drop_index = 0;
            while (loop_check_soap_drop_index < times) {
                loop_check_soap_drop_6();
                if (!loop_check_soap_drop_running) break;
                loop_check_soap_drop_index++;
            }
        }
    }
    event_3464_6_end: ;
}
// Function purpose: generated callback event_func_2214 processes event block(s) 3465_6. Actions/conditions:
//        3465_6: sets the object's animation to 0; sets SelectedSlot to -1; sets SelectedItem to -1; plus 1 more
//        actions.
void Frames::event_func_2214()
{
    // event 3465_6 : sets the object's animation to 0; sets SelectedSlot to -1; sets SelectedItem to -1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3465_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_3465_6_end;
        {
            loop_unselect_item_running = true;
            int times = int(1);
            loop_unselect_item_index = 0;
            while (loop_unselect_item_index < times) {
                loop_unselect_item_6();
                if (!loop_unselect_item_running) break;
                loop_unselect_item_index++;
            }
        }
        ((Active*)get_instance(mouse_9_instances))->force_animation(0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(46, str_selectedslot_514, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(47, str_selecteditem_515, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(546, str_itemselected_1448, 0);
    }
    event_3465_6_end: ;
}
void Frames::loop_dropitem_6()
{
    event_func_2203();
    event_func_2204();
    event_func_2205();
    event_func_2206();
    event_func_2207();
    event_func_2208();
    event_func_2209();
    event_func_2210();
    event_func_2211();
    event_func_2212();
    event_func_2213();
    event_func_2214();
}
// Function purpose: generated callback event_func_2215 processes event block(s) 4176_6. Actions/conditions:
//        4176_6: splits saved text into fields.
void Frames::event_func_2215()
{
    // event 4176_6 : splits saved text into fields
    {
        if (!(group_loops_1)) goto event_4176_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_451+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(415, str_currnpc_1233))+str_inv_911+number_to_string(loop_npc_wipe_inv_index+1)), str__96);
    }
    event_4176_6_end: ;
}
// Function purpose: generated callback event_func_2216 processes event block(s) 4177_6. Actions/conditions:
//        4177_6: sets a game or interface text string.
void Frames::event_func_2216()
{
    // event 4177_6 : sets a game or interface text string
    {
        if (!(group_loops_1)) goto event_4177_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3))) == (0))) goto event_4177_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(415, str_currnpc_1233))+str_inv_911+number_to_string(loop_npc_wipe_inv_index+1), empty_string);
    }
    event_4177_6_end: ;
}
void Frames::loop_npc_wipe_inv_6()
{
    event_func_2215();
    event_func_2216();
}
// Function purpose: generated callback event_func_2217 processes event block(s) 4178_6. Actions/conditions:
//        4178_6: sets a game or interface text string.
void Frames::event_func_2217()
{
    // event 4178_6 : sets a game or interface text string
    {
        if (!(group_loops_1)) goto event_4178_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_451+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(415, str_currnpc_1233))+str_inv_911+number_to_string(loop_npc_inv_add_index+1))) == (empty_string))) goto event_4178_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(415, str_currnpc_1233))+str_inv_911+number_to_string(loop_npc_inv_add_index+1), ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
    }
    event_4178_6_end: ;
}
void Frames::loop_npc_inv_add_6()
{
    event_func_2217();
}
// Function purpose: generated callback event_func_2218 processes event block(s) 4174_6. Actions/conditions:
//        4174_6: sets gw? to -1; sets currNPC to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(25).
void Frames::event_func_2218()
{
    // event 4174_6 : sets gw? to -1; sets currNPC to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25)
    {
        if (!(group_loops_1)) goto event_4174_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inv_up_npcs_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_4174_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(547, str_gw_1449, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(415, str_currnpc_1233, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        {
            loop_npc_wipe_inv_running = true;
            int times = int(6);
            loop_npc_wipe_inv_index = 0;
            while (loop_npc_wipe_inv_index < times) {
                loop_npc_wipe_inv_6();
                if (!loop_npc_wipe_inv_running) break;
                loop_npc_wipe_inv_index++;
            }
        }
        {
            loop_npc_inv_add_running = true;
            int times = int(randrange_event(3)+1);
            loop_npc_inv_add_index = 0;
            while (loop_npc_inv_add_index < times) {
                loop_npc_inv_add_6();
                if (!loop_npc_inv_add_running) break;
                loop_npc_inv_add_index++;
            }
        }
    }
    event_4174_6_end: ;
}
// Function purpose: generated callback event_func_2219 processes event block(s) 4175_6. Actions/conditions:
//        4175_6: sets gw? to randrange_event(3); sets a game or interface text string.
void Frames::event_func_2219()
{
    // event 4175_6 : sets gw? to randrange_event(3); sets a game or interface text string
    {
        if (!(group_loops_1)) goto event_4175_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inv_up_npcs_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_4175_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(547, str_gw_1449, randrange_event(3));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_weapon_460+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(415, str_currnpc_1233)), empty_string);
    }
    event_4175_6_end: ;
}
// Function purpose: generated callback event_func_2220 processes event block(s) 4183_6. Actions/conditions:
//        4183_6: splits saved text into fields; sets a game or interface text string.
void Frames::event_func_2220()
{
    // event 4183_6 : splits saved text into fields; sets a game or interface text string
    {
        if (!(group_loops_1)) goto event_4183_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(547, str_gw_1449)) == (0))) goto event_4183_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(str_19_27_28_34_95_97_103_109_124_1450, str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_weapon_460+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(415, str_currnpc_1233)), ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get_count()))+str_100_531);
    }
    event_4183_6_end: ;
}
void Frames::loop_inv_up_npcs_6()
{
    event_func_2218();
    event_func_2219();
    event_func_2220();
}
// Function purpose: generated callback event_func_2221 processes event block(s) 4156_6. Actions/conditions:
//        4156_6: splits saved text into fields; sets GoNpcInv to 0.
void Frames::event_func_2221()
{
    // event 4156_6 : splits saved text into fields; sets GoNpcInv to 0
    {
        if (!(group_code_1)) goto event_4156_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(334, str_pocketsarray_1123), str__96);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_up_npcs_running = true;
            int times = int(inmateBase_instances.size());
            loop_inv_up_npcs_index = 0;
            while (loop_inv_up_npcs_index < times) {
                loop_inv_up_npcs_6();
                if (!loop_inv_up_npcs_running) break;
                loop_inv_up_npcs_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(548, str_gonpcinv_1451, 0);
    }
    event_4156_6_end: ;
}
void Frames::loop_loop_npc_inv_6()
{
    event_func_2221();
}
// Function purpose: generated callback event_func_2222 processes event block(s) 2970_6. Actions/conditions:
//        2970_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_2222()
{
    // event 2970_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2970_6_end;
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
    }
    event_2970_6_end: ;
}
// Function purpose: generated callback event_func_2223 processes event block(s) 2971_6. Actions/conditions:
//        2971_6: sets MountPush to 1; disables flag 23 (NPC schedule or activity state) on the selected object;
//        disables flag 24 (NPC schedule or activity state) on the selected object; plus 7 more actions.
void Frames::event_func_2223()
{
    // event 2971_6 : sets MountPush to 1; disables flag 23 (NPC schedule or activity state) on the selected object; disables flag 24 (NPC schedule or activity state) on the selected object; plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2971_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2971_6_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_2971_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(549, str_mountpush_1452, 1);
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(23);
            ((Active*)*it)->alterables->flags.disable(24);
            ((Active*)*it)->alterables->values.sub(12, 5);
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(370, str_foundx_1166)+8);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(371, str_foundy_1167)+8);
        }
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_2971_6_end: ;
}
// Function purpose: generated callback event_func_2224 processes event block(s) 2972_6. Actions/conditions:
//        2972_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_2224()
{
    // event 2972_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2972_6_end;
        {
            loop_push_reaction_running = true;
            int times = int(1);
            loop_push_reaction_index = 0;
            while (loop_push_reaction_index < times) {
                loop_push_reaction_6();
                if (!loop_push_reaction_running) break;
                loop_push_reaction_index++;
            }
        }
    }
    event_2972_6_end: ;
}
void Frames::loop_chair_push_6()
{
    event_func_2222();
    event_func_2223();
    event_func_2224();
}
// Function purpose: generated callback event_func_2225 processes event block(s) 3063_6. Actions/conditions:
//        3063_6: sets the selected object's numeric value to get_ceil((get_max(get_abs((selected
//        object->get_x()-(cursor_178->get_x()+8))), get_abs((selected object->get_y()-(cursor_178->get_y()+8).
void Frames::event_func_2225()
{
    // event 3063_6 : sets the selected object's numeric value to get_ceil((get_max(get_abs((selected object->get_x()-(cursor_178->get_x()+8))), get_abs((selected object->get_y()-(cursor_178->get_y()+8)
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3063_6_end;
        qualifier_26.clear_selection();
        for (QualifierIterator it(qualifier_26); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_supports_index+1))) { it.deselect(); continue; }
        }
        if (!qualifier_26.has_selection()) goto event_3063_6_end;
        for (QualifierIterator it(qualifier_26); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_ceil((get_max(get_abs((((Active*)*it)->get_x()-(((Active*)get_instance(cursor_178_instances))->get_x()+8))), get_abs((((Active*)*it)->get_y()-(((Active*)get_instance(cursor_178_instances))->get_y()+8)))))*0.941246)+((get_min(get_abs((((Active*)*it)->get_x()-(((Active*)get_instance(cursor_178_instances))->get_x()+8))), get_abs((((Active*)*it)->get_y()-(((Active*)get_instance(cursor_178_instances))->get_y()+8)))))*0.41));
        }
    }
    event_3063_6_end: ;
}
void Frames::loop_supports_6()
{
    event_func_2225();
}
// Function purpose: generated callback event_func_2226 processes event block(s) 3062_6. Actions/conditions:
//        3062_6: checks scene is active; the event-specific game state condition is met; this handler gates a game
//        event without a direct value/object action.
void Frames::event_func_2226()
{
    // event 3062_6 : checks scene is active; the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3062_6_end;
        if (!((qualifier_26.size()) > (0))) goto event_3062_6_end;
        {
            loop_supports_running = true;
            int times = int(qualifier_26.size());
            loop_supports_index = 0;
            while (loop_supports_index < times) {
                loop_supports_6();
                if (!loop_supports_running) break;
                loop_supports_index++;
            }
        }
    }
    event_3062_6_end: ;
}
// Function purpose: generated callback event_func_2227 processes event block(s) 3064_6. Actions/conditions:
//        3064_6: sets NearestBrace to ((Active*)get_single(qualifier_26,
//        default_active_instance))->alterables->values.get(2).
void Frames::event_func_2227()
{
    // event 3064_6 : sets NearestBrace to ((Active*)get_single(qualifier_26, default_active_instance))->alterables->values.get(2)
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3064_6_end;
        if (!((qualifier_26.size()) > (0))) goto event_3064_6_end;
        {
            FrameObject * selected; selected = NULL;
            int alt_index = 2;
            double lowest = 0.0;
            qualifier_26.clear_selection();
            for (QualifierIterator it(qualifier_26); !it.end(); ++it) {
                FrameObject * obj = ((Active*)*it);
                if (selected == NULL || obj->alterables->values.get(alt_index) < lowest)
                    selected = obj;
            }
            if (selected == NULL) goto event_3064_6_end;
            qualifier_26.select_single(selected);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(404, str_nearestbrace_1218, ((Active*)get_single(qualifier_26, default_active_instance))->alterables->values.get(2));
    }
    event_3064_6_end: ;
}
void Frames::loop_brace_check_6()
{
    event_func_2226();
    event_func_2227();
}
// Function purpose: generated callback event_func_2228 processes event block(s) 4170_6. Actions/conditions:
//        4170_6: sets a game or interface text string; increments Score_P by 10; increments m_cash by
//        string_to_number(stringtokenizer_81->get(4)); plus 29 more actions.
void Frames::event_func_2228()
{
    // event 4170_6 : sets a game or interface text string; increments Score_P by 10; increments m_cash by string_to_number(stringtokenizer_81->get(4)); plus 29 more actions
    {
        if (!(group_code_1)) goto event_4170_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3))))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_4170_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(142, str_del_missions_708, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(142, str_del_missions_708)+((ListObject*)get_instance(missions_298_instances))->get_line(((AssociateArray*)get_instance(gameVariables_instances))->get_value(550, str_checkdistract_1453))+str__346);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(418, str_score_p_1236, 10);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(416, str_m_cash_1234, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)));
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(417, str_m_done_1235, 1);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(12);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 15);
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
            ((Text*)*it)->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_favour_box_1089, str_6_241)));
        }
        dialogBodyText_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dialogBodyText(0, 0), 5);
            dialogBodyText_instances.add_back();
        }
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            if (parent == NULL) goto pos_end_4170_6_2;
            ((Text*)*it)->set_global_position(parent->get_x() + -110, parent->get_y() + -18);
            pos_end_4170_6_2: ;
        }
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->blend_color.set(Color(60, 60, 60));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_45_1275));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_name_693, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_payout_1382, str__1132+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)));
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
        }
        FrameObject * single_instance_4170_6_3; single_instance_4170_6_3 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 28, parent->y + 20), parent->layer);
                if (single_instance_4170_6_3 == NULL)
                    single_instance_4170_6_3 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_4170_6_3))->force_animation(28);
        FrameObject * single_instance_4170_6_4; single_instance_4170_6_4 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_4170_6_3)->x + 3, ((Active*)single_instance_4170_6_3)->y + 3), ((Active*)single_instance_4170_6_3)->layer);
            if (single_instance_4170_6_4 == NULL)
                single_instance_4170_6_4 = new_obj;
        }
        ((Text*)((Text*)single_instance_4170_6_4))->blend_color.set(Color(98, 154, 3));
        ((Text*)((Text*)single_instance_4170_6_4))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_pausemenu_1094, str_1_97)));
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(219, str_cash_11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(220, str_hsac_827, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(219, str_cash_11)*2);
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
    event_4170_6_end: ;
}
void Frames::loop_successful_distract_6()
{
    event_func_2228();
}
// Function purpose: generated callback event_func_2229 processes event block(s) 4164_6. Actions/conditions:
//        4164_6: removes the selected object.
void Frames::event_func_2229()
{
    // event 4164_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_old_distract_1)) goto event_4164_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(417, str_m_done_1235)) > (1))) goto event_4164_6_end;
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4164_6_end: ;
}
// Function purpose: generated callback event_func_2230 processes event block(s) 4165_6. Actions/conditions:
//        4165_6: creates a buttons 245 object; sets the object's animation to 28; adds a dialogue2 179 instance; plus
//        12 more actions.
void Frames::event_func_2230()
{
    // event 4165_6 : creates a buttons 245 object; sets the object's animation to 28; adds a dialogue2 179 instance; plus 12 more actions
    {
        if (!(group_code_1 && group_code_old_distract_1)) goto event_4165_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(417, str_m_done_1235)) > (1))) goto event_4165_6_end;
        FrameObject * single_instance_4165_6_0; single_instance_4165_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 43, parent->y + 20), parent->layer);
                if (single_instance_4165_6_0 == NULL)
                    single_instance_4165_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_4165_6_0))->force_animation(28);
        dialogBodyText_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dialogBodyText(0, 0), 5);
            dialogBodyText_instances.add_back();
        }
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            if (parent == NULL) goto pos_end_4165_6_2;
            ((Text*)*it)->set_global_position(parent->get_x() + -110, parent->get_y() + -18);
            pos_end_4165_6_2: ;
        }
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->blend_color.set(Color(60, 60, 60));
            ((Text*)*it)->set_string(str_you_completed_1240+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(417, str_m_done_1235))+str_distraction_favours_and_earned_yourself_1454+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(416, str_m_cash_1234))+str__918);
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
            ((Text*)*it)->set_string(str_favours_complete_1242);
        }
    }
    event_4165_6_end: ;
}
// Function purpose: generated callback event_func_2231 processes event block(s) 4166_6. Actions/conditions:
//        4166_6: sets m_done to 0; splits saved text into fields.
void Frames::event_func_2231()
{
    // event 4166_6 : sets m_done to 0; splits saved text into fields
    {
        if (!(group_code_1 && group_code_old_distract_1)) goto event_4166_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(417, str_m_done_1235)) > (0))) goto event_4166_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(417, str_m_done_1235, 0);
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
    event_4166_6_end: ;
}
