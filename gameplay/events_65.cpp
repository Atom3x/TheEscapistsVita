#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"
#include "aliases.h"

// Function purpose: generated callback event_func_5440 processes event block(s) 835_11. Actions/conditions:
//        835_11: sets CraftString to empty_string; sets CraftOutput to 82; sets Craft_GiveBack to 7.
void Frames::event_func_5440()
{
    // event 835_11 : sets CraftString to empty_string; sets CraftOutput to 82; sets Craft_GiveBack to 7
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_835_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_53_7_1601))) goto event_835_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 82);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(611, str_craft_giveback_1593, 7);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_835_11_end: ;
}
// Function purpose: generated callback event_func_5441 processes event block(s) 836_11. Actions/conditions:
//        836_11: sets CraftString to empty_string; sets CraftOutput to 83; sets Craft_GiveBack to 0.
void Frames::event_func_5441()
{
    // event 836_11 : sets CraftString to empty_string; sets CraftOutput to 83; sets Craft_GiveBack to 0
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_836_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_0_1_53_1602))) goto event_836_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 83);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(611, str_craft_giveback_1593, 0);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_836_11_end: ;
}
// Function purpose: generated callback event_func_5442 processes event block(s) 837_11. Actions/conditions:
//        837_11: sets CraftString to empty_string; sets CraftOutput to 89; sets Craft_GiveBack to 6.
void Frames::event_func_5442()
{
    // event 837_11 : sets CraftString to empty_string; sets CraftOutput to 89; sets Craft_GiveBack to 6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_837_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_53_6_1603))) goto event_837_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 89);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(611, str_craft_giveback_1593, 6);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_837_11_end: ;
}
// Function purpose: generated callback event_func_5443 processes event block(s) 838_11. Actions/conditions:
//        838_11: sets CraftString to empty_string; sets CraftOutput to 59; sets Craft_GiveBack to 43.
void Frames::event_func_5443()
{
    // event 838_11 : sets CraftString to empty_string; sets CraftOutput to 59; sets Craft_GiveBack to 43
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_838_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_43_53_1604))) goto event_838_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 59);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(611, str_craft_giveback_1593, 43);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_838_11_end: ;
}
// Function purpose: generated callback event_func_5444 processes event block(s) 839_11. Actions/conditions:
//        839_11: sets CraftString to empty_string; sets CraftOutput to 85.
void Frames::event_func_5444()
{
    // event 839_11 : sets CraftString to empty_string; sets CraftOutput to 85
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_839_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_82_84_1605))) goto event_839_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 85);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_839_11_end: ;
}
// Function purpose: generated callback event_func_5445 processes event block(s) 840_11. Actions/conditions:
//        840_11: sets CraftString to empty_string; sets CraftOutput to 86.
void Frames::event_func_5445()
{
    // event 840_11 : sets CraftString to empty_string; sets CraftOutput to 86
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_840_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_71_84_1606))) goto event_840_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 86);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_840_11_end: ;
}
// Function purpose: generated callback event_func_5446 processes event block(s) 841_11. Actions/conditions:
//        841_11: sets CraftString to empty_string; sets CraftOutput to 87.
void Frames::event_func_5446()
{
    // event 841_11 : sets CraftString to empty_string; sets CraftOutput to 87
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_841_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_83_84_1607))) goto event_841_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 87);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_841_11_end: ;
}
// Function purpose: generated callback event_func_5447 processes event block(s) 842_11. Actions/conditions:
//        842_11: sets CraftString to empty_string; sets CraftOutput to 88.
void Frames::event_func_5447()
{
    // event 842_11 : sets CraftString to empty_string; sets CraftOutput to 88
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_842_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_84_89_1608))) goto event_842_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 88);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_842_11_end: ;
}
// Function purpose: generated callback event_func_5448 processes event block(s) 843_11. Actions/conditions:
//        843_11: sets CraftString to empty_string; sets CraftOutput to 58.
void Frames::event_func_5448()
{
    // event 843_11 : sets CraftString to empty_string; sets CraftOutput to 58
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_843_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_59_84_1609))) goto event_843_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 58);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_843_11_end: ;
}
// Function purpose: generated callback event_func_5449 processes event block(s) 844_11. Actions/conditions:
//        844_11: sets CraftString to empty_string; sets CraftOutput to 128.
void Frames::event_func_5449()
{
    // event 844_11 : sets CraftString to empty_string; sets CraftOutput to 128
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_844_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_13_4_95_1610))) goto event_844_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 128);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_844_11_end: ;
}
// Function purpose: generated callback event_func_5450 processes event block(s) 845_11. Actions/conditions:
//        845_11: sets CraftString to empty_string; sets CraftOutput to 129.
void Frames::event_func_5450()
{
    // event 845_11 : sets CraftString to empty_string; sets CraftOutput to 129
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_845_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_13_4_50_1611))) goto event_845_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 129);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_845_11_end: ;
}
// Function purpose: generated callback event_func_5451 processes event block(s) 846_11. Actions/conditions:
//        846_11: sets CraftString to empty_string; sets CraftOutput to 130.
void Frames::event_func_5451()
{
    // event 846_11 : sets CraftString to empty_string; sets CraftOutput to 130
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_846_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_13_4_76_1612))) goto event_846_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 130);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_846_11_end: ;
}
// Function purpose: generated callback event_func_5452 processes event block(s) 847_11. Actions/conditions:
//        847_11: sets CraftString to empty_string; sets CraftOutput to 142.
void Frames::event_func_5452()
{
    // event 847_11 : sets CraftString to empty_string; sets CraftOutput to 142
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_847_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_127_13_95_1613))) goto event_847_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 142);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_847_11_end: ;
}
// Function purpose: generated callback event_func_5453 processes event block(s) 848_11. Actions/conditions:
//        848_11: sets CraftString to empty_string; sets CraftOutput to 143.
void Frames::event_func_5453()
{
    // event 848_11 : sets CraftString to empty_string; sets CraftOutput to 143
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_848_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_127_13_50_1614))) goto event_848_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 143);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_848_11_end: ;
}
// Function purpose: generated callback event_func_5454 processes event block(s) 849_11. Actions/conditions:
//        849_11: sets CraftString to empty_string; sets CraftOutput to 144.
void Frames::event_func_5454()
{
    // event 849_11 : sets CraftString to empty_string; sets CraftOutput to 144
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_849_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_127_13_76_1615))) goto event_849_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 144);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_849_11_end: ;
}
// Function purpose: generated callback event_func_5455 processes event block(s) 850_11. Actions/conditions:
//        850_11: sets CraftString to empty_string; sets CraftOutput to 182.
void Frames::event_func_5455()
{
    // event 850_11 : sets CraftString to empty_string; sets CraftOutput to 182
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_850_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_12_13_1616))) goto event_850_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 182);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_850_11_end: ;
}
// Function purpose: generated callback event_func_5456 processes event block(s) 851_11. Actions/conditions:
//        851_11: sets CraftString to empty_string; sets CraftOutput to 183.
void Frames::event_func_5456()
{
    // event 851_11 : sets CraftString to empty_string; sets CraftOutput to 183
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_851_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_12_13_179_1617))) goto event_851_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 183);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_851_11_end: ;
}
// Function purpose: generated callback event_func_5457 processes event block(s) 852_11. Actions/conditions:
//        852_11: sets CraftString to empty_string; sets CraftOutput to 124.
void Frames::event_func_5457()
{
    // event 852_11 : sets CraftString to empty_string; sets CraftOutput to 124
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_852_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_17_94_1618))) goto event_852_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 124);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_852_11_end: ;
}
// Function purpose: generated callback event_func_5458 processes event block(s) 853_11. Actions/conditions:
//        853_11: sets CraftString to empty_string; sets CraftOutput to 19; sets DontAddToCraftNotes to 1.
void Frames::event_func_5458()
{
    // event 853_11 : sets CraftString to empty_string; sets CraftOutput to 19; sets DontAddToCraftNotes to 1
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_853_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_13_18_1619))) goto event_853_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 19);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_853_11_end: ;
}
// Function purpose: generated callback event_func_5459 processes event block(s) 854_11. Actions/conditions:
//        854_11: sets CraftString to empty_string; sets CraftOutput to 103.
void Frames::event_func_5459()
{
    // event 854_11 : sets CraftString to empty_string; sets CraftOutput to 103
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_854_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_48_74_1620))) goto event_854_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 103);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_854_11_end: ;
}
// Function purpose: generated callback event_func_5460 processes event block(s) 855_11. Actions/conditions:
//        855_11: sets CraftString to empty_string; sets CraftOutput to 104.
void Frames::event_func_5460()
{
    // event 855_11 : sets CraftString to empty_string; sets CraftOutput to 104
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_855_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_73_74_1621))) goto event_855_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 104);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_855_11_end: ;
}
// Function purpose: generated callback event_func_5461 processes event block(s) 856_11. Actions/conditions:
//        856_11: sets CraftString to empty_string; sets CraftOutput to 110.
void Frames::event_func_5461()
{
    // event 856_11 : sets CraftString to empty_string; sets CraftOutput to 110
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_856_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_12_94_98_1622))) goto event_856_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 110);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_856_11_end: ;
}
// Function purpose: generated callback event_func_5462 processes event block(s) 857_11. Actions/conditions:
//        857_11: sets CraftString to empty_string; sets CraftOutput to 111.
void Frames::event_func_5462()
{
    // event 857_11 : sets CraftString to empty_string; sets CraftOutput to 111
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_857_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_13_94_1623))) goto event_857_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 111);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_857_11_end: ;
}
// Function purpose: generated callback event_func_5463 processes event block(s) 858_11. Actions/conditions:
//        858_11: sets CraftString to empty_string; sets CraftOutput to 108.
void Frames::event_func_5463()
{
    // event 858_11 : sets CraftString to empty_string; sets CraftOutput to 108
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_858_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_12_12_98_1624))) goto event_858_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 108);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_858_11_end: ;
}
// Function purpose: generated callback event_func_5464 processes event block(s) 859_11. Actions/conditions:
//        859_11: sets CraftString to empty_string; sets CraftOutput to 105.
void Frames::event_func_5464()
{
    // event 859_11 : sets CraftString to empty_string; sets CraftOutput to 105
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_859_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_46_8_90_1625))) goto event_859_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 105);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_859_11_end: ;
}
// Function purpose: generated callback event_func_5465 processes event block(s) 860_11. Actions/conditions:
//        860_11: sets CraftString to empty_string; sets CraftOutput to 186.
void Frames::event_func_5465()
{
    // event 860_11 : sets CraftString to empty_string; sets CraftOutput to 186
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_860_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_24_73_98_1627))) goto event_860_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 186);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_860_11_end: ;
}
// Function purpose: generated callback event_func_5466 processes event block(s) 861_11. Actions/conditions:
//        861_11: sets CraftString to empty_string; sets CraftOutput to 185.
void Frames::event_func_5466()
{
    // event 861_11 : sets CraftString to empty_string; sets CraftOutput to 185
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_861_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_158_158_158_1628))) goto event_861_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 185);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_861_11_end: ;
}
// Function purpose: generated callback event_func_5467 processes event block(s) 862_11. Actions/conditions:
//        862_11: sets CraftString to empty_string; sets CraftOutput to 181.
void Frames::event_func_5467()
{
    // event 862_11 : sets CraftString to empty_string; sets CraftOutput to 181
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_862_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_13_39_5_1629))) goto event_862_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 181);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_862_11_end: ;
}
// Function purpose: generated callback event_func_5468 processes event block(s) 863_11. Actions/conditions:
//        863_11: sets CraftString to empty_string; sets CraftOutput to 122.
void Frames::event_func_5468()
{
    // event 863_11 : sets CraftString to empty_string; sets CraftOutput to 122
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_863_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_12_62_1630))) goto event_863_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 122);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_863_11_end: ;
}
// Function purpose: generated callback event_func_5469 processes event block(s) 864_11. Actions/conditions:
//        864_11: sets CraftString to empty_string; sets CraftOutput to 112.
void Frames::event_func_5469()
{
    // event 864_11 : sets CraftString to empty_string; sets CraftOutput to 112
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_864_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_13_25_25_1631))) goto event_864_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 112);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_864_11_end: ;
}
// Function purpose: generated callback event_func_5470 processes event block(s) 865_11. Actions/conditions:
//        865_11: sets CraftString to empty_string; sets CraftOutput to 113.
void Frames::event_func_5470()
{
    // event 865_11 : sets CraftString to empty_string; sets CraftOutput to 113
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_865_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_112_44_1632))) goto event_865_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 113);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_865_11_end: ;
}
// Function purpose: generated callback event_func_5471 processes event block(s) 866_11. Actions/conditions:
//        866_11: sets CraftString to empty_string; sets CraftOutput to 115.
void Frames::event_func_5471()
{
    // event 866_11 : sets CraftString to empty_string; sets CraftOutput to 115
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_866_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_122_13_76_1633))) goto event_866_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 115);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_866_11_end: ;
}
// Function purpose: generated callback event_func_5472 processes event block(s) 867_11. Actions/conditions:
//        867_11: sets CraftString to empty_string; sets CraftOutput to 114.
void Frames::event_func_5472()
{
    // event 867_11 : sets CraftString to empty_string; sets CraftOutput to 114
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_867_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_115_13_76_1634))) goto event_867_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 114);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_867_11_end: ;
}
// Function purpose: generated callback event_func_5473 processes event block(s) 868_11. Actions/conditions:
//        868_11: sets CraftString to empty_string; sets CraftOutput to 5.
void Frames::event_func_5473()
{
    // event 868_11 : sets CraftString to empty_string; sets CraftOutput to 5
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_868_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_114_13_76_1635))) goto event_868_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 5);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_868_11_end: ;
}
// Function purpose: generated callback event_func_5474 processes event block(s) 869_11. Actions/conditions:
//        869_11: sets CraftString to empty_string; sets CraftOutput to 5.
void Frames::event_func_5474()
{
    // event 869_11 : sets CraftString to empty_string; sets CraftOutput to 5
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_869_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_13_5_76_1636))) goto event_869_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 5);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_869_11_end: ;
}
// Function purpose: generated callback event_func_5475 processes event block(s) 870_11. Actions/conditions:
//        870_11: sets CraftString to empty_string; sets CraftOutput to 54.
void Frames::event_func_5475()
{
    // event 870_11 : sets CraftString to empty_string; sets CraftOutput to 54
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_870_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_73_98_1637))) goto event_870_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 54);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_870_11_end: ;
}
// Function purpose: generated callback event_func_5476 processes event block(s) 871_11. Actions/conditions:
//        871_11: sets CraftString to empty_string; sets CraftOutput to 118.
void Frames::event_func_5476()
{
    // event 871_11 : sets CraftString to empty_string; sets CraftOutput to 118
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_871_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_122_13_25_1638))) goto event_871_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 118);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_871_11_end: ;
}
// Function purpose: generated callback event_func_5477 processes event block(s) 872_11. Actions/conditions:
//        872_11: sets CraftString to empty_string; sets CraftOutput to 119.
void Frames::event_func_5477()
{
    // event 872_11 : sets CraftString to empty_string; sets CraftOutput to 119
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_872_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_118_12_13_1639))) goto event_872_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 119);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_872_11_end: ;
}
// Function purpose: generated callback event_func_5478 processes event block(s) 873_11. Actions/conditions:
//        873_11: sets CraftString to empty_string; sets CraftOutput to 39.
void Frames::event_func_5478()
{
    // event 873_11 : sets CraftString to empty_string; sets CraftOutput to 39
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_873_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_119_12_13_1640))) goto event_873_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 39);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_873_11_end: ;
}
// Function purpose: generated callback event_func_5479 processes event block(s) 874_11. Actions/conditions:
//        874_11: sets CraftString to empty_string; sets CraftOutput to 39.
void Frames::event_func_5479()
{
    // event 874_11 : sets CraftString to empty_string; sets CraftOutput to 39
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_874_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_12_13_39_1641))) goto event_874_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 39);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_874_11_end: ;
}
// Function purpose: generated callback event_func_5480 processes event block(s) 875_11. Actions/conditions:
//        875_11: sets CraftString to empty_string; sets CraftOutput to 120.
void Frames::event_func_5480()
{
    // event 875_11 : sets CraftString to empty_string; sets CraftOutput to 120
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_875_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_13_62_62_1642))) goto event_875_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 120);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_875_11_end: ;
}
// Function purpose: generated callback event_func_5481 processes event block(s) 876_11. Actions/conditions:
//        876_11: sets CraftString to empty_string; sets CraftOutput to 61.
void Frames::event_func_5481()
{
    // event 876_11 : sets CraftString to empty_string; sets CraftOutput to 61
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_876_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_121_13_62_1643))) goto event_876_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 61);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_876_11_end: ;
}
// Function purpose: generated callback event_func_5482 processes event block(s) 877_11. Actions/conditions:
//        877_11: sets CraftString to empty_string; sets CraftOutput to 121.
void Frames::event_func_5482()
{
    // event 877_11 : sets CraftString to empty_string; sets CraftOutput to 121
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_877_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_120_13_62_1644))) goto event_877_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 121);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_877_11_end: ;
}
// Function purpose: generated callback event_func_5483 processes event block(s) 878_11. Actions/conditions:
//        878_11: sets CraftString to empty_string; sets CraftOutput to 121.
void Frames::event_func_5483()
{
    // event 878_11 : sets CraftString to empty_string; sets CraftOutput to 121
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_878_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_121_13_62_1643))) goto event_878_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 121);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_878_11_end: ;
}
// Function purpose: generated callback event_func_5484 processes event block(s) 879_11. Actions/conditions:
//        879_11: sets CraftString to empty_string; sets CraftOutput to 180.
void Frames::event_func_5484()
{
    // event 879_11 : sets CraftString to empty_string; sets CraftOutput to 180
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_879_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_13_179_179_1648))) goto event_879_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 180);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_879_11_end: ;
}
// Function purpose: generated callback event_func_5485 processes event block(s) 880_11. Actions/conditions:
//        880_11: sets CraftString to empty_string; sets CraftOutput to 174.
void Frames::event_func_5485()
{
    // event 880_11 : sets CraftString to empty_string; sets CraftOutput to 174
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_880_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_98_98_98_1649))) goto event_880_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 174);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_880_11_end: ;
}
// Function purpose: generated callback event_func_5486 processes event block(s) 881_11. Actions/conditions:
//        881_11: sets CraftString to empty_string; sets CraftOutput to 153.
void Frames::event_func_5486()
{
    // event 881_11 : sets CraftString to empty_string; sets CraftOutput to 153
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_881_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_150_152_36_1650))) goto event_881_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 153);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_881_11_end: ;
}
// Function purpose: generated callback event_func_5487 processes event block(s) 882_11. Actions/conditions:
//        882_11: sets CraftString to empty_string; splits saved text into fields; sets CraftOutput to
//        string_to_number(stringtokenizer2_292->get(randrange_event(stringtokenizer2_292->get_count()))); plus 1 more
//        actions.
void Frames::event_func_5487()
{
    // event 882_11 : sets CraftString to empty_string; splits saved text into fields; sets CraftOutput to string_to_number(stringtokenizer2_292->get(randrange_event(stringtokenizer2_292->get_count()))); plus 1 more actions
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_882_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_137_137_137_1651))) goto event_882_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(str_132_133_134_135_74_1652, str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_882_11_end: ;
}
// Function purpose: generated callback event_func_5488 processes event block(s) 883_11. Actions/conditions:
//        883_11: sets CraftString to empty_string; sets CraftOutput to 126.
void Frames::event_func_5488()
{
    // event 883_11 : sets CraftString to empty_string; sets CraftOutput to 126
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_883_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_69_95_95_1655))) goto event_883_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 126);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_883_11_end: ;
}
// Function purpose: generated callback event_func_5489 processes event block(s) 884_11. Actions/conditions:
//        884_11: sets CraftString to empty_string; sets CraftOutput to 125.
void Frames::event_func_5489()
{
    // event 884_11 : sets CraftString to empty_string; sets CraftOutput to 125
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_884_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_100_13_1656))) goto event_884_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 125);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_884_11_end: ;
}
// Function purpose: generated callback event_func_5490 processes event block(s) 885_11. Actions/conditions:
//        885_11: sets CraftString to empty_string; sets CraftOutput to 116.
void Frames::event_func_5490()
{
    // event 885_11 : sets CraftString to empty_string; sets CraftOutput to 116
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_885_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_101_101_36_1658))) goto event_885_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 116);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_885_11_end: ;
}
// Function purpose: generated callback event_func_5491 processes event block(s) 886_11. Actions/conditions:
//        886_11: sets CraftString to empty_string; sets CraftOutput to 117.
void Frames::event_func_5491()
{
    // event 886_11 : sets CraftString to empty_string; sets CraftOutput to 117
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_886_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_101_101_1659))) goto event_886_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 117);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_886_11_end: ;
}
// Function purpose: generated callback event_func_5492 processes event block(s) 887_11. Actions/conditions:
//        887_11: sets CraftString to empty_string; sets CraftOutput to 38.
void Frames::event_func_5492()
{
    // event 887_11 : sets CraftString to empty_string; sets CraftOutput to 38
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_887_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_37_4_1660))) goto event_887_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 38);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_887_11_end: ;
}
// Function purpose: generated callback event_func_5493 processes event block(s) 888_11. Actions/conditions:
//        888_11: sets CraftString to empty_string; sets CraftOutput to 38.
void Frames::event_func_5493()
{
    // event 888_11 : sets CraftString to empty_string; sets CraftOutput to 38
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_888_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_3_37_1661))) goto event_888_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 38);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_888_11_end: ;
}
// Function purpose: generated callback event_func_5494 processes event block(s) 889_11. Actions/conditions:
//        889_11: sets CraftString to empty_string; sets CraftOutput to 38.
void Frames::event_func_5494()
{
    // event 889_11 : sets CraftString to empty_string; sets CraftOutput to 38
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_889_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_127_37_1662))) goto event_889_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 38);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_889_11_end: ;
}
// Function purpose: generated callback event_func_5495 processes event block(s) 890_11. Actions/conditions:
//        890_11: sets CraftString to empty_string; sets CraftOutput to 75.
void Frames::event_func_5495()
{
    // event 890_11 : sets CraftString to empty_string; sets CraftOutput to 75
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_890_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_12_12_12_1663))) goto event_890_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 75);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_890_11_end: ;
}
// Function purpose: generated callback event_func_5496 processes event block(s) 891_11. Actions/conditions:
//        891_11: sets CraftString to empty_string; sets CraftOutput to 72.
void Frames::event_func_5496()
{
    // event 891_11 : sets CraftString to empty_string; sets CraftOutput to 72
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_891_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_12_12_1664))) goto event_891_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 72);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_891_11_end: ;
}
// Function purpose: generated callback event_func_5497 processes event block(s) 892_11. Actions/conditions:
//        892_11: sets CraftString to empty_string; sets CraftOutput to 3.
void Frames::event_func_5497()
{
    // event 892_11 : sets CraftString to empty_string; sets CraftOutput to 3
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_892_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_36_38_1665))) goto event_892_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 3);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_892_11_end: ;
}
// Function purpose: generated callback event_func_5498 processes event block(s) 893_11. Actions/conditions:
//        893_11: sets CraftString to empty_string; sets CraftOutput to 53.
void Frames::event_func_5498()
{
    // event 893_11 : sets CraftString to empty_string; sets CraftOutput to 53
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_893_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_45_52_1666))) goto event_893_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 53);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_893_11_end: ;
}
// Function purpose: generated callback event_func_5499 processes event block(s) 894_11. Actions/conditions:
//        894_11: sets CraftString to empty_string; sets CraftOutput to 84.
void Frames::event_func_5499()
{
    // event 894_11 : sets CraftString to empty_string; sets CraftOutput to 84
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_894_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_17_8_1667))) goto event_894_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 84);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_894_11_end: ;
}
// Function purpose: generated callback event_func_5500 processes event block(s) 895_11. Actions/conditions:
//        895_11: sets CraftString to empty_string; sets CraftOutput to 84.
void Frames::event_func_5500()
{
    // event 895_11 : sets CraftString to empty_string; sets CraftOutput to 84
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_895_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_8_96_1668))) goto event_895_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 84);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_895_11_end: ;
}
// Function purpose: generated callback event_func_5501 processes event block(s) 896_11. Actions/conditions:
//        896_11: sets CraftString to empty_string; sets CraftOutput to 81.
void Frames::event_func_5501()
{
    // event 896_11 : sets CraftString to empty_string; sets CraftOutput to 81
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_896_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_69_69_1669))) goto event_896_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 81);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_896_11_end: ;
}
// Function purpose: generated callback event_func_5502 processes event block(s) 897_11. Actions/conditions:
//        897_11: sets CraftString to empty_string; sets CraftOutput to 99.
void Frames::event_func_5502()
{
    // event 897_11 : sets CraftString to empty_string; sets CraftOutput to 99
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_897_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_13_15_1670))) goto event_897_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 99);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_897_11_end: ;
}
// Function purpose: generated callback event_func_5503 processes event block(s) 898_11. Actions/conditions:
//        898_11: sets CraftString to empty_string; sets CraftOutput to 102.
void Frames::event_func_5503()
{
    // event 898_11 : sets CraftString to empty_string; sets CraftOutput to 102
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_898_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_36_90_93_1671))) goto event_898_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 102);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_898_11_end: ;
}
// Function purpose: generated callback event_func_5504 processes event block(s) 899_11. Actions/conditions:
//        899_11: sets CraftString to empty_string; sets CraftOutput to 107.
void Frames::event_func_5504()
{
    // event 899_11 : sets CraftString to empty_string; sets CraftOutput to 107
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_899_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_101_36_2455))) goto event_899_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 107);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_899_11_end: ;
}
// Function purpose: generated callback event_func_5505 processes event block(s) 900_11. Actions/conditions:
//        900_11: sets CraftString to empty_string; sets CraftOutput to 101.
void Frames::event_func_5505()
{
    // event 900_11 : sets CraftString to empty_string; sets CraftOutput to 101
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_900_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_47_51_1672))) goto event_900_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 101);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_900_11_end: ;
}
// Function purpose: generated callback event_func_5506 processes event block(s) 901_11. Actions/conditions:
//        901_11: sets CraftString to empty_string; sets CraftOutput to 101.
void Frames::event_func_5506()
{
    // event 901_11 : sets CraftString to empty_string; sets CraftOutput to 101
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_901_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_157_51_1673))) goto event_901_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 101);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_11();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_901_11_end: ;
}
void Frames::loop_craftsum_11()
{
    event_func_2432();
    event_func_2433();
    event_func_2434();
    event_func_2435();
    event_func_5439();
    event_func_5440();
    event_func_5441();
    event_func_5442();
    event_func_5443();
    event_func_5444();
    event_func_5445();
    event_func_5446();
    event_func_5447();
    event_func_5448();
    event_func_5449();
    event_func_5450();
    event_func_5451();
    event_func_5452();
    event_func_5453();
    event_func_5454();
    event_func_5455();
    event_func_5456();
    event_func_5457();
    event_func_5458();
    event_func_5459();
    event_func_5460();
    event_func_5461();
    event_func_5462();
    event_func_5463();
    event_func_5464();
    event_func_5465();
    event_func_5466();
    event_func_5467();
    event_func_5468();
    event_func_5469();
    event_func_5470();
    event_func_5471();
    event_func_5472();
    event_func_5473();
    event_func_5474();
    event_func_5475();
    event_func_5476();
    event_func_5477();
    event_func_5478();
    event_func_5479();
    event_func_5480();
    event_func_5481();
    event_func_5482();
    event_func_5483();
    event_func_5484();
    event_func_5485();
    event_func_5486();
    event_func_5487();
    event_func_5488();
    event_func_5489();
    event_func_5490();
    event_func_5491();
    event_func_5492();
    event_func_5493();
    event_func_5494();
    event_func_5495();
    event_func_5496();
    event_func_5497();
    event_func_5498();
    event_func_5499();
    event_func_5500();
    event_func_5501();
    event_func_5502();
    event_func_5503();
    event_func_5504();
    event_func_5505();
    event_func_5506();
}
// Function purpose: generated callback event_func_5507 processes event block(s) 825_11. Actions/conditions:
//        825_11: sets c1 to -1; sets c2 to -1; sets c3 to -1.
void Frames::event_func_5507()
{
    // event 825_11 : sets c1 to -1; sets c2 to -1; sets c3 to -1
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_825_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craft_output_1121))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_825_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(614, str_c1_1596, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(615, str_c2_1597, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(616, str_c3_1598, -1);
        {
            loop_craftsum_running = true;
            int times = int(1);
            loop_craftsum_index = 0;
            while (loop_craftsum_index < times) {
                loop_craftsum_11();
                if (!loop_craftsum_running) break;
                loop_craftsum_index++;
            }
        }
    }
    event_825_11_end: ;
}
void Frames::loop_craft_check_11()
{
    event_func_2535();
    event_func_5507();
}
// Function purpose: generated callback event_func_5508 processes event block(s) 1477_11. Actions/conditions:
//        1477_11: adds a dchar 214 instance; sets the selected object's text; updates a value on the target object;
//        plus 5 more actions.
void Frames::event_func_5508()
{
    // event 1477_11 : adds a dchar 214 instance; sets the selected object's text; updates a value on the target object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1477_11_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1477_11_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_688(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(((AssociateArray*)get_instance(gameVariables_instances))->get_value(88, str_fontcolor_595));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+6);
        }
    }
    event_1477_11_end: ;
}
// Function purpose: generated callback event_func_5509 processes event block(s) 1479_11. Actions/conditions:
//        1479_11: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 5 more actions.
void Frames::event_func_5509()
{
    // event 1479_11 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 5 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1479_11_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_688(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_11_331)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+13);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
    }
    event_1479_11_end: ;
}
void Frames::loop_npc_tab_stats_name_11()
{
    event_func_2263();
    event_func_5508();
    event_func_2265();
    event_func_5509();
}
// Function purpose: generated callback event_func_5510 processes event block(s) 1192_11. Actions/conditions:
//        1192_11: sets the selected object's numeric value to 1; sets the object position in the world; sets the
//        selected object's string to NPC_give; plus 6 more actions.
void Frames::event_func_5510()
{
    // event 1192_11 : sets the selected object's numeric value to 1; sets the object position in the world; sets the selected object's string to NPC_give; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1192_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(368, str_currentinvslot_1162)))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_1192_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_give_1349))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_1192_11_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_1192_11_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1192_11_0: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
            ((Active*)*it)->alterables->strings.set(0, str_npc_give_1349);
            ((Active*)*it)->set_scale(2);
            ((Active*)*it)->alterables->flags.enable(-5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(368, str_currentinvslot_1162)), empty_string);
    }
    event_1192_11_end: ;
}
void Frames::loop_give_npc_11()
{
    event_func_5510();
}
// Function purpose: generated callback event_func_5511 processes event block(s) 1191_11. Actions/conditions:
//        1191_11: checks scene is active; skips if the event-specific game state condition is met; this handler gates
//        a game event without a direct value/object action.
void Frames::event_func_5511()
{
    // event 1191_11 : checks scene is active; skips if the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1191_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_give_1349))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_1191_11_end;
        {
            loop_give_npc_running = true;
            int times = int(1);
            loop_give_npc_index = 0;
            while (loop_give_npc_index < times) {
                loop_give_npc_11();
                if (!loop_give_npc_running) break;
                loop_give_npc_index++;
            }
        }
    }
    event_1191_11_end: ;
}
void Frames::loop_give_npc_check_11()
{
    event_func_5511();
}
// Function purpose: generated callback event_func_5512 processes event block(s) 1574_11. Actions/conditions:
//        1574_11: sets source to Misc entry 25; sets a game or interface text string; sets Des_Msg to
//        gameVariables->get_string(81, source); plus 5 more actions.
void Frames::event_func_5512()
{
    // event 1574_11 : sets source to Misc entry 25; sets a game or interface text string; sets Des_Msg to gameVariables->get_string(81, source); plus 5 more actions
    {
        if (!(group_loops_1)) goto event_1574_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_1574_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_25_1214));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_item_1215, lowercase_string(((INI*)get_instance(itemData_instances))->get_string(number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2)), str_name_103))));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(401, str_des_msg_1213, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514)), empty_string);
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1574_11_end: ;
}
void Frames::loop_itemhp_11()
{
    event_func_1462();
    event_func_1463();
    event_func_5512();
}
// Function purpose: generated callback event_func_5513 processes event block(s) 1094_11. Actions/conditions:
//        1094_11: creates a taskbox 695 object; sets the target object's direction; sets the selected object's string
//        to Activity.
void Frames::event_func_5513()
{
    // event 1094_11 : creates a taskbox 695 object; sets the target object's direction; sets the selected object's string to Activity
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1094_11_end;
        FrameObject * single_instance_1094_11_0; single_instance_1094_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(sidePanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_taskbox_695(parent->x + 2, parent->y + 180), parent->layer);
                if (single_instance_1094_11_0 == NULL)
                    single_instance_1094_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1094_11_0))->set_direction(24);
        ((Active*)((Active*)single_instance_1094_11_0))->alterables->strings.set(0, str_activity_1153);
    }
    event_1094_11_end: ;
}
void Frames::loop_create_activity_box_11()
{
    event_func_5513();
    event_func_1467();
}
// Function purpose: generated callback event_func_5514 processes event block(s) 1066_11. Actions/conditions:
//        1066_11: sets SpeakText to Inventory full!; plays a sound or music track.
void Frames::event_func_5514()
{
    // event 1066_11 : sets SpeakText to Inventory full!; plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1066_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) == (0))) goto event_1066_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, str_inventory_full_1886);
        {
            loop_notice_running = true;
            int times = int(1);
            loop_notice_index = 0;
            while (loop_notice_index < times) {
                loop_notice_11();
                if (!loop_notice_running) break;
                loop_notice_index++;
            }
        }
            loop_unscrew_check_running = false;
    
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_1066_11_end: ;
}
// Function purpose: generated callback event_func_5515 processes event block(s) 1067_11. Actions/conditions:
//        1067_11: sets SpeakText to You are too fatigued; plays a sound or music track.
void Frames::event_func_5515()
{
    // event 1067_11 : sets SpeakText to You are too fatigued; plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1067_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) >= (100))) goto event_1067_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, str_you_are_too_fatigued_2454);
        {
            loop_notice_running = true;
            int times = int(1);
            loop_notice_index = 0;
            while (loop_notice_index < times) {
                loop_notice_11();
                if (!loop_notice_running) break;
                loop_notice_index++;
            }
        }
        loop_unscrew_check_running = false;
    
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_1067_11_end: ;
}
// Function purpose: generated callback event_func_5516 processes event block(s) 1068_11. Actions/conditions:
//        1068_11: sets Unscrewing to 100; sets the selected object's direction to get_direction_int(selected
//        object->x, selected object->y, cursor_178->x + 8, cursor_178->y + 8); sets AcType to Action entry 3.
void Frames::event_func_5516()
{
    // event 1068_11 : sets Unscrewing to 100; sets the selected object's direction to get_direction_int(selected object->x, selected object->y, cursor_178->x + 8, cursor_178->y + 8); sets AcType to Action entry 3
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1068_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_1068_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) > (0))) goto event_1068_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(156, str_unscrewing_729, 100);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(cursor_178_instances))->x + 8, ((Active*)get_instance(cursor_178_instances))->y + 8));
        }
        {
            loop_itemhp_running = true;
            int times = int(1);
            loop_itemhp_index = 0;
            while (loop_itemhp_index < times) {
                loop_itemhp_11();
                if (!loop_itemhp_running) break;
                loop_itemhp_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(402, str_actype_1216, ((INI*)get_instance(translationData_instances))->get_string(str_action_857, str_3_158));
        {
            loop_create_activity_box_running = true;
            int times = int(1);
            loop_create_activity_box_index = 0;
            while (loop_create_activity_box_index < times) {
                loop_create_activity_box_11();
                if (!loop_create_activity_box_running) break;
                loop_create_activity_box_index++;
            }
        }
    }
    event_1068_11_end: ;
}
void Frames::loop_unscrew_check_11()
{
    event_func_1692();
    event_func_5514();
    event_func_5515();
    event_func_5516();
}
// Function purpose: generated callback event_func_5517 processes event block(s) 330_11. Actions/conditions:
//        330_11: creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more
//        actions.
void Frames::event_func_5517()
{
    // event 330_11 : creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_330_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_330_11_end;
        FrameObject * single_instance_330_11_0; single_instance_330_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -80), parent->layer);
                if (single_instance_330_11_0 == NULL)
                    single_instance_330_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_330_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_330_11_0)), frame_left()));
        ((Text*)((Text*)single_instance_330_11_0))->set_bold(1);
        ((Text*)((Text*)single_instance_330_11_0))->blend_color.set(Color(243, 119, 0));
        ((Text*)((Text*)single_instance_330_11_0))->set_string(str_basic_controls_2456);
    }
    event_330_11_end: ;
}
// Function purpose: generated callback event_func_5518 processes event block(s) 331_11. Actions/conditions:
//        331_11: creates a dialogue2 677 object; updates a value on the target object; sets
//        +translate_key_to_string(manager.left)+ to +translate_key_to_string(manager.down; plus 1 more actions.
void Frames::event_func_5518()
{
    // event 331_11 : creates a dialogue2 677 object; updates a value on the target object; sets +translate_key_to_string(manager.left)+ to +translate_key_to_string(manager.down; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_331_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_331_11_end;
        FrameObject * single_instance_331_11_0; single_instance_331_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(esc::createTextFrames(parent), parent->layer);
                if (single_instance_331_11_0 == NULL)
                    single_instance_331_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_331_11_0))->blend_color.set(Color(210, 210, 210));
        ((Text*)((Text*)single_instance_331_11_0))->set_string(str_use_the_2457+translate_key_to_string(manager.up)+str__1765+translate_key_to_string(manager.left)+str__1765+translate_key_to_string(manager.down)+str_and_2458+translate_key_to_string(manager.right)+str_keys_to_move_2459+translate_key_to_string(manager.button3)+str_to_toggle_combat_mode_left_mouse_to_interact_target_use_and_move_items_right_mouse_to_pick_up_drop_view_profiles_alternate_2460+translate_key_to_string(manager.button1)+str_and_2458+translate_key_to_string(manager.button2)+str_to_workout_use_2461+translate_key_to_string(manager.button1)+str_to_recruit_dismiss_buddies_2462);
        ((Text*)((Text*)single_instance_331_11_0))->set_string(((Text*)single_instance_331_11_0)->text+empty_string);
    }
    event_331_11_end: ;
}
// Function purpose: generated callback event_func_5519 processes event block(s) 332_11. Actions/conditions:
//        332_11: creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more
//        actions.
void Frames::event_func_5519()
{
    // event 332_11 : creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_332_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_332_11_end;
        FrameObject * single_instance_332_11_0; single_instance_332_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -80), parent->layer);
                if (single_instance_332_11_0 == NULL)
                    single_instance_332_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_332_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_332_11_0)), frame_left()));
        ((Text*)((Text*)single_instance_332_11_0))->set_bold(1);
        ((Text*)((Text*)single_instance_332_11_0))->blend_color.set(Color(243, 119, 0));
        ((Text*)((Text*)single_instance_332_11_0))->set_string(str_picking_up_dropping_2463);
    }
    event_332_11_end: ;
}
// Function purpose: generated callback event_func_5520 processes event block(s) 333_11. Actions/conditions:
//        333_11: creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text
//        string; plus 1 more actions.
void Frames::event_func_5520()
{
    // event 333_11 : creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text string; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_333_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_333_11_end;
        FrameObject * single_instance_333_11_0; single_instance_333_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(esc::createTextFrames(parent), parent->layer);
                if (single_instance_333_11_0 == NULL)
                    single_instance_333_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_333_11_0))->blend_color.set(Color(210, 210, 210));
        ((Text*)((Text*)single_instance_333_11_0))->set_string(str_the_right_mouse_button_is_used_for_picking_up_and_dropping_things_for_items_right_click_an_item_on_the_floor_to_pick_it_up_and_likewise_right_click_an_item_in_your_inventory_to_drop_it_you_can_t_drop_items_on_top_of_one_another_2464);
        ((Text*)((Text*)single_instance_333_11_0))->set_string(((Text*)single_instance_333_11_0)->text+str_you_can_also_pick_up_and_drop_desks_knocked_out_characters_bed_sheets_pillows_removable_vents_and_wall_blocks_and_a_list_of_other_things_all_with_the_right_click_2465);
    }
    event_333_11_end: ;
}
// Function purpose: generated callback event_func_5521 processes event block(s) 334_11. Actions/conditions:
//        334_11: creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more
//        actions.
void Frames::event_func_5521()
{
    // event 334_11 : creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_334_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_334_11_end;
        FrameObject * single_instance_334_11_0; single_instance_334_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -80), parent->layer);
                if (single_instance_334_11_0 == NULL)
                    single_instance_334_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_334_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_334_11_0)), frame_left()));
        ((Text*)((Text*)single_instance_334_11_0))->set_bold(1);
        ((Text*)((Text*)single_instance_334_11_0))->blend_color.set(Color(243, 119, 0));
        ((Text*)((Text*)single_instance_334_11_0))->set_string(str_using_items_2466);
    }
    event_334_11_end: ;
}
// Function purpose: generated callback event_func_5522 processes event block(s) 335_11. Actions/conditions:
//        335_11: creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text
//        string; plus 5 more actions.
void Frames::event_func_5522()
{
    // event 335_11 : creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text string; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_335_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_335_11_end;
        FrameObject * single_instance_335_11_0; single_instance_335_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(esc::createTextFrames(parent), parent->layer);
                if (single_instance_335_11_0 == NULL)
                    single_instance_335_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_335_11_0))->blend_color.set(Color(210, 210, 210));
        ((Text*)((Text*)single_instance_335_11_0))->set_string(str_to_use_an_item_first_you_need_to_left_click_on_it_in_your_inventory_to_highlight_the_mouse_cursor_will_change_purple_to_indicate_you_re_in_use_mode_then_just_left_click_on_where_you_want_to_use_that_particular_item_2467);
        ((Text*)((Text*)single_instance_335_11_0))->set_string(((Text*)single_instance_335_11_0)->text+str_for_example_to_use_a_shovel_left_click_on_the_shovel_in_your_inventory_then_on_the_floor_next_to_you_and_you_will_start_digging_2468);
        ((Text*)((Text*)single_instance_335_11_0))->set_string(((Text*)single_instance_335_11_0)->text+str_optionally_you_can_use_the_1_6_number_keys_as_shortcuts_for_selecting_items_2469);
    }
    event_335_11_end: ;
}
// Function purpose: generated callback event_func_5523 processes event block(s) 336_11. Actions/conditions:
//        336_11: creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more
//        actions.
void Frames::event_func_5523()
{
    // event 336_11 : creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_336_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_336_11_end;
        FrameObject * single_instance_336_11_0; single_instance_336_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -80), parent->layer);
                if (single_instance_336_11_0 == NULL)
                    single_instance_336_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_336_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_336_11_0)), frame_left()));
        ((Text*)((Text*)single_instance_336_11_0))->set_bold(1);
        ((Text*)((Text*)single_instance_336_11_0))->blend_color.set(Color(243, 119, 0));
        ((Text*)((Text*)single_instance_336_11_0))->set_string(str_combat_2470);
    }
    event_336_11_end: ;
}
// Function purpose: generated callback event_func_5524 processes event block(s) 337_11. Actions/conditions:
//        337_11: creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text
//        string; plus 5 more actions.
void Frames::event_func_5524()
{
    // event 337_11 : creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text string; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_337_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_337_11_end;
        FrameObject * single_instance_337_11_0; single_instance_337_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(esc::createTextFrames(parent), parent->layer);
                if (single_instance_337_11_0 == NULL)
                    single_instance_337_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_337_11_0))->blend_color.set(Color(210, 210, 210));
        ((Text*)((Text*)single_instance_337_11_0))->set_string(str_the_2471+translate_key_to_string(manager.button3)+str_key_is_used_to_toggle_attack_mode_on_and_off_with_attack_mode_on_left_click_on_someone_to_target_them_once_in_range_of_a_target_you_ll_attack_them_automatically_2472);
        ((Text*)((Text*)single_instance_337_11_0))->set_string(((Text*)single_instance_337_11_0)->text+str_to_stop_attacking_either_move_away_turn_off_attack_mode_or_untarget_them_by_clicking_elsewhere_2473);
        ((Text*)((Text*)single_instance_337_11_0))->set_string(((Text*)single_instance_337_11_0)->text+str_you_can_increase_the_damage_you_do_in_combat_by_equipping_weapons_and_increasing_your_strength_stat_2474);
    }
    event_337_11_end: ;
}
// Function purpose: generated callback event_func_5525 processes event block(s) 338_11. Actions/conditions:
//        338_11: creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more
//        actions.
void Frames::event_func_5525()
{
    // event 338_11 : creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_338_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_338_11_end;
        FrameObject * single_instance_338_11_0; single_instance_338_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -80), parent->layer);
                if (single_instance_338_11_0 == NULL)
                    single_instance_338_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_338_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_338_11_0)), frame_left()));
        ((Text*)((Text*)single_instance_338_11_0))->set_bold(1);
        ((Text*)((Text*)single_instance_338_11_0))->blend_color.set(Color(243, 119, 0));
        ((Text*)((Text*)single_instance_338_11_0))->set_string(str_prison_routines_2475);
    }
    event_338_11_end: ;
}
// Function purpose: generated callback event_func_5526 processes event block(s) 339_11. Actions/conditions:
//        339_11: creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text
//        string; plus 1 more actions.
void Frames::event_func_5526()
{
    // event 339_11 : creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text string; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_339_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_339_11_end;
        FrameObject * single_instance_339_11_0; single_instance_339_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(esc::createTextFrames(parent), parent->layer);
                if (single_instance_339_11_0 == NULL)
                    single_instance_339_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_339_11_0))->blend_color.set(Color(210, 210, 210));
        ((Text*)((Text*)single_instance_339_11_0))->set_string(str_prison_life_is_all_about_routines_the_bar_at_the_bottom_of_the_screen_along_with_the_yellow_destination_arrow_tells_you_where_you_need_to_be_at_that_particular_time_2476);
        ((Text*)((Text*)single_instance_339_11_0))->set_string(((Text*)single_instance_339_11_0)->text+str_if_you_ignore_these_then_you_ll_find_the_guards_yelling_at_you_and_your_heat_level_rising_skipping_rollcalls_will_put_the_prison_in_lockdown_mode_2477);
    }
    event_339_11_end: ;
}
// Function purpose: generated callback event_func_5527 processes event block(s) 340_11. Actions/conditions:
//        340_11: creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more
//        actions.
void Frames::event_func_5527()
{
    // event 340_11 : creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_340_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_340_11_end;
        FrameObject * single_instance_340_11_0; single_instance_340_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -80), parent->layer);
                if (single_instance_340_11_0 == NULL)
                    single_instance_340_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_340_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_340_11_0)), frame_left()));
        ((Text*)((Text*)single_instance_340_11_0))->set_bold(1);
        ((Text*)((Text*)single_instance_340_11_0))->blend_color.set(Color(243, 119, 0));
        ((Text*)((Text*)single_instance_340_11_0))->set_string(str_stats_training_2478);
    }
    event_340_11_end: ;
}
// Function purpose: generated callback event_func_5528 processes event block(s) 341_11. Actions/conditions:
//        341_11: creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text
//        string; plus 1 more actions.
void Frames::event_func_5528()
{
    // event 341_11 : creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text string; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_341_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_341_11_end;
        FrameObject * single_instance_341_11_0; single_instance_341_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(esc::createTextFrames(parent), parent->layer);
                if (single_instance_341_11_0 == NULL)
                    single_instance_341_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_341_11_0))->blend_color.set(Color(210, 210, 210));
        ((Text*)((Text*)single_instance_341_11_0))->set_string(str_your_main_stats_are_strength_str_speed_spd_and_intellect_int_these_degrade_over_time_strength_affects_how_hard_you_hit_others_and_speed_how_fast_both_can_be_trained_by_working_out_in_the_prison_gym_2479);
        ((Text*)((Text*)single_instance_341_11_0))->set_string(((Text*)single_instance_341_11_0)->text+str_intellect_is_how_smart_you_are_and_is_improved_by_reading_books_or_browsing_the_internet_it_determines_which_jobs_you_can_apply_for_what_items_you_re_able_to_craft_etc_2480);
    }
    event_341_11_end: ;
}
// Function purpose: generated callback event_func_5529 processes event block(s) 342_11. Actions/conditions:
//        342_11: creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more
//        actions.
void Frames::event_func_5529()
{
    // event 342_11 : creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_342_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (7))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_342_11_end;
        FrameObject * single_instance_342_11_0; single_instance_342_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -80), parent->layer);
                if (single_instance_342_11_0 == NULL)
                    single_instance_342_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_342_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_342_11_0)), frame_left()));
        ((Text*)((Text*)single_instance_342_11_0))->set_bold(1);
        ((Text*)((Text*)single_instance_342_11_0))->blend_color.set(Color(243, 119, 0));
        ((Text*)((Text*)single_instance_342_11_0))->set_string(str_heat_punishment_2481);
    }
    event_342_11_end: ;
}
// Function purpose: generated callback event_func_5530 processes event block(s) 343_11. Actions/conditions:
//        343_11: creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text
//        string; plus 1 more actions.
void Frames::event_func_5530()
{
    // event 343_11 : creates a dialogue2 677 object; updates a value on the target object; sets a game or interface text string; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_343_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (7))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_343_11_end;
        FrameObject * single_instance_343_11_0; single_instance_343_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(esc::createTextFrames(parent), parent->layer);
                if (single_instance_343_11_0 == NULL)
                    single_instance_343_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_343_11_0))->blend_color.set(Color(210, 210, 210));
        ((Text*)((Text*)single_instance_343_11_0))->set_string(str_everytime_you_break_prison_rules_in_sight_of_a_guard_or_camera_your_heat_rating_will_rise_if_it_gets_too_high_the_guards_will_attack_you_2482);
        ((Text*)((Text*)single_instance_343_11_0))->set_string(((Text*)single_instance_343_11_0)->text+str_more_serious_offences_eg_them_discovering_evidence_of_an_attempted_escape_will_see_you_sent_to_solitary_confinement_for_three_days_2483);
    }
    event_343_11_end: ;
}
// Function purpose: generated callback event_func_5531 processes event block(s) 344_11. Actions/conditions:
//        344_11: creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more
//        actions.
void Frames::event_func_5531()
{
    // event 344_11 : creates a dchar 688 object; positions the target object; sets text formatting to bold; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_344_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (8))) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_344_11_end;
        FrameObject * single_instance_344_11_0; single_instance_344_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + -80), parent->layer);
                if (single_instance_344_11_0 == NULL)
                    single_instance_344_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_344_11_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_344_11_0)), frame_left()));
        ((Text*)((Text*)single_instance_344_11_0))->set_bold(1);
        ((Text*)((Text*)single_instance_344_11_0))->blend_color.set(Color(243, 119, 0));
        ((Text*)((Text*)single_instance_344_11_0))->set_string(str_relationships_opinion_2484);
    }
    event_344_11_end: ;
}
