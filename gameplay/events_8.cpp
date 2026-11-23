#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_589 processes event block(s) 427_6. Actions/conditions:
//        427_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_589()
{
    // event 427_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_427_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (18))) goto event_427_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_427_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_427_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_427_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        }
        inmatedtaf7_494_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatedtaf7_494(-16, -16), 1);
            inmatedtaf7_494_instances.add_back();
        }
        for (ObjectIterator it(inmatedtaf7_494_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatedtaf7_494_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_427_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_427_6_3: ;
        }
    }
    event_427_6_end: ;
}
// Function purpose: generated callback event_func_590 processes event block(s) 428_6. Actions/conditions:
//        428_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_590()
{
    // event 428_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_428_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (19))) goto event_428_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_428_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_428_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_428_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        }
        inmatedtaf8_495_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatedtaf8_495(-16, -16), 1);
            inmatedtaf8_495_instances.add_back();
        }
        for (ObjectIterator it(inmatedtaf8_495_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatedtaf8_495_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_428_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_428_6_3: ;
        }
    }
    event_428_6_end: ;
}
// Function purpose: generated callback event_func_591 processes event block(s) 429_6. Actions/conditions:
//        429_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_591()
{
    // event 429_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_429_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (20))) goto event_429_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_429_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_429_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_429_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        }
        inmatedtaf9_496_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatedtaf9_496(-16, -16), 1);
            inmatedtaf9_496_instances.add_back();
        }
        for (ObjectIterator it(inmatedtaf9_496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatedtaf9_496_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_429_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_429_6_3: ;
        }
    }
    event_429_6_end: ;
}
// Function purpose: generated callback event_func_592 processes event block(s) 430_6. Actions/conditions:
//        430_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_592()
{
    // event 430_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_430_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (21))) goto event_430_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_430_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_430_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_430_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        }
        inmatess1_506_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatess1_506(0, 0), 1);
            inmatess1_506_instances.add_back();
        }
        for (ObjectIterator it(inmatess1_506_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatess1_506_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_430_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_430_6_3: ;
        }
    }
    event_430_6_end: ;
}
// Function purpose: generated callback event_func_593 processes event block(s) 431_6. Actions/conditions:
//        431_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_593()
{
    // event 431_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_431_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (22))) goto event_431_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_431_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_431_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_431_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        }
        inmatess2_507_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatess2_507(0, 0), 1);
            inmatess2_507_instances.add_back();
        }
        for (ObjectIterator it(inmatess2_507_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatess2_507_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_431_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_431_6_3: ;
        }
    }
    event_431_6_end: ;
}
// Function purpose: generated callback event_func_594 processes event block(s) 432_6. Actions/conditions:
//        432_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_594()
{
    // event 432_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_432_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (23))) goto event_432_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_432_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_432_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_432_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        }
        inmatess3_508_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatess3_508(0, 0), 1);
            inmatess3_508_instances.add_back();
        }
        for (ObjectIterator it(inmatess3_508_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatess3_508_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_432_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_432_6_3: ;
        }
    }
    event_432_6_end: ;
}
// Function purpose: generated callback event_func_595 processes event block(s) 433_6. Actions/conditions:
//        433_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_595()
{
    // event 433_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_433_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (24))) goto event_433_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_433_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_433_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_433_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        }
        inmatess4_509_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatess4_509(0, 0), 1);
            inmatess4_509_instances.add_back();
        }
        for (ObjectIterator it(inmatess4_509_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatess4_509_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_433_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_433_6_3: ;
        }
    }
    event_433_6_end: ;
}
// Function purpose: generated callback event_func_596 processes event block(s) 434_6. Actions/conditions:
//        434_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_596()
{
    // event 434_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_434_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (25))) goto event_434_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_434_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_434_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_434_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        }
        inmatess5_510_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatess5_510(0, 0), 1);
            inmatess5_510_instances.add_back();
        }
        for (ObjectIterator it(inmatess5_510_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatess5_510_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_434_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_434_6_3: ;
        }
    }
    event_434_6_end: ;
}
// Function purpose: generated callback event_func_597 processes event block(s) 435_6. Actions/conditions:
//        435_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_597()
{
    // event 435_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_435_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (26))) goto event_435_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_435_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_435_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_435_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        }
        inmatess6_511_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatess6_511(0, 0), 1);
            inmatess6_511_instances.add_back();
        }
        for (ObjectIterator it(inmatess6_511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatess6_511_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_435_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_435_6_3: ;
        }
    }
    event_435_6_end: ;
}
// Function purpose: generated callback event_func_598 processes event block(s) 436_6. Actions/conditions:
//        436_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_598()
{
    // event 436_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_436_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (27))) goto event_436_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_436_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_436_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_436_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        }
        inmatess7_512_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatess7_512(0, 0), 1);
            inmatess7_512_instances.add_back();
        }
        for (ObjectIterator it(inmatess7_512_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatess7_512_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_436_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_436_6_3: ;
        }
    }
    event_436_6_end: ;
}
// Function purpose: generated callback event_func_599 processes event block(s) 437_6. Actions/conditions:
//        437_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_599()
{
    // event 437_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_437_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (28))) goto event_437_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_437_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_437_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_437_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        }
        inmatess8_513_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatess8_513(0, 0), 1);
            inmatess8_513_instances.add_back();
        }
        for (ObjectIterator it(inmatess8_513_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatess8_513_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_437_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_437_6_3: ;
        }
    }
    event_437_6_end: ;
}
// Function purpose: generated callback event_func_600 processes event block(s) 438_6. Actions/conditions:
//        438_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_600()
{
    // event 438_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_438_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (29))) goto event_438_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_438_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_438_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_438_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        }
        inmatess0_516_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatess0_516(0, 0), 1);
            inmatess0_516_instances.add_back();
        }
        for (ObjectIterator it(inmatess0_516_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatess0_516_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_438_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_438_6_3: ;
        }
    }
    event_438_6_end: ;
}
// Function purpose: generated callback event_func_601 processes event block(s) 439_6. Actions/conditions:
//        439_6: splits saved text into fields; sets a game or interface text string; sets a game or interface text
//        string; plus 8 more actions.
void Frames::event_func_601()
{
    // event 439_6 : splits saved text into fields; sets a game or interface text string; sets a game or interface text string; plus 8 more actions
    {
        if (!(group_setup_1)) goto event_439_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(saving_350_instances))->get_string_default(str_inmate_inven_524, number_to_string(loop_createload_inmates_index+1), empty_string), str__254);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(qualifier_14.size())+str_inv_1_453, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(qualifier_14.size())+str_inv_2_454, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(qualifier_14.size())+str_inv_3_455, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(qualifier_14.size())+str_inv_4_456, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(qualifier_14.size())+str_inv_5_457, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(4));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(qualifier_14.size())+str_inv_6_458, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(5));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(str_opn_cap_525+number_to_string(qualifier_14.size()), 0);
    }
    event_439_6_end: ;
}
// Function purpose: generated callback event_func_602 processes event block(s) 440_6. Actions/conditions:
//        440_6: adds a outfitinmate 249 instance; sets the selected object's numeric value to qualifier_14.size();
//        sets the object position in the world; plus 1 more actions.
void Frames::event_func_602()
{
    // event 440_6 : adds a outfitinmate 249 instance; sets the selected object's numeric value to qualifier_14.size(); sets the object position in the world; plus 1 more actions
    {
        if (!(group_setup_1)) goto event_440_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_440_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_440_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_440_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) != (str_camp_504))) goto event_440_6_end;
        outfitinmate_249_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmate_249(-16, -16), 1);
            outfitinmate_249_instances.add_back();
        }
        for (ObjectIterator it(outfitinmate_249_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(outfitinmate_249_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_440_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_440_6_1: ;
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(qualifier_14.size()), str_4_100_506);
    }
    event_440_6_end: ;
}
// Function purpose: generated callback event_func_603 processes event block(s) 441_6. Actions/conditions:
//        441_6: adds a outfitpow 376 instance; sets the selected object's numeric value to qualifier_14.size(); sets
//        the object position in the world; plus 1 more actions.
void Frames::event_func_603()
{
    // event 441_6 : adds a outfitpow 376 instance; sets the selected object's numeric value to qualifier_14.size(); sets the object position in the world; plus 1 more actions
    {
        if (!(group_setup_1)) goto event_441_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_441_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_441_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) == (str_camp_504))) goto event_441_6_end;
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
            if (parent == NULL) goto pos_end_441_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_441_6_1: ;
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(qualifier_14.size()), str_127_100_507);
    }
    event_441_6_end: ;
}
// Function purpose: generated callback event_func_604 processes event block(s) 442_6. Actions/conditions:
//        442_6: sets a game or interface text string; adds a outfitinmateescteam 481 instance; sets the selected
//        object's numeric value to qualifier_14.size(); plus 1 more actions.
void Frames::event_func_604()
{
    // event 442_6 : sets a game or interface text string; adds a outfitinmateescteam 481 instance; sets the selected object's numeric value to qualifier_14.size(); plus 1 more actions
    {
        if (!(group_setup_1)) goto event_442_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_442_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(qualifier_14.size()), str_210_100_508);
        outfitinmateescteam_481_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmateescteam_481(0, 0), 1);
            outfitinmateescteam_481_instances.add_back();
        }
        for (ObjectIterator it(outfitinmateescteam_481_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(outfitinmateescteam_481_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_442_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_442_6_1: ;
        }
    }
    event_442_6_end: ;
}
// Function purpose: generated callback event_func_605 processes event block(s) 443_6. Actions/conditions:
//        443_6: sets a game or interface text string; adds a outfitinmatebond 486 instance; sets the selected
//        object's numeric value to qualifier_14.size(); plus 1 more actions.
void Frames::event_func_605()
{
    // event 443_6 : sets a game or interface text string; adds a outfitinmatebond 486 instance; sets the selected object's numeric value to qualifier_14.size(); plus 1 more actions
    {
        if (!(group_setup_1)) goto event_443_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_443_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(qualifier_14.size()), str_215_100_509);
        outfitinmatebond_486_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmatebond_486(0, 0), 1);
            outfitinmatebond_486_instances.add_back();
        }
        for (ObjectIterator it(outfitinmatebond_486_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(outfitinmatebond_486_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_443_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_443_6_1: ;
        }
    }
    event_443_6_end: ;
}
// Function purpose: generated callback event_func_606 processes event block(s) 444_6. Actions/conditions:
//        444_6: sets a game or interface text string; adds a outfitinmatess 503 instance; sets the selected object's
//        numeric value to qualifier_14.size(); plus 1 more actions.
void Frames::event_func_606()
{
    // event 444_6 : sets a game or interface text string; adds a outfitinmatess 503 instance; sets the selected object's numeric value to qualifier_14.size(); plus 1 more actions
    {
        if (!(group_setup_1)) goto event_444_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_444_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(qualifier_14.size()), str_238_100_510);
        outfitinmatess_503_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmatess_503(0, 0), 1);
            outfitinmatess_503_instances.add_back();
        }
        for (ObjectIterator it(outfitinmatess_503_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(outfitinmatess_503_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_444_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_444_6_1: ;
        }
    }
    event_444_6_end: ;
}
void Frames::loop_createload_inmates_6()
{
    event_func_570();
    event_func_571();
    event_func_572();
    event_func_573();
    event_func_574();
    event_func_575();
    event_func_576();
    event_func_577();
    event_func_578();
    event_func_579();
    event_func_580();
    event_func_581();
    event_func_582();
    event_func_583();
    event_func_584();
    event_func_585();
    event_func_586();
    event_func_587();
    event_func_588();
    event_func_589();
    event_func_590();
    event_func_591();
    event_func_592();
    event_func_593();
    event_func_594();
    event_func_595();
    event_func_596();
    event_func_597();
    event_func_598();
    event_func_599();
    event_func_600();
    event_func_601();
    event_func_602();
    event_func_603();
    event_func_604();
    event_func_605();
    event_func_606();
}
// Function purpose: generated callback event_func_607 processes event block(s) 4189_6. Actions/conditions:
//        4189_6: sets error to 0; sets tempItem to randrange_event(gameVariables->get_value(52, ITEM_COUNT)).
void Frames::event_func_607()
{
    // event 4189_6 : sets error to 0; sets tempItem to randrange_event(gameVariables->get_value(52, ITEM_COUNT))
    {
        if (!(group_loops_1)) goto event_4189_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(50, str_error_233, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(51, str_tempitem_526, randrange_event(((AssociateArray*)get_instance(gameVariables_instances))->get_value(52, str_item_count_527)));
    }
    event_4189_6_end: ;
}
// Function purpose: generated callback event_func_608 processes event block(s) 4190_6. Actions/conditions:
//        4190_6: sets error to 1.
void Frames::event_func_608()
{
    // event 4190_6 : sets error to 1
    {
        if (!(group_loops_1)) goto event_4190_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(51, str_tempitem_526)) != (-1))) goto event_4190_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_string(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(51, str_tempitem_526)), str_found_528)) != (empty_string))) goto event_4190_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_string(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(51, str_tempitem_526)), str_found_528)) != (global_strings->get(0)))) goto event_4190_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(50, str_error_233, 1);
    }
    event_4190_6_end: ;
}
// Function purpose: generated callback event_func_609 processes event block(s) 4191_6. Actions/conditions:
//        4191_6: sets error to 1.
void Frames::event_func_609()
{
    // event 4191_6 : sets error to 1
    {
        if (!(group_loops_1)) goto event_4191_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(51, str_tempitem_526)) != (-1))) goto event_4191_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(51, str_tempitem_526)), str_buy_529)) == (0))) goto event_4191_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(50, str_error_233, 1);
    }
    event_4191_6_end: ;
}
// Function purpose: generated callback event_func_610 processes event block(s) 4192_6. Actions/conditions:
//        4192_6: sets a game or interface text string.
void Frames::event_func_610()
{
    // event 4192_6 : sets a game or interface text string
    {
        if (!(group_loops_1)) goto event_4192_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(51, str_tempitem_526)) != (-1))) goto event_4192_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(50, str_error_233)) == (0))) goto event_4192_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_v_530+number_to_string(loop_vendor_index+1), number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(51, str_tempitem_526))+str_100_531);
            loop_vending_item_running = false;
    
    }
    event_4192_6_end: ;
}
void Frames::loop_vending_item_6()
{
    event_func_607();
    event_func_608();
    event_func_609();
    event_func_610();
}
// Function purpose: generated callback event_func_611 processes event block(s) 1635_6. Actions/conditions:
//        1635_6: sets m_rem to 0; splits saved text into fields.
void Frames::event_func_611()
{
    // event 1635_6 : sets m_rem to 0; splits saved text into fields
    {
        if (!(group_code_1)) goto event_1635_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(53, str_m_rem_532, 0);
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((ListObject*)get_instance(missions_298_instances))->get_line(loop_timeout_missions_index+1), str__254);
    }
    event_1635_6_end: ;
}
void Frames::loop_timeout_missions_6()
{
    event_func_611();
}
// Function purpose: generated callback event_func_612 processes event block(s) 4542_6. Actions/conditions:
//        4542_6: adds a snow 413 instance; sets the selected object's vertical position to frame_top()-16; sets the
//        selected object's horizontal position to frame_left()+randrange_event(300); plus 7 more actions.
void Frames::event_func_612()
{
    // event 4542_6 : adds a snow 413 instance; sets the selected object's vertical position to frame_top()-16; sets the selected object's horizontal position to frame_left()+randrange_event(300); plus 7 more actions
    {
        snow_413_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_snow_413(0, 0), 5);
            snow_413_instances.add_back();
        }
        for (ObjectIterator it(snow_413_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(VITA_VIEW_TOP(((Active*)*it), frame_top())-16);
            ((Active*)*it)->set_x(VITA_VIEW_LEFT(((Active*)*it), frame_left())+randrange_event(300));
            ((Active*)*it)->blend_color.set_alpha_coefficient(randrange_event(100));
            ((Active*)*it)->get_movement()->set_speed(5+randrange_event(10));
            ((Active*)*it)->set_scale(0.5*randrange_event(3));
            ((Active*)*it)->move_back();
        }
    }
    event_4542_6_end: ;
}
void Frames::loop_create_snow_6()
{
    event_func_612();
}
// Function purpose: generated callback event_func_613 processes event block(s) 4144_6. Actions/conditions:
//        4144_6: removes the selected object.
void Frames::event_func_613()
{
    // event 4144_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_payphone_1)) goto event_4144_6_end;
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
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
        buttontext_445_instances.clear_selection();
        for (ObjectIterator it(buttontext_445_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_4144_6_end: ;
}
void Frames::loop_phones_close_6()
{
    event_func_613();
}
// Function purpose: generated callback event_func_614 processes event block(s) 4089_6. Actions/conditions:
//        4089_6: sets a game or interface text string; sets a game or interface text string; sets a game or interface
//        text string.
void Frames::event_func_614()
{
    // event 4089_6 : sets a game or interface text string; sets a game or interface text string; sets a game or interface text string
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4089_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_toilet_533+number_to_string(loop_empty_bogs_index+1)+str_slot1_534, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_toilet_533+number_to_string(loop_empty_bogs_index+1)+str_slot2_535, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_toilet_533+number_to_string(loop_empty_bogs_index+1)+str_slot3_536, empty_string);
    }
    event_4089_6_end: ;
}
// Function purpose: generated callback event_func_615 processes event block(s) 4090_6. Actions/conditions:
//        4090_6: sets the selected object's numeric value to 0; sets the object's animation to 0.
void Frames::event_func_615()
{
    // event 4090_6 : sets the selected object's numeric value to 0; sets the object's animation to 0
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4090_6_end;
        toilet2_307_instances.clear_selection();
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_empty_bogs_index+1))) { it.deselect(); continue; }
        }
        if (!toilet2_307_instances.has_selection()) goto event_4090_6_end;
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->force_animation(0);
        }
    }
    event_4090_6_end: ;
}
void Frames::loop_empty_bogs_6()
{
    event_func_614();
    event_func_615();
}
// Function purpose: generated callback event_func_616 processes event block(s) 3165_6. Actions/conditions:
//        3165_6: creates a buttons 245 object; positions the target object; positions the target object; plus 7 more
//        actions.
void Frames::event_func_616()
{
    // event 3165_6 : creates a buttons 245 object; positions the target object; positions the target object; plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_sss_1)) goto event_3165_6_end;
        FrameObject * single_instance_3165_6_0; single_instance_3165_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 65, parent->y + 35), parent->layer);
                if (single_instance_3165_6_0 == NULL)
                    single_instance_3165_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3165_6_0))->set_x(((Active*)get_instance(dialogPanel_instances))->get_box_index(2)-90);
        ((Active*)((Active*)single_instance_3165_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(3)-25);
        ((Active*)((Active*)single_instance_3165_6_0))->force_animation(43);
        FrameObject * single_instance_3165_6_1; single_instance_3165_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_3165_6_0)->x + 3, ((Active*)single_instance_3165_6_0)->y + 3), ((Active*)single_instance_3165_6_0)->layer);
            if (single_instance_3165_6_1 == NULL)
                single_instance_3165_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_3165_6_1))->blend_color.set(Color(150, 150, 150));
        ((Text*)((Text*)single_instance_3165_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_6_241)));
    }
    event_3165_6_end: ;
}
// Function purpose: generated callback event_func_617 processes event block(s) 3166_6. Actions/conditions:
//        3166_6: creates a dchar 214 object; positions the target object; updates a value on the target object; plus
//        5 more actions.
void Frames::event_func_617()
{
    // event 3166_6 : creates a dchar 214 object; positions the target object; updates a value on the target object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_sss_1)) goto event_3166_6_end;
        FrameObject * single_instance_3166_6_0; single_instance_3166_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + -54), parent->layer);
                if (single_instance_3166_6_0 == NULL)
                    single_instance_3166_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3166_6_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_3166_6_0)), frame_left())+5);
        ((Text*)((Text*)single_instance_3166_6_0))->blend_color.set(Color(0, 84, 128));
        ((Text*)((Text*)single_instance_3166_6_0))->set_bold(1);
        ((Text*)((Text*)single_instance_3166_6_0))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_header_537)));
    }
    event_3166_6_end: ;
}
void Frames::loop_tree_footer_6()
{
    event_func_616();
    event_func_617();
}
// Function purpose: generated callback event_func_618 processes event block(s) 401_6. Actions/conditions:
//        401_6: splits saved text into fields.
void Frames::event_func_618()
{
    // event 401_6 : splits saved text into fields
    {
        if (!(group_setup_1)) goto event_401_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(saving_350_instances))->get_string_default(str_guards_538, number_to_string(loop_createload_guards_index+1), empty_string), str__254);
    }
    event_401_6_end: ;
}
// Function purpose: generated callback event_func_619 processes event block(s) 402_6. Actions/conditions:
//        402_6: adds a baseguard 251 instance; sets the selected object's numeric value to
//        loop_createload_guards_index+1; sets the object position in the world; plus 12 more actions.
void Frames::event_func_619()
{
    // event 402_6 : adds a baseguard 251 instance; sets the selected object's numeric value to loop_createload_guards_index+1; sets the object position in the world; plus 12 more actions
    {
        if (!(group_setup_1)) goto event_402_6_end;
        if (!((global_strings->get(0)) != (str_irongate_148))) goto event_402_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_402_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_402_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_402_6_end;
        waypointguard2_315_instances.clear_selection();
        FrameObject * single_instance_402_6_0; single_instance_402_6_0 = pick_random(waypointguard2_315_instances);
        if (single_instance_402_6_0 == NULL) goto event_402_6_end;
        guardBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guardBase(-16, -16), 1);
            guardBase_instances.add_back();
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_guards_index+1);
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)single_instance_402_6_0);
            if (parent == NULL) goto pos_end_402_6_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_402_6_2: ;
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(4+randrange_event(3));
            ((Active*)*it)->alterables->values.set(19, 1);
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        guard_169_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guard_169(-16, -16), 1);
            guard_169_instances.add_back();
        }
        for (ObjectIterator it(guard_169_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_402_6_4;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_402_6_4: ;
        }
        for (ObjectIterator it(guard_169_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_guards_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        outfitguard_248_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitguard_248(-16, -16), 1);
            outfitguard_248_instances.add_back();
        }
        for (ObjectIterator it(outfitguard_248_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_402_6_6;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_402_6_6: ;
        }
        for (ObjectIterator it(outfitguard_248_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_weapon_460+number_to_string(qualifier_14.size()), str_29_100_539);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(qualifier_14.size()), str_3_100_540);
    }
    event_402_6_end: ;
}
// Function purpose: generated callback event_func_620 processes event block(s) 403_6. Actions/conditions:
//        403_6: adds a baseguard 251 instance; sets the selected object's numeric value to
//        loop_createload_guards_index+1; sets the object position in the world; plus 12 more actions.
void Frames::event_func_620()
{
    // event 403_6 : adds a baseguard 251 instance; sets the selected object's numeric value to loop_createload_guards_index+1; sets the object position in the world; plus 12 more actions
    {
        if (!(group_setup_1)) goto event_403_6_end;
        if (!((global_strings->get(0)) == (str_irongate_148))) goto event_403_6_end;
        waypointguard2_315_instances.clear_selection();
        FrameObject * single_instance_403_6_0; single_instance_403_6_0 = pick_random(waypointguard2_315_instances);
        if (single_instance_403_6_0 == NULL) goto event_403_6_end;
        guardBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guardBase(-16, -16), 1);
            guardBase_instances.add_back();
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_guards_index+1);
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)single_instance_403_6_0);
            if (parent == NULL) goto pos_end_403_6_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_403_6_2: ;
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(4+randrange_event(3));
            ((Active*)*it)->alterables->values.set(19, 1);
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        guard_169_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guard_169(-16, -16), 1);
            guard_169_instances.add_back();
        }
        for (ObjectIterator it(guard_169_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_403_6_4;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_403_6_4: ;
        }
        for (ObjectIterator it(guard_169_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_guards_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        outfitguard_248_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitguard_248(-16, -16), 1);
            outfitguard_248_instances.add_back();
        }
        for (ObjectIterator it(outfitguard_248_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_403_6_6;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_403_6_6: ;
        }
        for (ObjectIterator it(outfitguard_248_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_weapon_460+number_to_string(qualifier_14.size()), str_11_100_541);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(qualifier_14.size()), str_3_100_540);
    }
    event_403_6_end: ;
}
// Function purpose: generated callback event_func_621 processes event block(s) 404_6. Actions/conditions:
//        404_6: adds a baseguard 251 instance; sets the selected object's numeric value to
//        loop_createload_guards_index+1; sets the object position in the world; plus 12 more actions.
void Frames::event_func_621()
{
    // event 404_6 : adds a baseguard 251 instance; sets the selected object's numeric value to loop_createload_guards_index+1; sets the object position in the world; plus 12 more actions
    {
        if (!(group_setup_1)) goto event_404_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_404_6_end;
        if (!((global_values->get(18)) == (1))) goto event_404_6_end;
        waypointguard2_315_instances.clear_selection();
        FrameObject * single_instance_404_6_0; single_instance_404_6_0 = pick_random(waypointguard2_315_instances);
        if (single_instance_404_6_0 == NULL) goto event_404_6_end;
        guardBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guardBase(-16, -16), 1);
            guardBase_instances.add_back();
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_guards_index+1);
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)single_instance_404_6_0);
            if (parent == NULL) goto pos_end_404_6_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_404_6_2: ;
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(4+randrange_event(3));
            ((Active*)*it)->alterables->values.set(19, 1);
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        guard2_484_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guard2_484(16, 16), 1);
            guard2_484_instances.add_back();
        }
        for (ObjectIterator it(guard2_484_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_404_6_4;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_404_6_4: ;
        }
        for (ObjectIterator it(guard2_484_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_guards_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        outfitguardescteam_476_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitguardescteam_476(-16, -16), 1);
            outfitguardescteam_476_instances.add_back();
        }
        for (ObjectIterator it(outfitguardescteam_476_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_404_6_6;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_404_6_6: ;
        }
        for (ObjectIterator it(outfitguardescteam_476_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_weapon_460+number_to_string(qualifier_14.size()), str_29_100_539);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(qualifier_14.size()), str_211_100_542);
    }
    event_404_6_end: ;
}
// Function purpose: generated callback event_func_622 processes event block(s) 405_6. Actions/conditions:
//        405_6: adds a baseguard 251 instance; sets the selected object's numeric value to
//        loop_createload_guards_index+1; sets the object position in the world; plus 12 more actions.
void Frames::event_func_622()
{
    // event 405_6 : adds a baseguard 251 instance; sets the selected object's numeric value to loop_createload_guards_index+1; sets the object position in the world; plus 12 more actions
    {
        if (!(group_setup_1)) goto event_405_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_405_6_end;
        waypointguard2_315_instances.clear_selection();
        FrameObject * single_instance_405_6_0; single_instance_405_6_0 = pick_random(waypointguard2_315_instances);
        if (single_instance_405_6_0 == NULL) goto event_405_6_end;
        guardBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guardBase(-16, -16), 1);
            guardBase_instances.add_back();
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_guards_index+1);
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)single_instance_405_6_0);
            if (parent == NULL) goto pos_end_405_6_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_405_6_2: ;
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(4+randrange_event(3));
            ((Active*)*it)->alterables->values.set(19, 1);
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        outfitguarddtaf_485_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitguarddtaf_485(-16, -16), 1);
            outfitguarddtaf_485_instances.add_back();
        }
        for (ObjectIterator it(outfitguarddtaf_485_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_405_6_4;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_405_6_4: ;
        }
        for (ObjectIterator it(outfitguarddtaf_485_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        guard3_499_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guard3_499(-16, -16), 1);
            guard3_499_instances.add_back();
        }
        for (ObjectIterator it(guard3_499_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_405_6_6;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_405_6_6: ;
        }
        for (ObjectIterator it(guard3_499_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_guards_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_weapon_460+number_to_string(qualifier_14.size()), str_29_100_539);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(qualifier_14.size()), str_228_100_543);
    }
    event_405_6_end: ;
}
// Function purpose: generated callback event_func_623 processes event block(s) 406_6. Actions/conditions:
//        406_6: adds a baseguard 251 instance; sets the selected object's numeric value to
//        loop_createload_guards_index+1; sets the object position in the world; plus 12 more actions.
void Frames::event_func_623()
{
    // event 406_6 : adds a baseguard 251 instance; sets the selected object's numeric value to loop_createload_guards_index+1; sets the object position in the world; plus 12 more actions
    {
        if (!(group_setup_1)) goto event_406_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_406_6_end;
        waypointguard2_315_instances.clear_selection();
        FrameObject * single_instance_406_6_0; single_instance_406_6_0 = pick_random(waypointguard2_315_instances);
        if (single_instance_406_6_0 == NULL) goto event_406_6_end;
        guardBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guardBase(-16, -16), 1);
            guardBase_instances.add_back();
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_guards_index+1);
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)single_instance_406_6_0);
            if (parent == NULL) goto pos_end_406_6_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_406_6_2: ;
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(4+randrange_event(3));
            ((Active*)*it)->alterables->values.set(19, 1);
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        guard4_514_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guard4_514(0, 0), 1);
            guard4_514_instances.add_back();
        }
        for (ObjectIterator it(guard4_514_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_406_6_4;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_406_6_4: ;
        }
        for (ObjectIterator it(guard4_514_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_guards_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        outfitguardss_515_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitguardss_515(0, 0), 1);
            outfitguardss_515_instances.add_back();
        }
        for (ObjectIterator it(outfitguardss_515_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_406_6_6;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_406_6_6: ;
        }
        for (ObjectIterator it(outfitguardss_515_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_weapon_460+number_to_string(qualifier_14.size()), str_29_100_539);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(qualifier_14.size()), str_239_100_544);
    }
    event_406_6_end: ;
}
// Function purpose: generated callback event_func_624 processes event block(s) 407_6. Actions/conditions:
//        407_6: splits saved text into fields; sets a game or interface text string; sets a game or interface text
//        string; plus 7 more actions.
void Frames::event_func_624()
{
    // event 407_6 : splits saved text into fields; sets a game or interface text string; sets a game or interface text string; plus 7 more actions
    {
        if (!(group_setup_1)) goto event_407_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(saving_350_instances))->get_string_default(str_guard_inven_545, number_to_string(loop_createload_guards_index+1), empty_string), str__254);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(qualifier_14.size())+str_inv_1_453, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(qualifier_14.size())+str_inv_2_454, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(qualifier_14.size())+str_inv_3_455, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(qualifier_14.size())+str_inv_4_456, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(qualifier_14.size())+str_inv_5_457, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(4));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(qualifier_14.size())+str_inv_6_458, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(5));
    }
    event_407_6_end: ;
}
void Frames::loop_createload_guards_6()
{
    event_func_618();
    event_func_619();
    event_func_620();
    event_func_621();
    event_func_622();
    event_func_623();
    event_func_624();
}
// Function purpose: generated callback event_func_625 processes event block(s) 22_6. Actions/conditions: 22_6:
//        loads saved game data; loads saved game data; decrypts a save-data file; plus 6 more actions.
void Frames::event_func_625()
{
    // event 22_6 : loads saved game data; loads saved game data; decrypts a save-data file; plus 6 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_22_6_end;
        if (!((global_values->get(18)) == (0))) goto event_22_6_end;
        ((ActivePicture*)get_instance(soilbackground_443_instances))->load(str_data_images_soil_gif_546);
        ((ActivePicture*)get_instance(floorlayer_444_instances))->load(str_data_images_ground_547+global_strings->get(0)+str_gif_354);
    BlowfishObject::decrypt_file(str_mothking_99, str_data_images_tiles_353+global_strings->get(0)+str_gif_354);
        ((ActivePicture*)get_instance(activepicture_160_instances))->load(str_data_images_tiles_353+global_strings->get(0)+str_gif_354);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_size(((ActivePicture*)get_instance(activepicture_160_instances))->get_width(), ((ActivePicture*)get_instance(activepicture_160_instances))->get_height());
    BlowfishObject::encrypt_file(str_mothking_99, str_data_images_tiles_353+global_strings->get(0)+str_gif_354);
    }
    event_22_6_end: ;
}
// Function purpose: generated callback event_func_626 processes event block(s) 23_6. Actions/conditions: 23_6:
//        loads saved game data; loads saved game data; decrypts a save-data file; plus 6 more actions.
void Frames::event_func_626()
{
    // event 23_6 : loads saved game data; loads saved game data; decrypts a save-data file; plus 6 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_23_6_end;
        if (!((global_values->get(18)) == (1))) goto event_23_6_end;
        ((ActivePicture*)get_instance(soilbackground_443_instances))->load(str_data_images_soil_gif_546);
        ((ActivePicture*)get_instance(floorlayer_444_instances))->load(str_data_images_ground_547+global_strings->get(0)+str_gif_354);
    BlowfishObject::decrypt_file(str_mothking_99, str_data_images_tiles_353+global_strings->get(0)+str_gif_354);
        ((ActivePicture*)get_instance(activepicture_160_instances))->load(str_data_images_tiles_353+global_strings->get(0)+str_gif_354);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_size(((ActivePicture*)get_instance(activepicture_160_instances))->get_width(), ((ActivePicture*)get_instance(activepicture_160_instances))->get_height());
    BlowfishObject::encrypt_file(str_mothking_99, str_data_images_tiles_353+global_strings->get(0)+str_gif_354);
    }
    event_23_6_end: ;
}
// Function purpose: generated callback event_func_627 processes event block(s) 24_6. Actions/conditions: 24_6:
//        sets MapFloor to gameVariables->get_string(55, MapTileset).
void Frames::event_func_627()
{
    // event 24_6 : sets MapFloor to gameVariables->get_string(55, MapTileset)
    {
        if (!(group_load_map_from_file_1)) goto event_24_6_end;
        if (!((global_values->get(18)) == (2))) goto event_24_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(54, str_mapfloor_548)) == (empty_string))) goto event_24_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(54, str_mapfloor_548, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(55, str_maptileset_549));
    }
    event_24_6_end: ;
}
// Function purpose: generated callback event_func_628 processes event block(s) 25_6. Actions/conditions: 25_6:
//        loads saved game data; loads saved game data; sets the target size; plus 1 more actions.
void Frames::event_func_628()
{
    // event 25_6 : loads saved game data; loads saved game data; sets the target size; plus 1 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_25_6_end;
        if (!((global_values->get(18)) == (2))) goto event_25_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(55, str_maptileset_549)) != (str_new_550))) goto event_25_6_end;
        ((ActivePicture*)get_instance(floorlayer_444_instances))->load(str_data_images_custom_ground_cus_551+((AssociateArray*)get_instance(gameVariables_instances))->get_string(54, str_mapfloor_548)+str_gif_354);
        ((ActivePicture*)get_instance(activepicture_160_instances))->load(str_data_images_custom_tiles_cus_552+((AssociateArray*)get_instance(gameVariables_instances))->get_string(55, str_maptileset_549)+str_gif_354);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_size(((ActivePicture*)get_instance(activepicture_160_instances))->get_width(), ((ActivePicture*)get_instance(activepicture_160_instances))->get_height());
        ((ActivePicture*)get_instance(soilbackground_443_instances))->load(str_data_images_soil_gif_546);
    }
    event_25_6_end: ;
}
// Function purpose: generated callback event_func_629 processes event block(s) 26_6. Actions/conditions: 26_6:
//        loads saved game data; loads saved game data; sets the target size; plus 5 more actions.
void Frames::event_func_629()
{
    // event 26_6 : loads saved game data; loads saved game data; sets the target size; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_26_6_end;
        if (!((global_values->get(18)) == (2))) goto event_26_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(55, str_maptileset_549)) == (str_new_550))) goto event_26_6_end;
        ((ActivePicture*)get_instance(floorlayer_444_instances))->load(str_data_images_custom_ground_cus_551+((AssociateArray*)get_instance(gameVariables_instances))->get_string(54, str_mapfloor_548)+str_gif_354);
        ((ActivePicture*)get_instance(activepicture_160_instances))->load(str_data_images_custom_univ_png_553);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_size(((ActivePicture*)get_instance(activepicture_160_instances))->get_width(), ((ActivePicture*)get_instance(activepicture_160_instances))->get_height());
        ((ActivePicture*)get_instance(soilbackground_443_instances))->load(str_data_images_soil_gif_546);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(56, str_new_tiles_554, 1);
            group_load_map_from_file_old_tiles_1 = false;
    
        if (!group_load_map_from_file_new_tiles_1) {
            group_load_map_from_file_new_tiles_1 = true;
            group_check_group_load_map_from_file_new_tiles_ground_2_1_0 = true;
        }
    }
    event_26_6_end: ;
}
void Frames::loop_get_img_6()
{
    event_func_625();
    event_func_626();
    event_func_627();
    event_func_628();
    event_func_629();
}
// Function purpose: generated callback event_func_630 processes event block(s) 4034_6. Actions/conditions:
//        4034_6: sets LClick to 1; sets the selected object's visibility to false; removes the selected object; plus
//        1 more actions.
void Frames::event_func_630()
{
    // event 4034_6 : sets LClick to 1; sets the selected object's visibility to false; removes the selected object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_missions_1)) goto event_4034_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
        buttontext_445_instances.clear_selection();
        for (ObjectIterator it(buttontext_445_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_4034_6_end: ;
}
void Frames::loop_close_mission_6()
{
    event_func_630();
}
// Function purpose: generated callback event_func_631 processes event block(s) 3157_6. Actions/conditions:
//        3157_6: unlocks the MyGiftsToYou achievement.
void Frames::event_func_631()
{
    // event 3157_6 : unlocks the MyGiftsToYou achievement
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_sss_1)) goto event_3157_6_end;
        if (((SteamObject*)get_instance(steamworks2_469_instances))->is_achievement_unlocked(str_mygiftstoyou_555)) goto event_3157_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->unlock_achievement(str_mygiftstoyou_555);
    }
    event_3157_6_end: ;
}
void Frames::loop_ss_gifts_6()
{
    event_func_631();
}
// Function purpose: generated callback event_func_632 processes event block(s) 1934_6. Actions/conditions:
//        1934_6: sets the object position in the world.
void Frames::event_func_632()
{
    // event 1934_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1934_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_janitor_24))) goto event_1934_6_end;
        {
            FrameObject * parent = ((Active*)get_instance(containerjanitor_270_instances));
            if (parent == NULL) goto pos_end_1934_6_0;
            ((Active*)get_instance(active3_284_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_1934_6_0: ;
        }
    }
    event_1934_6_end: ;
}
// Function purpose: generated callback event_func_633 processes event block(s) 1935_6. Actions/conditions:
//        1935_6: sets the object position in the world.
void Frames::event_func_633()
{
    // event 1935_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1935_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_gardening_43))) goto event_1935_6_end;
        {
            FrameObject * parent = ((Active*)get_instance(containergardening_409_instances));
            if (parent == NULL) goto pos_end_1935_6_0;
            ((Active*)get_instance(active3_284_instances))->set_global_position(parent->get_x() + 16, parent->get_y() + 8);
            pos_end_1935_6_0: ;
        }
    }
    event_1935_6_end: ;
}
// Function purpose: generated callback event_func_634 processes event block(s) 1936_6. Actions/conditions:
//        1936_6: sets the object position in the world.
void Frames::event_func_634()
{
    // event 1936_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1936_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_mailman_556))) goto event_1936_6_end;
        {
            FrameObject * parent = ((Active*)get_instance(containermail_399_instances));
            if (parent == NULL) goto pos_end_1936_6_0;
            ((Active*)get_instance(active3_284_instances))->set_global_position(parent->get_x() + 16, parent->get_y() + 16);
            pos_end_1936_6_0: ;
        }
    }
    event_1936_6_end: ;
}
// Function purpose: generated callback event_func_635 processes event block(s) 1937_6. Actions/conditions:
//        1937_6: sets the object position in the world.
void Frames::event_func_635()
{
    // event 1937_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1937_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_library_25))) goto event_1937_6_end;
        {
            FrameObject * parent = ((Active*)get_instance(containerbookchest_273_instances));
            if (parent == NULL) goto pos_end_1937_6_0;
            ((Active*)get_instance(active3_284_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_1937_6_0: ;
        }
    }
    event_1937_6_end: ;
}
// Function purpose: generated callback event_func_636 processes event block(s) 1938_6. Actions/conditions:
//        1938_6: positions the target object; positions the target object.
void Frames::event_func_636()
{
    // event 1938_6 : positions the target object; positions the target object
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1938_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_woodshop_21))) goto event_1938_6_end;
        ((Active*)get_instance(active3_284_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(58, str_zones_woodshoptopx_557)+((((AssociateArray*)get_instance(gameVariables_instances))->get_value(59, str_zones_woodshopbottomx_558)-((AssociateArray*)get_instance(gameVariables_instances))->get_value(58, str_zones_woodshoptopx_557))/MathHelper()/2));
        ((Active*)get_instance(active3_284_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(60, str_zones_woodshoptopy_559)+((((AssociateArray*)get_instance(gameVariables_instances))->get_value(61, str_zones_woodshopbottomy_560)-((AssociateArray*)get_instance(gameVariables_instances))->get_value(60, str_zones_woodshoptopy_559))/MathHelper()/2));
    }
    event_1938_6_end: ;
}
// Function purpose: generated callback event_func_637 processes event block(s) 1939_6. Actions/conditions:
//        1939_6: positions the target object; positions the target object.
void Frames::event_func_637()
{
    // event 1939_6 : positions the target object; positions the target object
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1939_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_metalshop_35))) goto event_1939_6_end;
        ((Active*)get_instance(active3_284_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(62, str_zones_metalshoptopx_561)+((((AssociateArray*)get_instance(gameVariables_instances))->get_value(63, str_zones_metalshopbottomx_562)-((AssociateArray*)get_instance(gameVariables_instances))->get_value(62, str_zones_metalshoptopx_561))/MathHelper()/2));
        ((Active*)get_instance(active3_284_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(64, str_zones_metalshoptopy_563)+((((AssociateArray*)get_instance(gameVariables_instances))->get_value(65, str_zones_metalshopbottomy_564)-((AssociateArray*)get_instance(gameVariables_instances))->get_value(64, str_zones_metalshoptopy_563))/MathHelper()/2));
    }
    event_1939_6_end: ;
}
// Function purpose: generated callback event_func_638 processes event block(s) 1940_6. Actions/conditions:
//        1940_6: positions the target object; positions the target object.
void Frames::event_func_638()
{
    // event 1940_6 : positions the target object; positions the target object
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1940_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_laundry_29))) goto event_1940_6_end;
        ((Active*)get_instance(active3_284_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(66, str_zones_laundrytopx_565)+((((AssociateArray*)get_instance(gameVariables_instances))->get_value(67, str_zones_laundrybottomx_566)-((AssociateArray*)get_instance(gameVariables_instances))->get_value(66, str_zones_laundrytopx_565))/MathHelper()/2));
        ((Active*)get_instance(active3_284_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(68, str_zones_laundrytopy_567)+((((AssociateArray*)get_instance(gameVariables_instances))->get_value(69, str_zones_laundrybottomy_568)-((AssociateArray*)get_instance(gameVariables_instances))->get_value(68, str_zones_laundrytopy_567))/MathHelper()/2));
    }
    event_1940_6_end: ;
}
// Function purpose: generated callback event_func_639 processes event block(s) 1941_6. Actions/conditions:
//        1941_6: positions the target object; positions the target object.
void Frames::event_func_639()
{
    // event 1941_6 : positions the target object; positions the target object
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1941_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_kitchen_12))) goto event_1941_6_end;
        ((Active*)get_instance(active3_284_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(70, str_zones_kitchentopx_569)+((((AssociateArray*)get_instance(gameVariables_instances))->get_value(71, str_zones_kitchenbottomx_570)-((AssociateArray*)get_instance(gameVariables_instances))->get_value(70, str_zones_kitchentopx_569))/MathHelper()/2));
        ((Active*)get_instance(active3_284_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(72, str_zones_kitchentopy_571)+((((AssociateArray*)get_instance(gameVariables_instances))->get_value(73, str_zones_kitchenbottomy_572)-((AssociateArray*)get_instance(gameVariables_instances))->get_value(72, str_zones_kitchentopy_571))/MathHelper()/2));
    }
    event_1941_6_end: ;
}
// Function purpose: generated callback event_func_640 processes event block(s) 1942_6. Actions/conditions:
//        1942_6: positions the target object; positions the target object.
void Frames::event_func_640()
{
    // event 1942_6 : positions the target object; positions the target object
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1942_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_tailor_479))) goto event_1942_6_end;
        ((Active*)get_instance(active3_284_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(74, str_zones_tailorshoptopx_573)+((((AssociateArray*)get_instance(gameVariables_instances))->get_value(75, str_zones_tailorshopbottomx_574)-((AssociateArray*)get_instance(gameVariables_instances))->get_value(74, str_zones_tailorshoptopx_573))/MathHelper()/2));
        ((Active*)get_instance(active3_284_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(76, str_zones_tailorshoptopy_575)+((((AssociateArray*)get_instance(gameVariables_instances))->get_value(77, str_zones_tailorshopbottomy_576)-((AssociateArray*)get_instance(gameVariables_instances))->get_value(76, str_zones_tailorshoptopy_575))/MathHelper()/2));
    }
    event_1942_6_end: ;
}
// Function purpose: generated callback event_func_641 processes event block(s) 1943_6. Actions/conditions:
//        1943_6: sets the object position in the world.
void Frames::event_func_641()
{
    // event 1943_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1943_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_deliveries_577))) goto event_1943_6_end;
        {
            FrameObject * parent = ((Active*)get_instance(truck_388_instances));
            if (parent == NULL) goto pos_end_1943_6_0;
            ((Active*)get_instance(active3_284_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1943_6_0: ;
        }
    }
    event_1943_6_end: ;
}
void Frames::loop_job_dest_6()
{
    event_func_632();
    event_func_633();
    event_func_634();
    event_func_635();
    event_func_636();
    event_func_637();
    event_func_638();
    event_func_639();
    event_func_640();
    event_func_641();
}
// Function purpose: generated callback event_func_642 processes event block(s) 47_6. Actions/conditions: 47_6:
//        sets JobPayMod to 1; sets JobQuotaMod to 3.
void Frames::event_func_642()
{
    // event 47_6 : sets JobPayMod to 1; sets JobQuotaMod to 3
    {
        if (!(group_load_map_from_file_1)) goto event_47_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) == (str_camp_504))) goto event_47_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(78, str_jobpaymod_578, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(79, str_jobquotamod_579, 3);
    }
    event_47_6_end: ;
}
// Function purpose: generated callback event_func_643 processes event block(s) 48_6. Actions/conditions: 48_6:
//        sets JobPayMod to 2; sets JobQuotaMod to 2.
void Frames::event_func_643()
{
    // event 48_6 : sets JobPayMod to 2; sets JobQuotaMod to 2
    {
        if (!(group_load_map_from_file_1)) goto event_48_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) == (str_maxsec_580))) goto event_48_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(78, str_jobpaymod_578, 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(79, str_jobquotamod_579, 2);
    }
    event_48_6_end: ;
}
// Function purpose: generated callback event_func_644 processes event block(s) 49_6. Actions/conditions: 49_6:
//        sets JobPayMod to 3; sets JobQuotaMod to 2.
void Frames::event_func_644()
{
    // event 49_6 : sets JobPayMod to 3; sets JobQuotaMod to 2
    {
        if (!(group_load_map_from_file_1)) goto event_49_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) == (str_medsec_581))) goto event_49_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(78, str_jobpaymod_578, 3);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(79, str_jobquotamod_579, 2);
    }
    event_49_6_end: ;
}
// Function purpose: generated callback event_func_645 processes event block(s) 50_6. Actions/conditions: 50_6:
//        sets JobPayMod to 4; sets JobQuotaMod to 1.
void Frames::event_func_645()
{
    // event 50_6 : sets JobPayMod to 4; sets JobQuotaMod to 1
    {
        if (!(group_load_map_from_file_1)) goto event_50_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) == (str_minsec_582))) goto event_50_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(78, str_jobpaymod_578, 4);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(79, str_jobquotamod_579, 1);
    }
    event_50_6_end: ;
}
void Frames::loop_setjobpayout_6()
{
    event_func_642();
    event_func_643();
    event_func_644();
    event_func_645();
}
// Function purpose: generated callback event_func_646 processes event block(s) 570_6. Actions/conditions:
//        570_6: splits saved text into fields; adds a sheetsposters 294 instance; sets the selected object's
//        horizontal position to string_to_number(stringtokenizer_81->get(0)); plus 6 more actions.
void Frames::event_func_646()
{
    // event 570_6 : splits saved text into fields; adds a sheetsposters 294 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer_81->get(0)); plus 6 more actions
    {
        if (!(group_setup_1)) goto event_570_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(loop_load_curts_index), str__96);
        sheetsposters_294_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_sheetsposters_294(0, 0), 1);
            sheetsposters_294_instances.add_back();
        }
        for (ObjectIterator it(sheetsposters_294_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
            ((Active*)*it)->force_animation(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        }
        mapsetupobstaclemarker_323_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_mapsetupobstaclemarker_323(0, 0), 1);
            mapsetupobstaclemarker_323_instances.add_back();
        }
        for (ObjectIterator it(mapsetupobstaclemarker_323_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        }
    }
    event_570_6_end: ;
}
// Function purpose: generated callback event_func_647 processes event block(s) 571_6. Actions/conditions:
//        571_6: removes background tiles at the target coordinates; draws the selected image or tile.
void Frames::event_func_647()
{
    // event 571_6 : removes background tiles at the target coordinates; draws the selected image or tile
    {
        if (!(group_setup_1)) goto event_571_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2))) == (1))) goto event_571_6_end;
        layers[2-1].destroy_backgrounds(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)), 0);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)), 0, 48, 16, 16, 0);
    }
    event_571_6_end: ;
}
void Frames::loop_load_curts_6()
{
    event_func_646();
    event_func_647();
}
// Function purpose: generated callback event_func_648 processes event block(s) 4123_6. Actions/conditions:
//        4123_6: sets Ypos to 70; creates a dchar 214 object; positions the target object; plus 6 more actions.
void Frames::event_func_648()
{
    // event 4123_6 : sets Ypos to 70; creates a dchar 214 object; positions the target object; plus 6 more actions
    {
        if (!(group_code_1 && group_code_payphone_1)) goto event_4123_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(80, str_ypos_193, 70);
        FrameObject * single_instance_4123_6_0; single_instance_4123_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + -60), parent->layer);
                if (single_instance_4123_6_0 == NULL)
                    single_instance_4123_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_4123_6_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_4123_6_0)), frame_left()));
        ((Text*)((Text*)single_instance_4123_6_0))->blend_color.set(Color(0, 84, 128));
        ((Text*)((Text*)single_instance_4123_6_0))->set_bold(1);
        ((Text*)((Text*)single_instance_4123_6_0))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_phonetips_583, str_1_97)));
    }
    event_4123_6_end: ;
}
// Function purpose: generated callback event_func_649 processes event block(s) 4124_6. Actions/conditions:
//        4124_6: sets source to PhoneTips entry 2; sets source to
//        StringReplace::replace(gameVariables->get_string(81, source), #, ); adds a dchar 214 instance; plus
//        7 more actions.
void Frames::event_func_649()
{
    // event 4124_6 : sets source to PhoneTips entry 2; sets source to StringReplace::replace(gameVariables->get_string(81, source), #, ); adds a dchar 214 instance; plus 7 more actions
    {
        if (!(group_code_1 && group_code_payphone_1)) goto event_4124_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_phonetips_583, str_2_155));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str__346, str__198));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+27);
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
            ((Text*)*it)->blend_color.set(Color(75, 75, 75));
        }
    }
    event_4124_6_end: ;
}
// Function purpose: generated callback event_func_650 processes event block(s) 4125_6. Actions/conditions:
//        4125_6: creates a buttons 245 object; sets the object's animation to 38; sets the selected object's numeric
//        value to 1; plus 10 more actions.
void Frames::event_func_650()
{
    // event 4125_6 : creates a buttons 245 object; sets the object's animation to 38; sets the selected object's numeric value to 1; plus 10 more actions
    {
        if (!(group_code_1 && group_code_payphone_1)) goto event_4125_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(82, str_hint1_unlocked_585)) == (0))) goto event_4125_6_end;
        FrameObject * single_instance_4125_6_0; single_instance_4125_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_4125_6_0 == NULL)
                    single_instance_4125_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_4125_6_0))->force_animation(38);
        ((Active*)((Active*)single_instance_4125_6_0))->alterables->values.set(10, 1);
        ((Active*)((Active*)single_instance_4125_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_phonetips_583, str_4_161)+str__586+number_to_string(5+(((AssociateArray*)get_instance(gameVariables_instances))->get_value(83, str_npclvl_587)*10))+str__321);
            ((Text*)*it)->blend_color.set(Color(128, 0, 16));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_4125_6_end: ;
}
// Function purpose: generated callback event_func_651 processes event block(s) 4126_6. Actions/conditions:
//        4126_6: creates a buttons 245 object; sets the object's animation to 38; sets the selected object's numeric
//        value to 1; plus 10 more actions.
void Frames::event_func_651()
{
    // event 4126_6 : creates a buttons 245 object; sets the object's animation to 38; sets the selected object's numeric value to 1; plus 10 more actions
    {
        if (!(group_code_1 && group_code_payphone_1)) goto event_4126_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(82, str_hint1_unlocked_585)) == (1))) goto event_4126_6_end;
        FrameObject * single_instance_4126_6_0; single_instance_4126_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_4126_6_0 == NULL)
                    single_instance_4126_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_4126_6_0))->force_animation(38);
        ((Active*)((Active*)single_instance_4126_6_0))->alterables->values.set(10, 1);
        ((Active*)((Active*)single_instance_4126_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_phonetips_583, str_3_158));
            ((Text*)*it)->blend_color.set(Color(18, 128, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_4126_6_end: ;
}
// Function purpose: generated callback event_func_652 processes event block(s) 4127_6. Actions/conditions:
//        4127_6: creates a buttons 245 object; sets the object's animation to 38; sets the selected object's numeric
//        value to 2; plus 10 more actions.
void Frames::event_func_652()
{
    // event 4127_6 : creates a buttons 245 object; sets the object's animation to 38; sets the selected object's numeric value to 2; plus 10 more actions
    {
        if (!(group_code_1 && group_code_payphone_1)) goto event_4127_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(84, str_hint2_unlocked_588)) == (0))) goto event_4127_6_end;
        FrameObject * single_instance_4127_6_0; single_instance_4127_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_4127_6_0 == NULL)
                    single_instance_4127_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_4127_6_0))->force_animation(38);
        ((Active*)((Active*)single_instance_4127_6_0))->alterables->values.set(10, 2);
        ((Active*)((Active*)single_instance_4127_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_phonetips_583, str_4_161)+str__586+number_to_string(15+(((AssociateArray*)get_instance(gameVariables_instances))->get_value(83, str_npclvl_587)*10))+str__321);
            ((Text*)*it)->blend_color.set(Color(128, 0, 16));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_4127_6_end: ;
}
// Function purpose: generated callback event_func_653 processes event block(s) 4128_6. Actions/conditions:
//        4128_6: creates a buttons 245 object; sets the object's animation to 38; sets the selected object's numeric
//        value to 2; plus 10 more actions.
void Frames::event_func_653()
{
    // event 4128_6 : creates a buttons 245 object; sets the object's animation to 38; sets the selected object's numeric value to 2; plus 10 more actions
    {
        if (!(group_code_1 && group_code_payphone_1)) goto event_4128_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(84, str_hint2_unlocked_588)) == (1))) goto event_4128_6_end;
        FrameObject * single_instance_4128_6_0; single_instance_4128_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_4128_6_0 == NULL)
                    single_instance_4128_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_4128_6_0))->force_animation(38);
        ((Active*)((Active*)single_instance_4128_6_0))->alterables->values.set(10, 2);
        ((Active*)((Active*)single_instance_4128_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_phonetips_583, str_3_158));
            ((Text*)*it)->blend_color.set(Color(18, 128, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_4128_6_end: ;
}
// Function purpose: generated callback event_func_654 processes event block(s) 4129_6. Actions/conditions:
//        4129_6: creates a buttons 245 object; sets the object's animation to 38; sets the selected object's numeric
//        value to 3; plus 10 more actions.
void Frames::event_func_654()
{
    // event 4129_6 : creates a buttons 245 object; sets the object's animation to 38; sets the selected object's numeric value to 3; plus 10 more actions
    {
        if (!(group_code_1 && group_code_payphone_1)) goto event_4129_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(85, str_hint3_unlocked_589)) == (0))) goto event_4129_6_end;
        FrameObject * single_instance_4129_6_0; single_instance_4129_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_4129_6_0 == NULL)
                    single_instance_4129_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_4129_6_0))->force_animation(38);
        ((Active*)((Active*)single_instance_4129_6_0))->alterables->values.set(10, 3);
        ((Active*)((Active*)single_instance_4129_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_phonetips_583, str_4_161)+str__586+number_to_string(25+(((AssociateArray*)get_instance(gameVariables_instances))->get_value(83, str_npclvl_587)*10))+str__321);
            ((Text*)*it)->blend_color.set(Color(128, 0, 16));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_4129_6_end: ;
}
// Function purpose: generated callback event_func_655 processes event block(s) 4130_6. Actions/conditions:
//        4130_6: creates a buttons 245 object; sets the object's animation to 38; sets the selected object's numeric
//        value to 3; plus 10 more actions.
void Frames::event_func_655()
{
    // event 4130_6 : creates a buttons 245 object; sets the object's animation to 38; sets the selected object's numeric value to 3; plus 10 more actions
    {
        if (!(group_code_1 && group_code_payphone_1)) goto event_4130_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(85, str_hint3_unlocked_589)) == (1))) goto event_4130_6_end;
        FrameObject * single_instance_4130_6_0; single_instance_4130_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_4130_6_0 == NULL)
                    single_instance_4130_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_4130_6_0))->force_animation(38);
        ((Active*)((Active*)single_instance_4130_6_0))->alterables->values.set(10, 3);
        ((Active*)((Active*)single_instance_4130_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_phonetips_583, str_3_158));
            ((Text*)*it)->blend_color.set(Color(18, 128, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_4130_6_end: ;
}
// Function purpose: generated callback event_func_656 processes event block(s) 4131_6. Actions/conditions:
//        4131_6: creates a buttons 245 object; sets the object's animation to 38; sets the selected object's numeric
//        value to 4; plus 10 more actions.
void Frames::event_func_656()
{
    // event 4131_6 : creates a buttons 245 object; sets the object's animation to 38; sets the selected object's numeric value to 4; plus 10 more actions
    {
        if (!(group_code_1 && group_code_payphone_1)) goto event_4131_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_4131_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(86, str_hint4_unlocked_590)) == (0))) goto event_4131_6_end;
        FrameObject * single_instance_4131_6_0; single_instance_4131_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_4131_6_0 == NULL)
                    single_instance_4131_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_4131_6_0))->force_animation(38);
        ((Active*)((Active*)single_instance_4131_6_0))->alterables->values.set(10, 4);
        ((Active*)((Active*)single_instance_4131_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_phonetips_583, str_4_161)+str__586+number_to_string(35+(((AssociateArray*)get_instance(gameVariables_instances))->get_value(83, str_npclvl_587)*10))+str__321);
            ((Text*)*it)->blend_color.set(Color(128, 0, 16));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_4131_6_end: ;
}
// Function purpose: generated callback event_func_657 processes event block(s) 4132_6. Actions/conditions:
//        4132_6: creates a buttons 245 object; sets the object's animation to 38; sets the selected object's numeric
//        value to 4; plus 10 more actions.
void Frames::event_func_657()
{
    // event 4132_6 : creates a buttons 245 object; sets the object's animation to 38; sets the selected object's numeric value to 4; plus 10 more actions
    {
        if (!(group_code_1 && group_code_payphone_1)) goto event_4132_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_4132_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(86, str_hint4_unlocked_590)) == (1))) goto event_4132_6_end;
        FrameObject * single_instance_4132_6_0; single_instance_4132_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_4132_6_0 == NULL)
                    single_instance_4132_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_4132_6_0))->force_animation(38);
        ((Active*)((Active*)single_instance_4132_6_0))->alterables->values.set(10, 4);
        ((Active*)((Active*)single_instance_4132_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_phonetips_583, str_3_158));
            ((Text*)*it)->blend_color.set(Color(18, 128, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_4132_6_end: ;
}
void Frames::loop_phones_list_6()
{
    event_func_613();
    event_func_648();
    event_func_649();
    event_func_650();
    event_func_651();
    event_func_652();
    event_func_653();
    event_func_654();
    event_func_655();
    event_func_656();
    event_func_657();
}
// Function purpose: generated callback event_func_658 processes event block(s) 2424_6. Actions/conditions:
//        2424_6: splits saved text into fields; sets a stored numeric value.
void Frames::event_func_658()
{
    // event 2424_6 : splits saved text into fields; sets a stored numeric value
    {
        if (!(group_code_1)) goto event_2424_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inv_512+number_to_string(loop_invstring_index+1))) != (empty_string))) goto event_2424_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inv_512+number_to_string(loop_invstring_index+1)), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(str_inv_591+number_to_string(loop_invstring_index+1), string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
    }
    event_2424_6_end: ;
}
void Frames::loop_invstring_6()
{
    event_func_658();
}
// Function purpose: generated callback event_func_659 processes event block(s) 4505_6. Actions/conditions:
//        4505_6: sets the object's animation to 7; sets the selected object's direction to 0; sets the object
//        position in the world.
void Frames::event_func_659()
{
    // event 4505_6 : sets the object's animation to 7; sets the selected object's direction to 0; sets the object position in the world
    {
        ((Active*)get_instance(cursor_178_instances))->force_animation(7);
        ((Active*)get_instance(cursor_178_instances))->set_direction(0);
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_4505_6_0;
            ((Active*)get_instance(cursor_178_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_4505_6_0: ;
        }
    }
    event_4505_6_end: ;
}
// Function purpose: generated callback event_func_660 processes event block(s) 4506_6. Group(s): Extra NPCs.
//        Actions/conditions: 4506_6: sets VisSeatID to ((Active*)get_single(visitationvisitor_381_instances,
//        default_active_instance))->alterables->values.get(0).
void Frames::event_func_660()
{
    // event 4506_6 : sets VisSeatID to ((Active*)get_single(visitationvisitor_381_instances, default_active_instance))->alterables->values.get(0)
    {
        // group: Extra NPCs
        cursor_178_instances.clear_selection();
        visitationvisitor_381_instances.clear_selection();
        if (!check_overlap(cursor_178_instances, visitationvisitor_381_instances)) goto event_4506_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(87, str_visseatid_592, ((Active*)get_single(visitationvisitor_381_instances, default_active_instance))->alterables->values.get(0));
    }
    event_4506_6_end: ;
}
// Function purpose: generated callback event_func_661 processes event block(s) 4507_6. Actions/conditions:
//        4507_6: sets the object's animation to 7; sets the selected object's direction to 24; sets the object
//        position in the world.
void Frames::event_func_661()
{
    // event 4507_6 : sets the object's animation to 7; sets the selected object's direction to 24; sets the object position in the world
    {
        ((Active*)get_instance(cursor_178_instances))->force_animation(7);
        ((Active*)get_instance(cursor_178_instances))->set_direction(24);
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_4507_6_0;
            ((Active*)get_instance(cursor_178_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_4507_6_0: ;
        }
    }
    event_4507_6_end: ;
}
// Function purpose: generated callback event_func_662 processes event block(s) 4509_6. Actions/conditions:
//        4509_6: sets the object's animation to 0.
void Frames::event_func_662()
{
    // event 4509_6 : sets the object's animation to 0
    {
        ((Active*)get_instance(cursor_178_instances))->force_animation(0);
    }
    event_4509_6_end: ;
}
// Function purpose: generated callback event_func_663 processes event block(s) 4510_6. Group(s): Extra NPCs.
//        Actions/conditions: 4510_6: sets the selected object's direction to get_direction_int(selected object->x,
//        selected object->y, ((Active*)get_single(visitationvisitor_381_instances, it.current_index))->x + 8,
//        ((Active*; creates a extranpcs 383 object; sets the selected object's numeric value to
//        13+randrange_event(7); plus 11 more actions.
void Frames::event_func_663()
{
    // event 4510_6 : sets the selected object's direction to get_direction_int(selected object->x, selected object->y, ((Active*)get_single(visitationvisitor_381_instances, it.current_index))->x + 8, ((Active*; creates a extranpcs 383 object; sets the selected object's numeric value to 13+randrange_event(7); plus 11 more actions
    {
        // group: Extra NPCs
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_4510_6_end;
        visitationvisitor_381_instances.clear_selection();
        for (ObjectIterator it(visitationvisitor_381_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(87, str_visseatid_592)))) { it.deselect(); continue; }
        }
        if (!visitationvisitor_381_instances.has_selection()) goto event_4510_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_single(visitationvisitor_381_instances, it.current_index))->x + 8, ((Active*)get_single(visitationvisitor_381_instances, it.current_index))->y + 8));
        }
        FrameObject * single_instance_4510_6_0; single_instance_4510_6_0 = NULL;
        // select single: true false false
        npcspawn_384_instances.clear_selection();
        for (ObjectIterator p_it(npcspawn_384_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_serviceNpc(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_4510_6_0 == NULL)
                    single_instance_4510_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_4510_6_0))->alterables->values.set(4, 13+randrange_event(7));
        ((Active*)((Active*)single_instance_4510_6_0))->force_animation(((Active*)single_instance_4510_6_0)->alterables->values.get(4));
        ((Active*)((Active*)single_instance_4510_6_0))->alterables->values.set(0, serviceNpc_instances.size());
        ((Active*)((Active*)single_instance_4510_6_0))->alterables->strings.set(0, str_visitor_593);
        ((Active*)((Active*)single_instance_4510_6_0))->alterables->values.set(1, 1);
        ((Active*)((Active*)single_instance_4510_6_0))->alterables->values.set(23, ((Active*)get_single(visitationvisitor_381_instances, default_active_instance))->get_x());
        ((Active*)((Active*)single_instance_4510_6_0))->alterables->values.set(24, ((Active*)get_single(visitationvisitor_381_instances, default_active_instance))->get_y());
        ((Active*)((Active*)single_instance_4510_6_0))->alterables->values.set(25, qualifier_14.size()+serviceNpc_instances.size());
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindingguards_247_instances));
            {
    planner->add_agent(((Active*)single_instance_4510_6_0));        }
        }
    }
    event_4510_6_end: ;
}
// Function purpose: generated callback event_func_664 processes event block(s) 4511_6. Group(s): Extra NPCs.
//        Actions/conditions: 4511_6: sets the selected object's direction to get_direction_int(selected object->x,
//        selected object->y, ((Active*)get_single(visitationvisitor_381_instances, it.current_index))->x + 8,
//        ((Active*; adds a extranpcs 383 instance; updates game state with selected
//        object->get_movement()->set_speed(20); plus 12 more actions.
void Frames::event_func_664()
{
    // event 4511_6 : sets the selected object's direction to get_direction_int(selected object->x, selected object->y, ((Active*)get_single(visitationvisitor_381_instances, it.current_index))->x + 8, ((Active*; adds a extranpcs 383 instance; updates game state with selected object->get_movement()->set_speed(20); plus 12 more actions
    {
        // group: Extra NPCs
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_4511_6_end;
        visitationvisitor_381_instances.clear_selection();
        for (ObjectIterator it(visitationvisitor_381_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(87, str_visseatid_592)))) { it.deselect(); continue; }
        }
        if (!visitationvisitor_381_instances.has_selection()) goto event_4511_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_single(visitationvisitor_381_instances, it.current_index))->x + 8, ((Active*)get_single(visitationvisitor_381_instances, it.current_index))->y + 8));
        }
        serviceNpc_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_serviceNpc(816, 528), 1);
            serviceNpc_instances.add_back();
        }
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(20);
            ((Active*)*it)->alterables->values.set(4, 25+randrange_event(5));
            ((Active*)*it)->force_animation(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.set(0, serviceNpc_instances.size());
            ((Active*)*it)->alterables->strings.set(0, str_visitor_593);
            ((Active*)*it)->alterables->values.set(1, 1);
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(visitationvisitor_381_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(visitationvisitor_381_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size()+serviceNpc_instances.size());
        }
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindingguards_247_instances));
            for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
    planner->add_agent(((Active*)*it));        }
        }
    }
    event_4511_6_end: ;
}
void Frames::loop_vischaircheck_6()
{
    event_func_659();
    event_func_660();
    event_func_661();
    event_func_660();
    event_func_662();
    event_func_663();
    event_func_664();
}
// Function purpose: generated callback event_func_665 processes event block(s) 707_6. Actions/conditions:
//        707_6: creates a buttons 245 object; positions the target object; positions the target object; plus 7 more
//        actions.
void Frames::event_func_665()
{
    // event 707_6 : creates a buttons 245 object; positions the target object; positions the target object; plus 7 more actions
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_707_6_end;
        FrameObject * single_instance_707_6_0; single_instance_707_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 65, parent->y + 35), parent->layer);
                if (single_instance_707_6_0 == NULL)
                    single_instance_707_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_707_6_0))->set_x(((Active*)get_instance(dialogPanel_instances))->get_box_index(2)-90);
        ((Active*)((Active*)single_instance_707_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(3)-25);
        ((Active*)((Active*)single_instance_707_6_0))->force_animation(43);
        FrameObject * single_instance_707_6_1; single_instance_707_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_707_6_0)->x + 3, ((Active*)single_instance_707_6_0)->y + 3), ((Active*)single_instance_707_6_0)->layer);
            if (single_instance_707_6_1 == NULL)
                single_instance_707_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_707_6_1))->blend_color.set(Color(150, 150, 150));
        ((Text*)((Text*)single_instance_707_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_6_241)));
    }
    event_707_6_end: ;
}
void Frames::loop_letter_sss_6()
{
    event_func_665();
}
// Function purpose: generated callback event_func_666 processes event block(s) 4485_6. Actions/conditions:
//        4485_6: sets the selected object's numeric value to ((Active*)single_instance_4485_6_0)->get_x(); sets the
//        selected object's numeric value to ((Active*)single_instance_4485_6_0)->get_y(); updates a value on the
//        target object.
void Frames::event_func_666()
{
    // event 4485_6 : sets the selected object's numeric value to ((Active*)single_instance_4485_6_0)->get_x(); sets the selected object's numeric value to ((Active*)single_instance_4485_6_0)->get_y(); updates a value on the target object
    {
        if (!(group_extra_npcs_warden_1)) goto event_4485_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_warden_594))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_4485_6_end;
        waypointguard2_315_instances.clear_selection();
        FrameObject * single_instance_4485_6_0; single_instance_4485_6_0 = pick_random(waypointguard2_315_instances);
        if (single_instance_4485_6_0 == NULL) goto event_4485_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)single_instance_4485_6_0)->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)single_instance_4485_6_0)->get_y());
            ((Active*)*it)->alterables->strings.set(9, number_to_string(((Active*)single_instance_4485_6_0)->get_x()/MathHelper()/16)+str_x_437+number_to_string(((Active*)single_instance_4485_6_0)->get_y()/MathHelper()/16));
        }
    }
    event_4485_6_end: ;
}
void Frames::loop_warden_dest_6()
{
    event_func_666();
}
// Function purpose: generated callback event_func_667 processes event block(s) 2402_6. Actions/conditions:
//        2402_6: updates a value on the target object; sets the selected object's visibility to true.
void Frames::event_func_667()
{
    // event 2402_6 : updates a value on the target object; sets the selected object's visibility to true
    {
        if (!(group_code_1)) goto event_2402_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2402_6_end;
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(((AssociateArray*)get_instance(gameVariables_instances))->get_value(88, str_fontcolor_595));
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2402_6_end: ;
}
void Frames::loop_set_align_6()
{
    event_func_667();
}
// Function purpose: generated callback event_func_668 processes event block(s) 3500_6. Actions/conditions:
//        3500_6: checks scene is active; game state AddSuccess; game state GrabType; this handler gates a game event
//        without a direct value/object action.
void Frames::event_func_668()
{
    // event 3500_6 : checks scene is active; game state AddSuccess; game state GrabType; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3500_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(89, str_addsuccess_596)) == (1))) goto event_3500_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(90, str_grabtype_597)) == (str_poster_598))) goto event_3500_6_end;
        layers[7-1].destroy_backgrounds((get_mouse_x()/MathHelper()/16)*16, (get_mouse_y()/MathHelper()/16)*16, 0);
    }
    event_3500_6_end: ;
}
