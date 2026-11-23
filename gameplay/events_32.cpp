#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_2465()
{
    // event 2512_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2512_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_13_39_5_1629))) goto event_2512_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 181);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2512_6_end: ;
}
void Frames::event_func_2466()
{
    // event 2513_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2513_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_12_62_1630))) goto event_2513_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 122);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2513_6_end: ;
}
void Frames::event_func_2467()
{
    // event 2514_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2514_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_13_25_25_1631))) goto event_2514_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 112);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2514_6_end: ;
}
void Frames::event_func_2468()
{
    // event 2515_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2515_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_112_44_1632))) goto event_2515_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 113);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2515_6_end: ;
}
void Frames::event_func_2469()
{
    // event 2516_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2516_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_122_13_76_1633))) goto event_2516_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 115);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2516_6_end: ;
}
void Frames::event_func_2470()
{
    // event 2517_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2517_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_115_13_76_1634))) goto event_2517_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 114);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2517_6_end: ;
}
void Frames::event_func_2471()
{
    // event 2518_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2518_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_114_13_76_1635))) goto event_2518_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 5);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2518_6_end: ;
}
void Frames::event_func_2472()
{
    // event 2519_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2519_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_13_5_76_1636))) goto event_2519_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 5);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2519_6_end: ;
}
void Frames::event_func_2473()
{
    // event 2520_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2520_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_73_98_1637))) goto event_2520_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 54);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2520_6_end: ;
}
void Frames::event_func_2474()
{
    // event 2521_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2521_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_122_13_25_1638))) goto event_2521_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 118);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2521_6_end: ;
}
void Frames::event_func_2475()
{
    // event 2522_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2522_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_118_12_13_1639))) goto event_2522_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 119);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2522_6_end: ;
}
void Frames::event_func_2476()
{
    // event 2523_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2523_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_119_12_13_1640))) goto event_2523_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 39);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2523_6_end: ;
}
void Frames::event_func_2477()
{
    // event 2524_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2524_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_12_13_39_1641))) goto event_2524_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 39);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2524_6_end: ;
}
void Frames::event_func_2478()
{
    // event 2525_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2525_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_13_62_62_1642))) goto event_2525_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 120);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2525_6_end: ;
}
void Frames::event_func_2479()
{
    // event 2526_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2526_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_121_13_62_1643))) goto event_2526_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 61);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2526_6_end: ;
}
void Frames::event_func_2480()
{
    // event 2527_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2527_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_120_13_62_1644))) goto event_2527_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 121);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2527_6_end: ;
}
void Frames::event_func_2481()
{
    // event 2528_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2528_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_121_13_62_1643))) goto event_2528_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 121);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2528_6_end: ;
}
void Frames::event_func_2482()
{
    // event 2529_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2529_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_187_44_57_1645))) goto event_2529_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 188);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2529_6_end: ;
}
void Frames::event_func_2483()
{
    // event 2530_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2530_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_12_69_1646))) goto event_2530_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 57);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2530_6_end: ;
}
void Frames::event_func_2484()
{
    // event 2531_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2531_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_44_56_56_1647))) goto event_2531_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 187);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2531_6_end: ;
}
void Frames::event_func_2485()
{
    // event 2532_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2532_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_13_179_179_1648))) goto event_2532_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 180);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2532_6_end: ;
}
void Frames::event_func_2486()
{
    // event 2533_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2533_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_98_98_98_1649))) goto event_2533_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 174);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2533_6_end: ;
}
void Frames::event_func_2487()
{
    // event 2534_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2534_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_150_152_36_1650))) goto event_2534_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 153);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2534_6_end: ;
}
void Frames::event_func_2488()
{
    // event 2535_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2535_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_137_137_137_1651))) goto event_2535_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(str_132_133_134_135_74_1652, str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2535_6_end: ;
}
void Frames::event_func_2489()
{
    // event 2536_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2536_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_251_257_1653))) goto event_2536_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(str_250_252_253_258_1654, str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2536_6_end: ;
}
void Frames::event_func_2490()
{
    // event 2537_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2537_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_69_95_95_1655))) goto event_2537_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 126);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2537_6_end: ;
}
void Frames::event_func_2491()
{
    // event 2538_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2538_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_100_13_1656))) goto event_2538_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 125);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2538_6_end: ;
}
void Frames::event_func_2492()
{
    // event 2539_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2539_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_100_100_13_1657))) goto event_2539_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 184);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2539_6_end: ;
}
void Frames::event_func_2493()
{
    // event 2540_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2540_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_101_101_36_1658))) goto event_2540_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 116);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2540_6_end: ;
}
void Frames::event_func_2494()
{
    // event 2541_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2541_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_101_101_1659))) goto event_2541_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 117);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2541_6_end: ;
}
void Frames::event_func_2495()
{
    // event 2542_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2542_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_37_4_1660))) goto event_2542_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 38);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2542_6_end: ;
}
void Frames::event_func_2496()
{
    // event 2543_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2543_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_3_37_1661))) goto event_2543_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 38);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2543_6_end: ;
}
void Frames::event_func_2497()
{
    // event 2544_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2544_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_127_37_1662))) goto event_2544_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 38);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2544_6_end: ;
}
void Frames::event_func_2498()
{
    // event 2545_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2545_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_12_12_12_1663))) goto event_2545_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 75);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2545_6_end: ;
}
void Frames::event_func_2499()
{
    // event 2546_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2546_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_12_12_1664))) goto event_2546_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 72);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2546_6_end: ;
}
void Frames::event_func_2500()
{
    // event 2547_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2547_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_36_38_1665))) goto event_2547_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 3);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2547_6_end: ;
}
void Frames::event_func_2501()
{
    // event 2548_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2548_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_45_52_1666))) goto event_2548_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 53);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2548_6_end: ;
}
void Frames::event_func_2502()
{
    // event 2549_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2549_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_17_8_1667))) goto event_2549_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 84);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2549_6_end: ;
}
void Frames::event_func_2503()
{
    // event 2550_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2550_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_8_96_1668))) goto event_2550_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 84);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2550_6_end: ;
}
void Frames::event_func_2504()
{
    // event 2551_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2551_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_69_69_1669))) goto event_2551_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 81);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2551_6_end: ;
}
void Frames::event_func_2505()
{
    // event 2552_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2552_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_13_15_1670))) goto event_2552_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 99);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2552_6_end: ;
}
void Frames::event_func_2506()
{
    // event 2553_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2553_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_36_90_93_1671))) goto event_2553_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 102);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2553_6_end: ;
}
void Frames::event_func_2507()
{
    // event 2554_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2554_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_47_51_1672))) goto event_2554_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 101);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2554_6_end: ;
}
void Frames::event_func_2508()
{
    // event 2555_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2555_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_157_51_1673))) goto event_2555_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 101);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2555_6_end: ;
}
void Frames::event_func_2509()
{
    // event 2556_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2556_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_198_203_1674))) goto event_2556_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 197);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2556_6_end: ;
}
void Frames::event_func_2510()
{
    // event 2557_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2557_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_193_195_1675))) goto event_2557_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 198);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2557_6_end: ;
}
void Frames::event_func_2511()
{
    // event 2558_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2558_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_192_196_205_1676))) goto event_2558_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 195);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2558_6_end: ;
}
void Frames::event_func_2512()
{
    // event 2559_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2559_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_207_8_1677))) goto event_2559_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 199);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2559_6_end: ;
}
void Frames::event_func_2513()
{
    // event 2560_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2560_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_193_199_1678))) goto event_2560_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 198);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2560_6_end: ;
}
void Frames::event_func_2514()
{
    // event 2561_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2561_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_179_198_1679))) goto event_2561_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 197);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2561_6_end: ;
}
void Frames::event_func_2515()
{
    // event 2562_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2562_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_13_194_194_1680))) goto event_2562_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 201);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2562_6_end: ;
}
void Frames::event_func_2516()
{
    // event 2563_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2563_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_13_204_204_1681))) goto event_2563_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 200);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2563_6_end: ;
}
void Frames::event_func_2517()
{
    // event 2564_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2564_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_13_200_201_1682))) goto event_2564_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 202);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2564_6_end: ;
}
void Frames::event_func_2518()
{
    // event 2565_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2565_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_261_265_1683))) goto event_2565_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 266);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2565_6_end: ;
}
void Frames::event_func_2519()
{
    // event 2566_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2566_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_269_60_1684))) goto event_2566_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 268);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2566_6_end: ;
}
void Frames::event_func_2520()
{
    // event 2567_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2567_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_13_264_268_1685))) goto event_2567_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 270);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2567_6_end: ;
}
void Frames::event_func_2521()
{
    // event 2568_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2568_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_271_272_1686))) goto event_2568_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 273);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2568_6_end: ;
}
void Frames::event_func_2522()
{
    // event 2569_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2569_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_262_266_273_1687))) goto event_2569_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 276);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2569_6_end: ;
}
void Frames::event_func_2523()
{
    // event 2570_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2570_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_204_267_8_1688))) goto event_2570_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 278);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2570_6_end: ;
}
void Frames::event_func_2524()
{
    // event 2571_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2571_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_243_47_51_1689))) goto event_2571_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 249);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2571_6_end: ;
}
void Frames::event_func_2525()
{
    // event 2572_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2572_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_240_73_98_1690))) goto event_2572_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 242);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2572_6_end: ;
}
void Frames::event_func_2526()
{
    // event 2573_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2573_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_218_253_254_1691))) goto event_2573_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 247);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2573_6_end: ;
}
void Frames::event_func_2527()
{
    // event 2574_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2574_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_218_254_258_1692))) goto event_2574_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 247);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2574_6_end: ;
}
void Frames::event_func_2528()
{
    // event 2575_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2575_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_218_252_254_1693))) goto event_2575_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 247);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2575_6_end: ;
}
void Frames::event_func_2529()
{
    // event 2576_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2576_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_218_250_254_1694))) goto event_2576_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 247);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2576_6_end: ;
}
void Frames::event_func_2530()
{
    // event 2577_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2577_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_212_214_1695))) goto event_2577_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 213);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2577_6_end: ;
}
void Frames::event_func_2531()
{
    // event 2578_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2578_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_218_219_52_1696))) goto event_2578_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 236);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2578_6_end: ;
}
void Frames::event_func_2532()
{
    // event 2579_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2579_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_217_236_1697))) goto event_2579_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 221);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2579_6_end: ;
}
void Frames::event_func_2533()
{
    // event 2580_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2580_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_226_8_1698))) goto event_2580_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 225);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2580_6_end: ;
}
void Frames::event_func_2534()
{
    // event 2581_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2581_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_231_233_76_1699))) goto event_2581_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(610, str_dontaddtocraftnotes_1592, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 232);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2581_6_end: ;
}
void Frames::loop_craftsum_6()
{
    event_func_2432();
    event_func_2433();
    event_func_2434();
    event_func_2435();
    event_func_2436();
    event_func_2437();
    event_func_2438();
    event_func_2439();
    event_func_2440();
    event_func_2441();
    event_func_2442();
    event_func_2443();
    event_func_2444();
    event_func_2445();
    event_func_2446();
    event_func_2447();
    event_func_2448();
    event_func_2449();
    event_func_2450();
    event_func_2451();
    event_func_2452();
    event_func_2453();
    event_func_2454();
    event_func_2455();
    event_func_2456();
    event_func_2457();
    event_func_2458();
    event_func_2459();
    event_func_2460();
    event_func_2461();
    event_func_2462();
    event_func_2463();
    event_func_2464();
    event_func_2465();
    event_func_2466();
    event_func_2467();
    event_func_2468();
    event_func_2469();
    event_func_2470();
    event_func_2471();
    event_func_2472();
    event_func_2473();
    event_func_2474();
    event_func_2475();
    event_func_2476();
    event_func_2477();
    event_func_2478();
    event_func_2479();
    event_func_2480();
    event_func_2481();
    event_func_2482();
    event_func_2483();
    event_func_2484();
    event_func_2485();
    event_func_2486();
    event_func_2487();
    event_func_2488();
    event_func_2489();
    event_func_2490();
    event_func_2491();
    event_func_2492();
    event_func_2493();
    event_func_2494();
    event_func_2495();
    event_func_2496();
    event_func_2497();
    event_func_2498();
    event_func_2499();
    event_func_2500();
    event_func_2501();
    event_func_2502();
    event_func_2503();
    event_func_2504();
    event_func_2505();
    event_func_2506();
    event_func_2507();
    event_func_2508();
    event_func_2509();
    event_func_2510();
    event_func_2511();
    event_func_2512();
    event_func_2513();
    event_func_2514();
    event_func_2515();
    event_func_2516();
    event_func_2517();
    event_func_2518();
    event_func_2519();
    event_func_2520();
    event_func_2521();
    event_func_2522();
    event_func_2523();
    event_func_2524();
    event_func_2525();
    event_func_2526();
    event_func_2527();
    event_func_2528();
    event_func_2529();
    event_func_2530();
    event_func_2531();
    event_func_2532();
    event_func_2533();
    event_func_2534();
}
void Frames::event_func_2535()
{
    // event 2470_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2470_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craft_output_1121))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_2470_6_end;
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_2470_6_end: ;
}
void Frames::event_func_2536()
{
    // event 2471_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2471_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craft_output_1121))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_2471_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(614, str_c1_1596, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(615, str_c2_1597, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(616, str_c3_1598, -1);
        {
            loop_craftsum_running = true;
            int times = int(1);
            loop_craftsum_index = 0;
            while (loop_craftsum_index < times) {
                loop_craftsum_6();
                if (!loop_craftsum_running) break;
                loop_craftsum_index++;
            }
        }
    }
    event_2471_6_end: ;
}
void Frames::event_func_2537()
{
    // event 2472_6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2472_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(612, str_craftoutput_1594)) == (-1))) goto event_2472_6_end;
        media.play_id(SOUND_LOSE_8, 1-1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_5_164));
        
        FrameObject * single_instance_2472_6_0; single_instance_2472_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activesystembox_450(parent->x + -15, parent->y + 75), parent->layer);
                if (single_instance_2472_6_0 == NULL)
                    single_instance_2472_6_0 = new_obj;
            }
        }
        ((SystemBox*)((SystemBox*)single_instance_2472_6_0))->set_fill(Color(make_color_int(255, 192, 0)));
        ((SystemBox*)((SystemBox*)single_instance_2472_6_0))->blend_color.set(Color(0, 0, 0));
        ((SystemBox*)((SystemBox*)single_instance_2472_6_0))->set_text(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_5_164));
        ((SystemBox*)((SystemBox*)single_instance_2472_6_0))->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
        ((SystemBox*)((SystemBox*)single_instance_2472_6_0))->set_x(((Active*)get_instance(dialogPanel_instances))->get_x()-(((SystemBox*)single_instance_2472_6_0)->get_generic_width()/MathHelper()/2));
        ((SystemBox*)((SystemBox*)single_instance_2472_6_0))->alterables->values.set(1, 60);
        ((SystemBox*)((SystemBox*)single_instance_2472_6_0))->alterables->flags.enable(10);
        ((SystemBox*)((SystemBox*)single_instance_2472_6_0))->set_visible(true);
    }
    event_2472_6_end: ;
}
void Frames::loop_craft_check_6()
{
    event_func_2535();
    event_func_2536();
    event_func_2537();
}
void Frames::event_func_2538()
{
    // event 3380_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3380_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_desk_32+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(337, str_currentcontainer_1126))+str_slot_617+number_to_string(loop_flip_desk_findslot_index+1))) == (empty_string))) goto event_3380_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, loop_flip_desk_findslot_index+1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(368, str_currentinvslot_1162)), empty_string);
            loop_flip_desk_findslot_running = false;
    
        media.play_id(SOUND_STEP_1, 1-1);
    }
    event_3380_6_end: ;
}
void Frames::loop_flip_desk_findslot_6()
{
    event_func_2538();
}
void Frames::event_func_2539()
{
    // event 3379_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3379_6_end;
        {
            loop_flip_desk_findslot_running = true;
            int times = int(20);
            loop_flip_desk_findslot_index = 0;
            while (loop_flip_desk_findslot_index < times) {
                loop_flip_desk_findslot_6();
                if (!loop_flip_desk_findslot_running) break;
                loop_flip_desk_findslot_index++;
            }
        }
    }
    event_3379_6_end: ;
}
void Frames::event_func_2540()
{
    // event 3382_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3382_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3382_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(368, str_currentinvslot_1162)))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3382_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_desk_32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3382_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_3382_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3382_6_0: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161));
            ((Active*)*it)->alterables->strings.set(0, str_desk_32);
            ((Active*)*it)->set_scale(1);
            ((Active*)*it)->alterables->flags.enable(-5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(337, str_currentcontainer_1126))+str_slot_617+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)), number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7))+str__96+((Active*)get_single(hudItem_instances, default_active_instance))->alterables->strings.get(1));
    }
    event_3382_6_end: ;
}
void Frames::loop_find_open_desk_slot_6()
{
    event_func_2539();
    event_func_1381();
    event_func_2540();
}
void Frames::event_func_2541()
{
    // event 3093_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3093_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_3093_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(cursor_178_instances))->x + 8, ((Active*)get_instance(cursor_178_instances))->y + 8));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(156, str_unscrewing_729, 100);
        if (!group_loops_1) {
            group_loops_1 = true;
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
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(402, str_actype_1216, ((INI*)get_instance(translationData_instances))->get_string(str_action_857, str_3_158));
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
    event_3093_6_end: ;
}
void Frames::loop_unscrew_slats_check_6()
{
    event_func_1385();
    event_func_2541();
}
void Frames::event_func_2542()
{
    // event 1286_6
    {
        if (!(group_code_1)) goto event_1286_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_cansee_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) != (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1286_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(618, str_buddies_39, 1);
    }
    event_1286_6_end: ;
}
void Frames::event_func_2543()
{
    // event 1287_6
    {
        if (!(group_code_1)) goto event_1287_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_cansee_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) != (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1287_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(260, str_cansee_915, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(374, str_attackerx_1171, ((Active*)get_single(qualifier_14, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(375, str_attackery_1172, ((Active*)get_single(qualifier_14, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(512, str_attackerstr_1410, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(8)/MathHelper()/20);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(380, str_targetz_1178, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(516, str_attackerp_1414, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(15));
        {
            loop_cansee2_running = true;
            int times = int(1);
            loop_cansee2_index = 0;
            while (loop_cansee2_index < times) {
                loop_cansee2_6();
                if (!loop_cansee2_running) break;
                loop_cansee2_index++;
            }
        }
    }
    event_1287_6_end: ;
}
void Frames::event_func_2544()
{
    // event 1288_6
    {
        if (!(group_code_1)) goto event_1288_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_cansee_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1288_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(260, str_cansee_915, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(374, str_attackerx_1171, ((Active*)get_single(qualifier_14, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(375, str_attackery_1172, ((Active*)get_single(qualifier_14, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(512, str_attackerstr_1410, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(8)/MathHelper()/20);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(380, str_targetz_1178, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(15));
        {
            loop_follow_loop_running = true;
            int times = int(1);
            loop_follow_loop_index = 0;
            while (loop_follow_loop_index < times) {
                loop_follow_loop_6();
                if (!loop_follow_loop_running) break;
                loop_follow_loop_index++;
            }
        }
    }
    event_1288_6_end: ;
}
void Frames::loop_cansee_6()
{
    event_func_2542();
    event_func_2543();
    event_func_2544();
}
void Frames::event_func_2545()
{
    // event 492_6
    {
        if (!(group_setup_1)) goto event_492_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(619, str_sees_1700, 1);
        ((Active*)get_instance(los_198_instances))->set_layer(2-1);
        ((Active*)get_instance(los_198_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(620, str_deskx_1701));
        ((Active*)get_instance(los_198_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(621, str_desky_1702));
        ((Active*)get_instance(los_198_instances))->set_x_scale(((AssociateArray*)get_instance(gameVariables_instances))->get_value(622, str_range_1703));
        ((Active*)get_instance(los_198_instances))->set_angle(get_angle_int(((AssociateArray*)get_instance(gameVariables_instances))->get_value(620, str_deskx_1701), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(621, str_desky_1702), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(623, str_bedx_1704), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(624, str_bedy_1705)), 0);
    }
    event_492_6_end: ;
}
void Frames::event_func_2546()
{
    // event 493_6
    {
        if (!(group_setup_1)) goto event_493_6_end;
        los_198_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(los_198_instances, qualifier_19)) goto event_493_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(619, str_sees_1700, 0);
    }
    event_493_6_end: ;
}
void Frames::event_func_2547()
{
    // event 494_6
    {
        if (!(group_setup_1)) goto event_494_6_end;
        if (!(((Active*)get_instance(los_198_instances))->overlaps_background())) goto event_494_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(619, str_sees_1700, 0);
    }
    event_494_6_end: ;
}
void Frames::event_func_2548()
{
    // event 495_6
    {
        if (!(group_setup_1)) goto event_495_6_end;
        los_198_instances.clear_selection();
        mapsetupobstaclemarker_323_instances.clear_selection();
        if (!check_overlap(los_198_instances, mapsetupobstaclemarker_323_instances)) goto event_495_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(619, str_sees_1700, 0);
    }
    event_495_6_end: ;
}
void Frames::loop_desklos_6()
{
    event_func_2545();
    event_func_2546();
    event_func_2547();
    event_func_2548();
}
void Frames::event_func_2549()
{
    // event 488_6
    {
        if (!(group_setup_1)) goto event_488_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(619, str_sees_1700, 0);
    }
    event_488_6_end: ;
}
void Frames::event_func_2550()
{
    // event 489_6
    {
        if (!(group_setup_1)) goto event_489_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_nearest_bed_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_489_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(625, str_bedid_1706, ((Active*)get_single(inmateBed_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(623, str_bedx_1704, ((Active*)get_single(inmateBed_instances, default_active_instance))->get_x()+8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(624, str_bedy_1705, ((Active*)get_single(inmateBed_instances, default_active_instance))->get_y()+16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(622, str_range_1703, get_distance_int(((AssociateArray*)get_instance(gameVariables_instances))->get_value(620, str_deskx_1701), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(621, str_desky_1702), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(623, str_bedx_1704), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(624, str_bedy_1705)));
    }
    event_489_6_end: ;
}
void Frames::event_func_2551()
{
    // event 490_6
    {
        if (!(group_setup_1)) goto event_490_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(622, str_range_1703)) < (100))) goto event_490_6_end;
        {
            loop_desklos_running = true;
            int times = int(1);
            loop_desklos_index = 0;
            while (loop_desklos_index < times) {
                loop_desklos_6();
                if (!loop_desklos_running) break;
                loop_desklos_index++;
            }
        }
    }
    event_490_6_end: ;
}
void Frames::event_func_2552()
{
    // event 491_6
    {
        if (!(group_setup_1)) goto event_491_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(619, str_sees_1700)) == (1))) goto event_491_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(622, str_range_1703)) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(626, str_nearest_1707)))) goto event_491_6_end;
        desks_305_instances.clear_selection();
        for (ObjectIterator it(desks_305_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_desk_ids_index+1))) { it.deselect(); continue; }
        }
        if (!desks_305_instances.has_selection()) goto event_491_6_end;
        for (ObjectIterator it(desks_305_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(625, str_bedid_1706));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(626, str_nearest_1707, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(622, str_range_1703));
    }
    event_491_6_end: ;
}
void Frames::loop_nearest_bed_6()
{
    event_func_2549();
    event_func_2550();
    event_func_2551();
    event_func_2552();
}
void Frames::event_func_2553()
{
    // event 487_6
    {
        if (!(group_setup_1)) goto event_487_6_end;
        desks_305_instances.clear_selection();
        for (ObjectIterator it(desks_305_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_desk_ids_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(16777216))) { it.deselect(); continue; }
        }
        if (!desks_305_instances.has_selection()) goto event_487_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(620, str_deskx_1701, ((Active*)get_single(desks_305_instances, default_active_instance))->get_x()+8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(621, str_desky_1702, ((Active*)get_single(desks_305_instances, default_active_instance))->get_y()+8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(625, str_bedid_1706, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(626, str_nearest_1707, 1000);
        {
            loop_nearest_bed_running = true;
            int times = int(inmateBed_instances.size());
            loop_nearest_bed_index = 0;
            while (loop_nearest_bed_index < times) {
                loop_nearest_bed_6();
                if (!loop_nearest_bed_running) break;
                loop_nearest_bed_index++;
            }
        }
    }
    event_487_6_end: ;
}
void Frames::loop_desk_ids_6()
{
    event_func_2553();
}
void Frames::event_func_2554()
{
    // event 3981_6
    {
        if (!(group_code_1)) goto event_3981_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3981_6_end;
        activesystembox_450_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_activesystembox_450(0, 0), 5);
            activesystembox_450_instances.add_back();
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(0, -6);
        }
        ((SystemBox*)get_single(activesystembox_450_instances, default_systembox_instance))->move_back(((Active*)get_instance(sidePanel_instances)));
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142));
            ((SystemBox*)*it)->alterables->values.set(1, 80+string_size(((SystemBox*)*it)->text));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
        }
    }
    event_3981_6_end: ;
}
void Frames::loop_checkpoint_speak_6()
{
    event_func_1383();
    event_func_2554();
}
