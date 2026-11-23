#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_2308()
{
    // event 4283_6
    {
        if (!(group_loops_1)) goto event_4283_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (0))) goto event_4283_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_instance(containercanteen_230_instances, default_active_instance))->alterables->values.get(0))+str_slot_617+number_to_string(loop_restock_cutlery_index+1), empty_string);
    }
    event_4283_6_end: ;
}
void Frames::event_func_2309()
{
    // event 4284_6
    {
        if (!(group_loops_1)) goto event_4284_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (1))) goto event_4284_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_instance(containercanteen_230_instances, default_active_instance))->alterables->values.get(0))+str_slot_617+number_to_string(loop_restock_cutlery_index+1), str_23_100_1471);
    }
    event_4284_6_end: ;
}
void Frames::event_func_2310()
{
    // event 4285_6
    {
        if (!(group_loops_1)) goto event_4285_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (2))) goto event_4285_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_instance(containercanteen_230_instances, default_active_instance))->alterables->values.get(0))+str_slot_617+number_to_string(loop_restock_cutlery_index+1), str_27_100_1472);
    }
    event_4285_6_end: ;
}
void Frames::event_func_2311()
{
    // event 4286_6
    {
        if (!(group_loops_1)) goto event_4286_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (3))) goto event_4286_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_instance(containercanteen_230_instances, default_active_instance))->alterables->values.get(0))+str_slot_617+number_to_string(loop_restock_cutlery_index+1), str_28_100_1473);
    }
    event_4286_6_end: ;
}
void Frames::loop_restock_cutlery_6()
{
    event_func_2307();
    event_func_2308();
    event_func_2309();
    event_func_2310();
    event_func_2311();
}
void Frames::event_func_2312()
{
    // event 4275_6
    {
        if (!(group_loops_1)) goto event_4275_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(loop_restock_npc_desks_index+1)+str_slot_617+number_to_string(5+loop_restock_npc_desks_custom_index), ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
    }
    event_4275_6_end: ;
}
void Frames::loop_restock_npc_desks_custom_6()
{
    event_func_2312();
}
void Frames::event_func_2313()
{
    // event 4272_6
    {
        if (!(group_loops_1)) goto event_4272_6_end;
        if (!((loop_restock_npc_desks_index+1) != (((AssociateArray*)get_instance(gameVariables_instances))->get_value(397, str_yourdesk_1208)))) goto event_4272_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_4272_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (0))) goto event_4272_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(loop_restock_npc_desks_index+1)+str_slot1_534, str_17_100_1474);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(loop_restock_npc_desks_index+1)+str_slot2_535, str_45_100_1475);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(loop_restock_npc_desks_index+1)+str_slot3_536, str_47_100_1476);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(loop_restock_npc_desks_index+1)+str_slot4_1477, str_48_100_1478);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(563, str_rnditems_1479, randrange_event(3));
        {
            loop_restock_npc_desks_custom_running = true;
            int times = int(randrange_event(4)+2);
            loop_restock_npc_desks_custom_index = 0;
            while (loop_restock_npc_desks_custom_index < times) {
                loop_restock_npc_desks_custom_6();
                if (!loop_restock_npc_desks_custom_running) break;
                loop_restock_npc_desks_custom_index++;
            }
        }
    }
    event_4272_6_end: ;
}
void Frames::event_func_2314()
{
    // event 4273_6
    {
        if (!(group_loops_1)) goto event_4273_6_end;
        if (!((loop_restock_npc_desks_index+1) != (((AssociateArray*)get_instance(gameVariables_instances))->get_value(397, str_yourdesk_1208)))) goto event_4273_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_4273_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(loop_restock_npc_desks_index+1)+str_slot1_534, str_17_100_1474);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(loop_restock_npc_desks_index+1)+str_slot2_535, str_45_100_1475);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(loop_restock_npc_desks_index+1)+str_slot3_536, str_47_100_1476);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(loop_restock_npc_desks_index+1)+str_slot4_1477, str_48_100_1478);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(563, str_rnditems_1479, randrange_event(5));
        {
            loop_restock_npc_desks_custom_running = true;
            int times = int(randrange_event(3)+4);
            loop_restock_npc_desks_custom_index = 0;
            while (loop_restock_npc_desks_custom_index < times) {
                loop_restock_npc_desks_custom_6();
                if (!loop_restock_npc_desks_custom_running) break;
                loop_restock_npc_desks_custom_index++;
            }
        }
    }
    event_4273_6_end: ;
}
void Frames::event_func_2315()
{
    // event 4274_6
    {
        if (!(group_loops_1)) goto event_4274_6_end;
        if (!((loop_restock_npc_desks_index+1) != (((AssociateArray*)get_instance(gameVariables_instances))->get_value(397, str_yourdesk_1208)))) goto event_4274_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_4274_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(loop_restock_npc_desks_index+1)+str_slot1_534, str_17_100_1474);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(loop_restock_npc_desks_index+1)+str_slot2_535, str_45_100_1475);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(loop_restock_npc_desks_index+1)+str_slot3_536, str_47_100_1476);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(loop_restock_npc_desks_index+1)+str_slot4_1477, str_48_100_1478);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(563, str_rnditems_1479, randrange_event(5));
        {
            loop_restock_npc_desks_custom_running = true;
            int times = int(randrange_event(3)+4);
            loop_restock_npc_desks_custom_index = 0;
            while (loop_restock_npc_desks_custom_index < times) {
                loop_restock_npc_desks_custom_6();
                if (!loop_restock_npc_desks_custom_running) break;
                loop_restock_npc_desks_custom_index++;
            }
        }
    }
    event_4274_6_end: ;
}
void Frames::loop_restock_npc_desks_6()
{
    event_func_2313();
    event_func_2314();
    event_func_2315();
}
void Frames::event_func_2316()
{
    // event 4288_6
    {
        if (!(group_loops_1)) goto event_4288_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (0))) goto event_4288_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_instance(containermedical_269_instances, default_active_instance))->alterables->values.get(0))+str_slot_617+number_to_string(loop_restock_medical_index+1), empty_string);
    }
    event_4288_6_end: ;
}
void Frames::event_func_2317()
{
    // event 4289_6
    {
        if (!(group_loops_1)) goto event_4289_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (1))) goto event_4289_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_instance(containermedical_269_instances, default_active_instance))->alterables->values.get(0))+str_slot_617+number_to_string(loop_restock_medical_index+1), str_10_100_1480);
    }
    event_4289_6_end: ;
}
void Frames::event_func_2318()
{
    // event 4290_6
    {
        if (!(group_loops_1)) goto event_4290_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (2))) goto event_4290_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_instance(containermedical_269_instances, default_active_instance))->alterables->values.get(0))+str_slot_617+number_to_string(loop_restock_medical_index+1), str_16_100_1481);
    }
    event_4290_6_end: ;
}
void Frames::event_func_2319()
{
    // event 4291_6
    {
        if (!(group_loops_1)) goto event_4291_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (3))) goto event_4291_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_instance(containermedical_269_instances, default_active_instance))->alterables->values.get(0))+str_slot_617+number_to_string(loop_restock_medical_index+1), str_131_100_1482);
    }
    event_4291_6_end: ;
}
void Frames::loop_restock_medical_6()
{
    event_func_2307();
    event_func_2316();
    event_func_2317();
    event_func_2318();
    event_func_2319();
}
void Frames::event_func_2320()
{
    // event 4309_6
    {
        if (!(group_loops_1)) goto event_4309_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(334, str_pocketsarray_1123), str__96);
    }
    event_4309_6_end: ;
}
void Frames::event_func_2321()
{
    // event 4310_6
    {
        if (!(group_loops_1)) goto event_4310_6_end;
        desksdlc_482_instances.clear_selection();
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_janbox_471))) { it.deselect(); continue; }
        }
        if (!desksdlc_482_instances.has_selection()) goto event_4310_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot1_534, str_217_100_1483);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot2_535, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot3_536, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot4_1477, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot5_1484, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
    }
    event_4310_6_end: ;
}
void Frames::event_func_2322()
{
    // event 4311_6
    {
        if (!(group_loops_1)) goto event_4311_6_end;
        desksdlc_482_instances.clear_selection();
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_woodbox_472))) { it.deselect(); continue; }
        }
        if (!desksdlc_482_instances.has_selection()) goto event_4311_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot1_534, str_218_100_1485);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot2_535, str_218_100_1485);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot3_536, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot4_1477, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot5_1484, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
    }
    event_4311_6_end: ;
}
void Frames::event_func_2323()
{
    // event 4312_6
    {
        if (!(group_loops_1)) goto event_4312_6_end;
        desksdlc_482_instances.clear_selection();
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_ctrlbox_473))) { it.deselect(); continue; }
        }
        if (!desksdlc_482_instances.has_selection()) goto event_4312_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot1_534, str_212_100_1486);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot2_535, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot3_536, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot4_1477, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot5_1484, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
    }
    event_4312_6_end: ;
}
void Frames::event_func_2324()
{
    // event 4313_6
    {
        if (!(group_loops_1)) goto event_4313_6_end;
        desksdlc_482_instances.clear_selection();
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_bossbox_474))) { it.deselect(); continue; }
        }
        if (!desksdlc_482_instances.has_selection()) goto event_4313_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot1_534, str_219_100_1487);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot2_535, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot3_536, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot4_1477, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot5_1484, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
    }
    event_4313_6_end: ;
}
void Frames::event_func_2325()
{
    // event 4314_6
    {
        if (!(group_loops_1)) goto event_4314_6_end;
        desksdlc_482_instances.clear_selection();
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_henbox_475))) { it.deselect(); continue; }
        }
        if (!desksdlc_482_instances.has_selection()) goto event_4314_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot1_534, str_220_100_1488);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot2_535, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot3_536, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot4_1477, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot5_1484, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
    }
    event_4314_6_end: ;
}
void Frames::loop_restock_dtaf_6()
{
    event_func_2320();
    event_func_2321();
    event_func_2322();
    event_func_2323();
    event_func_2324();
    event_func_2325();
}
void Frames::event_func_2326()
{
    // event 4304_6
    {
        if (!(group_loops_1)) goto event_4304_6_end;
        desksdlc_482_instances.clear_selection();
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_bulbs_942))) { it.deselect(); continue; }
        }
        if (!desksdlc_482_instances.has_selection()) goto event_4304_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot1_534, str_240_100_1489);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot2_535, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot3_536, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot4_1477, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot5_1484, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
    }
    event_4304_6_end: ;
}
void Frames::event_func_2327()
{
    // event 4305_6
    {
        if (!(group_loops_1)) goto event_4305_6_end;
        desksdlc_482_instances.clear_selection();
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_joystick_943))) { it.deselect(); continue; }
        }
        if (!desksdlc_482_instances.has_selection()) goto event_4305_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot1_534, str_218_100_1485);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot2_535, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot3_536, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot4_1477, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot5_1484, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
    }
    event_4305_6_end: ;
}
void Frames::event_func_2328()
{
    // event 4306_6
    {
        if (!(group_loops_1)) goto event_4306_6_end;
        desksdlc_482_instances.clear_selection();
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_glitter_944))) { it.deselect(); continue; }
        }
        if (!desksdlc_482_instances.has_selection()) goto event_4306_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot1_534, str_243_100_1490);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot2_535, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot3_536, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot4_1477, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot5_1484, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
    }
    event_4306_6_end: ;
}
void Frames::event_func_2329()
{
    // event 4307_6
    {
        if (!(group_loops_1)) goto event_4307_6_end;
        desksdlc_482_instances.clear_selection();
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_lever_945))) { it.deselect(); continue; }
        }
        if (!desksdlc_482_instances.has_selection()) goto event_4307_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot1_534, str_244_100_1491);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot2_535, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot3_536, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot4_1477, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot5_1484, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
    }
    event_4307_6_end: ;
}
void Frames::event_func_2330()
{
    // event 4308_6
    {
        if (!(group_loops_1)) goto event_4308_6_end;
        desksdlc_482_instances.clear_selection();
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_wrappingpaper_946))) { it.deselect(); continue; }
        }
        if (!desksdlc_482_instances.has_selection()) goto event_4308_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot1_534, str_254_100_1492);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot2_535, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot3_536, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot4_1477, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot5_1484, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))+str_100_531);
    }
    event_4308_6_end: ;
}
void Frames::loop_restock_ss_6()
{
    event_func_2320();
    event_func_2326();
    event_func_2327();
    event_func_2328();
    event_func_2329();
    event_func_2330();
}
void Frames::event_func_2331()
{
    // event 4298_6
    {
        if (!(group_loops_1)) goto event_4298_6_end;
        desksdlc_482_instances.clear_selection();
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_reindeer_842))) { it.deselect(); continue; }
        }
        if (!desksdlc_482_instances.has_selection()) goto event_4298_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot1_534, str_271_100_1493);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot2_535, str_271_100_1493);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot3_536, str_271_100_1493);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot4_1477, str_272_100_1494);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot5_1484, str_272_100_1494);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot6_1495, str_272_100_1494);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot7_1496, str_274_100_1497);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot8_1498, str_274_100_1497);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot9_1499, str_274_100_1497);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot10_1500, str_277_100_1501);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot11_1502, str_277_100_1501);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot12_1503, str_277_100_1501);
    }
    event_4298_6_end: ;
}
void Frames::event_func_2332()
{
    // event 4299_6
    {
        if (!(group_loops_1)) goto event_4299_6_end;
        desksdlc_482_instances.clear_selection();
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_guards_538))) { it.deselect(); continue; }
        }
        if (!desksdlc_482_instances.has_selection()) goto event_4299_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot1_534, str_263_100_1504);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot2_535, str_263_100_1504);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot3_536, str_263_100_1504);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot4_1477, str_262_100_1505);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot5_1484, str_262_100_1505);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot6_1495, str_262_100_1505);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot7_1496, str_246_100_1506);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot8_1498, str_246_100_1506);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot9_1499, str_246_100_1506);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot10_1500, str_148_100_1507);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot11_1502, str_149_100_1508);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot12_1503, str_245_100_1509);
    }
    event_4299_6_end: ;
}
void Frames::event_func_2333()
{
    // event 4300_6
    {
        if (!(group_loops_1)) goto event_4300_6_end;
        desksdlc_482_instances.clear_selection();
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_fuel_843))) { it.deselect(); continue; }
        }
        if (!desksdlc_482_instances.has_selection()) goto event_4300_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot1_534, str_267_100_1510);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot2_535, str_267_100_1510);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot3_536, str_267_100_1510);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot4_1477, str_269_100_1511);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot5_1484, str_269_100_1511);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot6_1495, str_269_100_1511);
    }
    event_4300_6_end: ;
}
void Frames::event_func_2334()
{
    // event 4301_6
    {
        if (!(group_loops_1)) goto event_4301_6_end;
        desksdlc_482_instances.clear_selection();
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_metalshop_35))) { it.deselect(); continue; }
        }
        if (!desksdlc_482_instances.has_selection()) goto event_4301_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot1_534, str_204_100_1512);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot2_535, str_204_100_1512);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot3_536, str_264_100_1513);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot4_1477, str_264_100_1513);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot5_1484, str_261_100_1514);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot6_1495, str_261_100_1514);
    }
    event_4301_6_end: ;
}
void Frames::event_func_2335()
{
    // event 4302_6
    {
        if (!(group_loops_1)) goto event_4302_6_end;
        desksdlc_482_instances.clear_selection();
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_tailorshop_44))) { it.deselect(); continue; }
        }
        if (!desksdlc_482_instances.has_selection()) goto event_4302_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot1_534, str_95_100_1515);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot2_535, str_95_100_1515);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot3_536, str_69_100_1516);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot4_1477, str_69_100_1516);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot5_1484, str_265_100_1517);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot6_1495, str_265_100_1517);
    }
    event_4302_6_end: ;
}
void Frames::loop_restock_ccl_6()
{
    event_func_2320();
    event_func_2331();
    event_func_2332();
    event_func_2333();
    event_func_2334();
    event_func_2335();
}
void Frames::event_func_2336()
{
    // event 4277_6
    {
        if (!(group_loops_1)) goto event_4277_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (0))) goto event_4277_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_instance(containergardening_409_instances, default_active_instance))->alterables->values.get(0))+str_slot_617+number_to_string(loop_restock_gardening_index+1), empty_string);
    }
    event_4277_6_end: ;
}
void Frames::event_func_2337()
{
    // event 4278_6
    {
        if (!(group_loops_1)) goto event_4278_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (1))) goto event_4278_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_instance(containergardening_409_instances, default_active_instance))->alterables->values.get(0))+str_slot_617+number_to_string(loop_restock_gardening_index+1), str_31_100_1518);
    }
    event_4278_6_end: ;
}
void Frames::loop_restock_gardening_6()
{
    event_func_864();
    event_func_2336();
    event_func_2337();
}
void Frames::event_func_2338()
{
    // event 4321_6
    {
        if (!(group_loops_1)) goto event_4321_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(132, str_rnd_696, randrange_event(3));
    }
    event_4321_6_end: ;
}
void Frames::event_func_2339()
{
    // event 4322_6
    {
        if (!(group_loops_1)) goto event_4322_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (0))) goto event_4322_6_end;
        desksdlc_482_instances.clear_selection();
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_d_51))) { it.deselect(); continue; }
        }
        if (!desksdlc_482_instances.has_selection()) goto event_4322_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot_617+number_to_string(loop_restock_eteam_d_index+1), empty_string);
    }
    event_4322_6_end: ;
}
void Frames::event_func_2340()
{
    // event 4323_6
    {
        if (!(group_loops_1)) goto event_4323_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (1))) goto event_4323_6_end;
        desksdlc_482_instances.clear_selection();
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_d_51))) { it.deselect(); continue; }
        }
        if (!desksdlc_482_instances.has_selection()) goto event_4323_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot_617+number_to_string(loop_restock_eteam_d_index+1), str_31_100_1518);
    }
    event_4323_6_end: ;
}
void Frames::event_func_2341()
{
    // event 4324_6
    {
        if (!(group_loops_1)) goto event_4324_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (2))) goto event_4324_6_end;
        desksdlc_482_instances.clear_selection();
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_d_51))) { it.deselect(); continue; }
        }
        if (!desksdlc_482_instances.has_selection()) goto event_4324_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot_617+number_to_string(loop_restock_eteam_d_index+1), str_196_100_1519);
    }
    event_4324_6_end: ;
}
void Frames::loop_restock_eteam_d_6()
{
    event_func_2338();
    event_func_2339();
    event_func_2340();
    event_func_2341();
}
void Frames::event_func_2342()
{
    // event 4292_6
    {
        if (!(group_loops_1)) goto event_4292_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(132, str_rnd_696, randrange_event(4)+1);
    }
    event_4292_6_end: ;
}
void Frames::event_func_2343()
{
    // event 4293_6
    {
        if (!(group_loops_1)) goto event_4293_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (1))) goto event_4293_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_instance(containerjanitor_270_instances, default_active_instance))->alterables->values.get(0))+str_slot_617+number_to_string(loop_restock_cleaning_index+1), str_32_100_1520);
    }
    event_4293_6_end: ;
}
void Frames::event_func_2344()
{
    // event 4294_6
    {
        if (!(group_loops_1)) goto event_4294_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (2))) goto event_4294_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_instance(containerjanitor_270_instances, default_active_instance))->alterables->values.get(0))+str_slot_617+number_to_string(loop_restock_cleaning_index+1), str_35_100_1521);
    }
    event_4294_6_end: ;
}
void Frames::event_func_2345()
{
    // event 4295_6
    {
        if (!(group_loops_1)) goto event_4295_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (3))) goto event_4295_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_instance(containerjanitor_270_instances, default_active_instance))->alterables->values.get(0))+str_slot_617+number_to_string(loop_restock_cleaning_index+1), str_37_100_1522);
    }
    event_4295_6_end: ;
}
void Frames::event_func_2346()
{
    // event 4296_6
    {
        if (!(group_loops_1)) goto event_4296_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (4))) goto event_4296_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_instance(containerjanitor_270_instances, default_active_instance))->alterables->values.get(0))+str_slot_617+number_to_string(loop_restock_cleaning_index+1), str_80_100_1523);
    }
    event_4296_6_end: ;
}
void Frames::loop_restock_cleaning_6()
{
    event_func_2342();
    event_func_2343();
    event_func_2344();
    event_func_2345();
    event_func_2346();
}
void Frames::event_func_2347()
{
    // event 4317_6
    {
        if (!(group_loops_1)) goto event_4317_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (0))) goto event_4317_6_end;
        desksdlc_482_instances.clear_selection();
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_b_602))) { it.deselect(); continue; }
        }
        if (!desksdlc_482_instances.has_selection()) goto event_4317_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot_617+number_to_string(loop_restock_eteam_b_index+1), str_204_100_1512);
    }
    event_4317_6_end: ;
}
void Frames::event_func_2348()
{
    // event 4318_6
    {
        if (!(group_loops_1)) goto event_4318_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (1))) goto event_4318_6_end;
        desksdlc_482_instances.clear_selection();
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_b_602))) { it.deselect(); continue; }
        }
        if (!desksdlc_482_instances.has_selection()) goto event_4318_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot_617+number_to_string(loop_restock_eteam_b_index+1), str_194_100_1524);
    }
    event_4318_6_end: ;
}
void Frames::event_func_2349()
{
    // event 4319_6
    {
        if (!(group_loops_1)) goto event_4319_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (2))) goto event_4319_6_end;
        desksdlc_482_instances.clear_selection();
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_b_602))) { it.deselect(); continue; }
        }
        if (!desksdlc_482_instances.has_selection()) goto event_4319_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot_617+number_to_string(loop_restock_eteam_b_index+1), str_203_100_1525);
    }
    event_4319_6_end: ;
}
void Frames::loop_restock_eteam_b_6()
{
    event_func_2338();
    event_func_2347();
    event_func_2348();
    event_func_2349();
}
void Frames::event_func_2350()
{
    // event 4320_6
    {
        if (!(group_loops_1)) goto event_4320_6_end;
        desksdlc_482_instances.clear_selection();
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_c_603))) { it.deselect(); continue; }
        }
        if (!desksdlc_482_instances.has_selection()) goto event_4320_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot_617+number_to_string(loop_restock_eteam_c_index+1), str_205_100_1526);
    }
    event_4320_6_end: ;
}
void Frames::loop_restock_eteam_c_6()
{
    event_func_2350();
}
void Frames::event_func_2351()
{
    // event 4315_6
    {
        if (!(group_loops_1)) goto event_4315_6_end;
        desksdlc_482_instances.clear_selection();
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_a_72))) { it.deselect(); continue; }
        }
        if (!desksdlc_482_instances.has_selection()) goto event_4315_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_single(desksdlc_482_instances, default_active_instance))->alterables->values.get(0))+str_slot_617+number_to_string(loop_restock_eteam_a_index+1), str_192_100_1527);
    }
    event_4315_6_end: ;
}
void Frames::loop_restock_eteam_a_6()
{
    event_func_2351();
}
void Frames::event_func_2352()
{
    // event 4263_6
    {
        if (!(group_loops_1)) goto event_4263_6_end;
        if (!((containergardening_409_instances.size()) > (0))) goto event_4263_6_end;
        {
            loop_restock_gardening_running = true;
            int times = int(20);
            loop_restock_gardening_index = 0;
            while (loop_restock_gardening_index < times) {
                loop_restock_gardening_6();
                if (!loop_restock_gardening_running) break;
                loop_restock_gardening_index++;
            }
        }
    }
    event_4263_6_end: ;
}
void Frames::event_func_2353()
{
    // event 4264_6
    {
        if (!(group_loops_1)) goto event_4264_6_end;
        if (!((containercanteen_230_instances.size()) > (0))) goto event_4264_6_end;
        {
            loop_restock_cutlery_running = true;
            int times = int(20);
            loop_restock_cutlery_index = 0;
            while (loop_restock_cutlery_index < times) {
                loop_restock_cutlery_6();
                if (!loop_restock_cutlery_running) break;
                loop_restock_cutlery_index++;
            }
        }
    }
    event_4264_6_end: ;
}
void Frames::event_func_2354()
{
    // event 4265_6
    {
        if (!(group_loops_1)) goto event_4265_6_end;
        if (!((containerjanitor_270_instances.size()) > (0))) goto event_4265_6_end;
        {
            loop_restock_cleaning_running = true;
            int times = int(20);
            loop_restock_cleaning_index = 0;
            while (loop_restock_cleaning_index < times) {
                loop_restock_cleaning_6();
                if (!loop_restock_cleaning_running) break;
                loop_restock_cleaning_index++;
            }
        }
    }
    event_4265_6_end: ;
}
void Frames::event_func_2355()
{
    // event 4266_6
    {
        if (!(group_loops_1)) goto event_4266_6_end;
        if (!((containermedical_269_instances.size()) > (0))) goto event_4266_6_end;
        {
            loop_restock_medical_running = true;
            int times = int(20);
            loop_restock_medical_index = 0;
            while (loop_restock_medical_index < times) {
                loop_restock_medical_6();
                if (!loop_restock_medical_running) break;
                loop_restock_medical_index++;
            }
        }
    }
    event_4266_6_end: ;
}
void Frames::event_func_2356()
{
    // event 4267_6
    {
        if (!(group_loops_1)) goto event_4267_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_4267_6_end;
        {
            loop_restock_eteam_a_running = true;
            int times = int(20);
            loop_restock_eteam_a_index = 0;
            while (loop_restock_eteam_a_index < times) {
                loop_restock_eteam_a_6();
                if (!loop_restock_eteam_a_running) break;
                loop_restock_eteam_a_index++;
            }
        }
        {
            loop_restock_eteam_b_running = true;
            int times = int(20);
            loop_restock_eteam_b_index = 0;
            while (loop_restock_eteam_b_index < times) {
                loop_restock_eteam_b_6();
                if (!loop_restock_eteam_b_running) break;
                loop_restock_eteam_b_index++;
            }
        }
        {
            loop_restock_eteam_c_running = true;
            int times = int(20);
            loop_restock_eteam_c_index = 0;
            while (loop_restock_eteam_c_index < times) {
                loop_restock_eteam_c_6();
                if (!loop_restock_eteam_c_running) break;
                loop_restock_eteam_c_index++;
            }
        }
        {
            loop_restock_eteam_d_running = true;
            int times = int(20);
            loop_restock_eteam_d_index = 0;
            while (loop_restock_eteam_d_index < times) {
                loop_restock_eteam_d_6();
                if (!loop_restock_eteam_d_running) break;
                loop_restock_eteam_d_index++;
            }
        }
    }
    event_4267_6_end: ;
}
void Frames::event_func_2357()
{
    // event 4268_6
    {
        if (!(group_loops_1)) goto event_4268_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_4268_6_end;
        {
            loop_restock_dtaf_running = true;
            int times = int(1);
            loop_restock_dtaf_index = 0;
            while (loop_restock_dtaf_index < times) {
                loop_restock_dtaf_6();
                if (!loop_restock_dtaf_running) break;
                loop_restock_dtaf_index++;
            }
        }
    }
    event_4268_6_end: ;
}
void Frames::event_func_2358()
{
    // event 4269_6
    {
        if (!(group_loops_1)) goto event_4269_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_4269_6_end;
        {
            loop_restock_ss_running = true;
            int times = int(1);
            loop_restock_ss_index = 0;
            while (loop_restock_ss_index < times) {
                loop_restock_ss_6();
                if (!loop_restock_ss_running) break;
                loop_restock_ss_index++;
            }
        }
    }
    event_4269_6_end: ;
}
void Frames::event_func_2359()
{
    // event 4270_6
    {
        if (!(group_loops_1)) goto event_4270_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_4270_6_end;
        {
            loop_restock_ccl_running = true;
            int times = int(1);
            loop_restock_ccl_index = 0;
            while (loop_restock_ccl_index < times) {
                loop_restock_ccl_6();
                if (!loop_restock_ccl_running) break;
                loop_restock_ccl_index++;
            }
        }
    }
    event_4270_6_end: ;
}
void Frames::event_func_2360()
{
    // event 4271_6
    {
        if (!(group_loops_1)) goto event_4271_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(333, str_desksarray_1122), str__96);
        {
            loop_restock_npc_desks_running = true;
            int times = int(desks_305_instances.size());
            loop_restock_npc_desks_index = 0;
            while (loop_restock_npc_desks_index < times) {
                loop_restock_npc_desks_6();
                if (!loop_restock_npc_desks_running) break;
                loop_restock_npc_desks_index++;
            }
        }
    }
    event_4271_6_end: ;
}
void Frames::loop_restocks_6()
{
    event_func_2352();
    event_func_2353();
    event_func_2354();
    event_func_2355();
    event_func_2356();
    event_func_2357();
    event_func_2358();
    event_func_2359();
    event_func_2360();
}
void Frames::event_func_2361()
{
    // event 4451_6
    {
        if (!(group_saving_1)) goto event_4451_6_end;
        sheetsposters_294_instances.clear_selection();
        for (ObjectIterator it(sheetsposters_294_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_save_curts_index+1))) { it.deselect(); continue; }
        }
        if (!sheetsposters_294_instances.has_selection()) goto event_4451_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(564, str_curts_1528, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(564, str_curts_1528)+number_to_string(((Active*)get_single(sheetsposters_294_instances, default_active_instance))->get_x())+str__96+number_to_string(((Active*)get_single(sheetsposters_294_instances, default_active_instance))->get_y())+str__96+number_to_string(((Active*)get_single(sheetsposters_294_instances, default_active_instance))->current_animation)+str__254);
    }
    event_4451_6_end: ;
}
void Frames::loop_save_curts_6()
{
    event_func_2361();
}
void Frames::event_func_2362()
{
    // event 4440_6
    {
        if (!(group_saving_1)) goto event_4440_6_end;
        ((INI*)get_instance(saving_350_instances))->set_string(str_missions_643, number_to_string(loop_save_missions_index+1), ((ListObject*)get_instance(missions_298_instances))->get_line(loop_save_missions_index+1));
    }
    event_4440_6_end: ;
}
void Frames::loop_save_missions_6()
{
    event_func_2362();
}
void Frames::event_func_2363()
{
    // event 4430_6
    {
        if (!(group_saving_1)) goto event_4430_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_save_guards_index+1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_4430_6_end;
        ((INI*)get_instance(saving_350_instances))->set_string(str_guards_538, number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(0)), ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->strings.get(0)+str__254+number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(8))+str__254+number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(9))+str__254+number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(5))+str__254+number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(12))+str__254+((Active*)get_single(guardBase_instances, default_active_instance))->alterables->strings.get(3)+str__254+number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->flags.get(2001)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(565, str_temp_1529, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_451+number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25))+str_inv_1_453)+str__254+((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_451+number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25))+str_inv_2_454)+str__254+((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_451+number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25))+str_inv_3_455)+str__254);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(565, str_temp_1529, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(565, str_temp_1529)+((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_451+number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25))+str_inv_4_456)+str__254+((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_451+number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25))+str_inv_5_457)+str__254+((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_451+number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25))+str_inv_6_458)+str__254);
        ((INI*)get_instance(saving_350_instances))->set_string(str_guard_inven_545, number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(0)), ((AssociateArray*)get_instance(gameVariables_instances))->get_string(565, str_temp_1529));
    }
    event_4430_6_end: ;
}
void Frames::loop_save_guards_6()
{
    event_func_2363();
}
void Frames::event_func_2364()
{
    // event 4450_6
    {
        if (!(group_saving_1)) goto event_4450_6_end;
        guardalert_266_instances.clear_selection();
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_save_alerts_index+1))) { it.deselect(); continue; }
        }
        if (!guardalert_266_instances.has_selection()) goto event_4450_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(566, str_alerts_1530, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(566, str_alerts_1530)+number_to_string(((Active*)get_single(guardalert_266_instances, default_active_instance))->get_x())+str__96+number_to_string(((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y())+str__96+((Active*)get_single(guardalert_266_instances, default_active_instance))->alterables->strings.get(0)+str__96+number_to_string(((Active*)get_single(guardalert_266_instances, default_active_instance))->alterables->values.get(3))+str__254);
    }
    event_4450_6_end: ;
}
void Frames::loop_save_alerts_6()
{
    event_func_2364();
}
void Frames::event_func_2365()
{
    // event 4429_6
    {
        if (!(group_saving_1)) goto event_4429_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_save_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_4429_6_end;
        ((INI*)get_instance(saving_350_instances))->set_string(str_inmates_519, number_to_string(((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0)), ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(0)+str__254+number_to_string(((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(8))+str__254+number_to_string(((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(9))+str__254+number_to_string(((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(5))+str__254+number_to_string(((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(12))+str__254+number_to_string(((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->flags.get(2001))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_npc_avatar_520+number_to_string(loop_save_inmates_index+1)))+str__254+((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(565, str_temp_1529, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_451+number_to_string(((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25))+str_inv_1_453)+str__254+((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_451+number_to_string(((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25))+str_inv_2_454)+str__254+((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_451+number_to_string(((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25))+str_inv_3_455)+str__254);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(565, str_temp_1529, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(565, str_temp_1529)+((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_451+number_to_string(((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25))+str_inv_4_456)+str__254+((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_451+number_to_string(((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25))+str_inv_5_457)+str__254+((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_451+number_to_string(((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25))+str_inv_6_458)+str__254);
        ((INI*)get_instance(saving_350_instances))->set_string(str_inmate_inven_524, number_to_string(((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0)), ((AssociateArray*)get_instance(gameVariables_instances))->get_string(565, str_temp_1529));
    }
    event_4429_6_end: ;
}
void Frames::loop_save_inmates_6()
{
    event_func_2365();
}
void Frames::event_func_2366()
{
    // event 4442_6
    {
        if (!(group_saving_1)) goto event_4442_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(1-1);
            ((Active*)*it)->set_x(loop_save_soil_x_index*16);
            ((Active*)*it)->set_y(loop_save_soil_y_index*16);
        }
        savecheckground_351_instances.clear_selection();
        for (ObjectIterator it(savecheckground_351_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(loop_save_soil_x_index*16);
            ((Active*)*it)->set_y(loop_save_soil_y_index*16);
        }
    }
    event_4442_6_end: ;
}
void Frames::event_func_2367()
{
    // event 4443_6
    {
        if (!(group_saving_1)) goto event_4443_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_4443_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_4443_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(567, str_dugsoil_1531, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(567, str_dugsoil_1531)+number_to_string(loop_save_soil_x_index)+str_x_437+number_to_string(loop_save_soil_y_index)+str__254);
    }
    event_4443_6_end: ;
}
void Frames::event_func_2368()
{
    // event 4444_6
    {
        if (!(group_saving_1)) goto event_4444_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_4444_6_end;
        if (!(((((ArrayObject*)get_instance(digarray_228_instances))->get_value((loop_save_soil_x_index*16), (loop_save_soil_y_index*16), 0))) >= (25))) goto event_4444_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(567, str_dugsoil_1531, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(567, str_dugsoil_1531)+number_to_string(loop_save_soil_x_index)+str_x_437+number_to_string(loop_save_soil_y_index)+str__254);
    }
    event_4444_6_end: ;
}
void Frames::event_func_2369()
{
    // event 4445_6
    {
        if (!(group_saving_1)) goto event_4445_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_4445_6_end;
        if (!(((((ArrayObject*)get_instance(digarray_228_instances))->get_value((loop_save_soil_x_index*16), (loop_save_soil_y_index*16), 1))) >= (25))) goto event_4445_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(567, str_dugsoil_1531, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(567, str_dugsoil_1531)+number_to_string(loop_save_soil_x_index)+str_x_437+number_to_string(loop_save_soil_y_index)+str__254);
    }
    event_4445_6_end: ;
}
void Frames::event_func_2370()
{
    // event 4446_6
    {
        if (!(group_saving_1)) goto event_4446_6_end;
        usespot_208_instances.clear_selection();
        active10_293_instances.clear_selection();
        if (!check_overlap(usespot_208_instances, active10_293_instances)) goto event_4446_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(568, str_rocks_1532, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(568, str_rocks_1532)+number_to_string(loop_save_soil_x_index)+str_x_437+number_to_string(loop_save_soil_y_index)+str_x_437+number_to_string(((Active*)get_single(active10_293_instances, default_active_instance))->alterables->values.get(2))+str__254);
    }
    event_4446_6_end: ;
}
void Frames::event_func_2371()
{
    // event 4447_6
    bool or_result_4447_6 = false;
    bool or_temp_result_4447_6_0 = false;
    {
        if (!(group_saving_1)) goto or_event_4447_6_0_end;
        usespot_208_instances.clear_selection();
        dighole_207_instances.clear_selection();
        if (!check_overlap(usespot_208_instances, dighole_207_instances)) goto or_event_4447_6_0_end;
        or_result_4447_6 = true;
        or_temp_result_4447_6_0 = true;
    }
    or_event_4447_6_0_end: ;
    usespot_208_instances.clear_saved_selection();
    dighole_207_instances.clear_saved_selection();
    if (or_temp_result_4447_6_0) {
        usespot_208_instances.save_selection();
        dighole_207_instances.save_selection();
    }
    // event 4447_6
    bool or_temp_result_4447_6_1 = false;
    {
        if (!(group_saving_1)) goto or_event_4447_6_1_end;
        savecheckground_351_instances.clear_selection();
        dighole_207_instances.clear_selection();
        if (!check_overlap(savecheckground_351_instances, dighole_207_instances)) goto or_event_4447_6_1_end;
        or_result_4447_6 = true;
        or_temp_result_4447_6_1 = true;
        or_event_4447_6_1_end: ;
        savecheckground_351_instances.clear_saved_selection();
        if (or_temp_result_4447_6_1) {
            dighole_207_instances.save_selection();
            savecheckground_351_instances.save_selection();
        }
        if (!or_result_4447_6) goto or_final_or_event_4447_6_1_end;
        savecheckground_351_instances.empty_selection();
        usespot_208_instances.empty_selection();
        dighole_207_instances.empty_selection();
        if (or_temp_result_4447_6_0) {
            usespot_208_instances.restore_selection();
        }
        if (or_temp_result_4447_6_0 || or_temp_result_4447_6_1) {
            dighole_207_instances.restore_selection();
        }
        if (or_temp_result_4447_6_1) {
            savecheckground_351_instances.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_string(569, str_holes_1533, ((AssociateArray*)*it)->get_string(569, str_holes_1533)+number_to_string(loop_save_soil_x_index)+str_x_437+number_to_string(loop_save_soil_y_index)+str_x_437+number_to_string(((Active*)get_single(dighole_207_instances, it.current_index, default_active_instance))->alterables->values.get(1))+str__254);
        }
    }
    or_final_or_event_4447_6_1_end: ;
}
void Frames::event_func_2372()
{
    // event 4448_6
    {
        if (!(group_saving_1)) goto event_4448_6_end;
        usespot_208_instances.clear_selection();
        brace_412_instances.clear_selection();
        if (!check_overlap(usespot_208_instances, brace_412_instances)) goto event_4448_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(570, str_braces_1534, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(570, str_braces_1534)+number_to_string(loop_save_soil_x_index)+str_x_437+number_to_string(loop_save_soil_y_index)+str__254);
    }
    event_4448_6_end: ;
}
void Frames::event_func_2373()
{
    // event 4449_6
    {
        if (!(group_saving_1)) goto event_4449_6_end;
        usespot_208_instances.clear_selection();
        mine_414_instances.clear_selection();
        if (!check_overlap(usespot_208_instances, mine_414_instances)) goto event_4449_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(571, str_mines_1535, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(571, str_mines_1535)+number_to_string(loop_save_soil_x_index)+str_x_437+number_to_string(loop_save_soil_y_index)+str__254);
    }
    event_4449_6_end: ;
}
void Frames::loop_save_soil_x_6()
{
    event_func_2366();
    event_func_2367();
    event_func_2368();
    event_func_2369();
    event_func_2370();
    event_func_2371();
    event_func_2372();
    event_func_2373();
}
void Frames::event_func_2374()
{
    // event 4441_6
    {
        if (!(group_saving_1)) goto event_4441_6_end;
        {
            loop_save_soil_x_running = true;
            int times = int(width/MathHelper()/16);
            loop_save_soil_x_index = 0;
            while (loop_save_soil_x_index < times) {
                loop_save_soil_x_6();
                if (!loop_save_soil_x_running) break;
                loop_save_soil_x_index++;
            }
        }
    }
    event_4441_6_end: ;
}
void Frames::loop_save_soil_y_6()
{
    event_func_2374();
}
void Frames::event_func_2375()
{
    // event 4433_6
    {
        if (!(group_saving_1)) goto event_4433_6_end;
        stash_420_instances.clear_selection();
        for (ObjectIterator it(stash_420_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_save_crates_index+1))) { it.deselect(); continue; }
        }
        if (!stash_420_instances.has_selection()) goto event_4433_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(572, str_crates_1536, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(572, str_crates_1536)+number_to_string(((Active*)get_single(stash_420_instances, default_active_instance))->get_x())+str__96+number_to_string(((Active*)get_single(stash_420_instances, default_active_instance))->get_y())+str__96+number_to_string(((Active*)get_single(stash_420_instances, default_active_instance))->layer->index+1)+str__254);
    }
    event_4433_6_end: ;
}
void Frames::loop_save_crates_6()
{
    event_func_2375();
}
void Frames::event_func_2376()
{
    // event 4436_6
    {
        if (!(group_saving_1)) goto event_4436_6_end;
        items_184_instances.clear_selection();
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_save_floor_items_index+1))) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_4436_6_end;
        ((INI*)get_instance(saving_350_instances))->set_string(str_flooritems_444, number_to_string(loop_save_floor_items_index+1), number_to_string(((Active*)get_single(items_184_instances, default_active_instance))->get_x())+str__254+number_to_string(((Active*)get_single(items_184_instances, default_active_instance))->get_y())+str__254+number_to_string(((Active*)get_single(items_184_instances, default_active_instance))->layer->index+1)+str__254+number_to_string(((Active*)get_single(items_184_instances, default_active_instance))->alterables->values.get(2))+str__254+number_to_string(((Active*)get_single(items_184_instances, default_active_instance))->alterables->values.get(7))+str__254);
    }
    event_4436_6_end: ;
}
void Frames::loop_save_floor_items_6()
{
    event_func_2376();
}
void Frames::event_func_2377()
{
    // event 4432_6
    {
        if (!(group_saving_1)) goto event_4432_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(573, str_desk_str_1537, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(573, str_desk_str_1537)+((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_desk_32+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(574, str_currdesk_1538))+str_slot_617+number_to_string(loop_save_desks_compile_index+1))+str__1247);
    }
    event_4432_6_end: ;
}
void Frames::loop_save_desks_compile_6()
{
    event_func_2377();
}
void Frames::event_func_2378()
{
    // event 4431_6
    {
        if (!(group_saving_1)) goto event_4431_6_end;
        desks_305_instances.clear_selection();
        for (ObjectIterator it(desks_305_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_save_desks_index))) { it.deselect(); continue; }
        }
        if (!desks_305_instances.has_selection()) goto event_4431_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(574, str_currdesk_1538, ((Active*)get_single(desks_305_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(535, str_currx_1437, ((Active*)get_single(desks_305_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(536, str_curry_290, ((Active*)get_single(desks_305_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(575, str_currdir_1539, ((Active*)get_single(desks_305_instances, default_active_instance))->get_direction());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(573, str_desk_str_1537, empty_string);
        {
            loop_save_desks_compile_running = true;
            int times = int(20);
            loop_save_desks_compile_index = 0;
            while (loop_save_desks_compile_index < times) {
                loop_save_desks_compile_6();
                if (!loop_save_desks_compile_running) break;
                loop_save_desks_compile_index++;
            }
        }
        ((INI*)get_instance(saving_350_instances))->set_string(str_desks_1246, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(574, str_currdesk_1538)), number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(535, str_currx_1437))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(536, str_curry_290))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(575, str_currdir_1539))+str__254+((AssociateArray*)get_instance(gameVariables_instances))->get_string(573, str_desk_str_1537));
    }
    event_4431_6_end: ;
}
void Frames::loop_save_desks_6()
{
    event_func_2378();
}
void Frames::event_func_2379()
{
    // event 4428_6
    {
        if (!(group_saving_1)) goto event_4428_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(576, str_inven_820, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(576, str_inven_820)+((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inv_512+number_to_string(loop_save_inv_index+1))+str__254);
    }
    event_4428_6_end: ;
}
void Frames::loop_save_inv_6()
{
    event_func_2379();
}
void Frames::event_func_2380()
{
    // event 4435_6
    {
        if (!(group_saving_1)) goto event_4435_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(577, str_con_str_1540, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(577, str_con_str_1540)+((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_container_613+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(578, str_currc_1541))+str_slot_617+number_to_string(loop_save_containers_compile_index))+str__1247);
    }
    event_4435_6_end: ;
}
void Frames::loop_save_containers_compile_6()
{
    event_func_2380();
}
