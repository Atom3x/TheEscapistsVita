#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_5695 processes event block(s) 131_11. Actions/conditions:
//        131_11: adds a interwebs 749 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16.
void Frames::event_func_5695()
{
    // event 131_11 : adds a interwebs 749 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16
    {
        if (!(group_load_map_from_file_1)) goto event_131_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (69))) goto event_131_11_end;
        interwebs_749_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_interwebs_749(0, 0), 1);
            interwebs_749_instances.add_back();
        }
        for (ObjectIterator it(interwebs_749_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_131_11_end: ;
}
// Function purpose: generated callback event_func_5696 processes event block(s) 137_11. Actions/conditions:
//        137_11: adds a waypointtruckstart 752 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16.
void Frames::event_func_5696()
{
    // event 137_11 : adds a waypointtruckstart 752 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16
    {
        if (!(group_load_map_from_file_1)) goto event_137_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (76))) goto event_137_11_end;
        waypointtruckstart_752_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_waypointtruckstart_752(0, 0), 1);
            waypointtruckstart_752_instances.add_back();
        }
        for (ObjectIterator it(waypointtruckstart_752_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_137_11_end: ;
}
// Function purpose: generated callback event_func_5697 processes event block(s) 138_11. Actions/conditions:
//        138_11: adds a ziplinepostend 753 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16.
void Frames::event_func_5697()
{
    // event 138_11 : adds a ziplinepostend 753 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16
    {
        if (!(group_load_map_from_file_1)) goto event_138_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (77))) goto event_138_11_end;
        ziplinepostend_753_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_ziplinepostend_753(0, 0), 1);
            ziplinepostend_753_instances.add_back();
        }
        for (ObjectIterator it(ziplinepostend_753_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_138_11_end: ;
}
// Function purpose: generated callback event_func_5698 processes event block(s) 139_11. Actions/conditions:
//        139_11: adds a waypointtruckpark 391 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16.
void Frames::event_func_5698()
{
    // event 139_11 : adds a waypointtruckpark 391 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16
    {
        if (!(group_load_map_from_file_1)) goto event_139_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (78))) goto event_139_11_end;
        waypointtruckpark_391_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_waypointtruckpark_391(0, 0), 1);
            waypointtruckpark_391_instances.add_back();
        }
        for (ObjectIterator it(waypointtruckpark_391_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_139_11_end: ;
}
// Function purpose: generated callback event_func_5699 processes event block(s) 140_11. Actions/conditions:
//        140_11: adds a containertailorout 395 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16.
void Frames::event_func_5699()
{
    // event 140_11 : adds a containertailorout 395 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16
    {
        if (!(group_load_map_from_file_1)) goto event_140_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (79))) goto event_140_11_end;
        containertailorout_395_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_containertailorout_755(0, 0), 1);
            containertailorout_395_instances.add_back();
        }
        for (ObjectIterator it(containertailorout_395_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_140_11_end: ;
}
// Function purpose: generated callback event_func_5700 processes event block(s) 141_11. Actions/conditions:
//        141_11: adds a containertailorin 396 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16.
void Frames::event_func_5700()
{
    // event 141_11 : adds a containertailorin 396 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16
    {
        if (!(group_load_map_from_file_1)) goto event_141_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (80))) goto event_141_11_end;
        containertailorin_396_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_containertailorin_396(0, 0), 1);
            containertailorin_396_instances.add_back();
        }
        for (ObjectIterator it(containertailorin_396_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_141_11_end: ;
}
// Function purpose: generated callback event_func_5701 processes event block(s) 142_11. Actions/conditions:
//        142_11: adds a containerbookchest 273 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16.
void Frames::event_func_5701()
{
    // event 142_11 : adds a containerbookchest 273 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16
    {
        if (!(group_load_map_from_file_1)) goto event_142_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (81))) goto event_142_11_end;
        containerbookchest_273_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_containerbookchest_273(0, 0), 1);
            containerbookchest_273_instances.add_back();
        }
        for (ObjectIterator it(containerbookchest_273_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_142_11_end: ;
}
// Function purpose: generated callback event_func_5702 processes event block(s) 143_11. Actions/conditions:
//        143_11: adds a containermail 399 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16.
void Frames::event_func_5702()
{
    // event 143_11 : adds a containermail 399 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16
    {
        if (!(group_load_map_from_file_1)) goto event_143_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (82))) goto event_143_11_end;
        containermail_399_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_containermail_399(0, 0), 1);
            containermail_399_instances.add_back();
        }
        for (ObjectIterator it(containermail_399_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_143_11_end: ;
}
// Function purpose: generated callback event_func_5703 processes event block(s) 144_11. Actions/conditions:
//        144_11: adds a doormailroom 400 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 1 more actions.
void Frames::event_func_5703()
{
    // event 144_11 : adds a doormailroom 400 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 1 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_144_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (83))) goto event_144_11_end;
        doormailroom_400_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_doormailroom_400(0, 0), 1);
            doormailroom_400_instances.add_back();
        }
        for (ObjectIterator it(doormailroom_400_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        {
            loop_door_shadow_running = true;
            int times = int(1);
            loop_door_shadow_index = 0;
            while (loop_door_shadow_index < times) {
                loop_door_shadow_11();
                if (!loop_door_shadow_running) break;
                loop_door_shadow_index++;
            }
        }
    }
    event_144_11_end: ;
}
// Function purpose: generated callback event_func_5704 processes event block(s) 145_11. Actions/conditions:
//        145_11: adds a doorgardening 402 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 1 more actions.
void Frames::event_func_5704()
{
    // event 145_11 : adds a doorgardening 402 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 1 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_145_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (84))) goto event_145_11_end;
        doorgardening_402_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_doorgardening_402(0, 0), 1);
            doorgardening_402_instances.add_back();
        }
        for (ObjectIterator it(doorgardening_402_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        {
            loop_door_shadow_running = true;
            int times = int(1);
            loop_door_shadow_index = 0;
            while (loop_door_shadow_index < times) {
                loop_door_shadow_11();
                if (!loop_door_shadow_running) break;
                loop_door_shadow_index++;
            }
        }
    }
    event_145_11_end: ;
}
// Function purpose: generated callback event_func_5705 processes event block(s) 146_11. Actions/conditions:
//        146_11: adds a doortailor 403 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 1 more actions.
void Frames::event_func_5705()
{
    // event 146_11 : adds a doortailor 403 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 1 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_146_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (85))) goto event_146_11_end;
        doortailor_403_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_doortailor_403(0, 0), 1);
            doortailor_403_instances.add_back();
        }
        for (ObjectIterator it(doortailor_403_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        {
            loop_door_shadow_running = true;
            int times = int(1);
            loop_door_shadow_index = 0;
            while (loop_door_shadow_index < times) {
                loop_door_shadow_11();
                if (!loop_door_shadow_running) break;
                loop_door_shadow_index++;
            }
        }
    }
    event_146_11_end: ;
}
// Function purpose: generated callback event_func_5706 processes event block(s) 147_11. Actions/conditions:
//        147_11: adds a doordeliveries 401 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 1 more actions.
void Frames::event_func_5706()
{
    // event 147_11 : adds a doordeliveries 401 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 1 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_147_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (86))) goto event_147_11_end;
        doordeliveries_401_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_doordeliveries_401(0, 0), 1);
            doordeliveries_401_instances.add_back();
        }
        for (ObjectIterator it(doordeliveries_401_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        {
            loop_door_shadow_running = true;
            int times = int(1);
            loop_door_shadow_index = 0;
            while (loop_door_shadow_index < times) {
                loop_door_shadow_11();
                if (!loop_door_shadow_running) break;
                loop_door_shadow_index++;
            }
        }
    }
    event_147_11_end: ;
}
// Function purpose: generated callback event_func_5707 processes event block(s) 149_11. Actions/conditions:
//        149_11: adds a bedlounger 405 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16.
void Frames::event_func_5707()
{
    // event 149_11 : adds a bedlounger 405 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16
    {
        if (!(group_load_map_from_file_1)) goto event_149_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (88))) goto event_149_11_end;
        bedlounger_405_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bedlounger_405(0, 0), 1);
            bedlounger_405_instances.add_back();
        }
        for (ObjectIterator it(bedlounger_405_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_149_11_end: ;
}
// Function purpose: generated callback event_func_5708 processes event block(s) 150_11. Actions/conditions:
//        150_11: adds a containergardening 409 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16.
void Frames::event_func_5708()
{
    // event 150_11 : adds a containergardening 409 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16
    {
        if (!(group_load_map_from_file_1)) goto event_150_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (89))) goto event_150_11_end;
        containergardening_409_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_containergardening_409(0, 0), 1);
            containergardening_409_instances.add_back();
        }
        for (ObjectIterator it(containergardening_409_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_150_11_end: ;
}
// Function purpose: generated callback event_func_5709 processes event block(s) 151_11. Actions/conditions:
//        151_11: adds a joggingmat 407 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 1 more actions.
void Frames::event_func_5709()
{
    // event 151_11 : adds a joggingmat 407 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 1 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_151_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (90))) goto event_151_11_end;
        joggingmat_407_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_joggingmat_407(0, 0), 1);
            joggingmat_407_instances.add_back();
        }
        for (ObjectIterator it(joggingmat_407_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->move_back();
        }
    }
    event_151_11_end: ;
}
// Function purpose: generated callback event_func_5710 processes event block(s) 152_11. Actions/conditions:
//        152_11: adds a pushupmat 408 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 1 more actions.
void Frames::event_func_5710()
{
    // event 152_11 : adds a pushupmat 408 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 1 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_152_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (91))) goto event_152_11_end;
        pushupmat_408_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_pushupmat_408(0, 0), 1);
            pushupmat_408_instances.add_back();
        }
        for (ObjectIterator it(pushupmat_408_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->move_back();
        }
    }
    event_152_11_end: ;
}
// Function purpose: generated callback event_func_5711 processes event block(s) 153_11. Actions/conditions:
//        153_11: adds a containerdeliveries 756 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16.
void Frames::event_func_5711()
{
    // event 153_11 : adds a containerdeliveries 756 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16
    {
        if (!(group_load_map_from_file_1)) goto event_153_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (92))) goto event_153_11_end;
        containerdeliveries_756_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_containerdeliveries_756(0, 0), 1);
            containerdeliveries_756_instances.add_back();
        }
        for (ObjectIterator it(containerdeliveries_756_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_153_11_end: ;
}
// Function purpose: generated callback event_func_5712 processes event block(s) 154_11. Actions/conditions:
//        154_11: adds a containerdeliveries2 757 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16.
void Frames::event_func_5712()
{
    // event 154_11 : adds a containerdeliveries2 757 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16
    {
        if (!(group_load_map_from_file_1)) goto event_154_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (93))) goto event_154_11_end;
        containerdeliveries2_757_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_containerdeliveries2_757(0, 0), 1);
            containerdeliveries2_757_instances.add_back();
        }
        for (ObjectIterator it(containerdeliveries2_757_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_154_11_end: ;
}
// Function purpose: generated callback event_func_5713 processes event block(s) 157_11. Actions/conditions:
//        157_11: adds a skippingmat 435 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16.
void Frames::event_func_5713()
{
    // event 157_11 : adds a skippingmat 435 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16
    {
        if (!(group_load_map_from_file_1)) goto event_157_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (96))) goto event_157_11_end;
        skippingmat_435_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_skippingmat_435(0, 0), 1);
            skippingmat_435_instances.add_back();
        }
        for (ObjectIterator it(skippingmat_435_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_157_11_end: ;
}
// Function purpose: generated callback event_func_5714 processes event block(s) 158_11. Actions/conditions:
//        158_11: adds a punchbag 436 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions.
void Frames::event_func_5714()
{
    // event 158_11 : adds a punchbag 436 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_158_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (97))) goto event_158_11_end;
        punchbag_436_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_punchbag_436(0, 0), 1);
            punchbag_436_instances.add_back();
        }
        for (ObjectIterator it(punchbag_436_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
        punchbag2_438_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_punchbag2_438(0, 0), 1);
            punchbag2_438_instances.add_back();
        }
        for (ObjectIterator it(punchbag2_438_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16)+1);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_158_11_end: ;
}
// Function purpose: generated callback event_func_5715 processes event block(s) 159_11. Actions/conditions:
//        159_11: adds a speedbag 439 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions.
void Frames::event_func_5715()
{
    // event 159_11 : adds a speedbag 439 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_159_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (98))) goto event_159_11_end;
        speedbag_439_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_speedbag_764(0, 0), 1);
            speedbag_439_instances.add_back();
        }
        for (ObjectIterator it(speedbag_439_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
        punchbag3_440_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_punchbag3_765(0, 0), 1);
            punchbag3_440_instances.add_back();
        }
        for (ObjectIterator it(punchbag3_440_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16)+1);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_159_11_end: ;
}
// Function purpose: generated callback event_func_5716 processes event block(s) 162_11. Actions/conditions:
//        162_11: adds a powergen 360 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions.
void Frames::event_func_5716()
{
    // event 162_11 : adds a powergen 360 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_162_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (65))) goto event_162_11_end;
        powergen_360_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_powergen_360(0, 0), 1);
            powergen_360_instances.add_back();
        }
        for (ObjectIterator it(powergen_360_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->set_layer(1+string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3))-1);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_162_11_end: ;
}
void Frames::loop_load_map_objects_11()
{
    event_func_5664();
    event_func_2896();
    event_func_2897();
    event_func_2898();
    event_func_2899();
    event_func_2900();
    event_func_2901();
    event_func_2902();
    event_func_2903();
    event_func_2904();
    event_func_2905();
    event_func_2907();
    event_func_5665();
    event_func_5666();
    event_func_5667();
    event_func_5668();
    event_func_5669();
    event_func_5670();
    event_func_5671();
    event_func_5672();
    event_func_5673();
    event_func_5674();
    event_func_5675();
    event_func_5676();
    event_func_5677();
    event_func_5678();
    event_func_5679();
    event_func_5680();
    event_func_2945();
    event_func_2946();
    event_func_2947();
    event_func_5681();
    event_func_2949();
    event_func_5682();
    event_func_2951();
    event_func_5683();
    event_func_5684();
    event_func_5685();
    event_func_5686();
    event_func_2958();
    event_func_5687();
    event_func_2962();
    event_func_5688();
    event_func_5689();
    event_func_2966();
    event_func_2967();
    event_func_2968();
    event_func_5690();
    event_func_2971();
    event_func_2972();
    event_func_2973();
    event_func_2974();
    event_func_2975();
    event_func_2979();
    event_func_2980();
    event_func_2981();
    event_func_2982();
    event_func_5691();
    event_func_5692();
    event_func_2986();
    event_func_2987();
    event_func_5693();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_5694();
    event_func_5695();
    event_func_2997();
    event_func_2998();
    event_func_2999();
    event_func_3000();
    event_func_3001();
    event_func_5696();
    event_func_5697();
    event_func_5698();
    event_func_5699();
    event_func_5700();
    event_func_5701();
    event_func_5702();
    event_func_5703();
    event_func_5704();
    event_func_5705();
    event_func_5706();
    event_func_3027();
    event_func_5707();
    event_func_5708();
    event_func_5709();
    event_func_5710();
    event_func_5711();
    event_func_5712();
    event_func_3048();
    event_func_3049();
    event_func_5713();
    event_func_5714();
    event_func_5715();
    event_func_3058();
    event_func_3059();
    event_func_5716();
}
// Function purpose: generated callback event_func_5717 processes event block(s) 1293_11. Actions/conditions:
//        1293_11: adds a itemshud 210 instance; sets the object's animation to 1; sets the selected object's
//        direction to 9; plus 10 more actions.
void Frames::event_func_5717()
{
    // event 1293_11 : adds a itemshud 210 instance; sets the object's animation to 1; sets the selected object's direction to 9; plus 10 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_chipping_2_1)) goto event_1293_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_1293_11_end;
        hudItem_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_itemshud_687(-16, -16), 5);
            hudItem_instances.add_back();
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(9);
            ((Active*)*it)->alterables->values.set(2, 41);
            ((Active*)*it)->alterables->values.set(6, 1);
            ((Active*)*it)->alterables->strings.set(0, str_inven_820);
            ((Active*)*it)->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832));
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_1293_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1293_11_1: ;
        }
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)), str_41_1_1324);
    }
    event_1293_11_end: ;
}
// Function purpose: generated callback event_func_5718 processes event block(s) 1295_11. Actions/conditions:
//        1295_11: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_5718()
{
    // event 1295_11 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_chipping_2_1)) goto event_1295_11_end;
        {
            loop_sort_holes_running = true;
            int times = int(dighole_207_instances.size());
            loop_sort_holes_index = 0;
            while (loop_sort_holes_index < times) {
                loop_sort_holes_11();
                if (!loop_sort_holes_running) break;
                loop_sort_holes_index++;
            }
        }
    }
    event_1295_11_end: ;
}
void Frames::loop_collect_wall_11()
{
    event_func_1723();
    event_func_5717();
    event_func_1725();
    event_func_5718();
}
void Frames::loop_climb_off_2_11()
{
    event_func_2188();
}
// Function purpose: generated callback event_func_5719 processes event block(s) 461_11. Actions/conditions:
//        461_11: sets blocked to 1; sets mat to 1.
void Frames::event_func_5719()
{
    // event 461_11 : sets blocked to 1; sets mat to 1
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_461_11_end;
        playerBase_instances.clear_selection();
        pushupmat_408_instances.clear_selection();
        if (!check_overlap(playerBase_instances, pushupmat_408_instances)) goto event_461_11_end;
        for (ObjectIterator it(pushupmat_408_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (-1))) { it.deselect(); continue; }
        }
        if (!pushupmat_408_instances.has_selection()) goto event_461_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(538, str_blocked_1439, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(537, str_mat_1438, 1);
    }
    event_461_11_end: ;
}
// Function purpose: generated callback event_func_5720 processes event block(s) 462_11. Actions/conditions:
//        462_11: sets mat to 1; sets blocked to 1.
void Frames::event_func_5720()
{
    // event 462_11 : sets mat to 1; sets blocked to 1
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_462_11_end;
        playerBase_instances.clear_selection();
        skippingmat_435_instances.clear_selection();
        if (!check_overlap(playerBase_instances, skippingmat_435_instances)) goto event_462_11_end;
        for (ObjectIterator it(skippingmat_435_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (-1))) { it.deselect(); continue; }
        }
        if (!skippingmat_435_instances.has_selection()) goto event_462_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(537, str_mat_1438, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(538, str_blocked_1439, 1);
    }
    event_462_11_end: ;
}
// Function purpose: generated callback event_func_5721 processes event block(s) 463_11. Actions/conditions:
//        463_11: sets mat to 1; sets blocked to 1.
void Frames::event_func_5721()
{
    // event 463_11 : sets mat to 1; sets blocked to 1
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_463_11_end;
        playerBase_instances.clear_selection();
        punchbag_436_instances.clear_selection();
        if (!check_overlap(playerBase_instances, punchbag_436_instances)) goto event_463_11_end;
        for (ObjectIterator it(punchbag_436_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (-1))) { it.deselect(); continue; }
        }
        if (!punchbag_436_instances.has_selection()) goto event_463_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(537, str_mat_1438, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(538, str_blocked_1439, 1);
    }
    event_463_11_end: ;
}
// Function purpose: generated callback event_func_5722 processes event block(s) 464_11. Actions/conditions:
//        464_11: sets mat to 1; sets blocked to 1.
void Frames::event_func_5722()
{
    // event 464_11 : sets mat to 1; sets blocked to 1
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_464_11_end;
        playerBase_instances.clear_selection();
        speedbag_439_instances.clear_selection();
        if (!check_overlap(playerBase_instances, speedbag_439_instances)) goto event_464_11_end;
        for (ObjectIterator it(speedbag_439_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (-1))) { it.deselect(); continue; }
        }
        if (!speedbag_439_instances.has_selection()) goto event_464_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(537, str_mat_1438, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(538, str_blocked_1439, 1);
    }
    event_464_11_end: ;
}
// Function purpose: generated callback event_func_5723 processes event block(s) 465_11. Actions/conditions:
//        465_11: sets mat to 1; sets blocked to 1.
void Frames::event_func_5723()
{
    // event 465_11 : sets mat to 1; sets blocked to 1
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_465_11_end;
        playerBase_instances.clear_selection();
        joggingmat_407_instances.clear_selection();
        if (!check_overlap(playerBase_instances, joggingmat_407_instances)) goto event_465_11_end;
        for (ObjectIterator it(joggingmat_407_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (-1))) { it.deselect(); continue; }
        }
        if (!joggingmat_407_instances.has_selection()) goto event_465_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(537, str_mat_1438, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(538, str_blocked_1439, 1);
    }
    event_465_11_end: ;
}
// Function purpose: generated callback event_func_5724 processes event block(s) 473_11. Actions/conditions:
//        473_11: sets the selected object's numeric value to 0; sets the object's animation to 0; sets the object
//        position in the world.
void Frames::event_func_5724()
{
    // event 473_11 : sets the selected object's numeric value to 0; sets the object's animation to 0; sets the object position in the world
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_473_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(538, str_blocked_1439)) == (0))) goto event_473_11_end;
        playerBase_instances.clear_selection();
        qualifier_1.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_1)) goto event_473_11_end;
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        {
            FrameObject * parent = ((Active*)get_instance(unmountcheck_197_instances));
            if (parent == NULL) goto pos_end_473_11_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_473_11_0: ;
        }
    }
    event_473_11_end: ;
}
// Function purpose: generated callback event_func_5725 processes event block(s) 474_11. Actions/conditions:
//        474_11: checks scene is active; game state blocked; game state mat; this handler gates a game event without
//        a direct value/object action.
void Frames::event_func_5725()
{
    // event 474_11 : checks scene is active; game state blocked; game state mat; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_474_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(538, str_blocked_1439)) == (0))) goto event_474_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(537, str_mat_1438)) == (1))) goto event_474_11_end;
        {
            loop_climb_off_2_running = true;
            int times = int(1);
            loop_climb_off_2_index = 0;
            while (loop_climb_off_2_index < times) {
                loop_climb_off_2_11();
                if (!loop_climb_off_2_running) break;
                loop_climb_off_2_index++;
            }
        }
    }
    event_474_11_end: ;
}
void Frames::loop_climb_off_11()
{
    event_func_2178();
    event_func_5719();
    event_func_5720();
    event_func_5721();
    event_func_5722();
    event_func_5723();
    event_func_2179();
    event_func_2180();
    event_func_2181();
    event_func_2182();
    event_func_2183();
    event_func_2185();
    event_func_2186();
    event_func_5724();
    event_func_5725();
    event_func_2190();
}
// Function purpose: generated callback event_func_5726 processes event block(s) 1055_11. Actions/conditions:
//        1055_11: sets the object's animation to 0; sets the object position in the world; sets the selected object's
//        layer to 2-1.
void Frames::event_func_5726()
{
    // event 1055_11 : sets the object's animation to 0; sets the object position in the world; sets the selected object's layer to 2-1
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1055_11_end;
        ((Active*)get_instance(upperlevelcheck_206_instances))->force_animation(0);
        {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            if (parent == NULL) goto pos_end_1055_11_0;
            ((Active*)get_instance(upperlevelcheck_206_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1055_11_0: ;
        }
        ((Active*)get_instance(upperlevelcheck_206_instances))->set_layer(2-1);
    }
    event_1055_11_end: ;
}
// Function purpose: generated callback event_func_5727 processes event block(s) 1056_11. Actions/conditions:
//        1056_11: saves the current object selection; saves the current object selection; saves the current object
//        selection; plus 5 more actions.
void Frames::event_func_5727()
{
    // event 1056_11 : saves the current object selection; saves the current object selection; saves the current object selection; plus 5 more actions
    bool or_result_1056_11 = false;
    bool or_temp_result_1056_11_0 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_1056_11_0_end;
        upperlevelcheck_206_instances.clear_selection();
        for (ObjectIterator it(upperlevelcheck_206_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!upperlevelcheck_206_instances.has_selection()) goto or_event_1056_11_0_end;
        or_result_1056_11 = true;
        or_temp_result_1056_11_0 = true;
    }
    or_event_1056_11_0_end: ;
    upperlevelcheck_206_instances.clear_saved_selection();
    if (or_temp_result_1056_11_0) {
        upperlevelcheck_206_instances.save_selection();
    }
    // event 1056_11 : saves the current object selection; saves the current object selection; saves the current object selection; plus 5 more actions
    bool or_temp_result_1056_11_1 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_1056_11_1_end;
        upperlevelcheck_206_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(upperlevelcheck_206_instances, qualifier_19)) goto or_event_1056_11_1_end;
        or_result_1056_11 = true;
        or_temp_result_1056_11_1 = true;
    }
    or_event_1056_11_1_end: ;
    qualifier_19.clear_saved_selection();
    if (or_temp_result_1056_11_1) {
        qualifier_19.save_selection();
        upperlevelcheck_206_instances.save_selection();
    }
    // event 1056_11 : saves the current object selection; saves the current object selection; saves the current object selection; plus 5 more actions
    bool or_temp_result_1056_11_2 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_1056_11_2_end;
        upperlevelcheck_206_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(upperlevelcheck_206_instances, qualifier_8)) goto or_event_1056_11_2_end;
        or_result_1056_11 = true;
        or_temp_result_1056_11_2 = true;
    }
    or_event_1056_11_2_end: ;
    qualifier_8.clear_saved_selection();
    if (or_temp_result_1056_11_2) {
        upperlevelcheck_206_instances.save_selection();
        qualifier_8.save_selection();
    }
    // event 1056_11 : saves the current object selection; saves the current object selection; saves the current object selection; plus 5 more actions
    bool or_temp_result_1056_11_3 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_1056_11_3_end;
        upperlevelcheck_206_instances.clear_selection();
        qualifier_22.clear_selection();
        if (!check_overlap(upperlevelcheck_206_instances, qualifier_22)) goto or_event_1056_11_3_end;
        or_result_1056_11 = true;
        or_temp_result_1056_11_3 = true;
        or_event_1056_11_3_end: ;
        qualifier_22.clear_saved_selection();
        if (or_temp_result_1056_11_3) {
            qualifier_22.save_selection();
            upperlevelcheck_206_instances.save_selection();
        }
        if (!or_result_1056_11) goto or_final_or_event_1056_11_3_end;
        qualifier_8.empty_selection();
        upperlevelcheck_206_instances.empty_selection();
        qualifier_19.empty_selection();
        qualifier_22.empty_selection();
        if (or_temp_result_1056_11_2) {
            qualifier_8.restore_selection();
        }
        if (or_temp_result_1056_11_3) {
            qualifier_22.restore_selection();
        }
        if (or_temp_result_1056_11_0 || or_temp_result_1056_11_1 || or_temp_result_1056_11_2 || or_temp_result_1056_11_3) {
            upperlevelcheck_206_instances.restore_selection();
        }
        if (or_temp_result_1056_11_1) {
            qualifier_19.restore_selection();
        }
            loop_digabove_check_running = false;
    
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    or_final_or_event_1056_11_3_end: ;
}
// Function purpose: generated callback event_func_5728 processes event block(s) 1057_11. Actions/conditions:
//        1057_11: sets Digging to 100; sets the object's animation to 12; sets the selected object's direction to
//        get_direction_int(selected object->x, selected object->y, cursor_178->x + 8, cursor_178->y + 8); plus 1 more
//        actions.
void Frames::event_func_5728()
{
    // event 1057_11 : sets Digging to 100; sets the object's animation to 12; sets the selected object's direction to get_direction_int(selected object->x, selected object->y, cursor_178->x + 8, cursor_178->y + 8); plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1057_11_end;
        if (((Active*)get_instance(upperlevelcheck_206_instances))->overlaps_background()) goto event_1057_11_end;
        upperlevelcheck_206_instances.clear_selection();
        if (!check_not_overlap(upperlevelcheck_206_instances, qualifier_19)) goto event_1057_11_end;
        if (!check_not_overlap(upperlevelcheck_206_instances, qualifier_8)) goto event_1057_11_end;
        if (!check_not_overlap(upperlevelcheck_206_instances, qualifier_22)) goto event_1057_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_1057_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) > (0))) goto event_1057_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(153, str_digging_726, 100);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(cursor_178_instances))->x + 8, ((Active*)get_instance(cursor_178_instances))->y + 8));
        }
        if (!group_loops_1) {
            group_loops_1 = true;
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
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(402, str_actype_1216, ((INI*)get_instance(translationData_instances))->get_string(str_action_857, str_2_155));
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
    event_1057_11_end: ;
}
void Frames::loop_digabove_check_11()
{
    event_func_5726();
    event_func_5727();
    event_func_5728();
}
// Function purpose: generated callback event_func_5729 processes event block(s) 1231_11. Actions/conditions:
//        1231_11: sets ItemID to 68.
void Frames::event_func_5729()
{
    // event 1231_11 : sets ItemID to 68
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_1231_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 68);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_add_running = true;
            int times = int(1);
            loop_inv_add_index = 0;
            while (loop_inv_add_index < times) {
                loop_inv_add_11();
                if (!loop_inv_add_running) break;
                loop_inv_add_index++;
            }
        }
    }
    event_1231_11_end: ;
}
void Frames::loop_pickup_steps_check_11()
{
    event_func_5729();
    event_func_3087();
}
// Function purpose: generated callback event_func_5730 processes event block(s) 1004_11. Actions/conditions:
//        1004_11: sets MountPush to 1; sets the object position in the world; disables flag 23 (NPC schedule or
//        activity state) on the selected object; plus 7 more actions.
void Frames::event_func_5730()
{
    // event 1004_11 : sets MountPush to 1; sets the object position in the world; disables flag 23 (NPC schedule or activity state) on the selected object; plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1004_11_end;
        canteenchair_312_instances.clear_selection();
        for (ObjectIterator it(canteenchair_312_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(918, str_chairid_2233)))) { it.deselect(); continue; }
        }
        if (!canteenchair_312_instances.has_selection()) goto event_1004_11_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1004_11_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_1004_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(549, str_mountpush_1452, 1);
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(canteenchair_312_instances, it.current_index));
            if (parent == NULL) goto pos_end_1004_11_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + -8);
            pos_end_1004_11_0: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(23);
            ((Active*)*it)->alterables->flags.disable(24);
            ((Active*)*it)->alterables->values.sub(12, 5);
            ((Active*)*it)->set_direction(24);
        }
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        {
            loop_push_reaction_running = true;
            int times = int(1);
            loop_push_reaction_index = 0;
            while (loop_push_reaction_index < times) {
                loop_push_reaction_11();
                if (!loop_push_reaction_running) break;
                loop_push_reaction_index++;
            }
        }
    }
    event_1004_11_end: ;
}
void Frames::loop_chair_push_off_24_11()
{
    event_func_5730();
}
// Function purpose: generated callback event_func_5731 processes event block(s) 1290_11. Actions/conditions:
//        1290_11: removes background tiles at the target coordinates; removes background tiles at the target
//        coordinates; sets the selected object's layer to 2-1; plus 8 more actions.
void Frames::event_func_5731()
{
    // event 1290_11 : removes background tiles at the target coordinates; removes background tiles at the target coordinates; sets the selected object's layer to 2-1; plus 8 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_chipping_2_1)) goto event_1290_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1290_11_end;
        if (!((((ArrayObject*)get_instance(wallsarray_232_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(456, str_chipx_1325), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(457, str_chipy_1326), ((Active*)get_instance(playerBase_instances))->layer->index+1)) >= (100))) goto event_1290_11_end;
        layers[((Active*)get_instance(playerBase_instances))->layer->index+1-1].destroy_backgrounds(((AssociateArray*)get_instance(gameVariables_instances))->get_value(456, str_chipx_1325)*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(457, str_chipy_1326)*16, 0);
        layers[7-1].destroy_backgrounds(((AssociateArray*)get_instance(gameVariables_instances))->get_value(456, str_chipx_1325)*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(457, str_chipy_1326)*16, 0);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(((AssociateArray*)get_instance(gameVariables_instances))->get_value(456, str_chipx_1325)*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(457, str_chipy_1326)*16, 0, 48, 16, 16, 0);
        guardalert_266_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guardalert_266(0, 0), 1);
            guardalert_266_instances.add_back();
        }
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(456, str_chipx_1325)*16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(457, str_chipy_1326)*16);
            ((Active*)*it)->alterables->strings.set(0, str_brokenwall_600);
        }
        {
            loop_collect_wall_running = true;
            int times = int(1);
            loop_collect_wall_index = 0;
            while (loop_collect_wall_index < times) {
                loop_collect_wall_11();
                if (!loop_collect_wall_running) break;
                loop_collect_wall_index++;
            }
        }
    }
    event_1290_11_end: ;
}
// Function purpose: generated callback event_func_5732 processes event block(s) 1291_11. Actions/conditions:
//        1291_11: sets gameVariables->get_value(456, ChipX) to gameVariables->get_value(457, ChipY);
//        adds a soil 173 instance; sets the selected object's horizontal position to
//        gameVariables->get_value(456, ChipX)*16; plus 6 more actions.
void Frames::event_func_5732()
{
    // event 1291_11 : sets gameVariables->get_value(456, ChipX) to gameVariables->get_value(457, ChipY); adds a soil 173 instance; sets the selected object's horizontal position to gameVariables->get_value(456, ChipX)*16; plus 6 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_chipping_2_1)) goto event_1291_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_1291_11_end;
        if (!((((ArrayObject*)get_instance(wallsarray_232_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(456, str_chipx_1325), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(457, str_chipy_1326), ((Active*)get_instance(playerBase_instances))->layer->index+1)) >= (100))) goto event_1291_11_end;
        ((ArrayObject*)get_instance(digarray_228_instances))->set_value(25, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(456, str_chipx_1325), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(457, str_chipy_1326), 0);
        soil_173_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_soil_675(-16, -16), 0);
            soil_173_instances.add_back();
        }
        for (ObjectIterator it(soil_173_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(456, str_chipx_1325)*16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(457, str_chipy_1326)*16);
            ((Active*)*it)->paste(0);
            ((Active*)*it)->destroy();
        }
    }
    event_1291_11_end: ;
}
void Frames::loop_check_complete_chip_11()
{
    event_func_5731();
    event_func_5732();
}
// Function purpose: generated callback event_func_5733 processes event block(s) 1010_11. Actions/conditions:
//        1010_11: activates the Guard_Talk event group; sets ChinwagTimer to 20; sets SpeakID to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25); plus 9
//        more actions.
void Frames::event_func_5733()
{
    // event 1010_11 : activates the Guard_Talk event group; sets ChinwagTimer to 20; sets SpeakID to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25); plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1010_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(260, str_cansee_915)) == (1))) goto event_1010_11_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1010_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_1010_11_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_guard_talk_1296);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(440, str_chinwagtimer_1297, 20);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(1+randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885)))));
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(playerBase_instances))->x + 0, ((Active*)get_instance(playerBase_instances))->y + 0));
            ((Active*)*it)->alterables->values.add(12, 1);
            ((Active*)*it)->get_movement()->stop(false);
        }
        {
            loop_talk_loop_guard_2_running = true;
            int times = int(2);
            loop_talk_loop_guard_2_index = 0;
            while (loop_talk_loop_guard_2_index < times) {
                loop_talk_loop_guard_2_11();
                if (!loop_talk_loop_guard_2_running) break;
                loop_talk_loop_guard_2_index++;
            }
        }
        {
            loop_speak_running = true;
            int times = int(1);
            loop_speak_index = 0;
            while (loop_speak_index < times) {
                loop_speak_11();
                if (!loop_speak_running) break;
                loop_speak_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_1010_11_end: ;
}
// Function purpose: generated callback event_func_5734 processes event block(s) 1011_11. Actions/conditions:
//        1011_11: activates the Outfit_Guard event group; sets ChinwagTimer to 20; sets SpeakID to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25); plus 8
//        more actions.
void Frames::event_func_5734()
{
    // event 1011_11 : activates the Outfit_Guard event group; sets ChinwagTimer to 20; sets SpeakID to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25); plus 8 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1011_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(260, str_cansee_915)) == (1))) goto event_1011_11_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1011_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) != (-1))) goto event_1011_11_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_outfit_guard_1298);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(440, str_chinwagtimer_1297, 20);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(1+randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885)))));
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(playerBase_instances))->x + 0, ((Active*)get_instance(playerBase_instances))->y + 0));
            ((Active*)*it)->get_movement()->stop(false);
        }
        {
            loop_talk_loop_guard_2_running = true;
            int times = int(1);
            loop_talk_loop_guard_2_index = 0;
            while (loop_talk_loop_guard_2_index < times) {
                loop_talk_loop_guard_2_11();
                if (!loop_talk_loop_guard_2_running) break;
                loop_talk_loop_guard_2_index++;
            }
        }
        {
            loop_speak_running = true;
            int times = int(1);
            loop_speak_index = 0;
            while (loop_speak_index < times) {
                loop_speak_11();
                if (!loop_speak_running) break;
                loop_speak_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_1011_11_end: ;
}
void Frames::loop_talk_loop_guard_11()
{
    event_func_5733();
    event_func_5734();
}
// Function purpose: generated callback event_func_5735 processes event block(s) 925_11. Actions/conditions:
//        925_11: plays a sound or music track.
void Frames::event_func_5735()
{
    // event 925_11 : plays a sound or music track
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_925_11_end;
        {
            loop_sort_weapon_running = true;
            int times = int(1);
            loop_sort_weapon_index = 0;
            while (loop_sort_weapon_index < times) {
                loop_sort_weapon_6();
                if (!loop_sort_weapon_running) break;
                loop_sort_weapon_index++;
            }
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
    }
    event_925_11_end: ;
}
// Function purpose: generated callback event_func_5736 processes event block(s) 926_11. Actions/conditions:
//        926_11: sets hmm to 1; sets Pressed_P to 1; sets Esc to 1; plus 6 more actions.
void Frames::event_func_5736()
{
    // event 926_11 : sets hmm to 1; sets Pressed_P to 1; sets Esc to 1; plus 6 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_926_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(559, str_hmm_1468, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(560, str_pressed_p_1469, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(561, str_esc_202, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
        {
            loop_stats_close_running = true;
            int times = int(1);
            loop_stats_close_index = 0;
            while (loop_stats_close_index < times) {
                loop_stats_close_6();
                if (!loop_stats_close_running) break;
                loop_stats_close_index++;
            }
        }
        profilestats_432_instances.clear_selection();
        for (ObjectIterator it(profilestats_432_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        buttontext_445_instances.clear_selection();
        for (ObjectIterator it(buttontext_445_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
            group_code_my_stats_1 = false;
    
    }
    event_926_11_end: ;
}
void Frames::loop_cl_profile_11()
{
    event_func_5735();
    event_func_5736();
}
// Function purpose: generated callback event_func_5737 processes event block(s) 1198_11. Actions/conditions:
//        1198_11: checks scene is active; game state CurrItemID; game state Outfit; this handler gates a game event
//        without a direct value/object action.
void Frames::event_func_5737()
{
    // event 1198_11 : checks scene is active; game state CurrItemID; game state Outfit; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1198_11_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(609, str_curritemid_1591)), str_outfit_505)) > (0))) goto event_1198_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505)) == (empty_string))) goto event_1198_11_end;
        {
            loop_flip_into_outfit_running = true;
            int times = int(1);
            loop_flip_into_outfit_index = 0;
            while (loop_flip_into_outfit_index < times) {
                loop_flip_into_outfit_11();
                if (!loop_flip_into_outfit_running) break;
                loop_flip_into_outfit_index++;
            }
        }
    }
    event_1198_11_end: ;
}
void Frames::loop_flip_into_equip_11()
{
    event_func_5737();
    event_func_2423();
}
// Function purpose: generated callback event_func_5738 processes event block(s) 1421_11. Actions/conditions:
//        1421_11: sets the object's animation to 14; sets the selected object's direction to 0; creates a
//        profilestats 432 object; plus 5 more actions.
void Frames::event_func_5738()
{
    // event 1421_11 : sets the object's animation to 14; sets the selected object's direction to 0; creates a profilestats 432 object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1421_11_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1421_11_end;
        ((Active*)get_instance(dialogPanel_instances))->force_animation(14);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(0);
        FrameObject * single_instance_1421_11_0; single_instance_1421_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_profilestats_432(parent->x + -106, parent->y + -35), parent->layer);
                if (single_instance_1421_11_0 == NULL)
                    single_instance_1421_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_1421_11_0))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_stats_609, str_1_97)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_stats_609, str_2_155)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_stats_609, str_3_158)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_stats_609, str_4_161));
        {
            loop_npc_tab_stats_name_running = true;
            int times = int(1);
            loop_npc_tab_stats_name_index = 0;
            while (loop_npc_tab_stats_name_index < times) {
                loop_npc_tab_stats_name_11();
                if (!loop_npc_tab_stats_name_running) break;
                loop_npc_tab_stats_name_index++;
            }
        }
        {
            loop_create_stat_bars_npc_running = true;
            int times = int(4);
            loop_create_stat_bars_npc_index = 0;
            while (loop_create_stat_bars_npc_index < times) {
                loop_create_stat_bars_npc_6();
                if (!loop_create_stat_bars_npc_running) break;
                loop_create_stat_bars_npc_index++;
            }
        }
        {
            loop_stats_gear_npc_running = true;
            int times = int(1);
            loop_stats_gear_npc_index = 0;
            while (loop_stats_gear_npc_index < times) {
                loop_stats_gear_npc_11();
                if (!loop_stats_gear_npc_running) break;
                loop_stats_gear_npc_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_1421_11_end: ;
}
void Frames::loop_npc_tab_stats_11()
{
    event_func_5738();
    event_func_2282();
    event_func_2283();
}
// Function purpose: generated callback event_func_5739 processes event block(s) 1129_11. Actions/conditions:
//        1129_11: increments Score_P by 10; changes a stored game value; increments Cash by
//        string_to_number(stringtokenizer_81->get(3)); plus 22 more actions.
void Frames::event_func_5739()
{
    // event 1129_11 : increments Score_P by 10; changes a stored game value; increments Cash by string_to_number(stringtokenizer_81->get(3)); plus 22 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1129_11_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_stealchar_1264))) goto event_1129_11_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)) == (number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452))))) goto event_1129_11_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6)) == (number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(647, str_curritem_1747))))) goto event_1129_11_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(5))))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1129_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(418, str_score_p_1236, 10);
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 15);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(219, str_cash_11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((Active*)get_instance(dialogPanel_instances))->force_animation(12);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        FrameObject * single_instance_1129_11_0; single_instance_1129_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_tutorialDialogText(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1129_11_0 == NULL)
                    single_instance_1129_11_0 = new_obj;
            }
        }
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            if (parent == NULL) goto pos_end_1129_11_1;
            ((Text*)single_instance_1129_11_0)->set_global_position(parent->get_x() + -110, parent->get_y() + -18);
            pos_end_1129_11_1: ;
        }
        ((Text*)((Text*)single_instance_1129_11_0))->blend_color.set(Color(60, 60, 60));
        ((Text*)((Text*)single_instance_1129_11_0))->set_string(str_you_have_completed_the_favour_for_1237+((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(0)+str_and_earned_yourself_1238+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)+str__918);
        {
            loop_mish_del_stuff_running = true;
            int times = int(1);
            loop_mish_del_stuff_index = 0;
            while (loop_mish_del_stuff_index < times) {
                loop_mish_del_stuff_6();
                if (!loop_mish_del_stuff_running) break;
                loop_mish_del_stuff_index++;
            }
        }
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_688(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_y()-38);
            ((Text*)*it)->set_bold(1);
            ((Text*)*it)->blend_color.set(Color(0, 128, 0));
            ((Text*)*it)->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_favour_box_1089, str_6_241)));
        }
        FrameObject * single_instance_1129_11_3; single_instance_1129_11_3 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buttons_699(parent->x + 28, parent->y + 20), parent->layer);
                if (single_instance_1129_11_3 == NULL)
                    single_instance_1129_11_3 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1129_11_3))->force_animation(28);
        FrameObject * single_instance_1129_11_4; single_instance_1129_11_4 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_1129_11_3)->x + 3, ((Active*)single_instance_1129_11_3)->y + 3), ((Active*)single_instance_1129_11_3)->layer);
            if (single_instance_1129_11_4 == NULL)
                single_instance_1129_11_4 = new_obj;
        }
        ((Text*)((Text*)single_instance_1129_11_4))->blend_color.set(Color(98, 154, 3));
        ((Text*)((Text*)single_instance_1129_11_4))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_pausemenu_1094, str_1_97)));
        ((ListObject*)get_instance(missions_298_instances))->delete_line(loop_retrieve_mission_loot_index+1);
            loop_retrieve_mission_loot_running = false;
    
        media.play_id(SOUND_ACCOLADE_9, 1-1);
    }
    event_1129_11_end: ;
}
void Frames::loop_retrieve_mission_loot_11()
{
    event_func_2728();
    event_func_5739();
}
void Frames::loop_wrapper_chair_push_off_24_11(void * frame)
{
    ((Frames*)frame)->loop_chair_push_off_24_11();
}
void Frames::loop_wrapper_chair_push_off_8_11(void * frame)
{
    ((Frames*)frame)->loop_chair_push_off_8_11();
}
void Frames::foreach_speech_11()
{
    event_func_3102();
    event_func_3103();
}
void Frames::test_collisions_11()
{
    test_collisions(qualifier_8, playerBase_instances, 2147483648, 1, (EventFunction)&Frames::col_15_6);
    ObjectList::iterator it1, it2;
}
// Function purpose: generated callback event_func_5740 processes event block(s) 1603_11. Actions/conditions:
//        1603_11: sets the object's animation to 7; sets the target object's direction; disables flag -2 (legacy
//        object-specific state; original label was not retained) on the selected object; plus 1 more actions.
void Frames::event_func_5740()
{
    // event 1603_11 : sets the object's animation to 7; sets the target object's direction; disables flag -2 (legacy object-specific state; original label was not retained) on the selected object; plus 1 more actions
    {
        if (!(group_set_item_graphic_1)) goto event_1603_11_end;
        if (!(((Active*)foreach_instance_item2_setup)->alterables->flags.is_on(-2))) goto event_1603_11_end;
        if (!((((Active*)foreach_instance_item2_setup)->alterables->values.get(2)) > (159))) goto event_1603_11_end;
        ((Active*)((Active*)foreach_instance_item2_setup))->force_animation(7);
        ((Active*)((Active*)foreach_instance_item2_setup))->set_direction(((Active*)foreach_instance_item2_setup)->alterables->values.get(2)-160);
        ((Active*)((Active*)foreach_instance_item2_setup))->alterables->flags.disable(-2);
        ((Active*)((Active*)foreach_instance_item2_setup))->alterables->values.set(3, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((Active*)foreach_instance_item2_setup)->alterables->values.get(2)), str_illegal_618));
    }
    event_1603_11_end: ;
}
void Frames::foreach_item2_setup_11()
{
    event_func_5740();
    event_func_3139();
    event_func_3140();
    event_func_3141();
    event_func_3142();
    event_func_3143();
}
// Function purpose: generated callback event_func_5741 processes event block(s) 1597_11. Actions/conditions:
//        1597_11: sets the object's animation to 7; sets the target object's direction; updates a value on the target
//        object; plus 1 more actions.
void Frames::event_func_5741()
{
    // event 1597_11 : sets the object's animation to 7; sets the target object's direction; updates a value on the target object; plus 1 more actions
    {
        if (!(group_set_item_graphic_1)) goto event_1597_11_end;
        if (!((((Active*)foreach_instance_item_setup)->alterables->values.get(2)) > (159))) goto event_1597_11_end;
        ((Active*)((Active*)foreach_instance_item_setup))->force_animation(7);
        ((Active*)((Active*)foreach_instance_item_setup))->set_direction(((Active*)foreach_instance_item_setup)->alterables->values.get(2)-160);
        ((Active*)((Active*)foreach_instance_item_setup))->alterables->values.set(6, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((Active*)foreach_instance_item_setup)->alterables->values.get(2)), str_illegal_618));
        ((Active*)((Active*)foreach_instance_item_setup))->alterables->flags.disable(-2);
    }
    event_1597_11_end: ;
}
void Frames::foreach_item_setup_11()
{
    event_func_3144();
    event_func_5741();
    event_func_3149();
    event_func_3150();
    event_func_3151();
    event_func_3152();
    event_func_3153();
}
// Function purpose: generated callback event_func_5742 processes event block(s) 1541_11. Actions/conditions:
//        1541_11: sets the selected object's layer to ((Active*)foreach_instance_align_g)->layer->index+1-1; sets the
//        selected object's direction to ((Active*)foreach_instance_align_g)->get_direction(); sets the object
//        position in the world; plus 5 more actions.
void Frames::event_func_5742()
{
    // event 1541_11 : sets the selected object's layer to ((Active*)foreach_instance_align_g)->layer->index+1-1; sets the selected object's direction to ((Active*)foreach_instance_align_g)->get_direction(); sets the object position in the world; plus 5 more actions
    {
        if (!(group_code_1)) goto event_1541_11_end;
        if (!((((Active*)foreach_instance_align_g)->alterables->values.get(0)) != (-1))) goto event_1541_11_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)foreach_instance_align_g)->alterables->values.get(25)))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_1541_11_end;
        qualifier_16.clear_selection();
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)foreach_instance_align_g)->alterables->values.get(25)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!qualifier_16.has_selection()) goto event_1541_11_end;
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)foreach_instance_align_g)->layer->index+1-1);
            ((Active*)*it)->set_direction(((Active*)foreach_instance_align_g)->get_direction());
        }
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(qualifier_3, it.current_index));
            if (parent == NULL) goto pos_end_1541_11_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1541_11_0: ;
        }
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            ((Active*)*it)->force_animation(((Active*)get_single(qualifier_3, it.current_index, default_active_instance))->current_animation);
            ((Active*)*it)->force_frame(((Active*)get_single(qualifier_3, it.current_index, default_active_instance))->get_frame());
        }
    }
    event_1541_11_end: ;
}
// Function purpose: generated callback event_func_5743 processes event block(s) 1546_11. Actions/conditions:
//        1546_11: sets the object's animation to 8; sets the selected object's direction to 24.
void Frames::event_func_5743()
{
    // event 1546_11 : sets the object's animation to 8; sets the selected object's direction to 24
    {
        if (!(group_code_1)) goto event_1546_11_end;
        if (!((((Active*)foreach_instance_align_g)->alterables->values.get(0)) != (-1))) goto event_1546_11_end;
        qualifier_6.clear_selection();
        if (!check_overlap(((Active*)foreach_instance_align_g), qualifier_6)) goto event_1546_11_end;
        if (!((((Active*)foreach_instance_align_g)->alterables->values.get(2)) == (0))) goto event_1546_11_end;
        if (!((((Active*)foreach_instance_align_g)->alterables->values.get(7)) > (0))) goto event_1546_11_end;
        if (!(((Active*)foreach_instance_align_g)->get_movement()->is_stopped())) goto event_1546_11_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)foreach_instance_align_g)->alterables->values.get(25)))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_1546_11_end;
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->set_direction(24);
        }
    }
    event_1546_11_end: ;
}
void Frames::foreach_align_g_11()
{
    event_func_3154();
    event_func_3155();
    event_func_3156();
    event_func_3157();
    event_func_5742();
    event_func_3163();
    event_func_3158();
    event_func_5743();
    event_func_3161();
}
// Function purpose: generated callback event_func_5744 processes event block(s) 9_11. Actions/conditions:
//        9_11: checks the event-specific game state condition is met; game state MapLoop; this handler gates a game
//        event without a direct value/object action.
void Frames::event_func_5744()
{
    // event 9_11 : checks the event-specific game state condition is met; game state MapLoop; this handler gates a game event without a direct value/object action
    {
        if (!(group_load_map_from_file_1)) goto event_9_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(721, str_mapheight_1897)))) goto event_9_11_end;
        {
            loop_load_y_running = true;
            int times = int(10);
            loop_load_y_index = 0;
            while (loop_load_y_index < times) {
                loop_load_y_11();
                if (!loop_load_y_running) break;
                loop_load_y_index++;
            }
        }
    }
    event_9_11_end: ;
}
// Function purpose: generated callback event_func_5745 processes event block(s) 62_11. Actions/conditions:
//        62_11: checks the event-specific game state condition is met; game state MapLoop; this handler gates a game
//        event without a direct value/object action.
void Frames::event_func_5745()
{
    // event 62_11 : checks the event-specific game state condition is met; game state MapLoop; this handler gates a game event without a direct value/object action
    {
        if (!(group_load_map_from_file_1)) goto event_62_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)) >= (((AssociateArray*)get_instance(gameVariables_instances))->get_value(721, str_mapheight_1897)))) goto event_62_11_end;
        {
            loop_load_map_objects_running = true;
            int times = int(((INI*)get_instance(mapload_322_instances))->get_item_count(str_objects_1880));
            loop_load_map_objects_index = 0;
            while (loop_load_map_objects_index < times) {
                loop_load_map_objects_11();
                if (!loop_load_map_objects_running) break;
                loop_load_map_objects_index++;
            }
        }
        if (!group_setup_1) {
            group_setup_1 = true;
            group_check_group_setup_2_1 = true;
            group_check_group_setup_player_stats_time_1_0 = true;
            group_check_group_setup_player_stats_time_1_1 = true;
            group_check_group_setup_2_4 = true;
            group_check_group_setup_2_3 = true;
            group_check_group_setup_2_2 = true;
            group_check_group_setup_new_desk_id_code_1_0 = true;
            group_check_group_setup_new_desk_id_code_1_1 = true;
            group_check_group_setup_1_0 = true;
            group_check_group_setup_1_1 = true;
            group_check_group_setup_1_2 = true;
            group_check_group_setup_1_3 = true;
            group_check_group_setup_1_4 = true;
            group_check_group_setup_1_5 = true;
            group_check_group_setup_1_6 = true;
            group_check_group_setup_1_7 = true;
            group_check_group_setup_1_8 = true;
            group_check_group_setup_1_9 = true;
            group_check_group_setup_setup_desks_1_0 = true;
            group_check_group_setup_2_0 = true;
            group_check_group_setup_fill_inventory_1_0 = true;
        }
            group_load_map_from_file_1 = false;
    
    }
    event_62_11_end: ;
}
// Function purpose: generated callback event_func_5746 processes event block(s) 163_11. Actions/conditions:
//        163_11: sets InmateName_1 to Michael; sets InmateName_2 to Bear; sets InmateName_3 to Luke; plus 10 more
//        actions.
void Frames::event_func_5746()
{
    // event 163_11 : sets InmateName_1 to Michael; sets InmateName_2 to Bear; sets InmateName_3 to Luke; plus 10 more actions
    {
        if (!(group_setup_1)) goto event_163_11_end;
        if (!group_check_group_setup_1_0) goto event_163_11_end;
        group_check_group_setup_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(968, str_inmatename_1_2404, str_michael_2528);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(969, str_inmatename_2_2406, str_bear_2529);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(970, str_inmatename_3_2408, str_luke_2530);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(971, str_inmatename_4_2410, str_martin_2531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(972, str_inmatename_5_2412, str_chris_2532);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(973, str_inmatename_6_2414, str_ben_2533);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(974, str_inmatename_7_2416, str_morris_2534);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(975, str_inmatename_8_2418, str_spud_2535);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(976, str_inmatename_9_2420, str_kel_2536);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(977, str_inmatename_10_2537, str_grant_2538);
    }
    event_163_11_end: ;
}
// Function purpose: generated callback event_func_5747 processes event block(s) 164_11. Actions/conditions:
//        164_11: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_5747()
{
    // event 164_11 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_setup_1)) goto event_164_11_end;
        if (!group_check_group_setup_1_1) goto event_164_11_end;
        group_check_group_setup_1_1 = false;
        inmateBed_instances.clear_selection();
        spread_value(inmateBed_instances, 0, 1);
        canteenchair_312_instances.clear_selection();
        spread_value(canteenchair_312_instances, 0, 1);
        toilet2_307_instances.clear_selection();
        spread_value(toilet2_307_instances, 0, 1);
        oven2_314_instances.clear_selection();
        spread_value(oven2_314_instances, 0, 1);
        washing2_313_instances.clear_selection();
        spread_value(washing2_313_instances, 0, 1);
        library2_316_instances.clear_selection();
        spread_value(library2_316_instances, 0, 1);
        gym3_317_instances.clear_selection();
        spread_value(gym3_317_instances, 0, 1);
        gym4_318_instances.clear_selection();
        spread_value(gym4_318_instances, 0, 1);
        waypointinmateshower2_309_instances.clear_selection();
        spread_value(waypointinmateshower2_309_instances, 0, 1);
        waypointinmaterollcall2_310_instances.clear_selection();
        spread_value(waypointinmaterollcall2_310_instances, 0, 1);
        waypointinmate2_311_instances.clear_selection();
        spread_value(waypointinmate2_311_instances, 0, 1);
        waypointguard2_315_instances.clear_selection();
        spread_value(waypointguard2_315_instances, 0, 1);
        outsidewaypoints_255_instances.clear_selection();
        spread_value(outsidewaypoints_255_instances, 0, 1);
        guardpostshower_254_instances.clear_selection();
        spread_value(guardpostshower_254_instances, 0, 1);
        waypointguardgym_182_instances.clear_selection();
        spread_value(waypointguardgym_182_instances, 0, 1);
        waypointrollcall2_189_instances.clear_selection();
        spread_value(waypointrollcall2_189_instances, 0, 1);
        waypointcanteenguard_181_instances.clear_selection();
        spread_value(waypointcanteenguard_181_instances, 0, 1);
        bedmedical_234_instances.clear_selection();
        spread_value(bedmedical_234_instances, 0, 1);
        table2_720_instances.clear_selection();
        spread_value(table2_720_instances, 0, 1);
        licenseprints_729_instances.clear_selection();
        spread_value(licenseprints_729_instances, 0, 1);
        jobboard_244_instances.clear_selection();
        spread_value(jobboard_244_instances, 0, 1);
        containerlaundryclean_275_instances.clear_selection();
        spread_value(containerlaundryclean_275_instances, 0, 1);
        containerlaundrydirty_274_instances.clear_selection();
        spread_value(containerlaundrydirty_274_instances, 0, 1);
        kitchensink_236_instances.clear_selection();
        spread_value(kitchensink_236_instances, 0, 1);
        camera_237_instances.clear_selection();
        spread_value(camera_237_instances, 0, 1);
        metaldetector_231_instances.clear_selection();
        spread_value(metaldetector_231_instances, 0, 1);
        qualifier_17.clear_selection();
        spread_value(qualifier_17, 0, 1);
        bedguard_337_instances.clear_selection();
        spread_value(bedguard_337_instances, 0, 5);
        waypointtowerent_341_instances.clear_selection();
        spread_value(waypointtowerent_341_instances, 0, 1);
        towerguard_342_instances.clear_selection();
        spread_value(towerguard_342_instances, 0, 1);
        ventCover_instances.clear_selection();
        spread_value(ventCover_instances, 0, 1);
        canteenserving_705_instances.clear_selection();
        spread_value(canteenserving_705_instances, 0, 1);
        visitationvisitor_381_instances.clear_selection();
        spread_value(visitationvisitor_381_instances, 0, 1);
        visitationinmate_382_instances.clear_selection();
        spread_value(visitationinmate_382_instances, 0, 1);
        pushupmat_408_instances.clear_selection();
        spread_value(pushupmat_408_instances, 0, 1);
        joggingmat_407_instances.clear_selection();
        spread_value(joggingmat_407_instances, 0, 1);
    }
    event_164_11_end: ;
}
// Function purpose: generated callback event_func_5748 processes event block(s) 166_11. Actions/conditions:
//        166_11: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_5748()
{
    // event 166_11 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_setup_1)) goto event_166_11_end;
        if (!group_check_group_setup_1_3) goto event_166_11_end;
        group_check_group_setup_1_3 = false;
        {
            loop_pavatar_running = true;
            int times = int(1);
            loop_pavatar_index = 0;
            while (loop_pavatar_index < times) {
                loop_pavatar_11();
                if (!loop_pavatar_running) break;
                loop_pavatar_index++;
            }
        }
    }
    event_166_11_end: ;
}
// Function purpose: generated callback event_func_5749 processes event block(s) 177_11. Actions/conditions:
//        177_11: moves the selected object behind other objects; sets the selected object's numeric value to 1.
void Frames::event_func_5749()
{
    // event 177_11 : moves the selected object behind other objects; sets the selected object's numeric value to 1
    {
        if (!(group_setup_1)) goto event_177_11_end;
        if (!group_check_group_setup_1_4) goto event_177_11_end;
        group_check_group_setup_1_4 = false;
        qualifier_9.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        spread_value(qualifier_9, 0, 1);
        qualifier_4.clear_selection();
        spread_value(qualifier_4, 0, 1);
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(13, 1);
    }
    event_177_11_end: ;
}
// Function purpose: generated callback event_func_5750 processes event block(s) 178_11. Actions/conditions:
//        178_11: loads a game or save-data file.
void Frames::event_func_5750()
{
    // event 178_11 : loads a game or save-data file
    {
        if (!(group_setup_1)) goto event_178_11_end;
        if (!group_check_group_setup_1_5) goto event_178_11_end;
        group_check_group_setup_1_5 = false;
        ((INI*)get_instance(inispeech_453_instances))->load_file(str_data_speech_357+global_strings->get(6)+str_dat_216);
    }
    event_178_11_end: ;
}
// Function purpose: generated callback event_func_5751 processes event block(s) 179_11. Actions/conditions:
//        179_11: loads a game or save-data file; loads a game or save-data file; sets the selected object's
//        visibility to false; plus 27 more actions.
void Frames::event_func_5751()
{
    // event 179_11 : loads a game or save-data file; loads a game or save-data file; sets the selected object's visibility to false; plus 27 more actions
    {
        if (!(group_setup_1)) goto event_179_11_end;
        if (!group_check_group_setup_1_6) goto event_179_11_end;
        group_check_group_setup_1_6 = false;
        ((INI*)get_instance(itemData_instances))->load_file(str_data_items_356+global_strings->get(6)+str_dat_216);
        ((INI*)get_instance(translationData_instances))->load_file(str_data_data_215+global_strings->get(6)+str_dat_216);
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_visible(false);
        }
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
        set_cursor_visible(false);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(729, str_noticetext_1901, 200);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(730, str_guardrange_1902, 80);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(311, str_beddummy_1088, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(49, str_cursor_517, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(731, str_lockdown_1467, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(732, str_totalconvs_1903, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(607, str_removeslats_1586, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(584, str_playtime_1553, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(216, str_lighting_819, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(673, str_timetofight_1777, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(397, str_yourdesk_1208, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(482, str_newitemhp_1357, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(733, str_lastx_1904, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(734, str_lasty_1905, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(157, str_doors_cell_locked_730, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(262, str_doors_outside_locked_919, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(263, str_doors_utility_locked_920, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(264, str_doors_staff_locked_921, 1);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
        }
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(25, -1);
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_fill(Color(make_color_int(36, 36, 36)));
            ((SystemBox*)*it)->alterables->flags.enable(1);
        }
    }
    event_179_11_end: ;
}
// Function purpose: generated callback event_func_5752 processes event block(s) 184_11. Actions/conditions:
//        184_11: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_5752()
{
    // event 184_11 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_setup_1)) goto event_184_11_end;
        if (!group_check_group_setup_2_2) goto event_184_11_end;
        group_check_group_setup_2_2 = false;
        if (!((global_values->get(11)) == (0))) goto event_184_11_end;
        {
            loop_create_guards_running = true;
            int times = int(4);
            loop_create_guards_index = 0;
            while (loop_create_guards_index < times) {
                loop_create_guards_11();
                if (!loop_create_guards_running) break;
                loop_create_guards_index++;
            }
        }
        {
            loop_create_inmates_running = true;
            int times = int(((AssociateArray*)get_instance(gameVariables_instances))->get_value(168, str_inmatecount_746)-1);
            loop_create_inmates_index = 0;
            while (loop_create_inmates_index < times) {
                loop_create_inmates_11();
                if (!loop_create_inmates_running) break;
                loop_create_inmates_index++;
            }
        }
    }
    event_184_11_end: ;
}
// Function purpose: generated callback event_func_5753 processes event block(s) 185_11. Actions/conditions:
//        185_11: moves the selected object behind other objects; clears the current selection or contents; clears the
//        current selection or contents.
void Frames::event_func_5753()
{
    // event 185_11 : moves the selected object behind other objects; clears the current selection or contents; clears the current selection or contents
    {
        if (!(group_setup_1)) goto event_185_11_end;
        if (!group_check_group_setup_2_3) goto event_185_11_end;
        group_check_group_setup_2_3 = false;
        qualifier_4.clear_selection();
        for (QualifierIterator it(qualifier_4); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        ((ListObject*)get_instance(listguards_218_instances))->clear();
        ((ListObject*)get_instance(listinmates_217_instances))->clear();
        {
            loop_set_stats_running = true;
            int times = int(qualifier_14.size());
            loop_set_stats_index = 0;
            while (loop_set_stats_index < times) {
                loop_set_stats_11();
                if (!loop_set_stats_running) break;
                loop_set_stats_index++;
            }
        }
    }
    event_185_11_end: ;
}
// Function purpose: generated callback event_func_5754 processes event block(s) 205_11. Actions/conditions:
//        205_11: sets the selected object's numeric value to 4; stops the object's movement; sets the selected
//        object's numeric value to 3; plus 1 more actions.
void Frames::event_func_5754()
{
    // event 205_11 : sets the selected object's numeric value to 4; stops the object's movement; sets the selected object's numeric value to 3; plus 1 more actions
    {
        if (!(group_setup_1)) goto event_205_11_end;
        if (!group_check_group_setup_2_4) goto event_205_11_end;
        group_check_group_setup_2_4 = false;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 4);
            ((Active*)*it)->get_movement()->stop(false);
        }
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->alterables->values.set(13, 3);
        }
        qualifier_17.clear_selection();
        spread_value(qualifier_17, 0, 1);
        namesbackersinmates_735_instances.clear_selection();
        for (ObjectIterator it(namesbackersinmates_735_instances); !it.end(); ++it) {
            ((ListObject*)*it)->destroy();
        }
        namesbackersguards_736_instances.clear_selection();
        for (ObjectIterator it(namesbackersguards_736_instances); !it.end(); ++it) {
            ((ListObject*)*it)->destroy();
        }
    }
    event_205_11_end: ;
}
// Function purpose: generated callback event_func_5755 processes event block(s) 206_11. Actions/conditions:
//        206_11: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_5755()
{
    // event 206_11 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_setup_1)) goto event_206_11_end;
        if (!group_check_group_setup_new_desk_id_code_1_0) goto event_206_11_end;
        group_check_group_setup_new_desk_id_code_1_0 = false;
        if (!((global_values->get(11)) == (0))) goto event_206_11_end;
        desks_717_instances.clear_selection();
        spread_value(desks_717_instances, 25, 1);
    }
    event_206_11_end: ;
}
// Function purpose: generated callback event_func_5756 processes event block(s) 207_11. Actions/conditions:
//        207_11: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_5756()
{
    // event 207_11 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_setup_1)) goto event_207_11_end;
        if (!group_check_group_setup_new_desk_id_code_1_1) goto event_207_11_end;
        group_check_group_setup_new_desk_id_code_1_1 = false;
        if (!((global_values->get(11)) == (0))) goto event_207_11_end;
        {
            loop_desk_ids_running = true;
            int times = int(desks_717_instances.size());
            loop_desk_ids_index = 0;
            while (loop_desk_ids_index < times) {
                loop_desk_ids_11();
                if (!loop_desk_ids_running) break;
                loop_desk_ids_index++;
            }
        }
    }
    event_207_11_end: ;
}
// Function purpose: generated callback event_func_5757 processes event block(s) 217_11. Actions/conditions:
//        217_11: sets the selected object's numeric value to 0; sets YourDesk to
//        ((Active*)get_single(desks_717_instances, default_active_instance))->alterables->values.get(0).
void Frames::event_func_5757()
{
    // event 217_11 : sets the selected object's numeric value to 0; sets YourDesk to ((Active*)get_single(desks_717_instances, default_active_instance))->alterables->values.get(0)
    {
        if (!(group_setup_1)) goto event_217_11_end;
        desks_717_instances.clear_selection();
        for (ObjectIterator it(desks_717_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(256))) { it.deselect(); continue; }
        }
        if (!desks_717_instances.has_selection()) goto event_217_11_end;
        for (ObjectIterator it(desks_717_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(397, str_yourdesk_1208, ((Active*)get_single(desks_717_instances, default_active_instance))->alterables->values.get(0));
    }
    event_217_11_end: ;
}
// Function purpose: generated callback event_func_5758 processes event block(s) 218_11. Actions/conditions:
//        218_11: sets Desk0_Slot1 to 24_100; sets Desk0_Slot2 to 74_100.
void Frames::event_func_5758()
{
    // event 218_11 : sets Desk0_Slot1 to 24_100; sets Desk0_Slot2 to 74_100
    {
        if (!(group_setup_1)) goto event_218_11_end;
        if (!group_check_group_setup_setup_desks_1_0) goto event_218_11_end;
        group_check_group_setup_setup_desks_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(735, str_desk0_slot1_1906, str_24_100_2539);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(736, str_desk0_slot2_1907, str_74_100_2540);
    }
    event_218_11_end: ;
}
// Function purpose: generated callback event_func_5759 processes event block(s) 219_11. Actions/conditions:
//        219_11: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_5759()
{
    // event 219_11 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_setup_1)) goto event_219_11_end;
        if (!((mapsetupobstaclemarker_323_instances.size()) > (0))) goto event_219_11_end;
        if (once_condition_219_11) goto event_219_11_end;
        once_condition_219_11 = true;
        {
            loop_bog_dir_running = true;
            int times = int(toilet2_307_instances.size());
            loop_bog_dir_index = 0;
            while (loop_bog_dir_index < times) {
                loop_bog_dir_11();
                if (!loop_bog_dir_running) break;
                loop_bog_dir_index++;
            }
        }
    }
    event_219_11_end: ;
}
// Function purpose: generated callback event_func_5760 processes event block(s) 225_11. Actions/conditions:
//        225_11: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_5760()
{
    // event 225_11 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_setup_1)) goto event_225_11_end;
        if (!group_check_group_setup_fill_inventory_1_0) goto event_225_11_end;
        group_check_group_setup_fill_inventory_1_0 = false;
        {
            loop_build_inven_slots_running = true;
            int times = int(6);
            loop_build_inven_slots_index = 0;
            while (loop_build_inven_slots_index < times) {
                loop_build_inven_slots_6();
                if (!loop_build_inven_slots_running) break;
                loop_build_inven_slots_index++;
            }
        }
    }
    event_225_11_end: ;
}
// Function purpose: generated callback event_func_5761 processes event block(s) 229_11. Actions/conditions:
//        229_11: sets the object position in the world; sets the selected object's layer to 2-1; sets the selected
//        object's string to gameVariables->get_string(743, Name); plus 15 more actions.
void Frames::event_func_5761()
{
    // event 229_11 : sets the object position in the world; sets the selected object's layer to 2-1; sets the selected object's string to gameVariables->get_string(743, Name); plus 15 more actions
    {
        if (!(group_setup_1)) goto event_229_11_end;
        if (!group_check_group_setup_player_stats_time_1_1) goto event_229_11_end;
        group_check_group_setup_player_stats_time_1_1 = false;
        {
            FrameObject * parent = ((Active*)get_instance(bedplayer_338_instances));
            if (parent == NULL) goto pos_end_229_11_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_229_11_0: ;
        }
        ((Active*)get_instance(playerBase_instances))->set_layer(2-1);
        ((Active*)get_instance(playerBase_instances))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(743, str_name_103));
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(8, 100);
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(9, 100);
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(10, 100);
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(7, get_floor(((Active*)get_instance(playerBase_instances))->alterables->values.get(8)/MathHelper()/2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(254, str_t_day_902, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(219, str_cash_11, 10);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(32, str_heat_495, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(358, str_fatigue_36, 20);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_229_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_229_11_1: ;
        }
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(139, str_weapon_704, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(522, str_t_min_1422, 50);
    }
    event_229_11_end: ;
}
// Function purpose: generated callback event_func_5762 processes event block(s) 230_11. Actions/conditions:
//        230_11: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_5762()
{
    // event 230_11 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_setup_1)) goto event_230_11_end;
        if (!group_check_group_setup_1_7) goto event_230_11_end;
        group_check_group_setup_1_7 = false;
        if (!((global_values->get(11)) == (0))) goto event_230_11_end;
    }
    event_230_11_end: ;
}
// Function purpose: generated callback event_func_5763 processes event block(s) 231_11. Actions/conditions:
//        231_11: sets T_hour to 7; sets the object position in the world; sets horizontal scaling.
void Frames::event_func_5763()
{
    // event 231_11 : sets T_hour to 7; sets the object position in the world; sets horizontal scaling
    {
        if (!(group_setup_1)) goto event_231_11_end;
        if (!group_check_group_setup_1_8) goto event_231_11_end;
        group_check_group_setup_1_8 = false;
        sheetsposters_294_instances.clear_selection();
        spread_value(sheetsposters_294_instances, 0, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(25, str_t_hour_488, 7);
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_231_11_0;
            ((Active*)get_instance(camera_202_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_231_11_0: ;
        }
        ((Active*)get_instance(scan_187_instances))->set_x_scale(320);
    }
    event_231_11_end: ;
}
// Function purpose: generated callback event_func_5764 processes event block(s) 232_11. Actions/conditions:
//        232_11: stops the object's movement.
void Frames::event_func_5764()
{
    // event 232_11 : stops the object's movement
    {
        if (!(group_setup_1)) goto event_232_11_end;
        if (!group_check_group_setup_1_9) goto event_232_11_end;
        group_check_group_setup_1_9 = false;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        if (!group_code_1) {
            group_code_1 = true;
            group_check_group_code_my_stats_1_3 = true;
            group_check_group_code_my_stats_1_2 = true;
            group_check_group_code_my_stats_1_1 = true;
            group_check_group_code_my_stats_1_0 = true;
            group_check_group_code_my_stats_1_4 = true;
            group_check_group_code_misc_1_0 = true;
            group_check_group_code_1_1 = true;
            group_check_group_code_1_0 = true;
            group_check_group_code_crafting_1_0 = true;
            group_check_group_code_menu_1_0 = true;
            group_check_group_code_tutorial_level_stuff_1_2 = true;
            group_check_group_code_tutorial_level_stuff_1_3 = true;
            group_check_group_code_hud_1_0 = true;
            group_check_group_code_tutorial_level_stuff_1_1 = true;
            group_check_group_code_tutorial_level_stuff_1_0 = true;
            group_check_group_code_tutorial_level_stuff_1_5 = true;
            group_check_group_code_tutorial_level_stuff_1_4 = true;
        }
            group_setup_1 = false;
    
    }
    event_232_11_end: ;
}
// Function purpose: generated callback event_func_5765 processes event block(s) 236_11. Actions/conditions:
//        236_11: sets MusicFade to In; plays a sound or music track; sets the audio channel volume.
void Frames::event_func_5765()
{
    // event 236_11 : sets MusicFade to In; plays a sound or music track; sets the audio channel volume
    {
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_236_11_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_236_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        media.play(str_music_tutorial_ogg_2541, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_236_11_end: ;
}
// Function purpose: generated callback event_func_5766 processes event block(s) 237_11. Actions/conditions:
//        237_11: sets popup_num to 1; sets popup_timer to 0.
void Frames::event_func_5766()
{
    // event 237_11 : sets popup_num to 1; sets popup_timer to 0
    {
        if (!(group_code_1)) goto event_237_11_end;
        if (!group_check_group_code_1_0) goto event_237_11_end;
        group_check_group_code_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(978, str_popup_num_2542, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 0);
    }
    event_237_11_end: ;
}
// Function purpose: generated callback event_func_5767 processes event block(s) 238_11. Actions/conditions:
//        238_11: saves the current object selection; saves the current object selection; removes the selected object.
void Frames::event_func_5767()
{
    // event 238_11 : saves the current object selection; saves the current object selection; removes the selected object
    bool or_result_238_11 = false;
    bool or_temp_result_238_11_0 = false;
    {
        if (!(group_code_1 && group_code_shadz_ground_1)) goto or_event_238_11_0_end;
        shadow_324_instances.clear_selection();
        for (ObjectIterator it(shadow_324_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!shadow_324_instances.has_selection()) goto or_event_238_11_0_end;
        or_result_238_11 = true;
        or_temp_result_238_11_0 = true;
    }
    or_event_238_11_0_end: ;
    shadow_324_instances.clear_saved_selection();
    if (or_temp_result_238_11_0) {
        shadow_324_instances.save_selection();
    }
    // event 238_11 : saves the current object selection; saves the current object selection; removes the selected object
    bool or_temp_result_238_11_1 = false;
    {
        if (!(group_code_1 && group_code_shadz_ground_1)) goto or_event_238_11_1_end;
        shadow_324_instances.clear_selection();
        mapsetupobstaclemarker_323_instances.clear_selection();
        if (!check_overlap(shadow_324_instances, mapsetupobstaclemarker_323_instances)) goto or_event_238_11_1_end;
        or_result_238_11 = true;
        or_temp_result_238_11_1 = true;
        or_event_238_11_1_end: ;
        mapsetupobstaclemarker_323_instances.clear_saved_selection();
        if (or_temp_result_238_11_1) {
            shadow_324_instances.save_selection();
            mapsetupobstaclemarker_323_instances.save_selection();
        }
        if (!or_result_238_11) goto or_final_or_event_238_11_1_end;
        mapsetupobstaclemarker_323_instances.empty_selection();
        shadow_324_instances.empty_selection();
        if (or_temp_result_238_11_0 || or_temp_result_238_11_1) {
            shadow_324_instances.restore_selection();
        }
        if (or_temp_result_238_11_1) {
            mapsetupobstaclemarker_323_instances.restore_selection();
        }
        for (ObjectIterator it(shadow_324_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    or_final_or_event_238_11_1_end: ;
}
// Function purpose: generated callback event_func_5768 processes event block(s) 239_11. Actions/conditions:
//        239_11: draws the selected image or tile; removes the selected object.
void Frames::event_func_5768()
{
    // event 239_11 : draws the selected image or tile; removes the selected object
    {
        if (!(group_code_1 && group_code_shadz_ground_1)) goto event_239_11_end;
        shadow_324_instances.clear_selection();
        for (ObjectIterator it(shadow_324_instances); !it.end(); ++it) {
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!shadow_324_instances.has_selection()) goto event_239_11_end;
        if (!check_not_overlap(shadow_324_instances, mapsetupobstaclemarker_323_instances)) goto event_239_11_end;
        for (ObjectIterator it(shadow_324_instances); !it.end(); ++it) {
            ((Active*)*it)->paste(0);
            ((Active*)*it)->destroy();
        }
    }
    event_239_11_end: ;
}
// Function purpose: generated callback event_func_5769 processes event block(s) 240_11. Actions/conditions:
//        240_11: saves the current object selection; removes the selected object.
void Frames::event_func_5769()
{
    // event 240_11 : saves the current object selection; removes the selected object
    bool or_result_240_11 = false;
    bool or_temp_result_240_11_0 = false;
    {
        if (!(group_code_1 && group_code_shadz_ground_1)) goto or_event_240_11_0_end;
        shady_734_instances.clear_selection();
        for (ObjectIterator it(shady_734_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!shady_734_instances.has_selection()) goto or_event_240_11_0_end;
        or_result_240_11 = true;
        or_temp_result_240_11_0 = true;
    }
    or_event_240_11_0_end: ;
    shady_734_instances.clear_saved_selection();
    if (or_temp_result_240_11_0) {
        shady_734_instances.save_selection();
    }
    // event 240_11 : saves the current object selection; removes the selected object
    bool or_temp_result_240_11_1 = false;
    {
        if (!(group_code_1 && group_code_shadz_ground_1)) goto or_event_240_11_1_end;
        shady_734_instances.clear_selection();
        for (ObjectIterator it(shady_734_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(-50))) { it.deselect(); continue; }
        }
        if (!shady_734_instances.has_selection()) goto or_event_240_11_1_end;
        or_result_240_11 = true;
        or_temp_result_240_11_1 = true;
        or_event_240_11_1_end: ;
        if (or_temp_result_240_11_1) {
            shady_734_instances.save_selection();
        }
        if (!or_result_240_11) goto or_final_or_event_240_11_1_end;
        shady_734_instances.empty_selection();
        if (or_temp_result_240_11_0 || or_temp_result_240_11_1) {
            shady_734_instances.restore_selection();
        }
        for (ObjectIterator it(shady_734_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    or_final_or_event_240_11_1_end: ;
}
// Function purpose: generated callback event_func_5770 processes event block(s) 241_11. Actions/conditions:
//        241_11: draws the selected image or tile; removes the selected object.
void Frames::event_func_5770()
{
    // event 241_11 : draws the selected image or tile; removes the selected object
    {
        if (!(group_code_1 && group_code_shadz_ground_1)) goto event_241_11_end;
        shady_734_instances.clear_selection();
        for (ObjectIterator it(shady_734_instances); !it.end(); ++it) {
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(-50))) { it.deselect(); continue; }
        }
        if (!shady_734_instances.has_selection()) goto event_241_11_end;
        for (ObjectIterator it(shady_734_instances); !it.end(); ++it) {
            ((Active*)*it)->paste(4);
            ((Active*)*it)->destroy();
        }
    }
    event_241_11_end: ;
}
// Function purpose: generated callback event_func_5771 processes event block(s) 242_11. Actions/conditions:
//        242_11: removes the selected object; sets the selected object's layer to 7-1.
void Frames::event_func_5771()
{
    // event 242_11 : removes the selected object; sets the selected object's layer to 7-1
    {
        if (!(group_code_1)) goto event_242_11_end;
        if (!((shadow_324_instances.size()) == (0))) goto event_242_11_end;
        if (!((shady_734_instances.size()) == (0))) goto event_242_11_end;
            group_code_shadz_ground_1 = false;
    
        loadingCurtain_instances.clear_selection();
        for (ObjectIterator it(loadingCurtain_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        mapsetupobstaclemarker_323_instances.clear_selection();
        for (ObjectIterator it(mapsetupobstaclemarker_323_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(7-1);
        }
    }
    event_242_11_end: ;
}
// Function purpose: generated callback event_func_5772 processes event block(s) 247_11. Actions/conditions:
//        247_11: removes the selected object.
void Frames::event_func_5772()
{
    // event 247_11 : removes the selected object
    {
        if (!(group_code_1)) goto event_247_11_end;
        if (!group_check_group_code_1_1) goto event_247_11_end;
        group_check_group_code_1_1 = false;
            group_setup_1 = false;
    
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->destroy();
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->destroy();
        }
    }
    event_247_11_end: ;
}
// Function purpose: generated callback event_func_5773 processes event block(s) 248_11. Actions/conditions:
//        248_11: checks scene is active; the event-specific game state condition is met; this handler gates a game
//        event without a direct value/object action.
void Frames::event_func_5773()
{
    // event 248_11 : checks scene is active; the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_248_11_end;
        if (!(frame_time >= 1.0)) goto event_248_11_end;
        if (!group_code_shadz_ground_1) {
            group_code_shadz_ground_1 = true;
        }
    }
    event_248_11_end: ;
}
// Function purpose: generated callback event_func_5774 processes event block(s) 252_11. Actions/conditions:
//        252_11: sets the selected object's visibility to false.
void Frames::event_func_5774()
{
    // event 252_11 : sets the selected object's visibility to false
    {
        if (!(group_code_1)) goto event_252_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_252_11_end;
        if (!(((Active*)get_instance(dreamOverlay_instances))->flags & VISIBLE)) goto event_252_11_end;
        ((Active*)get_instance(dreamOverlay_instances))->set_visible(false);
    }
    event_252_11_end: ;
}
