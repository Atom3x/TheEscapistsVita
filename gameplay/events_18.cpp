#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_1352()
{
    // event 532_6
    {
        if (!(group_setup_1)) goto event_532_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_refresh_inv_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_532_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inv_512+number_to_string(loop_refresh_inv_index+1))) == (-1))) goto event_532_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_532_6_end: ;
}
void Frames::event_func_1353()
{
    // event 533_6
    {
        if (!(group_setup_1)) goto event_533_6_end;
        if (!((loop_refresh_inv_index) == (5))) goto event_533_6_end;
        ((Active*)get_instance(mouse_9_instances))->move_front();
    }
    event_533_6_end: ;
}
void Frames::event_func_1354()
{
    // event 4244_6
    {
        if (!(group_loops_1)) goto event_4244_6_end;
        if (!((loop_refresh_inv_index) == (0))) goto event_4244_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_4244_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4244_6_end: ;
}
void Frames::event_func_1355()
{
    // event 4245_6
    {
        if (!(group_loops_1)) goto event_4245_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_refresh_inv_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_4245_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inv_512+number_to_string(loop_refresh_inv_index+1))) != (empty_string))) goto event_4245_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inv_512+number_to_string(loop_refresh_inv_index+1)), str__96);
        ((INI*)get_instance(itemData_instances))->set_group(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        FrameObject * single_instance_4245_6_0; single_instance_4245_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hudItem(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_4245_6_0 == NULL)
                    single_instance_4245_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_4245_6_0))->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((Active*)((Active*)single_instance_4245_6_0))->alterables->strings.set(0, str_inven_820);
        ((Active*)((Active*)single_instance_4245_6_0))->alterables->values.set(1, loop_refresh_inv_index+1);
        ((Active*)((Active*)single_instance_4245_6_0))->alterables->values.set(6, ((INI*)get_instance(itemData_instances))->get_value_int(str_illegal_618));
        ((Active*)((Active*)single_instance_4245_6_0))->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((Active*)((Active*)single_instance_4245_6_0))->alterables->flags.enable(-2);
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
    }
    event_4245_6_end: ;
}
void Frames::event_func_1356()
{
    // event 4246_6
    {
        if (!(group_loops_1)) goto event_4246_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_refresh_inv_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_4246_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inv_512+number_to_string(loop_refresh_inv_index+1))) == (-1))) goto event_4246_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_4246_6_end: ;
}
void Frames::event_func_1357()
{
    // event 4247_6
    {
        if (!(group_loops_1)) goto event_4247_6_end;
        if (!((loop_refresh_inv_index) == (5))) goto event_4247_6_end;
        ((Active*)get_instance(mouse_9_instances))->move_front();
    }
    event_4247_6_end: ;
}
void Frames::loop_refresh_inv_6()
{
    event_func_1350();
    event_func_1351();
    event_func_1352();
    event_func_1353();
    event_func_1354();
    event_func_1355();
    event_func_1356();
    event_func_1357();
}
void Frames::event_func_1358()
{
    // event 3658_6
    {
        if (!(group_code_1)) goto event_3658_6_end;
        activityText_instances.clear_selection();
        for (ObjectIterator it(activityText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_3658_6_end: ;
}
void Frames::event_func_1359()
{
    // event 3659_6
    {
        if (!(group_code_1)) goto event_3659_6_end;
        activityProgress_instances.clear_selection();
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_activity_1153))) { it.deselect(); continue; }
        }
        if (!activityProgress_instances.has_selection()) goto event_3659_6_end;
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3659_6_end: ;
}
void Frames::event_func_1360()
{
    // event 3660_6
    {
        if (!(group_code_1)) goto event_3660_6_end;
        activityPanel_instances.clear_selection();
        for (ObjectIterator it(activityPanel_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_activity_1153))) { it.deselect(); continue; }
        }
        if (!activityPanel_instances.has_selection()) goto event_3660_6_end;
        for (ObjectIterator it(activityPanel_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3660_6_end: ;
}
void Frames::loop_close_activity_box_6()
{
    event_func_1358();
    event_func_1359();
    event_func_1360();
}
void Frames::event_func_1361()
{
    // event 3521_6
    {
        if (!(group_code_1)) goto event_3521_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1000))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3521_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_3521_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3521_6_0: ;
        }
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1000);
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances, it.current_index, default_active_instance))->layer->index+1-1);
        }
    }
    event_3521_6_end: ;
}
void Frames::event_func_1362()
{
    // event 3523_6
    {
        if (!(group_code_1)) goto event_3523_6_end;
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1000))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_3523_6_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1000);
            ((Active*)*it)->set_layer(2-1);
            ((Active*)*it)->set_x((((Active*)get_instance(playerBase_instances, it.current_index, default_active_instance))->get_x()/MathHelper()/16)*16);
            ((Active*)*it)->set_y((((Active*)get_instance(playerBase_instances, it.current_index, default_active_instance))->get_y()/MathHelper()/16)*16);
        }
    }
    event_3523_6_end: ;
}
void Frames::event_func_1363()
{
    // event 3525_6
    {
        if (!(group_code_1)) goto event_3525_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(7))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_3525_6_end;
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_3525_6_end: ;
}
void Frames::loop_drop_carries_6()
{
    event_func_1361();
    event_func_1362();
    event_func_1363();
}
void Frames::event_func_1364()
{
    // event 1350_6
    {
        if (!(group_code_1)) goto event_1350_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_1350_6_end;
        ((Active*)get_instance(playerBase_instances))->set_layer(2-1);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_1350_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1350_6_0: ;
        }
        ((LayerObject*)get_instance(layerobject_37_instances))->show_layer(1);
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(355, str_newlayer_1149, 2);
        ((Active*)get_instance(screenTint_instances))->set_visible(true);
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
    }
    event_1350_6_end: ;
}
void Frames::event_func_1365()
{
    // event 1351_6
    {
        if (!(group_code_1)) goto event_1351_6_end;
        activityText_instances.clear_selection();
        for (ObjectIterator it(activityText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(358, str_fatigue_36, 50);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(155, str_chipping_728, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(359, str_cleaning_23, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(153, str_digging_726, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(360, str_reading_1154, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(361, str_browsing_1155, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(154, str_cutting_727, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(156, str_unscrewing_729, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(362, str_searching_desk_1156, 0);
        {
            loop_close_activity_box_running = true;
            int times = int(1);
            loop_close_activity_box_index = 0;
            while (loop_close_activity_box_index < times) {
                loop_close_activity_box_6();
                if (!loop_close_activity_box_running) break;
                loop_close_activity_box_index++;
            }
        }
    }
    event_1351_6_end: ;
}
void Frames::event_func_1366()
{
    // event 1352_6
    {
        if (!(group_code_1)) goto event_1352_6_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 1)) != (str_4_161))) goto event_1352_6_end;
        {
            loop_ko_check_outfit_running = true;
            int times = int(1);
            loop_ko_check_outfit_index = 0;
            while (loop_ko_check_outfit_index < times) {
                loop_ko_check_outfit_6();
                if (!loop_ko_check_outfit_running) break;
                loop_ko_check_outfit_index++;
            }
        }
    }
    event_1352_6_end: ;
}
void Frames::event_func_1367()
{
    // event 1360_6
    {
        if (!(group_code_1)) goto event_1360_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(139, str_weapon_704, empty_string);
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(15, 0);
        }
    }
    event_1360_6_end: ;
}
void Frames::event_func_1368()
{
    // event 1361_6
    {
        if (!(group_code_1)) goto event_1361_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_1361_6_end;
        ssreindeer_504_instances.clear_selection();
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1361_6_end: ;
}
void Frames::event_func_1369()
{
    // event 1362_6
    {
        if (!(group_code_1)) goto event_1362_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_1362_6_end;
        ssreindeer_504_instances.clear_selection();
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1362_6_end: ;
}
void Frames::event_func_1370()
{
    // event 1363_6
    {
        if (!(group_code_1)) goto event_1363_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) > (0))) goto event_1363_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(151, str_carrying_724, 0);
        {
            loop_drop_carries_running = true;
            int times = int(1);
            loop_drop_carries_index = 0;
            while (loop_drop_carries_index < times) {
                loop_drop_carries_6();
                if (!loop_drop_carries_running) break;
                loop_drop_carries_index++;
            }
        }
    }
    event_1363_6_end: ;
}
void Frames::event_func_1371()
{
    // event 1365_6
    {
        if (!(group_code_1)) goto event_1365_6_end;
        bedmedical_234_instances.clear_selection();
        FrameObject * single_instance_1365_6_0; single_instance_1365_6_0 = pick_random(bedmedical_234_instances);
        if (single_instance_1365_6_0 == NULL) goto event_1365_6_end;
        if (group_code_1 && group_code_schedules_sleeping_1) goto event_1365_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1365_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(363, str_score_n_1157, 15);
        ((Active*)((Active*)single_instance_1365_6_0))->alterables->values.set(2, 50);
        ((Active*)get_instance(playerBase_instances))->alterables->flags.disable(75);
        {
            FrameObject * parent = ((Active*)single_instance_1365_6_0);
            if (parent == NULL) goto pos_end_1365_6_1;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 10);
            pos_end_1365_6_1: ;
        }
        ((Active*)get_instance(playerBase_instances))->set_direction(((Active*)single_instance_1365_6_0)->get_direction());
        ((Active*)get_instance(playerBase_instances))->set_layer(((Active*)single_instance_1365_6_0)->layer->index+1-1);
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(7, get_max(10, ((((Active*)get_instance(playerBase_instances))->alterables->values.get(8)/MathHelper()/2)*0.75)));
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_1365_6_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1365_6_2: ;
        }
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
        }
        ((Active*)get_instance(target_177_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(target_177_instances))->set_visible(false);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(364, str_trigger_hptut_1158, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(219, str_cash_11, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(219, str_cash_11)*0.9);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(220, str_hsac_827, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(219, str_cash_11)*2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(328, str_gettolessontimer_1116, 500);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(32, str_heat_495, 0);
        {
            loop_remove_targets_running = true;
            int times = int(1);
            loop_remove_targets_index = 0;
            while (loop_remove_targets_index < times) {
                loop_remove_targets_6();
                if (!loop_remove_targets_running) break;
                loop_remove_targets_index++;
            }
        }
        {
            loop_strip_illegal_items_running = true;
            int times = int(6);
            loop_strip_illegal_items_index = 0;
            while (loop_strip_illegal_items_index < times) {
                loop_strip_illegal_items_6();
                if (!loop_strip_illegal_items_running) break;
                loop_strip_illegal_items_index++;
            }
        }
        {
            loop_refresh_inv_running = true;
            int times = int(6);
            loop_refresh_inv_index = 0;
            while (loop_refresh_inv_index < times) {
                loop_refresh_inv_6();
                if (!loop_refresh_inv_running) break;
                loop_refresh_inv_index++;
            }
        }
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(5-1);
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(4-1);
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 0);
        }
        {
            loop_tut_hp_running = true;
            int times = int(1);
            loop_tut_hp_index = 0;
            while (loop_tut_hp_index < times) {
                loop_tut_hp_6();
                if (!loop_tut_hp_running) break;
                loop_tut_hp_index++;
            }
        }
        ventDarkness_instances.clear_selection();
        for (ObjectIterator it(ventDarkness_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(365, str_post_ko_shu_1159, 30);
    }
    event_1365_6_end: ;
}
void Frames::event_func_1372()
{
    // event 1366_6
    {
        if (!(group_code_1)) goto event_1366_6_end;
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1366_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(139, str_weapon_704, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(363, str_score_n_1157, 10);
        bedplayer_338_instances.clear_selection();
        for (ObjectIterator it(bedplayer_338_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 50);
        }
        ((Active*)get_instance(playerBase_instances))->alterables->flags.disable(75);
        {
            FrameObject * parent = ((Active*)get_single(bedplayer_338_instances));
            if (parent == NULL) goto pos_end_1366_6_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_1366_6_0: ;
        }
        ((Active*)get_instance(playerBase_instances))->set_layer(((Active*)get_single(bedplayer_338_instances, default_active_instance))->layer->index+1-1);
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(7, (((Active*)get_instance(playerBase_instances))->alterables->values.get(8)/MathHelper()/2)*0.75);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_1366_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1366_6_1: ;
        }
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
        }
        ((Active*)get_instance(target_177_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(target_177_instances))->set_visible(false);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(364, str_trigger_hptut_1158, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(219, str_cash_11, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(219, str_cash_11)*0.9);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(328, str_gettolessontimer_1116, 500);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(32, str_heat_495, 0);
        {
            loop_remove_targets_running = true;
            int times = int(1);
            loop_remove_targets_index = 0;
            while (loop_remove_targets_index < times) {
                loop_remove_targets_6();
                if (!loop_remove_targets_running) break;
                loop_remove_targets_index++;
            }
        }
        {
            loop_strip_illegal_items_running = true;
            int times = int(6);
            loop_strip_illegal_items_index = 0;
            while (loop_strip_illegal_items_index < times) {
                loop_strip_illegal_items_6();
                if (!loop_strip_illegal_items_running) break;
                loop_strip_illegal_items_index++;
            }
        }
        {
            loop_refresh_inv_running = true;
            int times = int(6);
            loop_refresh_inv_index = 0;
            while (loop_refresh_inv_index < times) {
                loop_refresh_inv_6();
                if (!loop_refresh_inv_running) break;
                loop_refresh_inv_index++;
            }
        }
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(5-1);
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(4-1);
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 0);
        }
        {
            loop_tut_hp_running = true;
            int times = int(1);
            loop_tut_hp_index = 0;
            while (loop_tut_hp_index < times) {
                loop_tut_hp_6();
                if (!loop_tut_hp_running) break;
                loop_tut_hp_index++;
            }
        }
        ventDarkness_instances.clear_selection();
        for (ObjectIterator it(ventDarkness_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(365, str_post_ko_shu_1159, 30);
    }
    event_1366_6_end: ;
}
void Frames::event_func_1373()
{
    // event 1367_6
    {
        if (!(group_code_1)) goto event_1367_6_end;
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_1367_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(139, str_weapon_704, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(363, str_score_n_1157, 10);
        bedplayer_338_instances.clear_selection();
        for (ObjectIterator it(bedplayer_338_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 50);
        }
        ((Active*)get_instance(playerBase_instances))->alterables->flags.disable(75);
        {
            FrameObject * parent = ((Active*)get_single(bedplayer_338_instances));
            if (parent == NULL) goto pos_end_1367_6_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_1367_6_0: ;
        }
        ((Active*)get_instance(playerBase_instances))->set_layer(((Active*)get_single(bedplayer_338_instances, default_active_instance))->layer->index+1-1);
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(7, (((Active*)get_instance(playerBase_instances))->alterables->values.get(8)/MathHelper()/2)*0.75);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_1367_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1367_6_1: ;
        }
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
        }
        ((Active*)get_instance(target_177_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(target_177_instances))->set_visible(false);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(364, str_trigger_hptut_1158, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(219, str_cash_11, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(219, str_cash_11)*0.9);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(328, str_gettolessontimer_1116, 500);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(32, str_heat_495, 0);
        {
            loop_remove_targets_running = true;
            int times = int(1);
            loop_remove_targets_index = 0;
            while (loop_remove_targets_index < times) {
                loop_remove_targets_6();
                if (!loop_remove_targets_running) break;
                loop_remove_targets_index++;
            }
        }
        {
            loop_strip_illegal_items_running = true;
            int times = int(6);
            loop_strip_illegal_items_index = 0;
            while (loop_strip_illegal_items_index < times) {
                loop_strip_illegal_items_6();
                if (!loop_strip_illegal_items_running) break;
                loop_strip_illegal_items_index++;
            }
        }
        {
            loop_refresh_inv_running = true;
            int times = int(6);
            loop_refresh_inv_index = 0;
            while (loop_refresh_inv_index < times) {
                loop_refresh_inv_6();
                if (!loop_refresh_inv_running) break;
                loop_refresh_inv_index++;
            }
        }
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(5-1);
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(4-1);
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 0);
        }
        {
            loop_tut_hp_running = true;
            int times = int(1);
            loop_tut_hp_index = 0;
            while (loop_tut_hp_index < times) {
                loop_tut_hp_6();
                if (!loop_tut_hp_running) break;
                loop_tut_hp_index++;
            }
        }
        ventDarkness_instances.clear_selection();
        for (ObjectIterator it(ventDarkness_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(365, str_post_ko_shu_1159, 30);
    }
    event_1367_6_end: ;
}
void Frames::loop_you_ko_6()
{
    event_func_1364();
    event_func_1365();
    event_func_1366();
    event_func_1367();
    event_func_1368();
    event_func_1369();
    event_func_1370();
    event_func_1371();
    event_func_1372();
    event_func_1373();
}
void Frames::event_func_1374()
{
    // event 500_6
    {
        if (!(group_setup_1)) goto event_500_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(50, str_error_233, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(366, str_legalitem_1160, randrange_event(((AssociateArray*)get_instance(gameVariables_instances))->get_value(52, str_item_count_527)));
    }
    event_500_6_end: ;
}
void Frames::event_func_1375()
{
    // event 501_6
    {
        if (!(group_setup_1)) goto event_501_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_string(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(366, str_legalitem_1160)), str_found_528)) != (empty_string))) goto event_501_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_string(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(366, str_legalitem_1160)), str_found_528)) != (global_strings->get(0)))) goto event_501_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(50, str_error_233, 1);
    }
    event_501_6_end: ;
}
void Frames::event_func_1376()
{
    // event 502_6
    {
        if (!(group_setup_1)) goto event_502_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(366, str_legalitem_1160)), str_desk_32)) == (0))) goto event_502_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(50, str_error_233, 1);
    }
    event_502_6_end: ;
}
void Frames::event_func_1377()
{
    // event 503_6
    {
        if (!(group_setup_1)) goto event_503_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(50, str_error_233)) == (0))) goto event_503_6_end;
            loop_find_legal_item_running = false;
    
    }
    event_503_6_end: ;
}
void Frames::loop_find_legal_item_6()
{
    event_func_1374();
    event_func_1375();
    event_func_1376();
    event_func_1377();
}
void Frames::event_func_1378()
{
    // event 499_6
    {
        if (!(group_setup_1)) goto event_499_6_end;
        {
            loop_find_legal_item_running = true;
            loop_find_legal_item_index = 0;
            while (true) {
                loop_find_legal_item_6();
                if (!loop_find_legal_item_running) break;
                loop_find_legal_item_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(loop_clear_desks_index+1)+str_slot_617+number_to_string(5+loop_custom_desk_items_index), number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(366, str_legalitem_1160))+str_100_531);
    }
    event_499_6_end: ;
}
void Frames::loop_custom_desk_items_6()
{
    event_func_1378();
}
void Frames::event_func_1379()
{
    // event 3370_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3370_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_toilet_533+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(134, str_currenttoilet_699))+str_slot_617+number_to_string(loop_flip_toilet_findslot_index+1))) == (empty_string))) goto event_3370_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, loop_flip_toilet_findslot_index+1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(368, str_currentinvslot_1162)), empty_string);
            loop_flip_toilet_findslot_running = false;
    
        media.play_id(SOUND_PLIP_16, 1-1);
    }
    event_3370_6_end: ;
}
void Frames::loop_flip_toilet_findslot_6()
{
    event_func_1379();
}
void Frames::event_func_1380()
{
    // event 3369_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3369_6_end;
        {
            loop_flip_toilet_findslot_running = true;
            int times = int(3);
            loop_flip_toilet_findslot_index = 0;
            while (loop_flip_toilet_findslot_index < times) {
                loop_flip_toilet_findslot_6();
                if (!loop_flip_toilet_findslot_running) break;
                loop_flip_toilet_findslot_index++;
            }
        }
    }
    event_3369_6_end: ;
}
void Frames::event_func_1381()
{
    // event 3371_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3371_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3371_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(368, str_currentinvslot_1162)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3371_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_3371_6_end: ;
}
void Frames::event_func_1382()
{
    // event 3372_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3372_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3372_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(368, str_currentinvslot_1162)))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3372_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_toilet_533))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3372_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_3372_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3372_6_0: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161));
            ((Active*)*it)->alterables->strings.set(0, str_toilet_533);
            ((Active*)*it)->set_scale(2);
            ((Active*)*it)->alterables->flags.enable(-5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_toilet_533+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(134, str_currenttoilet_699))+str_slot_617+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)), number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7))+str__96+((Active*)get_single(hudItem_instances, default_active_instance))->alterables->strings.get(1)+str__96+((Active*)get_single(hudItem_instances, default_active_instance))->alterables->strings.get(1));
    }
    event_3372_6_end: ;
}
void Frames::loop_find_open_toilet_slot_6()
{
    event_func_1380();
    event_func_1381();
    event_func_1382();
}
void Frames::event_func_1383()
{
    // event 3964_6
    {
        if (!(group_code_1)) goto event_3964_6_end;
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
    CalcRect::set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142));
        
    }
    event_3964_6_end: ;
}
void Frames::event_func_1384()
{
    // event 3965_6
    {
        if (!(group_code_1)) goto event_3965_6_end;
        activesystembox_450_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_activesystembox_450(0, 0), 5);
            activesystembox_450_instances.add_back();
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(0, -1);
        }
        ((SystemBox*)get_single(activesystembox_450_instances, default_systembox_instance))->move_back(((Active*)get_instance(sidePanel_instances)));
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142));
            ((SystemBox*)*it)->alterables->values.set(1, 30+string_size(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142)));
            ((SystemBox*)*it)->set_fill(Color(make_color_int(255, 255, 87)));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
        }
    }
    event_3965_6_end: ;
}
void Frames::loop_notice_6()
{
    event_func_1383();
    event_func_1384();
}
void Frames::event_func_1385()
{
    // event 3286_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3286_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) >= (100))) goto event_3286_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_6_241));
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
    event_3286_6_end: ;
}
void Frames::event_func_1386()
{
    // event 3287_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3287_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_3287_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (17))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3287_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 109);
            ((Active*)*it)->alterables->flags.enable(-2);
            ((Active*)*it)->alterables->values.set(6, 1);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 10);
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514))), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514)), str_109_1163+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1));
        media.play_id(SOUND_PICKUP_3, 1-1);
        FrameObject * single_instance_3287_6_0; single_instance_3287_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_3287_6_0 == NULL)
                    single_instance_3287_6_0 = new_obj;
            }
        }
    }
    event_3287_6_end: ;
}
void Frames::loop_make_combshiv_6()
{
    event_func_1385();
    event_func_1386();
}
void Frames::event_func_1387()
{
    // event 4346_6
    {
        // group: Find Space Loop
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(9)) == (str_spacefind_1164))) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_4346_6_end;
        if (!check_not_overlap(usespot_208_instances, qualifier_18)) goto event_4346_6_end;
        if (!check_not_overlap(usespot_208_instances, qualifier_19)) goto event_4346_6_end;
        if (!check_not_overlap(usespot_208_instances, qualifier_6)) goto event_4346_6_end;
        if (!check_not_overlap(usespot_208_instances, qualifier_9)) goto event_4346_6_end;
        if (!check_not_overlap(usespot_208_instances, canteenchair_312_instances)) goto event_4346_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(369, str_found_1165, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(370, str_foundx_1166, ((Active*)get_single(usespot_208_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(371, str_foundy_1167, ((Active*)get_single(usespot_208_instances, default_active_instance))->get_y());
    }
    event_4346_6_end: ;
}
void Frames::loop_space_finder_go_check_6()
{
    event_func_1387();
}
void Frames::event_func_1388()
{
    // event 4337_6
    {
        // group: Find Space Loop
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_4337_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(372, str_spacex_1168));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(373, str_spacey_1169));
        }
        {
            loop_space_finder_go_check_running = true;
            int times = int(1);
            loop_space_finder_go_check_index = 0;
            while (loop_space_finder_go_check_index < times) {
                loop_space_finder_go_check_6();
                if (!loop_space_finder_go_check_running) break;
                loop_space_finder_go_check_index++;
            }
        }
    }
    event_4337_6_end: ;
}
void Frames::event_func_1389()
{
    // event 4338_6
    {
        // group: Find Space Loop
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_4338_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(372, str_spacex_1168)+16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(373, str_spacey_1169));
        }
        {
            loop_space_finder_go_check_running = true;
            int times = int(1);
            loop_space_finder_go_check_index = 0;
            while (loop_space_finder_go_check_index < times) {
                loop_space_finder_go_check_6();
                if (!loop_space_finder_go_check_running) break;
                loop_space_finder_go_check_index++;
            }
        }
    }
    event_4338_6_end: ;
}
void Frames::event_func_1390()
{
    // event 4339_6
    {
        // group: Find Space Loop
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_4339_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(372, str_spacex_1168));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(373, str_spacey_1169)+16);
        }
        {
            loop_space_finder_go_check_running = true;
            int times = int(1);
            loop_space_finder_go_check_index = 0;
            while (loop_space_finder_go_check_index < times) {
                loop_space_finder_go_check_6();
                if (!loop_space_finder_go_check_running) break;
                loop_space_finder_go_check_index++;
            }
        }
    }
    event_4339_6_end: ;
}
void Frames::event_func_1391()
{
    // event 4340_6
    {
        // group: Find Space Loop
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_4340_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(372, str_spacex_1168));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(373, str_spacey_1169)-16);
        }
        {
            loop_space_finder_go_check_running = true;
            int times = int(1);
            loop_space_finder_go_check_index = 0;
            while (loop_space_finder_go_check_index < times) {
                loop_space_finder_go_check_6();
                if (!loop_space_finder_go_check_running) break;
                loop_space_finder_go_check_index++;
            }
        }
    }
    event_4340_6_end: ;
}
void Frames::event_func_1392()
{
    // event 4341_6
    {
        // group: Find Space Loop
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_4341_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(372, str_spacex_1168)-16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(373, str_spacey_1169));
        }
        {
            loop_space_finder_go_check_running = true;
            int times = int(1);
            loop_space_finder_go_check_index = 0;
            while (loop_space_finder_go_check_index < times) {
                loop_space_finder_go_check_6();
                if (!loop_space_finder_go_check_running) break;
                loop_space_finder_go_check_index++;
            }
        }
    }
    event_4341_6_end: ;
}
void Frames::event_func_1393()
{
    // event 4342_6
    {
        // group: Find Space Loop
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_4342_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(372, str_spacex_1168)+16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(373, str_spacey_1169)+16);
        }
        {
            loop_space_finder_go_check_running = true;
            int times = int(1);
            loop_space_finder_go_check_index = 0;
            while (loop_space_finder_go_check_index < times) {
                loop_space_finder_go_check_6();
                if (!loop_space_finder_go_check_running) break;
                loop_space_finder_go_check_index++;
            }
        }
    }
    event_4342_6_end: ;
}
void Frames::event_func_1394()
{
    // event 4343_6
    {
        // group: Find Space Loop
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_4343_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(372, str_spacex_1168)-16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(373, str_spacey_1169)+16);
        }
        {
            loop_space_finder_go_check_running = true;
            int times = int(1);
            loop_space_finder_go_check_index = 0;
            while (loop_space_finder_go_check_index < times) {
                loop_space_finder_go_check_6();
                if (!loop_space_finder_go_check_running) break;
                loop_space_finder_go_check_index++;
            }
        }
    }
    event_4343_6_end: ;
}
void Frames::event_func_1395()
{
    // event 4344_6
    {
        // group: Find Space Loop
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_4344_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(372, str_spacex_1168)-16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(373, str_spacey_1169)-16);
        }
        {
            loop_space_finder_go_check_running = true;
            int times = int(1);
            loop_space_finder_go_check_index = 0;
            while (loop_space_finder_go_check_index < times) {
                loop_space_finder_go_check_6();
                if (!loop_space_finder_go_check_running) break;
                loop_space_finder_go_check_index++;
            }
        }
    }
    event_4344_6_end: ;
}
void Frames::event_func_1396()
{
    // event 4345_6
    {
        // group: Find Space Loop
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_4345_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(372, str_spacex_1168)+16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(373, str_spacey_1169)-16);
        }
        {
            loop_space_finder_go_check_running = true;
            int times = int(1);
            loop_space_finder_go_check_index = 0;
            while (loop_space_finder_go_check_index < times) {
                loop_space_finder_go_check_6();
                if (!loop_space_finder_go_check_running) break;
                loop_space_finder_go_check_index++;
            }
        }
    }
    event_4345_6_end: ;
}
void Frames::loop_space_finder_go_6()
{
    event_func_1388();
    event_func_1389();
    event_func_1390();
    event_func_1391();
    event_func_1392();
    event_func_1393();
    event_func_1394();
    event_func_1395();
    event_func_1396();
}
void Frames::event_func_1397()
{
    // event 4336_6
    {
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(369, str_found_1165, 0);
        usespot_208_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_usespot_208(0, 0), 1);
            usespot_208_instances.add_back();
        }
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(9, str_spacefind_1164);
        }
        {
            loop_space_finder_go_running = true;
            int times = int(1);
            loop_space_finder_go_index = 0;
            while (loop_space_finder_go_index < times) {
                loop_space_finder_go_6();
                if (!loop_space_finder_go_running) break;
                loop_space_finder_go_index++;
            }
        }
    }
    event_4336_6_end: ;
}
void Frames::event_func_1398()
{
    // event 4347_6
    {
        // group: Find Space Loop
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(9)) == (str_spacefind_1164))) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_4347_6_end;
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4347_6_end: ;
}
void Frames::loop_space_finder_6()
{
    event_func_1397();
    event_func_1398();
}
void Frames::event_func_1399()
{
    // event 1915_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1)) goto event_1915_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(372, str_spacex_1168, ((Active*)get_instance(containertailorout_395_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(373, str_spacey_1169, ((Active*)get_instance(containertailorout_395_instances, default_active_instance))->get_y());
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
    event_1915_6_end: ;
}
void Frames::event_func_1400()
{
    // event 1916_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1)) goto event_1916_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(95, str_charz_607)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1916_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(370, str_foundx_1166));
            ((Active*)*it)->alterables->values.set(24, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(371, str_foundy_1167));
            ((Active*)*it)->alterables->flags.enable(60);
        }
    }
    event_1916_6_end: ;
}
void Frames::loop_npc_tailorshop_space_6()
{
    event_func_1399();
    event_func_1400();
}
void Frames::event_func_1401()
{
    // event 1054_6
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1054_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1054_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1054_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_guards_halt_1170);
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -1);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(352, str_telloff_1145, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142), str_name_693, ((Active*)get_instance(playerBase_instances))->alterables->strings.get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(32, str_heat_495, 100);
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
    event_1054_6_end: ;
}
void Frames::loop_policing_tools_6()
{
    event_func_1401();
    event_func_1320();
}
void Frames::event_func_1402()
{
    // event 1311_6
    {
        if (!(group_code_1)) goto event_1311_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(260, str_cansee_915, 1);
        ((Active*)get_instance(los_198_instances))->set_layer(2-1);
        ((Active*)get_instance(los_198_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(374, str_attackerx_1171));
        ((Active*)get_instance(los_198_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(375, str_attackery_1172));
        ((Active*)get_instance(los_198_instances))->set_x_scale(get_distance_int(((AssociateArray*)get_instance(gameVariables_instances))->get_value(374, str_attackerx_1171), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(375, str_attackery_1172), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(376, str_targetx_1173), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(377, str_targety_1174)));
        ((Active*)get_instance(los_198_instances))->set_angle(get_angle_int(((AssociateArray*)get_instance(gameVariables_instances))->get_value(374, str_attackerx_1171), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(375, str_attackery_1172), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(376, str_targetx_1173), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(377, str_targety_1174)), 0);
    }
    event_1311_6_end: ;
}
void Frames::event_func_1403()
{
    // event 1312_6
    {
        if (!(group_code_1)) goto event_1312_6_end;
        los_198_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(los_198_instances, qualifier_19)) goto event_1312_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(260, str_cansee_915, 0);
    }
    event_1312_6_end: ;
}
void Frames::event_func_1404()
{
    // event 1313_6
    {
        if (!(group_code_1)) goto event_1313_6_end;
        if (!(((Active*)get_instance(los_198_instances))->overlaps_background())) goto event_1313_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(260, str_cansee_915, 0);
    }
    event_1313_6_end: ;
}
void Frames::event_func_1405()
{
    // event 1314_6
    {
        if (!(group_code_1)) goto event_1314_6_end;
        los_198_instances.clear_selection();
        qualifier_22.clear_selection();
        if (!check_overlap(los_198_instances, qualifier_22)) goto event_1314_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(260, str_cansee_915, 0);
    }
    event_1314_6_end: ;
}
void Frames::loop_chaselos_6()
{
    event_func_1402();
    event_func_1403();
    event_func_1404();
    event_func_1405();
}
void Frames::event_func_1406()
{
    // event 1297_6
    {
        if (!(group_code_1)) goto event_1297_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(378, str_f_targrange_1175)) < (100))) goto event_1297_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_cansee_index+1))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1297_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(target_177_instances))->alterables->values.get(0));
            ((Active*)*it)->alterables->values.set(15, -2);
            ((Active*)*it)->alterables->values.sub(12, 3);
        }
    }
    event_1297_6_end: ;
}
void Frames::event_func_1407()
{
    // event 1298_6
    {
        if (!(group_code_1)) goto event_1298_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(378, str_f_targrange_1175)) < (100))) goto event_1298_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(379, str_lastnotice_1176)) <= (0))) goto event_1298_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_cansee_index+1))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1298_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_attack_1177);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
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
    event_1298_6_end: ;
}
void Frames::loop_follow_loop_targ_range_6()
{
    event_func_1406();
    event_func_1407();
}
void Frames::event_func_1408()
{
    // event 1289_6
    {
        if (!(group_code_1)) goto event_1289_6_end;
        qualifier_5.clear_selection();
        for (QualifierIterator it(qualifier_5); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(380, str_targetz_1178)))) { it.deselect(); continue; }
        }
        if (!qualifier_5.has_selection()) goto event_1289_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(376, str_targetx_1173, ((Active*)get_single(qualifier_5, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(377, str_targety_1174, ((Active*)get_single(qualifier_5, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(381, str_targetlayer_1179, ((Active*)get_single(qualifier_5, default_active_instance))->layer->index+1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(382, str_targethp_1180, ((Active*)get_single(qualifier_5, default_active_instance))->alterables->values.get(7));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(383, str_range_1181, get_distance_int(((AssociateArray*)get_instance(gameVariables_instances))->get_value(374, str_attackerx_1171), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(375, str_attackery_1172), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(376, str_targetx_1173), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(377, str_targety_1174)));
    }
    event_1289_6_end: ;
}
void Frames::event_func_1409()
{
    // event 1290_6
    bool or_result_1290_6 = false;
    bool or_temp_result_1290_6_0 = false;
    {
        if (!(group_code_1)) goto or_event_1290_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(382, str_targethp_1180)) <= (0))) goto or_event_1290_6_0_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_cansee_index+1))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto or_event_1290_6_0_end;
        or_result_1290_6 = true;
        or_temp_result_1290_6_0 = true;
    }
    or_event_1290_6_0_end: ;
    qualifier_14.clear_saved_selection();
    if (or_temp_result_1290_6_0) {
        qualifier_14.save_selection();
    }
    // event 1290_6
    bool or_temp_result_1290_6_1 = false;
    {
        if (!(group_code_1)) goto or_event_1290_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(381, str_targetlayer_1179)) != (2))) goto or_event_1290_6_1_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_cansee_index+1))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto or_event_1290_6_1_end;
        or_result_1290_6 = true;
        or_temp_result_1290_6_1 = true;
    }
    or_event_1290_6_1_end: ;
    if (or_temp_result_1290_6_1) {
        qualifier_14.save_selection();
    }
    // event 1290_6
    bool or_temp_result_1290_6_2 = false;
    {
        if (!(group_code_1)) goto or_event_1290_6_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(383, str_range_1181)) > (130))) goto or_event_1290_6_2_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_cansee_index+1))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto or_event_1290_6_2_end;
        or_result_1290_6 = true;
        or_temp_result_1290_6_2 = true;
        or_event_1290_6_2_end: ;
        if (or_temp_result_1290_6_2) {
            qualifier_14.save_selection();
        }
        if (!or_result_1290_6) goto or_final_or_event_1290_6_2_end;
        qualifier_14.empty_selection();
        if (or_temp_result_1290_6_0 || or_temp_result_1290_6_1 || or_temp_result_1290_6_2) {
            qualifier_14.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(260, str_cansee_915, -1);
        }
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->alterables->values.set(15, 0);
            ((Active*)*it)->alterables->flags.disable(250);
            ((Active*)*it)->alterables->flags.disable(251);
        }
    MoveIt::stop(qualifier_14);}
    or_final_or_event_1290_6_2_end: ;
}
void Frames::event_func_1410()
{
    // event 1291_6
    {
        if (!(group_code_1)) goto event_1291_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(260, str_cansee_915)) == (0))) goto event_1291_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(260, str_cansee_915, 1);
        {
            loop_chaselos_running = true;
            int times = int(1);
            loop_chaselos_index = 0;
            while (loop_chaselos_index < times) {
                loop_chaselos_6();
                if (!loop_chaselos_running) break;
                loop_chaselos_index++;
            }
        }
    }
    event_1291_6_end: ;
}
void Frames::event_func_1411()
{
    // event 1292_6
    {
        if (!(group_code_1)) goto event_1292_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(260, str_cansee_915)) == (1))) goto event_1292_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(383, str_range_1181)) <= (20))) goto event_1292_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_cansee_index+1))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1292_6_end;
    MoveIt::stop(qualifier_14);MoveIt::clear_queue();
    }
    event_1292_6_end: ;
}
void Frames::event_func_1412()
{
    // event 1293_6
    {
        if (!(group_code_1)) goto event_1293_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(260, str_cansee_915)) == (1))) goto event_1293_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(383, str_range_1181)) > (20))) goto event_1293_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_cansee_index+1))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1293_6_end;
    MoveIt::add_queue(qualifier_14);MoveIt::move(((AssociateArray*)get_instance(gameVariables_instances))->get_value(376, str_targetx_1173), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(377, str_targety_1174), 21);
    MoveIt::clear_queue();
    }
    event_1293_6_end: ;
}
void Frames::event_func_1413()
{
    // event 1294_6
    {
        if (!(group_code_1)) goto event_1294_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(260, str_cansee_915)) == (1))) goto event_1294_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_cansee_index+1))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1294_6_end;
        ((Active*)get_instance(chaseob_258_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(376, str_targetx_1173));
        ((Active*)get_instance(chaseob_258_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(377, str_targety_1174));
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(251);
            ((Active*)*it)->alterables->flags.enable(250);
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(chaseob_258_instances))->x + 0, ((Active*)get_instance(chaseob_258_instances))->y + 0));
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_instance(chaseob_258_instances))->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_instance(chaseob_258_instances))->get_y());
        }
    }
    event_1294_6_end: ;
}
void Frames::event_func_1414()
{
    // event 1295_6
    {
        if (!(group_code_1)) goto event_1295_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(260, str_cansee_915)) == (0))) goto event_1295_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_cansee_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(21)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1295_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(376, str_targetx_1173));
            ((Active*)*it)->alterables->values.set(24, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(377, str_targety_1174));
            ((Active*)*it)->alterables->flags.disable(250);
            ((Active*)*it)->alterables->flags.enable(251);
            ((Active*)*it)->alterables->values.set(21, 80);
        }
    }
    event_1295_6_end: ;
}
void Frames::event_func_1415()
{
    // event 1296_6
    {
        if (!(group_code_1)) goto event_1296_6_end;
        if (!((((Active*)get_instance(target_177_instances))->alterables->values.get(0)) != (0))) goto event_1296_6_end;
        if (!((((Active*)get_instance(target_177_instances))->alterables->values.get(0)) != (loop_cansee_index+1))) goto event_1296_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_instance(target_177_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1296_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(384, str_f_targx_1182, ((Active*)get_single(qualifier_14, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(385, str_f_targy_1183, ((Active*)get_single(qualifier_14, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(378, str_f_targrange_1175, get_distance_int(((AssociateArray*)get_instance(gameVariables_instances))->get_value(374, str_attackerx_1171), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(375, str_attackery_1172), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(384, str_f_targx_1182), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(385, str_f_targy_1183)));
        {
            loop_follow_loop_targ_range_running = true;
            int times = int(1);
            loop_follow_loop_targ_range_index = 0;
            while (loop_follow_loop_targ_range_index < times) {
                loop_follow_loop_targ_range_6();
                if (!loop_follow_loop_targ_range_running) break;
                loop_follow_loop_targ_range_index++;
            }
        }
    }
    event_1296_6_end: ;
}
void Frames::loop_follow_loop_6()
{
    event_func_1408();
    event_func_1409();
    event_func_1410();
    event_func_1411();
    event_func_1412();
    event_func_1413();
    event_func_1414();
    event_func_1415();
}
void Frames::event_func_1416()
{
    // event 3889_6
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3889_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(386, str_delslot_1184)) == (1))) goto event_3889_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3889_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(1, str_0_1185+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)+str__1130+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)+str__1130+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3));
        }
    }
    event_3889_6_end: ;
}
void Frames::event_func_1417()
{
    // event 3890_6
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3890_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(386, str_delslot_1184)) == (2))) goto event_3890_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3890_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(1, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)+str_0_1186+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)+str__1130+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3));
        }
    }
    event_3890_6_end: ;
}
void Frames::event_func_1418()
{
    // event 3891_6
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3891_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(386, str_delslot_1184)) == (3))) goto event_3891_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3891_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(1, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)+str__1130+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)+str_0_1186+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3));
        }
    }
    event_3891_6_end: ;
}
void Frames::event_func_1419()
{
    // event 3892_6
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3892_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(386, str_delslot_1184)) == (4))) goto event_3892_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3892_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(1, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)+str__1130+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)+str__1130+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)+str_0_1187);
        }
    }
    event_3892_6_end: ;
}
void Frames::loop_del_from_vendor_6()
{
    event_func_1293();
    event_func_1416();
    event_func_1417();
    event_func_1418();
    event_func_1419();
}
void Frames::event_func_1420()
{
    // event 3885_6
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3885_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)) == (-1))) goto event_3885_6_end;
            loop_buy_npc_running = false;
    
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_3885_6_end: ;
}
void Frames::event_func_1421()
{
    // event 3886_6
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3886_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)) != (-1))) goto event_3886_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_buy_1131))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(387, str_clickeditemslot_1188)))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3886_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(219, str_cash_11)) < (((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(5)))) goto event_3886_6_end;
            loop_buy_npc_running = false;
    
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_3886_6_end: ;
}
void Frames::event_func_1422()
{
    // event 3887_6
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3887_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)) != (-1))) goto event_3887_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_buy_1131))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(387, str_clickeditemslot_1188)))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3887_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(219, str_cash_11)) >= (((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(5)))) goto event_3887_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3887_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_3887_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3887_6_0: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832));
            ((Active*)*it)->set_scale(1);
            ((Active*)*it)->alterables->strings.set(0, str_inven_820);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(219, str_cash_11, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(5));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(386, str_delslot_1184, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(387, str_clickeditemslot_1188));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)), number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7)));
        {
            loop_del_from_vendor_running = true;
            int times = int(1);
            loop_del_from_vendor_index = 0;
            while (loop_del_from_vendor_index < times) {
                loop_del_from_vendor_6();
                if (!loop_del_from_vendor_running) break;
                loop_del_from_vendor_index++;
            }
        }
        media.play_id(SOUND_BUY_11, 1-1);
    }
    event_3887_6_end: ;
}
void Frames::loop_buy_npc_6()
{
    event_func_1420();
    event_func_1421();
    event_func_1422();
}
void Frames::event_func_1423()
{
    // event 4223_6
    {
        if (!(group_loops_1)) goto event_4223_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(388, str_targtype_1189)) == (str_inmate_1190))) goto event_4223_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(389, str_f_targ_1191)) == (0))) goto event_4223_6_end;
        inmateBase_instances.clear_selection();
        FrameObject * single_instance_4223_6_0; single_instance_4223_6_0 = pick_random(inmateBase_instances);
        if (single_instance_4223_6_0 == NULL) goto event_4223_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(389, str_f_targ_1191, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(390, str_targz_1192, ((Active*)single_instance_4223_6_0)->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(391, str_targname_1193, ((Active*)single_instance_4223_6_0)->alterables->strings.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(388, str_targtype_1189, str_inmate_1190);
    }
    event_4223_6_end: ;
}
void Frames::event_func_1424()
{
    // event 4224_6
    {
        if (!(group_loops_1)) goto event_4224_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(388, str_targtype_1189)) == (str_inmate_1190))) goto event_4224_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(390, str_targz_1192)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(392, str_mz_1194)))) goto event_4224_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(389, str_f_targ_1191, 0);
    }
    event_4224_6_end: ;
}
void Frames::event_func_1425()
{
    // event 4225_6
    {
        if (!(group_loops_1)) goto event_4225_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(388, str_targtype_1189)) == (str_inmate_1190))) goto event_4225_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(390, str_targz_1192)) <= (0))) goto event_4225_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(389, str_f_targ_1191, 0);
    }
    event_4225_6_end: ;
}
void Frames::event_func_1426()
{
    // event 4226_6
    {
        if (!(group_loops_1)) goto event_4226_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(388, str_targtype_1189)) == (str_inmate_1190))) goto event_4226_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(389, str_f_targ_1191)) == (1))) goto event_4226_6_end;
            loop_create_mission_target_running = false;
    
    }
    event_4226_6_end: ;
}
void Frames::event_func_1427()
{
    // event 4227_6
    {
        if (!(group_loops_1)) goto event_4227_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_4227_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(388, str_targtype_1189)) == (str_guard_1195))) goto event_4227_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(389, str_f_targ_1191)) == (0))) goto event_4227_6_end;
        guardBase_instances.clear_selection();
        FrameObject * single_instance_4227_6_0; single_instance_4227_6_0 = pick_random(guardBase_instances);
        if (single_instance_4227_6_0 == NULL) goto event_4227_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(389, str_f_targ_1191, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(390, str_targz_1192, ((Active*)single_instance_4227_6_0)->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(391, str_targname_1193, ((Active*)single_instance_4227_6_0)->alterables->strings.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(246, str_payout_886, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(246, str_payout_886)*2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(388, str_targtype_1189, str_guard_1195);
    }
    event_4227_6_end: ;
}
void Frames::event_func_1428()
{
    // event 4228_6
    {
        if (!(group_loops_1)) goto event_4228_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_4228_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(388, str_targtype_1189)) == (str_guard_1195))) goto event_4228_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(389, str_f_targ_1191)) == (0))) goto event_4228_6_end;
        guardBase_instances.clear_selection();
        FrameObject * single_instance_4228_6_0; single_instance_4228_6_0 = pick_random(guardBase_instances);
        if (single_instance_4228_6_0 == NULL) goto event_4228_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(389, str_f_targ_1191, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(390, str_targz_1192, ((Active*)single_instance_4228_6_0)->alterables->values.get(25));
        ((StringTokenizer*)get_instance(undergroundTileRow_instances))->split(((Active*)single_instance_4228_6_0)->alterables->strings.get(0), str__189);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(391, str_targname_1193, StringReplace::replace(((INI*)get_instance(translationData_instances))->get_string(str_dtaf_137, str_hench_1196), str_name_693, ((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(246, str_payout_886, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(246, str_payout_886)*2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(388, str_targtype_1189, str_guard_1195);
    }
    event_4228_6_end: ;
}
void Frames::loop_create_mission_target_6()
{
    event_func_1423();
    event_func_1424();
    event_func_1425();
    event_func_1426();
    event_func_1427();
    event_func_1428();
}
void Frames::event_func_1429()
{
    // event 4209_6
    {
        if (!(group_loops_1)) goto event_4209_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(135, str_mid_700)) != (-10))) goto event_4209_6_end;
        ((INI*)get_instance(translationData_instances))->set_group(str_missions_882+((AssociateArray*)get_instance(gameVariables_instances))->get_string(244, str_missiontype_883));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(245, str_mission_num_884, 1+randrange_event(((AssociateArray*)get_instance(gameVariables_instances))->get_value(393, str_fav_beat_count_1197)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(245, str_mission_num_884, 1+randrange_event(((INI*)get_instance(translationData_instances))->get_value_int(str_count_885)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(translationData_instances))->get_string(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(245, str_mission_num_884))), str__254);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(247, str_missiontext_887, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(388, str_targtype_1189, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(246, str_payout_886, 10);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(389, str_f_targ_1191, 0);
        {
            loop_create_mission_target_running = true;
            int times = int(3);
            loop_create_mission_target_index = 0;
            while (loop_create_mission_target_index < times) {
                loop_create_mission_target_6();
                if (!loop_create_mission_target_running) break;
                loop_create_mission_target_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(247, str_missiontext_887, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(247, str_missiontext_887), str_guard_1198, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(391, str_targname_1193)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(247, str_missiontext_887, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(247, str_missiontext_887), str_inmate_1199, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(391, str_targname_1193)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(247, str_missiontext_887, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(247, str_missiontext_887), str_name_693, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(391, str_targname_1193)));
    }
    event_4209_6_end: ;
}
void Frames::event_func_1430()
{
    // event 4210_6
    {
        if (!(group_loops_1)) goto event_4210_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(135, str_mid_700)) != (-10))) goto event_4210_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(135, str_mid_700)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_4210_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(246, str_payout_886, get_floor(((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(12)/MathHelper()/10));
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(2, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(247, str_missiontext_887)+str__254+((AssociateArray*)get_instance(gameVariables_instances))->get_string(244, str_missiontype_883)+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(390, str_targz_1192))+str__889+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(246, str_payout_886)));
        }
    }
    event_4210_6_end: ;
}
