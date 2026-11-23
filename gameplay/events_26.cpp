#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_1995 processes event block(s) 3925_6. Actions/conditions:
//        3925_6: removes the selected object.
void Frames::event_func_1995()
{
    // event 3925_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3925_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_outfit_1385))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3925_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3925_6_end: ;
}
// Function purpose: generated callback event_func_1996 processes event block(s) 3928_6. Actions/conditions:
//        3928_6: removes the selected object.
void Frames::event_func_1996()
{
    // event 3928_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3928_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_weapon_1384))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3928_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3928_6_end: ;
}
// Function purpose: generated callback event_func_1997 processes event block(s) 3929_6. Actions/conditions:
//        3929_6: removes the selected object.
void Frames::event_func_1997()
{
    // event 3929_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3929_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_outfit_1385))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3929_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3929_6_end: ;
}
// Function purpose: generated callback event_func_1998 processes event block(s) 3930_6. Actions/conditions:
//        3930_6: removes the selected object.
void Frames::event_func_1998()
{
    // event 3930_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3930_6_end;
        activityProgress_instances.clear_selection();
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_profile_281))) { it.deselect(); continue; }
        }
        if (!activityProgress_instances.has_selection()) goto event_3930_6_end;
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3930_6_end: ;
}
// Function purpose: generated callback event_func_1999 processes event block(s) 3931_6. Actions/conditions:
//        3931_6: removes the selected object.
void Frames::event_func_1999()
{
    // event 3931_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3931_6_end;
        profilestats_432_instances.clear_selection();
        for (ObjectIterator it(profilestats_432_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_3931_6_end: ;
}
void Frames::loop_stats_close_npc_6()
{
    event_func_1991();
    event_func_1992();
    event_func_1993();
    event_func_1994();
    event_func_1995();
    event_func_1303();
    event_func_1304();
    event_func_1996();
    event_func_1997();
    event_func_1998();
    event_func_1999();
}
// Function purpose: generated callback event_func_2000 processes event block(s) 884_6. Actions/conditions:
//        884_6: sets Blocked to 1.
void Frames::event_func_2000()
{
    // event 884_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_884_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_884_6_end;
        playerBase_instances.clear_selection();
        dooroutfit_501_instances.clear_selection();
        if (!check_overlap(playerBase_instances, dooroutfit_501_instances)) goto event_884_6_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 4)) != (str_228_646))) goto event_884_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_884_6_end: ;
}
// Function purpose: generated callback event_func_2001 processes event block(s) 885_6. Actions/conditions:
//        885_6: sets Blocked to 1.
void Frames::event_func_2001()
{
    // event 885_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_885_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_885_6_end;
        playerBase_instances.clear_selection();
        dooroutfit_501_instances.clear_selection();
        if (!check_overlap(playerBase_instances, dooroutfit_501_instances)) goto event_885_6_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 4)) != (str_239_647))) goto event_885_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_885_6_end: ;
}
// Function purpose: generated callback event_func_2002 processes event block(s) 886_6. Actions/conditions:
//        886_6: sets Blocked to 1.
void Frames::event_func_2002()
{
    // event 886_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_886_6_end;
        if (!((global_strings->get(0)) == (str_tol_134))) goto event_886_6_end;
        playerBase_instances.clear_selection();
        dooroutfit_501_instances.clear_selection();
        if (!check_overlap(playerBase_instances, dooroutfit_501_instances)) goto event_886_6_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 2)) != (str_3_644))) goto event_886_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_886_6_end: ;
}
// Function purpose: generated callback event_func_2003 processes event block(s) 887_6. Actions/conditions:
//        887_6: sets Blocked to 1.
void Frames::event_func_2003()
{
    // event 887_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_887_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_887_6_end;
        playerBase_instances.clear_selection();
        dooroutfit_501_instances.clear_selection();
        if (!check_overlap(playerBase_instances, dooroutfit_501_instances)) goto event_887_6_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 2)) != (str_3_644))) goto event_887_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_887_6_end: ;
}
// Function purpose: generated callback event_func_2004 processes event block(s) 888_6. Actions/conditions:
//        888_6: sets Blocked to 1.
void Frames::event_func_2004()
{
    // event 888_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_888_6_end;
        playerBase_instances.clear_selection();
        doormaster_387_instances.clear_selection();
        if (!check_overlap(playerBase_instances, doormaster_387_instances)) goto event_888_6_end;
        for (ObjectIterator it(doormaster_387_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!doormaster_387_instances.has_selection()) goto event_888_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_888_6_end: ;
}
// Function purpose: generated callback event_func_2005 processes event block(s) 889_6. Actions/conditions:
//        889_6: sets Blocked to 1.
void Frames::event_func_2005()
{
    // event 889_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_889_6_end;
        playerBase_instances.clear_selection();
        doorstaff_212_instances.clear_selection();
        if (!check_overlap(playerBase_instances, doorstaff_212_instances)) goto event_889_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_1_1387, 0)) == (-1))) goto event_889_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_86_1005, 0)) == (-1))) goto event_889_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_889_6_end: ;
}
// Function purpose: generated callback event_func_2006 processes event block(s) 890_6. Actions/conditions:
//        890_6: sets Blocked to 1.
void Frames::event_func_2006()
{
    // event 890_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_890_6_end;
        playerBase_instances.clear_selection();
        doorutility_259_instances.clear_selection();
        if (!check_overlap(playerBase_instances, doorutility_259_instances)) goto event_890_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_7_1388, 0)) == (-1))) goto event_890_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_85_1389, 0)) == (-1))) goto event_890_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_890_6_end: ;
}
// Function purpose: generated callback event_func_2007 processes event block(s) 891_6. Actions/conditions:
//        891_6: sets Blocked to 1.
void Frames::event_func_2007()
{
    // event 891_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_891_6_end;
        playerBase_instances.clear_selection();
        doorutilityvents_457_instances.clear_selection();
        if (!check_overlap(playerBase_instances, doorutilityvents_457_instances)) goto event_891_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_7_1388, 0)) == (-1))) goto event_891_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_85_1389, 0)) == (-1))) goto event_891_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_891_6_end: ;
}
// Function purpose: generated callback event_func_2008 processes event block(s) 892_6. Actions/conditions:
//        892_6: sets Blocked to 1.
void Frames::event_func_2008()
{
    // event 892_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_892_6_end;
        playerBase_instances.clear_selection();
        dooroutside_262_instances.clear_selection();
        if (!check_overlap(playerBase_instances, dooroutside_262_instances)) goto event_892_6_end;
        for (ObjectIterator it(dooroutside_262_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!dooroutside_262_instances.has_selection()) goto event_892_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_6_1390, 0)) == (-1))) goto event_892_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_88_1391, 0)) == (-1))) goto event_892_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_892_6_end: ;
}
// Function purpose: generated callback event_func_2009 processes event block(s) 893_6. Actions/conditions:
//        893_6: sets Blocked to 1.
void Frames::event_func_2009()
{
    // event 893_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_893_6_end;
        playerBase_instances.clear_selection();
        doorcell_174_instances.clear_selection();
        if (!check_overlap(playerBase_instances, doorcell_174_instances)) goto event_893_6_end;
        for (ObjectIterator it(doorcell_174_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!doorcell_174_instances.has_selection()) goto event_893_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_0_1392, 0)) == (-1))) goto event_893_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_87_1393, 0)) == (-1))) goto event_893_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_893_6_end: ;
}
// Function purpose: generated callback event_func_2010 processes event block(s) 894_6. Actions/conditions:
//        894_6: sets Blocked to 1.
void Frames::event_func_2010()
{
    // event 894_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_894_6_end;
        playerBase_instances.clear_selection();
        doorkitchen_211_instances.clear_selection();
        if (!check_overlap(playerBase_instances, doorkitchen_211_instances)) goto event_894_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_kitchen_12))) goto event_894_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_43_1394, 0)) == (-1))) goto event_894_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_58_1395, 0)) == (-1))) goto event_894_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_894_6_end: ;
}
// Function purpose: generated callback event_func_2011 processes event block(s) 895_6. Actions/conditions:
//        895_6: sets Blocked to 1.
void Frames::event_func_2011()
{
    // event 895_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_895_6_end;
        playerBase_instances.clear_selection();
        doorlibrary_272_instances.clear_selection();
        if (!check_overlap(playerBase_instances, doorlibrary_272_instances)) goto event_895_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_library_25))) goto event_895_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_43_1394, 0)) == (-1))) goto event_895_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_58_1395, 0)) == (-1))) goto event_895_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_895_6_end: ;
}
// Function purpose: generated callback event_func_2012 processes event block(s) 896_6. Actions/conditions:
//        896_6: sets Blocked to 1.
void Frames::event_func_2012()
{
    // event 896_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_896_6_end;
        playerBase_instances.clear_selection();
        doorjanitor_271_instances.clear_selection();
        if (!check_overlap(playerBase_instances, doorjanitor_271_instances)) goto event_896_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_janitor_24))) goto event_896_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_43_1394, 0)) == (-1))) goto event_896_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_58_1395, 0)) == (-1))) goto event_896_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_896_6_end: ;
}
// Function purpose: generated callback event_func_2013 processes event block(s) 897_6. Actions/conditions:
//        897_6: sets Blocked to 1.
void Frames::event_func_2013()
{
    // event 897_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_897_6_end;
        playerBase_instances.clear_selection();
        doorlaundry_276_instances.clear_selection();
        if (!check_overlap(playerBase_instances, doorlaundry_276_instances)) goto event_897_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_laundry_29))) goto event_897_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_43_1394, 0)) == (-1))) goto event_897_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_58_1395, 0)) == (-1))) goto event_897_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_897_6_end: ;
}
// Function purpose: generated callback event_func_2014 processes event block(s) 898_6. Actions/conditions:
//        898_6: sets Blocked to 1.
void Frames::event_func_2014()
{
    // event 898_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_898_6_end;
        playerBase_instances.clear_selection();
        doorwoodshop_268_instances.clear_selection();
        if (!check_overlap(playerBase_instances, doorwoodshop_268_instances)) goto event_898_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_woodshop_21))) goto event_898_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_43_1394, 0)) == (-1))) goto event_898_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_58_1395, 0)) == (-1))) goto event_898_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_898_6_end: ;
}
// Function purpose: generated callback event_func_2015 processes event block(s) 899_6. Actions/conditions:
//        899_6: sets Blocked to 1.
void Frames::event_func_2015()
{
    // event 899_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_899_6_end;
        playerBase_instances.clear_selection();
        doormetalshop_328_instances.clear_selection();
        if (!check_overlap(playerBase_instances, doormetalshop_328_instances)) goto event_899_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_metalshop_35))) goto event_899_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_43_1394, 0)) == (-1))) goto event_899_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_58_1395, 0)) == (-1))) goto event_899_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_899_6_end: ;
}
// Function purpose: generated callback event_func_2016 processes event block(s) 900_6. Actions/conditions:
//        900_6: sets Blocked to 1.
void Frames::event_func_2016()
{
    // event 900_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_900_6_end;
        playerBase_instances.clear_selection();
        doormailroom_400_instances.clear_selection();
        if (!check_overlap(playerBase_instances, doormailroom_400_instances)) goto event_900_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_mailman_556))) goto event_900_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_43_1394, 0)) == (-1))) goto event_900_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_58_1395, 0)) == (-1))) goto event_900_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_900_6_end: ;
}
// Function purpose: generated callback event_func_2017 processes event block(s) 901_6. Actions/conditions:
//        901_6: sets Blocked to 1.
void Frames::event_func_2017()
{
    // event 901_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_901_6_end;
        playerBase_instances.clear_selection();
        doordeliveries_401_instances.clear_selection();
        if (!check_overlap(playerBase_instances, doordeliveries_401_instances)) goto event_901_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_deliveries_577))) goto event_901_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_43_1394, 0)) == (-1))) goto event_901_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_58_1395, 0)) == (-1))) goto event_901_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_901_6_end: ;
}
// Function purpose: generated callback event_func_2018 processes event block(s) 902_6. Actions/conditions:
//        902_6: sets Blocked to 1.
void Frames::event_func_2018()
{
    // event 902_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_902_6_end;
        playerBase_instances.clear_selection();
        doorgardening_402_instances.clear_selection();
        if (!check_overlap(playerBase_instances, doorgardening_402_instances)) goto event_902_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_gardening_43))) goto event_902_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_43_1394, 0)) == (-1))) goto event_902_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_58_1395, 0)) == (-1))) goto event_902_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_902_6_end: ;
}
// Function purpose: generated callback event_func_2019 processes event block(s) 903_6. Actions/conditions:
//        903_6: sets Blocked to 1.
void Frames::event_func_2019()
{
    // event 903_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_903_6_end;
        playerBase_instances.clear_selection();
        doortailor_403_instances.clear_selection();
        if (!check_overlap(playerBase_instances, doortailor_403_instances)) goto event_903_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_tailor_479))) goto event_903_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_43_1394, 0)) == (-1))) goto event_903_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_58_1395, 0)) == (-1))) goto event_903_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_903_6_end: ;
}
void Frames::loop_move_check_doors_6()
{
    event_func_2000();
    event_func_2001();
    event_func_2002();
    event_func_2003();
    event_func_2004();
    event_func_2005();
    event_func_2006();
    event_func_2007();
    event_func_2008();
    event_func_2009();
    event_func_2010();
    event_func_2011();
    event_func_2012();
    event_func_2013();
    event_func_2014();
    event_func_2015();
    event_func_2016();
    event_func_2017();
    event_func_2018();
    event_func_2019();
}
// Function purpose: generated callback event_func_2020 processes event block(s) 870_6. Actions/conditions:
//        870_6: sets Blocked to 1.
void Frames::event_func_2020()
{
    // event 870_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_870_6_end;
        playerBase_instances.clear_selection();
        qualifier_1.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_1)) goto event_870_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_870_6_end: ;
}
// Function purpose: generated callback event_func_2021 processes event block(s) 871_6. Actions/conditions:
//        871_6: sets Blocked to 1.
void Frames::event_func_2021()
{
    // event 871_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_871_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->overlaps_background())) goto event_871_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_871_6_end: ;
}
// Function purpose: generated callback event_func_2022 processes event block(s) 872_6. Actions/conditions:
//        872_6: sets Blocked to 1; plays a sound or music track.
void Frames::event_func_2022()
{
    // event 872_6 : sets Blocked to 1; plays a sound or music track
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_872_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (5))) goto event_872_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 5)) == (0))) goto event_872_6_end;
        if (!(((Active*)get_instance(upperlevelcheck_206_instances))->overlaps_background())) goto event_872_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_872_6_end: ;
}
// Function purpose: generated callback event_func_2023 processes event block(s) 873_6. Actions/conditions:
//        873_6: sets Blocked to 1; plays a sound or music track.
void Frames::event_func_2023()
{
    // event 873_6 : sets Blocked to 1; plays a sound or music track
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_873_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (5))) goto event_873_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 5)) >= (87))) goto event_873_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 5)) <= (89))) goto event_873_6_end;
        if (!(((Active*)get_instance(upperlevelcheck_206_instances))->overlaps_background())) goto event_873_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_873_6_end: ;
}
// Function purpose: generated callback event_func_2024 processes event block(s) 874_6. Actions/conditions:
//        874_6: sets Blocked to 1.
void Frames::event_func_2024()
{
    // event 874_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_874_6_end;
        playerBase_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_19)) goto event_874_6_end;
        if (!((((Active*)get_single(qualifier_19, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_874_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_874_6_end: ;
}
// Function purpose: generated callback event_func_2025 processes event block(s) 875_6. Actions/conditions:
//        875_6: sets Blocked to 1.
void Frames::event_func_2025()
{
    // event 875_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_875_6_end;
        playerBase_instances.clear_selection();
        fan_281_instances.clear_selection();
        if (!check_overlap(playerBase_instances, fan_281_instances)) goto event_875_6_end;
        for (ObjectIterator it(fan_281_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!fan_281_instances.has_selection()) goto event_875_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (4))) goto event_875_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_875_6_end: ;
}
// Function purpose: generated callback event_func_2026 processes event block(s) 876_6. Actions/conditions:
//        876_6: sets Blocked to 1.
void Frames::event_func_2026()
{
    // event 876_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_876_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(7)) <= (0))) goto event_876_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_876_6_end: ;
}
// Function purpose: generated callback event_func_2027 processes event block(s) 877_6. Actions/conditions:
//        877_6: sets Blocked to 1.
void Frames::event_func_2027()
{
    // event 877_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_877_6_end;
        playerBase_instances.clear_selection();
        qualifier_18.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_18)) goto event_877_6_end;
        if (!((((Active*)get_single(qualifier_18, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_877_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) > (0))) goto event_877_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_877_6_end: ;
}
// Function purpose: generated callback event_func_2028 processes event block(s) 878_6. Actions/conditions:
//        878_6: sets Blocked to 1.
void Frames::event_func_2028()
{
    // event 878_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_878_6_end;
        playerBase_instances.clear_selection();
        qualifier_18.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_18)) goto event_878_6_end;
        if (!((((Active*)get_single(qualifier_18, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_878_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(504, str_dirdown_1396)) < (2))) goto event_878_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(505, str_onunit_1397)) == (0))) goto event_878_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_878_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_878_6_end: ;
}
// Function purpose: generated callback event_func_2029 processes event block(s) 879_6. Actions/conditions:
//        879_6: sets Blocked to 1.
void Frames::event_func_2029()
{
    // event 879_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_879_6_end;
        playerBase_instances.clear_selection();
        qualifier_6.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_6)) goto event_879_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_879_6_end: ;
}
// Function purpose: generated callback event_func_2030 processes event block(s) 880_6. Actions/conditions:
//        880_6: sets Blocked to 1.
void Frames::event_func_2030()
{
    // event 880_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_880_6_end;
        playerBase_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_8)) goto event_880_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (1))) goto event_880_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_880_6_end: ;
}
// Function purpose: generated callback event_func_2031 processes event block(s) 881_6. Actions/conditions:
//        881_6: sets Blocked to 1.
void Frames::event_func_2031()
{
    // event 881_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_881_6_end;
        playerBase_instances.clear_selection();
        metaldetector_231_instances.clear_selection();
        if (!check_overlap(playerBase_instances, metaldetector_231_instances)) goto event_881_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) != (0))) goto event_881_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_881_6_end: ;
}
// Function purpose: generated callback event_func_2032 processes event block(s) 882_6. Actions/conditions:
//        882_6: sets Blocked to 1.
void Frames::event_func_2032()
{
    // event 882_6 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_882_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) != (0))) goto event_882_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(291, str_chippablewalls_967), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) != (-1))) goto event_882_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_882_6_end: ;
}
// Function purpose: generated callback event_func_2033 processes event block(s) 883_6. Actions/conditions:
//        883_6: checks scene is active; skips if the event-specific game state condition is met; game state Carrying;
//        this handler gates a game event without a direct value/.
void Frames::event_func_2033()
{
    // event 883_6 : checks scene is active; skips if the event-specific game state condition is met; game state Carrying; this handler gates a game event without a direct value/
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_883_6_end;
        playerBase_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_8)) goto event_883_6_end;
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!qualifier_8.has_selection()) goto event_883_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) != (1))) goto event_883_6_end;
        {
            loop_move_check_doors_running = true;
            int times = int(1);
            loop_move_check_doors_index = 0;
            while (loop_move_check_doors_index < times) {
                loop_move_check_doors_6();
                if (!loop_move_check_doors_running) break;
                loop_move_check_doors_index++;
            }
        }
    }
    event_883_6_end: ;
}
void Frames::loop_move_check_6()
{
    event_func_2020();
    event_func_2021();
    event_func_2022();
    event_func_2023();
    event_func_2024();
    event_func_2025();
    event_func_2026();
    event_func_2027();
    event_func_2028();
    event_func_2029();
    event_func_2030();
    event_func_2031();
    event_func_2032();
    event_func_2033();
}
// Function purpose: generated callback event_func_2034 processes event block(s) 3052_6. Actions/conditions:
//        3052_6: sets SpeakText to Misc entry 7; plays a sound or music track.
void Frames::event_func_2034()
{
    // event 3052_6 : sets SpeakText to Misc entry 7; plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3052_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) == (0))) goto event_3052_6_end;
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
            loop_dig_check_running = false;
    
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_3052_6_end: ;
}
// Function purpose: generated callback event_func_2035 processes event block(s) 3053_6. Actions/conditions:
//        3053_6: sets SpeakText to Misc entry 6; plays a sound or music track.
void Frames::event_func_2035()
{
    // event 3053_6 : sets SpeakText to Misc entry 6; plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3053_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) >= (100))) goto event_3053_6_end;
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
            loop_dig_check_running = false;
    
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_3053_6_end: ;
}
// Function purpose: generated callback event_func_2036 processes event block(s) 3054_6. Actions/conditions:
//        3054_6: sets Digging to 100; sets the object's animation to 12; sets the selected object's direction to
//        get_direction_int(selected object->x, selected object->y, cursor_178->x + 8, cursor_178->y + 8); plus 1 more
//        actions.
void Frames::event_func_2036()
{
    // event 3054_6 : sets Digging to 100; sets the object's animation to 12; sets the selected object's direction to get_direction_int(selected object->x, selected object->y, cursor_178->x + 8, cursor_178->y + 8); plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3054_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_3054_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) > (0))) goto event_3054_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(153, str_digging_726, 100);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(cursor_178_instances))->x + 8, ((Active*)get_instance(cursor_178_instances))->y + 8));
        }
        {
            loop_itemhp_running = true;
            int times = int(1);
            loop_itemhp_index = 0;
            while (loop_itemhp_index < times) {
                loop_itemhp_6();
                if (!loop_itemhp_running) break;
                loop_itemhp_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(402, str_actype_1216, ((INI*)get_instance(translationData_instances))->get_string(str_action_857, str_2_155));
        {
            loop_create_activity_box_running = true;
            int times = int(1);
            loop_create_activity_box_index = 0;
            while (loop_create_activity_box_index < times) {
                loop_create_activity_box_6();
                if (!loop_create_activity_box_running) break;
                loop_create_activity_box_index++;
            }
        }
    }
    event_3054_6_end: ;
}
void Frames::loop_dig_check_6()
{
    event_func_1692();
    event_func_2034();
    event_func_2035();
    event_func_2036();
}
// Function purpose: generated callback event_func_2037 processes event block(s) 4211_6. Actions/conditions:
//        4211_6: activates the Missions_+get_string(244, MissionType event group; sets Mission_Num to
//        1+randrange_event(gameVariables->get_value(506, FAV_GIVE_COUNT)); sets Mission_Num to
//        1+randrange_event(translationData->get_value_int(Count)); plus 7 more actions.
void Frames::event_func_2037()
{
    // event 4211_6 : activates the Missions_+get_string(244, MissionType event group; sets Mission_Num to 1+randrange_event(gameVariables->get_value(506, FAV_GIVE_COUNT)); sets Mission_Num to 1+randrange_event(translationData->get_value_int(Count)); plus 7 more actions
    {
        if (!(group_loops_1)) goto event_4211_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(135, str_mid_700)) != (-10))) goto event_4211_6_end;
        ((INI*)get_instance(translationData_instances))->set_group(str_missions_882+((AssociateArray*)get_instance(gameVariables_instances))->get_string(244, str_missiontype_883));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(245, str_mission_num_884, 1+randrange_event(((AssociateArray*)get_instance(gameVariables_instances))->get_value(506, str_fav_give_count_1398)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(245, str_mission_num_884, 1+randrange_event(((INI*)get_instance(translationData_instances))->get_value_int(str_count_885)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(translationData_instances))->get_string(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(245, str_mission_num_884))), str__254);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(247, str_missiontext_887, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(388, str_targtype_1189, str_inmate_1190);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(246, str_payout_886, 15);
        {
            loop_create_mission_item_running = true;
            int times = int(1);
            loop_create_mission_item_index = 0;
            while (loop_create_mission_item_index < times) {
                loop_create_mission_item_6();
                if (!loop_create_mission_item_running) break;
                loop_create_mission_item_index++;
            }
        }
    }
    event_4211_6_end: ;
}
// Function purpose: generated callback event_func_2038 processes event block(s) 4214_6. Actions/conditions:
//        4214_6: increments Payout by get_floor(((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(12)/MathHelper()/10); updates a value on the target
//        object.
void Frames::event_func_2038()
{
    // event 4214_6 : increments Payout by get_floor(((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(12)/MathHelper()/10); updates a value on the target object
    {
        if (!(group_loops_1)) goto event_4214_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(135, str_mid_700)) != (-10))) goto event_4214_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(135, str_mid_700)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_4214_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(246, str_payout_886, get_floor(((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(12)/MathHelper()/10));
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(2, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(247, str_missiontext_887)+str__254+((AssociateArray*)get_instance(gameVariables_instances))->get_string(244, str_missiontype_883)+str__254+number_to_string(((Active*)*it)->alterables->values.get(0))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(326, str_itemid_1110))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(246, str_payout_886)));
        }
    }
    event_4214_6_end: ;
}
void Frames::loop_create_mission_give_6()
{
    event_func_2037();
    event_func_1583();
    event_func_1582();
    event_func_2038();
}
// Function purpose: generated callback event_func_2039 processes event block(s) 1196_6. Actions/conditions:
//        1196_6: activates the SeeEscape_Call event group; sets CallX to
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x(); sets CallY to
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->get_y(); plus 8 more actions.
void Frames::event_func_2039()
{
    // event 1196_6 : activates the SeeEscape_Call event group; sets CallX to ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x(); sets CallY to ((Active*)get_single(inmateBase_instances, default_active_instance))->get_y(); plus 8 more actions
    {
        if (!(group_code_1)) goto event_1196_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1196_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(447, str_conlook_1314)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1196_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_seeescape_call_1399);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(408, str_callx_1224, ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(409, str_cally_1225, ((Active*)get_single(inmateBase_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(32, str_heat_495, 30);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
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
            loop_inmate_calls_guard_running = true;
            int times = int(1);
            loop_inmate_calls_guard_index = 0;
            while (loop_inmate_calls_guard_index < times) {
                loop_inmate_calls_guard_6();
                if (!loop_inmate_calls_guard_running) break;
                loop_inmate_calls_guard_index++;
            }
        }
    }
    event_1196_6_end: ;
}
void Frames::loop_inmate_bedsnitch_6()
{
    event_func_2039();
}
// Function purpose: generated callback event_func_2040 processes event block(s) 1102_6. Actions/conditions:
//        1102_6: activates the DropIt event group; increments Heat by 10*gameVariables->get_value(83,
//        NPClvl); sets the selected object's direction to get_direction_int(selected object->x, selected object->y,
//        playerBase->x + 0, playerBase->y + 0); plus 10 more actions.
void Frames::event_func_2040()
{
    // event 1102_6 : activates the DropIt event group; increments Heat by 10*gameVariables->get_value(83, NPClvl); sets the selected object's direction to get_direction_int(selected object->x, selected object->y, playerBase->x + 0, playerBase->y + 0); plus 10 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1102_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1102_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1102_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_dropit_1400);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(32, str_heat_495, 10*((AssociateArray*)get_instance(gameVariables_instances))->get_value(83, str_npclvl_587));
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(playerBase_instances))->x + 0, ((Active*)get_instance(playerBase_instances))->y + 0));
            ((Active*)*it)->get_movement()->stop(false);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(352, str_telloff_1145, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, str_drop_it_1401+((Active*)get_instance(playerBase_instances))->alterables->strings.get(0)+str__918);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(1+randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885)))));
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
    event_1102_6_end: ;
}
void Frames::loop_see_carry_6()
{
    event_func_2040();
    event_func_1320();
}
// Function purpose: generated callback event_func_2041 processes event block(s) 2656_6. Actions/conditions:
//        2656_6: removes the selected object.
void Frames::event_func_2041()
{
    // event 2656_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2656_6_end;
        buttontext_445_instances.clear_selection();
        for (ObjectIterator it(buttontext_445_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2656_6_end: ;
}
// Function purpose: generated callback event_func_2042 processes event block(s) 2657_6. Actions/conditions:
//        2657_6: sets the selected object's direction to 16; sets the selected object's text; sets J_page to 1; plus
//        8 more actions.
void Frames::event_func_2042()
{
    // event 2657_6 : sets the selected object's direction to 16; sets the selected object's text; sets J_page to 1; plus 8 more actions
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2657_6_end;
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_journal_1402, str_2_155)));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(483, str_j_page_1358, 1);
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(108, str_craftnotes_665), str__254);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(484, str_j_maxpages_1359, get_ceil((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get_count()+0.0)/MathHelper()/4));
        FrameObject * single_instance_2657_6_0; single_instance_2657_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buttontext_445(parent->x + -37, parent->y + 88), parent->layer);
                if (single_instance_2657_6_0 == NULL)
                    single_instance_2657_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_2657_6_0))->blend_color.set(Color(165, 165, 165));
        ((Text*)((Text*)single_instance_2657_6_0))->set_string(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(483, str_j_page_1358)));
        {
            loop_journal_craftnotes_running = true;
            int times = int(4);
            loop_journal_craftnotes_index = 0;
            while (loop_journal_craftnotes_index < times) {
                loop_journal_craftnotes_6();
                if (!loop_journal_craftnotes_running) break;
                loop_journal_craftnotes_index++;
            }
        }
    }
    event_2657_6_end: ;
}
void Frames::loop_load_journal_craftnotes_6()
{
    event_func_2041();
    event_func_2042();
}
// Function purpose: generated callback event_func_2043 processes event block(s) 3447_6. Actions/conditions:
//        3447_6: creates a damageto 252 object; sets the displayed text; stops the object's movement; plus 16 more
//        actions.
void Frames::event_func_2043()
{
    // event 3447_6 : creates a damageto 252 object; sets the displayed text; stops the object's movement; plus 16 more actions
    {
        if (!(group_code_1)) goto event_3447_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(380, str_targetz_1178)))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3447_6_end;
        FrameObject * single_instance_3447_6_0; single_instance_3447_6_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_damageto_252(parent->x + -10, parent->y + -10), parent->layer);
                if (single_instance_3447_6_0 == NULL)
                    single_instance_3447_6_0 = new_obj;
            }
        }
        ((TextBlitter*)((TextBlitter*)single_instance_3447_6_0))->set_text(str_50_1403);
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->set_x(((((Active*)*it)->get_x()/MathHelper()/16)*16)+8);
            ((Active*)*it)->set_y(((((Active*)*it)->get_y()/MathHelper()/16)*16)+8);
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(15, 0);
            ((Active*)*it)->alterables->values.set(16, -800);
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.set(24, 0);
            ((Active*)*it)->alterables->flags.disable(250);
            ((Active*)*it)->alterables->flags.disable(251);
            ((Active*)*it)->alterables->flags.disable(25);
            ((Active*)*it)->alterables->flags.disable(60);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_3447_6_end: ;
}
// Function purpose: generated callback event_func_2044 processes event block(s) 3448_6. Actions/conditions:
//        3448_6: sets the object's animation to 4.
void Frames::event_func_2044()
{
    // event 3448_6 : sets the object's animation to 4
    {
        if (!(group_code_1)) goto event_3448_6_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(380, str_targetz_1178)))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_3448_6_end;
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->force_animation(4);
        }
    }
    event_3448_6_end: ;
}
void Frames::loop_elec_him_6()
{
    event_func_2043();
    event_func_2044();
}
// Function purpose: generated callback event_func_2045 processes event block(s) 1330_6. Actions/conditions:
//        1330_6: plays a sound or music track.
void Frames::event_func_2045()
{
    // event 1330_6 : plays a sound or music track
    {
        if (!(group_code_1)) goto event_1330_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (0))) goto event_1330_6_end;
        media.play_id(SOUND_EN_HIT_7, 1-1);
    }
    event_1330_6_end: ;
}
// Function purpose: generated callback event_func_2046 processes event block(s) 1331_6. Actions/conditions:
//        1331_6: plays a sound or music track.
void Frames::event_func_2046()
{
    // event 1331_6 : plays a sound or music track
    {
        if (!(group_code_1)) goto event_1331_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (1))) goto event_1331_6_end;
        media.play_id(SOUND_HIT1_13, 1-1);
    }
    event_1331_6_end: ;
}
// Function purpose: generated callback event_func_2047 processes event block(s) 1332_6. Actions/conditions:
//        1332_6: plays a sound or music track.
void Frames::event_func_2047()
{
    // event 1332_6 : plays a sound or music track
    {
        if (!(group_code_1)) goto event_1332_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (2))) goto event_1332_6_end;
        media.play_id(SOUND_PUNCH_NEW_21, 1-1);
    }
    event_1332_6_end: ;
}
// Function purpose: generated callback event_func_2048 processes event block(s) 1333_6. Actions/conditions:
//        1333_6: adds a dust 223 instance; sets the selected object's horizontal position to
//        gameVariables->get_value(376, TargetX)-6; sets the selected object's vertical position to
//        gameVariables->get_value(377, TargetY)+6.
void Frames::event_func_2048()
{
    // event 1333_6 : adds a dust 223 instance; sets the selected object's horizontal position to gameVariables->get_value(376, TargetX)-6; sets the selected object's vertical position to gameVariables->get_value(377, TargetY)+6
    {
        if (!(group_code_1)) goto event_1333_6_end;
        dust_223_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dust_223(0, 0), 1);
            dust_223_instances.add_back();
        }
        for (ObjectIterator it(dust_223_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(376, str_targetx_1173)-6);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(377, str_targety_1174)+6);
        }
    }
    event_1333_6_end: ;
}
// Function purpose: generated callback event_func_2049 processes event block(s) 1334_6. Actions/conditions:
//        1334_6: adds a dust 223 instance; sets the selected object's horizontal position to
//        gameVariables->get_value(376, TargetX)+6; sets the selected object's vertical position to
//        gameVariables->get_value(377, TargetY)+6.
void Frames::event_func_2049()
{
    // event 1334_6 : adds a dust 223 instance; sets the selected object's horizontal position to gameVariables->get_value(376, TargetX)+6; sets the selected object's vertical position to gameVariables->get_value(377, TargetY)+6
    {
        if (!(group_code_1)) goto event_1334_6_end;
        dust_223_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dust_223(0, 0), 1);
            dust_223_instances.add_back();
        }
        for (ObjectIterator it(dust_223_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(376, str_targetx_1173)+6);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(377, str_targety_1174)+6);
        }
    }
    event_1334_6_end: ;
}
// Function purpose: generated callback event_func_2050 processes event block(s) 1335_6. Actions/conditions:
//        1335_6: adds a fx 185 instance; sets the selected object's horizontal position to
//        gameVariables->get_value(376, TargetX); sets the selected object's vertical position to
//        gameVariables->get_value(377, TargetY); plus 9 more actions.
void Frames::event_func_2050()
{
    // event 1335_6 : adds a fx 185 instance; sets the selected object's horizontal position to gameVariables->get_value(376, TargetX); sets the selected object's vertical position to gameVariables->get_value(377, TargetY); plus 9 more actions
    {
        if (!(group_code_1)) goto event_1335_6_end;
        fx_185_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fx_185(-16, -16), 1);
            fx_185_instances.add_back();
        }
        for (ObjectIterator it(fx_185_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(376, str_targetx_1173));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(377, str_targety_1174));
            ((Active*)*it)->set_direction(((AssociateArray*)get_instance(gameVariables_instances))->get_value(507, str_targettype_1404));
            ((Active*)*it)->destroy();
        }
        damageto_252_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_damageto_252(0, 0), 5);
            damageto_252_instances.add_back();
        }
        for (ObjectIterator it(damageto_252_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_text(str__1405+number_to_string(get_max(1, (((AssociateArray*)get_instance(gameVariables_instances))->get_value(508, str_dmg_done_1406)))));
            ((TextBlitter*)*it)->set_x((((AssociateArray*)get_instance(gameVariables_instances))->get_value(376, str_targetx_1173)-15)+randrange_event(10));
            ((TextBlitter*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(377, str_targety_1174)-20);
        }
    }
    event_1335_6_end: ;
}
void Frames::loop_hit_fx2_6()
{
    event_func_2045();
    event_func_2046();
    event_func_2047();
    event_func_2048();
    event_func_2049();
    event_func_2050();
}
// Function purpose: generated callback event_func_2051 processes event block(s) 1339_6. Actions/conditions:
//        1339_6: sets the selected object's horizontal position to gameVariables->get_value(370, foundX)+8;
//        sets the selected object's vertical position to gameVariables->get_value(371, foundY)+8.
void Frames::event_func_2051()
{
    // event 1339_6 : sets the selected object's horizontal position to gameVariables->get_value(370, foundX)+8; sets the selected object's vertical position to gameVariables->get_value(371, foundY)+8
    {
        if (!(group_code_1)) goto event_1339_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(380, str_targetz_1178)))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1339_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(370, str_foundx_1166)+8);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(371, str_foundy_1167)+8);
        }
    }
    event_1339_6_end: ;
}
void Frames::loop_laid_out_6()
{
    event_func_2051();
}
// Function purpose: generated callback event_func_2052 processes event block(s) 1272_6. Actions/conditions:
//        1272_6: changes a stored game value.
void Frames::event_func_2052()
{
    // event 1272_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_1272_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(5))))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1272_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 15);
        }
    }
    event_1272_6_end: ;
}
// Function purpose: generated callback event_func_2053 processes event block(s) 1273_6. Actions/conditions:
//        1273_6: sets the object's animation to 12; sets the selected object's direction to 16; sets the selected
//        object's visibility to true; plus 27 more actions.
void Frames::event_func_2053()
{
    // event 1273_6 : sets the object's animation to 12; sets the selected object's direction to 16; sets the selected object's visibility to true; plus 27 more actions
    {
        if (!(group_code_1)) goto event_1273_6_end;
        ((Active*)get_instance(dialogPanel_instances))->force_animation(12);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(416, str_m_cash_1234, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(417, str_m_done_1235, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(418, str_score_p_1236, 10);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(219, str_cash_11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(220, str_hsac_827, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(219, str_cash_11)*2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_45_1275));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_name_693, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_payout_1382, str__1132+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        dialogBodyText_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dialogBodyText(0, 0), 5);
            dialogBodyText_instances.add_back();
        }
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            if (parent == NULL) goto pos_end_1273_6_1;
            ((Text*)*it)->set_global_position(parent->get_x() + -110, parent->get_y() + -18);
            pos_end_1273_6_1: ;
        }
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->blend_color.set(Color(60, 60, 60));
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
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
        FrameObject * single_instance_1273_6_3; single_instance_1273_6_3 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 28, parent->y + 20), parent->layer);
                if (single_instance_1273_6_3 == NULL)
                    single_instance_1273_6_3 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1273_6_3))->force_animation(28);
        FrameObject * single_instance_1273_6_4; single_instance_1273_6_4 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_1273_6_3)->x + 3, ((Active*)single_instance_1273_6_3)->y + 3), ((Active*)single_instance_1273_6_3)->layer);
            if (single_instance_1273_6_4 == NULL)
                single_instance_1273_6_4 = new_obj;
        }
        ((Text*)((Text*)single_instance_1273_6_4))->blend_color.set(Color(98, 154, 3));
        ((Text*)((Text*)single_instance_1273_6_4))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_pausemenu_1094, str_1_97)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(142, str_del_missions_708, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(142, str_del_missions_708)+((ListObject*)get_instance(missions_298_instances))->get_line(loop_check_beat_mission_index+1)+str__346);
        {
            loop_favour_complete_running = true;
            int times = int(1);
            loop_favour_complete_index = 0;
            while (loop_favour_complete_index < times) {
                loop_favour_complete_6();
                if (!loop_favour_complete_running) break;
                loop_favour_complete_index++;
            }
        }
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
    }
    event_1273_6_end: ;
}
void Frames::loop_beat_mission_success_6()
{
    event_func_2052();
    event_func_2053();
}
// Function purpose: generated callback event_func_2054 processes event block(s) 1270_6. Actions/conditions:
//        1270_6: splits saved text into fields.
void Frames::event_func_2054()
{
    // event 1270_6 : splits saved text into fields
    {
        if (!(group_code_1)) goto event_1270_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((ListObject*)get_instance(missions_298_instances))->get_line(loop_check_beat_mission_index+1), str__254);
    }
    event_1270_6_end: ;
}
// Function purpose: generated callback event_func_2055 processes event block(s) 1271_6. Actions/conditions:
//        1271_6: plays a sound or music track.
void Frames::event_func_2055()
{
    // event 1271_6 : plays a sound or music track
    {
        if (!(group_code_1)) goto event_1271_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_beat_1232))) goto event_1271_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)) == (number_to_string(((Active*)get_instance(target_177_instances))->alterables->values.get(0))))) goto event_1271_6_end;
        media.play_id(SOUND_ACCOLADE_9, 1-1);
        {
            loop_beat_mission_success_running = true;
            int times = int(1);
            loop_beat_mission_success_index = 0;
            while (loop_beat_mission_success_index < times) {
                loop_beat_mission_success_6();
                if (!loop_beat_mission_success_running) break;
                loop_beat_mission_success_index++;
            }
        }
        {
            loop_beat_mission_del_running = true;
            int times = int(1);
            loop_beat_mission_del_index = 0;
            while (loop_beat_mission_del_index < times) {
                loop_beat_mission_del_6();
                if (!loop_beat_mission_del_running) break;
                loop_beat_mission_del_index++;
            }
        }
    }
    event_1271_6_end: ;
}
void Frames::loop_check_beat_mission_6()
{
    event_func_2054();
    event_func_2055();
}
// Function purpose: generated callback event_func_2056 processes event block(s) 1337_6. Actions/conditions:
//        1337_6: sets the selected object's numeric value to -2.
void Frames::event_func_2056()
{
    // event 1337_6 : sets the selected object's numeric value to -2
    {
        if (!(group_code_1)) goto event_1337_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(380, str_targetz_1178)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1337_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, -2);
        }
    }
    event_1337_6_end: ;
}
void Frames::loop_follower_kod_6()
{
    event_func_2056();
}
// Function purpose: generated callback event_func_2057 processes event block(s) 3444_6. Actions/conditions:
//        3444_6: creates a damageto 252 object; sets the displayed text.
void Frames::event_func_2057()
{
    // event 3444_6 : creates a damageto 252 object; sets the displayed text
    {
        if (!(group_code_1)) goto event_3444_6_end;
        FrameObject * single_instance_3444_6_0; single_instance_3444_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_damageto_252(parent->x + -10, parent->y + -10), parent->layer);
                if (single_instance_3444_6_0 == NULL)
                    single_instance_3444_6_0 = new_obj;
            }
        }
        ((TextBlitter*)((TextBlitter*)single_instance_3444_6_0))->set_text(str__1405+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(509, str_elecdmg_1407)));
    }
    event_3444_6_end: ;
}
// Function purpose: generated callback event_func_2058 processes event block(s) 3445_6. Actions/conditions:
//        3445_6: sets the object's animation to 4; changes a stored game value; plays a sound or music track.
void Frames::event_func_2058()
{
    // event 3445_6 : sets the object's animation to 4; changes a stored game value; plays a sound or music track
    {
        if (!(group_code_1)) goto event_3445_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(4);
        }
        ((Active*)get_instance(playerBase_instances))->alterables->values.sub(7, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(509, str_elecdmg_1407));
        media.play_id(SOUND_ELECTRIC_20, 1-1);
    }
    event_3445_6_end: ;
}
// Function purpose: generated callback event_func_2059 processes event block(s) 3446_6. Actions/conditions:
//        3446_6: sets ElecAnim to 1; sets the selected object's visibility to false.
void Frames::event_func_2059()
{
    // event 3446_6 : sets ElecAnim to 1; sets the selected object's visibility to false
    {
        if (!(group_code_1)) goto event_3446_6_end;
        qualifier_16.clear_selection();
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (-1))) { it.deselect(); continue; }
        }
        if (!qualifier_16.has_selection()) goto event_3446_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(510, str_elecanim_1408, 1);
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_3446_6_end: ;
}
void Frames::loop_elec_me_6()
{
    event_func_2057();
    event_func_2058();
    event_func_2059();
}
// Function purpose: generated callback event_func_2060 processes event block(s) 1323_6. Actions/conditions:
//        1323_6: sets the selected object's numeric value to 5.
void Frames::event_func_2060()
{
    // event 1323_6 : sets the selected object's numeric value to 5
    {
        if (!(group_code_1)) goto event_1323_6_end;
        ((Active*)get_instance(camera_202_instances))->alterables->values.set(0, 5);
        {
            loop_cancel_actions_running = true;
            int times = int(1);
            loop_cancel_actions_index = 0;
            while (loop_cancel_actions_index < times) {
                loop_cancel_actions_6();
                if (!loop_cancel_actions_running) break;
                loop_cancel_actions_index++;
            }
        }
    }
    event_1323_6_end: ;
}
// Function purpose: generated callback event_func_2061 processes event block(s) 1324_6. Actions/conditions:
//        1324_6: sets elecDmg to 50; sets electric to 1.
void Frames::event_func_2061()
{
    // event 1324_6 : sets elecDmg to 50; sets electric to 1
    {
        if (!(group_code_1)) goto event_1324_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_cansee_index+1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1324_6_end;
        if (!((global_strings->get(0)) == (str_irongate_148))) goto event_1324_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(509, str_elecdmg_1407, 50);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(511, str_electric_1409, 1);
        {
            loop_elec_me_running = true;
            int times = int(1);
            loop_elec_me_index = 0;
            while (loop_elec_me_index < times) {
                loop_elec_me_6();
                if (!loop_elec_me_running) break;
                loop_elec_me_index++;
            }
        }
    }
    event_1324_6_end: ;
}
// Function purpose: generated callback event_func_2062 processes event block(s) 1325_6. Actions/conditions:
//        1325_6: splits saved text into fields; sets DMG_done to 1+(gameVariables->get_value(512,
//        AttackerSTR)+gameVariables->get_value(513, AttWeap)); sets DMG_done to
//        gameVariables->get_value(508, DMG_done)-(itemData->get_value_int(stringtokenizer2_292->get(0),
//        Outfit)-1); plus 6 more actions.
void Frames::event_func_2062()
{
    // event 1325_6 : splits saved text into fields; sets DMG_done to 1+(gameVariables->get_value(512, AttackerSTR)+gameVariables->get_value(513, AttWeap)); sets DMG_done to gameVariables->get_value(508, DMG_done)-(itemData->get_value_int(stringtokenizer2_292->get(0), Outfit)-1); plus 6 more actions
    {
        if (!(group_code_1)) goto event_1325_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(511, str_electric_1409)) == (0))) goto event_1325_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(508, str_dmg_done_1406, 1+(((AssociateArray*)get_instance(gameVariables_instances))->get_value(512, str_attackerstr_1410)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(513, str_attweap_1411)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(508, str_dmg_done_1406, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(508, str_dmg_done_1406)-(((INI*)get_instance(itemData_instances))->get_value_int(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0), str_outfit_505)-1));
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(382, str_targethp_1180, get_max(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(508, str_dmg_done_1406)));
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(4, 130);
        ((Active*)get_instance(playerBase_instances))->alterables->values.sub(7, get_max(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(508, str_dmg_done_1406)));
    }
    event_1325_6_end: ;
}
// Function purpose: generated callback event_func_2063 processes event block(s) 1326_6. Actions/conditions:
//        1326_6: sets the selected object's numeric value to loop_cansee_index+1; sets the selected object's numeric
//        value to -2; changes a stored game value.
void Frames::event_func_2063()
{
    // event 1326_6 : sets the selected object's numeric value to loop_cansee_index+1; sets the selected object's numeric value to -2; changes a stored game value
    {
        if (!(group_code_1)) goto event_1326_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1326_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, loop_cansee_index+1);
            ((Active*)*it)->alterables->values.set(15, -2);
            ((Active*)*it)->alterables->values.sub(12, 3);
        }
    }
    event_1326_6_end: ;
}
void Frames::loop_smackt_ya_6()
{
    event_func_2060();
    event_func_2061();
    event_func_2062();
    event_func_2063();
}
// Function purpose: generated callback event_func_2064 processes event block(s) 1316_6. Actions/conditions:
//        1316_6: sets npc_electric to 0; sets the selected object's horizontal position to
//        gameVariables->get_value(376, TargetX); sets the selected object's vertical position to
//        gameVariables->get_value(377, TargetY).
void Frames::event_func_2064()
{
    // event 1316_6 : sets npc_electric to 0; sets the selected object's horizontal position to gameVariables->get_value(376, TargetX); sets the selected object's vertical position to gameVariables->get_value(377, TargetY)
    {
        if (!(group_code_1)) goto event_1316_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(514, str_npc_electric_1412, 0);
        ((Active*)get_instance(chaseob_258_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(376, str_targetx_1173));
        ((Active*)get_instance(chaseob_258_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(377, str_targety_1174));
    }
    event_1316_6_end: ;
}
// Function purpose: generated callback event_func_2065 processes event block(s) 1317_6. Actions/conditions:
//        1317_6: sets the selected object's direction to get_direction_int(selected object->x, selected object->y,
//        chaseob_258->x + 0, chaseob_258->y + 0); sets the selected object's numeric value to 55-(selected
//        object->alterables->values.get(9)/MathHelper()/3); stops the object's movement; plus 5 more actions.
void Frames::event_func_2065()
{
    // event 1317_6 : sets the selected object's direction to get_direction_int(selected object->x, selected object->y, chaseob_258->x + 0, chaseob_258->y + 0); sets the selected object's numeric value to 55-(selected object->alterables->values.get(9)/MathHelper()/3); stops the object's movement; plus 5 more actions
    {
        if (!(group_code_1)) goto event_1317_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_cansee_index+1))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1317_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(chaseob_258_instances))->x + 0, ((Active*)get_instance(chaseob_258_instances))->y + 0));
            ((Active*)*it)->alterables->values.set(3, 55-(((Active*)*it)->alterables->values.get(9)/MathHelper()/3));
            ((Active*)*it)->get_movement()->stop(false);
        }
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_weapon_460+number_to_string(loop_cansee_index+1)), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(513, str_attweap_1411, ((INI*)get_instance(itemData_instances))->get_value_int(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0), str_weapon_704));
    }
    event_1317_6_end: ;
}
// Function purpose: generated callback event_func_2066 processes event block(s) 1318_6. Actions/conditions:
//        1318_6: sets the object's animation to 6.
void Frames::event_func_2066()
{
    // event 1318_6 : sets the object's animation to 6
    {
        if (!(group_code_1)) goto event_1318_6_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_cansee_index+1))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_1318_6_end;
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->force_animation(6);
        }
    }
    event_1318_6_end: ;
}
// Function purpose: generated callback event_func_2067 processes event block(s) 1319_6. Actions/conditions:
//        1319_6: activates the Attacked event group; sets SpeakID to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(25); sets SpeakCol to 0; plus 1 more actions.
void Frames::event_func_2067()
{
    // event 1319_6 : activates the Attacked event group; sets SpeakID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25); sets SpeakCol to 0; plus 1 more actions
    {
        if (!(group_code_1)) goto event_1319_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(380, str_targetz_1178)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1319_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_attacked_1243);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
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
    }
    event_1319_6_end: ;
}
// Function purpose: generated callback event_func_2068 processes event block(s) 1320_6. Actions/conditions:
//        1320_6: sets elecDmg to 50; sets npc_electric to 1; changes a stored game value.
void Frames::event_func_2068()
{
    // event 1320_6 : sets elecDmg to 50; sets npc_electric to 1; changes a stored game value
    {
        if (!(group_code_1)) goto event_1320_6_end;
        if (!((global_strings->get(0)) == (str_irongate_148))) goto event_1320_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(380, str_targetz_1178)) > (0))) goto event_1320_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_cansee_index+1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1320_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(509, str_elecdmg_1407, 50);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(514, str_npc_electric_1412, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(382, str_targethp_1180, 50);
        {
            loop_elec_him_running = true;
            int times = int(1);
            loop_elec_him_index = 0;
            while (loop_elec_him_index < times) {
                loop_elec_him_6();
                if (!loop_elec_him_running) break;
                loop_elec_him_index++;
            }
        }
    }
    event_1320_6_end: ;
}
// Function purpose: generated callback event_func_2069 processes event block(s) 1321_6. Actions/conditions:
//        1321_6: splits saved text into fields; sets DMG_done to (gameVariables->get_value(512,
//        AttackerSTR)+gameVariables->get_value(513, AttWeap)); sets DMG_done to
//        gameVariables->get_value(508, DMG_done)-(itemData->get_value_int(stringtokenizer2_292->get(0),
//        Outfit)-1); plus 10 more actions.
void Frames::event_func_2069()
{
    // event 1321_6 : splits saved text into fields; sets DMG_done to (gameVariables->get_value(512, AttackerSTR)+gameVariables->get_value(513, AttWeap)); sets DMG_done to gameVariables->get_value(508, DMG_done)-(itemData->get_value_int(stringtokenizer2_292->get(0), Outfit)-1); plus 10 more actions
    {
        if (!(group_code_1)) goto event_1321_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(514, str_npc_electric_1412)) == (0))) goto event_1321_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(380, str_targetz_1178)) > (0))) goto event_1321_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(380, str_targetz_1178)))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1321_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_outfit_459+number_to_string(((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25))), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(508, str_dmg_done_1406, (((AssociateArray*)get_instance(gameVariables_instances))->get_value(512, str_attackerstr_1410)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(513, str_attweap_1411)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(508, str_dmg_done_1406, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(508, str_dmg_done_1406)-(((INI*)get_instance(itemData_instances))->get_value_int(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0), str_outfit_505)-1));
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(382, str_targethp_1180, get_max(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(508, str_dmg_done_1406)));
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, loop_cansee_index+1);
            ((Active*)*it)->alterables->values.set(4, 130);
            ((Active*)*it)->alterables->values.sub(7, get_max(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(508, str_dmg_done_1406)));
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->alterables->flags.disable(250);
            ((Active*)*it)->alterables->flags.disable(251);
        }
    }
    event_1321_6_end: ;
}
// Function purpose: generated callback event_func_2070 processes event block(s) 1322_6. Actions/conditions:
//        1322_6: sets electric to 0.
void Frames::event_func_2070()
{
    // event 1322_6 : sets electric to 0
    {
        if (!(group_code_1)) goto event_1322_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(380, str_targetz_1178)) == (-1))) goto event_1322_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(511, str_electric_1409, 0);
        {
            loop_smackt_ya_running = true;
            int times = int(1);
            loop_smackt_ya_index = 0;
            while (loop_smackt_ya_index < times) {
                loop_smackt_ya_6();
                if (!loop_smackt_ya_running) break;
                loop_smackt_ya_index++;
            }
        }
    }
    event_1322_6_end: ;
}
// Function purpose: generated callback event_func_2071 processes event block(s) 1327_6. Actions/conditions:
//        1327_6: sets a stored numeric value.
void Frames::event_func_2071()
{
    // event 1327_6 : sets a stored numeric value
    {
        if (!(group_code_1)) goto event_1327_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(515, str_inrange_1413, get_distance_int(((Active*)get_instance(playerBase_instances))->get_x(), ((Active*)get_instance(playerBase_instances))->get_y(), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(376, str_targetx_1173), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(377, str_targety_1174)));
    }
    event_1327_6_end: ;
}
// Function purpose: generated callback event_func_2072 processes event block(s) 1328_6. Actions/conditions:
//        1328_6: sets rnd to randrange_event(3).
void Frames::event_func_2072()
{
    // event 1328_6 : sets rnd to randrange_event(3)
    {
        if (!(group_code_1)) goto event_1328_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(511, str_electric_1409)) == (0))) goto event_1328_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(514, str_npc_electric_1412)) == (0))) goto event_1328_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1328_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(515, str_inrange_1413)) < (200))) goto event_1328_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(132, str_rnd_696, randrange_event(3));
        {
            loop_hit_fx2_running = true;
            int times = int(1);
            loop_hit_fx2_index = 0;
            while (loop_hit_fx2_index < times) {
                loop_hit_fx2_6();
                if (!loop_hit_fx2_running) break;
                loop_hit_fx2_index++;
            }
        }
    }
    event_1328_6_end: ;
}
// Function purpose: generated callback event_func_2073 processes event block(s) 1329_6. Actions/conditions:
//        1329_6: plays a sound or music track.
void Frames::event_func_2073()
{
    // event 1329_6 : plays a sound or music track
    {
        if (!(group_code_1)) goto event_1329_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(514, str_npc_electric_1412)) == (1))) goto event_1329_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1329_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(515, str_inrange_1413)) < (200))) goto event_1329_6_end;
        media.play_id(SOUND_ELECTRIC_20, 1-1);
    }
    event_1329_6_end: ;
}
// Function purpose: generated callback event_func_2074 processes event block(s) 1336_6. Actions/conditions:
//        1336_6: sets m_done to 0; sets del_missions to empty_string; sets m_cash to 0.
void Frames::event_func_2074()
{
    // event 1336_6 : sets m_done to 0; sets del_missions to empty_string; sets m_cash to 0
    {
        if (!(group_code_1)) goto event_1336_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(382, str_targethp_1180)) < (1))) goto event_1336_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_cansee_index+1))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1336_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(516, str_attackerp_1414)) == (-2))) goto event_1336_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(417, str_m_done_1235, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(142, str_del_missions_708, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(416, str_m_cash_1234, 0);
        {
            loop_follower_kod_running = true;
            int times = int(1);
            loop_follower_kod_index = 0;
            while (loop_follower_kod_index < times) {
                loop_follower_kod_6();
                if (!loop_follower_kod_running) break;
                loop_follower_kod_index++;
            }
        }
        {
            loop_check_beat_mission_running = true;
            int times = int(((ListObject*)get_instance(missions_298_instances))->get_count());
            loop_check_beat_mission_index = 0;
            while (loop_check_beat_mission_index < times) {
                loop_check_beat_mission_6();
                if (!loop_check_beat_mission_running) break;
                loop_check_beat_mission_index++;
            }
        }
    }
    event_1336_6_end: ;
}
// Function purpose: generated callback event_func_2075 processes event block(s) 1338_6. Actions/conditions:
//        1338_6: stops the object's movement; sets the selected object's numeric value to 0; sets the selected
//        object's numeric value to 0; plus 21 more actions.
void Frames::event_func_2075()
{
    // event 1338_6 : stops the object's movement; sets the selected object's numeric value to 0; sets the selected object's numeric value to 0; plus 21 more actions
    {
        if (!(group_code_1)) goto event_1338_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(514, str_npc_electric_1412)) == (0))) goto event_1338_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(382, str_targethp_1180)) < (1))) goto event_1338_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(380, str_targetz_1178)))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1338_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.set(24, 0);
            ((Active*)*it)->alterables->values.set(15, 0);
            ((Active*)*it)->alterables->values.set(16, -800);
            ((Active*)*it)->alterables->flags.disable(250);
            ((Active*)*it)->alterables->flags.disable(251);
            ((Active*)*it)->alterables->flags.disable(25);
            ((Active*)*it)->alterables->flags.disable(60);
            ((Active*)*it)->set_direction(24);
        }
    MoveIt::stop(qualifier_14);    FrameObject * single_instance_1338_6_0; single_instance_1338_6_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + -8, parent->y + 8), parent->layer);
                if (single_instance_1338_6_0 == NULL)
                    single_instance_1338_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1338_6_0))->set_layer(((Active*)get_single(qualifier_14, default_active_instance))->layer->index+1-1);
        FrameObject * single_instance_1338_6_1; single_instance_1338_6_1 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_1338_6_1 == NULL)
                    single_instance_1338_6_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1338_6_1))->set_layer(((Active*)get_single(qualifier_14, default_active_instance))->layer->index+1-1);
        FrameObject * single_instance_1338_6_2; single_instance_1338_6_2 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dizzy_467(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1338_6_2 == NULL)
                    single_instance_1338_6_2 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1338_6_2))->alterables->values.set(0, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25));
        media.play_id(SOUND_HIT_2, 1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(372, str_spacex_1168, ((((Active*)get_single(qualifier_14, default_active_instance))->get_x()/MathHelper()/16)*16));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(373, str_spacey_1169, ((((Active*)get_single(qualifier_14, default_active_instance))->get_y()/MathHelper()/16)*16));
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
        {
            loop_laid_out_running = true;
            int times = int(1);
            loop_laid_out_index = 0;
            while (loop_laid_out_index < times) {
                loop_laid_out_6();
                if (!loop_laid_out_running) break;
                loop_laid_out_index++;
            }
        }
    }
    event_1338_6_end: ;
}
// Function purpose: generated callback event_func_2076 processes event block(s) 1340_6. Actions/conditions:
//        1340_6: sets the object's animation to 8; sets the selected object's direction to 24.
void Frames::event_func_2076()
{
    // event 1340_6 : sets the object's animation to 8; sets the selected object's direction to 24
    {
        if (!(group_code_1)) goto event_1340_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(514, str_npc_electric_1412)) == (0))) goto event_1340_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(382, str_targethp_1180)) < (1))) goto event_1340_6_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(380, str_targetz_1178)))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(4)) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_1340_6_end;
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->set_direction(24);
        }
    }
    event_1340_6_end: ;
}
// Function purpose: generated callback event_func_2077 processes event block(s) 1341_6. Actions/conditions:
//        1341_6: stops the object's movement; sets the selected object's numeric value to 0; sets the selected
//        object's numeric value to 0; plus 6 more actions.
void Frames::event_func_2077()
{
    // event 1341_6 : stops the object's movement; sets the selected object's numeric value to 0; sets the selected object's numeric value to 0; plus 6 more actions
    {
        if (!(group_code_1)) goto event_1341_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(382, str_targethp_1180)) < (1))) goto event_1341_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(380, str_targetz_1178)))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1341_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.set(24, 0);
            ((Active*)*it)->alterables->flags.disable(250);
            ((Active*)*it)->alterables->flags.disable(251);
        }
    }
    event_1341_6_end: ;
}
// Function purpose: generated callback event_func_2078 processes event block(s) 1342_6. Actions/conditions:
//        1342_6: sets TargetZ to 0.
void Frames::event_func_2078()
{
    // event 1342_6 : sets TargetZ to 0
    {
        if (!(group_code_1)) goto event_1342_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(380, str_targetz_1178, 0);
    }
    event_1342_6_end: ;
}
