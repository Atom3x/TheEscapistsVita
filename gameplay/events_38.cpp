#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_2942()
{
    // event 206_6
    {
        if (!(group_load_map_from_file_1)) goto event_206_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (5))) goto event_206_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_206_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_206_6_end;
        washing2_313_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_washing2_313(0, 0), 1);
            washing2_313_instances.add_back();
        }
        for (ObjectIterator it(washing2_313_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_206_6_end: ;
}
void Frames::event_func_2943()
{
    // event 207_6
    {
        if (!(group_load_map_from_file_1)) goto event_207_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (5))) goto event_207_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_207_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(0, 0), 1);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->paste(1);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_207_6_end: ;
}
void Frames::event_func_2944()
{
    // event 208_6
    {
        if (!(group_load_map_from_file_1)) goto event_208_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (5))) goto event_208_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_208_6_end;
        sssobjects_502_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_sssobjects_502(0, 0), 1);
            sssobjects_502_instances.add_back();
        }
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_208_6_end: ;
}
void Frames::event_func_2945()
{
    // event 209_6
    {
        if (!(group_load_map_from_file_1)) goto event_209_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (6))) goto event_209_6_end;
        library2_316_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_library2_316(0, 0), 1);
            library2_316_instances.add_back();
        }
        for (ObjectIterator it(library2_316_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_209_6_end: ;
}
void Frames::event_func_2946()
{
    // event 210_6
    {
        if (!(group_load_map_from_file_1)) goto event_210_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (7))) goto event_210_6_end;
        gym3_317_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_gym3_317(0, 0), 1);
            gym3_317_instances.add_back();
        }
        for (ObjectIterator it(gym3_317_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_210_6_end: ;
}
void Frames::event_func_2947()
{
    // event 211_6
    {
        if (!(group_load_map_from_file_1)) goto event_211_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (8))) goto event_211_6_end;
        gym4_318_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_gym4_318(0, 0), 1);
            gym4_318_instances.add_back();
        }
        for (ObjectIterator it(gym4_318_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_211_6_end: ;
}
void Frames::event_func_2948()
{
    // event 212_6
    {
        if (!(group_load_map_from_file_1)) goto event_212_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (9))) goto event_212_6_end;
        desks_305_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_desks_305(0, 0), 1);
            desks_305_instances.add_back();
        }
        for (ObjectIterator it(desks_305_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
            ((Active*)*it)->set_direction(24);
        }
    }
    event_212_6_end: ;
}
void Frames::event_func_2949()
{
    // event 213_6
    {
        if (!(group_load_map_from_file_1)) goto event_213_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (10))) goto event_213_6_end;
        containerkitchen_229_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_containerkitchen_229(0, 0), 1);
            containerkitchen_229_instances.add_back();
        }
        for (ObjectIterator it(containerkitchen_229_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_213_6_end: ;
}
void Frames::event_func_2950()
{
    // event 214_6
    {
        if (!(group_load_map_from_file_1)) goto event_214_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (11))) goto event_214_6_end;
        canteenserving_277_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_canteenserving_277(0, 0), 1);
            canteenserving_277_instances.add_back();
        }
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_214_6_end: ;
}
void Frames::event_func_2951()
{
    // event 215_6
    {
        if (!(group_load_map_from_file_1)) goto event_215_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (12))) goto event_215_6_end;
        bedmedical_234_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bedmedical_234(0, 0), 1);
            bedmedical_234_instances.add_back();
        }
        for (ObjectIterator it(bedmedical_234_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_215_6_end: ;
}
void Frames::event_func_2952()
{
    // event 216_6
    {
        if (!(group_load_map_from_file_1)) goto event_216_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (13))) goto event_216_6_end;
        table2_308_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_table2_308(0, 0), 1);
            table2_308_instances.add_back();
        }
        for (ObjectIterator it(table2_308_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_216_6_end: ;
}
void Frames::event_func_2953()
{
    // event 217_6
    {
        if (!(group_load_map_from_file_1)) goto event_217_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (15))) goto event_217_6_end;
        containercanteen_230_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_containercanteen_230(0, 0), 1);
            containercanteen_230_instances.add_back();
        }
        for (ObjectIterator it(containercanteen_230_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_217_6_end: ;
}
void Frames::event_func_2954()
{
    // event 218_6
    {
        if (!(group_load_map_from_file_1)) goto event_218_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (32))) goto event_218_6_end;
        if (!((global_values->get(18)) != (2))) goto event_218_6_end;
        metaldetector_231_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_metaldetector_231(0, 0), 1);
            metaldetector_231_instances.add_back();
        }
        for (ObjectIterator it(metaldetector_231_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_218_6_end: ;
}
void Frames::event_func_2955()
{
    // event 219_6
    {
        if (!(group_load_map_from_file_1)) goto event_219_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (32))) goto event_219_6_end;
        if (!((global_values->get(18)) == (2))) goto event_219_6_end;
        metaldetector_231_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_metaldetector_231(0, 0), 1);
            metaldetector_231_instances.add_back();
        }
        for (ObjectIterator it(metaldetector_231_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(2, 1);
            ((Active*)*it)->set_direction(24);
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
                loop_door_shadow_6();
                if (!loop_door_shadow_running) break;
                loop_door_shadow_index++;
            }
        }
    }
    event_219_6_end: ;
}
void Frames::event_func_2956()
{
    // event 220_6
    {
        if (!(group_load_map_from_file_1)) goto event_220_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (104))) goto event_220_6_end;
        if (!((global_values->get(18)) >= (1))) goto event_220_6_end;
        metaldetector_231_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_metaldetector_231(0, 0), 1);
            metaldetector_231_instances.add_back();
        }
        for (ObjectIterator it(metaldetector_231_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(2, 1);
            ((Active*)*it)->set_direction(0);
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
                loop_door_shadow_6();
                if (!loop_door_shadow_running) break;
                loop_door_shadow_index++;
            }
        }
    }
    event_220_6_end: ;
}
void Frames::event_func_2957()
{
    // event 221_6
    {
        if (!(group_load_map_from_file_1)) goto event_221_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (33))) goto event_221_6_end;
        camera_237_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_camera_237(0, 0), 1);
            camera_237_instances.add_back();
        }
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_221_6_end: ;
}
void Frames::event_func_2958()
{
    // event 222_6
    {
        if (!(group_load_map_from_file_1)) goto event_222_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (34))) goto event_222_6_end;
        kitchensink_236_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_kitchensink_236(0, 0), 1);
            kitchensink_236_instances.add_back();
        }
        for (ObjectIterator it(kitchensink_236_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_222_6_end: ;
}
void Frames::event_func_2959()
{
    // event 223_6
    {
        if (!(group_load_map_from_file_1)) goto event_223_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (35))) goto event_223_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_223_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_223_6_end;
        containerlaundrydirty_274_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_containerlaundrydirty_274(0, 0), 1);
            containerlaundrydirty_274_instances.add_back();
        }
        for (ObjectIterator it(containerlaundrydirty_274_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_223_6_end: ;
}
void Frames::event_func_2960()
{
    // event 224_6
    {
        if (!(group_load_map_from_file_1)) goto event_224_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (35))) goto event_224_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_224_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(0, 0), 1);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_224_6_end: ;
}
void Frames::event_func_2961()
{
    // event 225_6
    {
        if (!(group_load_map_from_file_1)) goto event_225_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (35))) goto event_225_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_225_6_end;
        sssobjects_502_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_sssobjects_502(0, 0), 1);
            sssobjects_502_instances.add_back();
        }
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(6);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_225_6_end: ;
}
void Frames::event_func_2962()
{
    // event 226_6
    {
        if (!(group_load_map_from_file_1)) goto event_226_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (36))) goto event_226_6_end;
        containerlaundryclean_275_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_containerlaundryclean_275(0, 0), 1);
            containerlaundryclean_275_instances.add_back();
        }
        for (ObjectIterator it(containerlaundryclean_275_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_226_6_end: ;
}
void Frames::event_func_2963()
{
    // event 227_6
    {
        if (!(group_load_map_from_file_1)) goto event_227_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (40))) goto event_227_6_end;
        if (!((global_values->get(11)) == (0))) goto event_227_6_end;
        {
            loop_make_mines_running = true;
            int times = int(2);
            loop_make_mines_index = 0;
            while (loop_make_mines_index < times) {
                loop_make_mines_6();
                if (!loop_make_mines_running) break;
                loop_make_mines_index++;
            }
        }
    }
    event_227_6_end: ;
}
void Frames::event_func_2964()
{
    // event 229_6
    {
        if (!(group_load_map_from_file_1)) goto event_229_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (41))) goto event_229_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_229_6_end;
        containertimber_267_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_containertimber_267(0, 0), 1);
            containertimber_267_instances.add_back();
        }
        for (ObjectIterator it(containertimber_267_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_229_6_end: ;
}
void Frames::event_func_2965()
{
    // event 230_6
    {
        if (!(group_load_map_from_file_1)) goto event_230_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (41))) goto event_230_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_230_6_end;
        sssobjects_502_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_sssobjects_502(0, 0), 1);
            sssobjects_502_instances.add_back();
        }
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_230_6_end: ;
}
void Frames::event_func_2966()
{
    // event 231_6
    {
        if (!(group_load_map_from_file_1)) goto event_231_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (42))) goto event_231_6_end;
        containertimber2_325_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_containertimber2_325(0, 0), 1);
            containertimber2_325_instances.add_back();
        }
        for (ObjectIterator it(containertimber2_325_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_231_6_end: ;
}
void Frames::event_func_2967()
{
    // event 232_6
    {
        if (!(group_load_map_from_file_1)) goto event_232_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (43))) goto event_232_6_end;
        metalshop_326_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_metalshop_326(0, 0), 1);
            metalshop_326_instances.add_back();
        }
        for (ObjectIterator it(metalshop_326_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_232_6_end: ;
}
void Frames::event_func_2968()
{
    // event 233_6
    {
        if (!(group_load_map_from_file_1)) goto event_233_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (44))) goto event_233_6_end;
        metalshop2_327_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_metalshop2_327(0, 0), 1);
            metalshop2_327_instances.add_back();
        }
        for (ObjectIterator it(metalshop2_327_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_233_6_end: ;
}
void Frames::event_func_2969()
{
    // event 234_6
    {
        if (!(group_load_map_from_file_1)) goto event_234_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (45))) goto event_234_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_234_6_end;
        licenseprints_329_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_licenseprints_329(0, 0), 1);
            licenseprints_329_instances.add_back();
        }
        for (ObjectIterator it(licenseprints_329_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_234_6_end: ;
}
void Frames::event_func_2970()
{
    // event 235_6
    {
        if (!(group_load_map_from_file_1)) goto event_235_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (45))) goto event_235_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_235_6_end;
        sssobjects_502_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_sssobjects_502(0, 0), 1);
            sssobjects_502_instances.add_back();
        }
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_235_6_end: ;
}
void Frames::event_func_2971()
{
    // event 236_6
    {
        if (!(group_load_map_from_file_1)) goto event_236_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (46))) goto event_236_6_end;
        jobboard_244_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_jobboard_244(0, 0), 1);
            jobboard_244_instances.add_back();
        }
        for (ObjectIterator it(jobboard_244_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_236_6_end: ;
}
void Frames::event_func_2972()
{
    // event 237_6
    {
        if (!(group_load_map_from_file_1)) goto event_237_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (47))) goto event_237_6_end;
        containerjanitor_270_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_containerjanitor_270(0, 0), 1);
            containerjanitor_270_instances.add_back();
        }
        for (ObjectIterator it(containerjanitor_270_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_237_6_end: ;
}
void Frames::event_func_2973()
{
    // event 238_6
    {
        if (!(group_load_map_from_file_1)) goto event_238_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (48))) goto event_238_6_end;
        containermedical_269_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_containermedical_269(0, 0), 1);
            containermedical_269_instances.add_back();
        }
        for (ObjectIterator it(containermedical_269_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_238_6_end: ;
}
void Frames::event_func_2974()
{
    // event 239_6
    {
        if (!(group_load_map_from_file_1)) goto event_239_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (49))) goto event_239_6_end;
        light_330_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_light_330(0, 0), 2);
            light_330_instances.add_back();
        }
        for (ObjectIterator it(light_330_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->set_scale(1.5);
            ((Active*)*it)->paste(4);
            ((Active*)*it)->destroy();
        }
    }
    event_239_6_end: ;
}
void Frames::event_func_2975()
{
    // event 240_6
    {
        if (!(group_load_map_from_file_1)) goto event_240_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (50))) goto event_240_6_end;
        ventCover_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_ventCover(0, 0), 3);
            ventCover_instances.add_back();
        }
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_240_6_end: ;
}
void Frames::event_func_2976()
{
    // event 241_6
    {
        if (!(group_load_map_from_file_1)) goto event_241_6_end;
        if (!((global_values->get(18)) == (0))) goto event_241_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (51))) goto event_241_6_end;
        fan_281_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fan_281(0, 0), 3);
            fan_281_instances.add_back();
        }
        for (ObjectIterator it(fan_281_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_241_6_end: ;
}
void Frames::event_func_2977()
{
    // event 242_6
    {
        if (!(group_load_map_from_file_1)) goto event_242_6_end;
        if (!((global_values->get(18)) > (0))) goto event_242_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (51))) goto event_242_6_end;
        fan_281_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fan_281(0, 0), 3);
            fan_281_instances.add_back();
        }
        for (ObjectIterator it(fan_281_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->alterables->values.set(2, 1);
        }
    }
    event_242_6_end: ;
}
void Frames::event_func_2978()
{
    // event 243_6
    {
        if (!(group_load_map_from_file_1)) goto event_243_6_end;
        if (!((global_values->get(18)) > (0))) goto event_243_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (107))) goto event_243_6_end;
        fan_281_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fan_281(0, 0), 3);
            fan_281_instances.add_back();
        }
        for (ObjectIterator it(fan_281_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(2, 1);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_243_6_end: ;
}
void Frames::event_func_2979()
{
    // event 244_6
    {
        if (!(group_load_map_from_file_1)) goto event_244_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (52))) goto event_244_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3))) == (1))) goto event_244_6_end;
        ladders_336_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_ladders_336(0, 0), 1);
            ladders_336_instances.add_back();
        }
        for (ObjectIterator it(ladders_336_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->set_direction(8);
        }
    }
    event_244_6_end: ;
}
void Frames::event_func_2980()
{
    // event 245_6
    {
        if (!(group_load_map_from_file_1)) goto event_245_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (52))) goto event_245_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3))) == (2))) goto event_245_6_end;
        ladders_336_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_ladders_336(0, 0), 3);
            ladders_336_instances.add_back();
        }
        for (ObjectIterator it(ladders_336_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->set_direction(8);
        }
    }
    event_245_6_end: ;
}
void Frames::event_func_2981()
{
    // event 246_6
    {
        if (!(group_load_map_from_file_1)) goto event_246_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (53))) goto event_246_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3))) == (2))) goto event_246_6_end;
        ladders_336_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_ladders_336(0, 0), 3);
            ladders_336_instances.add_back();
        }
        for (ObjectIterator it(ladders_336_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->set_direction(24);
        }
    }
    event_246_6_end: ;
}
void Frames::event_func_2982()
{
    // event 247_6
    {
        if (!(group_load_map_from_file_1)) goto event_247_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (53))) goto event_247_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3))) == (3))) goto event_247_6_end;
        ladders_336_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_ladders_336(0, 0), 4);
            ladders_336_instances.add_back();
        }
        for (ObjectIterator it(ladders_336_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->set_direction(24);
        }
    }
    event_247_6_end: ;
}
void Frames::event_func_2983()
{
    // event 248_6
    {
        if (!(group_load_map_from_file_1)) goto event_248_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (54))) goto event_248_6_end;
        bedplayer_338_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bedplayer_338(0, 0), 1);
            bedplayer_338_instances.add_back();
        }
        for (ObjectIterator it(bedplayer_338_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->set_direction(24);
        }
    }
    event_248_6_end: ;
}
void Frames::event_func_2984()
{
    // event 249_6
    {
        if (!(group_load_map_from_file_1)) goto event_249_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (111))) goto event_249_6_end;
        bedplayer_338_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bedplayer_338(0, 0), 1);
            bedplayer_338_instances.add_back();
        }
        for (ObjectIterator it(bedplayer_338_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_249_6_end: ;
}
void Frames::event_func_2985()
{
    // event 250_6
    {
        if (!(group_load_map_from_file_1)) goto event_250_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (55))) goto event_250_6_end;
        desks_305_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_desks_305(0, 0), 1);
            desks_305_instances.add_back();
        }
        for (ObjectIterator it(desks_305_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->set_direction(8);
        }
    }
    event_250_6_end: ;
}
void Frames::event_func_2986()
{
    // event 251_6
    {
        if (!(group_load_map_from_file_1)) goto event_251_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (56))) goto event_251_6_end;
        bedguard_337_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bedguard_337(0, 0), 1);
            bedguard_337_instances.add_back();
        }
        for (ObjectIterator it(bedguard_337_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_251_6_end: ;
}
void Frames::event_func_2987()
{
    // event 252_6
    {
        if (!(group_load_map_from_file_1)) goto event_252_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (59))) goto event_252_6_end;
        bedsolitary_344_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bedsolitary_344(0, 0), 1);
            bedsolitary_344_instances.add_back();
        }
        for (ObjectIterator it(bedsolitary_344_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_252_6_end: ;
}
void Frames::event_func_2988()
{
    // event 253_6
    {
        if (!(group_load_map_from_file_1)) goto event_253_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (60))) goto event_253_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_253_6_end;
        spotlightsroof_213_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_spotlightsroof_213(0, 0), 4);
            spotlightsroof_213_instances.add_back();
        }
        for (ObjectIterator it(spotlightsroof_213_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->alterables->values.set(3, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(1, 12+randrange_event(8));
            ((Active*)*it)->get_movement()->set_speed(((Active*)*it)->alterables->values.get(1));
        }
    }
    event_253_6_end: ;
}
void Frames::event_func_2989()
{
    // event 254_6
    {
        if (!(group_load_map_from_file_1)) goto event_254_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (61))) goto event_254_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3))) == (1))) goto event_254_6_end;
        powerupplot_353_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_powerupplot_353(0, 0), 1);
            powerupplot_353_instances.add_back();
        }
        for (ObjectIterator it(powerupplot_353_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_254_6_end: ;
}
void Frames::event_func_2990()
{
    // event 255_6
    {
        if (!(group_load_map_from_file_1)) goto event_255_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (61))) goto event_255_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3))) == (2))) goto event_255_6_end;
        powerupplot_353_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_powerupplot_353(0, 0), 3);
            powerupplot_353_instances.add_back();
        }
        for (ObjectIterator it(powerupplot_353_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_255_6_end: ;
}
void Frames::event_func_2991()
{
    // event 256_6
    {
        if (!(group_load_map_from_file_1)) goto event_256_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (61))) goto event_256_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3))) == (3))) goto event_256_6_end;
        powerupplot_353_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_powerupplot_353(0, 0), 4);
            powerupplot_353_instances.add_back();
        }
        for (ObjectIterator it(powerupplot_353_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_256_6_end: ;
}
void Frames::event_func_2992()
{
    // event 257_6
    {
        if (!(group_load_map_from_file_1)) goto event_257_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (62))) goto event_257_6_end;
        checkpointguard_423_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_checkpointguard_423(0, 0), 1);
            checkpointguard_423_instances.add_back();
        }
        for (ObjectIterator it(checkpointguard_423_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_257_6_end: ;
}
void Frames::event_func_2993()
{
    // event 258_6
    {
        if (!(group_load_map_from_file_1)) goto event_258_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (66))) goto event_258_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3))) == (1))) goto event_258_6_end;
        patroljeepwpleft_418_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_patroljeepwpleft_418(0, 0), 1);
            patroljeepwpleft_418_instances.add_back();
        }
        for (ObjectIterator it(patroljeepwpleft_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_258_6_end: ;
}
void Frames::event_func_2994()
{
    // event 259_6
    {
        if (!(group_load_map_from_file_1)) goto event_259_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (67))) goto event_259_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3))) == (1))) goto event_259_6_end;
        patroljeepwpup_419_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_patroljeepwpup_419(0, 0), 1);
            patroljeepwpup_419_instances.add_back();
        }
        for (ObjectIterator it(patroljeepwpup_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_259_6_end: ;
}
void Frames::event_func_2995()
{
    // event 260_6
    {
        if (!(group_load_map_from_file_1)) goto event_260_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (68))) goto event_260_6_end;
        hiding_379_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_hiding_379(0, 0), 1);
            hiding_379_instances.add_back();
        }
        for (ObjectIterator it(hiding_379_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_260_6_end: ;
}
void Frames::event_func_2996()
{
    // event 261_6
    {
        if (!(group_load_map_from_file_1)) goto event_261_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (69))) goto event_261_6_end;
        interwebs_380_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_interwebs_380(0, 0), 1);
            interwebs_380_instances.add_back();
        }
        for (ObjectIterator it(interwebs_380_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_261_6_end: ;
}
void Frames::event_func_2997()
{
    // event 262_6
    {
        if (!(group_load_map_from_file_1)) goto event_262_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (70))) goto event_262_6_end;
        visitationvisitor_381_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_visitationvisitor_381(0, 0), 1);
            visitationvisitor_381_instances.add_back();
        }
        for (ObjectIterator it(visitationvisitor_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_262_6_end: ;
}
void Frames::event_func_2998()
{
    // event 263_6
    {
        if (!(group_load_map_from_file_1)) goto event_263_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (71))) goto event_263_6_end;
        visitationinmate_382_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_visitationinmate_382(0, 0), 1);
            visitationinmate_382_instances.add_back();
        }
        for (ObjectIterator it(visitationinmate_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_263_6_end: ;
}
void Frames::event_func_2999()
{
    // event 264_6
    {
        if (!(group_load_map_from_file_1)) goto event_264_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (72))) goto event_264_6_end;
        npcspawn_384_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_npcspawn_384(0, 0), 1);
            npcspawn_384_instances.add_back();
        }
        for (ObjectIterator it(npcspawn_384_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_264_6_end: ;
}
void Frames::event_func_3000()
{
    // event 265_6
    {
        if (!(group_load_map_from_file_1)) goto event_265_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (73))) goto event_265_6_end;
        staffjoboffice_385_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_staffjoboffice_385(0, 0), 1);
            staffjoboffice_385_instances.add_back();
        }
        for (ObjectIterator it(staffjoboffice_385_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_265_6_end: ;
}
void Frames::event_func_3001()
{
    // event 266_6
    {
        if (!(group_load_map_from_file_1)) goto event_266_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (74))) goto event_266_6_end;
        payphone_386_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_payphone_386(0, 0), 1);
            payphone_386_instances.add_back();
        }
        for (ObjectIterator it(payphone_386_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_266_6_end: ;
}
void Frames::event_func_3002()
{
    // event 267_6
    {
        if (!(group_load_map_from_file_1)) goto event_267_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (76))) goto event_267_6_end;
        zipstart_389_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_zipstart_389(0, 0), 4);
            zipstart_389_instances.add_back();
        }
        for (ObjectIterator it(zipstart_389_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->strings.set(0, str_up_38);
        }
    }
    event_267_6_end: ;
}
void Frames::event_func_3003()
{
    // event 268_6
    {
        if (!(group_load_map_from_file_1)) goto event_268_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (99))) goto event_268_6_end;
        zipstart_389_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_zipstart_389(0, 0), 4);
            zipstart_389_instances.add_back();
        }
        for (ObjectIterator it(zipstart_389_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->strings.set(0, str_down_81);
        }
    }
    event_268_6_end: ;
}
void Frames::event_func_3004()
{
    // event 269_6
    {
        if (!(group_load_map_from_file_1)) goto event_269_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (100))) goto event_269_6_end;
        zipstart_389_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_zipstart_389(0, 0), 4);
            zipstart_389_instances.add_back();
        }
        for (ObjectIterator it(zipstart_389_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->strings.set(0, str_right_83);
        }
    }
    event_269_6_end: ;
}
void Frames::event_func_3005()
{
    // event 270_6
    {
        if (!(group_load_map_from_file_1)) goto event_270_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (101))) goto event_270_6_end;
        zipstart_389_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_zipstart_389(0, 0), 4);
            zipstart_389_instances.add_back();
        }
        for (ObjectIterator it(zipstart_389_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->strings.set(0, str_left_82);
        }
    }
    event_270_6_end: ;
}
void Frames::event_func_3006()
{
    // event 271_6
    {
        if (!(group_load_map_from_file_1)) goto event_271_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (77))) goto event_271_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_271_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_271_6_end;
        zipend_390_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_zipend_390(0, 0), 4);
            zipend_390_instances.add_back();
        }
        for (ObjectIterator it(zipend_390_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_271_6_end: ;
}
void Frames::event_func_3007()
{
    // event 272_6
    {
        if (!(group_load_map_from_file_1)) goto event_272_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (77))) goto event_272_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_272_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(0, 0), 1);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(6);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->paste(1);
            ((Active*)*it)->destroy();
        }
    }
    event_272_6_end: ;
}
void Frames::event_func_3008()
{
    // event 273_6
    {
        if (!(group_load_map_from_file_1)) goto event_273_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (77))) goto event_273_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_273_6_end;
        sssobjects_502_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_sssobjects_502(0, 0), 1);
            sssobjects_502_instances.add_back();
        }
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(6);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_273_6_end: ;
}
void Frames::event_func_3009()
{
    // event 274_6
    {
        if (!(group_load_map_from_file_1)) goto event_274_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (78))) goto event_274_6_end;
        if (!((global_values->get(18)) == (0))) goto event_274_6_end;
        truck_388_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_truck_388(0, 0), 1);
            truck_388_instances.add_back();
        }
        for (ObjectIterator it(truck_388_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->paste(1);
        }
    }
    event_274_6_end: ;
}
void Frames::event_func_3010()
{
    // event 275_6
    {
        if (!(group_load_map_from_file_1)) goto event_275_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (78))) goto event_275_6_end;
        if (!((global_values->get(18)) > (0))) goto event_275_6_end;
        truck_388_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_truck_388(0, 0), 1);
            truck_388_instances.add_back();
        }
        for (ObjectIterator it(truck_388_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->paste(1);
        }
    }
    event_275_6_end: ;
}
void Frames::event_func_3011()
{
    // event 276_6
    {
        if (!(group_load_map_from_file_1)) goto event_276_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (108))) goto event_276_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_276_6_end;
        if (!((global_values->get(18)) > (0))) goto event_276_6_end;
        truck_388_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_truck_388(0, 0), 1);
            truck_388_instances.add_back();
        }
        for (ObjectIterator it(truck_388_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->paste(1);
        }
    }
    event_276_6_end: ;
}
void Frames::event_func_3012()
{
    // event 277_6
    {
        if (!(group_load_map_from_file_1)) goto event_277_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (108))) goto event_277_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_277_6_end;
        if (!((global_values->get(18)) > (0))) goto event_277_6_end;
        truck_388_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_truck_388(0, 0), 1);
            truck_388_instances.add_back();
        }
        for (ObjectIterator it(truck_388_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->paste(1);
        }
    }
    event_277_6_end: ;
}
void Frames::event_func_3013()
{
    // event 278_6
    {
        if (!(group_load_map_from_file_1)) goto event_278_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (79))) goto event_278_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_278_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_278_6_end;
        containertailorout_395_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_containertailorout_395(0, 0), 1);
            containertailorout_395_instances.add_back();
        }
        for (ObjectIterator it(containertailorout_395_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_278_6_end: ;
}
void Frames::event_func_3014()
{
    // event 279_6
    {
        if (!(group_load_map_from_file_1)) goto event_279_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (79))) goto event_279_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_279_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_279_6_end;
        containertailorout_395_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_containertailorout_395(0, 0), 1);
            containertailorout_395_instances.add_back();
        }
        for (ObjectIterator it(containertailorout_395_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_279_6_end: ;
}
void Frames::event_func_3015()
{
    // event 280_6
    {
        if (!(group_load_map_from_file_1)) goto event_280_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (79))) goto event_280_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_280_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(0, 0), 1);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_280_6_end: ;
}
void Frames::event_func_3016()
{
    // event 281_6
    {
        if (!(group_load_map_from_file_1)) goto event_281_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (80))) goto event_281_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_281_6_end;
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
    event_281_6_end: ;
}
void Frames::event_func_3017()
{
    // event 282_6
    {
        if (!(group_load_map_from_file_1)) goto event_282_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (80))) goto event_282_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_282_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(0, 0), 1);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_282_6_end: ;
}
void Frames::event_func_3018()
{
    // event 283_6
    {
        if (!(group_load_map_from_file_1)) goto event_283_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (81))) goto event_283_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_283_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_283_6_end;
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
    event_283_6_end: ;
}
void Frames::event_func_3019()
{
    // event 284_6
    {
        if (!(group_load_map_from_file_1)) goto event_284_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (81))) goto event_284_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_284_6_end;
        sssobjects_502_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_sssobjects_502(0, 0), 1);
            sssobjects_502_instances.add_back();
        }
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_284_6_end: ;
}
void Frames::event_func_3020()
{
    // event 285_6
    {
        if (!(group_load_map_from_file_1)) goto event_285_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (81))) goto event_285_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_285_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(0, 0), 1);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_285_6_end: ;
}
void Frames::event_func_3021()
{
    // event 286_6
    {
        if (!(group_load_map_from_file_1)) goto event_286_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (82))) goto event_286_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_286_6_end;
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
    event_286_6_end: ;
}
void Frames::event_func_3022()
{
    // event 287_6
    {
        if (!(group_load_map_from_file_1)) goto event_287_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (82))) goto event_287_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_287_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(0, 0), 1);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_287_6_end: ;
}
void Frames::event_func_3023()
{
    // event 288_6
    {
        if (!(group_load_map_from_file_1)) goto event_288_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (83))) goto event_288_6_end;
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
                loop_door_shadow_6();
                if (!loop_door_shadow_running) break;
                loop_door_shadow_index++;
            }
        }
    }
    event_288_6_end: ;
}
void Frames::event_func_3024()
{
    // event 289_6
    {
        if (!(group_load_map_from_file_1)) goto event_289_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (84))) goto event_289_6_end;
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
                loop_door_shadow_6();
                if (!loop_door_shadow_running) break;
                loop_door_shadow_index++;
            }
        }
    }
    event_289_6_end: ;
}
void Frames::event_func_3025()
{
    // event 290_6
    {
        if (!(group_load_map_from_file_1)) goto event_290_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (85))) goto event_290_6_end;
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
                loop_door_shadow_6();
                if (!loop_door_shadow_running) break;
                loop_door_shadow_index++;
            }
        }
    }
    event_290_6_end: ;
}
void Frames::event_func_3026()
{
    // event 291_6
    {
        if (!(group_load_map_from_file_1)) goto event_291_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (86))) goto event_291_6_end;
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
                loop_door_shadow_6();
                if (!loop_door_shadow_running) break;
                loop_door_shadow_index++;
            }
        }
    }
    event_291_6_end: ;
}
void Frames::event_func_3027()
{
    // event 292_6
    {
        if (!(group_load_map_from_file_1)) goto event_292_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (87))) goto event_292_6_end;
        tv_404_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_tv_404(0, 0), 1);
            tv_404_instances.add_back();
        }
        for (ObjectIterator it(tv_404_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_292_6_end: ;
}
void Frames::event_func_3028()
{
    // event 293_6
    {
        if (!(group_load_map_from_file_1)) goto event_293_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (88))) goto event_293_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_293_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_293_6_end;
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
    event_293_6_end: ;
}
void Frames::event_func_3029()
{
    // event 294_6
    {
        if (!(group_load_map_from_file_1)) goto event_294_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (88))) goto event_294_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_294_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(0, 0), 1);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_294_6_end: ;
}
void Frames::event_func_3030()
{
    // event 295_6
    {
        if (!(group_load_map_from_file_1)) goto event_295_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (88))) goto event_295_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_295_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(0, 0), 2);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->paste(0);
            ((Active*)*it)->destroy();
        }
    }
    event_295_6_end: ;
}
void Frames::event_func_3031()
{
    // event 296_6
    {
        if (!(group_load_map_from_file_1)) goto event_296_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (88))) goto event_296_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_296_6_end;
        sssobjects_502_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_sssobjects_502(0, 0), 1);
            sssobjects_502_instances.add_back();
        }
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->paste(0);
            ((Active*)*it)->destroy();
        }
    }
    event_296_6_end: ;
}
void Frames::event_func_3032()
{
    // event 297_6
    {
        if (!(group_load_map_from_file_1)) goto event_297_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (89))) goto event_297_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_297_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_297_6_end;
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
    event_297_6_end: ;
}
void Frames::event_func_3033()
{
    // event 298_6
    {
        if (!(group_load_map_from_file_1)) goto event_298_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (89))) goto event_298_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_298_6_end;
        sssobjects_502_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_sssobjects_502(0, 0), 1);
            sssobjects_502_instances.add_back();
        }
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_298_6_end: ;
}
void Frames::event_func_3034()
{
    // event 299_6
    {
        if (!(group_load_map_from_file_1)) goto event_299_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (89))) goto event_299_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_299_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(0, 0), 1);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_299_6_end: ;
}
void Frames::event_func_3035()
{
    // event 300_6
    {
        if (!(group_load_map_from_file_1)) goto event_300_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (90))) goto event_300_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_300_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_300_6_end;
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
    event_300_6_end: ;
}
void Frames::event_func_3036()
{
    // event 301_6
    {
        if (!(group_load_map_from_file_1)) goto event_301_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (90))) goto event_301_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_301_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(0, 0), 1);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(6);
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_301_6_end: ;
}
void Frames::event_func_3037()
{
    // event 302_6
    {
        if (!(group_load_map_from_file_1)) goto event_302_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (90))) goto event_302_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_302_6_end;
        sssobjects_502_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_sssobjects_502(0, 0), 1);
            sssobjects_502_instances.add_back();
        }
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_302_6_end: ;
}
void Frames::event_func_3038()
{
    // event 303_6
    {
        if (!(group_load_map_from_file_1)) goto event_303_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (90))) goto event_303_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_303_6_end;
        sssobjects_502_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_sssobjects_502(0, 0), 2);
            sssobjects_502_instances.add_back();
        }
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->paste(0);
            ((Active*)*it)->destroy();
        }
    }
    event_303_6_end: ;
}
void Frames::event_func_3039()
{
    // event 304_6
    {
        if (!(group_load_map_from_file_1)) goto event_304_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (91))) goto event_304_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_304_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_304_6_end;
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
    event_304_6_end: ;
}
void Frames::event_func_3040()
{
    // event 305_6
    {
        if (!(group_load_map_from_file_1)) goto event_305_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (91))) goto event_305_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_305_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(0, 0), 1);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_305_6_end: ;
}
void Frames::event_func_3041()
{
    // event 306_6
    {
        if (!(group_load_map_from_file_1)) goto event_306_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (91))) goto event_306_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_306_6_end;
        sssobjects_502_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_sssobjects_502(0, 0), 1);
            sssobjects_502_instances.add_back();
        }
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_306_6_end: ;
}
