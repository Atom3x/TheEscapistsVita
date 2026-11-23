#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_749 processes event block(s) 2210_6. Actions/conditions:
//        2210_6: creates a ziplinesniffer 454 object; sets the selected object's numeric value to
//        ((Active*)get_single(zipstart_389_instances, default_active_instance))->get_x()+8; sets the selected
//        object's numeric value to ((Active*)get_single(zipstart_389_instances, default_active_instance))->get_y()+8;
//        plus 5 more actions.
void Frames::event_func_749()
{
    // event 2210_6 : creates a ziplinesniffer 454 object; sets the selected object's numeric value to ((Active*)get_single(zipstart_389_instances, default_active_instance))->get_x()+8; sets the selected object's numeric value to ((Active*)get_single(zipstart_389_instances, default_active_instance))->get_y()+8; plus 5 more actions
    {
        if (!(group_code_1)) goto event_2210_6_end;
        zipstart_389_instances.clear_selection();
        for (ObjectIterator it(zipstart_389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_setup_zip_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_left_82))) { it.deselect(); continue; }
        }
        if (!zipstart_389_instances.has_selection()) goto event_2210_6_end;
        FrameObject * single_instance_2210_6_0; single_instance_2210_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(zipstart_389_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ziplinesniffer_454(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2210_6_0 == NULL)
                    single_instance_2210_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2210_6_0))->alterables->values.set(2, ((Active*)get_single(zipstart_389_instances, default_active_instance))->get_x()+8);
        ((Active*)((Active*)single_instance_2210_6_0))->alterables->values.set(3, ((Active*)get_single(zipstart_389_instances, default_active_instance))->get_y()+8);
        ((Active*)((Active*)single_instance_2210_6_0))->set_direction(16);
        ((Active*)((Active*)single_instance_2210_6_0))->alterables->strings.set(0, str_left_640);
    }
    event_2210_6_end: ;
}
// Function purpose: generated callback event_func_750 processes event block(s) 2211_6. Actions/conditions:
//        2211_6: creates a ziplinesniffer 454 object; sets the selected object's numeric value to
//        ((Active*)get_single(zipstart_389_instances, default_active_instance))->get_x()+8; sets the selected
//        object's numeric value to ((Active*)get_single(zipstart_389_instances, default_active_instance))->get_y()+8;
//        plus 5 more actions.
void Frames::event_func_750()
{
    // event 2211_6 : creates a ziplinesniffer 454 object; sets the selected object's numeric value to ((Active*)get_single(zipstart_389_instances, default_active_instance))->get_x()+8; sets the selected object's numeric value to ((Active*)get_single(zipstart_389_instances, default_active_instance))->get_y()+8; plus 5 more actions
    {
        if (!(group_code_1)) goto event_2211_6_end;
        zipstart_389_instances.clear_selection();
        for (ObjectIterator it(zipstart_389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_setup_zip_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_right_83))) { it.deselect(); continue; }
        }
        if (!zipstart_389_instances.has_selection()) goto event_2211_6_end;
        FrameObject * single_instance_2211_6_0; single_instance_2211_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(zipstart_389_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ziplinesniffer_454(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2211_6_0 == NULL)
                    single_instance_2211_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2211_6_0))->alterables->values.set(2, ((Active*)get_single(zipstart_389_instances, default_active_instance))->get_x()+8);
        ((Active*)((Active*)single_instance_2211_6_0))->alterables->values.set(3, ((Active*)get_single(zipstart_389_instances, default_active_instance))->get_y()+8);
        ((Active*)((Active*)single_instance_2211_6_0))->set_direction(0);
        ((Active*)((Active*)single_instance_2211_6_0))->alterables->strings.set(0, str_right_641);
    }
    event_2211_6_end: ;
}
// Function purpose: generated callback event_func_751 processes event block(s) 2212_6. Actions/conditions:
//        2212_6: creates a ziplinesniffer 454 object; sets the selected object's numeric value to
//        ((Active*)get_single(zipstart_389_instances, default_active_instance))->get_x()+8; sets the selected
//        object's numeric value to ((Active*)get_single(zipstart_389_instances, default_active_instance))->get_y()+8;
//        plus 5 more actions.
void Frames::event_func_751()
{
    // event 2212_6 : creates a ziplinesniffer 454 object; sets the selected object's numeric value to ((Active*)get_single(zipstart_389_instances, default_active_instance))->get_x()+8; sets the selected object's numeric value to ((Active*)get_single(zipstart_389_instances, default_active_instance))->get_y()+8; plus 5 more actions
    {
        if (!(group_code_1)) goto event_2212_6_end;
        zipstart_389_instances.clear_selection();
        for (ObjectIterator it(zipstart_389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_setup_zip_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_down_81))) { it.deselect(); continue; }
        }
        if (!zipstart_389_instances.has_selection()) goto event_2212_6_end;
        FrameObject * single_instance_2212_6_0; single_instance_2212_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(zipstart_389_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ziplinesniffer_454(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2212_6_0 == NULL)
                    single_instance_2212_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2212_6_0))->alterables->values.set(2, ((Active*)get_single(zipstart_389_instances, default_active_instance))->get_x()+8);
        ((Active*)((Active*)single_instance_2212_6_0))->alterables->values.set(3, ((Active*)get_single(zipstart_389_instances, default_active_instance))->get_y()+8);
        ((Active*)((Active*)single_instance_2212_6_0))->set_direction(24);
        ((Active*)((Active*)single_instance_2212_6_0))->alterables->strings.set(0, str_down_642);
    }
    event_2212_6_end: ;
}
void Frames::loop_setup_zip_6()
{
    event_func_748();
    event_func_749();
    event_func_750();
    event_func_751();
}
// Function purpose: generated callback event_func_752 processes event block(s) 2728_6. Actions/conditions:
//        2728_6: sets the object position in the world; changes the selected object transparency; sets the selected
//        object's numeric value to 3; plus 5 more actions.
void Frames::event_func_752()
{
    // event 2728_6 : sets the object position in the world; changes the selected object transparency; sets the selected object's numeric value to 3; plus 5 more actions
    {
        if (!(group_code_1)) goto event_2728_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2728_6_end;
        waypointinmate2_311_instances.clear_selection();
        FrameObject * single_instance_2728_6_0; single_instance_2728_6_0 = pick_random(waypointinmate2_311_instances);
        if (single_instance_2728_6_0 == NULL) goto event_2728_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(23, str_outsidegroundtiles_485), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)single_instance_2728_6_0)->get_x()/MathHelper()/16), (((Active*)single_instance_2728_6_0)->get_y()/MathHelper()/16), 2))+str__96, 0)) == (-1))) goto event_2728_6_end;
        dirt_242_instances.clear_selection();
        for (ObjectIterator it(dirt_242_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
        }
        if (!dirt_242_instances.has_selection()) goto event_2728_6_end;
        for (ObjectIterator it(dirt_242_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)single_instance_2728_6_0);
            if (parent == NULL) goto pos_end_2728_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_2728_6_1: ;
        }
        for (ObjectIterator it(dirt_242_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(80+randrange_event(80));
            ((Active*)*it)->alterables->values.set(1, 3);
            ((Active*)*it)->move_back();
            ((Active*)*it)->set_visible(true);
        }
    }
    event_2728_6_end: ;
}
// Function purpose: generated callback event_func_753 processes event block(s) 2729_6. Actions/conditions:
//        2729_6: sets the object position in the world; sets the selected object's direction to 16; changes the
//        selected object transparency; plus 6 more actions.
void Frames::event_func_753()
{
    // event 2729_6 : sets the object position in the world; sets the selected object's direction to 16; changes the selected object transparency; plus 6 more actions
    {
        if (!(group_code_1)) goto event_2729_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2729_6_end;
        waypointinmate2_311_instances.clear_selection();
        FrameObject * single_instance_2729_6_0; single_instance_2729_6_0 = pick_random(waypointinmate2_311_instances);
        if (single_instance_2729_6_0 == NULL) goto event_2729_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(23, str_outsidegroundtiles_485), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)single_instance_2729_6_0)->get_x()/MathHelper()/16), (((Active*)single_instance_2729_6_0)->get_y()/MathHelper()/16), 2))+str__96, 0)) != (-1))) goto event_2729_6_end;
        dirt_242_instances.clear_selection();
        for (ObjectIterator it(dirt_242_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
        }
        if (!dirt_242_instances.has_selection()) goto event_2729_6_end;
        for (ObjectIterator it(dirt_242_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)single_instance_2729_6_0);
            if (parent == NULL) goto pos_end_2729_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_2729_6_1: ;
        }
        for (ObjectIterator it(dirt_242_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->blend_color.set_alpha_coefficient(0);
            ((Active*)*it)->alterables->values.set(1, 3);
            ((Active*)*it)->move_back();
            ((Active*)*it)->set_visible(true);
        }
    }
    event_2729_6_end: ;
}
void Frames::loop_find_dirt_spot_6()
{
    event_func_752();
    event_func_753();
}
// Function purpose: generated callback event_func_754 processes event block(s) 557_6. Actions/conditions:
//        557_6: splits saved text into fields; adds a line to the current list.
void Frames::event_func_754()
{
    // event 557_6 : splits saved text into fields; adds a line to the current list
    {
        if (!(group_setup_1)) goto event_557_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(saving_350_instances))->get_string_default(str_flooritems_444, number_to_string(loop_load_floor_items_index+1), empty_string), str__254);
        ((ListObject*)get_instance(missions_298_instances))->add_line(((INI*)get_instance(saving_350_instances))->get_string_default(str_missions_643, number_to_string(loop_load_missions_index+1), empty_string));
    }
    event_557_6_end: ;
}
void Frames::loop_load_missions_6()
{
    event_func_754();
}
// Function purpose: generated callback event_func_755 processes event block(s) 2631_6. Actions/conditions:
//        2631_6: adds a outfitguard 248 instance; sets the selected object's numeric value to -1; sets the selected
//        object's numeric value to -1.
void Frames::event_func_755()
{
    // event 2631_6 : adds a outfitguard 248 instance; sets the selected object's numeric value to -1; sets the selected object's numeric value to -1
    {
        if (!(group_code_1)) goto event_2631_6_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 2)) == (str_3_644))) goto event_2631_6_end;
        outfitguard_248_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitguard_248(0, 0), 1);
            outfitguard_248_instances.add_back();
        }
        for (ObjectIterator it(outfitguard_248_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -1);
            ((Active*)*it)->alterables->values.set(25, -1);
        }
    }
    event_2631_6_end: ;
}
// Function purpose: generated callback event_func_756 processes event block(s) 2632_6. Actions/conditions:
//        2632_6: adds a outfitguardescteam 476 instance; sets the selected object's numeric value to -1; sets the
//        selected object's numeric value to -1.
void Frames::event_func_756()
{
    // event 2632_6 : adds a outfitguardescteam 476 instance; sets the selected object's numeric value to -1; sets the selected object's numeric value to -1
    {
        if (!(group_code_1)) goto event_2632_6_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 4)) == (str_211_645))) goto event_2632_6_end;
        outfitguardescteam_476_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitguardescteam_476(0, 0), 1);
            outfitguardescteam_476_instances.add_back();
        }
        for (ObjectIterator it(outfitguardescteam_476_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -1);
            ((Active*)*it)->alterables->values.set(25, -1);
        }
    }
    event_2632_6_end: ;
}
// Function purpose: generated callback event_func_757 processes event block(s) 2633_6. Actions/conditions:
//        2633_6: adds a outfitguarddtaf 485 instance; sets the selected object's numeric value to -1; sets the
//        selected object's numeric value to -1.
void Frames::event_func_757()
{
    // event 2633_6 : adds a outfitguarddtaf 485 instance; sets the selected object's numeric value to -1; sets the selected object's numeric value to -1
    {
        if (!(group_code_1)) goto event_2633_6_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 4)) == (str_228_646))) goto event_2633_6_end;
        outfitguarddtaf_485_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitguarddtaf_485(-16, -16), 1);
            outfitguarddtaf_485_instances.add_back();
        }
        for (ObjectIterator it(outfitguarddtaf_485_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -1);
            ((Active*)*it)->alterables->values.set(25, -1);
        }
    }
    event_2633_6_end: ;
}
// Function purpose: generated callback event_func_758 processes event block(s) 2634_6. Actions/conditions:
//        2634_6: adds a outfitguardss 515 instance; sets the selected object's numeric value to -1; sets the selected
//        object's numeric value to -1.
void Frames::event_func_758()
{
    // event 2634_6 : adds a outfitguardss 515 instance; sets the selected object's numeric value to -1; sets the selected object's numeric value to -1
    {
        if (!(group_code_1)) goto event_2634_6_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 4)) == (str_239_647))) goto event_2634_6_end;
        outfitguardss_515_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitguardss_515(-16, -16), 1);
            outfitguardss_515_instances.add_back();
        }
        for (ObjectIterator it(outfitguardss_515_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -1);
            ((Active*)*it)->alterables->values.set(25, -1);
        }
    }
    event_2634_6_end: ;
}
// Function purpose: generated callback event_func_759 processes event block(s) 2635_6. Actions/conditions:
//        2635_6: adds a outfitinmate 249 instance; sets the selected object's numeric value to -1; sets the selected
//        object's numeric value to -1.
void Frames::event_func_759()
{
    // event 2635_6 : adds a outfitinmate 249 instance; sets the selected object's numeric value to -1; sets the selected object's numeric value to -1
    {
        if (!(group_code_1)) goto event_2635_6_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 2)) == (str_4_648))) goto event_2635_6_end;
        outfitinmate_249_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmate_249(0, 0), 1);
            outfitinmate_249_instances.add_back();
        }
        for (ObjectIterator it(outfitinmate_249_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
            ((Active*)*it)->alterables->values.set(0, -1);
        }
    }
    event_2635_6_end: ;
}
// Function purpose: generated callback event_func_760 processes event block(s) 2636_6. Actions/conditions:
//        2636_6: adds a outfitinmate 249 instance; sets the selected object's numeric value to -1; sets the selected
//        object's numeric value to -1.
void Frames::event_func_760()
{
    // event 2636_6 : adds a outfitinmate 249 instance; sets the selected object's numeric value to -1; sets the selected object's numeric value to -1
    {
        if (!(group_code_1)) goto event_2636_6_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 4)) == (str_130_649))) goto event_2636_6_end;
        outfitinmate_249_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmate_249(0, 0), 1);
            outfitinmate_249_instances.add_back();
        }
        for (ObjectIterator it(outfitinmate_249_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
            ((Active*)*it)->alterables->values.set(0, -1);
        }
    }
    event_2636_6_end: ;
}
// Function purpose: generated callback event_func_761 processes event block(s) 2637_6. Actions/conditions:
//        2637_6: adds a outfitinmate 249 instance; sets the selected object's numeric value to -1; sets the selected
//        object's numeric value to -1.
void Frames::event_func_761()
{
    // event 2637_6 : adds a outfitinmate 249 instance; sets the selected object's numeric value to -1; sets the selected object's numeric value to -1
    {
        if (!(group_code_1)) goto event_2637_6_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 4)) == (str_129_650))) goto event_2637_6_end;
        outfitinmate_249_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmate_249(0, 0), 1);
            outfitinmate_249_instances.add_back();
        }
        for (ObjectIterator it(outfitinmate_249_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
            ((Active*)*it)->alterables->values.set(0, -1);
        }
    }
    event_2637_6_end: ;
}
// Function purpose: generated callback event_func_762 processes event block(s) 2638_6. Actions/conditions:
//        2638_6: adds a outfitinmate 249 instance; sets the selected object's numeric value to -1; sets the selected
//        object's numeric value to -1.
void Frames::event_func_762()
{
    // event 2638_6 : adds a outfitinmate 249 instance; sets the selected object's numeric value to -1; sets the selected object's numeric value to -1
    {
        if (!(group_code_1)) goto event_2638_6_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 4)) == (str_128_651))) goto event_2638_6_end;
        outfitinmate_249_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmate_249(0, 0), 1);
            outfitinmate_249_instances.add_back();
        }
        for (ObjectIterator it(outfitinmate_249_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
            ((Active*)*it)->alterables->values.set(0, -1);
        }
    }
    event_2638_6_end: ;
}
// Function purpose: generated callback event_func_763 processes event block(s) 2639_6. Actions/conditions:
//        2639_6: adds a outfitinmatess 503 instance; sets the selected object's numeric value to -1; sets the
//        selected object's numeric value to -1.
void Frames::event_func_763()
{
    // event 2639_6 : adds a outfitinmatess 503 instance; sets the selected object's numeric value to -1; sets the selected object's numeric value to -1
    {
        if (!(group_code_1)) goto event_2639_6_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 4)) == (str_238_652))) goto event_2639_6_end;
        outfitinmatess_503_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmatess_503(0, 0), 1);
            outfitinmatess_503_instances.add_back();
        }
        for (ObjectIterator it(outfitinmatess_503_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
            ((Active*)*it)->alterables->values.set(0, -1);
        }
    }
    event_2639_6_end: ;
}
// Function purpose: generated callback event_func_764 processes event block(s) 2640_6. Actions/conditions:
//        2640_6: adds a overallsoutfit 434 instance; sets the selected object's numeric value to -1.
void Frames::event_func_764()
{
    // event 2640_6 : adds a overallsoutfit 434 instance; sets the selected object's numeric value to -1
    {
        if (!(group_code_1)) goto event_2640_6_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 3)) == (str_38_653))) goto event_2640_6_end;
        overallsoutfit_434_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_overallsoutfit_434(0, 0), 1);
            overallsoutfit_434_instances.add_back();
        }
        for (ObjectIterator it(overallsoutfit_434_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
        }
    }
    event_2640_6_end: ;
}
// Function purpose: generated callback event_func_765 processes event block(s) 2641_6. Actions/conditions:
//        2641_6: adds a outfitpow 376 instance; sets the selected object's numeric value to -1.
void Frames::event_func_765()
{
    // event 2641_6 : adds a outfitpow 376 instance; sets the selected object's numeric value to -1
    {
        if (!(group_code_1)) goto event_2641_6_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 4)) == (str_127_654))) goto event_2641_6_end;
        outfitpow_376_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitpow_376(0, 0), 1);
            outfitpow_376_instances.add_back();
        }
        for (ObjectIterator it(outfitpow_376_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
        }
    }
    event_2641_6_end: ;
}
// Function purpose: generated callback event_func_766 processes event block(s) 2642_6. Actions/conditions:
//        2642_6: adds a outfitpow 376 instance; sets the selected object's numeric value to -1.
void Frames::event_func_766()
{
    // event 2642_6 : adds a outfitpow 376 instance; sets the selected object's numeric value to -1
    {
        if (!(group_code_1)) goto event_2642_6_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 4)) == (str_142_655))) goto event_2642_6_end;
        outfitpow_376_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitpow_376(0, 0), 1);
            outfitpow_376_instances.add_back();
        }
        for (ObjectIterator it(outfitpow_376_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
        }
    }
    event_2642_6_end: ;
}
// Function purpose: generated callback event_func_767 processes event block(s) 2643_6. Actions/conditions:
//        2643_6: adds a outfitpow 376 instance; sets the selected object's numeric value to -1.
void Frames::event_func_767()
{
    // event 2643_6 : adds a outfitpow 376 instance; sets the selected object's numeric value to -1
    {
        if (!(group_code_1)) goto event_2643_6_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 4)) == (str_143_656))) goto event_2643_6_end;
        outfitpow_376_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitpow_376(0, 0), 1);
            outfitpow_376_instances.add_back();
        }
        for (ObjectIterator it(outfitpow_376_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
        }
    }
    event_2643_6_end: ;
}
// Function purpose: generated callback event_func_768 processes event block(s) 2644_6. Actions/conditions:
//        2644_6: adds a outfitpow 376 instance; sets the selected object's numeric value to -1.
void Frames::event_func_768()
{
    // event 2644_6 : adds a outfitpow 376 instance; sets the selected object's numeric value to -1
    {
        if (!(group_code_1)) goto event_2644_6_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 4)) == (str_144_657))) goto event_2644_6_end;
        outfitpow_376_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitpow_376(0, 0), 1);
            outfitpow_376_instances.add_back();
        }
        for (ObjectIterator it(outfitpow_376_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
        }
    }
    event_2644_6_end: ;
}
// Function purpose: generated callback event_func_769 processes event block(s) 2645_6. Actions/conditions:
//        2645_6: adds a outfitinmateescteam 481 instance; sets the selected object's numeric value to -1.
void Frames::event_func_769()
{
    // event 2645_6 : adds a outfitinmateescteam 481 instance; sets the selected object's numeric value to -1
    {
        if (!(group_code_1)) goto event_2645_6_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 4)) == (str_210_658))) goto event_2645_6_end;
        outfitinmateescteam_481_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmateescteam_481(0, 0), 1);
            outfitinmateescteam_481_instances.add_back();
        }
        for (ObjectIterator it(outfitinmateescteam_481_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
        }
    }
    event_2645_6_end: ;
}
// Function purpose: generated callback event_func_770 processes event block(s) 2646_6. Actions/conditions:
//        2646_6: adds a outfitinmatebond 486 instance; sets the selected object's numeric value to -1.
void Frames::event_func_770()
{
    // event 2646_6 : adds a outfitinmatebond 486 instance; sets the selected object's numeric value to -1
    {
        if (!(group_code_1)) goto event_2646_6_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), 4)) == (str_215_659))) goto event_2646_6_end;
        outfitinmatebond_486_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmatebond_486(-16, -16), 1);
            outfitinmatebond_486_instances.add_back();
        }
        for (ObjectIterator it(outfitinmatebond_486_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
        }
    }
    event_2646_6_end: ;
}
void Frames::loop_gimme_outfit_6()
{
    event_func_755();
    event_func_756();
    event_func_757();
    event_func_758();
    event_func_759();
    event_func_760();
    event_func_761();
    event_func_762();
    event_func_763();
    event_func_764();
    event_func_765();
    event_func_766();
    event_func_767();
    event_func_768();
    event_func_769();
    event_func_770();
}
// Function purpose: generated callback event_func_771 processes event block(s) 1751_6. Actions/conditions:
//        1751_6: sets the selected object's numeric value to ((Active*)get_single(waypointcanteenguard_181_instances,
//        it.current_index, default_active_instance))->get_x()+8; sets the selected object's numeric value to
//        ((Active*)get_single(waypointcanteenguard_181_instances, it.current_index,
//        default_active_instance))->get_y()+8.
void Frames::event_func_771()
{
    // event 1751_6 : sets the selected object's numeric value to ((Active*)get_single(waypointcanteenguard_181_instances, it.current_index, default_active_instance))->get_x()+8; sets the selected object's numeric value to ((Active*)get_single(waypointcanteenguard_181_instances, it.current_index, default_active_instance))->get_y()+8
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1751_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_food_guards_init_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1751_6_end;
        waypointcanteenguard_181_instances.clear_selection();
        for (ObjectIterator it(waypointcanteenguard_181_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_food_guards_init_index+1))) { it.deselect(); continue; }
        }
        if (!waypointcanteenguard_181_instances.has_selection()) goto event_1751_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(waypointcanteenguard_181_instances, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(waypointcanteenguard_181_instances, it.current_index, default_active_instance))->get_y()+8);
        }
    }
    event_1751_6_end: ;
}
void Frames::loop_food_guards_init_6()
{
    event_func_771();
}
// Function purpose: generated callback event_func_772 processes event block(s) 1104_6. Actions/conditions:
//        1104_6: sets GuardSees to 1; sets the selected object's layer to 7-1; sets the selected object's horizontal
//        position to gameVariables->get_value(103, GuardX); plus 6 more actions.
void Frames::event_func_772()
{
    // event 1104_6 : sets GuardSees to 1; sets the selected object's layer to 7-1; sets the selected object's horizontal position to gameVariables->get_value(103, GuardX); plus 6 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1104_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(0, str_guardsees_433, 1);
        ((Active*)get_instance(los_198_instances))->set_layer(7-1);
        ((Active*)get_instance(los_198_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(103, str_guardx_660));
        ((Active*)get_instance(los_198_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(104, str_guardy_661));
        ((Active*)get_instance(los_198_instances))->set_x_scale(get_distance_int(((AssociateArray*)get_instance(gameVariables_instances))->get_value(103, str_guardx_660), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(104, str_guardy_661), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(105, str_lookx_662), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(106, str_looky_663)));
        ((Active*)get_instance(los_198_instances))->set_angle(get_angle_int(((AssociateArray*)get_instance(gameVariables_instances))->get_value(103, str_guardx_660), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(104, str_guardy_661), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(105, str_lookx_662), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(106, str_looky_663)), 0);
    }
    event_1104_6_end: ;
}
// Function purpose: generated callback event_func_773 processes event block(s) 1105_6. Actions/conditions:
//        1105_6: sets GuardSees to 0.
void Frames::event_func_773()
{
    // event 1105_6 : sets GuardSees to 0
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1105_6_end;
        if (!(((Active*)get_instance(los_198_instances))->overlaps_background())) goto event_1105_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(0, str_guardsees_433, 0);
    }
    event_1105_6_end: ;
}
// Function purpose: generated callback event_func_774 processes event block(s) 1201_6. Actions/conditions:
//        1201_6: sets InmateSees to 2.
void Frames::event_func_774()
{
    // event 1201_6 : sets InmateSees to 2
    {
        if (!(group_code_1)) goto event_1201_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(107, str_inmatesees_664)) == (1))) goto event_1201_6_end;
        los_198_instances.clear_selection();
        qualifier_22.clear_selection();
        if (!check_overlap(los_198_instances, qualifier_22)) goto event_1201_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(107, str_inmatesees_664, 2);
    }
    event_1201_6_end: ;
}
void Frames::loop_check_los_6()
{
    event_func_772();
    event_func_773();
    event_func_774();
}
// Function purpose: generated callback event_func_775 processes event block(s) 2131_6. Actions/conditions:
//        2131_6: creates a icons 433 object; sets the target object's direction; moves the target object to a layer;
//        plus 1 more actions.
void Frames::event_func_775()
{
    // event 2131_6 : creates a icons 433 object; sets the target object's direction; moves the target object to a layer; plus 1 more actions
    {
        if (!(group_code_1)) goto event_2131_6_end;
        FrameObject * single_instance_2131_6_0; single_instance_2131_6_0 = NULL;
        // select single: true false false
        qualifier_2.clear_selection();
        for (QualifierIterator p_it(qualifier_2); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_icons_433(parent->x + 0, parent->y + -10), parent->layer);
                if (single_instance_2131_6_0 == NULL)
                    single_instance_2131_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2131_6_0))->set_direction(28);
        ((Active*)((Active*)single_instance_2131_6_0))->set_layer(6-1);
        ((Active*)((Active*)single_instance_2131_6_0))->alterables->values.set(25, -1);
    }
    event_2131_6_end: ;
}
void Frames::loop_icon_int_6()
{
    event_func_775();
}
// Function purpose: generated callback event_func_776 processes event block(s) 482_6. Actions/conditions:
//        482_6: sets the selected object's numeric value to randrange_event(25)+(gameVariables->get_value(83,
//        NPClvl)*25); sets the selected object's numeric value to
//        randrange_event(25)+(gameVariables->get_value(83, NPClvl)*25); sets the selected object's numeric
//        value to randrange_event(25)+(gameVariables->get_value(83, NPClvl)*25); plus 7 more actions.
void Frames::event_func_776()
{
    // event 482_6 : sets the selected object's numeric value to randrange_event(25)+(gameVariables->get_value(83, NPClvl)*25); sets the selected object's numeric value to randrange_event(25)+(gameVariables->get_value(83, NPClvl)*25); sets the selected object's numeric value to randrange_event(25)+(gameVariables->get_value(83, NPClvl)*25); plus 7 more actions
    {
        if (!(group_setup_1)) goto event_482_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_set_stats_index+1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_482_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, randrange_event(25)+(((AssociateArray*)get_instance(gameVariables_instances))->get_value(83, str_npclvl_587)*25));
            ((Active*)*it)->alterables->values.set(9, randrange_event(25)+(((AssociateArray*)get_instance(gameVariables_instances))->get_value(83, str_npclvl_587)*25));
            ((Active*)*it)->alterables->values.set(5, randrange_event(25)+(((AssociateArray*)get_instance(gameVariables_instances))->get_value(83, str_npclvl_587)*25));
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->alterables->values.get(8)/MathHelper()/2);
            ((Active*)*it)->get_movement()->set_speed(4+(((Active*)*it)->alterables->values.get(9)/MathHelper()/15));
            ((Active*)*it)->alterables->values.set(12, 15+(randrange_event(65)));
        }
        ((ListObject*)get_instance(listguards_218_instances))->add_line(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->strings.get(0));
    }
    event_482_6_end: ;
}
// Function purpose: generated callback event_func_777 processes event block(s) 483_6. Actions/conditions:
//        483_6: sets the selected object's numeric value to randrange_event(25)+(gameVariables->get_value(83,
//        NPClvl)*25); sets the selected object's numeric value to
//        randrange_event(25)+(gameVariables->get_value(83, NPClvl)*25); sets the selected object's numeric
//        value to randrange_event(100); plus 7 more actions.
void Frames::event_func_777()
{
    // event 483_6 : sets the selected object's numeric value to randrange_event(25)+(gameVariables->get_value(83, NPClvl)*25); sets the selected object's numeric value to randrange_event(25)+(gameVariables->get_value(83, NPClvl)*25); sets the selected object's numeric value to randrange_event(100); plus 7 more actions
    {
        if (!(group_setup_1)) goto event_483_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_set_stats_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_483_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, randrange_event(25)+(((AssociateArray*)get_instance(gameVariables_instances))->get_value(83, str_npclvl_587)*25));
            ((Active*)*it)->alterables->values.set(9, randrange_event(25)+(((AssociateArray*)get_instance(gameVariables_instances))->get_value(83, str_npclvl_587)*25));
            ((Active*)*it)->alterables->values.set(5, randrange_event(100));
            ((Active*)*it)->alterables->values.set(12, (75-(25*((AssociateArray*)get_instance(gameVariables_instances))->get_value(83, str_npclvl_587)))+randrange_event(50));
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->alterables->values.get(8)/MathHelper()/2);
            ((Active*)*it)->get_movement()->set_speed(4+(((Active*)*it)->alterables->values.get(9)/MathHelper()/15));
        }
        ((ListObject*)get_instance(listinmates_217_instances))->add_line(((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(0));
    }
    event_483_6_end: ;
}
void Frames::loop_set_stats_6()
{
    event_func_776();
    event_func_777();
}
// Function purpose: generated callback event_func_778 processes event block(s) 385_6. Actions/conditions:
//        385_6: sets CraftNotes to gameVariables->get_string(108,
//        CraftNotes)+globals_127->get_item_name(CraftNotes, loop_make_craftnote_str_index)+@.
void Frames::event_func_778()
{
    // event 385_6 : sets CraftNotes to gameVariables->get_string(108, CraftNotes)+globals_127->get_item_name(CraftNotes, loop_make_craftnote_str_index)+@
    {
        if (!(group_setup_1)) goto event_385_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(108, str_craftnotes_665, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(108, str_craftnotes_665)+((INI*)get_instance(globals_127_instances))->get_item_name(str_craftnotes_665, loop_make_craftnote_str_index)+str__254);
    }
    event_385_6_end: ;
}
void Frames::loop_make_craftnote_str_6()
{
    event_func_778();
}
// Function purpose: generated callback event_func_779 processes event block(s) 561_6. Actions/conditions:
//        561_6: splits saved text into fields; adds a dighole 207 instance; sets the selected object's horizontal
//        position to (string_to_number(stringtokenizer_81->get(0))*16)+8; plus 7 more actions.
void Frames::event_func_779()
{
    // event 561_6 : splits saved text into fields; adds a dighole 207 instance; sets the selected object's horizontal position to (string_to_number(stringtokenizer_81->get(0))*16)+8; plus 7 more actions
    {
        if (!(group_setup_1)) goto event_561_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(loop_load_holes_index), str_x_437);
        dighole_207_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dighole_207(0, 0), 0);
            dighole_207_instances.add_back();
        }
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0))*16)+8);
            ((Active*)*it)->set_y((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1))*16)+8);
            ((Active*)*it)->alterables->values.set(1, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
            ((Active*)*it)->set_direction(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
        }
    }
    event_561_6_end: ;
}
void Frames::loop_load_holes_6()
{
    event_func_779();
}
// Function purpose: generated callback event_func_780 processes event block(s) 445_6. Actions/conditions:
//        445_6: sets a stored numeric value.
void Frames::event_func_780()
{
    // event 445_6 : sets a stored numeric value
    {
        if (!(group_setup_1)) goto event_445_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(str_npc_avatar_520+number_to_string(loop_create_inmates_index+1), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1)));
    }
    event_445_6_end: ;
}
// Function purpose: generated callback event_func_781 processes event block(s) 446_6. Actions/conditions:
//        446_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_781()
{
    // event 446_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_446_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (0))) goto event_446_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_446_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_446_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_446_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmate4_193_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmate4_193(-16, -16), 1);
            inmate4_193_instances.add_back();
        }
        for (ObjectIterator it(inmate4_193_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmate4_193_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_446_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_446_6_3: ;
        }
    }
    event_446_6_end: ;
}
// Function purpose: generated callback event_func_782 processes event block(s) 447_6. Actions/conditions:
//        447_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_782()
{
    // event 447_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_447_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (1))) goto event_447_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_447_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_447_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_447_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmate3_192_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmate3_192(-16, -16), 1);
            inmate3_192_instances.add_back();
        }
        for (ObjectIterator it(inmate3_192_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmate3_192_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_447_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_447_6_3: ;
        }
    }
    event_447_6_end: ;
}
// Function purpose: generated callback event_func_783 processes event block(s) 448_6. Actions/conditions:
//        448_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_783()
{
    // event 448_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_448_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (2))) goto event_448_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_448_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_448_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_448_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmate2_190_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmate2_190(-16, -16), 1);
            inmate2_190_instances.add_back();
        }
        for (ObjectIterator it(inmate2_190_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmate2_190_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_448_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_448_6_3: ;
        }
    }
    event_448_6_end: ;
}
// Function purpose: generated callback event_func_784 processes event block(s) 449_6. Actions/conditions:
//        449_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_784()
{
    // event 449_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_449_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (3))) goto event_449_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_449_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_449_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_449_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmate7_286_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmate7_286(-16, -16), 1);
            inmate7_286_instances.add_back();
        }
        for (ObjectIterator it(inmate7_286_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmate7_286_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_449_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_449_6_3: ;
        }
    }
    event_449_6_end: ;
}
// Function purpose: generated callback event_func_785 processes event block(s) 450_6. Actions/conditions:
//        450_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_785()
{
    // event 450_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_450_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (4))) goto event_450_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_450_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_450_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_450_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmate11_290_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmate11_290(-16, -16), 1);
            inmate11_290_instances.add_back();
        }
        for (ObjectIterator it(inmate11_290_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmate11_290_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_450_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_450_6_3: ;
        }
    }
    event_450_6_end: ;
}
// Function purpose: generated callback event_func_786 processes event block(s) 451_6. Actions/conditions:
//        451_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_786()
{
    // event 451_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_451_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (5))) goto event_451_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_451_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_451_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_451_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmate10_289_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmate10_289(-16, -16), 1);
            inmate10_289_instances.add_back();
        }
        for (ObjectIterator it(inmate10_289_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmate10_289_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_451_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_451_6_3: ;
        }
    }
    event_451_6_end: ;
}
// Function purpose: generated callback event_func_787 processes event block(s) 452_6. Actions/conditions:
//        452_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_787()
{
    // event 452_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_452_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (6))) goto event_452_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_452_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_452_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_452_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmate8_287_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmate8_287(-16, -16), 1);
            inmate8_287_instances.add_back();
        }
        for (ObjectIterator it(inmate8_287_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmate8_287_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_452_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_452_6_3: ;
        }
    }
    event_452_6_end: ;
}
// Function purpose: generated callback event_func_788 processes event block(s) 453_6. Actions/conditions:
//        453_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_788()
{
    // event 453_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_453_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (7))) goto event_453_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_453_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_453_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_453_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmate9_288_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmate9_288(-16, -16), 1);
            inmate9_288_instances.add_back();
        }
        for (ObjectIterator it(inmate9_288_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmate9_288_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_453_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_453_6_3: ;
        }
    }
    event_453_6_end: ;
}
// Function purpose: generated callback event_func_789 processes event block(s) 454_6. Actions/conditions:
//        454_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_789()
{
    // event 454_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_454_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (8))) goto event_454_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_454_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_454_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_454_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmate_175_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmate_175(-16, -16), 1);
            inmate_175_instances.add_back();
        }
        for (ObjectIterator it(inmate_175_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmate_175_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_454_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_454_6_3: ;
        }
    }
    event_454_6_end: ;
}
// Function purpose: generated callback event_func_790 processes event block(s) 455_6. Actions/conditions:
//        455_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 10 more actions.
void Frames::event_func_790()
{
    // event 455_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 10 more actions
    {
        if (!(group_setup_1)) goto event_455_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (9))) goto event_455_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_455_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_455_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_455_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
            ((Active*)*it)->alterables->strings.set(4, str_cage_521);
        }
        inmateescteam1_478_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateescteam1_478(-16, -16), 1);
            inmateescteam1_478_instances.add_back();
        }
        for (ObjectIterator it(inmateescteam1_478_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmateescteam1_478_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_455_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_455_6_3: ;
        }
    }
    event_455_6_end: ;
}
// Function purpose: generated callback event_func_791 processes event block(s) 456_6. Actions/conditions:
//        456_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 10 more actions.
void Frames::event_func_791()
{
    // event 456_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 10 more actions
    {
        if (!(group_setup_1)) goto event_456_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (10))) goto event_456_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_456_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_456_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_456_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
            ((Active*)*it)->alterables->strings.set(4, str_sean_522);
        }
        inmateescteam2_479_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateescteam2_479(-16, -16), 1);
            inmateescteam2_479_instances.add_back();
        }
        for (ObjectIterator it(inmateescteam2_479_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmateescteam2_479_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_456_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_456_6_3: ;
        }
    }
    event_456_6_end: ;
}
// Function purpose: generated callback event_func_792 processes event block(s) 457_6. Actions/conditions:
//        457_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 10 more actions.
void Frames::event_func_792()
{
    // event 457_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 10 more actions
    {
        if (!(group_setup_1)) goto event_457_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (11))) goto event_457_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_457_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_457_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_457_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
            ((Active*)*it)->alterables->strings.set(4, str_andy_523);
        }
        inmateescteam3_480_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateescteam3_480(-16, -16), 1);
            inmateescteam3_480_instances.add_back();
        }
        for (ObjectIterator it(inmateescteam3_480_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmateescteam3_480_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_457_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_457_6_3: ;
        }
    }
    event_457_6_end: ;
}
// Function purpose: generated callback event_func_793 processes event block(s) 458_6. Actions/conditions:
//        458_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_793()
{
    // event 458_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_458_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (12))) goto event_458_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_458_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_458_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_458_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmatedtaf1_488_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatedtaf1_488(-16, -16), 1);
            inmatedtaf1_488_instances.add_back();
        }
        for (ObjectIterator it(inmatedtaf1_488_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatedtaf1_488_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_458_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_458_6_3: ;
        }
    }
    event_458_6_end: ;
}
// Function purpose: generated callback event_func_794 processes event block(s) 459_6. Actions/conditions:
//        459_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_794()
{
    // event 459_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_459_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (13))) goto event_459_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_459_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_459_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_459_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmatedtaf2_489_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatedtaf2_489(-16, -16), 1);
            inmatedtaf2_489_instances.add_back();
        }
        for (ObjectIterator it(inmatedtaf2_489_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatedtaf2_489_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_459_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_459_6_3: ;
        }
    }
    event_459_6_end: ;
}
// Function purpose: generated callback event_func_795 processes event block(s) 460_6. Actions/conditions:
//        460_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_795()
{
    // event 460_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_460_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (14))) goto event_460_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_460_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_460_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_460_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmatedtaf3_490_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatedtaf3_490(-16, -16), 1);
            inmatedtaf3_490_instances.add_back();
        }
        for (ObjectIterator it(inmatedtaf3_490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatedtaf3_490_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_460_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_460_6_3: ;
        }
    }
    event_460_6_end: ;
}
// Function purpose: generated callback event_func_796 processes event block(s) 461_6. Actions/conditions:
//        461_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_796()
{
    // event 461_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_461_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (15))) goto event_461_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_461_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_461_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_461_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmatedtaf4_491_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatedtaf4_491(-16, -16), 1);
            inmatedtaf4_491_instances.add_back();
        }
        for (ObjectIterator it(inmatedtaf4_491_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatedtaf4_491_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_461_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_461_6_3: ;
        }
    }
    event_461_6_end: ;
}
// Function purpose: generated callback event_func_797 processes event block(s) 462_6. Actions/conditions:
//        462_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_797()
{
    // event 462_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_462_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (16))) goto event_462_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_462_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_462_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_462_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmatedtaf5_492_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatedtaf5_492(-16, -16), 1);
            inmatedtaf5_492_instances.add_back();
        }
        for (ObjectIterator it(inmatedtaf5_492_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatedtaf5_492_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_462_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_462_6_3: ;
        }
    }
    event_462_6_end: ;
}
// Function purpose: generated callback event_func_798 processes event block(s) 463_6. Actions/conditions:
//        463_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_798()
{
    // event 463_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_463_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (17))) goto event_463_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_463_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_463_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_463_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmatedtaf6_493_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatedtaf6_493(-16, -16), 1);
            inmatedtaf6_493_instances.add_back();
        }
        for (ObjectIterator it(inmatedtaf6_493_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatedtaf6_493_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_463_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_463_6_3: ;
        }
    }
    event_463_6_end: ;
}
// Function purpose: generated callback event_func_799 processes event block(s) 464_6. Actions/conditions:
//        464_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_799()
{
    // event 464_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_464_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (18))) goto event_464_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_464_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_464_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_464_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmatedtaf7_494_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatedtaf7_494(-16, -16), 1);
            inmatedtaf7_494_instances.add_back();
        }
        for (ObjectIterator it(inmatedtaf7_494_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatedtaf7_494_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_464_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_464_6_3: ;
        }
    }
    event_464_6_end: ;
}
// Function purpose: generated callback event_func_800 processes event block(s) 465_6. Actions/conditions:
//        465_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_800()
{
    // event 465_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_465_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (19))) goto event_465_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_465_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_465_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_465_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmatedtaf8_495_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatedtaf8_495(-16, -16), 1);
            inmatedtaf8_495_instances.add_back();
        }
        for (ObjectIterator it(inmatedtaf8_495_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatedtaf8_495_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_465_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_465_6_3: ;
        }
    }
    event_465_6_end: ;
}
// Function purpose: generated callback event_func_801 processes event block(s) 466_6. Actions/conditions:
//        466_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_801()
{
    // event 466_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_466_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (20))) goto event_466_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_466_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_466_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_466_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmatedtaf9_496_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatedtaf9_496(-16, -16), 1);
            inmatedtaf9_496_instances.add_back();
        }
        for (ObjectIterator it(inmatedtaf9_496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatedtaf9_496_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_466_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_466_6_3: ;
        }
    }
    event_466_6_end: ;
}
// Function purpose: generated callback event_func_802 processes event block(s) 467_6. Actions/conditions:
//        467_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_802()
{
    // event 467_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_467_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (21))) goto event_467_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_467_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_467_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_467_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmatess1_506_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatess1_506(0, 0), 1);
            inmatess1_506_instances.add_back();
        }
        for (ObjectIterator it(inmatess1_506_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatess1_506_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_467_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_467_6_3: ;
        }
    }
    event_467_6_end: ;
}
// Function purpose: generated callback event_func_803 processes event block(s) 468_6. Actions/conditions:
//        468_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_803()
{
    // event 468_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_468_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (22))) goto event_468_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_468_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_468_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_468_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmatess2_507_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatess2_507(0, 0), 1);
            inmatess2_507_instances.add_back();
        }
        for (ObjectIterator it(inmatess2_507_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatess2_507_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_468_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_468_6_3: ;
        }
    }
    event_468_6_end: ;
}
// Function purpose: generated callback event_func_804 processes event block(s) 469_6. Actions/conditions:
//        469_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_804()
{
    // event 469_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_469_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (23))) goto event_469_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_469_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_469_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_469_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmatess3_508_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatess3_508(0, 0), 1);
            inmatess3_508_instances.add_back();
        }
        for (ObjectIterator it(inmatess3_508_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatess3_508_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_469_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_469_6_3: ;
        }
    }
    event_469_6_end: ;
}
// Function purpose: generated callback event_func_805 processes event block(s) 470_6. Actions/conditions:
//        470_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_805()
{
    // event 470_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_470_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (24))) goto event_470_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_470_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_470_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_470_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmatess4_509_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatess4_509(0, 0), 1);
            inmatess4_509_instances.add_back();
        }
        for (ObjectIterator it(inmatess4_509_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatess4_509_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_470_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_470_6_3: ;
        }
    }
    event_470_6_end: ;
}
// Function purpose: generated callback event_func_806 processes event block(s) 471_6. Actions/conditions:
//        471_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_806()
{
    // event 471_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_471_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (25))) goto event_471_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_471_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_471_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_471_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmatess5_510_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatess5_510(0, 0), 1);
            inmatess5_510_instances.add_back();
        }
        for (ObjectIterator it(inmatess5_510_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatess5_510_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_471_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_471_6_3: ;
        }
    }
    event_471_6_end: ;
}
// Function purpose: generated callback event_func_807 processes event block(s) 472_6. Actions/conditions:
//        472_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_807()
{
    // event 472_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_472_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (26))) goto event_472_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_472_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_472_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_472_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmatess6_511_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatess6_511(0, 0), 1);
            inmatess6_511_instances.add_back();
        }
        for (ObjectIterator it(inmatess6_511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatess6_511_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_472_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_472_6_3: ;
        }
    }
    event_472_6_end: ;
}
// Function purpose: generated callback event_func_808 processes event block(s) 473_6. Actions/conditions:
//        473_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_808()
{
    // event 473_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_473_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (27))) goto event_473_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_473_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_473_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_473_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmatess7_512_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatess7_512(0, 0), 1);
            inmatess7_512_instances.add_back();
        }
        for (ObjectIterator it(inmatess7_512_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatess7_512_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_473_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_473_6_3: ;
        }
    }
    event_473_6_end: ;
}
// Function purpose: generated callback event_func_809 processes event block(s) 474_6. Actions/conditions:
//        474_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_809()
{
    // event 474_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_474_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (28))) goto event_474_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_474_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_474_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_474_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmatess8_513_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatess8_513(0, 0), 1);
            inmatess8_513_instances.add_back();
        }
        for (ObjectIterator it(inmatess8_513_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_474_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_474_6_3: ;
        }
        for (ObjectIterator it(inmatess8_513_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
    }
    event_474_6_end: ;
}
// Function purpose: generated callback event_func_810 processes event block(s) 475_6. Actions/conditions:
//        475_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_810()
{
    // event 475_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_create_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_475_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_create_inmates_index+1))) == (29))) goto event_475_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_create_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_475_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_475_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_475_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_create_inmates_index+1)));
        }
        inmatess0_516_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatess0_516(0, 0), 1);
            inmatess0_516_instances.add_back();
        }
        for (ObjectIterator it(inmatess0_516_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatess0_516_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_475_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_475_6_3: ;
        }
    }
    event_475_6_end: ;
}
// Function purpose: generated callback event_func_811 processes event block(s) 476_6. Actions/conditions:
//        476_6: sets a stored numeric value.
void Frames::event_func_811()
{
    // event 476_6 : sets a stored numeric value
    {
        if (!(group_setup_1)) goto event_476_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(str_opn_cap_525+number_to_string(qualifier_14.size()), 0);
    }
    event_476_6_end: ;
}
// Function purpose: generated callback event_func_812 processes event block(s) 478_6. Actions/conditions:
//        478_6: adds a outfitpow 376 instance; sets the selected object's numeric value to qualifier_14.size(); sets
//        the object position in the world; plus 1 more actions.
void Frames::event_func_812()
{
    // event 478_6 : adds a outfitpow 376 instance; sets the selected object's numeric value to qualifier_14.size(); sets the object position in the world; plus 1 more actions
    {
        if (!(group_setup_1)) goto event_478_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_478_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_478_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_478_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) == (str_camp_504))) goto event_478_6_end;
        outfitpow_376_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitpow_376(0, 0), 1);
            outfitpow_376_instances.add_back();
        }
        for (ObjectIterator it(outfitpow_376_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(outfitpow_376_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_478_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_478_6_1: ;
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(qualifier_14.size()), str_127_100_507);
    }
    event_478_6_end: ;
}
void Frames::loop_create_inmates_6()
{
    event_func_780();
    event_func_781();
    event_func_782();
    event_func_783();
    event_func_784();
    event_func_785();
    event_func_786();
    event_func_787();
    event_func_788();
    event_func_789();
    event_func_790();
    event_func_791();
    event_func_792();
    event_func_793();
    event_func_794();
    event_func_795();
    event_func_796();
    event_func_797();
    event_func_798();
    event_func_799();
    event_func_800();
    event_func_801();
    event_func_802();
    event_func_803();
    event_func_804();
    event_func_805();
    event_func_806();
    event_func_807();
    event_func_808();
    event_func_809();
    event_func_810();
    event_func_811();
    event_func_602();
    event_func_812();
    event_func_604();
    event_func_605();
    event_func_606();
}
// Function purpose: generated callback event_func_813 processes event block(s) 1699_6. Actions/conditions:
//        1699_6: sets the selected object's numeric value to ((Active*)get_single(waypointrollcall2_189_instances,
//        it.current_index, default_active_instance))->get_x()+8; sets the selected object's numeric value to
//        ((Active*)get_single(waypointrollcall2_189_instances, it.current_index,
//        default_active_instance))->get_y()+8.
void Frames::event_func_813()
{
    // event 1699_6 : sets the selected object's numeric value to ((Active*)get_single(waypointrollcall2_189_instances, it.current_index, default_active_instance))->get_x()+8; sets the selected object's numeric value to ((Active*)get_single(waypointrollcall2_189_instances, it.current_index, default_active_instance))->get_y()+8
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1699_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_rollcall_guards_init_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1699_6_end;
        waypointrollcall2_189_instances.clear_selection();
        for (ObjectIterator it(waypointrollcall2_189_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_rollcall_guards_init_index+1))) { it.deselect(); continue; }
        }
        if (!waypointrollcall2_189_instances.has_selection()) goto event_1699_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(waypointrollcall2_189_instances, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(waypointrollcall2_189_instances, it.current_index, default_active_instance))->get_y()+8);
        }
    }
    event_1699_6_end: ;
}
void Frames::loop_rollcall_guards_init_6()
{
    event_func_813();
}
// Function purpose: generated callback event_func_814 processes event block(s) 783_6. Actions/conditions:
//        783_6: removes the selected object.
void Frames::event_func_814()
{
    // event 783_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_783_6_end;
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_783_6_end: ;
}
// Function purpose: generated callback event_func_815 processes event block(s) 784_6. Actions/conditions:
//        784_6: removes the selected object; sets the selected object's direction to 16.
void Frames::event_func_815()
{
    // event 784_6 : removes the selected object; sets the selected object's direction to 16
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_784_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
    }
    event_784_6_end: ;
}
// Function purpose: generated callback event_func_816 processes event block(s) 785_6. Actions/conditions:
//        785_6: creates a buttons 245 object; sets the object's animation to 37.
void Frames::event_func_816()
{
    // event 785_6 : creates a buttons 245 object; sets the object's animation to 37
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_785_6_end;
        FrameObject * single_instance_785_6_0; single_instance_785_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 60), parent->layer);
                if (single_instance_785_6_0 == NULL)
                    single_instance_785_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_785_6_0))->force_animation(37);
    }
    event_785_6_end: ;
}
// Function purpose: generated callback event_func_817 processes event block(s) 786_6. Actions/conditions:
//        786_6: removes the selected object.
void Frames::event_func_817()
{
    // event 786_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_786_6_end;
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_786_6_end: ;
}
// Function purpose: generated callback event_func_818 processes event block(s) 787_6. Actions/conditions:
//        787_6: creates a dialogue2 179 object; sets a game or interface text string.
void Frames::event_func_818()
{
    // event 787_6 : creates a dialogue2 179 object; sets a game or interface text string
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_787_6_end;
        FrameObject * single_instance_787_6_0; single_instance_787_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -55, parent->y + -56), parent->layer);
                if (single_instance_787_6_0 == NULL)
                    single_instance_787_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_787_6_0))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_1_97));
    }
    event_787_6_end: ;
}
// Function purpose: generated callback event_func_819 processes event block(s) 788_6. Actions/conditions:
//        788_6: creates a dialogue2 179 object; sets a game or interface text string.
void Frames::event_func_819()
{
    // event 788_6 : creates a dialogue2 179 object; sets a game or interface text string
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_788_6_end;
        FrameObject * single_instance_788_6_0; single_instance_788_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -55, parent->y + -22), parent->layer);
                if (single_instance_788_6_0 == NULL)
                    single_instance_788_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_788_6_0))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_2_155));
    }
    event_788_6_end: ;
}
// Function purpose: generated callback event_func_820 processes event block(s) 789_6. Actions/conditions:
//        789_6: creates a dialogue2 179 object; sets a game or interface text string.
void Frames::event_func_820()
{
    // event 789_6 : creates a dialogue2 179 object; sets a game or interface text string
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_789_6_end;
        FrameObject * single_instance_789_6_0; single_instance_789_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -55, parent->y + 12), parent->layer);
                if (single_instance_789_6_0 == NULL)
                    single_instance_789_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_789_6_0))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_3_158));
    }
    event_789_6_end: ;
}
// Function purpose: generated callback event_func_821 processes event block(s) 790_6. Actions/conditions:
//        790_6: creates a slider 357 object; sets the selected object's string to Music; reads an object position for
//        this event.
void Frames::event_func_821()
{
    // event 790_6 : creates a slider 357 object; sets the selected object's string to Music; reads an object position for this event
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_790_6_end;
        FrameObject * single_instance_790_6_0; single_instance_790_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_settingsSlider(parent->x + 0, parent->y + -36), parent->layer);
                if (single_instance_790_6_0 == NULL)
                    single_instance_790_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_790_6_0))->alterables->strings.set(0, str_music_53);
        ((Active*)((Active*)single_instance_790_6_0))->set_x((((Active*)get_instance(dialogPanel_instances))->get_x()-50)+global_values->get(9));
    }
    event_790_6_end: ;
}
// Function purpose: generated callback event_func_822 processes event block(s) 791_6. Actions/conditions:
//        791_6: creates a slider 357 object; sets the object's animation to 1; sets the selected object's string to
//        MusicBar.
void Frames::event_func_822()
{
    // event 791_6 : creates a slider 357 object; sets the object's animation to 1; sets the selected object's string to MusicBar
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_791_6_end;
        FrameObject * single_instance_791_6_0; single_instance_791_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_settingsSlider(parent->x + 0, parent->y + -42), parent->layer);
                if (single_instance_791_6_0 == NULL)
                    single_instance_791_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_791_6_0))->force_animation(1);
        ((Active*)((Active*)single_instance_791_6_0))->alterables->strings.set(0, str_musicbar_668);
    }
    event_791_6_end: ;
}
// Function purpose: generated callback event_func_823 processes event block(s) 792_6. Actions/conditions:
//        792_6: creates a slider 357 object; sets the selected object's string to SFX; reads an object position for
//        this event.
void Frames::event_func_823()
{
    // event 792_6 : creates a slider 357 object; sets the selected object's string to SFX; reads an object position for this event
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_792_6_end;
        FrameObject * single_instance_792_6_0; single_instance_792_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_settingsSlider(parent->x + 0, parent->y + -3), parent->layer);
                if (single_instance_792_6_0 == NULL)
                    single_instance_792_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_792_6_0))->alterables->strings.set(0, str_sfx_54);
        ((Active*)((Active*)single_instance_792_6_0))->set_x((((Active*)get_instance(dialogPanel_instances))->get_x()-50)+global_values->get(10));
    }
    event_792_6_end: ;
}
// Function purpose: generated callback event_func_824 processes event block(s) 793_6. Actions/conditions:
//        793_6: creates a slider 357 object; sets the object's animation to 1; sets the selected object's string to
//        SFXBar.
void Frames::event_func_824()
{
    // event 793_6 : creates a slider 357 object; sets the object's animation to 1; sets the selected object's string to SFXBar
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_793_6_end;
        FrameObject * single_instance_793_6_0; single_instance_793_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_settingsSlider(parent->x + 0, parent->y + -9), parent->layer);
                if (single_instance_793_6_0 == NULL)
                    single_instance_793_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_793_6_0))->force_animation(1);
        ((Active*)((Active*)single_instance_793_6_0))->alterables->strings.set(0, str_sfxbar_669);
    }
    event_793_6_end: ;
}
// Function purpose: generated callback event_func_825 processes event block(s) 794_6. Actions/conditions:
//        794_6: creates a slider 357 object; sets the object's animation to 6; sets the target object's direction;
//        plus 7 more actions.
void Frames::event_func_825()
{
    // event 794_6 : creates a slider 357 object; sets the object's animation to 6; sets the target object's direction; plus 7 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_794_6_end;
        FrameObject * single_instance_794_6_0; single_instance_794_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_settingsSlider(parent->x + -50, parent->y + 22), parent->layer);
                if (single_instance_794_6_0 == NULL)
                    single_instance_794_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_794_6_0))->force_animation(6);
        ((Active*)((Active*)single_instance_794_6_0))->set_direction(0);
        ((Active*)((Active*)single_instance_794_6_0))->alterables->strings.set(0, str_full_58);
        FrameObject * single_instance_794_6_1; single_instance_794_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dialogBodyText(((Active*)single_instance_794_6_0)->x + 17, ((Active*)single_instance_794_6_0)->y + 2), ((Active*)single_instance_794_6_0)->layer);
            if (single_instance_794_6_1 == NULL)
                single_instance_794_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_794_6_1))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_4_161)));
        ((Text*)((Text*)single_instance_794_6_1))->blend_color.set(Color(120, 120, 120));
    }
    event_794_6_end: ;
}
// Function purpose: generated callback event_func_826 processes event block(s) 795_6. Actions/conditions:
//        795_6: creates a slider 357 object; sets the object's animation to 5; sets the target object's direction;
//        plus 7 more actions.
void Frames::event_func_826()
{
    // event 795_6 : creates a slider 357 object; sets the object's animation to 5; sets the target object's direction; plus 7 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_795_6_end;
        FrameObject * single_instance_795_6_0; single_instance_795_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_settingsSlider(parent->x + -50, parent->y + 35), parent->layer);
                if (single_instance_795_6_0 == NULL)
                    single_instance_795_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_795_6_0))->force_animation(5);
        ((Active*)((Active*)single_instance_795_6_0))->set_direction(0);
        ((Active*)((Active*)single_instance_795_6_0))->alterables->strings.set(0, str_win_670);
        FrameObject * single_instance_795_6_1; single_instance_795_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dialogBodyText(((Active*)single_instance_795_6_0)->x + 17, ((Active*)single_instance_795_6_0)->y + 2), ((Active*)single_instance_795_6_0)->layer);
            if (single_instance_795_6_1 == NULL)
                single_instance_795_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_795_6_1))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_5_164)));
        ((Text*)((Text*)single_instance_795_6_1))->blend_color.set(Color(120, 120, 120));
    }
    event_795_6_end: ;
}
// Function purpose: generated callback event_func_827 processes event block(s) 796_6. Actions/conditions:
//        796_6: creates a dchar 214 object; positions the target object; updates a value on the target object; plus 5
//        more actions.
void Frames::event_func_827()
{
    // event 796_6 : creates a dchar 214 object; positions the target object; updates a value on the target object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_796_6_end;
        FrameObject * single_instance_796_6_0; single_instance_796_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + -77), parent->layer);
                if (single_instance_796_6_0 == NULL)
                    single_instance_796_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_796_6_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_796_6_0)), frame_left())+6);
        ((Text*)((Text*)single_instance_796_6_0))->blend_color.set(Color(255, 128, 0));
        ((Text*)((Text*)single_instance_796_6_0))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_217, str_3_158)));
        ((Text*)((Text*)single_instance_796_6_0))->set_bold(1);
    }
    event_796_6_end: ;
}
// Function purpose: generated callback event_func_828 processes event block(s) 797_6. Actions/conditions:
//        797_6: creates a dchar 214 object; positions the target object; updates a value on the target object; plus 1
//        more actions.
void Frames::event_func_828()
{
    // event 797_6 : creates a dchar 214 object; positions the target object; updates a value on the target object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_797_6_end;
        FrameObject * single_instance_797_6_0; single_instance_797_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + 64), parent->layer);
                if (single_instance_797_6_0 == NULL)
                    single_instance_797_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_797_6_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_797_6_0)), frame_left())+5);
        ((Text*)((Text*)single_instance_797_6_0))->blend_color.set(Color(192, 192, 192));
        ((Text*)((Text*)single_instance_797_6_0))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_16_219)));
    }
    event_797_6_end: ;
}
void Frames::loop_menuoptions_6()
{
    event_func_814();
    event_func_815();
    event_func_816();
    event_func_817();
    event_func_818();
    event_func_819();
    event_func_820();
    event_func_821();
    event_func_822();
    event_func_823();
    event_func_824();
    event_func_825();
    event_func_826();
    event_func_827();
    event_func_828();
    event_func_820();
}
// Function purpose: generated callback event_func_829 processes event block(s) 580_6. Actions/conditions:
//        580_6: splits saved text into fields; adds a mine 414 instance; sets the selected object's horizontal
//        position to (string_to_number(stringtokenizer_81->get(0))*16)+8; plus 1 more actions.
void Frames::event_func_829()
{
    // event 580_6 : splits saved text into fields; adds a mine 414 instance; sets the selected object's horizontal position to (string_to_number(stringtokenizer_81->get(0))*16)+8; plus 1 more actions
    {
        if (!(group_setup_1)) goto event_580_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(loop_load_mines_index), str_x_437);
        mine_414_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_mine_414(0, 0), 0);
            mine_414_instances.add_back();
        }
        for (ObjectIterator it(mine_414_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0))*16)+8);
            ((Active*)*it)->set_y((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1))*16)+8);
        }
    }
    event_580_6_end: ;
}
void Frames::loop_load_mines_6()
{
    event_func_829();
}
// Function purpose: generated callback event_func_830 processes event block(s) 550_6. Actions/conditions:
//        550_6: splits saved text into fields; sets the selected object's string to stringtokenizer_81->get(0); sets
//        the selected object's numeric value to string_to_number(stringtokenizer_81->get(1)); plus 7 more actions.
void Frames::event_func_830()
{
    // event 550_6 : splits saved text into fields; sets the selected object's string to stringtokenizer_81->get(0); sets the selected object's numeric value to string_to_number(stringtokenizer_81->get(1)); plus 7 more actions
    {
        if (!(group_setup_1)) goto event_550_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_load_saved_guards_index+1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_550_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(saving_350_instances))->get_string_default(str_guards_538, number_to_string(loop_load_saved_guards_index+1), empty_string), str__254);
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
            ((Active*)*it)->alterables->values.set(8, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
            ((Active*)*it)->alterables->values.set(9, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
            ((Active*)*it)->alterables->values.set(5, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
            ((Active*)*it)->alterables->values.set(12, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)));
            ((Active*)*it)->alterables->strings.set(3, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(5));
        }
    }
    event_550_6_end: ;
}
// Function purpose: generated callback event_func_831 processes event block(s) 551_6. Actions/conditions:
//        551_6: enables flag 2001 (NPC defeated or knocked-out state; persisted in saves) on the selected object.
void Frames::event_func_831()
{
    // event 551_6 : enables flag 2001 (NPC defeated or knocked-out state; persisted in saves) on the selected object
    {
        if (!(group_setup_1)) goto event_551_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (1))) goto event_551_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_load_saved_guards_index+1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_551_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2001);
        }
    }
    event_551_6_end: ;
}
void Frames::loop_load_saved_guards_6()
{
    event_func_830();
    event_func_831();
}
// Function purpose: generated callback event_func_832 processes event block(s) 1068_6. Actions/conditions:
//        1068_6: sets the selected object's numeric value to -1; enables flag 250 (NPC pathfinding or movement state)
//        on the selected object; sets the selected object's numeric value to 80; plus 1 more actions.
void Frames::event_func_832()
{
    // event 1068_6 : sets the selected object's numeric value to -1; enables flag 250 (NPC pathfinding or movement state) on the selected object; sets the selected object's numeric value to 80; plus 1 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1068_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1068_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1068_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -1);
            ((Active*)*it)->alterables->flags.enable(250);
            ((Active*)*it)->alterables->values.set(21, 80);
            ((Active*)*it)->alterables->values.set(18, 0);
        }
    }
    event_1068_6_end: ;
}
void Frames::loop_revenge_6()
{
    event_func_832();
}
