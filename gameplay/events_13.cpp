#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_982()
{
    // event 745_6
    {
        if (!(group_code_1 && group_code_dlc_ccl_1)) goto event_745_6_end;
        ssreindeer_504_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_ssreindeer_504(1056, 176), 1);
            ssreindeer_504_instances.add_back();
        }
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 1056);
            ((Active*)*it)->alterables->values.set(0, 2);
            ((Active*)*it)->alterables->values.set(24, 176);
        }
    }
    event_745_6_end: ;
}
void Frames::event_func_983()
{
    // event 746_6
    {
        if (!(group_code_1 && group_code_dlc_ccl_1)) goto event_746_6_end;
        desksdlc_482_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_desksdlc_482(976, 160), 1);
            desksdlc_482_instances.add_back();
        }
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->values.set(0, qualifier_17.size()+1);
            ((Active*)*it)->alterables->strings.set(0, str_reindeer_842);
        }
    }
    event_746_6_end: ;
}
void Frames::event_func_984()
{
    // event 747_6
    {
        if (!(group_code_1 && group_code_dlc_ccl_1)) goto event_747_6_end;
        desksdlc_482_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_desksdlc_482(688, 1392), 1);
            desksdlc_482_instances.add_back();
        }
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->values.set(0, qualifier_17.size()+1);
            ((Active*)*it)->alterables->strings.set(0, str_fuel_843);
        }
    }
    event_747_6_end: ;
}
void Frames::event_func_985()
{
    // event 748_6
    {
        if (!(group_code_1 && group_code_dlc_ccl_1)) goto event_748_6_end;
        desksdlc_482_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_desksdlc_482(976, 1360), 1);
            desksdlc_482_instances.add_back();
        }
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->values.set(0, qualifier_17.size()+1);
            ((Active*)*it)->alterables->strings.set(0, str_guards_538);
        }
    }
    event_748_6_end: ;
}
void Frames::event_func_986()
{
    // event 749_6
    {
        if (!(group_code_1 && group_code_dlc_ccl_1)) goto event_749_6_end;
        desksdlc_482_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_desksdlc_482(992, 480), 1);
            desksdlc_482_instances.add_back();
        }
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->values.set(0, qualifier_17.size()+1);
            ((Active*)*it)->alterables->strings.set(0, str_metalshop_35);
        }
    }
    event_749_6_end: ;
}
void Frames::event_func_987()
{
    // event 750_6
    {
        if (!(group_code_1 && group_code_dlc_ccl_1)) goto event_750_6_end;
        desksdlc_482_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_desksdlc_482(896, 368), 1);
            desksdlc_482_instances.add_back();
        }
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->values.set(0, qualifier_17.size()+1);
            ((Active*)*it)->alterables->strings.set(0, str_tailorshop_44);
        }
    }
    event_750_6_end: ;
}
void Frames::event_func_988()
{
    // event 751_6
    {
        if (!(group_code_1 && group_code_dlc_ccl_1)) goto event_751_6_end;
        dooroutfit_501_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dooroutfit_501(1344, 1152), 1);
            dooroutfit_501_instances.add_back();
        }
    }
    event_751_6_end: ;
}
void Frames::event_func_989()
{
    // event 752_6
    {
        if (!(group_code_1 && group_code_dlc_ccl_1)) goto event_752_6_end;
        dooroutfit_501_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dooroutfit_501(1136, 1296), 1);
            dooroutfit_501_instances.add_back();
        }
    }
    event_752_6_end: ;
}
void Frames::event_func_990()
{
    // event 753_6
    {
        if (!(group_code_1 && group_code_dlc_ccl_1)) goto event_753_6_end;
        sssobjects_502_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_sssobjects_502(704, 1328), 1);
            sssobjects_502_instances.add_back();
        }
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->paste(1);
            ((Active*)*it)->destroy();
        }
    }
    event_753_6_end: ;
}
void Frames::loop_ww_setup_6()
{
    event_func_976();
    event_func_977();
    event_func_978();
    event_func_979();
    event_func_980();
    event_func_981();
    event_func_982();
    event_func_983();
    event_func_984();
    event_func_985();
    event_func_986();
    event_func_987();
    event_func_988();
    event_func_989();
    event_func_990();
}
void Frames::event_func_991()
{
    // event 2699_6
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2699_6_end;
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_2699_6_end: ;
}
void Frames::loop_page_clear_6()
{
    event_func_991();
}
void Frames::event_func_992()
{
    // event 1012_6
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1012_6_end;
        sheetsposters_294_instances.clear_selection();
        for (ObjectIterator it(sheetsposters_294_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(231, str_sheetx_844)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(232, str_sheety_845)))) { it.deselect(); continue; }
        }
        if (!sheetsposters_294_instances.has_selection()) goto event_1012_6_end;
        layers[7-1].destroy_backgrounds(((Active*)get_single(sheetsposters_294_instances, default_active_instance))->get_x(), ((Active*)get_single(sheetsposters_294_instances, default_active_instance))->get_y(), 0);
        FrameObject * single_instance_1012_6_0; single_instance_1012_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(sheetsposters_294_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_1012_6_0 == NULL)
                    single_instance_1012_6_0 = new_obj;
            }
        }
        for (ObjectIterator it(sheetsposters_294_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1012_6_end: ;
}
void Frames::loop_remove_sheet_6()
{
    event_func_992();
}
void Frames::event_func_993()
{
    // event 629_6
    {
        if (!(group_code_1 && group_code_dlc_alcatraz_1)) goto event_629_6_end;
        FrameObject * single_instance_629_6_0; single_instance_629_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 65, parent->y + 35), parent->layer);
                if (single_instance_629_6_0 == NULL)
                    single_instance_629_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_629_6_0))->set_x(((Active*)get_instance(dialogPanel_instances))->get_box_index(2)-90);
        ((Active*)((Active*)single_instance_629_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(3)-25);
        ((Active*)((Active*)single_instance_629_6_0))->force_animation(43);
        FrameObject * single_instance_629_6_1; single_instance_629_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_629_6_0)->x + 3, ((Active*)single_instance_629_6_0)->y + 3), ((Active*)single_instance_629_6_0)->layer);
            if (single_instance_629_6_1 == NULL)
                single_instance_629_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_629_6_1))->blend_color.set(Color(150, 150, 150));
        ((Text*)((Text*)single_instance_629_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_6_241)));
    }
    event_629_6_end: ;
}
void Frames::loop_letter_alca_6()
{
    event_func_993();
}
void Frames::event_func_994()
{
    // event 3190_6
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_dtaf_1)) goto event_3190_6_end;
        if (((SteamObject*)get_instance(steamworks2_469_instances))->is_achievement_unlocked(str_noticed_846)) goto event_3190_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->unlock_achievement(str_noticed_846);
    }
    event_3190_6_end: ;
}
void Frames::loop_dtaf_sign_achievement_6()
{
    event_func_994();
}
void Frames::event_func_995()
{
    // event 1014_6
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1014_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1014_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_endstring_435, ((INI*)get_instance(translationData_instances))->get_string(str_caught_436, str_3_158));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(215, str_finalstr_818, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(103, str_guardx_660))+str_x_437+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(104, str_guardy_661)));
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
    event_1014_6_end: ;
}
void Frames::loop_guard_bedcheck_6()
{
    event_func_995();
}
void Frames::event_func_996()
{
    // event 1609_6
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1609_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_janitor_24))) goto event_1609_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_1609_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_15_608));
    }
    event_1609_6_end: ;
}
void Frames::event_func_997()
{
    // event 1610_6
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1610_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_janitor_24))) goto event_1610_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_1610_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_janitor_630));
    }
    event_1610_6_end: ;
}
void Frames::event_func_998()
{
    // event 1611_6
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1611_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_gardening_43))) goto event_1611_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_16_219));
    }
    event_1611_6_end: ;
}
void Frames::event_func_999()
{
    // event 1612_6
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1612_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_kitchen_12))) goto event_1612_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(234, str_destzone_848, str_kitchen_12);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_24_849));
    }
    event_1612_6_end: ;
}
void Frames::event_func_1000()
{
    // event 1613_6
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1613_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_laundry_29))) goto event_1613_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(234, str_destzone_848, str_laundry_29);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_18_332));
    }
    event_1613_6_end: ;
}
void Frames::event_func_1001()
{
    // event 1614_6
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1614_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_library_25))) goto event_1614_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(234, str_destzone_848, str_library_25);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_22_850));
    }
    event_1614_6_end: ;
}
void Frames::event_func_1002()
{
    // event 1615_6
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1615_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_woodshop_21))) goto event_1615_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(234, str_destzone_848, str_woodshop_21);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_19_246));
    }
    event_1615_6_end: ;
}
void Frames::event_func_1003()
{
    // event 1616_6
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1616_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_metalshop_35))) goto event_1616_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(234, str_destzone_848, str_metalshop_35);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_20_279));
    }
    event_1616_6_end: ;
}
void Frames::event_func_1004()
{
    // event 1617_6
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1617_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_mailman_556))) goto event_1617_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_1617_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(234, str_destzone_848, str_mailroom_41);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_23_851));
    }
    event_1617_6_end: ;
}
void Frames::event_func_1005()
{
    // event 1618_6
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1618_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_mailman_556))) goto event_1618_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_1618_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_mailman_633));
    }
    event_1618_6_end: ;
}
void Frames::event_func_1006()
{
    // event 1619_6
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1619_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_tailor_479))) goto event_1619_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_1619_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(234, str_destzone_848, str_tailor_479);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_17_218));
    }
    event_1619_6_end: ;
}
void Frames::event_func_1007()
{
    // event 1620_6
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1620_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_tailor_479))) goto event_1620_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_1620_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_tailor_631));
    }
    event_1620_6_end: ;
}
void Frames::event_func_1008()
{
    // event 1621_6
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1621_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_deliveries_577))) goto event_1621_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_1621_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(234, str_destzone_848, str_deliveries_577);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_21_335));
    }
    event_1621_6_end: ;
}
void Frames::event_func_1009()
{
    // event 1622_6
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1622_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_deliveries_577))) goto event_1622_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_1622_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(234, str_destzone_848, str_deliveries_577);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_deliveries_634));
    }
    event_1622_6_end: ;
}
void Frames::loop_set_work_lesson_6()
{
    event_func_996();
    event_func_997();
    event_func_998();
    event_func_999();
    event_func_1000();
    event_func_1001();
    event_func_1002();
    event_func_1003();
    event_func_1004();
    event_func_1005();
    event_func_1006();
    event_func_1007();
    event_func_1008();
    event_func_1009();
}
void Frames::event_func_1010()
{
    // event 2312_6
    {
        if (!(group_code_1 && group_code_mouseovers_item_hovers_holding_shift_1)) goto event_2312_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_fat_852)) > (0))) goto event_2312_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_19_246));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_fat_853, number_to_string(((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_fat_852))));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(235, str_itemstr_854, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854)+((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584)+str__198);
    }
    event_2312_6_end: ;
}
void Frames::event_func_1011()
{
    // event 2313_6
    {
        if (!(group_code_1 && group_code_mouseovers_item_hovers_holding_shift_1)) goto event_2313_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_hp_855)) > (0))) goto event_2313_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_20_279));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_hp_856, number_to_string(((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_hp_855))));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(235, str_itemstr_854, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854)+((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584)+str__198);
    }
    event_2313_6_end: ;
}
void Frames::event_func_1012()
{
    // event 2314_6
    {
        if (!(group_code_1 && group_code_mouseovers_item_hovers_holding_shift_1)) goto event_2314_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_digging_726)) > (0))) goto event_2314_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(235, str_itemstr_854, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854)+((INI*)get_instance(translationData_instances))->get_string(str_action_857, str_2_155)+str__247+number_to_string(((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_digging_726))+str_5_858);
    }
    event_2314_6_end: ;
}
void Frames::event_func_1013()
{
    // event 2315_6
    {
        if (!(group_code_1 && group_code_mouseovers_item_hovers_holding_shift_1)) goto event_2315_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_cutting_727)) > (0))) goto event_2315_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(235, str_itemstr_854, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854)+((INI*)get_instance(translationData_instances))->get_string(str_action_857, str_4_161)+str__247+number_to_string(((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_cutting_727))+str_5_858);
    }
    event_2315_6_end: ;
}
void Frames::event_func_1014()
{
    // event 2316_6
    {
        if (!(group_code_1 && group_code_mouseovers_item_hovers_holding_shift_1)) goto event_2316_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_unscrewing_729)) > (0))) goto event_2316_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(235, str_itemstr_854, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854)+((INI*)get_instance(translationData_instances))->get_string(str_action_857, str_3_158)+str__247+number_to_string(((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_unscrewing_729))+str_5_858);
    }
    event_2316_6_end: ;
}
void Frames::event_func_1015()
{
    // event 2317_6
    {
        if (!(group_code_1 && group_code_mouseovers_item_hovers_holding_shift_1)) goto event_2317_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_chipping_728)) > (0))) goto event_2317_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(235, str_itemstr_854, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854)+((INI*)get_instance(translationData_instances))->get_string(str_action_857, str_5_164)+str__247+number_to_string(((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_chipping_728))+str_5_858);
    }
    event_2317_6_end: ;
}
void Frames::event_func_1016()
{
    // event 2318_6
    {
        if (!(group_code_1 && group_code_mouseovers_item_hovers_holding_shift_1)) goto event_2318_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_weapon_704)) > (0))) goto event_2318_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(235, str_itemstr_854, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854)+((INI*)get_instance(translationData_instances))->get_string(str_profile_281, str_5_164)+str__247+number_to_string(((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_weapon_704))+str_5_858);
    }
    event_2318_6_end: ;
}
void Frames::event_func_1017()
{
    // event 2319_6
    {
        if (!(group_code_1 && group_code_mouseovers_item_hovers_holding_shift_1)) goto event_2319_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_outfit_505)) > (1))) goto event_2319_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(235, str_itemstr_854, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854)+str__859+number_to_string(((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_outfit_505)-1)+str__189+((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_21_335)+str__198);
    }
    event_2319_6_end: ;
}
void Frames::event_func_1018()
{
    // event 2320_6
    {
        if (!(group_code_1 && group_code_mouseovers_item_hovers_holding_shift_1)) goto event_2320_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854)) != (empty_string))) goto event_2320_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(235, str_itemstr_854, left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854), string_size(((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854))-2));
    }
    event_2320_6_end: ;
}
void Frames::loop_make_item_str_6()
{
    event_func_1010();
    event_func_1011();
    event_func_1012();
    event_func_1013();
    event_func_1014();
    event_func_1015();
    event_func_1016();
    event_func_1017();
    event_func_1018();
}
void Frames::event_func_1019()
{
    // event 4530_6
    {
        // group: Extra NPCs
        if (((SteamObject*)get_instance(steamworks2_469_instances))->is_achievement_unlocked(str_santaslap_860)) goto event_4530_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->unlock_achievement(str_santaslap_860);
    }
    event_4530_6_end: ;
}
void Frames::loop_ss_vis_achieve_6()
{
    event_func_1019();
}
void Frames::event_func_1020()
{
    // event 3610_6
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cutting_2_1)) goto event_3610_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(236, str_cutx_861), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(237, str_cuty_862), ((Active*)get_instance(playerBase_instances))->layer->index+1)) == (56))) goto event_3610_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(238, str_cuttype_863, str_bars_864);
    }
    event_3610_6_end: ;
}
void Frames::event_func_1021()
{
    // event 3611_6
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cutting_2_1)) goto event_3611_6_end;
        if (!((((ArrayObject*)get_instance(fencearray_265_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(236, str_cutx_861), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(237, str_cuty_862), ((Active*)get_instance(playerBase_instances))->layer->index+1)) >= (100))) goto event_3611_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(239, str_track_cuts_865, 1);
        layers[((Active*)get_instance(playerBase_instances))->layer->index+1-1].destroy_backgrounds(((AssociateArray*)get_instance(gameVariables_instances))->get_value(236, str_cutx_861)*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(237, str_cuty_862)*16, 0);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(((AssociateArray*)get_instance(gameVariables_instances))->get_value(236, str_cutx_861)*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(237, str_cuty_862)*16, 0, 48, 16, 16, 0);
    }
    event_3611_6_end: ;
}
void Frames::event_func_1022()
{
    // event 3612_6
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cutting_2_1)) goto event_3612_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3612_6_end;
        if (!((((ArrayObject*)get_instance(fencearray_265_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(236, str_cutx_861), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(237, str_cuty_862), ((Active*)get_instance(playerBase_instances))->layer->index+1)) >= (100))) goto event_3612_6_end;
        guardalert_266_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guardalert_266(0, 0), 1);
            guardalert_266_instances.add_back();
        }
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(236, str_cutx_861)*16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(237, str_cuty_862)*16);
            ((Active*)*it)->alterables->strings.set(0, str_cut_866+((AssociateArray*)get_instance(gameVariables_instances))->get_string(238, str_cuttype_863));
        }
    }
    event_3612_6_end: ;
}
void Frames::event_func_1023()
{
    // event 3613_6
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cutting_2_1)) goto event_3613_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (5))) goto event_3613_6_end;
        if (!((((ArrayObject*)get_instance(fencearray_265_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(236, str_cutx_861), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(237, str_cuty_862), ((Active*)get_instance(playerBase_instances))->layer->index+1)) >= (100))) goto event_3613_6_end;
        guardalert_266_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guardalert_266(0, 0), 4);
            guardalert_266_instances.add_back();
        }
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(236, str_cutx_861)*16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(237, str_cuty_862)*16);
            ((Active*)*it)->alterables->strings.set(0, str_cutfenceroof_867);
        }
    }
    event_3613_6_end: ;
}
void Frames::event_func_1024()
{
    // event 3614_6
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cutting_2_1)) goto event_3614_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_3614_6_end;
        if (!((((ArrayObject*)get_instance(fencearray_265_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(236, str_cutx_861), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(237, str_cuty_862), ((Active*)get_instance(playerBase_instances))->layer->index+1)) >= (100))) goto event_3614_6_end;
        soil_173_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_soil_173(-16, -16), 0);
            soil_173_instances.add_back();
        }
        for (ObjectIterator it(soil_173_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(236, str_cutx_861)*16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(237, str_cuty_862)*16);
            ((Active*)*it)->paste(0);
            ((Active*)*it)->destroy();
        }
        guardalert_266_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guardalert_266(0, 0), 0);
            guardalert_266_instances.add_back();
        }
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(236, str_cutx_861)*16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(237, str_cuty_862)*16);
            ((Active*)*it)->alterables->strings.set(0, str_cutfenceug_868);
        }
    }
    event_3614_6_end: ;
}
void Frames::loop_check_complete_fencecut_6()
{
    event_func_1020();
    event_func_1021();
    event_func_1022();
    event_func_1023();
    event_func_1024();
}
void Frames::event_func_1025()
{
    // event 4215_6
    {
        if (!(group_loops_1)) goto event_4215_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(135, str_mid_700)) != (-10))) goto event_4215_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(132, str_rnd_696, 1+randrange_event(5));
    }
    event_4215_6_end: ;
}
void Frames::event_func_1026()
{
    // event 4216_6
    {
        if (!(group_loops_1)) goto event_4216_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (1))) goto event_4216_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(135, str_mid_700)) != (-10))) goto event_4216_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(240, str_missionroutinenum_869, 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(241, str_missionhour_870, 8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(242, str_missionroutine_871, str_morning_rollcall_872);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(243, str_mr_873, str_morningrollcall_874);
    }
    event_4216_6_end: ;
}
void Frames::event_func_1027()
{
    // event 4217_6
    {
        if (!(group_loops_1)) goto event_4217_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (2))) goto event_4217_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(135, str_mid_700)) != (-10))) goto event_4217_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(240, str_missionroutinenum_869, 4);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(241, str_missionhour_870, 9);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(242, str_missionroutine_871, str_breakfast_875);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(243, str_mr_873, str_breakfast_876);
    }
    event_4217_6_end: ;
}
void Frames::event_func_1028()
{
    // event 4218_6
    {
        if (!(group_loops_1)) goto event_4218_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (3))) goto event_4218_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(135, str_mid_700)) != (-10))) goto event_4218_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(240, str_missionroutinenum_869, 10);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(241, str_missionhour_870, 16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(242, str_missionroutine_871, str_evening_meal_time_877);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(243, str_mr_873, str_eveningmeal_878);
    }
    event_4218_6_end: ;
}
void Frames::event_func_1029()
{
    // event 4219_6
    {
        if (!(group_loops_1)) goto event_4219_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (4))) goto event_4219_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(135, str_mid_700)) != (-10))) goto event_4219_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(240, str_missionroutinenum_869, 8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(241, str_missionhour_870, 17);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(242, str_missionroutine_871, str_workout_879);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(243, str_mr_873, str_workout_16);
    }
    event_4219_6_end: ;
}
void Frames::event_func_1030()
{
    // event 4220_6
    {
        if (!(group_loops_1)) goto event_4220_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (5))) goto event_4220_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(135, str_mid_700)) != (-10))) goto event_4220_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(240, str_missionroutinenum_869, 9);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(241, str_missionhour_870, 18);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(242, str_missionroutine_871, str_shower_period_880);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(243, str_mr_873, str_shower_881);
    }
    event_4220_6_end: ;
}
void Frames::event_func_1031()
{
    // event 4221_6
    {
        if (!(group_loops_1)) goto event_4221_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(135, str_mid_700)) != (-10))) goto event_4221_6_end;
        ((INI*)get_instance(translationData_instances))->set_group(str_missions_882+((AssociateArray*)get_instance(gameVariables_instances))->get_string(244, str_missiontype_883));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(245, str_mission_num_884, 1+randrange_event(((INI*)get_instance(translationData_instances))->get_value_int(str_count_885)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(translationData_instances))->get_string(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(245, str_mission_num_884))), str__254);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(246, str_payout_886, 20);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(247, str_missiontext_887, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(247, str_missiontext_887, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(247, str_missiontext_887), str_routine_888, lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_routines_196, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(240, str_missionroutinenum_869))))));
    }
    event_4221_6_end: ;
}
void Frames::event_func_1032()
{
    // event 4222_6
    {
        if (!(group_loops_1)) goto event_4222_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(135, str_mid_700)) != (-10))) goto event_4222_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(135, str_mid_700)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_4222_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(246, str_payout_886, get_floor(((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(12)/MathHelper()/10));
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(2, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(247, str_missiontext_887)+str__254+((AssociateArray*)get_instance(gameVariables_instances))->get_string(244, str_missiontype_883)+str__254+((AssociateArray*)get_instance(gameVariables_instances))->get_string(243, str_mr_873)+str__889+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(246, str_payout_886))+str__254+((AssociateArray*)get_instance(gameVariables_instances))->get_string(242, str_missionroutine_871)+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(240, str_missionroutinenum_869)));
        }
    }
    event_4222_6_end: ;
}
void Frames::loop_create_mission_distract_6()
{
    event_func_1025();
    event_func_1026();
    event_func_1027();
    event_func_1028();
    event_func_1029();
    event_func_1030();
    event_func_1031();
    event_func_1032();
}
void Frames::event_func_1033()
{
    // event 2215_6
    {
        if (!(group_code_1)) goto event_2215_6_end;
        zipline_431_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_zipline_431(0, 0), 4);
            zipline_431_instances.add_back();
        }
        for (ObjectIterator it(zipline_431_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(33, str_endx_496));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(34, str_endy_497)-4);
            ((Active*)*it)->set_y_scale(get_distance_int(((AssociateArray*)get_instance(gameVariables_instances))->get_value(35, str_startx_498), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(36, str_starty_499), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(33, str_endx_496), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(34, str_endy_497)-2));
        }
    }
    event_2215_6_end: ;
}
void Frames::loop_create_down_zip_6()
{
    event_func_1033();
}
void Frames::event_func_1034()
{
    // event 4532_6
    {
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(248, str_npc_1_inv_1_890, str_0_100_891);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(249, str_npc_2_inv_1_892, str_7_100_893);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(250, str_npc_3_inv_1_894, str_6_100_895);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(251, str_npc_4_inv_1_896, str_1_100_897);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(252, str_npc_5_inv_1_898, str_43_100_899);
    }
    event_4532_6_end: ;
}
void Frames::loop_assign_keys_6()
{
    event_func_1034();
}
void Frames::event_func_1035()
{
    // event 1019_6
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1019_6_end;
        if (group_saving_1) goto event_1019_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1019_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1019_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(32, str_heat_495, 99);
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -1);
        }
    }
    event_1019_6_end: ;
}
void Frames::loop_sneaking_attk_6()
{
    event_func_1035();
}
void Frames::event_func_1036()
{
    // event 384_6
    {
        if (!(group_setup_1)) goto event_384_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_string(number_to_string(loop_craft_poss_index), str_craft_900)) != (empty_string))) goto event_384_6_end;
        if (!((((INI*)get_instance(globals_127_instances))->get_value(str_craftnotes_665, number_to_string(loop_craft_poss_index), 0)) == (0))) goto event_384_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(253, str_craft_poss_901, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(253, str_craft_poss_901)+str__254+number_to_string(loop_craft_poss_index));
        ((ListObject*)get_instance(craftingpossibles_349_instances))->add_line(number_to_string(loop_craft_poss_index));
    }
    event_384_6_end: ;
}
void Frames::loop_craft_poss_6()
{
    event_func_1036();
}
void Frames::event_func_1037()
{
    // event 575_6
    {
        if (!(group_setup_1)) goto event_575_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(loop_load_slat_hp_index), str__96);
    }
    event_575_6_end: ;
}
void Frames::event_func_1038()
{
    // event 576_6
    {
        if (!(group_setup_1)) goto event_576_6_end;
        fan_281_instances.clear_selection();
        for (ObjectIterator it(fan_281_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0))))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1))))) { it.deselect(); continue; }
        }
        if (!fan_281_instances.has_selection()) goto event_576_6_end;
        for (ObjectIterator it(fan_281_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        }
    }
    event_576_6_end: ;
}
void Frames::loop_load_slat_hp_6()
{
    event_func_1037();
    event_func_1038();
}
void Frames::event_func_1039()
{
    // event 3109_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3109_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_3109_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 138+randrange_event(2));
    }
    event_3109_6_end: ;
}
void Frames::event_func_1040()
{
    // event 3110_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3110_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_3110_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 255+randrange_event(2));
    }
    event_3110_6_end: ;
}
void Frames::loop_deliv_item_6()
{
    event_func_1039();
    event_func_1040();
}
void Frames::event_func_1041()
{
    // event 3555_6
    {
        if (!(group_code_1)) goto event_3555_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) > (19))) goto event_3555_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (24))) goto event_3555_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(254, str_t_day_902, 1);
    }
    event_3555_6_end: ;
}
void Frames::loop_add_day_6()
{
    event_func_1041();
}
void Frames::event_func_1042()
{
    // event 2216_6
    {
        if (!(group_code_1)) goto event_2216_6_end;
        zipline_431_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_zipline_431(0, 0), 4);
            zipline_431_instances.add_back();
        }
        for (ObjectIterator it(zipline_431_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(35, str_startx_498)-4);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(36, str_starty_499)-2);
            ((Active*)*it)->set_x_scale(get_distance_int(((AssociateArray*)get_instance(gameVariables_instances))->get_value(35, str_startx_498)-9, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(36, str_starty_499)-3, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(33, str_endx_496), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(34, str_endy_497)-3));
        }
    }
    event_2216_6_end: ;
}
void Frames::loop_create_left_zip_6()
{
    event_func_1042();
}
void Frames::event_func_1043()
{
    // event 560_6
    {
        if (!(group_setup_1)) goto event_560_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(loop_load_rocks_index), str_x_437);
        active10_293_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_active10_293(0, 0), 0);
            active10_293_instances.add_back();
        }
        for (ObjectIterator it(active10_293_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        }
    }
    event_560_6_end: ;
}
void Frames::loop_load_rocks_6()
{
    event_func_1043();
}
void Frames::event_func_1044()
{
    // event 4609_6
    {
        ((StringParser*)get_instance(items_162_instances))->set(str_l0l_355+number_to_string(File::get_size(str_data_items_356+global_strings->get(6)+str_dat_216)));
        ((StringParser*)get_instance(data_163_instances))->set(str_l0l_355+number_to_string(File::get_size(str_data_data_215+global_strings->get(6)+str_dat_216)));
        ((StringParser*)get_instance(speech_164_instances))->set(str_l0l_355+number_to_string(File::get_size(str_data_speech_357+global_strings->get(6)+str_dat_216)));
    }
    event_4609_6_end: ;
}
void Frames::event_func_1045()
{
    // event 4610_6
    {
        // group: Chexington
        if (!((((StringParser*)get_instance(items_162_instances))->get_md5()) != (((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_hash_358+uppercase_string(global_strings->get(6))+str_items_362)))) goto event_4610_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(50, str_error_233, 1);
    }
    event_4610_6_end: ;
}
void Frames::event_func_1046()
{
    // event 4611_6
    {
        // group: Chexington
        if (!((((StringParser*)get_instance(speech_164_instances))->get_md5()) != (((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_hash_358+uppercase_string(global_strings->get(6))+str_speech_364)))) goto event_4611_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(50, str_error_233, 1);
    }
    event_4611_6_end: ;
}
void Frames::event_func_1047()
{
    // event 4612_6
    {
        // group: Chexington
        if (!((((StringParser*)get_instance(data_163_instances))->get_md5()) != (((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_hash_358+uppercase_string(global_strings->get(6))+str_data_359)))) goto event_4612_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(50, str_error_233, 1);
    }
    event_4612_6_end: ;
}
void Frames::event_func_1048()
{
    // event 4613_6
    {
        // group: Chexington
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(50, str_error_233)) != (0))) goto event_4613_6_end;
        next_frame = 5 + 0;    
        if (loop_count != 0)
            manager.set_fade(Transition::DOOR, Color(0, 0, 0), 2.22222222222);
    
    }
    event_4613_6_end: ;
}
void Frames::loop_file_checks_6()
{
    event_func_1044();
    event_func_1045();
    event_func_1046();
    event_func_1047();
    event_func_1048();
}
void Frames::event_func_1049()
{
    // event 4065_6
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4065_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_65_904));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_name_693, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(167, str_mapwarden_744)));
        FrameObject * single_instance_4065_6_0; single_instance_4065_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -70, parent->y + 30), parent->layer);
                if (single_instance_4065_6_0 == NULL)
                    single_instance_4065_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_4065_6_0))->set_x(((Active*)get_instance(dialogPanel_instances))->get_box_index(0)+12);
        ((Text*)((Text*)single_instance_4065_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(3)-22);
        ((Text*)((Text*)single_instance_4065_6_0))->blend_color.set(Color(0, 84, 128));
        ((Text*)((Text*)single_instance_4065_6_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
        FrameObject * single_instance_4065_6_1; single_instance_4065_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 65, parent->y + 35), parent->layer);
                if (single_instance_4065_6_1 == NULL)
                    single_instance_4065_6_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_4065_6_1))->set_x(((Active*)get_instance(dialogPanel_instances))->get_box_index(2)-90);
        ((Active*)((Active*)single_instance_4065_6_1))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(3)-25);
        ((Active*)((Active*)single_instance_4065_6_1))->force_animation(29);
        FrameObject * single_instance_4065_6_2; single_instance_4065_6_2 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_4065_6_1)->x + 3, ((Active*)single_instance_4065_6_1)->y + 3), ((Active*)single_instance_4065_6_1)->layer);
            if (single_instance_4065_6_2 == NULL)
                single_instance_4065_6_2 = new_obj;
        }
        ((Text*)((Text*)single_instance_4065_6_2))->blend_color.set(Color(150, 150, 150));
        ((Text*)((Text*)single_instance_4065_6_2))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_6_241)));
    }
    event_4065_6_end: ;
}
void Frames::loop_letter_busted_6()
{
    event_func_1049();
}
void Frames::event_func_1050()
{
    // event 4240_6
    {
        if (!(group_loops_1)) goto event_4240_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(4);
        }
        media.play_id(SOUND_ELECTRIC_20, 1-1);
    }
    event_4240_6_end: ;
}
void Frames::event_func_1051()
{
    // event 4241_6
    {
        if (!(group_loops_1)) goto event_4241_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(155, str_chipping_728, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(153, str_digging_726, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(154, str_cutting_727, 0);
        ((Active*)get_instance(playerBase_instances))->alterables->values.sub(7, 15);
        FrameObject * single_instance_4241_6_0; single_instance_4241_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fx_185(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_4241_6_0 == NULL)
                    single_instance_4241_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_4241_6_0))->destroy();
        FrameObject * single_instance_4241_6_1; single_instance_4241_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_4241_6_1 == NULL)
                    single_instance_4241_6_1 = new_obj;
            }
        }
        damageto_252_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_damageto_252(0, 0), 5);
            damageto_252_instances.add_back();
        }
        for (ObjectIterator it(damageto_252_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_text(str_15_905);
            ((TextBlitter*)*it)->set_x(((Active*)get_instance(playerBase_instances))->get_x()-10);
            ((TextBlitter*)*it)->set_y(((Active*)get_instance(playerBase_instances))->get_y()-20);
        }
    }
    event_4241_6_end: ;
}
void Frames::loop_electric_6()
{
    event_func_1050();
    event_func_1051();
}
void Frames::event_func_1052()
{
    // event 3630_6
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_weeding_1)) goto event_3630_6_end;
        usespot_208_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_usespot_208(0, 0), 1);
            usespot_208_instances.add_back();
        }
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(255, str_weedx_906));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(256, str_weedy_907));
        }
    }
    event_3630_6_end: ;
}
void Frames::event_func_1053()
{
    // event 3631_6
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_weeding_1)) goto event_3631_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_gardening_43))) goto event_3631_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_3631_6_end;
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_3631_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(18, str_jobquota_480, 11);
    }
    event_3631_6_end: ;
}
void Frames::event_func_1054()
{
    // event 3632_6
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_weeding_1)) goto event_3632_6_end;
        usespot_208_instances.clear_selection();
        weeds_462_instances.clear_selection();
        if (!check_overlap(usespot_208_instances, weeds_462_instances)) goto event_3632_6_end;
        for (ObjectIterator it(weeds_462_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_3632_6_end: ;
}
void Frames::event_func_1055()
{
    // event 3633_6
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_weeding_1)) goto event_3633_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3633_6_end: ;
}
void Frames::loop_weed_fin_6()
{
    event_func_1052();
    event_func_1053();
    event_func_1054();
    event_func_1055();
}
void Frames::event_func_1056()
{
    // event 562_6
    {
        if (!(group_setup_1)) goto event_562_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(loop_load_alerts_index), str__96);
    }
    event_562_6_end: ;
}
void Frames::event_func_1057()
{
    // event 563_6
    {
        if (!(group_setup_1)) goto event_563_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)) != (str_cutfenceroof_867))) goto event_563_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)) != (str_cutfenceug_868))) goto event_563_6_end;
        guardalert_266_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guardalert_266(0, 0), 1);
            guardalert_266_instances.add_back();
        }
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2));
        }
    }
    event_563_6_end: ;
}
