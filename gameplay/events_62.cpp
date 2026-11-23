#include "vitaframetime.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_5213 processes event block(s) 57_10. Actions/conditions:
//        57_10: creates a inmate3 624 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5213()
{
    // event 57_10 : creates a inmate3 624 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_57_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (1))) goto event_57_10_end;
        FrameObject * single_instance_57_10_0; single_instance_57_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmate3_624(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_57_10_0 == NULL)
                    single_instance_57_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_57_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_57_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_57_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_57_10_end: ;
}
// Function purpose: generated callback event_func_5214 processes event block(s) 58_10. Actions/conditions:
//        58_10: creates a inmate2 629 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5214()
{
    // event 58_10 : creates a inmate2 629 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_58_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (2))) goto event_58_10_end;
        FrameObject * single_instance_58_10_0; single_instance_58_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmate2_629(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_58_10_0 == NULL)
                    single_instance_58_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_58_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_58_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_58_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_58_10_end: ;
}
// Function purpose: generated callback event_func_5215 processes event block(s) 59_10. Actions/conditions:
//        59_10: creates a inmate7 628 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5215()
{
    // event 59_10 : creates a inmate7 628 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_59_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (3))) goto event_59_10_end;
        FrameObject * single_instance_59_10_0; single_instance_59_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmate7_628(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_59_10_0 == NULL)
                    single_instance_59_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_59_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_59_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_59_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_59_10_end: ;
}
// Function purpose: generated callback event_func_5216 processes event block(s) 60_10. Actions/conditions:
//        60_10: creates a inmate11 623 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5216()
{
    // event 60_10 : creates a inmate11 623 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_60_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (4))) goto event_60_10_end;
        FrameObject * single_instance_60_10_0; single_instance_60_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmate11_623(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_60_10_0 == NULL)
                    single_instance_60_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_60_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_60_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_60_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_60_10_end: ;
}
// Function purpose: generated callback event_func_5217 processes event block(s) 61_10. Actions/conditions:
//        61_10: creates a inmate10 626 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5217()
{
    // event 61_10 : creates a inmate10 626 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_61_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (5))) goto event_61_10_end;
        FrameObject * single_instance_61_10_0; single_instance_61_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmate10_626(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_61_10_0 == NULL)
                    single_instance_61_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_61_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_61_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_61_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_61_10_end: ;
}
// Function purpose: generated callback event_func_5218 processes event block(s) 62_10. Actions/conditions:
//        62_10: creates a inmate8 630 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5218()
{
    // event 62_10 : creates a inmate8 630 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_62_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (6))) goto event_62_10_end;
        FrameObject * single_instance_62_10_0; single_instance_62_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmate8_630(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_62_10_0 == NULL)
                    single_instance_62_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_62_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_62_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_62_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_62_10_end: ;
}
// Function purpose: generated callback event_func_5219 processes event block(s) 63_10. Actions/conditions:
//        63_10: creates a inmate9 627 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5219()
{
    // event 63_10 : creates a inmate9 627 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_63_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (7))) goto event_63_10_end;
        FrameObject * single_instance_63_10_0; single_instance_63_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmate9_627(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_63_10_0 == NULL)
                    single_instance_63_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_63_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_63_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_63_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_63_10_end: ;
}
// Function purpose: generated callback event_func_5220 processes event block(s) 64_10. Actions/conditions:
//        64_10: creates a inmate 622 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5220()
{
    // event 64_10 : creates a inmate 622 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_64_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (8))) goto event_64_10_end;
        FrameObject * single_instance_64_10_0; single_instance_64_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmate_622(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_64_10_0 == NULL)
                    single_instance_64_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_64_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_64_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_64_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_64_10_end: ;
}
// Function purpose: generated callback event_func_5221 processes event block(s) 65_10. Actions/conditions:
//        65_10: creates a inmate12 644 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5221()
{
    // event 65_10 : creates a inmate12 644 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_65_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (9))) goto event_65_10_end;
        FrameObject * single_instance_65_10_0; single_instance_65_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmate12_644(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_65_10_0 == NULL)
                    single_instance_65_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_65_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_65_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_65_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_65_10_end: ;
}
// Function purpose: generated callback event_func_5222 processes event block(s) 66_10. Actions/conditions:
//        66_10: creates a inmate13 645 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5222()
{
    // event 66_10 : creates a inmate13 645 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_66_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (10))) goto event_66_10_end;
        FrameObject * single_instance_66_10_0; single_instance_66_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmate13_645(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_66_10_0 == NULL)
                    single_instance_66_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_66_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_66_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_66_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_66_10_end: ;
}
// Function purpose: generated callback event_func_5223 processes event block(s) 67_10. Actions/conditions:
//        67_10: creates a inmate14 646 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5223()
{
    // event 67_10 : creates a inmate14 646 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_67_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (11))) goto event_67_10_end;
        FrameObject * single_instance_67_10_0; single_instance_67_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmate14_646(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_67_10_0 == NULL)
                    single_instance_67_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_67_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_67_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_67_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_67_10_end: ;
}
// Function purpose: generated callback event_func_5224 processes event block(s) 68_10. Actions/conditions:
//        68_10: creates a inmatedtaf1 651 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5224()
{
    // event 68_10 : creates a inmatedtaf1 651 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_68_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (12))) goto event_68_10_end;
        FrameObject * single_instance_68_10_0; single_instance_68_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmatedtaf1_651(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_68_10_0 == NULL)
                    single_instance_68_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_68_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_68_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_68_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_68_10_end: ;
}
// Function purpose: generated callback event_func_5225 processes event block(s) 69_10. Actions/conditions:
//        69_10: creates a inmatedtaf2 652 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5225()
{
    // event 69_10 : creates a inmatedtaf2 652 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_69_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (13))) goto event_69_10_end;
        FrameObject * single_instance_69_10_0; single_instance_69_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmatedtaf2_652(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_69_10_0 == NULL)
                    single_instance_69_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_69_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_69_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_69_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_69_10_end: ;
}
// Function purpose: generated callback event_func_5226 processes event block(s) 70_10. Actions/conditions:
//        70_10: creates a inmatedtaf3 653 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5226()
{
    // event 70_10 : creates a inmatedtaf3 653 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_70_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (14))) goto event_70_10_end;
        FrameObject * single_instance_70_10_0; single_instance_70_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmatedtaf3_653(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_70_10_0 == NULL)
                    single_instance_70_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_70_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_70_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_70_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_70_10_end: ;
}
// Function purpose: generated callback event_func_5227 processes event block(s) 71_10. Actions/conditions:
//        71_10: creates a inmatedtaf4 654 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5227()
{
    // event 71_10 : creates a inmatedtaf4 654 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_71_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (15))) goto event_71_10_end;
        FrameObject * single_instance_71_10_0; single_instance_71_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmatedtaf4_654(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_71_10_0 == NULL)
                    single_instance_71_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_71_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_71_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_71_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_71_10_end: ;
}
// Function purpose: generated callback event_func_5228 processes event block(s) 72_10. Actions/conditions:
//        72_10: creates a inmatedtaf5 655 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5228()
{
    // event 72_10 : creates a inmatedtaf5 655 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_72_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (16))) goto event_72_10_end;
        FrameObject * single_instance_72_10_0; single_instance_72_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmatedtaf5_655(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_72_10_0 == NULL)
                    single_instance_72_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_72_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_72_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_72_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_72_10_end: ;
}
// Function purpose: generated callback event_func_5229 processes event block(s) 73_10. Actions/conditions:
//        73_10: creates a inmatedtaf6 656 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5229()
{
    // event 73_10 : creates a inmatedtaf6 656 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_73_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (17))) goto event_73_10_end;
        FrameObject * single_instance_73_10_0; single_instance_73_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmatedtaf6_656(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_73_10_0 == NULL)
                    single_instance_73_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_73_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_73_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_73_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_73_10_end: ;
}
// Function purpose: generated callback event_func_5230 processes event block(s) 74_10. Actions/conditions:
//        74_10: creates a inmatedtaf7 657 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5230()
{
    // event 74_10 : creates a inmatedtaf7 657 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_74_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (18))) goto event_74_10_end;
        FrameObject * single_instance_74_10_0; single_instance_74_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmatedtaf7_657(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_74_10_0 == NULL)
                    single_instance_74_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_74_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_74_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_74_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_74_10_end: ;
}
// Function purpose: generated callback event_func_5231 processes event block(s) 75_10. Actions/conditions:
//        75_10: creates a inmatedtaf8 658 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5231()
{
    // event 75_10 : creates a inmatedtaf8 658 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_75_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (19))) goto event_75_10_end;
        FrameObject * single_instance_75_10_0; single_instance_75_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmatedtaf8_658(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_75_10_0 == NULL)
                    single_instance_75_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_75_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_75_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_75_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_75_10_end: ;
}
// Function purpose: generated callback event_func_5232 processes event block(s) 76_10. Actions/conditions:
//        76_10: creates a inmatedtaf9 659 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5232()
{
    // event 76_10 : creates a inmatedtaf9 659 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_76_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (20))) goto event_76_10_end;
        FrameObject * single_instance_76_10_0; single_instance_76_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmatedtaf9_659(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_76_10_0 == NULL)
                    single_instance_76_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_76_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_76_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_76_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_76_10_end: ;
}
// Function purpose: generated callback event_func_5233 processes event block(s) 77_10. Actions/conditions:
//        77_10: creates a inmatess1 660 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5233()
{
    // event 77_10 : creates a inmatess1 660 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_77_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (21))) goto event_77_10_end;
        FrameObject * single_instance_77_10_0; single_instance_77_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmatess1_660(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_77_10_0 == NULL)
                    single_instance_77_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_77_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_77_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_77_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_77_10_end: ;
}
// Function purpose: generated callback event_func_5234 processes event block(s) 78_10. Actions/conditions:
//        78_10: creates a inmatess2 661 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5234()
{
    // event 78_10 : creates a inmatess2 661 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_78_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (22))) goto event_78_10_end;
        FrameObject * single_instance_78_10_0; single_instance_78_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmatess2_661(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_78_10_0 == NULL)
                    single_instance_78_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_78_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_78_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_78_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_78_10_end: ;
}
// Function purpose: generated callback event_func_5235 processes event block(s) 79_10. Actions/conditions:
//        79_10: creates a inmatess3 662 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5235()
{
    // event 79_10 : creates a inmatess3 662 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_79_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (23))) goto event_79_10_end;
        FrameObject * single_instance_79_10_0; single_instance_79_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmatess3_662(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_79_10_0 == NULL)
                    single_instance_79_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_79_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_79_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_79_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_79_10_end: ;
}
// Function purpose: generated callback event_func_5236 processes event block(s) 80_10. Actions/conditions:
//        80_10: creates a inmatess4 663 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5236()
{
    // event 80_10 : creates a inmatess4 663 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_80_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (24))) goto event_80_10_end;
        FrameObject * single_instance_80_10_0; single_instance_80_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmatess4_663(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_80_10_0 == NULL)
                    single_instance_80_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_80_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_80_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_80_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_80_10_end: ;
}
// Function purpose: generated callback event_func_5237 processes event block(s) 81_10. Actions/conditions:
//        81_10: creates a inmatess5 664 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5237()
{
    // event 81_10 : creates a inmatess5 664 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_81_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (25))) goto event_81_10_end;
        FrameObject * single_instance_81_10_0; single_instance_81_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmatess5_664(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_81_10_0 == NULL)
                    single_instance_81_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_81_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_81_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_81_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_81_10_end: ;
}
// Function purpose: generated callback event_func_5238 processes event block(s) 82_10. Actions/conditions:
//        82_10: creates a inmatess6 665 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5238()
{
    // event 82_10 : creates a inmatess6 665 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_82_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (26))) goto event_82_10_end;
        FrameObject * single_instance_82_10_0; single_instance_82_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmatess6_665(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_82_10_0 == NULL)
                    single_instance_82_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_82_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_82_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_82_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_82_10_end: ;
}
// Function purpose: generated callback event_func_5239 processes event block(s) 83_10. Actions/conditions:
//        83_10: creates a inmatess7 666 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5239()
{
    // event 83_10 : creates a inmatess7 666 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_83_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (27))) goto event_83_10_end;
        FrameObject * single_instance_83_10_0; single_instance_83_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmatess7_666(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_83_10_0 == NULL)
                    single_instance_83_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_83_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_83_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_83_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_83_10_end: ;
}
// Function purpose: generated callback event_func_5240 processes event block(s) 84_10. Actions/conditions:
//        84_10: creates a inmatess8 667 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5240()
{
    // event 84_10 : creates a inmatess8 667 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_84_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (28))) goto event_84_10_end;
        FrameObject * single_instance_84_10_0; single_instance_84_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmatess8_667(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_84_10_0 == NULL)
                    single_instance_84_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_84_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_84_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_84_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_84_10_end: ;
}
// Function purpose: generated callback event_func_5241 processes event block(s) 85_10. Actions/conditions:
//        85_10: creates a inmatess0 671 object; sets the selected object's string to
//        gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected
//        object's numeric value to loop_inmate_loop_index+1; plus 1 more actions.
void Frames::event_func_5241()
{
    // event 85_10 : creates a inmatess0 671 object; sets the selected object's string to gameVariables->get_string(InmateName_+number_to_string(loop_inmate_loop_index+1)); sets the selected object's numeric value to loop_inmate_loop_index+1; plus 1 more actions
    {
        if (!(group_npc_loop_1)) goto event_85_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (29))) goto event_85_10_end;
        FrameObject * single_instance_85_10_0; single_instance_85_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmatess0_671(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_85_10_0 == NULL)
                    single_instance_85_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_85_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_85_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_85_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_85_10_end: ;
}
// Function purpose: generated callback event_func_5242 processes event block(s) 86_10. Actions/conditions:
//        86_10: sets a game or interface text string; sets a stored numeric value.
void Frames::event_func_5242()
{
    // event 86_10 : sets a game or interface text string; sets a stored numeric value
    {
        if (!(group_npc_loop_1)) goto event_86_10_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_or_name_2431+number_to_string(loop_inmate_loop_index+1), ((AssociateArray*)get_instance(gameVariables_instances))->get_string(144, str_thisname_694));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(str_or_avatar_2432+number_to_string(loop_inmate_loop_index+1), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(145, str_rnd_696));
    }
    event_86_10_end: ;
}
// Function purpose: generated callback event_func_5243 processes event block(s) 87_10. Actions/conditions:
//        87_10: creates a outfitinmate 637 object; sets the selected object's numeric value to qualifier_3.size().
void Frames::event_func_5243()
{
    // event 87_10 : creates a outfitinmate 637 object; sets the selected object's numeric value to qualifier_3.size()
    {
        if (!(group_npc_loop_1)) goto event_87_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(49, str_eteam_238)) == (0))) goto event_87_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(50, str_dtaf_137)) == (0))) goto event_87_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(51, str_sss_239)) == (0))) goto event_87_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(146, str_maproutine_503)) != (str_camp_504))) goto event_87_10_end;
        FrameObject * single_instance_87_10_0; single_instance_87_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_outfitinmate_637(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_87_10_0 == NULL)
                    single_instance_87_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_87_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_87_10_end: ;
}
// Function purpose: generated callback event_func_5244 processes event block(s) 88_10. Actions/conditions:
//        88_10: creates a outfitinmate2 639 object; sets the selected object's numeric value to qualifier_3.size().
void Frames::event_func_5244()
{
    // event 88_10 : creates a outfitinmate2 639 object; sets the selected object's numeric value to qualifier_3.size()
    {
        if (!(group_npc_loop_1)) goto event_88_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(49, str_eteam_238)) == (0))) goto event_88_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(50, str_dtaf_137)) == (0))) goto event_88_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(51, str_sss_239)) == (0))) goto event_88_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(146, str_maproutine_503)) == (str_camp_504))) goto event_88_10_end;
        FrameObject * single_instance_88_10_0; single_instance_88_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_outfitinmate2_639(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_88_10_0 == NULL)
                    single_instance_88_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_88_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_88_10_end: ;
}
// Function purpose: generated callback event_func_5245 processes event block(s) 89_10. Actions/conditions:
//        89_10: creates a outfitinmate3 647 object; sets the selected object's numeric value to qualifier_3.size().
void Frames::event_func_5245()
{
    // event 89_10 : creates a outfitinmate3 647 object; sets the selected object's numeric value to qualifier_3.size()
    {
        if (!(group_npc_loop_1)) goto event_89_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(49, str_eteam_238)) == (1))) goto event_89_10_end;
        FrameObject * single_instance_89_10_0; single_instance_89_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_outfitinmate3_647(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_89_10_0 == NULL)
                    single_instance_89_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_89_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_89_10_end: ;
}
// Function purpose: generated callback event_func_5246 processes event block(s) 90_10. Actions/conditions:
//        90_10: sets the selected object's numeric value to qualifier_3.size(); creates a outfitinmate4 649 object;
//        adds a outfitinmate4 649 instance.
void Frames::event_func_5246()
{
    // event 90_10 : sets the selected object's numeric value to qualifier_3.size(); creates a outfitinmate4 649 object; adds a outfitinmate4 649 instance
    {
        if (!(group_npc_loop_1)) goto event_90_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(50, str_dtaf_137)) == (1))) goto event_90_10_end;
        outfitinmate4_649_instances.clear_selection();
        for (ObjectIterator it(outfitinmate4_649_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, qualifier_3.size());
        }
        // select single: false false true
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_outfitinmate4_649(parent->x + 0, parent->y + 0), parent->layer);
                outfitinmate4_649_instances.add_back();
            }
        }
    }
    event_90_10_end: ;
}
// Function purpose: generated callback event_func_5247 processes event block(s) 91_10. Actions/conditions:
//        91_10: creates a outfitinmatess 668 object; sets the selected object's numeric value to qualifier_3.size().
void Frames::event_func_5247()
{
    // event 91_10 : creates a outfitinmatess 668 object; sets the selected object's numeric value to qualifier_3.size()
    {
        if (!(group_npc_loop_1)) goto event_91_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(51, str_sss_239)) == (1))) goto event_91_10_end;
        FrameObject * single_instance_91_10_0; single_instance_91_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_outfitinmatess_668(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_91_10_0 == NULL)
                    single_instance_91_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_91_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_91_10_end: ;
}
void Frames::loop_inmate_loop_10()
{
    event_func_5189();
    event_func_5190();
    event_func_5191();
    event_func_5192();
    event_func_5193();
    event_func_5194();
    event_func_5195();
    event_func_5196();
    event_func_5197();
    event_func_5198();
    event_func_5199();
    event_func_5200();
    event_func_5201();
    event_func_5202();
    event_func_5203();
    event_func_5204();
    event_func_5205();
    event_func_5206();
    event_func_5207();
    event_func_5208();
    event_func_5209();
    event_func_5210();
    event_func_5211();
    event_func_5212();
    event_func_5213();
    event_func_5214();
    event_func_5215();
    event_func_5216();
    event_func_5217();
    event_func_5218();
    event_func_5219();
    event_func_5220();
    event_func_5221();
    event_func_5222();
    event_func_5223();
    event_func_5224();
    event_func_5225();
    event_func_5226();
    event_func_5227();
    event_func_5228();
    event_func_5229();
    event_func_5230();
    event_func_5231();
    event_func_5232();
    event_func_5233();
    event_func_5234();
    event_func_5235();
    event_func_5236();
    event_func_5237();
    event_func_5238();
    event_func_5239();
    event_func_5240();
    event_func_5241();
    event_func_5242();
    event_func_5243();
    event_func_5244();
    event_func_5245();
    event_func_5246();
    event_func_5247();
    event_func_5187();
    event_func_5188();
}
// Function purpose: generated callback event_func_5248 processes event block(s) 125_10. Actions/conditions:
//        125_10: updates game state with selected
//        object->force_frame(((Active*)foreach_instance_align)->get_frame()).
void Frames::event_func_5248()
{
    // event 125_10 : updates game state with selected object->force_frame(((Active*)foreach_instance_align)->get_frame())
    {
        qualifier_16.clear_selection();
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)foreach_instance_align)->alterables->values.get(25)))) { it.deselect(); continue; }
        }
        if (!qualifier_16.has_selection()) goto event_125_10_end;
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)foreach_instance_align)->get_frame());
        }
    }
    event_125_10_end: ;
}
void Frames::foreach_align_10()
{
    event_func_5248();
}
void Frames::test_collisions_10()
{
    ObjectList::iterator it1, it2;
}
// Function purpose: generated callback event_func_5249 processes event block(s) 10_10. Actions/conditions:
//        10_10: sets the selected object's horizontal position to get_mouse_x(); sets the selected object's vertical
//        position to get_mouse_y(); moves the selected object to the front; plus 7 more actions.
void Frames::event_func_5249()
{
    // event 10_10 : sets the selected object's horizontal position to get_mouse_x(); sets the selected object's vertical position to get_mouse_y(); moves the selected object to the front; plus 7 more actions
    {
        ((Active*)get_instance(mouse_9_instances))->set_x(get_mouse_x());
        ((Active*)get_instance(mouse_9_instances))->set_y(get_mouse_y());
        ((Active*)get_instance(mouse_9_instances))->move_front();
        ((Text*)get_instance(name_93_instances))->set_string(((EditObject*)get_instance(editbox_92_instances))->get_text());
        ((Active*)get_instance(start_618_instances))->set_direction(0);
        ((Active*)get_instance(back_102_instances))->set_direction(0);
        ((Active*)get_instance(mix_640_instances))->set_direction(0);
    }
    event_10_10_end: ;
}
// Function purpose: generated callback event_func_5250 processes event block(s) 11_10. Actions/conditions:
//        11_10: sets the selected object's direction to 16.
void Frames::event_func_5250()
{
    // event 11_10 : sets the selected object's direction to 16
    {
        if (!(((Active*)get_instance(start_618_instances))->mouse_over())) goto event_11_10_end;
        ((Active*)get_instance(start_618_instances))->set_direction(16);
    }
    event_11_10_end: ;
}
// Function purpose: generated callback event_func_5251 processes event block(s) 12_10. Actions/conditions:
//        12_10: sets the selected object's direction to 16.
void Frames::event_func_5251()
{
    // event 12_10 : sets the selected object's direction to 16
    {
        if (!(((Active*)get_instance(back_102_instances))->mouse_over())) goto event_12_10_end;
        ((Active*)get_instance(back_102_instances))->set_direction(16);
    }
    event_12_10_end: ;
}
// Function purpose: generated callback event_func_5252 processes event block(s) 13_10. Actions/conditions:
//        13_10: sets the selected object's direction to 16.
void Frames::event_func_5252()
{
    // event 13_10 : sets the selected object's direction to 16
    {
        if (!(((Active*)get_instance(mix_640_instances))->mouse_over())) goto event_13_10_end;
        ((Active*)get_instance(mix_640_instances))->set_direction(16);
    }
    event_13_10_end: ;
}
// Function purpose: generated callback event_func_5253 processes event block(s) 14_10. Actions/conditions:
//        14_10: disables keyboard focus for the control.
void Frames::event_func_5253()
{
    // event 14_10 : disables keyboard focus for the control
    {
        if (!(((Active*)get_instance(active3_63_instances))->test_animation(0))) goto event_14_10_end;
        ((EditObject*)get_instance(editbox_92_instances))->disable_focus();
    }
    event_14_10_end: ;
}
// Function purpose: generated callback event_func_5254 processes event block(s) 16_10. Actions/conditions:
//        16_10: plays a sound or music track; sets LClick to 1.
void Frames::event_func_5254()
{
    // event 16_10 : plays a sound or music track; sets LClick to 1
    {
        if (!(((Active*)get_instance(start_618_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_16_10_end;
        if (!(((Active*)get_instance(active3_63_instances))->test_animation(0))) goto event_16_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_16_10_end;
        media.play_id(SOUND_RUMBLE_15, 1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        next_frame = 5 + 0;    
    
    }
    event_16_10_end: ;
}
// Function purpose: generated callback event_func_5255 processes event block(s) 17_10. Actions/conditions:
//        17_10: plays a sound or music track; sets LClick to 1.
void Frames::event_func_5255()
{
    // event 17_10 : plays a sound or music track; sets LClick to 1
    {
        if (!(((Active*)get_instance(start_618_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_17_10_end;
        if (!(((Active*)get_instance(active3_63_instances))->test_animation(5))) goto event_17_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_17_10_end;
        media.play_id(SOUND_LOSE_8, 1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
    }
    event_17_10_end: ;
}
// Function purpose: generated callback event_func_5256 processes event block(s) 18_10. Actions/conditions:
//        18_10: plays a sound or music track; sets LClick to 1.
void Frames::event_func_5256()
{
    // event 18_10 : plays a sound or music track; sets LClick to 1
    {
        if (!(((Active*)get_instance(back_102_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_18_10_end;
        if (!(((Active*)get_instance(active3_63_instances))->test_animation(0))) goto event_18_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_18_10_end;
        media.play_id(SOUND_CLOSE_6, 1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        next_frame = 3 + 0;    
    
    }
    event_18_10_end: ;
}
// Function purpose: generated callback event_func_5257 processes event block(s) 19_10. Actions/conditions:
//        19_10: plays a sound or music track; sets LClick to 1.
void Frames::event_func_5257()
{
    // event 19_10 : plays a sound or music track; sets LClick to 1
    {
        if (!(((Active*)get_instance(back_102_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_19_10_end;
        if (!(((Active*)get_instance(active3_63_instances))->test_animation(5))) goto event_19_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_19_10_end;
        media.play_id(SOUND_LOSE_8, 1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
    }
    event_19_10_end: ;
}
// Function purpose: generated callback event_func_5258 processes event block(s) 20_10. Actions/conditions:
//        20_10: plays a sound or music track; removes the selected object; adds a placer 632 instance; plus 1 more
//        actions.
void Frames::event_func_5258()
{
    // event 20_10 : plays a sound or music track; removes the selected object; adds a placer 632 instance; plus 1 more actions
    {
        if (!(((Active*)get_instance(mix_640_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_20_10_end;
        if (!(((Active*)get_instance(active3_63_instances))->test_animation(0))) goto event_20_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_20_10_end;
        media.play_id(SOUND_PLIP_16, 1-1);
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        qualifier_16.clear_selection();
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        // select single: false false true
        {
            FrameObject * new_obj;
            new_obj = add_object(create_placer_632(0, 0), 0);
            placer_632_instances.add_back();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        {
            loop_empty_names_running = true;
            int times = int(20);
            loop_empty_names_index = 0;
            while (loop_empty_names_index < times) {
                loop_empty_names_10();
                if (!loop_empty_names_running) break;
                loop_empty_names_index++;
            }
        }
        if (!group_npc_loop_1) {
            group_npc_loop_1 = true;
            group_check_group_npc_loop_1_4 = true;
            group_check_group_npc_loop_1_2 = true;
            group_check_group_npc_loop_1_3 = true;
            group_check_group_npc_loop_1_0 = true;
            group_check_group_npc_loop_1_1 = true;
        }
    }
    event_20_10_end: ;
}
// Function purpose: generated callback event_func_5259 processes event block(s) 22_10. Actions/conditions:
//        22_10: plays a sound or music track; sets LClick to 1.
void Frames::event_func_5259()
{
    // event 22_10 : plays a sound or music track; sets LClick to 1
    {
        if (!(((Active*)get_instance(mix_640_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_22_10_end;
        if (!(((Active*)get_instance(active3_63_instances))->test_animation(5))) goto event_22_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_22_10_end;
        media.play_id(SOUND_LOSE_8, 1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
    }
    event_22_10_end: ;
}
// Function purpose: generated callback event_func_5260 processes event block(s) 23_10. Actions/conditions:
//        23_10: sets UsedNames to empty_string.
void Frames::event_func_5260()
{
    // event 23_10 : sets UsedNames to empty_string
    {
        if (!(group_npc_loop_1)) goto event_23_10_end;
        if (!group_check_group_npc_loop_1_0) goto event_23_10_end;
        group_check_group_npc_loop_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(125, str_usednames_2403, empty_string);
        {
            loop_lineup_running = true;
            int times = int(1);
            loop_lineup_index = 0;
            while (loop_lineup_index < times) {
                loop_lineup_10();
                if (!loop_lineup_running) break;
                loop_lineup_index++;
            }
        }
    }
    event_23_10_end: ;
}
// Function purpose: generated callback event_func_5261 processes event block(s) 30_10. Actions/conditions:
//        30_10: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_5261()
{
    // event 30_10 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_npc_loop_1)) goto event_30_10_end;
        if (!group_check_group_npc_loop_1_1) goto event_30_10_end;
        group_check_group_npc_loop_1_1 = false;
        {
            loop_inmate_loop_running = true;
            int times = int(((AssociateArray*)get_instance(gameVariables_instances))->get_value(147, str_inmatecount_746));
            loop_inmate_loop_index = 0;
            while (loop_inmate_loop_index < times) {
                loop_inmate_loop_10();
                if (!loop_inmate_loop_running) break;
                loop_inmate_loop_index++;
            }
        }
    }
    event_30_10_end: ;
}
// Function purpose: generated callback event_func_5262 processes event block(s) 31_10. Actions/conditions:
//        31_10: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_5262()
{
    // event 31_10 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_npc_loop_1)) goto event_31_10_end;
        if (!group_check_group_npc_loop_1_2) goto event_31_10_end;
        group_check_group_npc_loop_1_2 = false;
        {
            loop_cop_loop_running = true;
            int times = int(((AssociateArray*)get_instance(gameVariables_instances))->get_value(148, str_guardcount_747));
            loop_cop_loop_index = 0;
            while (loop_cop_loop_index < times) {
                loop_cop_loop_10();
                if (!loop_cop_loop_running) break;
                loop_cop_loop_index++;
            }
        }
    }
    event_31_10_end: ;
}
// Function purpose: generated callback event_func_5263 processes event block(s) 32_10. Actions/conditions:
//        32_10: sets the selected object's direction to 24; removes the selected object.
void Frames::event_func_5263()
{
    // event 32_10 : sets the selected object's direction to 24; removes the selected object
    {
        if (!(group_npc_loop_1)) goto event_32_10_end;
        if (!group_check_group_npc_loop_1_3) goto event_32_10_end;
        group_check_group_npc_loop_1_3 = false;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        qualifier_13.clear_selection();
        for (QualifierIterator it(qualifier_13); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        for (ObjectIterator it(placer_632_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_32_10_end: ;
}
// Function purpose: generated callback event_func_5264 processes event block(s) 104_10. Actions/conditions:
//        104_10: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_5264()
{
    // event 104_10 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_npc_loop_1)) goto event_104_10_end;
        if (!group_check_group_npc_loop_1_4) goto event_104_10_end;
        group_check_group_npc_loop_1_4 = false;
            group_npc_loop_1 = false;
    
    }
    event_104_10_end: ;
}
// Function purpose: generated callback event_func_5265 processes event block(s) 107_10. Actions/conditions:
//        107_10: sets the object position in the world.
void Frames::event_func_5265()
{
    // event 107_10 : sets the object position in the world
    {
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_107_10_end;
        if (!(((Active*)get_instance(active3_63_instances))->test_animation(0))) goto event_107_10_end;
        {
            FrameObject * parent = ((Active*)get_single(qualifier_3));
            if (parent == NULL) goto pos_end_107_10_0;
            ((Active*)get_instance(active3_63_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_107_10_0: ;
        }
    }
    event_107_10_end: ;
}
// Function purpose: generated callback event_func_5266 processes event block(s) 108_10. Actions/conditions:
//        108_10: sets the displayed text.
void Frames::event_func_5266()
{
    // event 108_10 : sets the displayed text
    {
        active3_63_instances.clear_selection();
        qualifier_12.clear_selection();
        if (!check_overlap(active3_63_instances, qualifier_12)) goto event_108_10_end;
        if (!(((Active*)get_instance(active3_63_instances))->test_animation(0))) goto event_108_10_end;
        ((EditObject*)get_instance(editbox_92_instances))->set_text(((Active*)get_single(qualifier_12, default_active_instance))->alterables->strings.get(0));
    }
    event_108_10_end: ;
}
// Function purpose: generated callback event_func_5267 processes event block(s) 109_10. Actions/conditions:
//        109_10: sets a game or interface text string; sets the displayed text.
void Frames::event_func_5267()
{
    // event 109_10 : sets a game or interface text string; sets the displayed text
    {
        active3_63_instances.clear_selection();
        qualifier_13.clear_selection();
        if (!check_overlap(active3_63_instances, qualifier_13)) goto event_109_10_end;
        if (!(((Active*)get_instance(active3_63_instances))->test_animation(0))) goto event_109_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(50, str_dtaf_137)) == (0))) goto event_109_10_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(144, str_thisname_694, StringReplace::replace(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_43_695), str_name_693, ((Active*)get_single(qualifier_13, default_active_instance))->alterables->strings.get(0)));
        ((EditObject*)get_instance(editbox_92_instances))->set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(144, str_thisname_694));
    }
    event_109_10_end: ;
}
// Function purpose: generated callback event_func_5268 processes event block(s) 110_10. Actions/conditions:
//        110_10: sets a game or interface text string; sets the displayed text.
void Frames::event_func_5268()
{
    // event 110_10 : sets a game or interface text string; sets the displayed text
    {
        active3_63_instances.clear_selection();
        qualifier_13.clear_selection();
        if (!check_overlap(active3_63_instances, qualifier_13)) goto event_110_10_end;
        if (!(((Active*)get_instance(active3_63_instances))->test_animation(0))) goto event_110_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(50, str_dtaf_137)) == (1))) goto event_110_10_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(144, str_thisname_694, StringReplace::replace(((INI*)get_instance(translationData_instances))->get_string(str_dtaf_137, str_hench_1196), str_name_693, ((Active*)get_single(qualifier_13, default_active_instance))->alterables->strings.get(0)));
        ((EditObject*)get_instance(editbox_92_instances))->set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(144, str_thisname_694));
    }
    event_110_10_end: ;
}
// Function purpose: generated callback event_func_5269 processes event block(s) 111_10. Actions/conditions:
//        111_10: sets OldName to ((Active*)get_single(qualifier_3,
//        default_active_instance))->alterables->strings.get(0); sets currSel to ((Active*)get_single(qualifier_3,
//        default_active_instance))->alterables->values.get(25); sets the selected object's string to empty_string;
//        plus 8 more actions.
void Frames::event_func_5269()
{
    // event 111_10 : sets OldName to ((Active*)get_single(qualifier_3, default_active_instance))->alterables->strings.get(0); sets currSel to ((Active*)get_single(qualifier_3, default_active_instance))->alterables->values.get(25); sets the selected object's string to empty_string; plus 8 more actions
    {
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_111_10_end;
        if (!(((Active*)get_instance(active3_63_instances))->test_animation(0))) goto event_111_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_111_10_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(149, str_oldname_2433, ((Active*)get_single(qualifier_3, default_active_instance))->alterables->strings.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(150, str_currsel_2434, ((Active*)get_single(qualifier_3, default_active_instance))->alterables->values.get(25));
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(0, empty_string);
        }
        ((Active*)get_instance(active3_63_instances))->force_animation(5);
        ((Text*)get_instance(name_93_instances))->blend_color.set(Color(255, 255, 87));
        ((EditObject*)get_instance(editbox_92_instances))->enable_focus();
        ((EditObject*)get_instance(editbox_92_instances))->set_text(empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
    }
    event_111_10_end: ;
}
// Function purpose: generated callback event_func_5270 processes event block(s) 112_10. Actions/conditions:
//        112_10: enables keyboard focus for the control.
void Frames::event_func_5270()
{
    // event 112_10 : enables keyboard focus for the control
    {
        if (!(((Active*)get_instance(active3_63_instances))->test_animation(5))) goto event_112_10_end;
        ((EditObject*)get_instance(editbox_92_instances))->enable_focus();
    }
    event_112_10_end: ;
}
// Function purpose: generated callback event_func_5271 processes event block(s) 113_10. Actions/conditions:
//        113_10: sets LClick to 1; sets the selected object's string to
//        ((AssociateArray*)get_single(gameVariables_instances, it.current_index,
//        default_assarray_instance))->get_string(149, OldName); plays a sound or music track; plus 7 more actions.
void Frames::event_func_5271()
{
    // event 113_10 : sets LClick to 1; sets the selected object's string to ((AssociateArray*)get_single(gameVariables_instances, it.current_index, default_assarray_instance))->get_string(149, OldName); plays a sound or music track; plus 7 more actions
    {
        if (!(is_key_pressed_once(SDLK_ESCAPE))) goto event_113_10_end;
        active3_63_instances.clear_selection();
        for (ObjectIterator it(active3_63_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!active3_63_instances.has_selection()) goto event_113_10_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(150, str_currsel_2434)))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_113_10_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(41, str_lclick_203, 1);
        }
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_single(gameVariables_instances, it.current_index, default_assarray_instance))->get_string(149, str_oldname_2433));
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
        for (ObjectIterator it(active3_63_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        name_93_instances.clear_selection();
        for (ObjectIterator it(name_93_instances); !it.end(); ++it) {
            ((Text*)*it)->blend_color.set(Color(225, 225, 225));
        }
        editbox_92_instances.clear_selection();
        for (ObjectIterator it(editbox_92_instances); !it.end(); ++it) {
            ((EditObject*)*it)->set_text(empty_string);
            ((EditObject*)*it)->disable_focus();
        }
    }
    event_113_10_end: ;
}
// Function purpose: generated callback event_func_5272 processes event block(s) 114_10. Actions/conditions:
//        114_10: sets LClick to 1; sets the selected object's string to
//        ((AssociateArray*)get_single(gameVariables_instances, it.current_index,
//        default_assarray_instance))->get_string(149, OldName); plays a sound or music track; plus 7 more actions.
void Frames::event_func_5272()
{
    // event 114_10 : sets LClick to 1; sets the selected object's string to ((AssociateArray*)get_single(gameVariables_instances, it.current_index, default_assarray_instance))->get_string(149, OldName); plays a sound or music track; plus 7 more actions
    {
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_114_10_end;
        active3_63_instances.clear_selection();
        for (ObjectIterator it(active3_63_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!active3_63_instances.has_selection()) goto event_114_10_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(150, str_currsel_2434)))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_114_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(41, str_lclick_203)) == (0))) goto event_114_10_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(41, str_lclick_203, 1);
        }
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(0, ((AssociateArray*)get_single(gameVariables_instances, it.current_index, default_assarray_instance))->get_string(149, str_oldname_2433));
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
        for (ObjectIterator it(active3_63_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        name_93_instances.clear_selection();
        for (ObjectIterator it(name_93_instances); !it.end(); ++it) {
            ((Text*)*it)->blend_color.set(Color(225, 225, 225));
        }
        editbox_92_instances.clear_selection();
        for (ObjectIterator it(editbox_92_instances); !it.end(); ++it) {
            ((EditObject*)*it)->set_text(empty_string);
            ((EditObject*)*it)->disable_focus();
        }
    }
    event_114_10_end: ;
}
// Function purpose: generated callback event_func_5273 processes event block(s) 115_10. Actions/conditions:
//        115_10: sets error to 0.
void Frames::event_func_5273()
{
    // event 115_10 : sets error to 0
    {
        if (!(is_key_pressed_once(SDLK_RETURN))) goto event_115_10_end;
        if (!(((Active*)get_instance(active3_63_instances))->test_animation(5))) goto event_115_10_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_error_233, 0);
        {
            loop_check_name_running = true;
            int times = int(1);
            loop_check_name_index = 0;
            while (loop_check_name_index < times) {
                loop_check_name_10();
                if (!loop_check_name_running) break;
                loop_check_name_index++;
            }
        }
        {
            loop_set_it_running = true;
            int times = int(1);
            loop_set_it_index = 0;
            while (loop_set_it_index < times) {
                loop_set_it_10();
                if (!loop_set_it_running) break;
                loop_set_it_index++;
            }
        }
    }
    event_115_10_end: ;
}
// Function purpose: generated callback event_func_5274 processes event block(s) 124_10. Actions/conditions:
//        124_10: sets a game or interface text string.
void Frames::event_func_5274()
{
    // event 124_10 : sets a game or interface text string
    {
        if (!(((Active*)get_instance(active3_63_instances))->test_animation(5))) goto event_124_10_end;
        active3_63_instances.clear_selection();
        qualifier_3.clear_selection();
        if (!check_overlap(active3_63_instances, qualifier_3)) goto event_124_10_end;
        ((Text*)get_instance(name_93_instances))->set_string(((Text*)get_instance(name_93_instances))->text+str__96);
    }
    event_124_10_end: ;
}
// Function purpose: generated callback event_func_5275 processes event block(s) 126_10. Actions/conditions:
//        126_10: sets the selected object's visibility to true; changes a stored game value.
void Frames::event_func_5275()
{
    VITA_LEGACY_EVENT();
    // event 126_10 : sets the selected object's visibility to true; changes a stored game value
    {
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(123, str_showerror_2401)) > (0))) goto event_126_10_end;
        ((Text*)get_instance(string5_642_instances))->set_visible(true);
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(123, str_showerror_2401, 1);
    }
    event_126_10_end: ;
}
// Function purpose: generated callback event_func_5276 processes event block(s) 127_10. Actions/conditions:
//        127_10: sets the selected object's visibility to false.
void Frames::event_func_5276()
{
    // event 127_10 : sets the selected object's visibility to false
    {
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(123, str_showerror_2401)) == (0))) goto event_127_10_end;
        ((Text*)get_instance(string5_642_instances))->set_visible(false);
    }
    event_127_10_end: ;
}
void Frames::handle_frame_11_events()
{
    test_collisions_10();
    if (next_frame != -1) return;
    event_func_5249();
    event_func_5250();
    event_func_5251();
    event_func_5252();
    event_func_5253();
    event_func_199();
    if (!group_npc_loop_1) goto group_npc_loop_1_end;
    event_func_5260();
    event_func_5261();
    event_func_5262();
    event_func_5263();
    event_func_5264();
    group_npc_loop_1_end: ;
    event_func_5265();
    event_func_5266();
    event_func_5267();
    event_func_5268();
    event_func_5270();
    event_func_5271();
    event_func_5273();
    event_func_5274();
    event_func_5275();
    event_func_5276();
}
void Frames::handle_frame_11_pre_events()
{
    event_func_5272();
    event_func_5254();
    event_func_5255();
    event_func_5256();
    event_func_5257();
    event_func_5258();
    event_func_5259();
    event_func_5269();
}
// Function purpose: generated callback event_func_5277 processes event block(s) 1_10. Actions/conditions:
//        1_10: sets Begin to 0; hides the system cursor; updates game state with set_limit(12); plus 8 more actions.
void Frames::event_func_5277()
{
    // event 1_10 : sets Begin to 0; hides the system cursor; updates game state with set_limit(12); plus 8 more actions
    {
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(52, str_begin_240, 0);
        set_cursor_visible(false);
        ((EditObject*)get_instance(editbox_92_instances))->set_limit(12);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(43, str_namechanged_222, 0);
        ((Text*)get_instance(name_93_instances))->blend_color.set(Color(225, 225, 225));
        
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(49, str_eteam_238, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(50, str_dtaf_137, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(51, str_sss_239, 0);
    }
    event_1_10_end: ;
}
// Function purpose: generated callback event_func_5278 processes event block(s) 2_10. Actions/conditions:
//        2_10: decrypts a save-data file; loads a game or save-data file; sets InmateCount to get_max(3,
//        (newmapload_643->get_value_int(Info, Inmates)-1)); plus 7 more actions.
void Frames::event_func_5278()
{
    // event 2_10 : decrypts a save-data file; loads a game or save-data file; sets InmateCount to get_max(3, (newmapload_643->get_value_int(Info, Inmates)-1)); plus 7 more actions
    {
        if (!((global_values->get(18)) != (2))) goto event_2_10_end;
    BlowfishObject::decrypt_file(str_mothking_99, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(31, str_mapdir_131)+global_strings->get(0)+str_map_344);
        ((INI*)get_instance(newmapload_643_instances))->load_file(((AssociateArray*)get_instance(gameVariables_instances))->get_string(31, str_mapdir_131)+global_strings->get(0)+str_map_344);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(147, str_inmatecount_746, get_max(3, (((INI*)get_instance(newmapload_643_instances))->get_value_int(str_info_348, str_inmates_519)-1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(148, str_guardcount_747, get_max(5, ((INI*)get_instance(newmapload_643_instances))->get_value_int(str_info_348, str_guards_538)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(117, str_totalcount_2395, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(148, str_guardcount_747)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(147, str_inmatecount_746));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(146, str_maproutine_503, ((INI*)get_instance(newmapload_643_instances))->get_string(str_info_348, str_routineset_745));
    BlowfishObject::encrypt_file(str_mothking_99, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(31, str_mapdir_131)+global_strings->get(0)+str_map_344);
    }
    event_2_10_end: ;
}
// Function purpose: generated callback event_func_5279 processes event block(s) 3_10. Actions/conditions:
//        3_10: loads a game or save-data file; sets InmateCount to get_max(4, (newmapload_643->get_value_int(Info,
//        Inmates)-1)); sets GuardCount to get_max(5, newmapload_643->get_value_int(Info, Guards)); plus 5 more
//        actions.
void Frames::event_func_5279()
{
    // event 3_10 : loads a game or save-data file; sets InmateCount to get_max(4, (newmapload_643->get_value_int(Info, Inmates)-1)); sets GuardCount to get_max(5, newmapload_643->get_value_int(Info, Guards)); plus 5 more actions
    {
        if (!((global_values->get(18)) == (2))) goto event_3_10_end;
        ((INI*)get_instance(newmapload_643_instances))->load_file(((AssociateArray*)get_instance(gameVariables_instances))->get_string(31, str_mapdir_131)+global_strings->get(0)+str_cmap_302);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(147, str_inmatecount_746, get_max(4, (((INI*)get_instance(newmapload_643_instances))->get_value_int(str_info_348, str_inmates_519)-1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(148, str_guardcount_747, get_max(5, ((INI*)get_instance(newmapload_643_instances))->get_value_int(str_info_348, str_guards_538)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(117, str_totalcount_2395, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(148, str_guardcount_747)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(147, str_inmatecount_746));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(146, str_maproutine_503, ((INI*)get_instance(newmapload_643_instances))->get_string(str_info_348, str_routineset_745));
    }
    event_3_10_end: ;
}
// Function purpose: generated callback event_func_5280 processes event block(s) 4_10. Actions/conditions:
//        4_10: sets eTeam to 1.
void Frames::event_func_5280()
{
    // event 4_10 : sets eTeam to 1
    {
        if (!((global_values->get(18)) == (1))) goto event_4_10_end;
        if (!((global_strings->get(0)) == (str_escapeteam_138))) goto event_4_10_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(49, str_eteam_238, 1);
    }
    event_4_10_end: ;
}
// Function purpose: generated callback event_func_5281 processes event block(s) 5_10. Actions/conditions:
//        5_10: sets DTAF to 1.
void Frames::event_func_5281()
{
    // event 5_10 : sets DTAF to 1
    {
        if (!((global_strings->get(0)) == (str_dtaf_137))) goto event_5_10_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(50, str_dtaf_137, 1);
    }
    event_5_10_end: ;
}
// Function purpose: generated callback event_func_5282 processes event block(s) 6_10. Actions/conditions:
//        6_10: sets SSS to 1.
void Frames::event_func_5282()
{
    // event 6_10 : sets SSS to 1
    {
        if (!((global_strings->get(0)) == (str_ss_136))) goto event_6_10_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(51, str_sss_239, 1);
    }
    event_6_10_end: ;
}
// Function purpose: generated callback event_func_5283 processes event block(s) 8_10. Actions/conditions:
//        8_10: sets a game or interface text string; sets a game or interface text string; sets a game or interface
//        text string; plus 1 more actions.
void Frames::event_func_5283()
{
    // event 8_10 : sets a game or interface text string; sets a game or interface text string; sets a game or interface text string; plus 1 more actions
    {
        ((Text*)get_instance(header_107_instances))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_13_632)));
        ((Text*)get_instance(random_641_instances))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_14_197)));
        ((Text*)get_instance(start2_619_instances))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_15_608)));
        ((Text*)get_instance(back2_68_instances))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_3_158)));
    }
    event_8_10_end: ;
}
void Frames::on_frame_11_start_events()
{
    event_func_5277();
    event_func_5278();
    event_func_5279();
    event_func_5280();
    event_func_5281();
    event_func_5282();
    event_func_224();
    event_func_5283();
    event_func_226();
}
void Frames::on_frame_11_init()
{
    index = 10;
    width = 320;
    height = 240;
    virtual_width = 320;
    virtual_height = 240;
    background_color = Color(0, 0, 0);
    timer_base = 50;
    reset_image_cache();
    flush_image_cache();
    layers.resize(2);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 1.0, 1.0, true, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    static ObjectList* qualifier_3_instances[] = {&inmate_175_instances, &inmate11_290_instances, &inmate3_192_instances, &inmate4_193_instances, &inmate10_289_instances, &inmate9_288_instances, &inmate7_286_instances, &inmate2_190_instances, &inmate8_287_instances, &guard_169_instances, &placer_632_instances, &inmate12_644_instances, &inmate13_645_instances, &inmate14_646_instances, &inmatedtaf1_488_instances, &inmatedtaf2_489_instances, &inmatedtaf3_490_instances, &inmatedtaf4_491_instances, &inmatedtaf5_492_instances, &inmatedtaf6_493_instances, &inmatedtaf7_494_instances, &inmatedtaf8_495_instances, &inmatedtaf9_496_instances, &inmatess1_506_instances, &inmatess2_507_instances, &inmatess3_508_instances, &inmatess4_509_instances, &inmatess5_510_instances, &inmatess6_511_instances, &inmatess7_512_instances, &inmatess8_513_instances, &guard2_484_instances, &inmatess0_516_instances, NULL};
    qualifier_3.set(33, &qualifier_3_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&outfitinmate_249_instances, &outfitguard_248_instances, &outfitinmate2_639_instances, &outfitinmate3_647_instances, &outfitguard2_648_instances, &outfitinmate4_649_instances, &outfitguard3_650_instances, &outfitinmatess_503_instances, &outfitinmatess2_669_instances, NULL};
    qualifier_16.set(9, &qualifier_16_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&inmate_175_instances, &inmate11_290_instances, &inmate3_192_instances, &inmate4_193_instances, &inmate10_289_instances, &inmate9_288_instances, &inmate7_286_instances, &inmate2_190_instances, &inmate8_287_instances, &placer_632_instances, &inmate12_644_instances, &inmate13_645_instances, &inmate14_646_instances, &inmatedtaf1_488_instances, &inmatedtaf2_489_instances, &inmatedtaf3_490_instances, &inmatedtaf4_491_instances, &inmatedtaf5_492_instances, &inmatedtaf6_493_instances, &inmatedtaf7_494_instances, &inmatedtaf8_495_instances, &inmatedtaf9_496_instances, &inmatess1_506_instances, &inmatess2_507_instances, &inmatess3_508_instances, &inmatess4_509_instances, &inmatess5_510_instances, &inmatess6_511_instances, &inmatess7_512_instances, &inmatess8_513_instances, &inmatess0_516_instances, NULL};
    qualifier_12.set(31, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&guard_169_instances, &guard2_484_instances, NULL};
    qualifier_13.set(2, &qualifier_13_instances[0]);
    add_background_object(create_backdrop6_99(0, -3), 0);
    add_background_object(create_backdrop_96(24, 16), 0);
    add_background_object(create_backdrop5_616(51, 28), 0);
    add_background_object(create_backdrop4_617(72, 160), 0);
    add_background_object(create_backdrop3_620(72, 59), 0);
    add_object(create_name_615(70, 156), 0);
    add_object(create_gameVariables(0, -32), 0);
    add_object(create_start_618(181, 185), 0);
    add_object(create_back_635(72, 185), 0);
    add_object(create_mix_640(122, 185), 0);
    add_object(create_start2_619(179, 187), 0);
    add_object(create_string5_642(14, 208), 0);
    add_object(create_back2_636(69, 187), 0);
    add_object(create_random_641(119, 187), 0);
    add_object(create_header_621(44, 40), 0);
    add_object(create_placer_632(90, 75), 0);
    add_object(create_active3_634(-92, 142), 0);
    add_object(create_stringtokenizer_81(208, -48), 0);
    add_object(create_substringreplace_27(272, -128), 0);
    add_object(create_editbox_92(64, 240), 0);
    add_object(create_names_633(336, 32), 0);
    add_object(create_translationData(-32, -32), 0);
    add_object(create_newmapload_643(-32, 0), 0);
    add_object(create_mouse_9(96, -48), 1);
    loop_compare_running = false;
    loop_compare_index = 0;
    loop_cop_loop_running = false;
    loop_cop_loop_index = 0;
    loop_inmate_loop_running = false;
    loop_inmate_loop_index = 0;
    loop_check_name_running = false;
    loop_check_name_index = 0;
    loop_empty_names_running = false;
    loop_empty_names_index = 0;
    loop_set_it_running = false;
    loop_set_it_index = 0;
    loop_pull_name_running = false;
    loop_pull_name_index = 0;
    loop_lineup_running = false;
    loop_lineup_index = 0;
    loops = NULL;
    group_npc_loop_1 = true;
    group_check_group_npc_loop_1_3 = true;
    group_check_group_npc_loop_1_2 = true;
    group_check_group_npc_loop_1_1 = true;
    group_check_group_npc_loop_1_0 = true;
    group_check_group_npc_loop_1_4 = true;
}
// Function purpose: generated callback event_func_5284 processes event block(s) 586_11. Actions/conditions:
//        586_11: switches to frame 0; updates game state with selected object->restore_frame().
void Frames::event_func_5284()
{
    // event 586_11 : switches to frame 0; updates game state with selected object->restore_frame()
    {
        if (!(group_code_1)) goto event_586_11_end;
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->restore_frame();
        }
    }
    event_586_11_end: ;
}
void Frames::loop_flash_tut_11()
{
    event_func_5284();
}
// Function purpose: generated callback event_func_5285 processes event block(s) 992_11. Actions/conditions:
//        992_11: sets the object position in the world; sets SleepMenu to 1.
void Frames::event_func_5285()
{
    // event 992_11 : sets the object position in the world; sets SleepMenu to 1
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_992_11_end;
        bedplayer_338_instances.clear_selection();
        for (ObjectIterator it(bedplayer_338_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!bedplayer_338_instances.has_selection()) goto event_992_11_end;
        {
            FrameObject * parent = ((Active*)get_single(bedplayer_338_instances));
            if (parent == NULL) goto pos_end_992_11_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_992_11_0: ;
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(338, str_sleepmenu_1128, 1);
    }
    event_992_11_end: ;
}
// Function purpose: generated callback event_func_5286 processes event block(s) 994_11. Actions/conditions:
//        994_11: sets the object position in the world.
void Frames::event_func_5286()
{
    // event 994_11 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_994_11_end;
        bedmedical_234_instances.clear_selection();
        for (ObjectIterator it(bedmedical_234_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!bedmedical_234_instances.has_selection()) goto event_994_11_end;
        {
            FrameObject * parent = ((Active*)get_single(bedmedical_234_instances));
            if (parent == NULL) goto pos_end_994_11_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_994_11_0: ;
        }
    }
    event_994_11_end: ;
}
void Frames::loop_perch_11()
{
    event_func_1275();
    event_func_1277();
    event_func_1278();
    event_func_1279();
    event_func_1280();
    event_func_5285();
    event_func_5286();
    event_func_1284();
    event_func_1285();
    event_func_1286();
    event_func_1287();
    event_func_1288();
    event_func_1289();
    event_func_1291();
    event_func_1292();
}
// Function purpose: generated callback event_func_5287 processes event block(s) 221_11. Actions/conditions:
//        221_11: sets the selected object's direction to 0.
void Frames::event_func_5287()
{
    // event 221_11 : sets the selected object's direction to 0
    {
        if (!(group_setup_1)) goto event_221_11_end;
        if (((Active*)get_instance(upperlevelcheck_206_instances))->overlaps_background()) goto event_221_11_end;
        toilet2_307_instances.clear_selection();
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_bog_dir_index+1))) { it.deselect(); continue; }
        }
        if (!toilet2_307_instances.has_selection()) goto event_221_11_end;
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_221_11_end: ;
}
// Function purpose: generated callback event_func_5288 processes event block(s) 222_11. Actions/conditions:
//        222_11: sets the selected object's direction to 16.
void Frames::event_func_5288()
{
    // event 222_11 : sets the selected object's direction to 16
    {
        if (!(group_setup_1)) goto event_222_11_end;
        if (!(((Active*)get_instance(upperlevelcheck_206_instances))->overlaps_background())) goto event_222_11_end;
        toilet2_307_instances.clear_selection();
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_bog_dir_index+1))) { it.deselect(); continue; }
        }
        if (!toilet2_307_instances.has_selection()) goto event_222_11_end;
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_222_11_end: ;
}
void Frames::loop_bog_dir_11()
{
    event_func_736();
    event_func_5287();
    event_func_5288();
}
// Function purpose: generated callback event_func_5289 processes event block(s) 502_11. Actions/conditions:
//        502_11: decrypts a save-data file; sets a stored numeric value; updates game state with save_file(); plus 1
//        more actions.
void Frames::event_func_5289()
{
    // event 502_11 : decrypts a save-data file; sets a stored numeric value; updates game state with save_file(); plus 1 more actions
    {
        if (!(group_code_1)) goto event_502_11_end;
    BlowfishObject::decrypt_file(str_mothking_99, File::get_appdata_directory()+str_the_escapists_global_dat_300);
        ((INI*)get_instance(globals_127_instances))->set_value_int(str_prisons_297, str_tutorial_298, 1);
        ((INI*)get_instance(globals_127_instances))->save_file();
    BlowfishObject::encrypt_file(str_mothking_99, File::get_appdata_directory()+str_the_escapists_global_dat_300);
    }
    event_502_11_end: ;
}
// Function purpose: generated callback event_func_5290 processes event block(s) 503_11. Actions/conditions:
//        503_11: splits saved text into fields; clears the current selection or contents; sets Name to
//        stringtokenizer_81->get(0); plus 1 more actions.
void Frames::event_func_5290()
{
    // event 503_11 : splits saved text into fields; clears the current selection or contents; sets Name to stringtokenizer_81->get(0); plus 1 more actions
    {
        if (!(group_code_1)) goto event_503_11_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((Active*)get_instance(playerBase_instances))->alterables->strings.get(0)+str__346+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(40, str_avatar_105)), str__346);
        ((AssociateArray*)get_instance(gameVariables_instances))->clear();
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(743, str_name_103, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(40, str_avatar_105, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
    }
    event_503_11_end: ;
}
// Function purpose: generated callback event_func_5291 processes event block(s) 504_11. Actions/conditions:
//        504_11: sets Name to empty_string; plays a sound or music track; plays a sound or music track; plus 1 more
//        actions.
void Frames::event_func_5291()
{
    // event 504_11 : sets Name to empty_string; plays a sound or music track; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1)) goto event_504_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(743, str_name_103, empty_string);
        media.play(str_music_theme_ogg_92, 10-1, 0);
        media.play_id(SOUND_RUMBLE_15, 1-1);
        next_frame = 4 + 0;    
        if (loop_count != 0)
            manager.set_fade(Transition::DOOR, Color(0, 0, 0), 2.22222222222);
    
    }
    event_504_11_end: ;
}
void Frames::loop_close_level_11()
{
    event_func_5289();
    event_func_5290();
    event_func_5291();
}
// Function purpose: generated callback event_func_5292 processes event block(s) 186_11. Actions/conditions:
//        186_11: adds a baseguard 251 instance; sets the selected object's numeric value to
//        loop_create_guards_index+1; sets the object position in the world; plus 14 more actions.
void Frames::event_func_5292()
{
    // event 186_11 : adds a baseguard 251 instance; sets the selected object's numeric value to loop_create_guards_index+1; sets the object position in the world; plus 14 more actions
    {
        if (!(group_setup_1)) goto event_186_11_end;
        if (!((loop_create_guards_index) == (0))) goto event_186_11_end;
        guardBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guardBase(-16, -16), 1);
            guardBase_instances.add_back();
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_guards_index+1);
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(tutguardleft_769_instances));
            if (parent == NULL) goto pos_end_186_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_186_11_1: ;
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(10);
            ((Active*)*it)->alterables->values.set(19, 1);
            ((Active*)*it)->alterables->strings.set(0, str_officer_fragile_2435);
            ((Active*)*it)->alterables->values.set(25, 1);
        }
        guard_169_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guard_672(-16, -16), 1);
            guard_169_instances.add_back();
        }
        for (ObjectIterator it(guard_169_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_186_11_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_186_11_3: ;
        }
        for (ObjectIterator it(guard_169_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_guards_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        outfitguard_248_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitguard_700(-16, -16), 1);
            outfitguard_248_instances.add_back();
        }
        for (ObjectIterator it(outfitguard_248_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_186_11_5;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_186_11_5: ;
        }
        for (ObjectIterator it(outfitguard_248_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, qualifier_14.size());
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_weapon_460+number_to_string(qualifier_14.size()), empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(qualifier_14.size()), str_3_100_540);
    }
    event_186_11_end: ;
}
// Function purpose: generated callback event_func_5293 processes event block(s) 187_11. Actions/conditions:
//        187_11: adds a baseguard 251 instance; sets the selected object's numeric value to
//        loop_create_guards_index+1; sets the object position in the world; plus 14 more actions.
void Frames::event_func_5293()
{
    // event 187_11 : adds a baseguard 251 instance; sets the selected object's numeric value to loop_create_guards_index+1; sets the object position in the world; plus 14 more actions
    {
        if (!(group_setup_1)) goto event_187_11_end;
        if (!((loop_create_guards_index) == (1))) goto event_187_11_end;
        guardBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guardBase(-16, -16), 1);
            guardBase_instances.add_back();
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_guards_index+1);
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(984, 504);
            pos_end_187_11_1: ;
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(10);
            ((Active*)*it)->alterables->values.set(19, 1);
            ((Active*)*it)->alterables->strings.set(0, str_officer_loiter_2436);
            ((Active*)*it)->alterables->values.set(25, 2);
        }
        guard_169_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guard_672(-16, -16), 1);
            guard_169_instances.add_back();
        }
        for (ObjectIterator it(guard_169_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_187_11_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_187_11_3: ;
        }
        for (ObjectIterator it(guard_169_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_guards_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        outfitguard_248_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitguard_700(-16, -16), 1);
            outfitguard_248_instances.add_back();
        }
        for (ObjectIterator it(outfitguard_248_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_187_11_5;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_187_11_5: ;
        }
        for (ObjectIterator it(outfitguard_248_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, qualifier_14.size());
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_weapon_460+number_to_string(qualifier_14.size()), empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(qualifier_14.size()), str_3_100_540);
    }
    event_187_11_end: ;
}
// Function purpose: generated callback event_func_5294 processes event block(s) 188_11. Actions/conditions:
//        188_11: adds a baseguard 251 instance; sets the selected object's numeric value to
//        loop_create_guards_index+1; sets the object position in the world; plus 14 more actions.
void Frames::event_func_5294()
{
    // event 188_11 : adds a baseguard 251 instance; sets the selected object's numeric value to loop_create_guards_index+1; sets the object position in the world; plus 14 more actions
    {
        if (!(group_setup_1)) goto event_188_11_end;
        if (!((loop_create_guards_index) == (2))) goto event_188_11_end;
        guardBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guardBase(-16, -16), 1);
            guardBase_instances.add_back();
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_guards_index+1);
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(984, 456);
            pos_end_188_11_1: ;
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(10);
            ((Active*)*it)->alterables->values.set(19, 1);
            ((Active*)*it)->alterables->strings.set(0, str_officer_slack_2437);
            ((Active*)*it)->alterables->values.set(25, 3);
        }
        guard_169_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guard_672(-16, -16), 1);
            guard_169_instances.add_back();
        }
        for (ObjectIterator it(guard_169_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_188_11_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_188_11_3: ;
        }
        for (ObjectIterator it(guard_169_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_guards_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        outfitguard_248_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitguard_700(-16, -16), 1);
            outfitguard_248_instances.add_back();
        }
        for (ObjectIterator it(outfitguard_248_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_188_11_5;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_188_11_5: ;
        }
        for (ObjectIterator it(outfitguard_248_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, qualifier_14.size());
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_weapon_460+number_to_string(qualifier_14.size()), empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(qualifier_14.size()), str_3_100_540);
    }
    event_188_11_end: ;
}
// Function purpose: generated callback event_func_5295 processes event block(s) 189_11. Actions/conditions:
//        189_11: adds a baseguard 251 instance; sets the selected object's numeric value to
//        loop_create_guards_index+1; sets the object position in the world; plus 14 more actions.
void Frames::event_func_5295()
{
    // event 189_11 : adds a baseguard 251 instance; sets the selected object's numeric value to loop_create_guards_index+1; sets the object position in the world; plus 14 more actions
    {
        if (!(group_setup_1)) goto event_189_11_end;
        if (!((loop_create_guards_index) == (3))) goto event_189_11_end;
        guardBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guardBase(-16, -16), 1);
            guardBase_instances.add_back();
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_guards_index+1);
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(936, 488);
            pos_end_189_11_1: ;
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(10);
            ((Active*)*it)->alterables->values.set(19, 1);
            ((Active*)*it)->alterables->strings.set(0, str_officer_blase_2438);
            ((Active*)*it)->alterables->values.set(25, 4);
        }
        guard_169_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guard_672(-16, -16), 1);
            guard_169_instances.add_back();
        }
        for (ObjectIterator it(guard_169_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_189_11_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_189_11_3: ;
        }
        for (ObjectIterator it(guard_169_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_guards_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        outfitguard_248_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitguard_700(-16, -16), 1);
            outfitguard_248_instances.add_back();
        }
        for (ObjectIterator it(outfitguard_248_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_189_11_5;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_189_11_5: ;
        }
        for (ObjectIterator it(outfitguard_248_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, qualifier_14.size());
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_weapon_460+number_to_string(qualifier_14.size()), empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(qualifier_14.size()), str_3_100_540);
    }
    event_189_11_end: ;
}
void Frames::loop_create_guards_11()
{
    event_func_5292();
    event_func_5293();
    event_func_5294();
    event_func_5295();
}
// Function purpose: generated callback event_func_5296 processes event block(s) 1359_11. Actions/conditions:
//        1359_11: increments JobQuota by 11.
void Frames::event_func_5296()
{
    // event 1359_11 : increments JobQuota by 11
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cleaning_1)) goto event_1359_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_janitor_24))) goto event_1359_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_1359_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(18, str_jobquota_480, 11);
    }
    event_1359_11_end: ;
}
// Function purpose: generated callback event_func_5297 processes event block(s) 1360_11. Actions/conditions:
//        1360_11: sets the selected object's numeric value to 0.
void Frames::event_func_5297()
{
    // event 1360_11 : sets the selected object's numeric value to 0
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cleaning_1)) goto event_1360_11_end;
        usespot_208_instances.clear_selection();
        dirt_697_instances.clear_selection();
        if (!check_overlap(usespot_208_instances, dirt_697_instances)) goto event_1360_11_end;
        for (ObjectIterator it(dirt_697_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1360_11_end: ;
}
// Function purpose: generated callback event_func_5298 processes event block(s) 1361_11. Actions/conditions:
//        1361_11: removes the selected object.
void Frames::event_func_5298()
{
    // event 1361_11 : removes the selected object
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cleaning_1)) goto event_1361_11_end;
        usespot_208_instances.clear_selection();
        water_715_instances.clear_selection();
        if (!check_overlap(usespot_208_instances, water_715_instances)) goto event_1361_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1361_11_end;
        for (ObjectIterator it(water_715_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1361_11_end: ;
}
void Frames::loop_clean_fin_11()
{
    event_func_1219();
    event_func_5296();
    event_func_5297();
    event_func_5298();
    event_func_1224();
}
// Function purpose: generated callback event_func_5299 processes event block(s) 585_11. Actions/conditions:
//        585_11: creates a buttons 699 object; positions the target object; positions the target object; plus 7 more
//        actions.
void Frames::event_func_5299()
{
    // event 585_11 : creates a buttons 699 object; positions the target object; positions the target object; plus 7 more actions
    {
        if (!(group_code_1)) goto event_585_11_end;
        FrameObject * single_instance_585_11_0; single_instance_585_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buttons_699(parent->x + 65, parent->y + 35), parent->layer);
                if (single_instance_585_11_0 == NULL)
                    single_instance_585_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_585_11_0))->set_x(((Active*)get_instance(dialogPanel_instances))->get_box_index(2)-90);
        ((Active*)((Active*)single_instance_585_11_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(3)-25);
        ((Active*)((Active*)single_instance_585_11_0))->force_animation(7);
        FrameObject * single_instance_585_11_1; single_instance_585_11_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_585_11_0)->x + 3, ((Active*)single_instance_585_11_0)->y + 3), ((Active*)single_instance_585_11_0)->layer);
            if (single_instance_585_11_1 == NULL)
                single_instance_585_11_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_585_11_1))->blend_color.set(Color(195, 115, 75));
        ((Text*)((Text*)single_instance_585_11_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_6_241)));
    }
    event_585_11_end: ;
}
