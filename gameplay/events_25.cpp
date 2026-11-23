#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_1899 processes event block(s) 55_6. Actions/conditions:
//        55_6: sets loop_load_x_index to gameVariables->get_value(490, MapLoop); sets ignore to 1.
void Frames::event_func_1899()
{
    // event 55_6 : sets loop_load_x_index to gameVariables->get_value(490, MapLoop); sets ignore to 1
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_55_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(300, str_invisfloor_1073), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_55_6_end;
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(493, str_ignore_1372, 1);
    }
    event_55_6_end: ;
}
// Function purpose: generated callback event_func_1900 processes event block(s) 56_6. Actions/conditions:
//        56_6: adds a invisiblock 517 instance; sets the selected object's horizontal position to
//        loop_load_x_index*16; sets the selected object's vertical position to gameVariables->get_value(490,
//        MapLoop)*16; plus 7 more actions.
void Frames::event_func_1900()
{
    // event 56_6 : adds a invisiblock 517 instance; sets the selected object's horizontal position to loop_load_x_index*16; sets the selected object's vertical position to gameVariables->get_value(490, MapLoop)*16; plus 7 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_56_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(301, str_overlapper_1075), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_56_6_end;
        invisiblock_517_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_invisiblock_517(0, 0), 2);
            invisiblock_517_instances.add_back();
        }
        for (ObjectIterator it(invisiblock_517_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(loop_load_x_index*16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16);
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->paste(4);
            ((Active*)*it)->destroy();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(493, str_ignore_1372, 1);
    }
    event_56_6_end: ;
}
// Function purpose: generated callback event_func_1901 processes event block(s) 57_6. Actions/conditions:
//        57_6: changes a stored game value.
void Frames::event_func_1901()
{
    // event 57_6 : changes a stored game value
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_57_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)) == (str_0_615))) goto event_57_6_end;
        counter_4_instances.clear_selection();
        for (ObjectIterator it(counter_4_instances); !it.end(); ++it) {
            ((Counter*)*it)->add(1);
        }
    }
    event_57_6_end: ;
}
// Function purpose: generated callback event_func_1902 processes event block(s) 58_6. Actions/conditions:
//        58_6: adds a invisiblock 517 instance; sets the selected object's horizontal position to
//        loop_load_x_index*16; sets the selected object's vertical position to gameVariables->get_value(490,
//        MapLoop)*16; plus 9 more actions.
void Frames::event_func_1902()
{
    // event 58_6 : adds a invisiblock 517 instance; sets the selected object's horizontal position to loop_load_x_index*16; sets the selected object's vertical position to gameVariables->get_value(490, MapLoop)*16; plus 9 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_58_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(299, str_invisblock_1065), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_58_6_end;
        invisiblock_517_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_invisiblock_517(-16, -16), 1);
            invisiblock_517_instances.add_back();
        }
        for (ObjectIterator it(invisiblock_517_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(loop_load_x_index*16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16);
            ((Active*)*it)->blend_color.set_alpha_coefficient(250);
            ((Active*)*it)->paste(1);
            ((Active*)*it)->destroy();
        }
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(497, str_obs_1376, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(494, str_ground_obs_1373, 1);
        {
            loop_make_layer7_block_running = true;
            int times = int(1);
            loop_make_layer7_block_index = 0;
            while (loop_make_layer7_block_index < times) {
                loop_make_layer7_block_6();
                if (!loop_make_layer7_block_running) break;
                loop_make_layer7_block_index++;
            }
        }
    }
    event_58_6_end: ;
}
// Function purpose: generated callback event_func_1903 processes event block(s) 60_6. Actions/conditions:
//        60_6: sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 5 more actions.
void Frames::event_func_1903()
{
    // event 60_6 : sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 5 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_60_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(284, str_obstaclelist1_952), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_60_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 0, (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(494, str_ground_obs_1373, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(497, str_obs_1376, 1);
        {
            loop_make_layer7_block_running = true;
            int times = int(1);
            loop_make_layer7_block_index = 0;
            while (loop_make_layer7_block_index < times) {
                loop_make_layer7_block_6();
                if (!loop_make_layer7_block_running) break;
                loop_make_layer7_block_index++;
            }
        }
        {
            loop_check_shad_override_running = true;
            int times = int(1);
            loop_check_shad_override_index = 0;
            while (loop_check_shad_override_index < times) {
                loop_check_shad_override_6();
                if (!loop_check_shad_override_running) break;
                loop_check_shad_override_index++;
            }
        }
    }
    event_60_6_end: ;
}
// Function purpose: generated callback event_func_1904 processes event block(s) 61_6. Actions/conditions:
//        61_6: sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 5 more actions.
void Frames::event_func_1904()
{
    // event 61_6 : sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 5 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_61_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(285, str_obstaclelist2_954), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_61_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 16, 16*(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))-25)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(497, str_obs_1376, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(494, str_ground_obs_1373, 1);
        {
            loop_make_layer7_block_running = true;
            int times = int(1);
            loop_make_layer7_block_index = 0;
            while (loop_make_layer7_block_index < times) {
                loop_make_layer7_block_6();
                if (!loop_make_layer7_block_running) break;
                loop_make_layer7_block_index++;
            }
        }
        {
            loop_check_shad_override_running = true;
            int times = int(1);
            loop_check_shad_override_index = 0;
            while (loop_check_shad_override_index < times) {
                loop_check_shad_override_6();
                if (!loop_check_shad_override_running) break;
                loop_check_shad_override_index++;
            }
        }
    }
    event_61_6_end: ;
}
// Function purpose: generated callback event_func_1905 processes event block(s) 62_6. Actions/conditions:
//        62_6: sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 5 more actions.
void Frames::event_func_1905()
{
    // event 62_6 : sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 5 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_62_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(286, str_obstaclelist3_956), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_62_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 32, 16*(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))-50)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(497, str_obs_1376, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(494, str_ground_obs_1373, 1);
        {
            loop_make_layer7_block_running = true;
            int times = int(1);
            loop_make_layer7_block_index = 0;
            while (loop_make_layer7_block_index < times) {
                loop_make_layer7_block_6();
                if (!loop_make_layer7_block_running) break;
                loop_make_layer7_block_index++;
            }
        }
        {
            loop_check_shad_override_running = true;
            int times = int(1);
            loop_check_shad_override_index = 0;
            while (loop_check_shad_override_index < times) {
                loop_check_shad_override_6();
                if (!loop_check_shad_override_running) break;
                loop_check_shad_override_index++;
            }
        }
    }
    event_62_6_end: ;
}
// Function purpose: generated callback event_func_1906 processes event block(s) 63_6. Actions/conditions:
//        63_6: sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 5 more actions.
void Frames::event_func_1906()
{
    // event 63_6 : sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 5 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_63_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(287, str_obstaclelist4_958), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_63_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 48, 16*(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))-75)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(497, str_obs_1376, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(494, str_ground_obs_1373, 1);
        {
            loop_make_layer7_block_running = true;
            int times = int(1);
            loop_make_layer7_block_index = 0;
            while (loop_make_layer7_block_index < times) {
                loop_make_layer7_block_6();
                if (!loop_make_layer7_block_running) break;
                loop_make_layer7_block_index++;
            }
        }
        {
            loop_check_shad_override_running = true;
            int times = int(1);
            loop_check_shad_override_index = 0;
            while (loop_check_shad_override_index < times) {
                loop_check_shad_override_6();
                if (!loop_check_shad_override_running) break;
                loop_check_shad_override_index++;
            }
        }
    }
    event_63_6_end: ;
}
// Function purpose: generated callback event_func_1907 processes event block(s) 67_6. Actions/conditions:
//        67_6: sets Ground_Obs to 1; sets the selected object's layer to 2-1; draws the selected image or tile; plus
//        9 more actions.
void Frames::event_func_1907()
{
    // event 67_6 : sets Ground_Obs to 1; sets the selected object's layer to 2-1; draws the selected image or tile; plus 9 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_67_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(292, str_cuttablefences_969), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_67_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))) <= (25))) goto event_67_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(494, str_ground_obs_1373, 1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 0, (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        mapsetupobstaclemarker_323_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_mapsetupobstaclemarker_323(0, 0), 1);
            mapsetupobstaclemarker_323_instances.add_back();
        }
        for (ObjectIterator it(mapsetupobstaclemarker_323_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(loop_load_x_index*16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16);
            ((Active*)*it)->alterables->flags.enable(100);
        }
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(0, loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        }
    }
    event_67_6_end: ;
}
// Function purpose: generated callback event_func_1908 processes event block(s) 68_6. Actions/conditions:
//        68_6: sets Ground_Obs to 1; sets the selected object's layer to 2-1; draws the selected image or tile; plus
//        9 more actions.
void Frames::event_func_1908()
{
    // event 68_6 : sets Ground_Obs to 1; sets the selected object's layer to 2-1; draws the selected image or tile; plus 9 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_68_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(292, str_cuttablefences_969), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_68_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))) == (56))) goto event_68_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(494, str_ground_obs_1373, 1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 32, 16*(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))-50)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        mapsetupobstaclemarker_323_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_mapsetupobstaclemarker_323(0, 0), 1);
            mapsetupobstaclemarker_323_instances.add_back();
        }
        for (ObjectIterator it(mapsetupobstaclemarker_323_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(loop_load_x_index*16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16);
            ((Active*)*it)->alterables->flags.enable(100);
        }
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(0, loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        }
    }
    event_68_6_end: ;
}
// Function purpose: generated callback event_func_1909 processes event block(s) 69_6. Actions/conditions:
//        69_6: sets Ground_Obs to 1; sets the selected object's layer to 2-1; draws the selected image or tile; plus
//        9 more actions.
void Frames::event_func_1909()
{
    // event 69_6 : sets Ground_Obs to 1; sets the selected object's layer to 2-1; draws the selected image or tile; plus 9 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_69_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(292, str_cuttablefences_969), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_69_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))) > (25))) goto event_69_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))) != (56))) goto event_69_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(494, str_ground_obs_1373, 1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 48, 16*(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))-75)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        mapsetupobstaclemarker_323_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_mapsetupobstaclemarker_323(0, 0), 1);
            mapsetupobstaclemarker_323_instances.add_back();
        }
        for (ObjectIterator it(mapsetupobstaclemarker_323_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(loop_load_x_index*16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16);
            ((Active*)*it)->alterables->flags.enable(100);
        }
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(0, loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        }
    }
    event_69_6_end: ;
}
// Function purpose: generated callback event_func_1910 processes event block(s) 70_6. Actions/conditions:
//        70_6: sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_1910()
{
    // event 70_6 : sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_70_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))) > (0))) goto event_70_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))) <= (25))) goto event_70_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(494, str_ground_obs_1373)) == (0))) goto event_70_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(493, str_ignore_1372)) == (0))) goto event_70_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, get_floor(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))/MathHelper()/25)*16, (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))*16)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
    }
    event_70_6_end: ;
}
// Function purpose: generated callback event_func_1911 processes event block(s) 71_6. Actions/conditions:
//        71_6: sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_1911()
{
    // event 71_6 : sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_71_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))) > (25))) goto event_71_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))) <= (50))) goto event_71_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(494, str_ground_obs_1373)) == (0))) goto event_71_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(493, str_ignore_1372)) == (0))) goto event_71_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 16, 16*(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))-25)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
    }
    event_71_6_end: ;
}
// Function purpose: generated callback event_func_1912 processes event block(s) 72_6. Actions/conditions:
//        72_6: sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_1912()
{
    // event 72_6 : sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_72_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))) > (50))) goto event_72_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))) <= (75))) goto event_72_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(494, str_ground_obs_1373)) == (0))) goto event_72_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(493, str_ignore_1372)) == (0))) goto event_72_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 32, 16*(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))-50)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
    }
    event_72_6_end: ;
}
// Function purpose: generated callback event_func_1913 processes event block(s) 73_6. Actions/conditions:
//        73_6: sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_1913()
{
    // event 73_6 : sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_73_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))) > (75))) goto event_73_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(494, str_ground_obs_1373)) == (0))) goto event_73_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(493, str_ignore_1372)) == (0))) goto event_73_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 48, 16*(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))-75)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
    }
    event_73_6_end: ;
}
// Function purpose: generated callback event_func_1914 processes event block(s) 74_6. Actions/conditions:
//        74_6: sets the selected object's layer to 4-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 1 more actions.
void Frames::event_func_1914()
{
    // event 74_6 : sets the selected object's layer to 4-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 1 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_74_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_74_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))) >= (28))) goto event_74_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))) <= (31))) goto event_74_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(4-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 16, ((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))-25)*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 4);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(495, str_vent_obs_1374, 1);
    }
    event_74_6_end: ;
}
// Function purpose: generated callback event_func_1915 processes event block(s) 75_6. Actions/conditions:
//        75_6: sets the selected object's layer to 4-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 1 more actions.
void Frames::event_func_1915()
{
    // event 75_6 : sets the selected object's layer to 4-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 1 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_75_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_75_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))) == (41))) goto event_75_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(4-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 16, ((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))-25)*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 4);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(495, str_vent_obs_1374, 1);
    }
    event_75_6_end: ;
}
// Function purpose: generated callback event_func_1916 processes event block(s) 76_6. Actions/conditions:
//        76_6: sets the selected object's layer to 4-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 1 more actions.
void Frames::event_func_1916()
{
    // event 76_6 : sets the selected object's layer to 4-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 1 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_76_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_76_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))) == (42))) goto event_76_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(4-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 16, ((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))-25)*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 4);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(495, str_vent_obs_1374, 1);
    }
    event_76_6_end: ;
}
// Function purpose: generated callback event_func_1917 processes event block(s) 77_6. Actions/conditions:
//        77_6: sets the selected object's layer to 4-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 1 more actions.
void Frames::event_func_1917()
{
    // event 77_6 : sets the selected object's layer to 4-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 1 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_77_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_77_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))) >= (93))) goto event_77_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))) <= (96))) goto event_77_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(4-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 48, ((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))-75)*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 4);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(495, str_vent_obs_1374, 1);
    }
    event_77_6_end: ;
}
// Function purpose: generated callback event_func_1918 processes event block(s) 78_6. Actions/conditions:
//        78_6: sets the selected object's layer to 4-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 1 more actions.
void Frames::event_func_1918()
{
    // event 78_6 : sets the selected object's layer to 4-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 1 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_78_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_78_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))) == (28))) goto event_78_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(4-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 16, ((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))-25)*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 4);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(495, str_vent_obs_1374, 1);
    }
    event_78_6_end: ;
}
// Function purpose: generated callback event_func_1919 processes event block(s) 79_6. Actions/conditions:
//        79_6: sets the selected object's layer to 4-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 1 more actions.
void Frames::event_func_1919()
{
    // event 79_6 : sets the selected object's layer to 4-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 1 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_79_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_79_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))) == (71))) goto event_79_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(4-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 32, ((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))-50)*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 4);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(495, str_vent_obs_1374, 1);
    }
    event_79_6_end: ;
}
// Function purpose: generated callback event_func_1920 processes event block(s) 80_6. Actions/conditions:
//        80_6: sets the selected object's layer to 4-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_1920()
{
    // event 80_6 : sets the selected object's layer to 4-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_80_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))) > (0))) goto event_80_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))) <= (25))) goto event_80_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(495, str_vent_obs_1374)) == (0))) goto event_80_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(4-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 0, (string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))*16)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 4);
    }
    event_80_6_end: ;
}
// Function purpose: generated callback event_func_1921 processes event block(s) 81_6. Actions/conditions:
//        81_6: sets the selected object's layer to 4-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_1921()
{
    // event 81_6 : sets the selected object's layer to 4-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_81_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))) > (25))) goto event_81_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(495, str_vent_obs_1374)) == (0))) goto event_81_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(4-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 16, ((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))-25)*16)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 4);
    }
    event_81_6_end: ;
}
// Function purpose: generated callback event_func_1922 processes event block(s) 82_6. Actions/conditions:
//        82_6: sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 5 more actions.
void Frames::event_func_1922()
{
    // event 82_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 5 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_82_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(284, str_obstaclelist1_952), str__96+((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_82_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 0, (string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(0, loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(496, str_roof_obs_1375, 1);
    }
    event_82_6_end: ;
}
// Function purpose: generated callback event_func_1923 processes event block(s) 83_6. Actions/conditions:
//        83_6: sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 5 more actions.
void Frames::event_func_1923()
{
    // event 83_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 5 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_83_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(285, str_obstaclelist2_954), str__96+((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_83_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 16, 16*(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))-25)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(0, loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(496, str_roof_obs_1375, 1);
    }
    event_83_6_end: ;
}
// Function purpose: generated callback event_func_1924 processes event block(s) 84_6. Actions/conditions:
//        84_6: sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 5 more actions.
void Frames::event_func_1924()
{
    // event 84_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 5 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_84_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(286, str_obstaclelist3_956), str__96+((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_84_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 32, 16*(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))-50)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(0, loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(496, str_roof_obs_1375, 1);
    }
    event_84_6_end: ;
}
// Function purpose: generated callback event_func_1925 processes event block(s) 85_6. Actions/conditions:
//        85_6: sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 5 more actions.
void Frames::event_func_1925()
{
    // event 85_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 5 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_85_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(287, str_obstaclelist4_958), str__96+((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_85_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 48, 16*(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))-75)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(0, loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(496, str_roof_obs_1375, 1);
    }
    event_85_6_end: ;
}
// Function purpose: generated callback event_func_1926 processes event block(s) 86_6. Actions/conditions:
//        86_6: sets Roof_Obs to 1; sets the selected object's layer to 5-1; draws the selected image or tile; plus 5
//        more actions.
void Frames::event_func_1926()
{
    // event 86_6 : sets Roof_Obs to 1; sets the selected object's layer to 5-1; draws the selected image or tile; plus 5 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_86_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(292, str_cuttablefences_969), str__96+((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_86_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) <= (25))) goto event_86_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(496, str_roof_obs_1375, 1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 0, (string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(0, loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        }
    }
    event_86_6_end: ;
}
// Function purpose: generated callback event_func_1927 processes event block(s) 87_6. Actions/conditions:
//        87_6: sets Roof_Obs to 1; sets the selected object's layer to 5-1; draws the selected image or tile; plus 5
//        more actions.
void Frames::event_func_1927()
{
    // event 87_6 : sets Roof_Obs to 1; sets the selected object's layer to 5-1; draws the selected image or tile; plus 5 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_87_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(292, str_cuttablefences_969), str__96+((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_87_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) > (25))) goto event_87_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(496, str_roof_obs_1375, 1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 48, 16*(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))-75)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(0, loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        }
    }
    event_87_6_end: ;
}
// Function purpose: generated callback event_func_1928 processes event block(s) 88_6. Actions/conditions:
//        88_6: sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_1928()
{
    // event 88_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_88_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) > (0))) goto event_88_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) <= (25))) goto event_88_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(496, str_roof_obs_1375)) == (0))) goto event_88_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 0, (string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))*16)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
    }
    event_88_6_end: ;
}
// Function purpose: generated callback event_func_1929 processes event block(s) 89_6. Actions/conditions:
//        89_6: sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_1929()
{
    // event 89_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_89_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) > (25))) goto event_89_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) <= (50))) goto event_89_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(496, str_roof_obs_1375)) == (0))) goto event_89_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 16, 16*(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))-25)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
    }
    event_89_6_end: ;
}
// Function purpose: generated callback event_func_1930 processes event block(s) 90_6. Actions/conditions:
//        90_6: sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_1930()
{
    // event 90_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_90_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) > (50))) goto event_90_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) <= (75))) goto event_90_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(496, str_roof_obs_1375)) == (0))) goto event_90_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 32, 16*(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))-50)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
    }
    event_90_6_end: ;
}
// Function purpose: generated callback event_func_1931 processes event block(s) 91_6. Actions/conditions:
//        91_6: sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_1931()
{
    // event 91_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_91_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) > (75))) goto event_91_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) <= (101))) goto event_91_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(496, str_roof_obs_1375)) == (0))) goto event_91_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 48, 16*(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))-75)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
    }
    event_91_6_end: ;
}
// Function purpose: generated callback event_func_1932 processes event block(s) 92_6. Actions/conditions:
//        92_6: enables flag -50 (legacy object-specific state; original label was not retained) on the selected
//        object.
void Frames::event_func_1932()
{
    // event 92_6 : enables flag -50 (legacy object-specific state; original label was not retained) on the selected object
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_92_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) != (43))) goto event_92_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) != (44))) goto event_92_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) != (45))) goto event_92_6_end;
        shady_348_instances.clear_selection();
        for (ObjectIterator it(shady_348_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (loop_load_x_index*16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16))) { it.deselect(); continue; }
        }
        if (!shady_348_instances.has_selection()) goto event_92_6_end;
        for (ObjectIterator it(shady_348_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(-50);
        }
    }
    event_92_6_end: ;
}
// Function purpose: generated callback event_func_1933 processes event block(s) 93_6. Actions/conditions:
//        93_6: sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 1 more actions.
void Frames::event_func_1933()
{
    // event 93_6 : sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 1 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_93_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(284, str_obstaclelist1_952), str__96+((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_93_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(1-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 0, (string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(498, str_ug_obs_1377, 1);
    }
    event_93_6_end: ;
}
// Function purpose: generated callback event_func_1934 processes event block(s) 94_6. Actions/conditions:
//        94_6: sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 1 more actions.
void Frames::event_func_1934()
{
    // event 94_6 : sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 1 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_94_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(285, str_obstaclelist2_954), str__96+((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_94_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(1-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 16, 16*(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))-25)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(498, str_ug_obs_1377, 1);
    }
    event_94_6_end: ;
}
// Function purpose: generated callback event_func_1935 processes event block(s) 95_6. Actions/conditions:
//        95_6: sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 1 more actions.
void Frames::event_func_1935()
{
    // event 95_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 1 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_95_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(286, str_obstaclelist3_956), str__96+((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_95_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 32, 16*(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))-50)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(496, str_roof_obs_1375, 1);
    }
    event_95_6_end: ;
}
// Function purpose: generated callback event_func_1936 processes event block(s) 96_6. Actions/conditions:
//        96_6: sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 1 more actions.
void Frames::event_func_1936()
{
    // event 96_6 : sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 1 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_96_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(287, str_obstaclelist4_958), str__96+((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_96_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(1-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 48, 16*(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))-75)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(498, str_ug_obs_1377, 1);
    }
    event_96_6_end: ;
}
// Function purpose: generated callback event_func_1937 processes event block(s) 97_6. Actions/conditions:
//        97_6: sets UG_Obs to 1; sets the selected object's layer to 1-1; draws the selected image or tile; plus 1
//        more actions.
void Frames::event_func_1937()
{
    // event 97_6 : sets UG_Obs to 1; sets the selected object's layer to 1-1; draws the selected image or tile; plus 1 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_97_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(292, str_cuttablefences_969), str__96+((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_97_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) <= (25))) goto event_97_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(498, str_ug_obs_1377, 1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(1-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 0, (string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 1);
    }
    event_97_6_end: ;
}
// Function purpose: generated callback event_func_1938 processes event block(s) 98_6. Actions/conditions:
//        98_6: sets UG_Obs to 1; sets the selected object's layer to 1-1; draws the selected image or tile; plus 1
//        more actions.
void Frames::event_func_1938()
{
    // event 98_6 : sets UG_Obs to 1; sets the selected object's layer to 1-1; draws the selected image or tile; plus 1 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_98_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(292, str_cuttablefences_969), str__96+((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_98_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) > (25))) goto event_98_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(498, str_ug_obs_1377, 1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(1-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 48, 16*(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))-75)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 1);
    }
    event_98_6_end: ;
}
// Function purpose: generated callback event_func_1939 processes event block(s) 99_6. Actions/conditions:
//        99_6: sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_1939()
{
    // event 99_6 : sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_99_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) > (0))) goto event_99_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) <= (25))) goto event_99_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(498, str_ug_obs_1377)) == (0))) goto event_99_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(1-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 0, (string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))*16)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 1);
    }
    event_99_6_end: ;
}
// Function purpose: generated callback event_func_1940 processes event block(s) 100_6. Actions/conditions:
//        100_6: sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_1940()
{
    // event 100_6 : sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_100_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) > (25))) goto event_100_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) <= (50))) goto event_100_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(498, str_ug_obs_1377)) == (0))) goto event_100_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(1-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 16, 16*(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))-25)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 1);
    }
    event_100_6_end: ;
}
// Function purpose: generated callback event_func_1941 processes event block(s) 101_6. Actions/conditions:
//        101_6: sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_1941()
{
    // event 101_6 : sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_101_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) > (50))) goto event_101_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) <= (75))) goto event_101_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(498, str_ug_obs_1377)) == (0))) goto event_101_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(1-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 32, 16*(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))-50)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 1);
    }
    event_101_6_end: ;
}
// Function purpose: generated callback event_func_1942 processes event block(s) 102_6. Actions/conditions:
//        102_6: sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_1942()
{
    // event 102_6 : sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_102_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) > (75))) goto event_102_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) <= (101))) goto event_102_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(498, str_ug_obs_1377)) == (0))) goto event_102_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(1-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 48, 16*(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))-75)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 1);
    }
    event_102_6_end: ;
}
// Function purpose: generated callback event_func_1943 processes event block(s) 103_6. Actions/conditions:
//        103_6: sets loop_load_x_index+1 to gameVariables->get_value(490, MapLoop)+1; sets
//        loop_load_x_index+1 to gameVariables->get_value(490, MapLoop)+1.
void Frames::event_func_1943()
{
    // event 103_6 : sets loop_load_x_index+1 to gameVariables->get_value(490, MapLoop)+1; sets loop_load_x_index+1 to gameVariables->get_value(490, MapLoop)+1
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_103_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(297, str_shadowcasters4_1029), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_103_6_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((loop_load_x_index+1), (((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1), 2)) == (0))) goto event_103_6_end;
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(7, loop_load_x_index+1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1, 2);
        }
        ((ArrayObject*)get_instance(tmparray_461_instances))->set_value(7, loop_load_x_index+1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1, 2);
    }
    event_103_6_end: ;
}
// Function purpose: generated callback event_func_1944 processes event block(s) 104_6. Actions/conditions:
//        104_6: sets loop_load_x_index+1 to gameVariables->get_value(490, MapLoop)+1; sets
//        loop_load_x_index+1 to gameVariables->get_value(490, MapLoop)+1.
void Frames::event_func_1944()
{
    // event 104_6 : sets loop_load_x_index+1 to gameVariables->get_value(490, MapLoop)+1; sets loop_load_x_index+1 to gameVariables->get_value(490, MapLoop)+1
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_104_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(288, str_shadowcasters_960), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_104_6_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((loop_load_x_index+1), (((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1), 2)) == (0))) goto event_104_6_end;
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(1, loop_load_x_index+1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1, 2);
        }
        ((ArrayObject*)get_instance(tmparray_461_instances))->set_value(1, loop_load_x_index+1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1, 2);
    }
    event_104_6_end: ;
}
// Function purpose: generated callback event_func_1945 processes event block(s) 105_6. Actions/conditions:
//        105_6: sets loop_load_x_index to gameVariables->get_value(490, MapLoop)+1.
void Frames::event_func_1945()
{
    // event 105_6 : sets loop_load_x_index to gameVariables->get_value(490, MapLoop)+1
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_105_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(289, str_shadowcasters2_962), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_105_6_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((loop_load_x_index), (((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1), 2)) == (0))) goto event_105_6_end;
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(2, loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1, 2);
        }
    }
    event_105_6_end: ;
}
// Function purpose: generated callback event_func_1946 processes event block(s) 106_6. Actions/conditions:
//        106_6: sets loop_load_x_index+1 to gameVariables->get_value(490, MapLoop).
void Frames::event_func_1946()
{
    // event 106_6 : sets loop_load_x_index+1 to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_106_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(290, str_shadowcasters3_964), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_106_6_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((loop_load_x_index+1), (((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)), 2)) == (0))) goto event_106_6_end;
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(3, loop_load_x_index+1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        }
    }
    event_106_6_end: ;
}
// Function purpose: generated callback event_func_1947 processes event block(s) 107_6. Actions/conditions:
//        107_6: sets loop_load_x_index+1 to gameVariables->get_value(490, MapLoop).
void Frames::event_func_1947()
{
    // event 107_6 : sets loop_load_x_index+1 to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_107_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(290, str_shadowcasters3_964), str__96+((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_107_6_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((loop_load_x_index+1), (((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)), 5)) == (0))) goto event_107_6_end;
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(6, loop_load_x_index+1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        }
    }
    event_107_6_end: ;
}
// Function purpose: generated callback event_func_1948 processes event block(s) 108_6. Actions/conditions:
//        108_6: sets loop_load_x_index to gameVariables->get_value(490, MapLoop)+1.
void Frames::event_func_1948()
{
    // event 108_6 : sets loop_load_x_index to gameVariables->get_value(490, MapLoop)+1
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_108_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(289, str_shadowcasters2_962), str__96+((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_108_6_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((loop_load_x_index), (((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1), 5)) == (0))) goto event_108_6_end;
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(5, loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1, 5);
        }
    }
    event_108_6_end: ;
}
// Function purpose: generated callback event_func_1949 processes event block(s) 109_6. Actions/conditions:
//        109_6: sets loop_load_x_index+1 to gameVariables->get_value(490, MapLoop)+1.
void Frames::event_func_1949()
{
    // event 109_6 : sets loop_load_x_index+1 to gameVariables->get_value(490, MapLoop)+1
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_109_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(288, str_shadowcasters_960), str__96+((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_109_6_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((loop_load_x_index+1), (((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1), 5)) == (0))) goto event_109_6_end;
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(4, loop_load_x_index+1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1, 5);
        }
    }
    event_109_6_end: ;
}
// Function purpose: generated callback event_func_1950 processes event block(s) 110_6. Actions/conditions:
//        110_6: changes a stored game value.
void Frames::event_func_1950()
{
    // event 110_6 : changes a stored game value
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_110_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)) == (str_0_615))) goto event_110_6_end;
        counter_4_instances.clear_selection();
        for (ObjectIterator it(counter_4_instances); !it.end(); ++it) {
            ((Counter*)*it)->add(1);
        }
    }
    event_110_6_end: ;
}
// Function purpose: generated callback event_func_1951 processes event block(s) 112_6. Actions/conditions:
//        112_6: sets currTile to string_to_number(stringtokenizer_81->get(loop_load_x_index)).
void Frames::event_func_1951()
{
    // event 112_6 : sets currTile to string_to_number(stringtokenizer_81->get(loop_load_x_index))
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_112_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(499, str_currtile_1378, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)));
    }
    event_112_6_end: ;
}
// Function purpose: generated callback event_func_1952 processes event block(s) 113_6. Actions/conditions:
//        113_6: sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 5 more actions.
void Frames::event_func_1952()
{
    // event 113_6 : sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 5 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_113_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(302, str_obstaclelist_1077), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(499, str_currtile_1378))+str__96, 0)) != (-1))) goto event_113_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, get_floor((((AssociateArray*)get_instance(gameVariables_instances))->get_value(499, str_currtile_1378)/MathHelper()/25)*16), ((((AssociateArray*)get_instance(gameVariables_instances))->get_value(499, str_currtile_1378)%MathHelper()%25)-1)*16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(499, str_currtile_1378), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(494, str_ground_obs_1373, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(497, str_obs_1376, 1);
        {
            loop_make_layer7_block_running = true;
            int times = int(1);
            loop_make_layer7_block_index = 0;
            while (loop_make_layer7_block_index < times) {
                loop_make_layer7_block_6();
                if (!loop_make_layer7_block_running) break;
                loop_make_layer7_block_index++;
            }
        }
        {
            loop_check_shad_override_running = true;
            int times = int(1);
            loop_check_shad_override_index = 0;
            while (loop_check_shad_override_index < times) {
                loop_check_shad_override_6();
                if (!loop_check_shad_override_running) break;
                loop_check_shad_override_index++;
            }
        }
    }
    event_113_6_end: ;
}
// Function purpose: generated callback event_func_1953 processes event block(s) 117_6. Actions/conditions:
//        117_6: sets Ground_Obs to 1; sets the selected object's layer to 2-1; draws the selected image or tile; plus
//        9 more actions.
void Frames::event_func_1953()
{
    // event 117_6 : sets Ground_Obs to 1; sets the selected object's layer to 2-1; draws the selected image or tile; plus 9 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_117_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(292, str_cuttablefences_969), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_117_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))) <= (25))) goto event_117_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(494, str_ground_obs_1373, 1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 0, (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        mapsetupobstaclemarker_323_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_mapsetupobstaclemarker_323(0, 0), 1);
            mapsetupobstaclemarker_323_instances.add_back();
        }
        for (ObjectIterator it(mapsetupobstaclemarker_323_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(loop_load_x_index*16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16);
            ((Active*)*it)->alterables->flags.enable(100);
        }
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(0, loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        }
    }
    event_117_6_end: ;
}
// Function purpose: generated callback event_func_1954 processes event block(s) 118_6. Actions/conditions:
//        118_6: sets Ground_Obs to 1; sets the selected object's layer to 2-1; draws the selected image or tile; plus
//        9 more actions.
void Frames::event_func_1954()
{
    // event 118_6 : sets Ground_Obs to 1; sets the selected object's layer to 2-1; draws the selected image or tile; plus 9 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_118_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(292, str_cuttablefences_969), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_118_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))) == (56))) goto event_118_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(494, str_ground_obs_1373, 1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 32, 16*(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))-50)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        mapsetupobstaclemarker_323_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_mapsetupobstaclemarker_323(0, 0), 1);
            mapsetupobstaclemarker_323_instances.add_back();
        }
        for (ObjectIterator it(mapsetupobstaclemarker_323_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(loop_load_x_index*16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16);
            ((Active*)*it)->alterables->flags.enable(100);
        }
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(0, loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        }
    }
    event_118_6_end: ;
}
// Function purpose: generated callback event_func_1955 processes event block(s) 119_6. Actions/conditions:
//        119_6: sets Ground_Obs to 1; sets the selected object's layer to 2-1; draws the selected image or tile; plus
//        9 more actions.
void Frames::event_func_1955()
{
    // event 119_6 : sets Ground_Obs to 1; sets the selected object's layer to 2-1; draws the selected image or tile; plus 9 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_119_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(292, str_cuttablefences_969), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_119_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))) > (25))) goto event_119_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))) != (56))) goto event_119_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(494, str_ground_obs_1373, 1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 48, 16*(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index))-75)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        mapsetupobstaclemarker_323_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_mapsetupobstaclemarker_323(0, 0), 1);
            mapsetupobstaclemarker_323_instances.add_back();
        }
        for (ObjectIterator it(mapsetupobstaclemarker_323_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(loop_load_x_index*16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16);
            ((Active*)*it)->alterables->flags.enable(100);
        }
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(0, loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        }
    }
    event_119_6_end: ;
}
// Function purpose: generated callback event_func_1956 processes event block(s) 120_6. Actions/conditions:
//        120_6: sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_1956()
{
    // event 120_6 : sets the selected object's layer to 2-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_120_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(494, str_ground_obs_1373)) == (0))) goto event_120_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, get_floor((((AssociateArray*)get_instance(gameVariables_instances))->get_value(499, str_currtile_1378)/MathHelper()/25)*16), ((((AssociateArray*)get_instance(gameVariables_instances))->get_value(499, str_currtile_1378)%MathHelper()%25)-1)*16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(499, str_currtile_1378), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
    }
    event_120_6_end: ;
}
// Function purpose: generated callback event_func_1957 processes event block(s) 121_6. Actions/conditions:
//        121_6: sets the selected object's layer to 4-1; draws the selected image or tile; splits saved text into
//        fields; plus 1 more actions.
void Frames::event_func_1957()
{
    // event 121_6 : sets the selected object's layer to 4-1; draws the selected image or tile; splits saved text into fields; plus 1 more actions
    bool or_result_121_6 = false;
    bool or_temp_result_121_6_0 = false;
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto or_event_121_6_0_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))) >= (28))) goto or_event_121_6_0_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))) <= (31))) goto or_event_121_6_0_end;
        or_result_121_6 = true;
        or_temp_result_121_6_0 = true;
    }
    or_event_121_6_0_end: ;
    // event 121_6 : sets the selected object's layer to 4-1; draws the selected image or tile; splits saved text into fields; plus 1 more actions
    bool or_temp_result_121_6_1 = false;
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto or_event_121_6_1_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))) == (41))) goto or_event_121_6_1_end;
        or_result_121_6 = true;
        or_temp_result_121_6_1 = true;
    }
    or_event_121_6_1_end: ;
    // event 121_6 : sets the selected object's layer to 4-1; draws the selected image or tile; splits saved text into fields; plus 1 more actions
    bool or_temp_result_121_6_2 = false;
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto or_event_121_6_2_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))) == (42))) goto or_event_121_6_2_end;
        or_result_121_6 = true;
        or_temp_result_121_6_2 = true;
        or_event_121_6_2_end: ;
        if (!or_result_121_6) goto or_final_or_event_121_6_2_end;
        activepicture_160_instances.clear_selection();
        for (ObjectIterator it(activepicture_160_instances); !it.end(); ++it) {
            ((ActivePicture*)*it)->set_layer(4-1);
            ((ActivePicture*)*it)->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(490, str_maploop_1369)*16, 16, ((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances, it.current_index))->get(loop_load_x_index))-25)*16)-16, 16, 16, 1);
        }
        groundTiles_instances.clear_selection();
        for (ObjectIterator it(groundTiles_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances, it.current_index))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(490, str_maploop_1369), 4);
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(495, str_vent_obs_1374, 1);
        }
    }
    or_final_or_event_121_6_2_end: ;
}
// Function purpose: generated callback event_func_1958 processes event block(s) 122_6. Actions/conditions:
//        122_6: sets the selected object's layer to 4-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_1958()
{
    // event 122_6 : sets the selected object's layer to 4-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_122_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))) > (0))) goto event_122_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))) <= (25))) goto event_122_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(495, str_vent_obs_1374)) == (0))) goto event_122_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(4-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 0, (string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))*16)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 4);
    }
    event_122_6_end: ;
}
// Function purpose: generated callback event_func_1959 processes event block(s) 123_6. Actions/conditions:
//        123_6: sets the selected object's layer to 4-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_1959()
{
    // event 123_6 : sets the selected object's layer to 4-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_123_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))) > (25))) goto event_123_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(495, str_vent_obs_1374)) == (0))) goto event_123_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(4-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 16, ((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))-25)*16)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 4);
    }
    event_123_6_end: ;
}
// Function purpose: generated callback event_func_1960 processes event block(s) 124_6. Actions/conditions:
//        124_6: sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 5 more actions.
void Frames::event_func_1960()
{
    // event 124_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 5 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_124_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(284, str_obstaclelist1_952), str__96+((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_124_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 0, (string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(0, loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(496, str_roof_obs_1375, 1);
    }
    event_124_6_end: ;
}
// Function purpose: generated callback event_func_1961 processes event block(s) 125_6. Actions/conditions:
//        125_6: sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 5 more actions.
void Frames::event_func_1961()
{
    // event 125_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 5 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_125_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(285, str_obstaclelist2_954), str__96+((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_125_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 16, 16*(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))-25)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(0, loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(496, str_roof_obs_1375, 1);
    }
    event_125_6_end: ;
}
// Function purpose: generated callback event_func_1962 processes event block(s) 126_6. Actions/conditions:
//        126_6: sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 5 more actions.
void Frames::event_func_1962()
{
    // event 126_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 5 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_126_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(286, str_obstaclelist3_956), str__96+((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_126_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 32, 16*(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))-50)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(0, loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(496, str_roof_obs_1375, 1);
    }
    event_126_6_end: ;
}
// Function purpose: generated callback event_func_1963 processes event block(s) 127_6. Actions/conditions:
//        127_6: sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 5 more actions.
void Frames::event_func_1963()
{
    // event 127_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 5 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_127_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(287, str_obstaclelist4_958), str__96+((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_127_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 48, 16*(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))-75)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(0, loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(496, str_roof_obs_1375, 1);
    }
    event_127_6_end: ;
}
// Function purpose: generated callback event_func_1964 processes event block(s) 128_6. Actions/conditions:
//        128_6: sets Roof_Obs to 1; sets the selected object's layer to 5-1; draws the selected image or tile; plus 5
//        more actions.
void Frames::event_func_1964()
{
    // event 128_6 : sets Roof_Obs to 1; sets the selected object's layer to 5-1; draws the selected image or tile; plus 5 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_128_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(292, str_cuttablefences_969), str__96+((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_128_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) <= (25))) goto event_128_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(496, str_roof_obs_1375, 1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 0, (string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(0, loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        }
    }
    event_128_6_end: ;
}
// Function purpose: generated callback event_func_1965 processes event block(s) 129_6. Actions/conditions:
//        129_6: sets Roof_Obs to 1; sets the selected object's layer to 5-1; draws the selected image or tile; plus 5
//        more actions.
void Frames::event_func_1965()
{
    // event 129_6 : sets Roof_Obs to 1; sets the selected object's layer to 5-1; draws the selected image or tile; plus 5 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_129_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(292, str_cuttablefences_969), str__96+((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_129_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) > (25))) goto event_129_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(496, str_roof_obs_1375, 1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 48, 16*(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))-75)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(0, loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        }
    }
    event_129_6_end: ;
}
// Function purpose: generated callback event_func_1966 processes event block(s) 130_6. Actions/conditions:
//        130_6: sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_1966()
{
    // event 130_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_130_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) > (0))) goto event_130_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) <= (25))) goto event_130_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(496, str_roof_obs_1375)) == (0))) goto event_130_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 0, (string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))*16)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
    }
    event_130_6_end: ;
}
// Function purpose: generated callback event_func_1967 processes event block(s) 131_6. Actions/conditions:
//        131_6: sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_1967()
{
    // event 131_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_131_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) > (25))) goto event_131_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) <= (50))) goto event_131_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(496, str_roof_obs_1375)) == (0))) goto event_131_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 16, 16*(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))-25)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
    }
    event_131_6_end: ;
}
// Function purpose: generated callback event_func_1968 processes event block(s) 132_6. Actions/conditions:
//        132_6: sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_1968()
{
    // event 132_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_132_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) > (50))) goto event_132_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) <= (75))) goto event_132_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(496, str_roof_obs_1375)) == (0))) goto event_132_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 32, 16*(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))-50)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
    }
    event_132_6_end: ;
}
// Function purpose: generated callback event_func_1969 processes event block(s) 133_6. Actions/conditions:
//        133_6: sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_1969()
{
    // event 133_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_133_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) > (75))) goto event_133_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) <= (101))) goto event_133_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(496, str_roof_obs_1375)) == (0))) goto event_133_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 48, 16*(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))-75)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
    }
    event_133_6_end: ;
}
// Function purpose: generated callback event_func_1970 processes event block(s) 134_6. Actions/conditions:
//        134_6: enables flag -50 (legacy object-specific state; original label was not retained) on the selected
//        object.
void Frames::event_func_1970()
{
    // event 134_6 : enables flag -50 (legacy object-specific state; original label was not retained) on the selected object
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_134_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) != (43))) goto event_134_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) != (44))) goto event_134_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) != (45))) goto event_134_6_end;
        shady_348_instances.clear_selection();
        for (ObjectIterator it(shady_348_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (loop_load_x_index*16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16))) { it.deselect(); continue; }
        }
        if (!shady_348_instances.has_selection()) goto event_134_6_end;
        for (ObjectIterator it(shady_348_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(-50);
        }
    }
    event_134_6_end: ;
}
// Function purpose: generated callback event_func_1971 processes event block(s) 135_6. Actions/conditions:
//        135_6: sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 1 more actions.
void Frames::event_func_1971()
{
    // event 135_6 : sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 1 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_135_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(284, str_obstaclelist1_952), str__96+((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_135_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(1-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 0, (string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(498, str_ug_obs_1377, 1);
    }
    event_135_6_end: ;
}
// Function purpose: generated callback event_func_1972 processes event block(s) 136_6. Actions/conditions:
//        136_6: sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 1 more actions.
void Frames::event_func_1972()
{
    // event 136_6 : sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 1 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_136_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(285, str_obstaclelist2_954), str__96+((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_136_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(1-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 16, 16*(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))-25)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(498, str_ug_obs_1377, 1);
    }
    event_136_6_end: ;
}
// Function purpose: generated callback event_func_1973 processes event block(s) 137_6. Actions/conditions:
//        137_6: sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 1 more actions.
void Frames::event_func_1973()
{
    // event 137_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 1 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_137_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(286, str_obstaclelist3_956), str__96+((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_137_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 32, 16*(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))-50)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(496, str_roof_obs_1375, 1);
    }
    event_137_6_end: ;
}
// Function purpose: generated callback event_func_1974 processes event block(s) 138_6. Actions/conditions:
//        138_6: sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 1 more actions.
void Frames::event_func_1974()
{
    // event 138_6 : sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 1 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_138_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(287, str_obstaclelist4_958), str__96+((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_138_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(1-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 48, 16*(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))-75)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(498, str_ug_obs_1377, 1);
    }
    event_138_6_end: ;
}
// Function purpose: generated callback event_func_1975 processes event block(s) 139_6. Actions/conditions:
//        139_6: sets UG_Obs to 1; sets the selected object's layer to 1-1; draws the selected image or tile; plus 1
//        more actions.
void Frames::event_func_1975()
{
    // event 139_6 : sets UG_Obs to 1; sets the selected object's layer to 1-1; draws the selected image or tile; plus 1 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_139_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(292, str_cuttablefences_969), str__96+((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_139_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) <= (25))) goto event_139_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(498, str_ug_obs_1377, 1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(1-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 0, (string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 1);
    }
    event_139_6_end: ;
}
// Function purpose: generated callback event_func_1976 processes event block(s) 140_6. Actions/conditions:
//        140_6: sets UG_Obs to 1; sets the selected object's layer to 1-1; draws the selected image or tile; plus 1
//        more actions.
void Frames::event_func_1976()
{
    // event 140_6 : sets UG_Obs to 1; sets the selected object's layer to 1-1; draws the selected image or tile; plus 1 more actions
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_140_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(292, str_cuttablefences_969), str__96+((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_140_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) > (25))) goto event_140_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(498, str_ug_obs_1377, 1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(1-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 48, 16*(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))-75)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 1);
    }
    event_140_6_end: ;
}
// Function purpose: generated callback event_func_1977 processes event block(s) 141_6. Actions/conditions:
//        141_6: sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_1977()
{
    // event 141_6 : sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_141_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) > (0))) goto event_141_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) <= (25))) goto event_141_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(498, str_ug_obs_1377)) == (0))) goto event_141_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(1-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 0, (string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))*16)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 1);
    }
    event_141_6_end: ;
}
// Function purpose: generated callback event_func_1978 processes event block(s) 142_6. Actions/conditions:
//        142_6: sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_1978()
{
    // event 142_6 : sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_142_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) > (25))) goto event_142_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) <= (50))) goto event_142_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(498, str_ug_obs_1377)) == (0))) goto event_142_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(1-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 16, 16*(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))-25)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 1);
    }
    event_142_6_end: ;
}
// Function purpose: generated callback event_func_1979 processes event block(s) 143_6. Actions/conditions:
//        143_6: sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_1979()
{
    // event 143_6 : sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_143_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) > (50))) goto event_143_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) <= (75))) goto event_143_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(498, str_ug_obs_1377)) == (0))) goto event_143_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(1-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 32, 16*(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))-50)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 1);
    }
    event_143_6_end: ;
}
// Function purpose: generated callback event_func_1980 processes event block(s) 144_6. Actions/conditions:
//        144_6: sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_1980()
{
    // event 144_6 : sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_144_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) > (75))) goto event_144_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) <= (101))) goto event_144_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(498, str_ug_obs_1377)) == (0))) goto event_144_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(1-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 48, 16*(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))-75)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 1);
    }
    event_144_6_end: ;
}
// Function purpose: generated callback event_func_1981 processes event block(s) 145_6. Actions/conditions:
//        145_6: sets loop_load_x_index+1 to gameVariables->get_value(490, MapLoop)+1; sets
//        loop_load_x_index+1 to gameVariables->get_value(490, MapLoop)+1.
void Frames::event_func_1981()
{
    // event 145_6 : sets loop_load_x_index+1 to gameVariables->get_value(490, MapLoop)+1; sets loop_load_x_index+1 to gameVariables->get_value(490, MapLoop)+1
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_145_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(288, str_shadowcasters_960), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_145_6_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((loop_load_x_index+1), (((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1), 2)) == (0))) goto event_145_6_end;
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(1, loop_load_x_index+1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1, 2);
        }
        ((ArrayObject*)get_instance(tmparray_461_instances))->set_value(1, loop_load_x_index+1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1, 2);
    }
    event_145_6_end: ;
}
// Function purpose: generated callback event_func_1982 processes event block(s) 146_6. Actions/conditions:
//        146_6: sets loop_load_x_index to gameVariables->get_value(490, MapLoop)+1.
void Frames::event_func_1982()
{
    // event 146_6 : sets loop_load_x_index to gameVariables->get_value(490, MapLoop)+1
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_146_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(289, str_shadowcasters2_962), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_146_6_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((loop_load_x_index), (((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1), 2)) == (0))) goto event_146_6_end;
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(2, loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1, 2);
        }
    }
    event_146_6_end: ;
}
// Function purpose: generated callback event_func_1983 processes event block(s) 147_6. Actions/conditions:
//        147_6: sets loop_load_x_index+1 to gameVariables->get_value(490, MapLoop).
void Frames::event_func_1983()
{
    // event 147_6 : sets loop_load_x_index+1 to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_147_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(290, str_shadowcasters3_964), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_147_6_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((loop_load_x_index+1), (((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)), 2)) == (0))) goto event_147_6_end;
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(3, loop_load_x_index+1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        }
    }
    event_147_6_end: ;
}
// Function purpose: generated callback event_func_1984 processes event block(s) 148_6. Actions/conditions:
//        148_6: sets loop_load_x_index+1 to gameVariables->get_value(490, MapLoop).
void Frames::event_func_1984()
{
    // event 148_6 : sets loop_load_x_index+1 to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_148_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(290, str_shadowcasters3_964), str__96+((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_148_6_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((loop_load_x_index+1), (((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)), 5)) == (0))) goto event_148_6_end;
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(6, loop_load_x_index+1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        }
    }
    event_148_6_end: ;
}
// Function purpose: generated callback event_func_1985 processes event block(s) 149_6. Actions/conditions:
//        149_6: sets loop_load_x_index to gameVariables->get_value(490, MapLoop)+1.
void Frames::event_func_1985()
{
    // event 149_6 : sets loop_load_x_index to gameVariables->get_value(490, MapLoop)+1
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_149_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(289, str_shadowcasters2_962), str__96+((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_149_6_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((loop_load_x_index), (((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1), 5)) == (0))) goto event_149_6_end;
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(5, loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1, 5);
        }
    }
    event_149_6_end: ;
}
// Function purpose: generated callback event_func_1986 processes event block(s) 150_6. Actions/conditions:
//        150_6: sets loop_load_x_index+1 to gameVariables->get_value(490, MapLoop)+1.
void Frames::event_func_1986()
{
    // event 150_6 : sets loop_load_x_index+1 to gameVariables->get_value(490, MapLoop)+1
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_150_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(288, str_shadowcasters_960), str__96+((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_150_6_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((loop_load_x_index+1), (((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1), 5)) == (0))) goto event_150_6_end;
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(4, loop_load_x_index+1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1, 5);
        }
    }
    event_150_6_end: ;
}
void Frames::loop_load_x_6()
{
    event_func_1898();
    event_func_1899();
    event_func_1900();
    event_func_1901();
    event_func_1902();
    event_func_1903();
    event_func_1904();
    event_func_1905();
    event_func_1906();
    event_func_1907();
    event_func_1908();
    event_func_1909();
    event_func_1910();
    event_func_1911();
    event_func_1912();
    event_func_1913();
    event_func_1914();
    event_func_1915();
    event_func_1916();
    event_func_1917();
    event_func_1918();
    event_func_1919();
    event_func_1920();
    event_func_1921();
    event_func_1922();
    event_func_1923();
    event_func_1924();
    event_func_1925();
    event_func_1926();
    event_func_1927();
    event_func_1928();
    event_func_1929();
    event_func_1930();
    event_func_1931();
    event_func_1932();
    event_func_1933();
    event_func_1934();
    event_func_1935();
    event_func_1936();
    event_func_1937();
    event_func_1938();
    event_func_1939();
    event_func_1940();
    event_func_1941();
    event_func_1942();
    event_func_1943();
    event_func_1944();
    event_func_1945();
    event_func_1946();
    event_func_1947();
    event_func_1948();
    event_func_1949();
    event_func_1950();
    event_func_1951();
    event_func_1952();
    event_func_1953();
    event_func_1954();
    event_func_1955();
    event_func_1956();
    event_func_1957();
    event_func_1958();
    event_func_1959();
    event_func_1960();
    event_func_1961();
    event_func_1962();
    event_func_1963();
    event_func_1964();
    event_func_1965();
    event_func_1966();
    event_func_1967();
    event_func_1968();
    event_func_1969();
    event_func_1970();
    event_func_1971();
    event_func_1972();
    event_func_1973();
    event_func_1974();
    event_func_1975();
    event_func_1976();
    event_func_1977();
    event_func_1978();
    event_func_1979();
    event_func_1980();
    event_func_1981();
    event_func_1982();
    event_func_1983();
    event_func_1984();
    event_func_1985();
    event_func_1986();
}
// Function purpose: generated callback event_func_1987 processes event block(s) 4173_6. Actions/conditions:
//        4173_6: stores an integer value; stores player data.
void Frames::event_func_1987()
{
    // event 4173_6 : stores an integer value; stores player data
    {
        if (!((global_values->get(16)) == (1))) goto event_4173_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->set_int(str_favours_1379, ((SteamObject*)get_instance(steamworks2_469_instances))->get_int(str_favours_1379)+1);
        ((SteamObject*)get_instance(steamworks2_469_instances))->store_user_data();
    }
    event_4173_6_end: ;
}
void Frames::loop_favour_complete_6()
{
    event_func_1987();
}
// Function purpose: generated callback event_func_1988 processes event block(s) 3861_6. Actions/conditions:
//        3861_6: splits saved text into fields.
void Frames::event_func_1988()
{
    // event 3861_6 : splits saved text into fields
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3861_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((ListObject*)get_instance(missions_298_instances))->get_line(loop_check_give_mission_index+1), str__254);
    }
    event_3861_6_end: ;
}
// Function purpose: generated callback event_func_1989 processes event block(s) 3862_6. Actions/conditions:
//        3862_6: increments Score_P by 10; changes a stored game value; increments Cash by
//        string_to_number(stringtokenizer_81->get(4)); plus 27 more actions.
void Frames::event_func_1989()
{
    // event 3862_6 : increments Score_P by 10; changes a stored game value; increments Cash by string_to_number(stringtokenizer_81->get(4)); plus 27 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3862_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_give_1268))) goto event_3862_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)) == (number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(500, str_chara_1380))))) goto event_3862_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)) == (number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(501, str_gaveitemid_1381))))) goto event_3862_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(500, str_chara_1380)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3862_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(418, str_score_p_1236, 10);
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 15);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(219, str_cash_11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(220, str_hsac_827, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(219, str_cash_11)*2);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(12);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_45_1275));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_name_693, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_payout_1382, str__1132+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)));
        dialogBodyText_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dialogBodyText(0, 0), 5);
            dialogBodyText_instances.add_back();
        }
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            if (parent == NULL) goto pos_end_3862_6_1;
            ((Text*)*it)->set_global_position(parent->get_x() + -110, parent->get_y() + -18);
            pos_end_3862_6_1: ;
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
        FrameObject * single_instance_3862_6_3; single_instance_3862_6_3 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 28, parent->y + 20), parent->layer);
                if (single_instance_3862_6_3 == NULL)
                    single_instance_3862_6_3 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3862_6_3))->force_animation(28);
        FrameObject * single_instance_3862_6_4; single_instance_3862_6_4 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_3862_6_3)->x + 3, ((Active*)single_instance_3862_6_3)->y + 3), ((Active*)single_instance_3862_6_3)->layer);
            if (single_instance_3862_6_4 == NULL)
                single_instance_3862_6_4 = new_obj;
        }
        ((Text*)((Text*)single_instance_3862_6_4))->blend_color.set(Color(98, 154, 3));
        ((Text*)((Text*)single_instance_3862_6_4))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_pausemenu_1094, str_1_97)));
        ((ListObject*)get_instance(missions_298_instances))->delete_line(loop_check_give_mission_index+1);
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
            loop_check_give_mission_running = false;
    
        media.play_id(SOUND_ACCOLADE_9, 1-1);
    }
    event_3862_6_end: ;
}
void Frames::loop_check_give_mission_6()
{
    event_func_1988();
    event_func_1989();
}
// Function purpose: generated callback event_func_1990 processes event block(s) 3923_6. Actions/conditions:
//        3923_6: sets a game or interface text string.
void Frames::event_func_1990()
{
    // event 3923_6 : sets a game or interface text string
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3923_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inv_512+number_to_string(loop_return_give_item_index+1))) == (empty_string))) goto event_3923_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(loop_return_give_item_index+1), ((AssociateArray*)get_instance(gameVariables_instances))->get_string(502, str_give_item_1383));
            loop_return_give_item_running = false;
    
    }
    event_3923_6_end: ;
}
void Frames::loop_return_give_item_6()
{
    event_func_1990();
}
// Function purpose: generated callback event_func_1991 processes event block(s) 3920_6. Actions/conditions:
//        3920_6: removes the selected object.
void Frames::event_func_1991()
{
    // event 3920_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3920_6_end;
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        givecash_261_instances.clear_selection();
        for (ObjectIterator it(givecash_261_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        buttontext_445_instances.clear_selection();
        for (ObjectIterator it(buttontext_445_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_3920_6_end: ;
}
// Function purpose: generated callback event_func_1992 processes event block(s) 3921_6. Actions/conditions:
//        3921_6: removes the selected object.
void Frames::event_func_1992()
{
    // event 3921_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3921_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_give_1349))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3921_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3921_6_end: ;
}
// Function purpose: generated callback event_func_1993 processes event block(s) 3922_6. Actions/conditions:
//        3922_6: sets a game or interface text string; sets give_item to gameVariables->get_string(475,
//        newGiveItem); removes the selected object.
void Frames::event_func_1993()
{
    // event 3922_6 : sets a game or interface text string; sets give_item to gameVariables->get_string(475, newGiveItem); removes the selected object
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3922_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_give_1349))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3922_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(502, str_give_item_1383, number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(502, str_give_item_1383, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(475, str_newgiveitem_1350));
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        {
            loop_return_give_item_running = true;
            int times = int(6);
            loop_return_give_item_index = 0;
            while (loop_return_give_item_index < times) {
                loop_return_give_item_6();
                if (!loop_return_give_item_running) break;
                loop_return_give_item_index++;
            }
        }
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_refresh_inv_running = true;
            int times = int(6);
            loop_refresh_inv_index = 0;
            while (loop_refresh_inv_index < times) {
                loop_refresh_inv_6();
                if (!loop_refresh_inv_running) break;
                loop_refresh_inv_index++;
            }
        }
    }
    event_3922_6_end: ;
}
// Function purpose: generated callback event_func_1994 processes event block(s) 3924_6. Actions/conditions:
//        3924_6: removes the selected object.
void Frames::event_func_1994()
{
    // event 3924_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3924_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_weapon_1384))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3924_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3924_6_end: ;
}
