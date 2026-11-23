#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_1738()
{
    // event 1909_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1)) goto event_1909_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(95, str_charz_607)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1909_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(370, str_foundx_1166));
            ((Active*)*it)->alterables->values.set(24, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(371, str_foundy_1167));
            ((Active*)*it)->alterables->flags.enable(60);
        }
    }
    event_1909_6_end: ;
}
void Frames::loop_npc_woodshop_space_done_6()
{
    event_func_1737();
    event_func_1738();
}
void Frames::event_func_1739()
{
    // event 3398_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3398_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(368, str_currentinvslot_1162)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3398_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_3398_6_end: ;
}
void Frames::loop_flip_into_equip2_6()
{
    event_func_1739();
}
void Frames::event_func_1740()
{
    // event 3393_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3393_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(460, str_allowed_1329, 1);
    }
    event_3393_6_end: ;
}
void Frames::event_func_1741()
{
    // event 3394_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3394_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_outfit_505))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3394_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(460, str_allowed_1329)) == (1))) goto event_3394_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(461, str_newslotx_1330, ((Active*)get_single(itemSlot_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(462, str_newsloty_1331, ((Active*)get_single(itemSlot_instances, default_active_instance))->get_y());
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
    }
    event_3394_6_end: ;
}
void Frames::event_func_1742()
{
    // event 3395_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3395_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(368, str_currentinvslot_1162)))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3395_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(460, str_allowed_1329)) == (1))) goto event_3395_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(461, str_newslotx_1330));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(462, str_newsloty_1331));
            ((Active*)*it)->alterables->strings.set(0, str_outfit_505);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->set_scale(2);
            ((Active*)*it)->alterables->flags.enable(-5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(44, str_outfit_505, number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(31, str_outfitshort_494, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(368, str_currentinvslot_1162)), empty_string);
        {
            loop_flip_into_equip2_running = true;
            int times = int(1);
            loop_flip_into_equip2_index = 0;
            while (loop_flip_into_equip2_index < times) {
                loop_flip_into_equip2_6();
                if (!loop_flip_into_equip2_running) break;
                loop_flip_into_equip2_index++;
            }
        }
        media.play_id(SOUND_STEP_1, 1-1);
    }
    event_3395_6_end: ;
}
void Frames::loop_flip_into_outfit_6()
{
    event_func_1740();
    event_func_1741();
    event_func_1742();
}
void Frames::event_func_1743()
{
    // event 4581_6
    {
        // group: Door key degrades
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (loop_key_degrade_index+1))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_4581_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(439, str_newhp_1295, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1))-10);
    }
    event_4581_6_end: ;
}
void Frames::event_func_1744()
{
    // event 4582_6
    {
        // group: Door key degrades
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (loop_key_degrade_index+1))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_4582_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(-5);
            ((Active*)*it)->alterables->values.set(7, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(439, str_newhp_1295));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(loop_key_degrade_index+1), ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)+str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(439, str_newhp_1295)));
    }
    event_4582_6_end: ;
}
void Frames::event_func_1745()
{
    // event 4583_6
    {
        // group: Door key degrades
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(439, str_newhp_1295)) <= (0))) goto event_4583_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (loop_key_degrade_index+1))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_4583_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(463, str_da_key_1332, lowercase_string(((INI*)get_instance(itemData_instances))->get_string(number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2)), str_name_103)));
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(loop_key_degrade_index+1), empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_25_1214));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142), str_item_1215, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(463, str_da_key_1332)));
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
    event_4583_6_end: ;
}
void Frames::loop_key_degrade_go_6()
{
    event_func_1743();
    event_func_1744();
    event_func_1745();
}
void Frames::event_func_1746()
{
    // event 3975_6
    {
        if (!(group_code_1)) goto event_3975_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3975_6_end;
        activesystembox_450_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_activesystembox_450(0, 0), 5);
            activesystembox_450_instances.add_back();
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(0, -3);
        }
        ((SystemBox*)get_single(activesystembox_450_instances, default_systembox_instance))->move_back(((Active*)get_instance(sidePanel_instances)));
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_fill(Color(make_color_int(221, 204, 254)));
            ((SystemBox*)*it)->set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142));
            ((SystemBox*)*it)->alterables->values.set(1, 80+string_size(((SystemBox*)*it)->text));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
        }
    }
    event_3975_6_end: ;
}
void Frames::loop_warden_speak_6()
{
    event_func_1383();
    event_func_1746();
}
void Frames::event_func_1747()
{
    // event 1878_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1)) goto event_1878_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(9)) == (str_metal_1333))) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_1878_6_end;
        if (!check_not_overlap(usespot_208_instances, qualifier_18)) goto event_1878_6_end;
        if (!check_not_overlap(usespot_208_instances, qualifier_19)) goto event_1878_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(369, str_found_1165, 1);
    }
    event_1878_6_end: ;
}
void Frames::loop_check_npc_metal_space_6()
{
    event_func_1747();
}
void Frames::event_func_1748()
{
    // event 1876_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1)) goto event_1876_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_1876_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(metalshop_326_instances, it.current_index));
            if (parent == NULL) goto pos_end_1876_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -16, parent->get_y() + 0);
            pos_end_1876_6_0: ;
        }
        {
            loop_check_npc_metal_space_running = true;
            int times = int(1);
            loop_check_npc_metal_space_index = 0;
            while (loop_check_npc_metal_space_index < times) {
                loop_check_npc_metal_space_6();
                if (!loop_check_npc_metal_space_running) break;
                loop_check_npc_metal_space_index++;
            }
        }
    }
    event_1876_6_end: ;
}
void Frames::event_func_1749()
{
    // event 1877_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1)) goto event_1877_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_1877_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(metalshop_326_instances, it.current_index));
            if (parent == NULL) goto pos_end_1877_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 16, parent->get_y() + 0);
            pos_end_1877_6_0: ;
        }
        {
            loop_check_npc_metal_space_running = true;
            int times = int(1);
            loop_check_npc_metal_space_index = 0;
            while (loop_check_npc_metal_space_index < times) {
                loop_check_npc_metal_space_6();
                if (!loop_check_npc_metal_space_running) break;
                loop_check_npc_metal_space_index++;
            }
        }
    }
    event_1877_6_end: ;
}
void Frames::event_func_1750()
{
    // event 1879_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1)) goto event_1879_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(95, str_charz_607)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1879_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(9)) == (str_metal_1333))) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_1879_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(usespot_208_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(usespot_208_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->alterables->flags.enable(60);
        }
    }
    event_1879_6_end: ;
}
void Frames::event_func_1751()
{
    // event 1880_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1)) goto event_1880_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(9)) == (str_metal_1333))) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_1880_6_end;
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1880_6_end: ;
}
void Frames::loop_npc_metal_space_6()
{
    event_func_1748();
    event_func_1749();
    event_func_1750();
    event_func_1751();
}
void Frames::event_func_1752()
{
    // event 1849_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1)) goto event_1849_6_end;
        desks_305_instances.clear_selection();
        FrameObject * single_instance_1849_6_0; single_instance_1849_6_0 = pick_random(desks_305_instances);
        if (single_instance_1849_6_0 == NULL) goto event_1849_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(372, str_spacex_1168, ((Active*)single_instance_1849_6_0)->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(373, str_spacey_1169, ((Active*)single_instance_1849_6_0)->get_y());
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
    event_1849_6_end: ;
}
void Frames::event_func_1753()
{
    // event 1850_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1)) goto event_1850_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(95, str_charz_607)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1850_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(370, str_foundx_1166));
            ((Active*)*it)->alterables->values.set(24, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(371, str_foundy_1167));
            ((Active*)*it)->alterables->flags.enable(60);
        }
    }
    event_1850_6_end: ;
}
void Frames::loop_npc_library_space_6()
{
    event_func_1752();
    event_func_1753();
}
void Frames::event_func_1754()
{
    // event 1919_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1)) goto event_1919_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(372, str_spacex_1168, ((Active*)get_instance(containertailorin_396_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(373, str_spacey_1169, ((Active*)get_instance(containertailorin_396_instances, default_active_instance))->get_y());
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
    event_1919_6_end: ;
}
void Frames::loop_npc_tailorshop_space_done_6()
{
    event_func_1754();
    event_func_1400();
}
void Frames::event_func_1755()
{
    // event 1859_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1)) goto event_1859_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(9)) == (str_laundry_29))) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_1859_6_end;
        if (!check_not_overlap(usespot_208_instances, qualifier_18)) goto event_1859_6_end;
        if (!check_not_overlap(usespot_208_instances, qualifier_19)) goto event_1859_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(369, str_found_1165, 1);
    }
    event_1859_6_end: ;
}
void Frames::loop_check_npc_laundry_space_6()
{
    event_func_1755();
}
void Frames::event_func_1756()
{
    // event 1866_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1)) goto event_1866_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_1866_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(containerlaundryclean_275_instances, it.current_index));
            if (parent == NULL) goto pos_end_1866_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -16, parent->get_y() + 0);
            pos_end_1866_6_0: ;
        }
        {
            loop_check_npc_laundry_space_running = true;
            int times = int(1);
            loop_check_npc_laundry_space_index = 0;
            while (loop_check_npc_laundry_space_index < times) {
                loop_check_npc_laundry_space_6();
                if (!loop_check_npc_laundry_space_running) break;
                loop_check_npc_laundry_space_index++;
            }
        }
    }
    event_1866_6_end: ;
}
void Frames::event_func_1757()
{
    // event 1867_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1)) goto event_1867_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_1867_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(containerlaundryclean_275_instances, it.current_index));
            if (parent == NULL) goto pos_end_1867_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 16, parent->get_y() + 0);
            pos_end_1867_6_0: ;
        }
        {
            loop_check_npc_laundry_space_clean_running = true;
            int times = int(1);
            loop_check_npc_laundry_space_clean_index = 0;
            while (loop_check_npc_laundry_space_clean_index < times) {
                loop_check_npc_laundry_space_6();
                if (!loop_check_npc_laundry_space_clean_running) break;
                loop_check_npc_laundry_space_clean_index++;
            }
        }
    }
    event_1867_6_end: ;
}
void Frames::event_func_1758()
{
    // event 1869_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1)) goto event_1869_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(95, str_charz_607)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1869_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(9)) == (str_laundry_29))) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_1869_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(usespot_208_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(usespot_208_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->alterables->flags.enable(60);
        }
    }
    event_1869_6_end: ;
}
void Frames::event_func_1759()
{
    // event 1870_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1)) goto event_1870_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(9)) == (str_laundry_29))) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_1870_6_end;
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1870_6_end: ;
}
void Frames::loop_npc_laundry_space_clean_6()
{
    event_func_1756();
    event_func_1757();
    event_func_1758();
    event_func_1759();
}
void Frames::event_func_1760()
{
    // event 1857_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1)) goto event_1857_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_1857_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(containerlaundrydirty_274_instances, it.current_index));
            if (parent == NULL) goto pos_end_1857_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -16, parent->get_y() + 0);
            pos_end_1857_6_0: ;
        }
        {
            loop_check_npc_laundry_space_running = true;
            int times = int(1);
            loop_check_npc_laundry_space_index = 0;
            while (loop_check_npc_laundry_space_index < times) {
                loop_check_npc_laundry_space_6();
                if (!loop_check_npc_laundry_space_running) break;
                loop_check_npc_laundry_space_index++;
            }
        }
    }
    event_1857_6_end: ;
}
void Frames::event_func_1761()
{
    // event 1858_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1)) goto event_1858_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_1858_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(containerlaundrydirty_274_instances, it.current_index));
            if (parent == NULL) goto pos_end_1858_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 16, parent->get_y() + 0);
            pos_end_1858_6_0: ;
        }
        {
            loop_check_npc_laundry_space_running = true;
            int times = int(1);
            loop_check_npc_laundry_space_index = 0;
            while (loop_check_npc_laundry_space_index < times) {
                loop_check_npc_laundry_space_6();
                if (!loop_check_npc_laundry_space_running) break;
                loop_check_npc_laundry_space_index++;
            }
        }
    }
    event_1858_6_end: ;
}
void Frames::loop_npc_laundry_space_6()
{
    event_func_1760();
    event_func_1761();
    event_func_1758();
    event_func_1759();
}
void Frames::event_func_1762()
{
    // event 1904_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1)) goto event_1904_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(372, str_spacex_1168, ((Active*)get_instance(containertimber_267_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(373, str_spacey_1169, ((Active*)get_instance(containertimber_267_instances, default_active_instance))->get_y());
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
    event_1904_6_end: ;
}
void Frames::loop_npc_woodshop_space_6()
{
    event_func_1762();
    event_func_1738();
}
void Frames::event_func_1763()
{
    // event 1834_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1)) goto event_1834_6_end;
        desks_305_instances.clear_selection();
        FrameObject * single_instance_1834_6_0; single_instance_1834_6_0 = pick_random(desks_305_instances);
        if (single_instance_1834_6_0 == NULL) goto event_1834_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(372, str_spacex_1168, ((Active*)single_instance_1834_6_0)->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(373, str_spacey_1169, ((Active*)single_instance_1834_6_0)->get_y());
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
    event_1834_6_end: ;
}
void Frames::event_func_1764()
{
    // event 1835_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1)) goto event_1835_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(95, str_charz_607)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1835_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(370, str_foundx_1166));
            ((Active*)*it)->alterables->values.set(24, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(371, str_foundy_1167));
            ((Active*)*it)->alterables->flags.enable(60);
        }
    }
    event_1835_6_end: ;
}
void Frames::loop_npc_mailman_space_6()
{
    event_func_1763();
    event_func_1764();
}
void Frames::event_func_1765()
{
    // event 1930_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1)) goto event_1930_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(9)) == (str_deliveries_577))) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_1930_6_end;
        if (!check_not_overlap(usespot_208_instances, qualifier_18)) goto event_1930_6_end;
        if (!check_not_overlap(usespot_208_instances, qualifier_19)) goto event_1930_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(369, str_found_1165, 1);
    }
    event_1930_6_end: ;
}
void Frames::loop_check_npc_deliv_space_6()
{
    event_func_1765();
}
void Frames::event_func_1766()
{
    // event 1928_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1)) goto event_1928_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_1928_6_end;
        qualifier_27.clear_selection();
        FrameObject * single_instance_1928_6_0; single_instance_1928_6_0 = pick_random(qualifier_27);
        if (single_instance_1928_6_0 == NULL) goto event_1928_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)single_instance_1928_6_0);
            if (parent == NULL) goto pos_end_1928_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + -16, parent->get_y() + 0);
            pos_end_1928_6_1: ;
        }
        {
            loop_check_npc_deliv_space_running = true;
            int times = int(1);
            loop_check_npc_deliv_space_index = 0;
            while (loop_check_npc_deliv_space_index < times) {
                loop_check_npc_deliv_space_6();
                if (!loop_check_npc_deliv_space_running) break;
                loop_check_npc_deliv_space_index++;
            }
        }
    }
    event_1928_6_end: ;
}
void Frames::event_func_1767()
{
    // event 1929_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1)) goto event_1929_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_1929_6_end;
        qualifier_27.clear_selection();
        FrameObject * single_instance_1929_6_0; single_instance_1929_6_0 = pick_random(qualifier_27);
        if (single_instance_1929_6_0 == NULL) goto event_1929_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)single_instance_1929_6_0);
            if (parent == NULL) goto pos_end_1929_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 16, parent->get_y() + 0);
            pos_end_1929_6_1: ;
        }
        {
            loop_check_npc_deliv_space_running = true;
            int times = int(1);
            loop_check_npc_deliv_space_index = 0;
            while (loop_check_npc_deliv_space_index < times) {
                loop_check_npc_deliv_space_6();
                if (!loop_check_npc_deliv_space_running) break;
                loop_check_npc_deliv_space_index++;
            }
        }
    }
    event_1929_6_end: ;
}
void Frames::event_func_1768()
{
    // event 1931_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1)) goto event_1931_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(95, str_charz_607)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1931_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(9)) == (str_deliveries_577))) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_1931_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(usespot_208_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(usespot_208_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->alterables->flags.enable(60);
        }
    }
    event_1931_6_end: ;
}
void Frames::event_func_1769()
{
    // event 1932_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1)) goto event_1932_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(9)) == (str_deliveries_577))) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_1932_6_end;
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1932_6_end: ;
}
void Frames::loop_npc_deliv_space_6()
{
    event_func_1766();
    event_func_1767();
    event_func_1768();
    event_func_1769();
}
void Frames::event_func_1770()
{
    // event 1845_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1)) goto event_1845_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(372, str_spacex_1168, ((Active*)get_instance(containerbookchest_273_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(373, str_spacey_1169, ((Active*)get_instance(containerbookchest_273_instances, default_active_instance))->get_y());
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
    event_1845_6_end: ;
}
void Frames::loop_npc_library_chest_space_6()
{
    event_func_1770();
    event_func_1753();
}
void Frames::event_func_1771()
{
    // event 1892_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1)) goto event_1892_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(9)) == (str_kitchen_12))) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_1892_6_end;
        if (!check_not_overlap(usespot_208_instances, qualifier_18)) goto event_1892_6_end;
        if (!check_not_overlap(usespot_208_instances, qualifier_19)) goto event_1892_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(369, str_found_1165, 1);
    }
    event_1892_6_end: ;
}
void Frames::loop_check_npc_kitchen_space_6()
{
    event_func_1771();
}
void Frames::event_func_1772()
{
    // event 1890_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1)) goto event_1890_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_1890_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(containerkitchen_229_instances, it.current_index));
            if (parent == NULL) goto pos_end_1890_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -16, parent->get_y() + 0);
            pos_end_1890_6_0: ;
        }
        {
            loop_check_npc_kitchen_space_running = true;
            int times = int(1);
            loop_check_npc_kitchen_space_index = 0;
            while (loop_check_npc_kitchen_space_index < times) {
                loop_check_npc_kitchen_space_6();
                if (!loop_check_npc_kitchen_space_running) break;
                loop_check_npc_kitchen_space_index++;
            }
        }
    }
    event_1890_6_end: ;
}
void Frames::event_func_1773()
{
    // event 1891_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1)) goto event_1891_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_1891_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(containerkitchen_229_instances, it.current_index));
            if (parent == NULL) goto pos_end_1891_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 16, parent->get_y() + 0);
            pos_end_1891_6_0: ;
        }
        {
            loop_check_npc_kitchen_space_running = true;
            int times = int(1);
            loop_check_npc_kitchen_space_index = 0;
            while (loop_check_npc_kitchen_space_index < times) {
                loop_check_npc_kitchen_space_6();
                if (!loop_check_npc_kitchen_space_running) break;
                loop_check_npc_kitchen_space_index++;
            }
        }
    }
    event_1891_6_end: ;
}
void Frames::event_func_1774()
{
    // event 1893_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1)) goto event_1893_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(95, str_charz_607)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1893_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(9)) == (str_kitchen_12))) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_1893_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(usespot_208_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(usespot_208_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->alterables->flags.enable(60);
        }
    }
    event_1893_6_end: ;
}
void Frames::event_func_1775()
{
    // event 1894_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1)) goto event_1894_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(9)) == (str_kitchen_12))) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_1894_6_end;
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1894_6_end: ;
}
void Frames::loop_npc_kitchen_space_6()
{
    event_func_1772();
    event_func_1773();
    event_func_1774();
    event_func_1775();
}
void Frames::event_func_1776()
{
    // event 1789_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1789_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_1789_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(117, str_pos_laundry_679)) != (loop_inmates_free_period_index+1))) goto event_1789_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(121, str_pos_kitchen_683)) != (loop_inmates_free_period_index+1))) goto event_1789_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(125, str_pos_woodshop_687)) != (loop_inmates_free_period_index+1))) goto event_1789_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(127, str_pos_metalshop_689)) != (loop_inmates_free_period_index+1))) goto event_1789_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(115, str_pos_library_677)) != (loop_inmates_free_period_index+1))) goto event_1789_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(113, str_pos_mailman_675)) != (loop_inmates_free_period_index+1))) goto event_1789_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(123, str_pos_tailor_685)) != (loop_inmates_free_period_index+1))) goto event_1789_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(119, str_pos_deliveries_681)) != (loop_inmates_free_period_index+1))) goto event_1789_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(111, str_pos_gardening_673)) != (loop_inmates_free_period_index+1))) goto event_1789_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(109, str_pos_janitor_671)) != (loop_inmates_free_period_index+1))) goto event_1789_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1789_6_end;
        waypointinmate2_311_instances.clear_selection();
        FrameObject * single_instance_1789_6_0; single_instance_1789_6_0 = pick_random(waypointinmate2_311_instances);
        if (single_instance_1789_6_0 == NULL) goto event_1789_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)single_instance_1789_6_0)->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)single_instance_1789_6_0)->get_y());
        }
    }
    event_1789_6_end: ;
}
void Frames::event_func_1777()
{
    // event 1790_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1790_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) != (str_work_477))) goto event_1790_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1790_6_end;
        waypointinmate2_311_instances.clear_selection();
        FrameObject * single_instance_1790_6_0; single_instance_1790_6_0 = pick_random(waypointinmate2_311_instances);
        if (single_instance_1790_6_0 == NULL) goto event_1790_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)single_instance_1790_6_0)->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)single_instance_1790_6_0)->get_y());
        }
    }
    event_1790_6_end: ;
}
void Frames::event_func_1778()
{
    // event 1821_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_gardening_1)) goto event_1821_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(111, str_pos_gardening_673)) > (0))) goto event_1821_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(111, str_pos_gardening_673)) == (loop_inmates_free_period_index+1))) goto event_1821_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1821_6_end;
        if (!check_not_overlap(inmateBase_instances, weeds_462_instances)) goto event_1821_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1821_6_end;
        weeds_462_instances.clear_selection();
        FrameObject * single_instance_1821_6_0; single_instance_1821_6_0 = pick_random(weeds_462_instances);
        if (single_instance_1821_6_0 == NULL) goto event_1821_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)single_instance_1821_6_0)->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)single_instance_1821_6_0)->get_y());
        }
    }
    event_1821_6_end: ;
}
void Frames::event_func_1779()
{
    // event 1822_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_gardening_1)) goto event_1822_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(111, str_pos_gardening_673)) > (0))) goto event_1822_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(111, str_pos_gardening_673)) == (loop_inmates_free_period_index+1))) goto event_1822_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1822_6_end;
        weeds_462_instances.clear_selection();
        if (!check_overlap(inmateBase_instances, weeds_462_instances)) goto event_1822_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1822_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(112, str_jq_gardening_674, 1);
        for (ObjectIterator it(weeds_462_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        FrameObject * single_instance_1822_6_0; single_instance_1822_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(weeds_462_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1822_6_0 == NULL)
                    single_instance_1822_6_0 = new_obj;
            }
        }
    }
    event_1822_6_end: ;
}
void Frames::event_func_1780()
{
    // event 1824_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_janitor_1)) goto event_1824_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(109, str_pos_janitor_671)) > (0))) goto event_1824_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(109, str_pos_janitor_671)) == (loop_inmates_free_period_index+1))) goto event_1824_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1824_6_end;
        if (!check_not_overlap(inmateBase_instances, dirt_242_instances)) goto event_1824_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1824_6_end;
        dirt_242_instances.clear_selection();
        FrameObject * single_instance_1824_6_0; single_instance_1824_6_0 = pick_random(dirt_242_instances);
        if (single_instance_1824_6_0 == NULL) goto event_1824_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)single_instance_1824_6_0)->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)single_instance_1824_6_0)->get_y());
        }
    }
    event_1824_6_end: ;
}
void Frames::event_func_1781()
{
    // event 1825_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_janitor_1)) goto event_1825_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(109, str_pos_janitor_671)) > (0))) goto event_1825_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(109, str_pos_janitor_671)) == (loop_inmates_free_period_index+1))) goto event_1825_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1825_6_end;
        dirt_242_instances.clear_selection();
        if (!check_overlap(inmateBase_instances, dirt_242_instances)) goto event_1825_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1825_6_end;
        for (ObjectIterator it(dirt_242_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(110, str_jq_janitor_672, 1);
        FrameObject * single_instance_1825_6_0; single_instance_1825_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(dirt_242_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1825_6_0 == NULL)
                    single_instance_1825_6_0 = new_obj;
            }
        }
    }
    event_1825_6_end: ;
}
void Frames::event_func_1782()
{
    // event 1827_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1)) goto event_1827_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(113, str_pos_mailman_675)) == (loop_inmates_free_period_index+1))) goto event_1827_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) != (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1827_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(464, str_npc_mailman_stage_1334, 1);
    }
    event_1827_6_end: ;
}
void Frames::event_func_1783()
{
    // event 1828_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1)) goto event_1828_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(113, str_pos_mailman_675)) == (loop_inmates_free_period_index+1))) goto event_1828_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) != (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1828_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(464, str_npc_mailman_stage_1334, 1);
    }
    event_1828_6_end: ;
}
void Frames::event_func_1784()
{
    // event 1829_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1)) goto event_1829_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(113, str_pos_mailman_675)) == (loop_inmates_free_period_index+1))) goto event_1829_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1829_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(464, str_npc_mailman_stage_1334, 1);
    }
    event_1829_6_end: ;
}
void Frames::event_func_1785()
{
    // event 1830_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1)) goto event_1830_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(113, str_pos_mailman_675)) > (0))) goto event_1830_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(113, str_pos_mailman_675)) == (loop_inmates_free_period_index+1))) goto event_1830_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1830_6_end;
        {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances));
            if (parent == NULL) goto pos_end_1830_6_0;
            ((Active*)get_instance(lookinmateflag60_394_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1830_6_0: ;
        }
        ((Active*)get_instance(lookinmateflag60_394_instances))->force_animation(5);
    }
    event_1830_6_end: ;
}
void Frames::event_func_1786()
{
    // event 1831_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1)) goto event_1831_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(113, str_pos_mailman_675)) > (0))) goto event_1831_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(113, str_pos_mailman_675)) == (loop_inmates_free_period_index+1))) goto event_1831_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(464, str_npc_mailman_stage_1334)) == (1))) goto event_1831_6_end;
        lookinmateflag60_394_instances.clear_selection();
        if (!check_not_overlap(lookinmateflag60_394_instances, containermail_399_instances)) goto event_1831_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1831_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_instance(containermail_399_instances, it.current_index, default_active_instance))->get_x()+16);
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_instance(containermail_399_instances, it.current_index, default_active_instance))->get_y()+32);
        }
    }
    event_1831_6_end: ;
}
void Frames::event_func_1787()
{
    // event 1832_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1)) goto event_1832_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(113, str_pos_mailman_675)) == (loop_inmates_free_period_index+1))) goto event_1832_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(464, str_npc_mailman_stage_1334)) == (1))) goto event_1832_6_end;
        lookinmateflag60_394_instances.clear_selection();
        containermail_399_instances.clear_selection();
        if (!check_overlap(lookinmateflag60_394_instances, containermail_399_instances)) goto event_1832_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1832_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(464, str_npc_mailman_stage_1334, 2);
    }
    event_1832_6_end: ;
}
void Frames::event_func_1788()
{
    // event 1833_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1)) goto event_1833_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(113, str_pos_mailman_675)) == (loop_inmates_free_period_index+1))) goto event_1833_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(464, str_npc_mailman_stage_1334)) == (2))) goto event_1833_6_end;
        lookinmateflag60_394_instances.clear_selection();
        if (!check_not_overlap(lookinmateflag60_394_instances, desks_305_instances)) goto event_1833_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1833_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(95, str_charz_607, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        {
            loop_npc_mailman_space_running = true;
            int times = int(1);
            loop_npc_mailman_space_index = 0;
            while (loop_npc_mailman_space_index < times) {
                loop_npc_mailman_space_6();
                if (!loop_npc_mailman_space_running) break;
                loop_npc_mailman_space_index++;
            }
        }
    }
    event_1833_6_end: ;
}
void Frames::event_func_1789()
{
    // event 1836_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1)) goto event_1836_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(113, str_pos_mailman_675)) > (0))) goto event_1836_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(113, str_pos_mailman_675)) == (loop_inmates_free_period_index+1))) goto event_1836_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(464, str_npc_mailman_stage_1334)) == (2))) goto event_1836_6_end;
        lookinmateflag60_394_instances.clear_selection();
        desks_305_instances.clear_selection();
        if (!check_overlap(lookinmateflag60_394_instances, desks_305_instances)) goto event_1836_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1836_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(114, str_jq_mailman_676, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(464, str_npc_mailman_stage_1334, 1);
    }
    event_1836_6_end: ;
}
void Frames::event_func_1790()
{
    // event 1837_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1)) goto event_1837_6_end;
        {
            ((Active*)get_instance(lookinmateflag60_394_instances))->set_global_position(-100, -100);
            pos_end_1837_6_0: ;
        }
    }
    event_1837_6_end: ;
}
void Frames::event_func_1791()
{
    // event 1839_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1)) goto event_1839_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(115, str_pos_library_677)) == (loop_inmates_free_period_index+1))) goto event_1839_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) != (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1839_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(465, str_npc_library_stage_1335, 1);
    }
    event_1839_6_end: ;
}
void Frames::event_func_1792()
{
    // event 1840_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1)) goto event_1840_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(115, str_pos_library_677)) == (loop_inmates_free_period_index+1))) goto event_1840_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) != (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1840_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(465, str_npc_library_stage_1335, 1);
    }
    event_1840_6_end: ;
}
void Frames::event_func_1793()
{
    // event 1841_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1)) goto event_1841_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(115, str_pos_library_677)) == (loop_inmates_free_period_index+1))) goto event_1841_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1841_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(465, str_npc_library_stage_1335, 1);
    }
    event_1841_6_end: ;
}
void Frames::event_func_1794()
{
    // event 1842_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1)) goto event_1842_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(115, str_pos_library_677)) > (0))) goto event_1842_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(115, str_pos_library_677)) == (loop_inmates_free_period_index+1))) goto event_1842_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1842_6_end;
        {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances));
            if (parent == NULL) goto pos_end_1842_6_0;
            ((Active*)get_instance(lookinmateflag60_394_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1842_6_0: ;
        }
        ((Active*)get_instance(lookinmateflag60_394_instances))->force_animation(5);
    }
    event_1842_6_end: ;
}
void Frames::event_func_1795()
{
    // event 1843_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_old_1)) goto event_1843_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(115, str_pos_library_677)) > (0))) goto event_1843_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(115, str_pos_library_677)) == (loop_inmates_free_period_index+1))) goto event_1843_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(465, str_npc_library_stage_1335)) == (1))) goto event_1843_6_end;
        lookinmateflag60_394_instances.clear_selection();
        if (!check_not_overlap(lookinmateflag60_394_instances, containerbookchest_273_instances)) goto event_1843_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1843_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_instance(containerbookchest_273_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_instance(containerbookchest_273_instances, it.current_index, default_active_instance))->get_y()+16);
        }
    }
    event_1843_6_end: ;
}
void Frames::event_func_1796()
{
    // event 1844_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1)) goto event_1844_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(115, str_pos_library_677)) > (0))) goto event_1844_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(115, str_pos_library_677)) == (loop_inmates_free_period_index+1))) goto event_1844_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(465, str_npc_library_stage_1335)) == (1))) goto event_1844_6_end;
        lookinmateflag60_394_instances.clear_selection();
        if (!check_not_overlap(lookinmateflag60_394_instances, containerbookchest_273_instances)) goto event_1844_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1844_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(95, str_charz_607, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        {
            loop_npc_library_chest_space_running = true;
            int times = int(1);
            loop_npc_library_chest_space_index = 0;
            while (loop_npc_library_chest_space_index < times) {
                loop_npc_library_chest_space_6();
                if (!loop_npc_library_chest_space_running) break;
                loop_npc_library_chest_space_index++;
            }
        }
    }
    event_1844_6_end: ;
}
void Frames::event_func_1797()
{
    // event 1847_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1)) goto event_1847_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(115, str_pos_library_677)) == (loop_inmates_free_period_index+1))) goto event_1847_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(465, str_npc_library_stage_1335)) == (1))) goto event_1847_6_end;
        lookinmateflag60_394_instances.clear_selection();
        containerbookchest_273_instances.clear_selection();
        if (!check_overlap(lookinmateflag60_394_instances, containerbookchest_273_instances)) goto event_1847_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1847_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(465, str_npc_library_stage_1335, 2);
    }
    event_1847_6_end: ;
}
void Frames::event_func_1798()
{
    // event 1848_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1)) goto event_1848_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(115, str_pos_library_677)) == (loop_inmates_free_period_index+1))) goto event_1848_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(465, str_npc_library_stage_1335)) == (2))) goto event_1848_6_end;
        lookinmateflag60_394_instances.clear_selection();
        if (!check_not_overlap(lookinmateflag60_394_instances, desks_305_instances)) goto event_1848_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1848_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(95, str_charz_607, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        {
            loop_npc_library_space_running = true;
            int times = int(1);
            loop_npc_library_space_index = 0;
            while (loop_npc_library_space_index < times) {
                loop_npc_library_space_6();
                if (!loop_npc_library_space_running) break;
                loop_npc_library_space_index++;
            }
        }
    }
    event_1848_6_end: ;
}
void Frames::event_func_1799()
{
    // event 1851_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1)) goto event_1851_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(115, str_pos_library_677)) > (0))) goto event_1851_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(115, str_pos_library_677)) == (loop_inmates_free_period_index+1))) goto event_1851_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(465, str_npc_library_stage_1335)) == (2))) goto event_1851_6_end;
        lookinmateflag60_394_instances.clear_selection();
        desks_305_instances.clear_selection();
        if (!check_overlap(lookinmateflag60_394_instances, desks_305_instances)) goto event_1851_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1851_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(116, str_jq_library_678, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(465, str_npc_library_stage_1335, 1);
    }
    event_1851_6_end: ;
}
void Frames::event_func_1800()
{
    // event 1852_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1)) goto event_1852_6_end;
        {
            ((Active*)get_instance(lookinmateflag60_394_instances))->set_global_position(-100, -100);
            pos_end_1852_6_0: ;
        }
    }
    event_1852_6_end: ;
}
void Frames::event_func_1801()
{
    // event 1854_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1)) goto event_1854_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(117, str_pos_laundry_679)) == (loop_inmates_free_period_index+1))) goto event_1854_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1854_6_end;
        {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances));
            if (parent == NULL) goto pos_end_1854_6_0;
            ((Active*)get_instance(lookinmateflag60_394_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1854_6_0: ;
        }
        ((Active*)get_instance(lookinmateflag60_394_instances))->force_animation(5);
    }
    event_1854_6_end: ;
}
void Frames::event_func_1802()
{
    // event 1855_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1)) goto event_1855_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(117, str_pos_laundry_679)) == (loop_inmates_free_period_index+1))) goto event_1855_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(466, str_npc_laundry_stage_1336)) == (1))) goto event_1855_6_end;
        lookinmateflag60_394_instances.clear_selection();
        containerlaundrydirty_274_instances.clear_selection();
        if (!check_overlap(lookinmateflag60_394_instances, containerlaundrydirty_274_instances)) goto event_1855_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1855_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(466, str_npc_laundry_stage_1336, 2);
    }
    event_1855_6_end: ;
}
void Frames::event_func_1803()
{
    // event 1856_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1)) goto event_1856_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(117, str_pos_laundry_679)) == (loop_inmates_free_period_index+1))) goto event_1856_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(466, str_npc_laundry_stage_1336)) == (1))) goto event_1856_6_end;
        lookinmateflag60_394_instances.clear_selection();
        if (!check_not_overlap(lookinmateflag60_394_instances, containerlaundrydirty_274_instances)) goto event_1856_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1856_6_end;
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
            ((Active*)*it)->alterables->strings.set(9, str_laundry_29);
        }
        {
            loop_npc_laundry_space_running = true;
            int times = int(1);
            loop_npc_laundry_space_index = 0;
            while (loop_npc_laundry_space_index < times) {
                loop_npc_laundry_space_6();
                if (!loop_npc_laundry_space_running) break;
                loop_npc_laundry_space_index++;
            }
        }
    }
    event_1856_6_end: ;
}
void Frames::event_func_1804()
{
    // event 1862_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1)) goto event_1862_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(117, str_pos_laundry_679)) == (loop_inmates_free_period_index+1))) goto event_1862_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(466, str_npc_laundry_stage_1336)) == (2))) goto event_1862_6_end;
        lookinmateflag60_394_instances.clear_selection();
        washing2_313_instances.clear_selection();
        if (!check_overlap(lookinmateflag60_394_instances, washing2_313_instances)) goto event_1862_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1862_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(466, str_npc_laundry_stage_1336, 3);
    }
    event_1862_6_end: ;
}
void Frames::event_func_1805()
{
    // event 1863_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1)) goto event_1863_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(117, str_pos_laundry_679)) == (loop_inmates_free_period_index+1))) goto event_1863_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(466, str_npc_laundry_stage_1336)) == (2))) goto event_1863_6_end;
        lookinmateflag60_394_instances.clear_selection();
        if (!check_not_overlap(lookinmateflag60_394_instances, washing2_313_instances)) goto event_1863_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1863_6_end;
        washing2_313_instances.clear_selection();
        FrameObject * single_instance_1863_6_0; single_instance_1863_6_0 = pick_random(washing2_313_instances);
        if (single_instance_1863_6_0 == NULL) goto event_1863_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)single_instance_1863_6_0)->get_x()+8);
            ((Active*)*it)->alterables->values.set(24, ((Active*)single_instance_1863_6_0)->get_y()+24);
            ((Active*)*it)->alterables->flags.enable(60);
        }
    }
    event_1863_6_end: ;
}
void Frames::event_func_1806()
{
    // event 1864_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1)) goto event_1864_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(117, str_pos_laundry_679)) == (loop_inmates_free_period_index+1))) goto event_1864_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(466, str_npc_laundry_stage_1336)) == (3))) goto event_1864_6_end;
        lookinmateflag60_394_instances.clear_selection();
        containerlaundryclean_275_instances.clear_selection();
        if (!check_overlap(lookinmateflag60_394_instances, containerlaundryclean_275_instances)) goto event_1864_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1864_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(466, str_npc_laundry_stage_1336, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(118, str_jq_laundry_680, 1);
    }
    event_1864_6_end: ;
}
void Frames::event_func_1807()
{
    // event 1865_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1)) goto event_1865_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(117, str_pos_laundry_679)) == (loop_inmates_free_period_index+1))) goto event_1865_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(466, str_npc_laundry_stage_1336)) == (3))) goto event_1865_6_end;
        lookinmateflag60_394_instances.clear_selection();
        if (!check_not_overlap(lookinmateflag60_394_instances, containerlaundryclean_275_instances)) goto event_1865_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1865_6_end;
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
            ((Active*)*it)->alterables->strings.set(9, str_laundry_29);
        }
        {
            loop_npc_laundry_space_clean_running = true;
            int times = int(1);
            loop_npc_laundry_space_clean_index = 0;
            while (loop_npc_laundry_space_clean_index < times) {
                loop_npc_laundry_space_clean_6();
                if (!loop_npc_laundry_space_clean_running) break;
                loop_npc_laundry_space_clean_index++;
            }
        }
    }
    event_1865_6_end: ;
}
void Frames::event_func_1808()
{
    // event 1871_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1)) goto event_1871_6_end;
        {
            ((Active*)get_instance(lookinmateflag60_394_instances))->set_global_position(-100, -100);
            pos_end_1871_6_0: ;
        }
    }
    event_1871_6_end: ;
}
void Frames::event_func_1809()
{
    // event 1873_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1)) goto event_1873_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(127, str_pos_metalshop_689)) == (loop_inmates_free_period_index+1))) goto event_1873_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1873_6_end;
        {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances));
            if (parent == NULL) goto pos_end_1873_6_0;
            ((Active*)get_instance(lookinmateflag60_394_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1873_6_0: ;
        }
        ((Active*)get_instance(lookinmateflag60_394_instances))->force_animation(5);
    }
    event_1873_6_end: ;
}
void Frames::event_func_1810()
{
    // event 1874_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1)) goto event_1874_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(127, str_pos_metalshop_689)) == (loop_inmates_free_period_index+1))) goto event_1874_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(467, str_npc_metalshop_stage_1337)) == (1))) goto event_1874_6_end;
        lookinmateflag60_394_instances.clear_selection();
        metalshop_326_instances.clear_selection();
        if (!check_overlap(lookinmateflag60_394_instances, metalshop_326_instances)) goto event_1874_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1874_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(467, str_npc_metalshop_stage_1337, 2);
    }
    event_1874_6_end: ;
}
void Frames::event_func_1811()
{
    // event 1875_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1)) goto event_1875_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(127, str_pos_metalshop_689)) == (loop_inmates_free_period_index+1))) goto event_1875_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(467, str_npc_metalshop_stage_1337)) == (1))) goto event_1875_6_end;
        lookinmateflag60_394_instances.clear_selection();
        if (!check_not_overlap(lookinmateflag60_394_instances, metalshop_326_instances)) goto event_1875_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1875_6_end;
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
            ((Active*)*it)->alterables->strings.set(9, str_metal_1333);
        }
        {
            loop_npc_metal_space_running = true;
            int times = int(1);
            loop_npc_metal_space_index = 0;
            while (loop_npc_metal_space_index < times) {
                loop_npc_metal_space_6();
                if (!loop_npc_metal_space_running) break;
                loop_npc_metal_space_index++;
            }
        }
    }
    event_1875_6_end: ;
}
void Frames::event_func_1812()
{
    // event 1881_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1)) goto event_1881_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(127, str_pos_metalshop_689)) == (loop_inmates_free_period_index+1))) goto event_1881_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(467, str_npc_metalshop_stage_1337)) == (2))) goto event_1881_6_end;
        lookinmateflag60_394_instances.clear_selection();
        licenseprints_329_instances.clear_selection();
        if (!check_overlap(lookinmateflag60_394_instances, licenseprints_329_instances)) goto event_1881_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1881_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(467, str_npc_metalshop_stage_1337, 3);
    }
    event_1881_6_end: ;
}
void Frames::event_func_1813()
{
    // event 1882_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1)) goto event_1882_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(127, str_pos_metalshop_689)) == (loop_inmates_free_period_index+1))) goto event_1882_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(467, str_npc_metalshop_stage_1337)) == (2))) goto event_1882_6_end;
        lookinmateflag60_394_instances.clear_selection();
        if (!check_not_overlap(lookinmateflag60_394_instances, licenseprints_329_instances)) goto event_1882_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1882_6_end;
        licenseprints_329_instances.clear_selection();
        FrameObject * single_instance_1882_6_0; single_instance_1882_6_0 = pick_random(licenseprints_329_instances);
        if (single_instance_1882_6_0 == NULL) goto event_1882_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)single_instance_1882_6_0)->get_x()+8);
            ((Active*)*it)->alterables->values.set(24, ((Active*)single_instance_1882_6_0)->get_y()+24);
            ((Active*)*it)->alterables->flags.enable(60);
        }
    }
    event_1882_6_end: ;
}
void Frames::event_func_1814()
{
    // event 1883_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1)) goto event_1883_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(127, str_pos_metalshop_689)) == (loop_inmates_free_period_index+1))) goto event_1883_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(467, str_npc_metalshop_stage_1337)) == (3))) goto event_1883_6_end;
        lookinmateflag60_394_instances.clear_selection();
        metalshop2_327_instances.clear_selection();
        if (!check_overlap(lookinmateflag60_394_instances, metalshop2_327_instances)) goto event_1883_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1883_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(128, str_jq_metalshop_690, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(467, str_npc_metalshop_stage_1337, 1);
    }
    event_1883_6_end: ;
}
void Frames::event_func_1815()
{
    // event 1884_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1)) goto event_1884_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(127, str_pos_metalshop_689)) == (loop_inmates_free_period_index+1))) goto event_1884_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(467, str_npc_metalshop_stage_1337)) == (3))) goto event_1884_6_end;
        lookinmateflag60_394_instances.clear_selection();
        if (!check_not_overlap(lookinmateflag60_394_instances, metalshop2_327_instances)) goto event_1884_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1884_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_instance(metalshop2_327_instances, it.current_index, default_active_instance))->get_x()-8);
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_instance(metalshop2_327_instances, it.current_index, default_active_instance))->get_y()+8);
            ((Active*)*it)->alterables->flags.enable(60);
        }
    }
    event_1884_6_end: ;
}
void Frames::event_func_1816()
{
    // event 1885_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1)) goto event_1885_6_end;
        {
            ((Active*)get_instance(lookinmateflag60_394_instances))->set_global_position(-100, -100);
            pos_end_1885_6_0: ;
        }
    }
    event_1885_6_end: ;
}
void Frames::event_func_1817()
{
    // event 1887_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1)) goto event_1887_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(121, str_pos_kitchen_683)) == (loop_inmates_free_period_index+1))) goto event_1887_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1887_6_end;
        {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances));
            if (parent == NULL) goto pos_end_1887_6_0;
            ((Active*)get_instance(lookinmateflag60_394_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1887_6_0: ;
        }
        ((Active*)get_instance(lookinmateflag60_394_instances))->force_animation(5);
    }
    event_1887_6_end: ;
}
void Frames::event_func_1818()
{
    // event 1888_6
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1 && group_code_schedules_leisure_work_npcs_doing_jobs_1 && group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1)) goto event_1888_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(121, str_pos_kitchen_683)) == (loop_inmates_free_period_index+1))) goto event_1888_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(468, str_npc_kitchen_stage_1338)) == (1))) goto event_1888_6_end;
        lookinmateflag60_394_instances.clear_selection();
        containerkitchen_229_instances.clear_selection();
        if (!check_overlap(lookinmateflag60_394_instances, containerkitchen_229_instances)) goto event_1888_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_inmates_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1888_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(468, str_npc_kitchen_stage_1338, 2);
    }
    event_1888_6_end: ;
}
