#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_4064()
{
    // event 2272_6
    {
        if (!(group_code_1)) goto event_2272_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (21))) goto event_2272_6_end;
        ((Active*)get_instance(screenTint_instances))->set_blend_color(14444374);
    }
    event_2272_6_end: ;
}
void Frames::event_func_4065()
{
    // event 2273_6
    {
        if (!(group_code_1)) goto event_2273_6_end;
        every_2273_6 += manager.dt;
        if (every_2273_6 < 0.4) goto event_2273_6_end;
        every_2273_6 -= 0.4;
        if (!((((Active*)get_instance(screenTint_instances))->alterables->values.get(0)) < (255))) goto event_2273_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (7))) goto event_2273_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (21))) goto event_2273_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2273_6_end;
        ((Active*)get_instance(screenTint_instances))->alterables->values.add(0, 1);
    }
    event_2273_6_end: ;
}
void Frames::event_func_4066()
{
    // event 2274_6
    bool or_result_2274_6 = false;
    bool or_temp_result_2274_6_0 = false;
    {
        if (!(group_code_1)) goto or_event_2274_6_0_end;
        every_2274_6 += manager.dt;
        if (every_2274_6 < 0.4) goto or_event_2274_6_0_end;
        every_2274_6 -= 0.4;
        screenTint_instances.clear_selection();
        for (ObjectIterator it(screenTint_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (35))) { it.deselect(); continue; }
        }
        if (!screenTint_instances.has_selection()) goto or_event_2274_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(25, str_t_hour_488)) >= (21))) goto or_event_2274_6_0_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_2274_6_0_end;
        or_result_2274_6 = true;
        or_temp_result_2274_6_0 = true;
    }
    or_event_2274_6_0_end: ;
    screenTint_instances.clear_saved_selection();
    dialogPanel_instances.clear_saved_selection();
    if (or_temp_result_2274_6_0) {
        screenTint_instances.save_selection();
        dialogPanel_instances.save_selection();
    }
    // event 2274_6
    bool or_temp_result_2274_6_1 = false;
    {
        if (!(group_code_1)) goto or_event_2274_6_1_end;
        every_2274_6 += manager.dt;
        if (every_2274_6 < 0.4) goto or_event_2274_6_1_end;
        every_2274_6 -= 0.4;
        screenTint_instances.clear_selection();
        for (ObjectIterator it(screenTint_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (35))) { it.deselect(); continue; }
        }
        if (!screenTint_instances.has_selection()) goto or_event_2274_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(25, str_t_hour_488)) < (7))) goto or_event_2274_6_1_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_2274_6_1_end;
        or_result_2274_6 = true;
        or_temp_result_2274_6_1 = true;
        or_event_2274_6_1_end: ;
        if (or_temp_result_2274_6_1) {
            screenTint_instances.save_selection();
            dialogPanel_instances.save_selection();
        }
        if (!or_result_2274_6) goto or_final_or_event_2274_6_1_end;
        screenTint_instances.empty_selection();
        dialogPanel_instances.empty_selection();
        if (or_temp_result_2274_6_0 || or_temp_result_2274_6_1) {
            screenTint_instances.restore_selection();
        }
        if (or_temp_result_2274_6_0 || or_temp_result_2274_6_1) {
            dialogPanel_instances.restore_selection();
        }
        for (ObjectIterator it(screenTint_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 1);
        }
    }
    or_final_or_event_2274_6_1_end: ;
}
void Frames::event_func_4067()
{
    // event 2275_6
    {
        if (!(group_code_1)) goto event_2275_6_end;
        ((Active*)get_instance(screenTint_instances))->blend_color.set_alpha_coefficient(((Active*)get_instance(screenTint_instances))->alterables->values.get(0));
    }
    event_2275_6_end: ;
}
void Frames::event_func_4068()
{
    // event 2276_6
    {
        if (!(group_code_1)) goto event_2276_6_end;
        dighole_207_instances.clear_selection();
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(2147483648))) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_2276_6_end;
        if (!((((Active*)get_single(dighole_207_instances, default_active_instance))->layer->index+1) != (1))) goto event_2276_6_end;
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(1-1);
        }
    }
    event_2276_6_end: ;
}
void Frames::event_func_4069()
{
    // event 2277_6
    {
        if (!(group_code_1)) goto event_2277_6_end;
        dighole_207_instances.clear_selection();
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_2277_6_end: ;
}
void Frames::event_func_4070()
{
    // event 2278_6
    {
        if (!(group_code_1)) goto event_2278_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_2278_6_end;
        {
            qualifier_2.clear_selection();
            QualifierIterator other_it(qualifier_2);
            dighole_207_instances.clear_selection();
            for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_2278_6_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_2278_6_0_end: ;
        undergroundGlow_instances.clear_selection();
        for (ObjectIterator it(undergroundGlow_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_2278_6_end: ;
}
void Frames::event_func_4071()
{
    // event 2279_6
    {
        if (!(group_code_1)) goto event_2279_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(4)) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_2279_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(510, str_elecanim_1408)) == (1))) goto event_2279_6_end;
        qualifier_16.clear_selection();
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!qualifier_16.has_selection()) goto event_2279_6_end;
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(510, str_elecanim_1408, 0);
    }
    event_2279_6_end: ;
}
void Frames::event_func_4072()
{
    // event 2280_6
    {
        if (!(group_code_1)) goto event_2280_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_2280_6_end;
        qualifier_11.clear_selection();
        for (QualifierIterator it(qualifier_11); !it.end(); ++it) {
            ((Text*)*it)->move_front();
        }
    }
    event_2280_6_end: ;
}
void Frames::event_func_4073()
{
    // event 2281_6
    {
        if (!(group_code_1)) goto event_2281_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2281_6_end;
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->move_front();
        }
    }
    event_2281_6_end: ;
}
void Frames::event_func_4074()
{
    // event 2282_6
    {
        if (!(group_code_1)) goto event_2282_6_end;
        ((Active*)get_instance(mouse_9_instances))->move_front();
    }
    event_2282_6_end: ;
}
void Frames::event_func_4075()
{
    // event 2283_6
    {
        if (!(group_code_1)) goto event_2283_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_2283_6_end;
        if (!(layers[2].visible)) goto event_2283_6_end;
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(2);
    }
    event_2283_6_end: ;
}
void Frames::event_func_4076()
{
    // event 2284_6
    {
        if (!(group_code_1)) goto event_2284_6_end;
        if (layers[2].visible) goto event_2284_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) != (1))) goto event_2284_6_end;
        ((LayerObject*)get_instance(layerobject_37_instances))->show_layer(2);
    }
    event_2284_6_end: ;
}
void Frames::event_func_4077()
{
    // event 2285_6
    {
        if (!(group_code_1)) goto event_2285_6_end;
        every_2285_6 += manager.dt;
        if (every_2285_6 < 150.0) goto event_2285_6_end;
        every_2285_6 -= 150.0;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(8)) > (10))) goto event_2285_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2285_6_end;
        ((Active*)get_instance(playerBase_instances))->alterables->values.sub(8, 1);
    }
    event_2285_6_end: ;
}
void Frames::event_func_4078()
{
    // event 2286_6
    {
        if (!(group_code_1)) goto event_2286_6_end;
        every_2286_6 += manager.dt;
        if (every_2286_6 < 150.0) goto event_2286_6_end;
        every_2286_6 -= 150.0;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(9)) > (10))) goto event_2286_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2286_6_end;
        ((Active*)get_instance(playerBase_instances))->alterables->values.sub(9, 1);
    }
    event_2286_6_end: ;
}
void Frames::event_func_4079()
{
    // event 2287_6
    {
        if (!(group_code_1)) goto event_2287_6_end;
        every_2287_6 += manager.dt;
        if (every_2287_6 < 150.0) goto event_2287_6_end;
        every_2287_6 -= 150.0;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(10)) > (10))) goto event_2287_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2287_6_end;
        ((Active*)get_instance(playerBase_instances))->alterables->values.sub(10, 1);
    }
    event_2287_6_end: ;
}
void Frames::event_func_4080()
{
    // event 2288_6
    {
        if (!(group_code_1)) goto event_2288_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(8)) < (10))) goto event_2288_6_end;
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(8, 10);
    }
    event_2288_6_end: ;
}
void Frames::event_func_4081()
{
    // event 2289_6
    {
        if (!(group_code_1)) goto event_2289_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(9)) < (10))) goto event_2289_6_end;
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(9, 10);
    }
    event_2289_6_end: ;
}
void Frames::event_func_4082()
{
    // event 2290_6
    {
        if (!(group_code_1)) goto event_2290_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(10)) < (10))) goto event_2290_6_end;
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(10, 10);
    }
    event_2290_6_end: ;
}
void Frames::event_func_4083()
{
    // event 2291_6
    {
        if (!(group_code_1)) goto event_2291_6_end;
        stash_420_instances.clear_selection();
        for (ObjectIterator it(stash_420_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!stash_420_instances.has_selection()) goto event_2291_6_end;
        if (!((((Active*)get_single(stash_420_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2291_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2291_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2291_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_34_2170));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2291_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2291_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_34_2170));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->alterables->flags.enable(10);
            ((SystemBox*)*it)->alterables->flags.enable(100);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2291_6_end: ;
}
void Frames::event_func_4084()
{
    // event 2292_6
    {
        if (!(group_code_1)) goto event_2292_6_end;
        if (!(((TextBlitter*)get_instance(cashText_instances))->mouse_over())) goto event_2292_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2292_6_end;
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hud_2171, str_1_97));
        
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2292_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2292_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hud_2171, str_1_97));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2292_6_end: ;
}
void Frames::event_func_4085()
{
    // event 2293_6
    {
        if (!(group_code_1)) goto event_2293_6_end;
        if (!(((TextBlitter*)get_instance(heatText_instances))->mouse_over())) goto event_2293_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2293_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hud_2171, str_2_155));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2293_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2293_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hud_2171, str_2_155));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2293_6_end: ;
}
void Frames::event_func_4086()
{
    // event 2294_6
    {
        if (!(group_code_1)) goto event_2294_6_end;
        if (!(((TextBlitter*)get_instance(healthText_instances))->mouse_over())) goto event_2294_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2294_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hud_2171, str_3_158));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2294_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2294_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hud_2171, str_3_158));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2294_6_end: ;
}
void Frames::event_func_4087()
{
    // event 2295_6
    {
        if (!(group_code_1)) goto event_2295_6_end;
        if (!(((TextBlitter*)get_instance(fatigueText_instances))->mouse_over())) goto event_2295_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2295_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hud_2171, str_4_161));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2295_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2295_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hud_2171, str_4_161));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2295_6_end: ;
}
void Frames::event_func_4088()
{
    // event 2296_6
    {
        if (!(group_code_1)) goto event_2296_6_end;
        if (!(((Active*)get_instance(interfaceButtons_instances))->mouse_over())) goto event_2296_6_end;
        if (!((get_mouse_y()) < (((Active*)get_instance(interfaceButtons_instances))->get_box_index(1)+22))) goto event_2296_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2296_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hud_2171, str_5_164)+str_7_2172);
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2296_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2296_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hud_2171, str_5_164)+str_7_2172);
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->alterables->flags.enable(10);
            ((SystemBox*)*it)->alterables->flags.enable(100);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2296_6_end: ;
}
void Frames::event_func_4089()
{
    // event 2297_6
    {
        if (!(group_code_1)) goto event_2297_6_end;
        if (!(((Active*)get_instance(interfaceButtons_instances))->mouse_over())) goto event_2297_6_end;
        if (!((get_mouse_y()) > (((Active*)get_instance(interfaceButtons_instances))->get_box_index(1)+22))) goto event_2297_6_end;
        if (!((get_mouse_y()) < (((Active*)get_instance(interfaceButtons_instances))->get_box_index(1)+44))) goto event_2297_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2297_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hud_2171, str_6_241)+str_8_2173);
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2297_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2297_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hud_2171, str_6_241)+str_8_2173);
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->alterables->flags.enable(100);
            ((SystemBox*)*it)->alterables->flags.enable(10);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2297_6_end: ;
}
void Frames::event_func_4090()
{
    // event 2298_6
    {
        if (!(group_code_1)) goto event_2298_6_end;
        if (!(((Active*)get_instance(interfaceButtons_instances))->mouse_over())) goto event_2298_6_end;
        if (!((get_mouse_y()) > (((Active*)get_instance(interfaceButtons_instances))->get_box_index(1)+44))) goto event_2298_6_end;
        if (!((get_mouse_y()) < (((Active*)get_instance(interfaceButtons_instances))->get_box_index(1)+66))) goto event_2298_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2298_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hud_2171, str_7_323)+str_9_2174);
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2298_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2298_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hud_2171, str_7_323)+str_9_2174);
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->alterables->flags.enable(100);
            ((SystemBox*)*it)->alterables->flags.enable(10);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2298_6_end: ;
}
void Frames::event_func_4091()
{
    // event 2299_6
    {
        if (!(group_code_1)) goto event_2299_6_end;
        if (!(((Active*)get_instance(interfaceButtons_instances))->mouse_over())) goto event_2299_6_end;
        if (!((get_mouse_y()) > (((Active*)get_instance(interfaceButtons_instances))->get_box_index(1)+66))) goto event_2299_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2299_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hud_2171, str_8_325)+str_0_2175);
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2299_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2299_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hud_2171, str_8_325)+str_0_2175);
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->alterables->flags.enable(100);
            ((SystemBox*)*it)->alterables->flags.enable(10);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2299_6_end: ;
}
void Frames::event_func_4092()
{
    // event 2300_6
    {
        if (!(group_code_1)) goto event_2300_6_end;
        if (!(is_key_pressed(SDLK_LSHIFT))) goto event_2300_6_end;
        if (!group_code_mouseovers_item_hovers_holding_shift_1) {
            group_code_mouseovers_item_hovers_holding_shift_1 = true;
        }
    }
    event_2300_6_end: ;
}
void Frames::event_func_4093()
{
    // event 2301_6
    {
        if (!(group_code_1)) goto event_2301_6_end;
        if (!(group_code_1 && group_code_mouseovers_item_hovers_holding_shift_1)) goto event_2301_6_end;
        if (is_key_pressed(SDLK_LSHIFT)) goto event_2301_6_end;
            group_code_mouseovers_item_hovers_holding_shift_1 = false;
    
    }
    event_2301_6_end: ;
}
void Frames::event_func_4094()
{
    // event 2302_6
    {
        if (!(group_code_1)) goto event_2302_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2302_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2302_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) != (str_craftnote_716))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(-1))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2302_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(itemData_instances))->get_string(number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2)), str_name_103)+str__2057+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7))+str__2176);
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2302_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2302_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(0, 255, 0));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(itemData_instances))->get_string(number_to_string(((Active*)get_single(hudItem_instances, it.current_index, default_active_instance))->alterables->values.get(2)), str_name_103)+str__2057+number_to_string(((Active*)get_single(hudItem_instances, it.current_index, default_active_instance))->alterables->values.get(7))+str__2176);
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->alterables->flags.enable(100);
            ((SystemBox*)*it)->alterables->flags.enable(10);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2302_6_end: ;
}
void Frames::event_func_4095()
{
    // event 2303_6
    {
        if (!(group_code_1)) goto event_2303_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2303_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2303_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (-100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) != (str_craftnote_716))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(-1))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2303_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(itemData_instances))->get_string(number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2)), str_name_103));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2303_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2303_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(0, 255, 0));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(itemData_instances))->get_string(number_to_string(((Active*)get_single(hudItem_instances, it.current_index, default_active_instance))->alterables->values.get(2)), str_name_103));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->alterables->flags.enable(100);
            ((SystemBox*)*it)->alterables->flags.enable(10);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2303_6_end: ;
}
void Frames::event_func_4096()
{
    // event 2304_6
    {
        if (!(group_code_1)) goto event_2304_6_end;
        items_184_instances.clear_selection();
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_2304_6_end;
        if (!((((Active*)get_single(items_184_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2304_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2304_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2304_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(itemData_instances))->get_string(number_to_string(((Active*)get_single(items_184_instances, default_active_instance))->alterables->values.get(2)), str_name_103));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2304_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2304_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(0, 255, 0));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(itemData_instances))->get_string(number_to_string(((Active*)get_single(items_184_instances, it.current_index, default_active_instance))->alterables->values.get(2)), str_name_103));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2304_6_end: ;
}
void Frames::event_func_4097()
{
    // event 2305_6
    {
        if (!(group_code_1)) goto event_2305_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2305_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2305_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) != (str_craftnote_716))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(-1))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2305_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(itemData_instances))->get_string(number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2)), str_name_103)+str__2057+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7))+str__2176);
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2305_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2305_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(255, 0, 0));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(itemData_instances))->get_string(number_to_string(((Active*)get_single(hudItem_instances, it.current_index, default_active_instance))->alterables->values.get(2)), str_name_103)+str__2057+number_to_string(((Active*)get_single(hudItem_instances, it.current_index, default_active_instance))->alterables->values.get(7))+str__2176);
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->alterables->flags.enable(10);
            ((SystemBox*)*it)->alterables->flags.enable(100);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2305_6_end: ;
}
void Frames::event_func_4098()
{
    // event 2306_6
    {
        if (!(group_code_1)) goto event_2306_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2306_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2306_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (-100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) != (str_craftnote_716))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(-1))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2306_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(itemData_instances))->get_string(number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2)), str_name_103));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2306_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2306_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(255, 0, 0));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(itemData_instances))->get_string(number_to_string(((Active*)get_single(hudItem_instances, it.current_index, default_active_instance))->alterables->values.get(2)), str_name_103));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->alterables->flags.enable(10);
            ((SystemBox*)*it)->alterables->flags.enable(100);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2306_6_end: ;
}
void Frames::event_func_4099()
{
    // event 2307_6
    {
        if (!(group_code_1)) goto event_2307_6_end;
        items_184_instances.clear_selection();
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_2307_6_end;
        if (!((((Active*)get_single(items_184_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2307_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2307_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2307_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(itemData_instances))->get_string(number_to_string(((Active*)get_single(items_184_instances, default_active_instance))->alterables->values.get(2)), str_name_103));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2307_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2307_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(255, 0, 0));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(itemData_instances))->get_string(number_to_string(((Active*)get_single(items_184_instances, it.current_index, default_active_instance))->alterables->values.get(2)), str_name_103));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2307_6_end: ;
}
void Frames::event_func_4100()
{
    // event 2308_6
    {
        if (!(group_code_1)) goto event_2308_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2308_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2308_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(1)) != (empty_string))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(1)) != (str_0_615))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2308_6_end;
    CalcRect::set_text(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->strings.get(1)+str_s_1282+((SystemBox*)get_single(activesystembox_450_instances, default_systembox_instance))->text);
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_text(((Active*)get_single(hudItem_instances, it.current_index, default_active_instance))->alterables->strings.get(1)+str_s_1282+((SystemBox*)*it)->text);
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
        }
    }
    event_2308_6_end: ;
}
void Frames::event_func_4101()
{
    // event 2309_6
    {
        if (!(group_code_1)) goto event_2309_6_end;
        items_184_instances.clear_selection();
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_2309_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2309_6_end;
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(1)) != (empty_string))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(1)) != (str_0_615))) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_2309_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2309_6_end;
    CalcRect::set_text(((Active*)get_single(items_184_instances, default_active_instance))->alterables->strings.get(1)+str_s_1282+((SystemBox*)get_single(activesystembox_450_instances, default_systembox_instance))->text);
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_text(((Active*)get_single(items_184_instances, it.current_index, default_active_instance))->alterables->strings.get(1)+str_s_1282+((SystemBox*)*it)->text);
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
        }
    }
    event_2309_6_end: ;
}
void Frames::event_func_4102()
{
    // event 2310_6
    {
        if (!(group_code_1 && group_code_mouseovers_item_hovers_holding_shift_1)) goto event_2310_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2310_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(480, str_itemhp_1355, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(235, str_itemstr_854, empty_string);
        {
            loop_make_item_str_running = true;
            int times = int(1);
            loop_make_item_str_index = 0;
            while (loop_make_item_str_index < times) {
                loop_make_item_str_6();
                if (!loop_make_item_str_running) break;
                loop_make_item_str_index++;
            }
        }
    }
    event_2310_6_end: ;
}
void Frames::event_func_4103()
{
    // event 2311_6
    {
        if (!(group_code_1 && group_code_mouseovers_item_hovers_holding_shift_1)) goto event_2311_6_end;
        items_184_instances.clear_selection();
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_2311_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2311_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, ((Active*)get_single(items_184_instances, default_active_instance))->alterables->values.get(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(480, str_itemhp_1355, ((Active*)get_single(items_184_instances, default_active_instance))->alterables->values.get(7));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(235, str_itemstr_854, empty_string);
        {
            loop_make_item_str_running = true;
            int times = int(1);
            loop_make_item_str_index = 0;
            while (loop_make_item_str_index < times) {
                loop_make_item_str_6();
                if (!loop_make_item_str_running) break;
                loop_make_item_str_index++;
            }
        }
    }
    event_2311_6_end: ;
}
void Frames::event_func_4104()
{
    // event 2321_6
    {
        if (!(group_code_1 && group_code_mouseovers_item_hovers_holding_shift_1)) goto event_2321_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2321_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2321_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) != (str_craftnote_716))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(-1))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2321_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854)) != (empty_string))) goto event_2321_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2321_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2321_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->alterables->flags.enable(10);
            ((SystemBox*)*it)->alterables->flags.enable(100);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2321_6_end: ;
}
void Frames::event_func_4105()
{
    // event 2322_6
    {
        if (!(group_code_1 && group_code_mouseovers_item_hovers_holding_shift_1)) goto event_2322_6_end;
        items_184_instances.clear_selection();
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_2322_6_end;
        if (!((((Active*)get_single(items_184_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2322_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2322_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854)) != (empty_string))) goto event_2322_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2322_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2322_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(235, str_itemstr_854));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2322_6_end: ;
}
void Frames::event_func_4106()
{
    // event 2323_6
    {
        if (!(group_code_1)) goto event_2323_6_end;
        powergen_360_instances.clear_selection();
        for (ObjectIterator it(powergen_360_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!powergen_360_instances.has_selection()) goto event_2323_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (((Active*)get_single(powergen_360_instances, default_active_instance))->layer->index+1))) goto event_2323_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2323_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2323_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_27_2177));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2323_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2323_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_27_2177));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->alterables->flags.enable(10);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2323_6_end: ;
}
void Frames::event_func_4107()
{
    // event 2324_6
    {
        if (!(group_code_1)) goto event_2324_6_end;
        zipstart_389_instances.clear_selection();
        for (ObjectIterator it(zipstart_389_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!zipstart_389_instances.has_selection()) goto event_2324_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (5))) goto event_2324_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2324_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2324_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_69_2178));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2324_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2324_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_69_2178));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->alterables->flags.enable(10);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2324_6_end: ;
}
void Frames::event_func_4108()
{
    // event 2325_6
    {
        if (!(group_code_1)) goto event_2325_6_end;
        zipend_390_instances.clear_selection();
        for (ObjectIterator it(zipend_390_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!zipend_390_instances.has_selection()) goto event_2325_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (5))) goto event_2325_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2325_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2325_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_70_2179));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2325_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2325_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_70_2179));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->alterables->flags.enable(10);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2325_6_end: ;
}
void Frames::event_func_4109()
{
    // event 2326_6
    {
        if (!(group_code_1)) goto event_2326_6_end;
        activityProgress_instances.clear_selection();
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(1)) != (empty_string))) { it.deselect(); continue; }
        }
        if (!activityProgress_instances.has_selection()) goto event_2326_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2326_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((Active*)get_single(activityProgress_instances, default_active_instance))->alterables->strings.get(1));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2326_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2326_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((Active*)get_single(activityProgress_instances, it.current_index, default_active_instance))->alterables->strings.get(1));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->alterables->flags.enable(10);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2326_6_end: ;
}
void Frames::event_func_4110()
{
    // event 2327_6
    {
        if (!(group_code_1)) goto event_2327_6_end;
        ssreindeer_504_instances.clear_selection();
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!ssreindeer_504_instances.has_selection()) goto event_2327_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2327_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2327_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2327_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2327_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2327_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_hover_reindeers_2180), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(((Active*)get_single(ssreindeer_504_instances, default_active_instance))->alterables->values.get(0)));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2327_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2327_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(((Active*)get_single(ssreindeer_504_instances, it.current_index, default_active_instance))->alterables->values.get(0)));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2327_6_end: ;
}
void Frames::event_func_4111()
{
    // event 2328_6
    {
        if (!(group_code_1)) goto event_2328_6_end;
        ssreindeer_504_instances.clear_selection();
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!ssreindeer_504_instances.has_selection()) goto event_2328_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_2328_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2328_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2328_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2328_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2328_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_hover_reindeer_2181));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2328_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2328_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_hover_reindeer_2181));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2328_6_end: ;
}
void Frames::event_func_4112()
{
    // event 2329_6
    {
        if (!(group_code_1)) goto event_2329_6_end;
        sssobjects_502_instances.clear_selection();
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_tree_941))) { it.deselect(); continue; }
        }
        if (!sssobjects_502_instances.has_selection()) goto event_2329_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2329_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2329_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2329_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2329_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2329_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_hover_tree_2182));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2329_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2329_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_hover_tree_2182));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2329_6_end: ;
}
void Frames::event_func_4113()
{
    // event 2330_6
    {
        if (!(group_code_1)) goto event_2330_6_end;
        cclsleigh_519_instances.clear_selection();
        for (ObjectIterator it(cclsleigh_519_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_sleigh_841))) { it.deselect(); continue; }
        }
        if (!cclsleigh_519_instances.has_selection()) goto event_2330_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_2330_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2330_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2330_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2330_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2330_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_hover_sleigh_835));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2330_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2330_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_hover_sleigh_835));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2330_6_end: ;
}
void Frames::event_func_4114()
{
    // event 2331_6
    {
        if (!(group_code_1)) goto event_2331_6_end;
        containertailorout_395_instances.clear_selection();
        for (ObjectIterator it(containertailorout_395_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!containertailorout_395_instances.has_selection()) goto event_2331_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2331_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2331_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2331_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2331_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2331_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_37_2183));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2331_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2331_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_37_2183));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2331_6_end: ;
}
void Frames::event_func_4115()
{
    // event 2332_6
    {
        if (!(group_code_1)) goto event_2332_6_end;
        containertailorout_395_instances.clear_selection();
        for (ObjectIterator it(containertailorout_395_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!containertailorout_395_instances.has_selection()) goto event_2332_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2332_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2332_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2332_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2332_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2332_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_hover_woodchest_2184));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2332_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2332_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_hover_woodchest_2184));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2332_6_end: ;
}
void Frames::event_func_4116()
{
    // event 2333_6
    {
        if (!(group_code_1)) goto event_2333_6_end;
        containertailorin_396_instances.clear_selection();
        for (ObjectIterator it(containertailorin_396_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!containertailorin_396_instances.has_selection()) goto event_2333_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2333_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2333_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2333_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2333_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2333_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_38_1205));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2333_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2333_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_38_1205));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2333_6_end: ;
}
void Frames::event_func_4117()
{
    // event 2334_6
    {
        if (!(group_code_1)) goto event_2334_6_end;
        containertailorin_396_instances.clear_selection();
        for (ObjectIterator it(containertailorin_396_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!containertailorin_396_instances.has_selection()) goto event_2334_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2334_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2334_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2334_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2334_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2334_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_hover_toychest_2185));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2334_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2334_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_hover_toychest_2185));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2334_6_end: ;
}
void Frames::event_func_4118()
{
    // event 2335_6
    {
        if (!(group_code_1)) goto event_2335_6_end;
        containermail_399_instances.clear_selection();
        for (ObjectIterator it(containermail_399_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!containermail_399_instances.has_selection()) goto event_2335_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2335_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2335_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2335_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2335_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2335_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_40_824));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2335_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2335_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_40_824));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2335_6_end: ;
}
void Frames::event_func_4119()
{
    // event 2336_6
    {
        if (!(group_code_1)) goto event_2336_6_end;
        containermail_399_instances.clear_selection();
        for (ObjectIterator it(containermail_399_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!containermail_399_instances.has_selection()) goto event_2336_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2336_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2336_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2336_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2336_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2336_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_hover_taskmaster_2186));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2336_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2336_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_hover_taskmaster_2186));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2336_6_end: ;
}
void Frames::event_func_4120()
{
    // event 2337_6
    {
        if (!(group_code_1)) goto event_2337_6_end;
        containercanteen_230_instances.clear_selection();
        for (ObjectIterator it(containercanteen_230_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!containercanteen_230_instances.has_selection()) goto event_2337_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2337_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2337_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2337_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2337_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_13_632));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2337_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2337_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_13_632));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2337_6_end: ;
}
void Frames::event_func_4121()
{
    // event 2338_6
    {
        if (!(group_code_1)) goto event_2338_6_end;
        containerlaundrydirty_274_instances.clear_selection();
        for (ObjectIterator it(containerlaundrydirty_274_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!containerlaundrydirty_274_instances.has_selection()) goto event_2338_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2338_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2338_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2338_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2338_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_8_325));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2338_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2338_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_8_325));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2338_6_end: ;
}
void Frames::event_func_4122()
{
    // event 2339_6
    {
        if (!(group_code_1)) goto event_2339_6_end;
        containerlaundryclean_275_instances.clear_selection();
        for (ObjectIterator it(containerlaundryclean_275_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!containerlaundryclean_275_instances.has_selection()) goto event_2339_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2339_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2339_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2339_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2339_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_9_327));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2339_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2339_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_9_327));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2339_6_end: ;
}
void Frames::event_func_4123()
{
    // event 2340_6
    {
        if (!(group_code_1)) goto event_2340_6_end;
        containertimber_267_instances.clear_selection();
        for (ObjectIterator it(containertimber_267_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!containertimber_267_instances.has_selection()) goto event_2340_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2340_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2340_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2340_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2340_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_28_1114));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2340_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2340_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_28_1114));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2340_6_end: ;
}
void Frames::event_func_4124()
{
    // event 2341_6
    {
        if (!(group_code_1)) goto event_2341_6_end;
        containertimber2_325_instances.clear_selection();
        for (ObjectIterator it(containertimber2_325_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!containertimber2_325_instances.has_selection()) goto event_2341_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2341_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2341_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2341_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2341_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_29_1146));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2341_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2341_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_29_1146));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2341_6_end: ;
}
void Frames::event_func_4125()
{
    // event 2342_6
    {
        if (!(group_code_1)) goto event_2342_6_end;
        metalshop_326_instances.clear_selection();
        for (ObjectIterator it(metalshop_326_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!metalshop_326_instances.has_selection()) goto event_2342_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2342_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2342_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2342_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2342_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_30_235));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2342_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2342_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_30_235));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2342_6_end: ;
}
void Frames::event_func_4126()
{
    // event 2343_6
    {
        if (!(group_code_1)) goto event_2343_6_end;
        metalshop2_327_instances.clear_selection();
        for (ObjectIterator it(metalshop2_327_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!metalshop2_327_instances.has_selection()) goto event_2343_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2343_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2343_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2343_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2343_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_31_2187));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2343_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2343_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_31_2187));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2343_6_end: ;
}
void Frames::event_func_4127()
{
    // event 2344_6
    {
        if (!(group_code_1)) goto event_2344_6_end;
        containermedical_269_instances.clear_selection();
        for (ObjectIterator it(containermedical_269_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!containermedical_269_instances.has_selection()) goto event_2344_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2344_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2344_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2344_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2344_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_18_332));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2344_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2344_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_18_332));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2344_6_end: ;
}
void Frames::event_func_4128()
{
    // event 2345_6
    {
        if (!(group_code_1)) goto event_2345_6_end;
        containerjanitor_270_instances.clear_selection();
        for (ObjectIterator it(containerjanitor_270_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!containerjanitor_270_instances.has_selection()) goto event_2345_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2345_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2345_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2345_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2345_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_10_329));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2345_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2345_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_10_329));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2345_6_end: ;
}
void Frames::event_func_4129()
{
    // event 2346_6
    {
        if (!(group_code_1)) goto event_2346_6_end;
        containergardening_409_instances.clear_selection();
        for (ObjectIterator it(containergardening_409_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!containergardening_409_instances.has_selection()) goto event_2346_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2346_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2346_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2346_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2346_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_67_2188));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2346_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2346_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_67_2188));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2346_6_end: ;
}
void Frames::event_func_4130()
{
    // event 2347_6
    {
        if (!(group_code_1)) goto event_2347_6_end;
        washing2_313_instances.clear_selection();
        for (ObjectIterator it(washing2_313_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!washing2_313_instances.has_selection()) goto event_2347_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (((Active*)get_single(washing2_313_instances, default_active_instance))->layer->index+1))) goto event_2347_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2347_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2347_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2347_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_35_1303));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2347_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2347_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_35_1303));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2347_6_end: ;
}
void Frames::event_func_4131()
{
    // event 2348_6
    {
        if (!(group_code_1)) goto event_2348_6_end;
        containerkitchen_229_instances.clear_selection();
        for (ObjectIterator it(containerkitchen_229_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!containerkitchen_229_instances.has_selection()) goto event_2348_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2348_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2348_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2348_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2348_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_16_219));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2348_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2348_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_16_219));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2348_6_end: ;
}
void Frames::event_func_4132()
{
    // event 2349_6
    {
        if (!(group_code_1)) goto event_2349_6_end;
        library2_316_instances.clear_selection();
        for (ObjectIterator it(library2_316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!library2_316_instances.has_selection()) goto event_2349_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2349_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2349_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2349_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2349_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_32_236));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2349_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2349_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_32_236));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2349_6_end: ;
}
void Frames::event_func_4133()
{
    // event 2350_6
    {
        if (!(group_code_1)) goto event_2350_6_end;
        desks_305_instances.clear_selection();
        for (ObjectIterator it(desks_305_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(16777216))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (inmateBase_instances.size()+1))) { it.deselect(); continue; }
        }
        if (!desks_305_instances.has_selection()) goto event_2350_6_end;
        if (!((((Active*)get_single(desks_305_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2350_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(desks_305_instances, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2350_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2350_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2350_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2350_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, ((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_2_155));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345), str_inmate_1199, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(0)));
    CalcRect::set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2350_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2350_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2350_6_end: ;
}
void Frames::event_func_4134()
{
    // event 2351_6
    {
        if (!(group_code_1)) goto event_2351_6_end;
        desks_305_instances.clear_selection();
        for (ObjectIterator it(desks_305_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(16777216))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (inmateBase_instances.size()+1))) { it.deselect(); continue; }
        }
        if (!desks_305_instances.has_selection()) goto event_2351_6_end;
        if (!((((Active*)get_single(desks_305_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2351_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2351_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2351_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2351_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_41_825));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2351_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2351_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_41_825));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2351_6_end: ;
}
void Frames::event_func_4135()
{
    // event 2352_6
    {
        if (!(group_code_1)) goto event_2352_6_end;
        desks_305_instances.clear_selection();
        for (ObjectIterator it(desks_305_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(256))) { it.deselect(); continue; }
        }
        if (!desks_305_instances.has_selection()) goto event_2352_6_end;
        if (!((((Active*)get_single(desks_305_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2352_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2352_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2352_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2352_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_7_323));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2352_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2352_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_7_323));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2352_6_end: ;
}
void Frames::event_func_4136()
{
    // event 2353_6
    {
        if (!(group_code_1)) goto event_2353_6_end;
        canteenserving_277_instances.clear_selection();
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!canteenserving_277_instances.has_selection()) goto event_2353_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2353_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2353_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2353_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2353_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_12_334));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2353_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2353_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_12_334));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2353_6_end: ;
}
void Frames::event_func_4137()
{
    // event 2354_6
    {
        if (!(group_code_1)) goto event_2354_6_end;
        kitchensink_236_instances.clear_selection();
        for (ObjectIterator it(kitchensink_236_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!kitchensink_236_instances.has_selection()) goto event_2354_6_end;
        if (!((((Active*)get_single(kitchensink_236_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2354_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2354_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2354_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2354_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_15_608));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2354_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2354_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_15_608));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2354_6_end: ;
}
void Frames::event_func_4138()
{
    // event 2355_6
    {
        if (!(group_code_1)) goto event_2355_6_end;
        containerbookchest_273_instances.clear_selection();
        for (ObjectIterator it(containerbookchest_273_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!containerbookchest_273_instances.has_selection()) goto event_2355_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2355_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2355_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2355_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2355_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_33_2189));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2355_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2355_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_33_2189));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2355_6_end: ;
}
void Frames::event_func_4139()
{
    // event 2356_6
    {
        if (!(group_code_1)) goto event_2356_6_end;
        oven2_314_instances.clear_selection();
        for (ObjectIterator it(oven2_314_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!oven2_314_instances.has_selection()) goto event_2356_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2356_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2356_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2356_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2356_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_14_197));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2356_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2356_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_14_197));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2356_6_end: ;
}
void Frames::event_func_4140()
{
    // event 2357_6
    {
        if (!(group_code_1)) goto event_2357_6_end;
        bedlounger_405_instances.clear_selection();
        for (ObjectIterator it(bedlounger_405_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!bedlounger_405_instances.has_selection()) goto event_2357_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2357_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2357_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2357_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2357_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_36_1305));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2357_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2357_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_36_1305));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2357_6_end: ;
}
void Frames::event_func_4141()
{
    // event 2358_6
    {
        if (!(group_code_1)) goto event_2358_6_end;
        containerdeliveries_397_instances.clear_selection();
        for (ObjectIterator it(containerdeliveries_397_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!containerdeliveries_397_instances.has_selection()) goto event_2358_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2358_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2358_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2358_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2358_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2358_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_hover_basket_2190));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2358_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2358_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_hover_basket_2190));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2358_6_end: ;
}
void Frames::event_func_4142()
{
    // event 2359_6
    {
        if (!(group_code_1)) goto event_2359_6_end;
        containerdeliveries2_398_instances.clear_selection();
        for (ObjectIterator it(containerdeliveries2_398_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!containerdeliveries2_398_instances.has_selection()) goto event_2359_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2359_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2359_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2359_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2359_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2359_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_hover_shredder_2191));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2359_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2359_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_hover_shredder_2191));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2359_6_end: ;
}
void Frames::event_func_4143()
{
    // event 2360_6
    {
        if (!(group_code_1)) goto event_2360_6_end;
        truck_388_instances.clear_selection();
        for (ObjectIterator it(truck_388_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!truck_388_instances.has_selection()) goto event_2360_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2360_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2360_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2360_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2360_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2360_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_hover_letters_2192));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2360_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2360_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_hover_letters_2192));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2360_6_end: ;
}
void Frames::event_func_4144()
{
    // event 2361_6
    {
        if (!(group_code_1)) goto event_2361_6_end;
        ladders_336_instances.clear_selection();
        for (ObjectIterator it(ladders_336_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(256))) { it.deselect(); continue; }
        }
        if (!ladders_336_instances.has_selection()) goto event_2361_6_end;
        if (!((((Active*)get_single(ladders_336_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2361_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2361_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2361_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2361_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_4_161));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2361_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2361_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_4_161));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2361_6_end: ;
}
void Frames::event_func_4145()
{
    // event 2362_6
    {
        if (!(group_code_1)) goto event_2362_6_end;
        ladders_336_instances.clear_selection();
        for (ObjectIterator it(ladders_336_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(16777216))) { it.deselect(); continue; }
        }
        if (!ladders_336_instances.has_selection()) goto event_2362_6_end;
        if (!((((Active*)get_single(ladders_336_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2362_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2362_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2362_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2362_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_5_164));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2362_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2362_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_5_164));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2362_6_end: ;
}
void Frames::event_func_4146()
{
    // event 2363_6
    {
        if (!(group_code_1)) goto event_2363_6_end;
        fan_281_instances.clear_selection();
        for (ObjectIterator it(fan_281_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!fan_281_instances.has_selection()) goto event_2363_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (4))) goto event_2363_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2363_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2363_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2363_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_42_826)+str__2057+number_to_string(((Active*)get_single(fan_281_instances, default_active_instance))->alterables->values.get(1))+str__2176);
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2363_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2363_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_42_826)+str__2057+number_to_string(((Active*)get_single(fan_281_instances, it.current_index, default_active_instance))->alterables->values.get(1))+str__2176);
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2363_6_end: ;
}
void Frames::event_func_4147()
{
    // event 2364_6
    {
        if (!(group_code_1)) goto event_2364_6_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto event_2364_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2364_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2364_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2364_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_43_695)+str__2057+number_to_string(((Active*)get_single(ventCover_instances, default_active_instance))->alterables->values.get(1))+str__2176);
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2364_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2364_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_43_695)+str__2057+number_to_string(((Active*)get_single(ventCover_instances, it.current_index, default_active_instance))->alterables->values.get(1))+str__2176);
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2364_6_end: ;
}
void Frames::event_func_4148()
{
    // event 2365_6
    {
        if (!(group_code_1)) goto event_2365_6_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(2))) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto event_2365_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2365_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2365_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2365_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_44_1466));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2365_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2365_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_44_1466));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2365_6_end: ;
}
void Frames::event_func_4149()
{
    // event 2366_6
    {
        if (!(group_code_1)) goto event_2366_6_end;
        jobboard_244_instances.clear_selection();
        for (ObjectIterator it(jobboard_244_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!jobboard_244_instances.has_selection()) goto event_2366_6_end;
        if (!((((Active*)get_single(jobboard_244_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2366_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2366_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2366_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2366_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_45_1275));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2366_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2366_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_45_1275));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2366_6_end: ;
}
void Frames::event_func_4150()
{
    // event 2367_6
    {
        if (!(group_code_1)) goto event_2367_6_end;
        camera_237_instances.clear_selection();
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!camera_237_instances.has_selection()) goto event_2367_6_end;
        if (!((((Active*)get_single(camera_237_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2367_6_end;
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!camera_237_instances.has_selection()) goto event_2367_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2367_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2367_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2367_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_1_97));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2367_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2367_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_1_97));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2367_6_end: ;
}
void Frames::event_func_4151()
{
    // event 2368_6
    {
        if (!(group_code_1)) goto event_2368_6_end;
        camera_237_instances.clear_selection();
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!camera_237_instances.has_selection()) goto event_2368_6_end;
        if (!((((Active*)get_single(camera_237_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2368_6_end;
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!camera_237_instances.has_selection()) goto event_2368_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2368_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2368_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2368_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_1_97)+str_active_in_2193+number_to_string((((Active*)get_single(camera_237_instances, default_active_instance))->alterables->values.get(5)/MathHelper()/50)+1)+str__321);
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2368_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2368_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_1_97)+str_active_in_2193+number_to_string((((Active*)get_single(camera_237_instances, it.current_index, default_active_instance))->alterables->values.get(5)/MathHelper()/50)+1)+str__321);
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2368_6_end: ;
}
void Frames::event_func_4152()
{
    // event 2369_6
    {
        if (!(group_code_1)) goto event_2369_6_end;
        tv_404_instances.clear_selection();
        for (ObjectIterator it(tv_404_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!tv_404_instances.has_selection()) goto event_2369_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2369_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2369_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2369_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2369_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_46_1206));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2369_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2369_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_46_1206));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2369_6_end: ;
}
void Frames::event_func_4153()
{
    // event 2370_6
    {
        if (!(group_code_1)) goto event_2370_6_end;
        alcaboat_459_instances.clear_selection();
        for (ObjectIterator it(alcaboat_459_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!alcaboat_459_instances.has_selection()) goto event_2370_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2370_6_end;
        for (ObjectIterator it(alcaboat_459_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!alcaboat_459_instances.has_selection()) goto event_2370_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2370_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2370_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2370_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_74_2194));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2370_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2370_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_74_2194));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2370_6_end: ;
}
void Frames::event_func_4154()
{
    // event 2371_6
    {
        if (!(group_code_1)) goto event_2371_6_end;
        bedplayer_338_instances.clear_selection();
        for (ObjectIterator it(bedplayer_338_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!bedplayer_338_instances.has_selection()) goto event_2371_6_end;
        if (!((((Active*)get_single(bedplayer_338_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2371_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2371_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2371_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2371_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_6_241));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2371_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2371_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_6_241));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2371_6_end: ;
}
void Frames::event_func_4155()
{
    // event 2372_6
    {
        if (!(group_code_1)) goto event_2372_6_end;
        bedmedical_234_instances.clear_selection();
        for (ObjectIterator it(bedmedical_234_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!bedmedical_234_instances.has_selection()) goto event_2372_6_end;
        if (!((((Active*)get_single(bedmedical_234_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2372_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2372_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2372_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2372_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_17_218));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2372_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2372_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_17_218));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2372_6_end: ;
}
void Frames::event_func_4156()
{
    // event 2373_6
    {
        if (!(group_code_1)) goto event_2373_6_end;
        bedsolitary_344_instances.clear_selection();
        for (ObjectIterator it(bedsolitary_344_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!bedsolitary_344_instances.has_selection()) goto event_2373_6_end;
        if (!((((Active*)get_single(bedsolitary_344_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2373_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2373_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2373_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2373_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_47_2195));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2373_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2373_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_47_2195));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2373_6_end: ;
}
void Frames::event_func_4157()
{
    // event 2374_6
    {
        if (!(group_code_1)) goto event_2374_6_end;
        payphone_386_instances.clear_selection();
        for (ObjectIterator it(payphone_386_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!payphone_386_instances.has_selection()) goto event_2374_6_end;
        if (!((((Active*)get_single(payphone_386_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2374_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2374_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2374_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2374_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_48_2196));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2374_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2374_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_48_2196));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2374_6_end: ;
}
void Frames::event_func_4158()
{
    // event 2375_6
    {
        if (!(group_code_1)) goto event_2375_6_end;
        toilet2_307_instances.clear_selection();
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!toilet2_307_instances.has_selection()) goto event_2375_6_end;
        if (!((((Active*)get_single(toilet2_307_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2375_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2375_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2375_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2375_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_3_158));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2375_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2375_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_3_158));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2375_6_end: ;
}
void Frames::event_func_4159()
{
    // event 2376_6
    {
        if (!(group_code_1)) goto event_2376_6_end;
        visitationinmate_382_instances.clear_selection();
        for (ObjectIterator it(visitationinmate_382_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!visitationinmate_382_instances.has_selection()) goto event_2376_6_end;
        if (!((((Active*)get_single(visitationinmate_382_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2376_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2376_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2376_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(0))) goto event_2376_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2376_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_49_2169));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2376_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2376_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_49_2169));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2376_6_end: ;
}
void Frames::event_func_4160()
{
    // event 2377_6
    {
        if (!(group_code_1)) goto event_2377_6_end;
        canteenchair_312_instances.clear_selection();
        for (ObjectIterator it(canteenchair_312_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!canteenchair_312_instances.has_selection()) goto event_2377_6_end;
        if (!((((Active*)get_single(canteenchair_312_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2377_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2377_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2377_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(0))) goto event_2377_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2377_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_50_1924));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2377_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2377_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_50_1924));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2377_6_end: ;
}
void Frames::event_func_4161()
{
    // event 2378_6
    {
        if (!(group_code_1)) goto event_2378_6_end;
        hiding_379_instances.clear_selection();
        for (ObjectIterator it(hiding_379_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!hiding_379_instances.has_selection()) goto event_2378_6_end;
        if (!((((Active*)get_single(hiding_379_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2378_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2378_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2378_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(0))) goto event_2378_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2378_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_19_246));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2378_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2378_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_19_246));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2378_6_end: ;
}
void Frames::event_func_4162()
{
    // event 2379_6
    {
        if (!(group_code_1)) goto event_2379_6_end;
        interwebs_380_instances.clear_selection();
        for (ObjectIterator it(interwebs_380_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!interwebs_380_instances.has_selection()) goto event_2379_6_end;
        if (!((((Active*)get_single(interwebs_380_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2379_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2379_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2379_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(0))) goto event_2379_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2379_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 1);
    CalcRect::set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_39_822));
        
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mouse_9_instances));
            if (parent == NULL) goto pos_end_2379_6_0;
            ((SystemBox*)*it)->set_global_position(parent->get_x() + 2, parent->get_y() + 8);
            pos_end_2379_6_0: ;
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->blend_color.set(Color(179, 179, 179));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_39_822));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_2379_6_end: ;
}
void Frames::event_func_4163()
{
    // event 2380_6
    {
        if (!(group_code_1)) goto event_2380_6_end;
        qualifier_9.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!qualifier_9.has_selection()) goto event_2380_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2380_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(0))) goto event_2380_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_2380_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2380_6_end;
        if (!group_code_mouseovers_workouts_1) {
            group_code_mouseovers_workouts_1 = true;
        }
    }
    event_2380_6_end: ;
}
