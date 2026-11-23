#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_quotadone_6()
{
    event_func_2773();
    event_func_2774();
    event_func_2775();
}
// Function purpose: generated callback event_func_2776 processes event block(s) 3431_6. Actions/conditions:
//        3431_6: sets allow to 0.
void Frames::event_func_2776()
{
    // event 3431_6 : sets allow to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3431_6_end;
        cursor_178_instances.clear_selection();
        sheetsposters_294_instances.clear_selection();
        if (!check_overlap(cursor_178_instances, sheetsposters_294_instances)) goto event_3431_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(478, str_allow_1353, 0);
    }
    event_3431_6_end: ;
}
// Function purpose: generated callback event_func_2777 processes event block(s) 3432_6. Actions/conditions:
//        3432_6: sets allow to 0.
void Frames::event_func_2777()
{
    // event 3432_6 : sets allow to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3432_6_end;
        cursor_178_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(cursor_178_instances, qualifier_8)) goto event_3432_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(478, str_allow_1353, 0);
    }
    event_3432_6_end: ;
}
// Function purpose: generated callback event_func_2778 processes event block(s) 3433_6. Actions/conditions:
//        3433_6: sets allow to 0.
void Frames::event_func_2778()
{
    // event 3433_6 : sets allow to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3433_6_end;
        cursor_178_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(cursor_178_instances, qualifier_19)) goto event_3433_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(478, str_allow_1353, 0);
    }
    event_3433_6_end: ;
}
// Function purpose: generated callback event_func_2779 processes event block(s) 3436_6. Actions/conditions:
//        3436_6: creates a sheetsposters 294 object; creates a dust 223 object; moves the target object to a layer;
//        plus 1 more actions.
void Frames::event_func_2779()
{
    // event 3436_6 : creates a sheetsposters 294 object; creates a dust 223 object; moves the target object to a layer; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3436_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(478, str_allow_1353)) == (1))) goto event_3436_6_end;
        FrameObject * single_instance_3436_6_0; single_instance_3436_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_sheetsposters_294(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3436_6_0 == NULL)
                    single_instance_3436_6_0 = new_obj;
            }
        }
        FrameObject * single_instance_3436_6_1; single_instance_3436_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 16), parent->layer);
                if (single_instance_3436_6_1 == NULL)
                    single_instance_3436_6_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3436_6_1))->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_removeitem_running = true;
            int times = int(1);
            loop_removeitem_index = 0;
            while (loop_removeitem_index < times) {
                loop_removeitem_6();
                if (!loop_removeitem_running) break;
                loop_removeitem_index++;
            }
        }
        media.play_id(SOUND_STEP_1, 1-1);
    }
    event_3436_6_end: ;
}
void Frames::loop_hang_sheet_6()
{
    event_func_2776();
    event_func_2777();
    event_func_2778();
    event_func_1860();
    event_func_1859();
    event_func_2779();
    event_func_1862();
}
// Function purpose: generated callback event_func_2780 processes event block(s) 587_6. Actions/conditions:
//        587_6: adds a line to the current list.
void Frames::event_func_2780()
{
    // event 587_6 : adds a line to the current list
    {
        if (!(group_setup_1)) goto event_587_6_end;
        craftsort_346_instances.clear_selection();
        for (ObjectIterator it(craftsort_346_instances); !it.end(); ++it) {
            ((ListObject*)*it)->add_line(number_to_string(loop_makelist_index+1));
        }
    }
    event_587_6_end: ;
}
void Frames::loop_makelist_6()
{
    event_func_2780();
}
// Function purpose: generated callback event_func_2781 processes event block(s) 588_6. Actions/conditions:
//        588_6: sets the current line selection; sets Patrol to gameVariables->get_string(689,
//        Patrol)+((ListObject*)get_single(craftsort_346_instances))->get_current_line()+_; removes a line from the
//        current list.
void Frames::event_func_2781()
{
    // event 588_6 : sets the current line selection; sets Patrol to gameVariables->get_string(689, Patrol)+((ListObject*)get_single(craftsort_346_instances))->get_current_line()+_; removes a line from the current list
    {
        if (!(group_setup_1)) goto event_588_6_end;
        craftsort_346_instances.clear_selection();
        for (ObjectIterator it(craftsort_346_instances); !it.end(); ++it) {
            ((ListObject*)*it)->current_line = 1+randrange_event(((ListObject*)*it)->get_count());
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(689, str_patrol_1808, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(689, str_patrol_1808)+((ListObject*)get_single(craftsort_346_instances))->get_current_line()+str__96);
        for (ObjectIterator it(craftsort_346_instances); !it.end(); ++it) {
            ((ListObject*)*it)->delete_line(((ListObject*)*it)->current_line);
        }
    }
    event_588_6_end: ;
}
void Frames::loop_patrol_6()
{
    event_func_2781();
}
// Function purpose: generated callback event_func_2782 processes event block(s) 585_6. Actions/conditions:
//        585_6: sets Patrol to empty_string; clears the current selection or contents.
void Frames::event_func_2782()
{
    // event 585_6 : sets Patrol to empty_string; clears the current selection or contents
    {
        if (!(group_setup_1)) goto event_585_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_set_guard_patrols_index+1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_585_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(689, str_patrol_1808, empty_string);
        craftsort_346_instances.clear_selection();
        for (ObjectIterator it(craftsort_346_instances); !it.end(); ++it) {
            ((ListObject*)*it)->clear();
        }
        {
            loop_makelist_running = true;
            int times = int(waypointguard2_315_instances.size());
            loop_makelist_index = 0;
            while (loop_makelist_index < times) {
                loop_makelist_6();
                if (!loop_makelist_running) break;
                loop_makelist_index++;
            }
        }
        {
            loop_patrol_running = true;
            int times = int(5);
            loop_patrol_index = 0;
            while (loop_patrol_index < times) {
                loop_patrol_6();
                if (!loop_patrol_running) break;
                loop_patrol_index++;
            }
        }
    }
    event_585_6_end: ;
}
// Function purpose: generated callback event_func_2783 processes event block(s) 586_6. Actions/conditions:
//        586_6: sets the selected object's string to gameVariables->get_string(689, Patrol).
void Frames::event_func_2783()
{
    // event 586_6 : sets the selected object's string to gameVariables->get_string(689, Patrol)
    {
        if (!(group_setup_1)) goto event_586_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_set_guard_patrols_index+1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_586_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(3, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(689, str_patrol_1808));
        }
    }
    event_586_6_end: ;
}
void Frames::loop_set_guard_patrols_6()
{
    event_func_2782();
    event_func_2783();
}
// Function purpose: generated callback event_func_2784 processes event block(s) 3275_6. Actions/conditions:
//        3275_6: sets RopeX to ((Active*)get_single(usespot_208_instances, default_active_instance))->get_x()+8; sets
//        RopeY to ((Active*)get_single(usespot_208_instances, default_active_instance))->get_y()+8; increments
//        Fatigue by 5; plus 9 more actions.
void Frames::event_func_2784()
{
    // event 3275_6 : sets RopeX to ((Active*)get_single(usespot_208_instances, default_active_instance))->get_x()+8; sets RopeY to ((Active*)get_single(usespot_208_instances, default_active_instance))->get_y()+8; increments Fatigue by 5; plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3275_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(9)) == (str_rope_463))) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_3275_6_end;
        if (!((((Active*)get_single(usespot_208_instances, default_active_instance))->layer->index+1) == (5))) goto event_3275_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(13, str_ropex_461, ((Active*)get_single(usespot_208_instances, default_active_instance))->get_x()+8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(14, str_ropey_462, ((Active*)get_single(usespot_208_instances, default_active_instance))->get_y()+8);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 5);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(15, str_rope_463, 1);
        FrameObject * single_instance_3275_6_0; single_instance_3275_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(usespot_208_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_3275_6_0 == NULL)
                    single_instance_3275_6_0 = new_obj;
            }
        }
        grapplingrope_345_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_grapplingrope_345(0, 0), 4);
            grapplingrope_345_instances.add_back();
        }
        for (ObjectIterator it(grapplingrope_345_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
        }
        media.play_id(SOUND_THROW_4, 1-1);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(17);
        }
    }
    event_3275_6_end: ;
}
// Function purpose: generated callback event_func_2785 processes event block(s) 3276_6. Actions/conditions:
//        3276_6: sets RopeX to ((Active*)get_single(usespot_208_instances, default_active_instance))->get_x()+8; sets
//        RopeY to (((Active*)get_single(usespot_208_instances, default_active_instance))->get_y()+8)-16; increments
//        Fatigue by 5; plus 9 more actions.
void Frames::event_func_2785()
{
    // event 3276_6 : sets RopeX to ((Active*)get_single(usespot_208_instances, default_active_instance))->get_x()+8; sets RopeY to (((Active*)get_single(usespot_208_instances, default_active_instance))->get_y()+8)-16; increments Fatigue by 5; plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3276_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(9)) == (str_rope_463))) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_3276_6_end;
        if (!((((Active*)get_single(usespot_208_instances, default_active_instance))->layer->index+1) == (2))) goto event_3276_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(13, str_ropex_461, ((Active*)get_single(usespot_208_instances, default_active_instance))->get_x()+8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(14, str_ropey_462, (((Active*)get_single(usespot_208_instances, default_active_instance))->get_y()+8)-16);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 5);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(15, str_rope_463, 1);
        FrameObject * single_instance_3276_6_0; single_instance_3276_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(usespot_208_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_3276_6_0 == NULL)
                    single_instance_3276_6_0 = new_obj;
            }
        }
        grapplingrope_345_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_grapplingrope_345(0, 0), 4);
            grapplingrope_345_instances.add_back();
        }
        for (ObjectIterator it(grapplingrope_345_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
        }
        media.play_id(SOUND_THROW_4, 1-1);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(17);
        }
    }
    event_3276_6_end: ;
}
void Frames::loop_rope_go_6()
{
    event_func_2784();
    event_func_2785();
}
// Function purpose: generated callback event_func_2786 processes event block(s) 3251_6. Actions/conditions:
//        3251_6: adds a usespot 208 instance; sets the selected object's string to Rope; sets the selected object's
//        horizontal position to ((get_mouse_x()/MathHelper()/16)*16)+16; plus 1 more actions.
void Frames::event_func_2786()
{
    // event 3251_6 : adds a usespot 208 instance; sets the selected object's string to Rope; sets the selected object's horizontal position to ((get_mouse_x()/MathHelper()/16)*16)+16; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3251_6_end;
        if (!((get_mouse_x()) > (((Active*)get_instance(playerBase_instances))->get_x()))) goto event_3251_6_end;
        usespot_208_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_usespot_208(0, 0), 4);
            usespot_208_instances.add_back();
        }
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(9, str_rope_463);
            ((Active*)*it)->set_x(((get_mouse_x()/MathHelper()/16)*16)+16);
            ((Active*)*it)->set_y(((get_mouse_y()/MathHelper()/16)*16));
        }
    }
    event_3251_6_end: ;
}
// Function purpose: generated callback event_func_2787 processes event block(s) 3252_6. Actions/conditions:
//        3252_6: adds a usespot 208 instance; sets the selected object's string to Rope; sets the selected object's
//        horizontal position to ((get_mouse_x()/MathHelper()/16)*16)-16; plus 1 more actions.
void Frames::event_func_2787()
{
    // event 3252_6 : adds a usespot 208 instance; sets the selected object's string to Rope; sets the selected object's horizontal position to ((get_mouse_x()/MathHelper()/16)*16)-16; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3252_6_end;
        if (!((get_mouse_x()) < (((Active*)get_instance(playerBase_instances))->get_x()))) goto event_3252_6_end;
        usespot_208_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_usespot_208(0, 0), 4);
            usespot_208_instances.add_back();
        }
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(9, str_rope_463);
            ((Active*)*it)->set_x(((get_mouse_x()/MathHelper()/16)*16)-16);
            ((Active*)*it)->set_y(((get_mouse_y()/MathHelper()/16)*16));
        }
    }
    event_3252_6_end: ;
}
// Function purpose: generated callback event_func_2788 processes event block(s) 3254_6. Actions/conditions:
//        3254_6: sets the selected object's layer to 2-1; sets the selected object's vertical position to selected
//        object->get_y()+16.
void Frames::event_func_2788()
{
    // event 3254_6 : sets the selected object's layer to 2-1; sets the selected object's vertical position to selected object->get_y()+16
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3254_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(9)) == (str_rope_463))) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_3254_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value(((Active*)get_single(usespot_208_instances, default_active_instance))->get_x()/MathHelper()/16, ((Active*)get_single(usespot_208_instances, default_active_instance))->get_y()/MathHelper()/16, 5)) == (0))) goto event_3254_6_end;
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(2-1);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+16);
        }
    }
    event_3254_6_end: ;
}
// Function purpose: generated callback event_func_2789 processes event block(s) 3255_6. Actions/conditions:
//        3255_6: sets go to 0.
void Frames::event_func_2789()
{
    // event 3255_6 : sets go to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3255_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(671, str_targlay_1775)) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(670, str_currlay_1774)))) goto event_3255_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(669, str_go_1773, 0);
    }
    event_3255_6_end: ;
}
// Function purpose: generated callback event_func_2790 processes event block(s) 3257_6. Actions/conditions:
//        3257_6: sets go to 2.
void Frames::event_func_2790()
{
    // event 3257_6 : sets go to 2
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3257_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(9)) == (str_rope_463))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_3257_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(669, str_go_1773, 2);
    }
    event_3257_6_end: ;
}
// Function purpose: generated callback event_func_2791 processes event block(s) 3258_6. Actions/conditions:
//        3258_6: sets SpeakText to Misc entry 9; plays a sound or music track.
void Frames::event_func_2791()
{
    // event 3258_6 : sets SpeakText to Misc entry 9; plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3258_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(669, str_go_1773)) == (0))) goto event_3258_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_9_327));
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
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_3258_6_end: ;
}
// Function purpose: generated callback event_func_2792 processes event block(s) 3260_6. Actions/conditions:
//        3260_6: checks scene is active; game state go; this handler gates a game event without a direct value/object
//        action.
void Frames::event_func_2792()
{
    // event 3260_6 : checks scene is active; game state go; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3260_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(669, str_go_1773)) == (1))) goto event_3260_6_end;
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
        {
            loop_rope_go_running = true;
            int times = int(1);
            loop_rope_go_index = 0;
            while (loop_rope_go_index < times) {
                loop_rope_go_6();
                if (!loop_rope_go_running) break;
                loop_rope_go_index++;
            }
        }
    }
    event_3260_6_end: ;
}
// Function purpose: generated callback event_func_2793 processes event block(s) 3261_6. Actions/conditions:
//        3261_6: removes the selected object.
void Frames::event_func_2793()
{
    // event 3261_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3261_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(9)) == (str_rope_463))) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_3261_6_end;
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3261_6_end: ;
}
void Frames::loop_rope_horiz_check_6()
{
    event_func_2786();
    event_func_2787();
    event_func_2718();
    event_func_2788();
    event_func_2789();
    event_func_2720();
    event_func_2790();
    event_func_2791();
    event_func_2723();
    event_func_2792();
    event_func_2793();
}
// Function purpose: generated callback event_func_2794 processes event block(s) 824_6. Actions/conditions:
//        824_6: removes the selected object; sets the selected object's direction to 4.
void Frames::event_func_2794()
{
    // event 824_6 : removes the selected object; sets the selected object's direction to 4
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_824_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        ((Active*)get_instance(dialogPanel_instances))->set_direction(4);
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_824_6_end: ;
}
// Function purpose: generated callback event_func_2795 processes event block(s) 825_6. Actions/conditions:
//        825_6: creates a dchar 214 object; positions the target object; sets text formatting to bold; plus 5 more
//        actions.
void Frames::event_func_2795()
{
    // event 825_6 : creates a dchar 214 object; positions the target object; sets text formatting to bold; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_825_6_end;
        FrameObject * single_instance_825_6_0; single_instance_825_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + -80), parent->layer);
                if (single_instance_825_6_0 == NULL)
                    single_instance_825_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_825_6_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_825_6_0)), frame_left()));
        ((Text*)((Text*)single_instance_825_6_0))->set_bold(1);
        ((Text*)((Text*)single_instance_825_6_0))->blend_color.set(Color(243, 119, 0));
        ((Text*)((Text*)single_instance_825_6_0))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_help_1809, number_to_string(((Active*)get_instance(helpTopicCursor_instances, default_active_instance))->alterables->values.get(0))+str_title_1810)));
    }
    event_825_6_end: ;
}
// Function purpose: generated callback event_func_2796 processes event block(s) 826_6. Actions/conditions:
//        826_6: sets a game or interface text string.
void Frames::event_func_2796()
{
    // event 826_6 : sets a game or interface text string
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_826_6_end;
        if (!((get_platform()) != (str_chowdren_os_x_60))) goto event_826_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(690, str_help_str_1811, ((INI*)get_instance(translationData_instances))->get_string(str_help_1809, number_to_string(((Active*)get_instance(helpTopicCursor_instances, default_active_instance))->alterables->values.get(0))));
    }
    event_826_6_end: ;
}
// Function purpose: generated callback event_func_2797 processes event block(s) 827_6. Actions/conditions:
//        827_6: sets a game or interface text string.
void Frames::event_func_2797()
{
    // event 827_6 : sets a game or interface text string
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_827_6_end;
        if (!((get_platform()) == (str_chowdren_os_x_60))) goto event_827_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(690, str_help_str_1811, ((INI*)get_instance(translationData_instances))->get_string(str_help_mac_1812, number_to_string(((Active*)get_instance(helpTopicCursor_instances, default_active_instance))->alterables->values.get(0))));
    }
    event_827_6_end: ;
}
// Function purpose: generated callback event_func_2798 processes event block(s) 828_6. Actions/conditions:
//        828_6: sets help_str to StringReplace::replace(gameVariables->get_string(690, help_str), #, ); sets
//        help_str to StringReplace::replace(gameVariables->get_string(690, help_str), $up,
//        translate_key_to_string(manager.up)); sets help_str to
//        StringReplace::replace(gameVariables->get_string(690, help_str), $left,
//        translate_key_to_string(manager.left)); plus 11 more actions.
void Frames::event_func_2798()
{
    // event 828_6 : sets help_str to StringReplace::replace(gameVariables->get_string(690, help_str), #, ); sets help_str to StringReplace::replace(gameVariables->get_string(690, help_str), $up, translate_key_to_string(manager.up)); sets help_str to StringReplace::replace(gameVariables->get_string(690, help_str), $left, translate_key_to_string(manager.left)); plus 11 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_828_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(690, str_help_str_1811, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(690, str_help_str_1811), str__346, str__198));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(690, str_help_str_1811, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(690, str_help_str_1811), str_up_1813, translate_key_to_string(manager.up)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(690, str_help_str_1811, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(690, str_help_str_1811), str_left_1814, translate_key_to_string(manager.left)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(690, str_help_str_1811, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(690, str_help_str_1811), str_down_1815, translate_key_to_string(manager.down)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(690, str_help_str_1811, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(690, str_help_str_1811), str_right_1816, translate_key_to_string(manager.right)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(690, str_help_str_1811, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(690, str_help_str_1811), str_combat_1817, translate_key_to_string(manager.button3)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(690, str_help_str_1811, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(690, str_help_str_1811), str_action1_1818, translate_key_to_string(manager.button1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(690, str_help_str_1811, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(690, str_help_str_1811), str_action2_1819, translate_key_to_string(manager.button2)));
        FrameObject * single_instance_828_6_0; single_instance_828_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -112, parent->y + -60), parent->layer);
                if (single_instance_828_6_0 == NULL)
                    single_instance_828_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_828_6_0))->blend_color.set(Color(210, 210, 210));
        ((Text*)((Text*)single_instance_828_6_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(690, str_help_str_1811));
    }
    event_828_6_end: ;
}
// Function purpose: generated callback event_func_2799 processes event block(s) 829_6. Actions/conditions:
//        829_6: removes the selected object.
void Frames::event_func_2799()
{
    // event 829_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_829_6_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_829_6_end: ;
}
// Function purpose: generated callback event_func_2800 processes event block(s) 830_6. Actions/conditions:
//        830_6: creates a buttons 245 object; sets the object's animation to 41.
void Frames::event_func_2800()
{
    // event 830_6 : creates a buttons 245 object; sets the object's animation to 41
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_830_6_end;
        if (is_key_pressed(SDLK_F1)) goto event_830_6_end;
        FrameObject * single_instance_830_6_0; single_instance_830_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 60), parent->layer);
                if (single_instance_830_6_0 == NULL)
                    single_instance_830_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_830_6_0))->force_animation(41);
    }
    event_830_6_end: ;
}
// Function purpose: generated callback event_func_2801 processes event block(s) 831_6. Actions/conditions:
//        831_6: creates a dchar 214 object; positions the target object; updates a value on the target object; plus 1
//        more actions.
void Frames::event_func_2801()
{
    // event 831_6 : creates a dchar 214 object; positions the target object; updates a value on the target object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_831_6_end;
        if (is_key_pressed(SDLK_F1)) goto event_831_6_end;
        FrameObject * single_instance_831_6_0; single_instance_831_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + 64), parent->layer);
                if (single_instance_831_6_0 == NULL)
                    single_instance_831_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_831_6_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_831_6_0)), frame_left())+4);
        ((Text*)((Text*)single_instance_831_6_0))->blend_color.set(Color(192, 192, 192));
        ((Text*)((Text*)single_instance_831_6_0))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_leaderboards_1710, str_5_164)));
    }
    event_831_6_end: ;
}
void Frames::loop_menuhelp_6()
{
    event_func_2794();
    event_func_2795();
    event_func_2796();
    event_func_2797();
    event_func_2798();
    event_func_2799();
    event_func_2800();
    event_func_2801();
}
// Function purpose: generated callback event_func_2802 processes event block(s) 814_6. Actions/conditions:
//        814_6: removes the selected object; sets the selected object's direction to 8.
void Frames::event_func_2802()
{
    // event 814_6 : removes the selected object; sets the selected object's direction to 8
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_814_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        ((Active*)get_instance(dialogPanel_instances))->set_direction(8);
    }
    event_814_6_end: ;
}
// Function purpose: generated callback event_func_2803 processes event block(s) 815_6. Actions/conditions:
//        815_6: creates a dchar 214 object; positions the target object; sets text formatting to bold; plus 5 more
//        actions.
void Frames::event_func_2803()
{
    // event 815_6 : creates a dchar 214 object; positions the target object; sets text formatting to bold; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_815_6_end;
        FrameObject * single_instance_815_6_0; single_instance_815_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + -5, parent->y + -80), parent->layer);
                if (single_instance_815_6_0 == NULL)
                    single_instance_815_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_815_6_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_815_6_0)), frame_left()));
        ((Text*)((Text*)single_instance_815_6_0))->set_bold(1);
        ((Text*)((Text*)single_instance_815_6_0))->blend_color.set(Color(243, 119, 0));
        ((Text*)((Text*)single_instance_815_6_0))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_pausemenu_1094, str_3_158)));
    }
    event_815_6_end: ;
}
// Function purpose: generated callback event_func_2804 processes event block(s) 816_6. Actions/conditions:
//        816_6: creates a dialogue2 179 object; updates a value on the target object; sets a game or interface text
//        string; plus 1 more actions.
void Frames::event_func_2804()
{
    // event 816_6 : creates a dialogue2 179 object; updates a value on the target object; sets a game or interface text string; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_816_6_end;
        FrameObject * single_instance_816_6_0; single_instance_816_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -110, parent->y + -60), parent->layer);
                if (single_instance_816_6_0 == NULL)
                    single_instance_816_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_816_6_0))->blend_color.set(Color(210, 210, 210));
        ((Text*)((Text*)single_instance_816_6_0))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_help_1809, str_1_title_1820)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_help_1809, str_2_title_1821)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_help_1809, str_3_title_1822)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_help_1809, str_4_title_1823)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_help_1809, str_5_title_1824)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_help_1809, str_6_title_1825)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_help_1809, str_7_title_1826)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_help_1809, str_8_title_1827)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_help_1809, str_9_title_1828)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_help_1809, str_10_title_1829));
        ((Text*)((Text*)single_instance_816_6_0))->set_string(((Text*)single_instance_816_6_0)->text+empty_string);
    }
    event_816_6_end: ;
}
// Function purpose: generated callback event_func_2805 processes event block(s) 817_6. Actions/conditions:
//        817_6: creates a dialogue2 179 object; updates a value on the target object; sets a game or interface text
//        string; plus 1 more actions.
void Frames::event_func_2805()
{
    // event 817_6 : creates a dialogue2 179 object; updates a value on the target object; sets a game or interface text string; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_817_6_end;
        FrameObject * single_instance_817_6_0; single_instance_817_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + 0, parent->y + -60), parent->layer);
                if (single_instance_817_6_0 == NULL)
                    single_instance_817_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_817_6_0))->blend_color.set(Color(210, 210, 210));
        ((Text*)((Text*)single_instance_817_6_0))->set_string(empty_string);
        ((Text*)((Text*)single_instance_817_6_0))->set_string(((Text*)single_instance_817_6_0)->text+((INI*)get_instance(translationData_instances))->get_string(str_help_1809, str_11_title_1830)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_help_1809, str_12_title_1831)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_help_1809, str_13_title_1832)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_help_1809, str_14_title_1833)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_help_1809, str_15_title_1834)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_help_1809, str_16_title_1835)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_help_1809, str_17_title_1836)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_help_1809, str_18_title_1837)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_help_1809, str_19_title_1838)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_help_1809, str_20_title_1839));
    }
    event_817_6_end: ;
}
// Function purpose: generated callback event_func_2806 processes event block(s) 818_6. Actions/conditions:
//        818_6: creates a menucursor 406 object.
void Frames::event_func_2806()
{
    // event 818_6 : creates a menucursor 406 object
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_818_6_end;
        FrameObject * single_instance_818_6_0; single_instance_818_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_helpTopicCursor(parent->x + -105, parent->y + -50), parent->layer);
                if (single_instance_818_6_0 == NULL)
                    single_instance_818_6_0 = new_obj;
            }
        }
    }
    event_818_6_end: ;
}
// Function purpose: generated callback event_func_2807 processes event block(s) 821_6. Actions/conditions:
//        821_6: sets the selected object's numeric value to 1.
void Frames::event_func_2807()
{
    // event 821_6 : sets the selected object's numeric value to 1
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_821_6_end;
        if (!(is_key_pressed(SDLK_F1))) goto event_821_6_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
        }
        {
            loop_menuhelp_running = true;
            int times = int(1);
            loop_menuhelp_index = 0;
            while (loop_menuhelp_index < times) {
                loop_menuhelp_6();
                if (!loop_menuhelp_running) break;
                loop_menuhelp_index++;
            }
        }
    }
    event_821_6_end: ;
}
void Frames::loop_basemenuhelp_6()
{
    event_func_2802();
    event_func_2803();
    event_func_2804();
    event_func_2805();
    event_func_2806();
    event_func_2800();
    event_func_2801();
    event_func_2807();
}
// Function purpose: generated callback event_func_2808 processes event block(s) 3336_6. Actions/conditions:
//        3336_6: stores an integer value; stores player data.
void Frames::event_func_2808()
{
    // event 3336_6 : stores an integer value; stores player data
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3336_6_end;
        if (!((global_values->get(16)) == (1))) goto event_3336_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->set_int(str_strip_1840, ((SteamObject*)get_instance(steamworks2_469_instances))->get_int(str_strip_1840)+1);
        ((SteamObject*)get_instance(steamworks2_469_instances))->store_user_data();
    }
    event_3336_6_end: ;
}
void Frames::loop_strip_stat_6()
{
    event_func_2808();
}
// Function purpose: generated callback event_func_2809 processes event block(s) 3332_6. Actions/conditions:
//        3332_6: sets FoundSlot to loop_desk_inv_findslot_index+1; plays a sound or music track.
void Frames::event_func_2809()
{
    // event 3332_6 : sets FoundSlot to loop_desk_inv_findslot_index+1; plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3332_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inv_512+number_to_string(loop_desk_inv_findslot_index+1))) == (empty_string))) goto event_3332_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, loop_desk_inv_findslot_index+1);
            loop_desk_inv_findslot_running = false;
    
        media.play_id(SOUND_STEP_1, 1-1);
    }
    event_3332_6_end: ;
}
void Frames::loop_desk_inv_findslot_6()
{
    event_func_2809();
}
// Function purpose: generated callback event_func_2810 processes event block(s) 3341_6. Actions/conditions:
//        3341_6: changes a stored game value.
void Frames::event_func_2810()
{
    // event 3341_6 : changes a stored game value
    bool or_result_3341_6 = false;
    bool or_temp_result_3341_6_0 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3341_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(691, str_looteditem_1841)) == (1))) goto or_event_3341_6_0_end;
        or_result_3341_6 = true;
        or_temp_result_3341_6_0 = true;
    }
    or_event_3341_6_0_end: ;
    // event 3341_6 : changes a stored game value
    bool or_temp_result_3341_6_1 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3341_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(691, str_looteditem_1841)) == (6))) goto or_event_3341_6_1_end;
        or_result_3341_6 = true;
        or_temp_result_3341_6_1 = true;
    }
    or_event_3341_6_1_end: ;
    // event 3341_6 : changes a stored game value
    bool or_temp_result_3341_6_2 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3341_6_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(691, str_looteditem_1841)) == (7))) goto or_event_3341_6_2_end;
        or_result_3341_6 = true;
        or_temp_result_3341_6_2 = true;
    }
    or_event_3341_6_2_end: ;
    // event 3341_6 : changes a stored game value
    bool or_temp_result_3341_6_3 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3341_6_3_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(691, str_looteditem_1841)) == (0))) goto or_event_3341_6_3_end;
        or_result_3341_6 = true;
        or_temp_result_3341_6_3 = true;
    }
    or_event_3341_6_3_end: ;
    // event 3341_6 : changes a stored game value
    bool or_temp_result_3341_6_4 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3341_6_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(691, str_looteditem_1841)) == (43))) goto or_event_3341_6_4_end;
        or_result_3341_6 = true;
        or_temp_result_3341_6_4 = true;
        or_event_3341_6_4_end: ;
        if (!or_result_3341_6) goto or_final_or_event_3341_6_4_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->add_value(str_stolenkeys_606+number_to_string(((AssociateArray*)*it)->get_value(12, str_lootid_452)), 1);
        }
    }
    or_final_or_event_3341_6_4_end: ;
}
void Frames::loop_looted_guard_check_6()
{
    event_func_2810();
}
// Function purpose: generated callback event_func_2811 processes event block(s) 3331_6. Actions/conditions:
//        3331_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_2811()
{
    // event 3331_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3331_6_end;
        {
            loop_desk_inv_findslot_running = true;
            int times = int(6);
            loop_desk_inv_findslot_index = 0;
            while (loop_desk_inv_findslot_index < times) {
                loop_desk_inv_findslot_6();
                if (!loop_desk_inv_findslot_running) break;
                loop_desk_inv_findslot_index++;
            }
        }
    }
    event_3331_6_end: ;
}
// Function purpose: generated callback event_func_2812 processes event block(s) 3333_6. Actions/conditions:
//        3333_6: sets the selected object's scale to 1.
void Frames::event_func_2812()
{
    // event 3333_6 : sets the selected object's scale to 1
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3333_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3333_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_string(692, str_from_1842)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(387, str_clickeditemslot_1188)))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3333_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(1);
        }
    }
    event_3333_6_end: ;
}
// Function purpose: generated callback event_func_2813 processes event block(s) 3334_6. Actions/conditions:
//        3334_6: sets the selected object's numeric value to 0; sets a game or interface text string.
void Frames::event_func_2813()
{
    // event 3334_6 : sets the selected object's numeric value to 0; sets a game or interface text string
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3334_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3334_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(692, str_from_1842)) == (str_loot_outfit_450))) goto event_3334_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_outfit_450))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(387, str_clickeditemslot_1188)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3334_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452)), empty_string);
    }
    event_3334_6_end: ;
}
// Function purpose: generated callback event_func_2814 processes event block(s) 3335_6. Actions/conditions:
//        3335_6: sets the selected object's numeric value to 1; sets the object position in the world; sets the
//        selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 7 more actions.
void Frames::event_func_2814()
{
    // event 3335_6 : sets the selected object's numeric value to 1; sets the object position in the world; sets the selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3335_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3335_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(692, str_from_1842)) == (str_loot_outfit_450))) goto event_3335_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_outfit_450))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3335_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3335_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_3335_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3335_6_0: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161));
            ((Active*)*it)->alterables->strings.set(0, str_inven_820);
            ((Active*)*it)->alterables->flags.enable(-5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)), number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(148, str_looted_721, 30);
        {
            loop_strip_stat_running = true;
            int times = int(1);
            loop_strip_stat_index = 0;
            while (loop_strip_stat_index < times) {
                loop_strip_stat_6();
                if (!loop_strip_stat_running) break;
                loop_strip_stat_index++;
            }
        }
    }
    event_3335_6_end: ;
}
// Function purpose: generated callback event_func_2815 processes event block(s) 3337_6. Actions/conditions:
//        3337_6: sets the selected object's numeric value to 0; sets a game or interface text string.
void Frames::event_func_2815()
{
    // event 3337_6 : sets the selected object's numeric value to 0; sets a game or interface text string
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3337_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3337_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(692, str_from_1842)) == (str_loot_weapon_449))) goto event_3337_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_weapon_449))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(387, str_clickeditemslot_1188)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3337_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_weapon_460+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452)), empty_string);
    }
    event_3337_6_end: ;
}
// Function purpose: generated callback event_func_2816 processes event block(s) 3338_6. Actions/conditions:
//        3338_6: sets the selected object's numeric value to 1; sets the object position in the world; sets the
//        selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 7 more actions.
void Frames::event_func_2816()
{
    // event 3338_6 : sets the selected object's numeric value to 1; sets the object position in the world; sets the selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3338_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3338_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(692, str_from_1842)) == (str_loot_weapon_449))) goto event_3338_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_weapon_449))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3338_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3338_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_3338_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3338_6_0: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161));
            ((Active*)*it)->alterables->strings.set(0, str_inven_820);
            ((Active*)*it)->alterables->flags.enable(-5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(148, str_looted_721, 30);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)), number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7)));
    }
    event_3338_6_end: ;
}
// Function purpose: generated callback event_func_2817 processes event block(s) 3339_6. Actions/conditions:
//        3339_6: sets the selected object's numeric value to 0; sets a game or interface text string.
void Frames::event_func_2817()
{
    // event 3339_6 : sets the selected object's numeric value to 0; sets a game or interface text string
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3339_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3339_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(692, str_from_1842)) == (str_loot_448))) goto event_3339_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_448))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(387, str_clickeditemslot_1188)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3339_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452))+str_inv_911+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(387, str_clickeditemslot_1188)), empty_string);
    }
    event_3339_6_end: ;
}
// Function purpose: generated callback event_func_2818 processes event block(s) 3340_6. Actions/conditions:
//        3340_6: sets the selected object's numeric value to 1; sets the object position in the world; sets the
//        selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 8 more actions.
void Frames::event_func_2818()
{
    // event 3340_6 : sets the selected object's numeric value to 1; sets the object position in the world; sets the selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 8 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3340_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3340_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(692, str_from_1842)) == (str_loot_448))) goto event_3340_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_448))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(387, str_clickeditemslot_1188)))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3340_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3340_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_3340_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3340_6_0: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161));
            ((Active*)*it)->alterables->strings.set(0, str_inven_820);
            ((Active*)*it)->alterables->flags.enable(-5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(148, str_looted_721, 30);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)), number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(691, str_looteditem_1841, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2));
        {
            loop_looted_guard_check_running = true;
            int times = int(1);
            loop_looted_guard_check_index = 0;
            while (loop_looted_guard_check_index < times) {
                loop_looted_guard_check_6();
                if (!loop_looted_guard_check_running) break;
                loop_looted_guard_check_index++;
            }
        }
    }
    event_3340_6_end: ;
}
// Function purpose: generated callback event_func_2819 processes event block(s) 3342_6. Actions/conditions:
//        3342_6: sets the selected object's numeric value to 0; sets a game or interface text string.
void Frames::event_func_2819()
{
    // event 3342_6 : sets the selected object's numeric value to 0; sets a game or interface text string
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3342_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3342_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(692, str_from_1842)) == (str_desk_32))) goto event_3342_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_desk_32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(387, str_clickeditemslot_1188)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3342_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(337, str_currentcontainer_1126))+str_slot_617+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(387, str_clickeditemslot_1188)), empty_string);
    }
    event_3342_6_end: ;
}
// Function purpose: generated callback event_func_2820 processes event block(s) 3343_6. Actions/conditions:
//        3343_6: sets the selected object's numeric value to 1; sets the object position in the world; sets the
//        selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 6 more actions.
void Frames::event_func_2820()
{
    // event 3343_6 : sets the selected object's numeric value to 1; sets the object position in the world; sets the selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3343_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3343_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(692, str_from_1842)) == (str_desk_32))) goto event_3343_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_desk_32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(387, str_clickeditemslot_1188)))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3343_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3343_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_3343_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3343_6_0: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161));
            ((Active*)*it)->alterables->strings.set(0, str_inven_820);
            ((Active*)*it)->alterables->flags.enable(-5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)), number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7))+str__96+((Active*)get_single(hudItem_instances, default_active_instance))->alterables->strings.get(1));
    }
    event_3343_6_end: ;
}
// Function purpose: generated callback event_func_2821 processes event block(s) 3344_6. Actions/conditions:
//        3344_6: sets the selected object's numeric value to 0; sets a game or interface text string.
void Frames::event_func_2821()
{
    // event 3344_6 : sets the selected object's numeric value to 0; sets a game or interface text string
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3344_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3344_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(692, str_from_1842)) == (str_container_613))) goto event_3344_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_container_613))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(387, str_clickeditemslot_1188)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3344_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(337, str_currentcontainer_1126))+str_slot_617+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(387, str_clickeditemslot_1188)), empty_string);
    }
    event_3344_6_end: ;
}
// Function purpose: generated callback event_func_2822 processes event block(s) 3345_6. Actions/conditions:
//        3345_6: sets the selected object's numeric value to 1; sets the object position in the world; sets the
//        selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 6 more actions.
void Frames::event_func_2822()
{
    // event 3345_6 : sets the selected object's numeric value to 1; sets the object position in the world; sets the selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3345_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3345_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(692, str_from_1842)) == (str_container_613))) goto event_3345_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_container_613))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(387, str_clickeditemslot_1188)))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3345_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3345_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_3345_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3345_6_0: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161));
            ((Active*)*it)->alterables->strings.set(0, str_inven_820);
            ((Active*)*it)->alterables->flags.enable(-5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)), number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7))+str__96+((Active*)get_single(hudItem_instances, default_active_instance))->alterables->strings.get(1));
    }
    event_3345_6_end: ;
}
// Function purpose: generated callback event_func_2823 processes event block(s) 3346_6. Actions/conditions:
//        3346_6: sets the selected object's numeric value to 0; sets a game or interface text string.
void Frames::event_func_2823()
{
    // event 3346_6 : sets the selected object's numeric value to 0; sets a game or interface text string
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3346_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3346_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(692, str_from_1842)) == (str_toilet_533))) goto event_3346_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_toilet_533))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(387, str_clickeditemslot_1188)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3346_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_toilet_533+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(134, str_currenttoilet_699))+str_slot_617+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(387, str_clickeditemslot_1188)), empty_string);
    }
    event_3346_6_end: ;
}
// Function purpose: generated callback event_func_2824 processes event block(s) 3347_6. Actions/conditions:
//        3347_6: sets the selected object's numeric value to 1; sets the object position in the world; sets the
//        selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 6 more actions.
void Frames::event_func_2824()
{
    // event 3347_6 : sets the selected object's numeric value to 1; sets the object position in the world; sets the selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3347_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3347_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(692, str_from_1842)) == (str_toilet_533))) goto event_3347_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_toilet_533))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(387, str_clickeditemslot_1188)))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3347_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3347_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_3347_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3347_6_0: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161));
            ((Active*)*it)->alterables->strings.set(0, str_inven_820);
            ((Active*)*it)->alterables->flags.enable(-5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)), number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7))+str__96+((Active*)get_single(hudItem_instances, default_active_instance))->alterables->strings.get(1));
    }
    event_3347_6_end: ;
}
// Function purpose: generated callback event_func_2825 processes event block(s) 3348_6. Actions/conditions:
//        3348_6: sets the selected object's numeric value to 0; sets Outfit to empty_string; sets OutfitShort to 0.
void Frames::event_func_2825()
{
    // event 3348_6 : sets the selected object's numeric value to 0; sets Outfit to empty_string; sets OutfitShort to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3348_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3348_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(692, str_from_1842)) == (str_outfit_505))) goto event_3348_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_outfit_505))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3348_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(44, str_outfit_505, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(31, str_outfitshort_494, 0);
    }
    event_3348_6_end: ;
}
// Function purpose: generated callback event_func_2826 processes event block(s) 3349_6. Actions/conditions:
//        3349_6: sets the selected object's numeric value to 1; sets the object position in the world; sets the
//        selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 7 more actions.
void Frames::event_func_2826()
{
    // event 3349_6 : sets the selected object's numeric value to 1; sets the object position in the world; sets the selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3349_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3349_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(692, str_from_1842)) == (str_outfit_505))) goto event_3349_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_outfit_505))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3349_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3349_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_3349_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3349_6_0: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161));
            ((Active*)*it)->alterables->strings.set(0, str_inven_820);
            ((Active*)*it)->set_scale(1);
            ((Active*)*it)->alterables->flags.enable(-5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)), number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7)));
    }
    event_3349_6_end: ;
}
// Function purpose: generated callback event_func_2827 processes event block(s) 3350_6. Actions/conditions:
//        3350_6: sets the selected object's numeric value to 0; sets Weapon to empty_string.
void Frames::event_func_2827()
{
    // event 3350_6 : sets the selected object's numeric value to 0; sets Weapon to empty_string
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3350_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3350_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(692, str_from_1842)) == (str_weapon_704))) goto event_3350_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_weapon_704))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3350_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(139, str_weapon_704, empty_string);
    }
    event_3350_6_end: ;
}
// Function purpose: generated callback event_func_2828 processes event block(s) 3351_6. Actions/conditions:
//        3351_6: sets the selected object's numeric value to 1; sets the object position in the world; sets the
//        selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 7 more actions.
void Frames::event_func_2828()
{
    // event 3351_6 : sets the selected object's numeric value to 1; sets the object position in the world; sets the selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3351_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3351_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(692, str_from_1842)) == (str_weapon_704))) goto event_3351_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_weapon_704))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3351_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3351_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_3351_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3351_6_0: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161));
            ((Active*)*it)->alterables->strings.set(0, str_inven_820);
            ((Active*)*it)->set_scale(1);
            ((Active*)*it)->alterables->flags.enable(-5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)), number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7)));
    }
    event_3351_6_end: ;
}
// Function purpose: generated callback event_func_2829 processes event block(s) 3352_6. Actions/conditions:
//        3352_6: sets the selected object's numeric value to 0.
void Frames::event_func_2829()
{
    // event 3352_6 : sets the selected object's numeric value to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3352_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3352_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(692, str_from_1842)) == (str_craft_900))) goto event_3352_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craft_900))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(387, str_clickeditemslot_1188)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3352_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_3352_6_end: ;
}
// Function purpose: generated callback event_func_2830 processes event block(s) 3353_6. Actions/conditions:
//        3353_6: sets the selected object's numeric value to 1; sets the object position in the world; sets the
//        selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 8 more actions.
void Frames::event_func_2830()
{
    // event 3353_6 : sets the selected object's numeric value to 1; sets the object position in the world; sets the selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 8 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3353_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3353_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(692, str_from_1842)) == (str_craft_900))) goto event_3353_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craft_900))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(387, str_clickeditemslot_1188)))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3353_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3353_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_3353_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3353_6_0: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161));
            ((Active*)*it)->alterables->strings.set(0, str_inven_820);
            ((Active*)*it)->alterables->flags.disable(-52);
            ((Active*)*it)->set_scale(1);
            ((Active*)*it)->alterables->flags.enable(-5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)), number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7))+str__96+((Active*)get_single(hudItem_instances, default_active_instance))->alterables->strings.get(1));
    }
    event_3353_6_end: ;
}
// Function purpose: generated callback event_func_2831 processes event block(s) 3354_6. Actions/conditions:
//        3354_6: sets the selected object's numeric value to 0.
void Frames::event_func_2831()
{
    // event 3354_6 : sets the selected object's numeric value to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3354_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3354_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(692, str_from_1842)) == (str_craft_output_1121))) goto event_3354_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craft_output_1121))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3354_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_3354_6_end: ;
}
// Function purpose: generated callback event_func_2832 processes event block(s) 3355_6. Actions/conditions:
//        3355_6: sets the selected object's numeric value to 1; sets the object position in the world; sets the
//        selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 8 more actions.
void Frames::event_func_2832()
{
    // event 3355_6 : sets the selected object's numeric value to 1; sets the object position in the world; sets the selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 8 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3355_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3355_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(692, str_from_1842)) == (str_craft_output_1121))) goto event_3355_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craft_output_1121))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3355_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3355_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_3355_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3355_6_0: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161));
            ((Active*)*it)->alterables->strings.set(0, str_inven_820);
            ((Active*)*it)->alterables->flags.disable(-52);
            ((Active*)*it)->set_scale(1);
            ((Active*)*it)->alterables->flags.enable(-5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)), number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7)));
    }
    event_3355_6_end: ;
}
// Function purpose: generated callback event_func_2833 processes event block(s) 3356_6. Actions/conditions:
//        3356_6: sets the selected object's numeric value to 0.
void Frames::event_func_2833()
{
    // event 3356_6 : sets the selected object's numeric value to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3356_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3356_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(692, str_from_1842)) == (str_npc_give_1349))) goto event_3356_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_give_1349))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3356_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_3356_6_end: ;
}
// Function purpose: generated callback event_func_2834 processes event block(s) 3357_6. Actions/conditions:
//        3357_6: sets the selected object's numeric value to 1; sets the object position in the world; sets the
//        selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 7 more actions.
void Frames::event_func_2834()
{
    // event 3357_6 : sets the selected object's numeric value to 1; sets the object position in the world; sets the selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3357_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3357_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(692, str_from_1842)) == (str_npc_give_1349))) goto event_3357_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_give_1349))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3357_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3357_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_3357_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3357_6_0: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161));
            ((Active*)*it)->alterables->strings.set(0, str_inven_820);
            ((Active*)*it)->set_scale(1);
            ((Active*)*it)->alterables->flags.enable(-5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)), number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7))+str__96+((Active*)get_single(hudItem_instances, default_active_instance))->alterables->strings.get(1));
    }
    event_3357_6_end: ;
}
void Frames::loop_find_open_inv_slot_6()
{
    event_func_2811();
    event_func_2812();
    event_func_2813();
    event_func_2814();
    event_func_2815();
    event_func_2816();
    event_func_2817();
    event_func_2818();
    event_func_2819();
    event_func_2820();
    event_func_2821();
    event_func_2822();
    event_func_2823();
    event_func_2824();
    event_func_2825();
    event_func_2826();
    event_func_2827();
    event_func_2828();
    event_func_2829();
    event_func_2830();
    event_func_2831();
    event_func_2832();
    event_func_2833();
    event_func_2834();
}
// Function purpose: generated callback event_func_2835 processes event block(s) 710_6. Actions/conditions:
//        710_6: sets rnd to randrange_event(4).
void Frames::event_func_2835()
{
    // event 710_6 : sets rnd to randrange_event(4)
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_710_6_end;
        if (!((randrange_event(2)) == (0))) goto event_710_6_end;
        ssreindeer_504_instances.clear_selection();
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_check_deers_index))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) == (((Active*)*it)->alterables->values.get(23)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (((Active*)*it)->alterables->values.get(24)))) { it.deselect(); continue; }
        }
        if (!ssreindeer_504_instances.has_selection()) goto event_710_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(132, str_rnd_696, randrange_event(4));
        {
            loop_move_deer_running = true;
            int times = int(1);
            loop_move_deer_index = 0;
            while (loop_move_deer_index < times) {
                loop_move_deer_6();
                if (!loop_move_deer_running) break;
                loop_move_deer_index++;
            }
        }
    }
    event_710_6_end: ;
}
// Function purpose: generated callback event_func_2836 processes event block(s) 2162_6. Actions/conditions:
//        2162_6: sets rnd to randrange_event(4).
void Frames::event_func_2836()
{
    // event 2162_6 : sets rnd to randrange_event(4)
    {
        if (!(group_code_1 && group_code_misc_reindeer_1)) goto event_2162_6_end;
        if (!((randrange_event(2)) == (0))) goto event_2162_6_end;
        ssreindeer_504_instances.clear_selection();
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_check_deers_index))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) == (((Active*)*it)->alterables->values.get(23)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (((Active*)*it)->alterables->values.get(24)))) { it.deselect(); continue; }
        }
        if (!ssreindeer_504_instances.has_selection()) goto event_2162_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(132, str_rnd_696, randrange_event(4));
        {
            loop_move_deer_running = true;
            int times = int(1);
            loop_move_deer_index = 0;
            while (loop_move_deer_index < times) {
                loop_move_deer_6();
                if (!loop_move_deer_running) break;
                loop_move_deer_index++;
            }
        }
    }
    event_2162_6_end: ;
}
void Frames::loop_check_deers_6()
{
    event_func_2835();
    event_func_2836();
}
// Function purpose: generated callback event_func_2837 processes event block(s) 3236_6. Actions/conditions:
//        3236_6: adds a usespot 208 instance; sets the selected object's string to Grapple; sets the selected
//        object's horizontal position to ((get_mouse_x()/MathHelper()/16)*16); plus 1 more actions.
void Frames::event_func_2837()
{
    // event 3236_6 : adds a usespot 208 instance; sets the selected object's string to Grapple; sets the selected object's horizontal position to ((get_mouse_x()/MathHelper()/16)*16); plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3236_6_end;
        if (!((get_mouse_y()) > (((Active*)get_instance(playerBase_instances))->get_y()))) goto event_3236_6_end;
        usespot_208_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_usespot_208(0, 0), 4);
            usespot_208_instances.add_back();
        }
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(9, str_grapple_1772);
            ((Active*)*it)->set_x(((get_mouse_x()/MathHelper()/16)*16));
            ((Active*)*it)->set_y(((get_mouse_y()/MathHelper()/16)*16)+16);
        }
    }
    event_3236_6_end: ;
}
// Function purpose: generated callback event_func_2838 processes event block(s) 3237_6. Actions/conditions:
//        3237_6: adds a usespot 208 instance; sets the selected object's string to Grapple; sets the selected
//        object's horizontal position to ((get_mouse_x()/MathHelper()/16)*16); plus 1 more actions.
void Frames::event_func_2838()
{
    // event 3237_6 : adds a usespot 208 instance; sets the selected object's string to Grapple; sets the selected object's horizontal position to ((get_mouse_x()/MathHelper()/16)*16); plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3237_6_end;
        if (!((get_mouse_y()) < (((Active*)get_instance(playerBase_instances))->get_y()))) goto event_3237_6_end;
        usespot_208_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_usespot_208(0, 0), 4);
            usespot_208_instances.add_back();
        }
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(9, str_grapple_1772);
            ((Active*)*it)->set_x(((get_mouse_x()/MathHelper()/16)*16));
            ((Active*)*it)->set_y(((get_mouse_y()/MathHelper()/16)*16)-16);
        }
    }
    event_3237_6_end: ;
}
void Frames::loop_grap_vert_check_6()
{
    event_func_2837();
    event_func_2838();
    event_func_2718();
    event_func_2719();
    event_func_2720();
    event_func_2721();
    event_func_2722();
    event_func_2723();
    event_func_2724();
    event_func_2725();
}
// Function purpose: generated callback event_func_2839 processes event block(s) 2064_6. Actions/conditions:
//        2064_6: sets charID to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(0); sets charHP to
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(7); sets
//        charTarg to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(2); plus 5 more actions.
void Frames::event_func_2839()
{
    // event 2064_6 : sets charID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0); sets charHP to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(7); sets charTarg to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(2); plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2064_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_lockdown_moveem_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2064_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(94, str_charid_605, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(693, str_charhp_1843, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(7));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(694, str_chartarg_1844, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(695, str_charp_1845, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(15));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(696, str_char2007_1846, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->flags.get(2007));
    }
    event_2064_6_end: ;
}
// Function purpose: generated callback event_func_2840 processes event block(s) 2065_6. Actions/conditions:
//        2065_6: checks scene is active; game state charP; game state char2007; game state charTarg; this handler
//        gates a game event without a direct value/object action.
void Frames::event_func_2840()
{
    // event 2065_6 : checks scene is active; game state charP; game state char2007; game state charTarg; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2065_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(695, str_charp_1845)) == (0))) goto event_2065_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(696, str_char2007_1846)) == (0))) goto event_2065_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(694, str_chartarg_1844)) == (0))) goto event_2065_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(693, str_charhp_1843)) > (0))) goto event_2065_6_end;
        {
            loop_lockdown_gocell_running = true;
            int times = int(1);
            loop_lockdown_gocell_index = 0;
            while (loop_lockdown_gocell_index < times) {
                loop_lockdown_gocell_6();
                if (!loop_lockdown_gocell_running) break;
                loop_lockdown_gocell_index++;
            }
        }
    }
    event_2065_6_end: ;
}
void Frames::loop_lockdown_moveem_6()
{
    event_func_2839();
    event_func_2840();
}
// Function purpose: generated callback event_func_2841 processes event block(s) 3575_6. Actions/conditions:
//        3575_6: sets the selected object's numeric value to 5-(gameVariables->get_value(641,
//        HoleProgress)/MathHelper()/5); sets the selected object's direction to selected
//        object->alterables->values.get(1).
void Frames::event_func_2841()
{
    // event 3575_6 : sets the selected object's numeric value to 5-(gameVariables->get_value(641, HoleProgress)/MathHelper()/5); sets the selected object's direction to selected object->alterables->values.get(1)
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_3575_6_end;
        usespot_208_instances.clear_selection();
        dighole_207_instances.clear_selection();
        if (!check_overlap(usespot_208_instances, dighole_207_instances)) goto event_3575_6_end;
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_3575_6_end;
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 5-(((AssociateArray*)get_instance(gameVariables_instances))->get_value(641, str_holeprogress_1739)/MathHelper()/5));
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(1));
        }
    }
    event_3575_6_end: ;
}
// Function purpose: generated callback event_func_2842 processes event block(s) 3576_6. Actions/conditions:
//        3576_6: adds a soil 173 instance; sets the object position in the world; draws the selected image or tile;
//        plus 1 more actions.
void Frames::event_func_2842()
{
    // event 3576_6 : adds a soil 173 instance; sets the object position in the world; draws the selected image or tile; plus 1 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_3576_6_end;
        usespot_208_instances.clear_selection();
        dighole_207_instances.clear_selection();
        if (!check_overlap(usespot_208_instances, dighole_207_instances)) goto event_3576_6_end;
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_3576_6_end;
        soil_173_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_soil_173(0, 0), 0);
            soil_173_instances.add_back();
        }
        for (ObjectIterator it(soil_173_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(usespot_208_instances, it.current_index));
            if (parent == NULL) goto pos_end_3576_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3576_6_1: ;
        }
        for (ObjectIterator it(soil_173_instances); !it.end(); ++it) {
            ((Active*)*it)->paste(0);
            ((Active*)*it)->destroy();
        }
    }
    event_3576_6_end: ;
}
// Function purpose: generated callback event_func_2843 processes event block(s) 3577_6. Actions/conditions:
//        3577_6: creates a dighole 207 object; moves the target object to a layer; moves the selected object behind
//        other objects.
void Frames::event_func_2843()
{
    // event 3577_6 : creates a dighole 207 object; moves the target object to a layer; moves the selected object behind other objects
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_3577_6_end;
        usespot_208_instances.clear_selection();
        if (!check_not_overlap(usespot_208_instances, dighole_207_instances)) goto event_3577_6_end;
        FrameObject * single_instance_3577_6_0; single_instance_3577_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(usespot_208_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dighole_207(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_3577_6_0 == NULL)
                    single_instance_3577_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3577_6_0))->set_layer(2-1);
        ((Active*)((Active*)single_instance_3577_6_0))->move_back();
    }
    event_3577_6_end: ;
}
// Function purpose: generated callback event_func_2844 processes event block(s) 3578_6. Actions/conditions:
//        3578_6: checks scene is active; game state DigX; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_2844()
{
    // event 3578_6 : checks scene is active; game state DigX; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_3578_6_end;
        if (!(((((ArrayObject*)get_instance(digarray_228_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(642, str_digx_1740), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(643, str_digy_1741), 1))) >= (25))) goto event_3578_6_end;
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_findinvslot_running = true;
            int times = int(6);
            loop_findinvslot_index = 0;
            while (loop_findinvslot_index < times) {
                loop_findinvslot_6();
                if (!loop_findinvslot_running) break;
                loop_findinvslot_index++;
            }
        }
        {
            loop_collect_dirt_running = true;
            int times = int(1);
            loop_collect_dirt_index = 0;
            while (loop_collect_dirt_index < times) {
                loop_collect_dirt_6();
                if (!loop_collect_dirt_running) break;
                loop_collect_dirt_index++;
            }
        }
        {
            loop_stats_dug_running = true;
            int times = int(1);
            loop_stats_dug_index = 0;
            while (loop_stats_dug_index < times) {
                loop_stats_dug_6();
                if (!loop_stats_dug_running) break;
                loop_stats_dug_index++;
            }
        }
    }
    event_3578_6_end: ;
}
void Frames::loop_dighole_6()
{
    event_func_2841();
    event_func_2842();
    event_func_2843();
    event_func_2844();
    event_func_2605();
    event_func_2606();
    event_func_2607();
}
// Function purpose: generated callback event_func_2845 processes event block(s) 3099_6. Actions/conditions:
//        3099_6: sets Browsing to 100; increments Fatigue by 5; sets AcType to Action entry 7; plus 1 more actions.
void Frames::event_func_2845()
{
    // event 3099_6 : sets Browsing to 100; increments Fatigue by 5; sets AcType to Action entry 7; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3099_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_3099_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(361, str_browsing_1155, 100);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 5);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(402, str_actype_1216, ((INI*)get_instance(translationData_instances))->get_string(str_action_857, str_7_323));
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
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_3099_6_end: ;
}
void Frames::loop_browse_check_6()
{
    event_func_1385();
    event_func_2845();
}
// Function purpose: generated callback event_func_2846 processes event block(s) 3088_6. Actions/conditions:
//        3088_6: sets SpeakText to Misc entry 7; plays a sound or music track.
void Frames::event_func_2846()
{
    // event 3088_6 : sets SpeakText to Misc entry 7; plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3088_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) == (0))) goto event_3088_6_end;
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
            loop_unscrew_check_running = false;
    
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_3088_6_end: ;
}
// Function purpose: generated callback event_func_2847 processes event block(s) 3089_6. Actions/conditions:
//        3089_6: sets SpeakText to Misc entry 6; plays a sound or music track.
void Frames::event_func_2847()
{
    // event 3089_6 : sets SpeakText to Misc entry 6; plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3089_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) >= (100))) goto event_3089_6_end;
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
            loop_unscrew_check_running = false;
    
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_3089_6_end: ;
}
// Function purpose: generated callback event_func_2848 processes event block(s) 3090_6. Actions/conditions:
//        3090_6: sets Unscrewing to 100; sets the selected object's direction to get_direction_int(selected
//        object->x, selected object->y, cursor_178->x + 8, cursor_178->y + 8); sets AcType to Action entry 3.
void Frames::event_func_2848()
{
    // event 3090_6 : sets Unscrewing to 100; sets the selected object's direction to get_direction_int(selected object->x, selected object->y, cursor_178->x + 8, cursor_178->y + 8); sets AcType to Action entry 3
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3090_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_3090_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) > (0))) goto event_3090_6_end;
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
    event_3090_6_end: ;
}
void Frames::loop_unscrew_check_6()
{
    event_func_1692();
    event_func_2846();
    event_func_2847();
    event_func_2848();
}
// Function purpose: generated callback event_func_2849 processes event block(s) 1667_6. Actions/conditions:
//        1667_6: sets newDest to string_to_number(stringtokenizer_81->get(1)).
void Frames::event_func_2849()
{
    // event 1667_6 : sets newDest to string_to_number(stringtokenizer_81->get(1))
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1667_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(697, str_newdest_1847)) == (0))) goto event_1667_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0))) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(698, str_currw_1848)))) goto event_1667_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(697, str_newdest_1847, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
    }
    event_1667_6_end: ;
}
// Function purpose: generated callback event_func_2850 processes event block(s) 1668_6. Actions/conditions:
//        1668_6: sets newDest to string_to_number(stringtokenizer_81->get(2)).
void Frames::event_func_2850()
{
    // event 1668_6 : sets newDest to string_to_number(stringtokenizer_81->get(2))
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1668_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(697, str_newdest_1847)) == (0))) goto event_1668_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1))) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(698, str_currw_1848)))) goto event_1668_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(697, str_newdest_1847, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
    }
    event_1668_6_end: ;
}
// Function purpose: generated callback event_func_2851 processes event block(s) 1669_6. Actions/conditions:
//        1669_6: sets newDest to string_to_number(stringtokenizer_81->get(3)).
void Frames::event_func_2851()
{
    // event 1669_6 : sets newDest to string_to_number(stringtokenizer_81->get(3))
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1669_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(697, str_newdest_1847)) == (0))) goto event_1669_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2))) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(698, str_currw_1848)))) goto event_1669_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(697, str_newdest_1847, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
    }
    event_1669_6_end: ;
}
// Function purpose: generated callback event_func_2852 processes event block(s) 1670_6. Actions/conditions:
//        1670_6: sets newDest to string_to_number(stringtokenizer_81->get(4)).
void Frames::event_func_2852()
{
    // event 1670_6 : sets newDest to string_to_number(stringtokenizer_81->get(4))
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1670_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(697, str_newdest_1847)) == (0))) goto event_1670_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3))) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(698, str_currw_1848)))) goto event_1670_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(697, str_newdest_1847, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)));
    }
    event_1670_6_end: ;
}
// Function purpose: generated callback event_func_2853 processes event block(s) 1671_6. Actions/conditions:
//        1671_6: sets newDest to string_to_number(stringtokenizer_81->get(0)).
void Frames::event_func_2853()
{
    // event 1671_6 : sets newDest to string_to_number(stringtokenizer_81->get(0))
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1671_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(697, str_newdest_1847)) == (0))) goto event_1671_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4))) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(698, str_currw_1848)))) goto event_1671_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(697, str_newdest_1847, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
    }
    event_1671_6_end: ;
}
// Function purpose: generated callback event_func_2854 processes event block(s) 1672_6. Actions/conditions:
//        1672_6: sets destX to ((Active*)get_single(waypointguard2_315_instances,
//        default_active_instance))->get_x()+8; sets destY to ((Active*)get_single(waypointguard2_315_instances,
//        default_active_instance))->get_y()+8.
void Frames::event_func_2854()
{
    // event 1672_6 : sets destX to ((Active*)get_single(waypointguard2_315_instances, default_active_instance))->get_x()+8; sets destY to ((Active*)get_single(waypointguard2_315_instances, default_active_instance))->get_y()+8
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1672_6_end;
        waypointguard2_315_instances.clear_selection();
        for (ObjectIterator it(waypointguard2_315_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(697, str_newdest_1847)))) { it.deselect(); continue; }
        }
        if (!waypointguard2_315_instances.has_selection()) goto event_1672_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(412, str_destx_1228, ((Active*)get_single(waypointguard2_315_instances, default_active_instance))->get_x()+8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(413, str_desty_1229, ((Active*)get_single(waypointguard2_315_instances, default_active_instance))->get_y()+8);
    }
    event_1672_6_end: ;
}
// Function purpose: generated callback event_func_2855 processes event block(s) 1673_6. Actions/conditions:
//        1673_6: sets the selected object's numeric value to gameVariables->get_value(697, newDest); sets the
//        selected object's numeric value to gameVariables->get_value(412, destX); sets the selected object's
//        numeric value to gameVariables->get_value(413, destY).
void Frames::event_func_2855()
{
    // event 1673_6 : sets the selected object's numeric value to gameVariables->get_value(697, newDest); sets the selected object's numeric value to gameVariables->get_value(412, destX); sets the selected object's numeric value to gameVariables->get_value(413, destY)
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1673_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(699, str_currg_1849)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1673_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(697, str_newdest_1847));
            ((Active*)*it)->alterables->values.set(23, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(412, str_destx_1228));
            ((Active*)*it)->alterables->values.set(24, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(413, str_desty_1229));
        }
    }
    event_1673_6_end: ;
}
void Frames::loop_patrol_target_6()
{
    event_func_2849();
    event_func_2850();
    event_func_2851();
    event_func_2852();
    event_func_2853();
    event_func_2854();
    event_func_2855();
}
