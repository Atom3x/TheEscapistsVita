#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"
#include "aliases.h"

// Function purpose: generated callback event_func_5609 processes event block(s) 29_11. Actions/conditions:
//        29_11: sets the selected object's layer to 4-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_5609()
{
    // event 29_11 : sets the selected object's layer to 4-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1)) goto event_29_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))) > (0))) goto event_29_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))) <= (25))) goto event_29_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(495, str_vent_obs_1374)) == (0))) goto event_29_11_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(4-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 0, (string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))*16)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 4);
    }
    event_29_11_end: ;
}
// Function purpose: generated callback event_func_5610 processes event block(s) 30_11. Actions/conditions:
//        30_11: sets the selected object's layer to 4-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_5610()
{
    // event 30_11 : sets the selected object's layer to 4-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1)) goto event_30_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))) > (25))) goto event_30_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(495, str_vent_obs_1374)) == (0))) goto event_30_11_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(4-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 16, ((string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index))-25)*16)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(ventTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 4);
    }
    event_30_11_end: ;
}
// Function purpose: generated callback event_func_5611 processes event block(s) 31_11. Actions/conditions:
//        31_11: sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 1 more actions.
void Frames::event_func_5611()
{
    // event 31_11 : sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 1 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_31_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(284, str_obstaclelist1_952), str__96+((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_31_11_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 0, (string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(496, str_roof_obs_1375, 1);
    }
    event_31_11_end: ;
}
// Function purpose: generated callback event_func_5612 processes event block(s) 32_11. Actions/conditions:
//        32_11: sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 1 more actions.
void Frames::event_func_5612()
{
    // event 32_11 : sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 1 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_32_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(285, str_obstaclelist2_954), str__96+((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_32_11_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 16, 16*(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))-25)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(496, str_roof_obs_1375, 1);
    }
    event_32_11_end: ;
}
// Function purpose: generated callback event_func_5613 processes event block(s) 33_11. Actions/conditions:
//        33_11: sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 1 more actions.
void Frames::event_func_5613()
{
    // event 33_11 : sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 1 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_33_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(286, str_obstaclelist3_956), str__96+((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_33_11_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 32, 16*(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))-50)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(496, str_roof_obs_1375, 1);
    }
    event_33_11_end: ;
}
// Function purpose: generated callback event_func_5614 processes event block(s) 34_11. Actions/conditions:
//        34_11: sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 1 more actions.
void Frames::event_func_5614()
{
    // event 34_11 : sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 1 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_34_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(287, str_obstaclelist4_958), str__96+((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_34_11_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 48, 16*(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))-75)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(496, str_roof_obs_1375, 1);
    }
    event_34_11_end: ;
}
// Function purpose: generated callback event_func_5615 processes event block(s) 35_11. Actions/conditions:
//        35_11: sets Roof_Obs to 1; sets the selected object's layer to 5-1; draws the selected image or tile; plus 1
//        more actions.
void Frames::event_func_5615()
{
    // event 35_11 : sets Roof_Obs to 1; sets the selected object's layer to 5-1; draws the selected image or tile; plus 1 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_35_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(292, str_cuttablefences_969), str__96+((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_35_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) <= (25))) goto event_35_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(496, str_roof_obs_1375, 1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 0, (string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
    }
    event_35_11_end: ;
}
// Function purpose: generated callback event_func_5616 processes event block(s) 36_11. Actions/conditions:
//        36_11: sets Roof_Obs to 1; sets the selected object's layer to 5-1; draws the selected image or tile; plus 1
//        more actions.
void Frames::event_func_5616()
{
    // event 36_11 : sets Roof_Obs to 1; sets the selected object's layer to 5-1; draws the selected image or tile; plus 1 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_36_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(292, str_cuttablefences_969), str__96+((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_36_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) > (25))) goto event_36_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(496, str_roof_obs_1375, 1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 48, 16*(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))-75)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
    }
    event_36_11_end: ;
}
// Function purpose: generated callback event_func_5617 processes event block(s) 37_11. Actions/conditions:
//        37_11: sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_5617()
{
    // event 37_11 : sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1)) goto event_37_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) > (0))) goto event_37_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) <= (25))) goto event_37_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(496, str_roof_obs_1375)) == (0))) goto event_37_11_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 0, (string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))*16)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
    }
    event_37_11_end: ;
}
// Function purpose: generated callback event_func_5618 processes event block(s) 38_11. Actions/conditions:
//        38_11: sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_5618()
{
    // event 38_11 : sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1)) goto event_38_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) > (25))) goto event_38_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) <= (50))) goto event_38_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(496, str_roof_obs_1375)) == (0))) goto event_38_11_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 16, 16*(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))-25)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
    }
    event_38_11_end: ;
}
// Function purpose: generated callback event_func_5619 processes event block(s) 39_11. Actions/conditions:
//        39_11: sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_5619()
{
    // event 39_11 : sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1)) goto event_39_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) > (50))) goto event_39_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) <= (75))) goto event_39_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(496, str_roof_obs_1375)) == (0))) goto event_39_11_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 32, 16*(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))-50)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
    }
    event_39_11_end: ;
}
// Function purpose: generated callback event_func_5620 processes event block(s) 40_11. Actions/conditions:
//        40_11: sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_5620()
{
    // event 40_11 : sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1)) goto event_40_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) > (75))) goto event_40_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) <= (101))) goto event_40_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(496, str_roof_obs_1375)) == (0))) goto event_40_11_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 48, 16*(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))-75)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
    }
    event_40_11_end: ;
}
// Function purpose: generated callback event_func_5621 processes event block(s) 41_11. Actions/conditions:
//        41_11: enables flag -50 (legacy object-specific state; original label was not retained) on the selected
//        object.
void Frames::event_func_5621()
{
    // event 41_11 : enables flag -50 (legacy object-specific state; original label was not retained) on the selected object
    {
        if (!(group_load_map_from_file_1)) goto event_41_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) != (43))) goto event_41_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) != (44))) goto event_41_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))) != (45))) goto event_41_11_end;
        shady_734_instances.clear_selection();
        for (ObjectIterator it(shady_734_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (loop_load_x_index*16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16))) { it.deselect(); continue; }
        }
        if (!shady_734_instances.has_selection()) goto event_41_11_end;
        for (ObjectIterator it(shady_734_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(-50);
        }
    }
    event_41_11_end: ;
}
// Function purpose: generated callback event_func_5622 processes event block(s) 42_11. Actions/conditions:
//        42_11: sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 1 more actions.
void Frames::event_func_5622()
{
    // event 42_11 : sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 1 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_42_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(284, str_obstaclelist1_952), str__96+((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_42_11_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(1-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 0, (string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(498, str_ug_obs_1377, 1);
    }
    event_42_11_end: ;
}
// Function purpose: generated callback event_func_5623 processes event block(s) 43_11. Actions/conditions:
//        43_11: sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 1 more actions.
void Frames::event_func_5623()
{
    // event 43_11 : sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 1 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_43_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(285, str_obstaclelist2_954), str__96+((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_43_11_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(1-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 16, 16*(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))-25)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(498, str_ug_obs_1377, 1);
    }
    event_43_11_end: ;
}
// Function purpose: generated callback event_func_5624 processes event block(s) 44_11. Actions/conditions:
//        44_11: sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 1 more actions.
void Frames::event_func_5624()
{
    // event 44_11 : sets the selected object's layer to 5-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 1 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_44_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(286, str_obstaclelist3_956), str__96+((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_44_11_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(5-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 32, 16*(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index))-50)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(496, str_roof_obs_1375, 1);
    }
    event_44_11_end: ;
}
// Function purpose: generated callback event_func_5625 processes event block(s) 45_11. Actions/conditions:
//        45_11: sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop); plus 1 more actions.
void Frames::event_func_5625()
{
    // event 45_11 : sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop); plus 1 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_45_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(287, str_obstaclelist4_958), str__96+((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_45_11_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(1-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 48, 16*(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))-75)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(498, str_ug_obs_1377, 1);
    }
    event_45_11_end: ;
}
// Function purpose: generated callback event_func_5626 processes event block(s) 46_11. Actions/conditions:
//        46_11: sets UG_Obs to 1; sets the selected object's layer to 1-1; draws the selected image or tile; plus 1
//        more actions.
void Frames::event_func_5626()
{
    // event 46_11 : sets UG_Obs to 1; sets the selected object's layer to 1-1; draws the selected image or tile; plus 1 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_46_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(292, str_cuttablefences_969), str__96+((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_46_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) <= (25))) goto event_46_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(498, str_ug_obs_1377, 1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(1-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 0, (string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 1);
    }
    event_46_11_end: ;
}
// Function purpose: generated callback event_func_5627 processes event block(s) 47_11. Actions/conditions:
//        47_11: sets UG_Obs to 1; sets the selected object's layer to 1-1; draws the selected image or tile; plus 1
//        more actions.
void Frames::event_func_5627()
{
    // event 47_11 : sets UG_Obs to 1; sets the selected object's layer to 1-1; draws the selected image or tile; plus 1 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_47_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(292, str_cuttablefences_969), str__96+((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_47_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) > (25))) goto event_47_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(498, str_ug_obs_1377, 1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(1-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 48, 16*(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))-75)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 1);
    }
    event_47_11_end: ;
}
// Function purpose: generated callback event_func_5628 processes event block(s) 48_11. Actions/conditions:
//        48_11: sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_5628()
{
    // event 48_11 : sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1)) goto event_48_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) > (0))) goto event_48_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) <= (25))) goto event_48_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(498, str_ug_obs_1377)) == (0))) goto event_48_11_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(1-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 0, (string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))*16)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 1);
    }
    event_48_11_end: ;
}
// Function purpose: generated callback event_func_5629 processes event block(s) 49_11. Actions/conditions:
//        49_11: sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_5629()
{
    // event 49_11 : sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1)) goto event_49_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) > (25))) goto event_49_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) <= (50))) goto event_49_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(498, str_ug_obs_1377)) == (0))) goto event_49_11_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(1-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 16, 16*(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))-25)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 1);
    }
    event_49_11_end: ;
}
// Function purpose: generated callback event_func_5630 processes event block(s) 50_11. Actions/conditions:
//        50_11: sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_5630()
{
    // event 50_11 : sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1)) goto event_50_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) > (50))) goto event_50_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) <= (75))) goto event_50_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(498, str_ug_obs_1377)) == (0))) goto event_50_11_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(1-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 32, 16*(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))-50)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 1);
    }
    event_50_11_end: ;
}
// Function purpose: generated callback event_func_5631 processes event block(s) 51_11. Actions/conditions:
//        51_11: sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to
//        gameVariables->get_value(490, MapLoop).
void Frames::event_func_5631()
{
    // event 51_11 : sets the selected object's layer to 1-1; draws the selected image or tile; sets loop_load_x_index to gameVariables->get_value(490, MapLoop)
    {
        if (!(group_load_map_from_file_1)) goto event_51_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) > (75))) goto event_51_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))) <= (101))) goto event_51_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(498, str_ug_obs_1377)) == (0))) goto event_51_11_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(1-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(loop_load_x_index*16, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16, 48, 16*(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index))-75)-16, 16, 16, 0);
        ((ArrayObject*)get_instance(groundTiles_instances))->set_value(string_to_number(((StringTokenizer*)get_instance(undergroundTileRow_instances))->get(loop_load_x_index)), loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 1);
    }
    event_51_11_end: ;
}
// Function purpose: generated callback event_func_5632 processes event block(s) 52_11. Actions/conditions:
//        52_11: adds a shadow 324 instance; sets the selected object's horizontal position to
//        (loop_load_x_index*16)+16; sets the selected object's vertical position to
//        gameVariables->get_value(490, MapLoop)*16; plus 5 more actions.
void Frames::event_func_5632()
{
    // event 52_11 : adds a shadow 324 instance; sets the selected object's horizontal position to (loop_load_x_index*16)+16; sets the selected object's vertical position to gameVariables->get_value(490, MapLoop)*16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_52_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(290, str_shadowcasters3_964), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_52_11_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((loop_load_x_index+1), (((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)), 2)) == (0))) goto event_52_11_end;
        shadow_324_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_shadow_726(0, 0), 1);
            shadow_324_instances.add_back();
        }
        for (ObjectIterator it(shadow_324_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((loop_load_x_index*16)+16);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16);
            ((Active*)*it)->set_direction(16);
        }
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(1, loop_load_x_index+1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 2);
        }
    }
    event_52_11_end: ;
}
// Function purpose: generated callback event_func_5633 processes event block(s) 53_11. Actions/conditions:
//        53_11: adds a shadow 324 instance; sets the selected object's horizontal position to (loop_load_x_index*16);
//        sets the selected object's vertical position to (gameVariables->get_value(490, MapLoop)*16)+16; plus
//        5 more actions.
void Frames::event_func_5633()
{
    // event 53_11 : adds a shadow 324 instance; sets the selected object's horizontal position to (loop_load_x_index*16); sets the selected object's vertical position to (gameVariables->get_value(490, MapLoop)*16)+16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_53_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(289, str_shadowcasters2_962), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_53_11_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((loop_load_x_index), (((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1), 2)) == (0))) goto event_53_11_end;
        shadow_324_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_shadow_726(0, 0), 1);
            shadow_324_instances.add_back();
        }
        for (ObjectIterator it(shadow_324_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((loop_load_x_index*16));
            ((Active*)*it)->set_y((((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16)+16);
            ((Active*)*it)->set_direction(8);
        }
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(1, loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1, 2);
        }
    }
    event_53_11_end: ;
}
// Function purpose: generated callback event_func_5634 processes event block(s) 54_11. Actions/conditions:
//        54_11: adds a shadow 324 instance; sets the selected object's horizontal position to
//        (loop_load_x_index*16)+16; sets the selected object's vertical position to
//        (gameVariables->get_value(490, MapLoop)*16)+16; plus 1 more actions.
void Frames::event_func_5634()
{
    // event 54_11 : adds a shadow 324 instance; sets the selected object's horizontal position to (loop_load_x_index*16)+16; sets the selected object's vertical position to (gameVariables->get_value(490, MapLoop)*16)+16; plus 1 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_54_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(288, str_shadowcasters_960), str__96+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_54_11_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((loop_load_x_index+1), (((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1), 2)) == (0))) goto event_54_11_end;
        shadow_324_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_shadow_726(0, 0), 1);
            shadow_324_instances.add_back();
        }
        for (ObjectIterator it(shadow_324_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((loop_load_x_index*16)+16);
            ((Active*)*it)->set_y((((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16)+16);
        }
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(1, loop_load_x_index+1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1, 2);
        }
    }
    event_54_11_end: ;
}
// Function purpose: generated callback event_func_5635 processes event block(s) 55_11. Actions/conditions:
//        55_11: adds a shady 734 instance; sets the selected object's direction to 16; sets the selected object's
//        horizontal position to (loop_load_x_index*16)+16; plus 5 more actions.
void Frames::event_func_5635()
{
    // event 55_11 : adds a shady 734 instance; sets the selected object's direction to 16; sets the selected object's horizontal position to (loop_load_x_index*16)+16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_55_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(290, str_shadowcasters3_964), str__96+((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_55_11_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((loop_load_x_index+1), (((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)), 5)) == (0))) goto event_55_11_end;
        shady_734_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_shady_734(0, 0), 4);
            shady_734_instances.add_back();
        }
        for (ObjectIterator it(shady_734_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x((loop_load_x_index*16)+16);
            ((Active*)*it)->set_y((((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16));
        }
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(1, loop_load_x_index+1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369), 5);
        }
    }
    event_55_11_end: ;
}
// Function purpose: generated callback event_func_5636 processes event block(s) 56_11. Actions/conditions:
//        56_11: adds a shady 734 instance; sets the selected object's direction to 8; sets the selected object's
//        horizontal position to (loop_load_x_index*16); plus 5 more actions.
void Frames::event_func_5636()
{
    // event 56_11 : adds a shady 734 instance; sets the selected object's direction to 8; sets the selected object's horizontal position to (loop_load_x_index*16); plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_56_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(289, str_shadowcasters2_962), str__96+((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_56_11_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((loop_load_x_index), (((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1), 5)) == (0))) goto event_56_11_end;
        shady_734_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_shady_734(0, 0), 4);
            shady_734_instances.add_back();
        }
        for (ObjectIterator it(shady_734_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x((loop_load_x_index*16));
            ((Active*)*it)->set_y((((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16)+16);
        }
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(1, loop_load_x_index, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1, 5);
        }
    }
    event_56_11_end: ;
}
// Function purpose: generated callback event_func_5637 processes event block(s) 57_11. Actions/conditions:
//        57_11: adds a shady 734 instance; sets the selected object's horizontal position to
//        (loop_load_x_index*16)+16; sets the selected object's vertical position to
//        (gameVariables->get_value(490, MapLoop)*16)+16; plus 1 more actions.
void Frames::event_func_5637()
{
    // event 57_11 : adds a shady 734 instance; sets the selected object's horizontal position to (loop_load_x_index*16)+16; sets the selected object's vertical position to (gameVariables->get_value(490, MapLoop)*16)+16; plus 1 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_57_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(288, str_shadowcasters_960), str__96+((StringTokenizer*)get_instance(roofTileRow_instances))->get(loop_load_x_index)+str__96, 0)) != (-1))) goto event_57_11_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((loop_load_x_index+1), (((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1), 5)) == (0))) goto event_57_11_end;
        shady_734_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_shady_734(0, 0), 4);
            shady_734_instances.add_back();
        }
        for (ObjectIterator it(shady_734_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((loop_load_x_index*16)+16);
            ((Active*)*it)->set_y((((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)*16)+16);
        }
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(1, loop_load_x_index+1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)+1, 5);
        }
    }
    event_57_11_end: ;
}
void Frames::loop_load_x_11()
{
    event_func_5595();
    event_func_5596();
    event_func_5597();
    event_func_5598();
    event_func_5599();
    event_func_5600();
    event_func_5601();
    event_func_5602();
    event_func_5603();
    event_func_5604();
    event_func_5605();
    event_func_5606();
    event_func_5607();
    event_func_5608();
    event_func_5609();
    event_func_5610();
    event_func_5611();
    event_func_5612();
    event_func_5613();
    event_func_5614();
    event_func_5615();
    event_func_5616();
    event_func_5617();
    event_func_5618();
    event_func_5619();
    event_func_5620();
    event_func_5621();
    event_func_5622();
    event_func_5623();
    event_func_5624();
    event_func_5625();
    event_func_5626();
    event_func_5627();
    event_func_5628();
    event_func_5629();
    event_func_5630();
    event_func_5631();
    event_func_5632();
    event_func_5633();
    event_func_5634();
    event_func_5635();
    event_func_5636();
    event_func_5637();
}
// Function purpose: generated callback event_func_5638 processes event block(s) 10_11. Actions/conditions:
//        10_11: splits saved text into fields; splits saved text into fields; splits saved text into fields; plus 5
//        more actions.
void Frames::event_func_5638()
{
    // event 10_11 : splits saved text into fields; splits saved text into fields; splits saved text into fields; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_10_11_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_tiles_1873, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)), empty_string), str__96);
        ((StringTokenizer*)get_instance(ventTileRow_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_vents_1874, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)), empty_string), str__96);
        ((StringTokenizer*)get_instance(roofTileRow_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_roof_1875, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)), empty_string), str__96);
        ((StringTokenizer*)get_instance(undergroundTileRow_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_underground_1876, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)), empty_string), str__96);
        {
            loop_load_x_running = true;
            int times = int(width/MathHelper()/16);
            loop_load_x_index = 0;
            while (loop_load_x_index < times) {
                loop_load_x_11();
                if (!loop_load_x_running) break;
                loop_load_x_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(490, str_maploop_1369, 1);
    }
    event_10_11_end: ;
}
void Frames::loop_load_y_11()
{
    event_func_5638();
}
// Function purpose: generated callback event_func_5639 processes event block(s) 1480_11. Actions/conditions:
//        1480_11: sets source to Profile entry 6; sets source to
//        StringReplace::replace(gameVariables->get_string(81, source), #, ); adds a dchar 214 instance; plus
//        7 more actions.
void Frames::event_func_5639()
{
    // event 1480_11 : sets source to Profile entry 6; sets source to StringReplace::replace(gameVariables->get_string(81, source), #, ); adds a dchar 214 instance; plus 7 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1480_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_profile_281, str_6_241));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str__346, str__198));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_688(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_y()-10);
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
            ((Text*)*it)->blend_color.set(Color(192, 0, 32));
        }
    }
    event_1480_11_end: ;
}
void Frames::loop_npc_prof_oor_11()
{
    event_func_5639();
}
// Function purpose: generated callback event_func_5640 processes event block(s) 1481_11. Actions/conditions:
//        1481_11: sets source to Profile entry 8; sets source to
//        StringReplace::replace(gameVariables->get_string(81, source), #, ); adds a dchar 214 instance; plus
//        7 more actions.
void Frames::event_func_5640()
{
    // event 1481_11 : sets source to Profile entry 8; sets source to StringReplace::replace(gameVariables->get_string(81, source), #, ); adds a dchar 214 instance; plus 7 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1481_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_profile_281, str_8_325));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str__346, str__198));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_688(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_y()-10);
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
            ((Text*)*it)->blend_color.set(Color(192, 0, 32));
        }
    }
    event_1481_11_end: ;
}
void Frames::loop_npc_prof_sleep_11()
{
    event_func_5640();
}
// Function purpose: generated callback event_func_5641 processes event block(s) 1450_11. Actions/conditions:
//        1450_11: checks scene is active; game state inRange; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_5641()
{
    // event 1450_11 : checks scene is active; game state inRange; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1450_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(341, str_inrange_1134)) == (0))) goto event_1450_11_end;
        {
            loop_npc_prof_oor_running = true;
            int times = int(1);
            loop_npc_prof_oor_index = 0;
            while (loop_npc_prof_oor_index < times) {
                loop_npc_prof_oor_11();
                if (!loop_npc_prof_oor_running) break;
                loop_npc_prof_oor_index++;
            }
        }
    }
    event_1450_11_end: ;
}
// Function purpose: generated callback event_func_5642 processes event block(s) 1451_11. Actions/conditions:
//        1451_11: checks scene is active; game state isAwake; game state inRange; this handler gates a game event
//        without a direct value/object action.
void Frames::event_func_5642()
{
    // event 1451_11 : checks scene is active; game state isAwake; game state inRange; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1451_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(342, str_isawake_1135)) == (0))) goto event_1451_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(341, str_inrange_1134)) == (1))) goto event_1451_11_end;
        {
            loop_npc_prof_sleep_running = true;
            int times = int(1);
            loop_npc_prof_sleep_index = 0;
            while (loop_npc_prof_sleep_index < times) {
                loop_npc_prof_sleep_11();
                if (!loop_npc_prof_sleep_running) break;
                loop_npc_prof_sleep_index++;
            }
        }
    }
    event_1451_11_end: ;
}
// Function purpose: generated callback event_func_5643 processes event block(s) 1452_11. Actions/conditions:
//        1452_11: checks scene is active; game state isAwake; game state inRange; this handler gates a game event
//        without a direct value/object action.
void Frames::event_func_5643()
{
    // event 1452_11 : checks scene is active; game state isAwake; game state inRange; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1452_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(342, str_isawake_1135)) == (1))) goto event_1452_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(341, str_inrange_1134)) == (1))) goto event_1452_11_end;
        {
            loop_npc_tab_buy_running = true;
            int times = int(1);
            loop_npc_tab_buy_index = 0;
            while (loop_npc_tab_buy_index < times) {
                loop_npc_tab_buy_11();
                if (!loop_npc_tab_buy_running) break;
                loop_npc_tab_buy_index++;
            }
        }
    }
    event_1452_11_end: ;
}
void Frames::loop_npc_buy_setup_11()
{
    event_func_2125();
    event_func_2126();
    event_func_2127();
    event_func_5641();
    event_func_5642();
    event_func_5643();
}
// Function purpose: generated callback event_func_5644 processes event block(s) 1006_11. Actions/conditions:
//        1006_11: sets the object position in the world; disables flag 31 (gym activity or movement phase) on the
//        selected object; changes a stored game value; plus 1 more actions.
void Frames::event_func_5644()
{
    // event 1006_11 : sets the object position in the world; disables flag 31 (gym activity or movement phase) on the selected object; changes a stored game value; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1006_11_end;
        qualifier_9.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(414, str_gymid_1231)))) { it.deselect(); continue; }
        }
        if (!qualifier_9.has_selection()) goto event_1006_11_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1006_11_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_1006_11_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(qualifier_9, it.current_index));
            if (parent == NULL) goto pos_end_1006_11_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 24);
            pos_end_1006_11_0: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(31);
            ((Active*)*it)->alterables->values.sub(12, 5);
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
    event_1006_11_end: ;
}
void Frames::loop_gym_push_off_11()
{
    event_func_5644();
}
// Function purpose: generated callback event_func_5645 processes event block(s) 1117_11. Actions/conditions:
//        1117_11: sets del_missions to gameVariables->get_string(142,
//        del_missions)+missions_298->get_line(loop_check_beat_mission2_index+1)+#; increments m_cash by
//        string_to_number(stringtokenizer_81->get(3)); increments m_done by 1; plus 22 more actions.
void Frames::event_func_5645()
{
    // event 1117_11 : sets del_missions to gameVariables->get_string(142, del_missions)+missions_298->get_line(loop_check_beat_mission2_index+1)+#; increments m_cash by string_to_number(stringtokenizer_81->get(3)); increments m_done by 1; plus 22 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1117_11_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_beat_1232))) goto event_1117_11_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)) == (number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(415, str_currnpc_1233))))) goto event_1117_11_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(5))))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1117_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(142, str_del_missions_708, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(142, str_del_missions_708)+((ListObject*)get_instance(missions_298_instances))->get_line(loop_check_beat_mission2_index+1)+str__346);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(416, str_m_cash_1234, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(417, str_m_done_1235, 1);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(12);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(418, str_score_p_1236, 10);
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 15);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(219, str_cash_11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        dialogBodyText_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_tutorialDialogText(0, 0), 5);
            dialogBodyText_instances.add_back();
        }
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            if (parent == NULL) goto pos_end_1117_11_1;
            ((Text*)*it)->set_global_position(parent->get_x() + -110, parent->get_y() + -18);
            pos_end_1117_11_1: ;
        }
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->blend_color.set(Color(60, 60, 60));
            ((Text*)*it)->set_string(str_you_have_completed_the_favour_for_1237+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)+str_and_earned_yourself_1238+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)+str__918);
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
            ((Text*)*it)->set_string(str_favour_complete_1239);
        }
        FrameObject * single_instance_1117_11_3; single_instance_1117_11_3 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buttons_699(parent->x + 43, parent->y + 20), parent->layer);
                if (single_instance_1117_11_3 == NULL)
                    single_instance_1117_11_3 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1117_11_3))->force_animation(28);
        media.play_id(SOUND_ACCOLADE_9, 1-1);
    }
    event_1117_11_end: ;
}
void Frames::loop_check_beat_mission2_11()
{
    event_func_1507();
    event_func_5645();
}
// Function purpose: generated callback event_func_5646 processes event block(s) 1112_11. Actions/conditions:
//        1112_11: disables flag 2001 (NPC defeated or knocked-out state; persisted in saves) on the selected object;
//        stops the object's movement; sets the selected object's numeric value to 0; plus 14 more actions.
void Frames::event_func_5646()
{
    // event 1112_11 : disables flag 2001 (NPC defeated or knocked-out state; persisted in saves) on the selected object; stops the object's movement; sets the selected object's numeric value to 0; plus 14 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1112_11_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(415, str_currnpc_1233)))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1112_11_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2001);
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(7, -100);
            ((Active*)*it)->alterables->values.set(18, -1);
            ((Active*)*it)->alterables->values.set(15, 0);
            ((Active*)*it)->alterables->values.set(16, -500);
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.sub(12, 50);
            ((Active*)*it)->alterables->values.set(24, 0);
            ((Active*)*it)->alterables->flags.disable(250);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(417, str_m_done_1235, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(416, str_m_cash_1234, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(142, str_del_missions_708, empty_string);
        {
            loop_check_beat_mission2_running = true;
            int times = int(((ListObject*)get_instance(missions_298_instances))->get_count());
            loop_check_beat_mission2_index = 0;
            while (loop_check_beat_mission2_index < times) {
                loop_check_beat_mission2_11();
                if (!loop_check_beat_mission2_running) break;
                loop_check_beat_mission2_index++;
            }
        }
    }
    event_1112_11_end: ;
}
// Function purpose: generated callback event_func_5647 processes event block(s) 1114_11. Actions/conditions:
//        1114_11: creates a buttons 699 object; sets the object's animation to 28; adds a dialogue2 179 instance;
//        plus 12 more actions.
void Frames::event_func_5647()
{
    // event 1114_11 : creates a buttons 699 object; sets the object's animation to 28; adds a dialogue2 179 instance; plus 12 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1114_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(417, str_m_done_1235)) > (1))) goto event_1114_11_end;
        FrameObject * single_instance_1114_11_0; single_instance_1114_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buttons_699(parent->x + 43, parent->y + 20), parent->layer);
                if (single_instance_1114_11_0 == NULL)
                    single_instance_1114_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1114_11_0))->force_animation(28);
        dialogBodyText_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_tutorialDialogText(0, 0), 5);
            dialogBodyText_instances.add_back();
        }
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            if (parent == NULL) goto pos_end_1114_11_2;
            ((Text*)*it)->set_global_position(parent->get_x() + -110, parent->get_y() + -18);
            pos_end_1114_11_2: ;
        }
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->blend_color.set(Color(60, 60, 60));
            ((Text*)*it)->set_string(str_you_completed_1240+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(417, str_m_done_1235))+str_favours_and_earned_yourself_1241+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(416, str_m_cash_1234))+str__918);
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
            ((Text*)*it)->set_string(str_favours_complete_1242);
        }
    }
    event_1114_11_end: ;
}
// Function purpose: generated callback event_func_5648 processes event block(s) 1115_11. Actions/conditions:
//        1115_11: sets m_done to 0; splits saved text into fields.
void Frames::event_func_5648()
{
    // event 1115_11 : sets m_done to 0; splits saved text into fields
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1115_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(417, str_m_done_1235)) > (0))) goto event_1115_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(417, str_m_done_1235, 0);
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(142, str_del_missions_708), str__346);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
    }
    event_1115_11_end: ;
}
// Function purpose: generated callback event_func_5649 processes event block(s) 1119_11. Actions/conditions:
//        1119_11: activates the Attacked event group; sets SpeakID to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(25); sets SpeakCol to 0; plus 1 more actions.
void Frames::event_func_5649()
{
    // event 1119_11 : activates the Attacked event group; sets SpeakID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25); sets SpeakCol to 0; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1119_11_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(415, str_currnpc_1233)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1119_11_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_attacked_1243);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
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
    }
    event_1119_11_end: ;
}
void Frames::loop_drop_opponent_11()
{
    event_func_5646();
    event_func_1515();
    event_func_5647();
    event_func_5648();
    event_func_1518();
    event_func_5649();
}
// Function purpose: generated callback event_func_5650 processes event block(s) 1432_11. Actions/conditions:
//        1432_11: creates a buttons 699 object; sets the object's animation to 19; creates a givecash 261 object;
//        plus 6 more actions.
void Frames::event_func_5650()
{
    // event 1432_11 : creates a buttons 699 object; sets the object's animation to 19; creates a givecash 261 object; plus 6 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1432_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(341, str_inrange_1134)) == (1))) goto event_1432_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(342, str_isawake_1135)) == (1))) goto event_1432_11_end;
        FrameObject * single_instance_1432_11_0; single_instance_1432_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buttons_699(parent->x + 0, parent->y + 16), parent->layer);
                if (single_instance_1432_11_0 == NULL)
                    single_instance_1432_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1432_11_0))->force_animation(19);
        FrameObject * single_instance_1432_11_1; single_instance_1432_11_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_givecash_261(parent->x + -21, parent->y + 18), parent->layer);
                if (single_instance_1432_11_1 == NULL)
                    single_instance_1432_11_1 = new_obj;
            }
        }
        FrameObject * single_instance_1432_11_2; single_instance_1432_11_2 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemSlot(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_1432_11_2 == NULL)
                    single_instance_1432_11_2 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1432_11_2))->set_scale(2);
        ((Active*)((Active*)single_instance_1432_11_2))->alterables->strings.set(0, str_npc_give_1349);
    }
    event_1432_11_end: ;
}
// Function purpose: generated callback event_func_5651 processes event block(s) 1433_11. Actions/conditions:
//        1433_11: creates a buttons 699 object; sets the object's animation to 17.
void Frames::event_func_5651()
{
    // event 1433_11 : creates a buttons 699 object; sets the object's animation to 17
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1433_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(341, str_inrange_1134)) == (1))) goto event_1433_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(342, str_isawake_1135)) == (1))) goto event_1433_11_end;
        FrameObject * single_instance_1433_11_0; single_instance_1433_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buttons_699(parent->x + -33, parent->y + 18), parent->layer);
                if (single_instance_1433_11_0 == NULL)
                    single_instance_1433_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1433_11_0))->force_animation(17);
    }
    event_1433_11_end: ;
}
// Function purpose: generated callback event_func_5652 processes event block(s) 1434_11. Actions/conditions:
//        1434_11: creates a buttons 699 object; sets the object's animation to 16.
void Frames::event_func_5652()
{
    // event 1434_11 : creates a buttons 699 object; sets the object's animation to 16
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1434_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(341, str_inrange_1134)) == (1))) goto event_1434_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(342, str_isawake_1135)) == (1))) goto event_1434_11_end;
        FrameObject * single_instance_1434_11_0; single_instance_1434_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buttons_699(parent->x + 23, parent->y + 18), parent->layer);
                if (single_instance_1434_11_0 == NULL)
                    single_instance_1434_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1434_11_0))->force_animation(16);
    }
    event_1434_11_end: ;
}
// Function purpose: generated callback event_func_5653 processes event block(s) 1435_11. Actions/conditions:
//        1435_11: creates a buttons 699 object; sets the object's animation to 18; creates a buttontext 445 object;
//        plus 5 more actions.
void Frames::event_func_5653()
{
    // event 1435_11 : creates a buttons 699 object; sets the object's animation to 18; creates a buttontext 445 object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1435_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(341, str_inrange_1134)) == (1))) goto event_1435_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(342, str_isawake_1135)) == (1))) goto event_1435_11_end;
        FrameObject * single_instance_1435_11_0; single_instance_1435_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buttons_699(parent->x + 0, parent->y + 40), parent->layer);
                if (single_instance_1435_11_0 == NULL)
                    single_instance_1435_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1435_11_0))->force_animation(18);
        FrameObject * single_instance_1435_11_1; single_instance_1435_11_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_1435_11_0)->x + -37, ((Active*)single_instance_1435_11_0)->y + 4), ((Active*)single_instance_1435_11_0)->layer);
            if (single_instance_1435_11_1 == NULL)
                single_instance_1435_11_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_1435_11_1))->blend_color.set(Color(120, 120, 120));
        ((Text*)((Text*)single_instance_1435_11_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_profile_281, str_2_155)));
    }
    event_1435_11_end: ;
}
void Frames::loop_give_cash_setup_11()
{
    event_func_2125();
    event_func_2126();
    event_func_2127();
    event_func_5650();
    event_func_5651();
    event_func_5652();
    event_func_5653();
    event_func_5642();
    event_func_5641();
}
void Frames::loop_move_check_doors_11()
{
    event_func_2004();
    event_func_2005();
    event_func_2006();
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
// Function purpose: generated callback event_func_5654 processes event block(s) 411_11. Actions/conditions:
//        411_11: sets Blocked to 0.
void Frames::event_func_5654()
{
    // event 411_11 : sets Blocked to 0
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_411_11_end;
        playerBase_instances.clear_selection();
        pushupmat_408_instances.clear_selection();
        if (!check_overlap(playerBase_instances, pushupmat_408_instances)) goto event_411_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 0);
    }
    event_411_11_end: ;
}
// Function purpose: generated callback event_func_5655 processes event block(s) 412_11. Actions/conditions:
//        412_11: sets Blocked to 0.
void Frames::event_func_5655()
{
    // event 412_11 : sets Blocked to 0
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_412_11_end;
        playerBase_instances.clear_selection();
        skippingmat_435_instances.clear_selection();
        if (!check_overlap(playerBase_instances, skippingmat_435_instances)) goto event_412_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 0);
    }
    event_412_11_end: ;
}
// Function purpose: generated callback event_func_5656 processes event block(s) 413_11. Actions/conditions:
//        413_11: sets Blocked to 0.
void Frames::event_func_5656()
{
    // event 413_11 : sets Blocked to 0
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_413_11_end;
        playerBase_instances.clear_selection();
        punchbag_436_instances.clear_selection();
        if (!check_overlap(playerBase_instances, punchbag_436_instances)) goto event_413_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 0);
    }
    event_413_11_end: ;
}
// Function purpose: generated callback event_func_5657 processes event block(s) 414_11. Actions/conditions:
//        414_11: sets Blocked to 0.
void Frames::event_func_5657()
{
    // event 414_11 : sets Blocked to 0
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_414_11_end;
        playerBase_instances.clear_selection();
        speedbag_439_instances.clear_selection();
        if (!check_overlap(playerBase_instances, speedbag_439_instances)) goto event_414_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 0);
    }
    event_414_11_end: ;
}
// Function purpose: generated callback event_func_5658 processes event block(s) 415_11. Actions/conditions:
//        415_11: sets Blocked to 0.
void Frames::event_func_5658()
{
    // event 415_11 : sets Blocked to 0
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_415_11_end;
        playerBase_instances.clear_selection();
        joggingmat_407_instances.clear_selection();
        if (!check_overlap(playerBase_instances, joggingmat_407_instances)) goto event_415_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 0);
    }
    event_415_11_end: ;
}
// Function purpose: generated callback event_func_5659 processes event block(s) 418_11. Actions/conditions:
//        418_11: sets Blocked to 1.
void Frames::event_func_5659()
{
    // event 418_11 : sets Blocked to 1
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_418_11_end;
        playerBase_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_19)) goto event_418_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_418_11_end: ;
}
// Function purpose: generated callback event_func_5660 processes event block(s) 426_11. Actions/conditions:
//        426_11: checks scene is active; skips if the event-specific game state condition is met; game state
//        Carrying; this handler gates a game event without a direct value/.
void Frames::event_func_5660()
{
    // event 426_11 : checks scene is active; skips if the event-specific game state condition is met; game state Carrying; this handler gates a game event without a direct value/
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_426_11_end;
        playerBase_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_8)) goto event_426_11_end;
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!qualifier_8.has_selection()) goto event_426_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) != (1))) goto event_426_11_end;
        {
            loop_move_check_doors_running = true;
            int times = int(1);
            loop_move_check_doors_index = 0;
            while (loop_move_check_doors_index < times) {
                loop_move_check_doors_11();
                if (!loop_move_check_doors_running) break;
                loop_move_check_doors_index++;
            }
        }
    }
    event_426_11_end: ;
}
void Frames::loop_move_check_11()
{
    event_func_2020();
    event_func_5654();
    event_func_5655();
    event_func_5656();
    event_func_5657();
    event_func_5658();
    event_func_2021();
    event_func_2022();
    event_func_5659();
    event_func_2026();
    event_func_2027();
    event_func_2028();
    event_func_2029();
    event_func_2030();
    event_func_2031();
    event_func_2032();
    event_func_5660();
}
// Function purpose: generated callback event_func_5661 processes event block(s) 1228_11. Actions/conditions:
//        1228_11: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_5661()
{
    // event 1228_11 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_1228_11_end;
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
    event_1228_11_end: ;
}
void Frames::loop_pickupitem_11()
{
    event_func_5661();
    event_func_2141();
}
// Function purpose: generated callback event_func_5662 processes event block(s) 86_11. Actions/conditions:
//        86_11: adds a shadow 324 instance; sets the selected object's horizontal position to
//        (string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances,
//        it.current_index))->get(0))*16)+16; sets the selected object's vertical position to
//        (string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances,
//        it.current_index))->get(1))*16)+16; plus 1 more actions.
void Frames::event_func_5662()
{
    // event 86_11 : adds a shadow 324 instance; sets the selected object's horizontal position to (string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances, it.current_index))->get(0))*16)+16; sets the selected object's vertical position to (string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances, it.current_index))->get(1))*16)+16; plus 1 more actions
    bool or_result_86_11 = false;
    bool or_temp_result_86_11_0 = false;
    {
        if (!(group_load_map_from_file_1)) goto or_event_86_11_0_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3))) == (1))) goto or_event_86_11_0_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))+1), (string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))+1), 2)) == (0))) goto or_event_86_11_0_end;
        or_result_86_11 = true;
        or_temp_result_86_11_0 = true;
    }
    or_event_86_11_0_end: ;
    // event 86_11 : adds a shadow 324 instance; sets the selected object's horizontal position to (string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances, it.current_index))->get(0))*16)+16; sets the selected object's vertical position to (string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances, it.current_index))->get(1))*16)+16; plus 1 more actions
    bool or_temp_result_86_11_1 = false;
    {
        if (!(group_load_map_from_file_1)) goto or_event_86_11_1_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3))) == (3))) goto or_event_86_11_1_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))+1), (string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))+1), 2)) == (0))) goto or_event_86_11_1_end;
        or_result_86_11 = true;
        or_temp_result_86_11_1 = true;
        or_event_86_11_1_end: ;
        if (!or_result_86_11) goto or_final_or_event_86_11_1_end;
        shadow_324_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_shadow_726(0, 0), 1);
            shadow_324_instances.add_back();
        }
        for (ObjectIterator it(shadow_324_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances, it.current_index))->get(0))*16)+16);
            ((Active*)*it)->set_y((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances, it.current_index))->get(1))*16)+16);
        }
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(1, (string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances, it.current_index))->get(0))+1), (string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances, it.current_index))->get(1))+1), 2);
        }
    }
    or_final_or_event_86_11_1_end: ;
}
void Frames::loop_door_shadow_11()
{
    event_func_5662();
}
// Function purpose: generated callback event_func_5663 processes event block(s) 107_11. Actions/conditions:
//        107_11: sets rndX to (string_to_number(stringtokenizer2_292->get(0))*16)+(randrange_event(4)*16); sets rndY
//        to (string_to_number(stringtokenizer2_292->get(1))*16)+(randrange_event(4)*16); adds a mine 414 instance;
//        plus 10 more actions.
void Frames::event_func_5663()
{
    // event 107_11 : sets rndX to (string_to_number(stringtokenizer2_292->get(0))*16)+(randrange_event(4)*16); sets rndY to (string_to_number(stringtokenizer2_292->get(1))*16)+(randrange_event(4)*16); adds a mine 414 instance; plus 10 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_107_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(713, str_rndx_1878, (string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16)+(randrange_event(4)*16));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(714, str_rndy_1879, (string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16)+(randrange_event(4)*16));
        mine_414_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_mine_414(0, 0), 0);
            mine_414_instances.add_back();
        }
        for (ObjectIterator it(mine_414_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(713, str_rndx_1878)+8);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(714, str_rndy_1879)+8);
        }
        soil_173_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_soil_675(0, 0), 0);
            soil_173_instances.add_back();
        }
        for (ObjectIterator it(soil_173_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(713, str_rndx_1878));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(714, str_rndy_1879));
            ((Active*)*it)->paste(0);
            ((Active*)*it)->destroy();
        }
    }
    event_107_11_end: ;
}
void Frames::loop_make_mines_11()
{
    event_func_5663();
}
// Function purpose: generated callback event_func_5664 processes event block(s) 63_11. Actions/conditions:
//        63_11: splits saved text into fields.
void Frames::event_func_5664()
{
    // event 63_11 : splits saved text into fields
    {
        if (!(group_load_map_from_file_1)) goto event_63_11_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_objects_1880, number_to_string(loop_load_map_objects_index+1), empty_string), str_x_437);
    }
    event_63_11_end: ;
}
// Function purpose: generated callback event_func_5665 processes event block(s) 75_11. Actions/conditions:
//        75_11: adds a doormaster 387 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16.
void Frames::event_func_5665()
{
    // event 75_11 : adds a doormaster 387 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16
    {
        if (!(group_load_map_from_file_1)) goto event_75_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (75))) goto event_75_11_end;
        doormaster_387_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_doormaster_387(0, 0), 1);
            doormaster_387_instances.add_back();
        }
        for (ObjectIterator it(doormaster_387_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
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
    event_75_11_end: ;
}
// Function purpose: generated callback event_func_5666 processes event block(s) 76_11. Actions/conditions:
//        76_11: adds a doorcell 174 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions.
void Frames::event_func_5666()
{
    // event 76_11 : adds a doorcell 174 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_76_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (24))) goto event_76_11_end;
        doorcell_174_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_doorcell_174(0, 0), 1);
            doorcell_174_instances.add_back();
        }
        for (ObjectIterator it(doorcell_174_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
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
    event_76_11_end: ;
}
// Function purpose: generated callback event_func_5667 processes event block(s) 77_11. Actions/conditions:
//        77_11: adds a dooroutside 262 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions.
void Frames::event_func_5667()
{
    // event 77_11 : adds a dooroutside 262 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_77_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (25))) goto event_77_11_end;
        dooroutside_262_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dooroutside_262(0, 0), 1);
            dooroutside_262_instances.add_back();
        }
        for (ObjectIterator it(dooroutside_262_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
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
    event_77_11_end: ;
}
// Function purpose: generated callback event_func_5668 processes event block(s) 78_11. Actions/conditions:
//        78_11: adds a doorutility 259 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions.
void Frames::event_func_5668()
{
    // event 78_11 : adds a doorutility 259 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_78_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (26))) goto event_78_11_end;
        doorutility_259_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_doorutility_259(0, 0), 1);
            doorutility_259_instances.add_back();
        }
        for (ObjectIterator it(doorutility_259_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
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
    event_78_11_end: ;
}
// Function purpose: generated callback event_func_5669 processes event block(s) 79_11. Actions/conditions:
//        79_11: adds a doorkitchen 211 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions.
void Frames::event_func_5669()
{
    // event 79_11 : adds a doorkitchen 211 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_79_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (27))) goto event_79_11_end;
        doorkitchen_211_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_doorkitchen_211(0, 0), 1);
            doorkitchen_211_instances.add_back();
        }
        for (ObjectIterator it(doorkitchen_211_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
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
    event_79_11_end: ;
}
// Function purpose: generated callback event_func_5670 processes event block(s) 80_11. Actions/conditions:
//        80_11: adds a doorlaundry 276 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions.
void Frames::event_func_5670()
{
    // event 80_11 : adds a doorlaundry 276 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_80_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (28))) goto event_80_11_end;
        doorlaundry_276_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_doorlaundry_276(0, 0), 1);
            doorlaundry_276_instances.add_back();
        }
        for (ObjectIterator it(doorlaundry_276_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
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
    event_80_11_end: ;
}
// Function purpose: generated callback event_func_5671 processes event block(s) 81_11. Actions/conditions:
//        81_11: adds a doorjanitor 271 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions.
void Frames::event_func_5671()
{
    // event 81_11 : adds a doorjanitor 271 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_81_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (29))) goto event_81_11_end;
        doorjanitor_271_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_doorjanitor_271(0, 0), 1);
            doorjanitor_271_instances.add_back();
        }
        for (ObjectIterator it(doorjanitor_271_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
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
    event_81_11_end: ;
}
// Function purpose: generated callback event_func_5672 processes event block(s) 82_11. Actions/conditions:
//        82_11: adds a doorstaff 212 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions.
void Frames::event_func_5672()
{
    // event 82_11 : adds a doorstaff 212 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_82_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (30))) goto event_82_11_end;
        doorstaff_212_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_doorstaff_212(0, 0), 1);
            doorstaff_212_instances.add_back();
        }
        for (ObjectIterator it(doorstaff_212_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
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
    event_82_11_end: ;
}
// Function purpose: generated callback event_func_5673 processes event block(s) 83_11. Actions/conditions:
//        83_11: adds a doorlibrary 272 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions.
void Frames::event_func_5673()
{
    // event 83_11 : adds a doorlibrary 272 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_83_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (37))) goto event_83_11_end;
        doorlibrary_272_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_doorlibrary_272(0, 0), 1);
            doorlibrary_272_instances.add_back();
        }
        for (ObjectIterator it(doorlibrary_272_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
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
    event_83_11_end: ;
}
// Function purpose: generated callback event_func_5674 processes event block(s) 84_11. Actions/conditions:
//        84_11: adds a doorwoodshop 268 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions.
void Frames::event_func_5674()
{
    // event 84_11 : adds a doorwoodshop 268 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_84_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (38))) goto event_84_11_end;
        doorwoodshop_268_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_doorwoodshop_268(0, 0), 1);
            doorwoodshop_268_instances.add_back();
        }
        for (ObjectIterator it(doorwoodshop_268_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
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
    event_84_11_end: ;
}
// Function purpose: generated callback event_func_5675 processes event block(s) 85_11. Actions/conditions:
//        85_11: adds a doormetalshop 328 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions.
void Frames::event_func_5675()
{
    // event 85_11 : adds a doormetalshop 328 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_85_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (31))) goto event_85_11_end;
        doormetalshop_328_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_doormetalshop_328(0, 0), 1);
            doormetalshop_328_instances.add_back();
        }
        for (ObjectIterator it(doormetalshop_328_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
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
    event_85_11_end: ;
}
// Function purpose: generated callback event_func_5676 processes event block(s) 87_11. Actions/conditions:
//        87_11: adds a bednpc 306 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions.
void Frames::event_func_5676()
{
    // event 87_11 : adds a bednpc 306 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_87_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (1))) goto event_87_11_end;
        inmateBed_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bednpc_718(0, 0), 1);
            inmateBed_instances.add_back();
        }
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_87_11_end: ;
}
// Function purpose: generated callback event_func_5677 processes event block(s) 88_11. Actions/conditions:
//        88_11: adds a canteenchair 312 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions.
void Frames::event_func_5677()
{
    // event 88_11 : adds a canteenchair 312 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_88_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (2))) goto event_88_11_end;
        canteenchair_312_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_canteenchair_722(0, 0), 1);
            canteenchair_312_instances.add_back();
        }
        for (ObjectIterator it(canteenchair_312_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_88_11_end: ;
}
// Function purpose: generated callback event_func_5678 processes event block(s) 89_11. Actions/conditions:
//        89_11: adds a toilet2 307 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions.
void Frames::event_func_5678()
{
    // event 89_11 : adds a toilet2 307 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_89_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (3))) goto event_89_11_end;
        toilet2_307_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_toilet2_719(0, 0), 1);
            toilet2_307_instances.add_back();
        }
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_89_11_end: ;
}
// Function purpose: generated callback event_func_5679 processes event block(s) 90_11. Actions/conditions:
//        90_11: adds a oven2 314 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions.
void Frames::event_func_5679()
{
    // event 90_11 : adds a oven2 314 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_90_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (4))) goto event_90_11_end;
        oven2_314_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_oven2_724(0, 0), 1);
            oven2_314_instances.add_back();
        }
        for (ObjectIterator it(oven2_314_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_90_11_end: ;
}
// Function purpose: generated callback event_func_5680 processes event block(s) 91_11. Actions/conditions:
//        91_11: adds a washing2 313 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions.
void Frames::event_func_5680()
{
    // event 91_11 : adds a washing2 313 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_91_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (5))) goto event_91_11_end;
        washing2_313_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_washing2_723(0, 0), 1);
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
    event_91_11_end: ;
}
// Function purpose: generated callback event_func_5681 processes event block(s) 95_11. Actions/conditions:
//        95_11: adds a desks 717 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions.
void Frames::event_func_5681()
{
    // event 95_11 : adds a desks 717 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_95_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (9))) goto event_95_11_end;
        desks_717_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_desks_717(0, 0), 1);
            desks_717_instances.add_back();
        }
        for (ObjectIterator it(desks_717_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
            ((Active*)*it)->set_direction(24);
        }
    }
    event_95_11_end: ;
}
// Function purpose: generated callback event_func_5682 processes event block(s) 97_11. Actions/conditions:
//        97_11: adds a canteenserving 705 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions.
void Frames::event_func_5682()
{
    // event 97_11 : adds a canteenserving 705 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_97_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (11))) goto event_97_11_end;
        canteenserving_705_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_canteenserving_705(0, 0), 1);
            canteenserving_705_instances.add_back();
        }
        for (ObjectIterator it(canteenserving_705_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_97_11_end: ;
}
// Function purpose: generated callback event_func_5683 processes event block(s) 99_11. Actions/conditions:
//        99_11: adds a table2 720 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions.
void Frames::event_func_5683()
{
    // event 99_11 : adds a table2 720 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_99_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (13))) goto event_99_11_end;
        table2_720_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_table2_720(0, 0), 1);
            table2_720_instances.add_back();
        }
        for (ObjectIterator it(table2_720_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_99_11_end: ;
}
// Function purpose: generated callback event_func_5684 processes event block(s) 100_11. Actions/conditions:
//        100_11: adds a containercanteen 691 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions.
void Frames::event_func_5684()
{
    // event 100_11 : adds a containercanteen 691 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_100_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (15))) goto event_100_11_end;
        containercanteen_691_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_containercanteen_691(0, 0), 1);
            containercanteen_691_instances.add_back();
        }
        for (ObjectIterator it(containercanteen_691_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_100_11_end: ;
}
// Function purpose: generated callback event_func_5685 processes event block(s) 101_11. Actions/conditions:
//        101_11: adds a metaldetector 231 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions.
void Frames::event_func_5685()
{
    // event 101_11 : adds a metaldetector 231 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_101_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (32))) goto event_101_11_end;
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
    event_101_11_end: ;
}
// Function purpose: generated callback event_func_5686 processes event block(s) 102_11. Actions/conditions:
//        102_11: adds a camera 237 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions.
void Frames::event_func_5686()
{
    // event 102_11 : adds a camera 237 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_102_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (33))) goto event_102_11_end;
        camera_237_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_camera_694(0, 0), 1);
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
    event_102_11_end: ;
}
// Function purpose: generated callback event_func_5687 processes event block(s) 104_11. Actions/conditions:
//        104_11: adds a containerlaundrydirty 274 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions.
void Frames::event_func_5687()
{
    // event 104_11 : adds a containerlaundrydirty 274 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_104_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (35))) goto event_104_11_end;
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
    event_104_11_end: ;
}
// Function purpose: generated callback event_func_5688 processes event block(s) 106_11. Actions/conditions:
//        106_11: checks the event-specific game state condition is met; this handler gates a game event without a
//        direct value/object action.
void Frames::event_func_5688()
{
    // event 106_11 : checks the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_load_map_from_file_1)) goto event_106_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (40))) goto event_106_11_end;
        if (!((global_values->get(11)) == (0))) goto event_106_11_end;
        {
            loop_make_mines_running = true;
            int times = int(2);
            loop_make_mines_index = 0;
            while (loop_make_mines_index < times) {
                loop_make_mines_11();
                if (!loop_make_mines_running) break;
                loop_make_mines_index++;
            }
        }
    }
    event_106_11_end: ;
}
// Function purpose: generated callback event_func_5689 processes event block(s) 108_11. Actions/conditions:
//        108_11: adds a containertimber 267 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions.
void Frames::event_func_5689()
{
    // event 108_11 : adds a containertimber 267 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_108_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (41))) goto event_108_11_end;
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
    event_108_11_end: ;
}
// Function purpose: generated callback event_func_5690 processes event block(s) 112_11. Actions/conditions:
//        112_11: adds a licenseprints 729 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions.
void Frames::event_func_5690()
{
    // event 112_11 : adds a licenseprints 729 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 5 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_112_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (45))) goto event_112_11_end;
        licenseprints_729_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_licenseprints_729(0, 0), 1);
            licenseprints_729_instances.add_back();
        }
        for (ObjectIterator it(licenseprints_729_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)), string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_112_11_end: ;
}
// Function purpose: generated callback event_func_5691 processes event block(s) 122_11. Actions/conditions:
//        122_11: adds a bedplayer 338 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16.
void Frames::event_func_5691()
{
    // event 122_11 : adds a bedplayer 338 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16
    {
        if (!(group_load_map_from_file_1)) goto event_122_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (54))) goto event_122_11_end;
        bedplayer_338_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bedplayer_731(0, 0), 1);
            bedplayer_338_instances.add_back();
        }
        for (ObjectIterator it(bedplayer_338_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_122_11_end: ;
}
// Function purpose: generated callback event_func_5692 processes event block(s) 123_11. Actions/conditions:
//        123_11: adds a desks 717 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 1 more actions.
void Frames::event_func_5692()
{
    // event 123_11 : adds a desks 717 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 1 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_123_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (55))) goto event_123_11_end;
        desks_717_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_desks_717(0, 0), 1);
            desks_717_instances.add_back();
        }
        for (ObjectIterator it(desks_717_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->set_direction(8);
        }
    }
    event_123_11_end: ;
}
// Function purpose: generated callback event_func_5693 processes event block(s) 126_11. Actions/conditions:
//        126_11: adds a spotlightsroof 213 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16; plus 7 more actions.
void Frames::event_func_5693()
{
    // event 126_11 : adds a spotlightsroof 213 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16; plus 7 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_126_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (60))) goto event_126_11_end;
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
    event_126_11_end: ;
}
// Function purpose: generated callback event_func_5694 processes event block(s) 130_11. Actions/conditions:
//        130_11: adds a hiding 379 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1))*16.
void Frames::event_func_5694()
{
    // event 130_11 : adds a hiding 379 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1))*16
    {
        if (!(group_load_map_from_file_1)) goto event_130_11_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (68))) goto event_130_11_end;
        hiding_379_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_hiding_748(0, 0), 1);
            hiding_379_instances.add_back();
        }
        for (ObjectIterator it(hiding_379_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_130_11_end: ;
}
