#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_6075 processes event block(s) 1530_11. Actions/conditions:
//        1530_11: checks scene is active; skips if dialog is open; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_6075()
{
    // event 1530_11 : checks scene is active; skips if dialog is open; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_1530_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1530_11_end;
        {
            qualifier_5.clear_selection();
            SavedSelection extra_qualifier_5(qualifier_5);
            for (SavedIterator selected(extra_qualifier_5); !selected.end(); ++selected) {
                foreach_instance_align_g = ((Active*)*selected);
                foreach_align_g_11();
            }
        }
    }
    event_1530_11_end: ;
}
// Function purpose: generated callback event_func_6076 processes event block(s) 1594_11. Actions/conditions:
//        1594_11: checks skips if the event-specific game state condition is met; this handler gates a game event
//        without a direct value/object action.
void Frames::event_func_6076()
{
    // event 1594_11 : checks skips if the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(-2))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_1594_11_end;
        if (!group_set_item_graphic_1) {
            group_set_item_graphic_1 = true;
        }
        {
            SavedSelection extra_hudItem_instances(hudItem_instances);
            for (SavedIterator selected(extra_hudItem_instances); !selected.end(); ++selected) {
                foreach_instance_item_setup = ((Active*)*selected);
                foreach_item_setup_11();
            }
        }
    }
    event_1594_11_end: ;
}
// Function purpose: generated callback event_func_6077 processes event block(s) 1595_11. Actions/conditions:
//        1595_11: checks skips if the event-specific game state condition is met; this handler gates a game event
//        without a direct value/object action.
void Frames::event_func_6077()
{
    // event 1595_11 : checks skips if the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        items_184_instances.clear_selection();
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(-2))) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_1595_11_end;
        if (!group_set_item_graphic_1) {
            group_set_item_graphic_1 = true;
        }
        {
            SavedSelection extra_items_184_instances(items_184_instances);
            for (SavedIterator selected(extra_items_184_instances); !selected.end(); ++selected) {
                foreach_instance_item2_setup = ((Active*)*selected);
                foreach_item2_setup_11();
            }
        }
    }
    event_1595_11_end: ;
}
// Function purpose: generated callback event_func_6078 processes event block(s) 1616_11. Actions/conditions:
//        1616_11: sets the selected object's numeric value to selected object->x_scale; sets the selected object's
//        scale to selected object->x_scale*2; enables flag -5 (legacy object-specific state; original label was not
//        retained) on the selected object.
void Frames::event_func_6078()
{
    // event 1616_11 : sets the selected object's numeric value to selected object->x_scale; sets the selected object's scale to selected object->x_scale*2; enables flag -5 (legacy object-specific state; original label was not retained) on the selected object
    {
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(-5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (0))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_1616_11_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, ((Active*)*it)->x_scale);
            ((Active*)*it)->set_scale(((Active*)*it)->x_scale*2);
            ((Active*)*it)->alterables->flags.enable(-5);
        }
    }
    event_1616_11_end: ;
}
// Function purpose: generated callback event_func_6079 processes event block(s) 1617_11. Actions/conditions:
//        1617_11: sets the selected object's scale to selected object->x_scale-(selected
//        object->alterables->values.get(13)/MathHelper()/10).
void Frames::event_func_6079()
{
    // event 1617_11 : sets the selected object's scale to selected object->x_scale-(selected object->alterables->values.get(13)/MathHelper()/10)
    {
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(-5))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_1617_11_end;
        if (!((((Active*)get_single(hudItem_instances, default_active_instance))->x_scale) > (((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(13)))) goto event_1617_11_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(((Active*)*it)->x_scale-(((Active*)*it)->alterables->values.get(13)/MathHelper()/10));
        }
    }
    event_1617_11_end: ;
}
// Function purpose: generated callback event_func_6080 processes event block(s) 1618_11. Actions/conditions:
//        1618_11: disables flag -5 (legacy object-specific state; original label was not retained) on the selected
//        object; sets the selected object's scale to selected object->alterables->values.get(13); sets the selected
//        object's numeric value to 0.
void Frames::event_func_6080()
{
    // event 1618_11 : disables flag -5 (legacy object-specific state; original label was not retained) on the selected object; sets the selected object's scale to selected object->alterables->values.get(13); sets the selected object's numeric value to 0
    {
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(-5))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_1618_11_end;
        if (!((((Active*)get_single(hudItem_instances, default_active_instance))->x_scale) <= (((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(13)))) goto event_1618_11_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(-5);
            ((Active*)*it)->set_scale(((Active*)*it)->alterables->values.get(13));
            ((Active*)*it)->alterables->values.set(13, 0);
        }
    }
    event_1618_11_end: ;
}
// Frame event dispatcher handle_frame_12_events is called by the corresponding FrameN handler. It runs 517
//        event/helper function(s), including event_func_5773, event_func_3572, event_func_3970, event_func_3982,
//        event_func_3983, event_func_4007, event_func_4603.
void Frames::handle_frame_12_events()
{
    test_collisions_11();
    event_func_5773();
    event_func_3572();
    event_func_3970();
    event_func_3982();
    event_func_3983();
    event_func_4007();
    event_func_4603();
    event_func_4784();
    if (next_frame != -1) return;
    event_func_3165();
    if (!group_load_map_from_file_1) goto group_load_map_from_file_1_end;
    event_func_5744();
    event_func_5745();
    group_load_map_from_file_1_end: ;
    if (!group_setup_1) goto group_setup_1_end;
    event_func_5746();
    event_func_5747();
    event_func_3173();
    event_func_5748();
    event_func_5749();
    event_func_5750();
    event_func_5751();
    event_func_3184();
    if (!group_setup_set_walls_1) goto group_setup_set_walls_1_end;
    group_setup_set_walls_1_end: ;
    event_func_3187();
    event_func_5752();
    event_func_5753();
    event_func_5754();
    event_func_5755();
    event_func_5756();
    event_func_5757();
    event_func_5758();
    event_func_5759();
    if (!group_setup_crafting_notes_1) goto group_setup_crafting_notes_1_end;
    group_setup_crafting_notes_1_end: ;
    event_func_3203();
    event_func_3204();
    event_func_5760();
    event_func_3207();
    event_func_5761();
    event_func_5762();
    event_func_5763();
    event_func_5764();
    group_setup_1_end: ;
    if (!group_tooltips_1) goto group_tooltips_1_end;
    group_tooltips_1_end: ;
    event_func_3247();
    event_func_3248();
    event_func_5765();
    if (!group_code_1) goto group_code_1_end;
    event_func_5766();
    if (!group_code_shadz_ground_1) goto group_code_shadz_ground_1_end;
    event_func_5767();
    event_func_5768();
    event_func_5769();
    event_func_5770();
    group_code_shadz_ground_1_end: ;
    event_func_5771();
    event_func_3299();
    event_func_3300();
    event_func_3301();
    event_func_3302();
    event_func_5772();
    event_func_3304();
    event_func_3305();
    event_func_3307();
    event_func_5774();
    event_func_5775();
    event_func_5774();
    event_func_5776();
    event_func_5777();
    event_func_5778();
    event_func_5779();
    event_func_5780();
    event_func_5781();
    event_func_5782();
    event_func_5783();
    event_func_5784();
    event_func_5785();
    event_func_5786();
    event_func_5787();
    event_func_5788();
    event_func_5789();
    event_func_5790();
    event_func_5791();
    event_func_5792();
    event_func_5793();
    if (!group_code_menu_1) goto group_code_menu_1_end;
    event_func_5794();
    event_func_5796();
    event_func_3322();
    event_func_3323();
    event_func_3324();
    event_func_3325();
    event_func_3326();
    group_code_menu_1_end: ;
    event_func_3329();
    event_func_5806();
    event_func_3331();
    event_func_3332();
    if (!group_code_input_mousedown_1) goto group_code_input_mousedown_1_end;
    event_func_3333();
    event_func_3334();
    event_func_3335();
    event_func_3336();
    event_func_3337();
    event_func_3338();
    group_code_input_mousedown_1_end: ;
    event_func_3339();
    event_func_3340();
    event_func_5807();
    if (!group_code_input_move_keys_movement_1) goto group_code_input_move_keys_movement_1_end;
    event_func_3342();
    event_func_3343();
    event_func_5808();
    event_func_5809();
    event_func_5810();
    event_func_5811();
    event_func_5812();
    event_func_5813();
    event_func_5814();
    event_func_5815();
    group_code_input_move_keys_movement_1_end: ;
    event_func_3352();
    event_func_3353();
    event_func_5816();
    event_func_5817();
    event_func_3356();
    if (!group_code_input_dismount_1) goto group_code_input_dismount_1_end;
    event_func_5818();
    event_func_5819();
    event_func_5820();
    event_func_5821();
    group_code_input_dismount_1_end: ;
    event_func_3363();
    event_func_3364();
    event_func_3365();
    event_func_3366();
    event_func_5822();
    event_func_3368();
    event_func_3369();
    event_func_3370();
    event_func_3366();
    event_func_3519();
    event_func_3520();
    event_func_5824();
    event_func_5825();
    event_func_5826();
    event_func_5827();
    event_func_5828();
    event_func_5829();
    event_func_5830();
    event_func_5831();
    event_func_5832();
    event_func_5833();
    event_func_5834();
    event_func_5835();
    event_func_5836();
    event_func_5837();
    event_func_5838();
    event_func_5839();
    event_func_5840();
    event_func_5841();
    event_func_5842();
    event_func_5843();
    event_func_5844();
    event_func_5845();
    event_func_5846();
    event_func_5847();
    event_func_5848();
    event_func_5849();
    event_func_5850();
    event_func_5851();
    event_func_5852();
    event_func_5853();
    event_func_5854();
    event_func_5855();
    event_func_5856();
    event_func_5857();
    event_func_5858();
    event_func_5859();
    event_func_5860();
    event_func_5861();
    event_func_5862();
    event_func_5863();
    event_func_5864();
    event_func_5865();
    event_func_5866();
    event_func_5867();
    event_func_5868();
    event_func_5869();
    event_func_5870();
    event_func_5871();
    event_func_5872();
    event_func_5873();
    event_func_5874();
    event_func_5875();
    event_func_5876();
    event_func_5877();
    event_func_5878();
    event_func_5879();
    event_func_5880();
    event_func_5881();
    event_func_5882();
    event_func_5883();
    event_func_5884();
    event_func_5885();
    event_func_5886();
    event_func_5887();
    event_func_5888();
    event_func_5889();
    event_func_5890();
    event_func_5891();
    event_func_5892();
    event_func_5893();
    event_func_5894();
    event_func_5895();
    event_func_5896();
    event_func_5897();
    event_func_5898();
    event_func_5899();
    event_func_5900();
    event_func_5901();
    event_func_5902();
    event_func_5903();
    event_func_5904();
    event_func_5905();
    event_func_5907();
    event_func_3541();
    event_func_3542();
    event_func_3543();
    event_func_3544();
    event_func_3545();
    event_func_5908();
    event_func_3547();
    event_func_5909();
    event_func_5910();
    event_func_3566();
    event_func_3567();
    event_func_3568();
    event_func_3569();
    event_func_3570();
    event_func_3571();
    event_func_3627();
    event_func_3628();
    event_func_5911();
    event_func_3630();
    event_func_5912();
    event_func_3633();
    event_func_3634();
    event_func_3635();
    event_func_3636();
    event_func_3637();
    event_func_3638();
    event_func_3639();
    event_func_3640();
    event_func_3641();
    event_func_3642();
    event_func_5913();
    event_func_3644();
    event_func_5914();
    event_func_3646();
    event_func_3647();
    event_func_3648();
    event_func_3649();
    event_func_3650();
    event_func_5915();
    event_func_5916();
    event_func_3658();
    event_func_3660();
    event_func_5917();
    event_func_3664();
    event_func_3665();
    event_func_5918();
    event_func_3667();
    event_func_5919();
    event_func_3669();
    event_func_3670();
    event_func_5920();
    event_func_3671();
    event_func_3672();
    event_func_5921();
    event_func_3674();
    event_func_3675();
    event_func_3676();
    event_func_3677();
    event_func_3965();
    event_func_3968();
    event_func_5922();
    event_func_3971();
    event_func_5923();
    event_func_3973();
    event_func_3974();
    event_func_3975();
    event_func_3976();
    event_func_3977();
    event_func_3981();
    event_func_3984();
    event_func_3985();
    event_func_3986();
    event_func_3987();
    event_func_5924();
    event_func_5925();
    event_func_5926();
    if (!group_code_misc_mines_1) goto group_code_misc_mines_1_end;
    group_code_misc_mines_1_end: ;
    event_func_4016();
    event_func_4017();
    event_func_5927();
    event_func_5928();
    event_func_4020();
    event_func_4021();
    event_func_4022();
    event_func_4023();
    event_func_4024();
    event_func_5929();
    event_func_4068();
    event_func_4069();
    event_func_4070();
    event_func_4071();
    event_func_4072();
    event_func_4073();
    event_func_4074();
    event_func_4075();
    event_func_4076();
    event_func_4077();
    event_func_4078();
    event_func_4079();
    event_func_4080();
    event_func_4081();
    event_func_4082();
    event_func_5930();
    event_func_4088();
    event_func_4089();
    event_func_4090();
    event_func_4091();
    event_func_4092();
    event_func_4093();
    event_func_4094();
    event_func_4095();
    event_func_5931();
    event_func_5932();
    event_func_5933();
    event_func_5934();
    event_func_4100();
    event_func_5935();
    if (!group_code_mouseovers_item_hovers_holding_shift_1) goto group_code_mouseovers_item_hovers_holding_shift_1_end;
    event_func_5936();
    event_func_5937();
    event_func_5938();
    event_func_5939();
    group_code_mouseovers_item_hovers_holding_shift_1_end: ;
    event_func_5940();
    event_func_5941();
    event_func_5942();
    event_func_5943();
    event_func_4147();
    event_func_4148();
    event_func_5944();
    event_func_4152();
    event_func_4154();
    event_func_4158();
    event_func_5945();
    event_func_5946();
    event_func_5947();
    event_func_4189();
    event_func_4190();
    event_func_4191();
    event_func_4192();
    event_func_4193();
    event_func_5948();
    event_func_4199();
    event_func_4200();
    event_func_4201();
    event_func_4202();
    event_func_4203();
    if (!group_code_inventory_underground_lighting_1) goto group_code_inventory_underground_lighting_1_end;
    event_func_4204();
    group_code_inventory_underground_lighting_1_end: ;
    event_func_4208();
    event_func_4209();
    event_func_4210();
    event_func_4211();
    event_func_4212();
    event_func_4213();
    event_func_4216();
    event_func_4217();
    event_func_5950();
    if (!group_code_crafting_1) goto group_code_crafting_1_end;
    event_func_5951();
    event_func_4221();
    event_func_4223();
    group_code_crafting_1_end: ;
    event_func_4225();
    event_func_5955();
    if (!group_code_my_stats_1) goto group_code_my_stats_1_end;
    event_func_4228();
    event_func_5956();
    event_func_5957();
    event_func_5958();
    event_func_5959();
    event_func_5962();
    event_func_5963();
    group_code_my_stats_1_end: ;
    event_func_5964();
    event_func_4252();
    event_func_5966();
    event_func_4268();
    event_func_5968();
    event_func_4341();
    if (!group_code_left_clicked_1) goto group_code_left_clicked_1_end;
    event_func_5976();
    event_func_5977();
    event_func_5978();
    event_func_5979();
    event_func_4368();
    event_func_4369();
    event_func_5980();
    group_code_left_clicked_1_end: ;
    event_func_4528();
    event_func_4529();
    if (!group_code_right_clicked_1) goto group_code_right_clicked_1_end;
    if (!group_code_right_clicked_lifting_desks_2_1) goto group_code_right_clicked_lifting_desks_2_1_end;
    group_code_right_clicked_lifting_desks_2_1_end: ;
    event_func_4540();
    event_func_6034();
    group_code_right_clicked_1_end: ;
    event_func_4555();
    event_func_4556();
    event_func_4557();
    event_func_4559();
    event_func_6041();
    event_func_4565();
    event_func_4566();
    event_func_4567();
    event_func_4568();
    event_func_4569();
    event_func_4570();
    event_func_4571();
    event_func_6043();
    event_func_6044();
    event_func_6045();
    event_func_4574();
    event_func_6046();
    event_func_6047();
    event_func_6048();
    event_func_6049();
    event_func_4586();
    if (!group_code_sort_these_using_items_2_chipping_2_1) goto group_code_sort_these_using_items_2_chipping_2_1_end;
    event_func_4587();
    event_func_4588();
    event_func_6050();
    event_func_4590();
    event_func_4591();
    event_func_4592();
    event_func_4593();
    group_code_sort_these_using_items_2_chipping_2_1_end: ;
    event_func_4594();
    if (!group_code_sort_these_using_items_2_digging_2_1) goto group_code_sort_these_using_items_2_digging_2_1_end;
    event_func_4595();
    event_func_4596();
    event_func_6051();
    event_func_6052();
    event_func_6053();
    event_func_4600();
    event_func_4601();
    event_func_4602();
    group_code_sort_these_using_items_2_digging_2_1_end: ;
    event_func_4604();
    if (!group_code_sort_these_using_items_2_cutting_2_1) goto group_code_sort_these_using_items_2_cutting_2_1_end;
    event_func_4605();
    event_func_4606();
    event_func_4608();
    event_func_6054();
    if (!group_code_sort_these_using_items_2_cutting_2_bars_2_1) goto group_code_sort_these_using_items_2_cutting_2_bars_2_1_end;
    group_code_sort_these_using_items_2_cutting_2_bars_2_1_end: ;
    event_func_4610();
    event_func_4611();
    event_func_4612();
    group_code_sort_these_using_items_2_cutting_2_1_end: ;
    event_func_4613();
    if (!group_code_sort_these_using_items_2_unscrewing_2_1) goto group_code_sort_these_using_items_2_unscrewing_2_1_end;
    event_func_4614();
    event_func_4615();
    event_func_6055();
    event_func_4618();
    event_func_4619();
    group_code_sort_these_using_items_2_unscrewing_2_1_end: ;
    event_func_4620();
    if (!group_code_sort_these_using_items_2_weeding_1) goto group_code_sort_these_using_items_2_weeding_1_end;
    event_func_4621();
    event_func_6056();
    event_func_4623();
    event_func_4624();
    event_func_4625();
    group_code_sort_these_using_items_2_weeding_1_end: ;
    event_func_4626();
    if (!group_code_sort_these_using_items_2_cleaning_1) goto group_code_sort_these_using_items_2_cleaning_1_end;
    event_func_4627();
    event_func_6057();
    event_func_4629();
    event_func_4630();
    event_func_4631();
    group_code_sort_these_using_items_2_cleaning_1_end: ;
    event_func_4632();
    if (!group_code_sort_these_using_items_2_browsing_1) goto group_code_sort_these_using_items_2_browsing_1_end;
    event_func_4633();
    event_func_4634();
    event_func_4635();
    event_func_6058();
    group_code_sort_these_using_items_2_browsing_1_end: ;
    event_func_4637();
    if (!group_code_sort_these_using_items_2_reading_1) goto group_code_sort_these_using_items_2_reading_1_end;
    event_func_4638();
    event_func_4639();
    event_func_4640();
    event_func_6059();
    group_code_sort_these_using_items_2_reading_1_end: ;
    event_func_4642();
    event_func_4643();
    if (!group_code_sort_these_using_items_2_roof_travel_2_1) goto group_code_sort_these_using_items_2_roof_travel_2_1_end;
    event_func_4644();
    event_func_6060();
    group_code_sort_these_using_items_2_roof_travel_2_1_end: ;
    event_func_6061();
    event_func_4647();
    event_func_4648();
    event_func_4649();
    event_func_4650();
    event_func_4651();
    event_func_6062();
    event_func_4654();
    event_func_6063();
    if (!group_code_npc_profiles_npc_profile_1) goto group_code_npc_profiles_npc_profile_1_end;
    event_func_4749();
    event_func_4752();
    event_func_4753();
    event_func_4754();
    event_func_4755();
    event_func_4756();
    event_func_4757();
    event_func_4758();
    event_func_6071();
    event_func_6072();
    group_code_npc_profiles_npc_profile_1_end: ;
    event_func_4765();
    event_func_4766();
    event_func_4767();
    event_func_4768();
    event_func_4771();
    event_func_6073();
    event_func_4775();
    event_func_4778();
    event_func_4779();
    event_func_6074();
    event_func_4781();
    event_func_4782();
    event_func_4783();
    event_func_4785();
    event_func_4786();
    event_func_4787();
    event_func_6075();
    event_func_4789();
    event_func_4790();
    event_func_4791();
    event_func_4828();
    if (!group_code_toilet_1) goto group_code_toilet_1_end;
    event_func_4829();
    event_func_4830();
    event_func_4831();
    event_func_4832();
    group_code_toilet_1_end: ;
    group_code_1_end: ;
    if (!group_loops_1) goto group_loops_1_end;
    group_loops_1_end: ;
    if (!group_align_color_1) goto group_align_color_1_end;
    group_align_color_1_end: ;
    event_func_4851();
    event_func_6076();
    event_func_6077();
    if (!group_set_item_graphic_1) goto group_set_item_graphic_1_end;
    group_set_item_graphic_1_end: ;
    event_func_4858();
    event_func_6078();
    event_func_6079();
    event_func_6080();
    event_func_4941();
}
// Frame event dispatcher handle_frame_12_pre_events is called by the corresponding FrameN handler. It runs 125
//        event/helper function(s), including event_func_5801, event_func_5823, event_func_3539, event_func_4214,
//        event_func_4215, event_func_5961, event_func_4342.
void Frames::handle_frame_12_pre_events()
{
    event_func_5801();
    event_func_5823();
    event_func_3539();
    event_func_4214();
    event_func_4215();
    event_func_5961();
    event_func_4342();
    event_func_4360();
    event_func_4374();
    event_func_5982();
    event_func_5983();
    event_func_4383();
    event_func_5984();
    event_func_5997();
    event_func_5998();
    event_func_6003();
    event_func_6004();
    event_func_6021();
    event_func_4530();
    event_func_6024();
    event_func_6026();
    event_func_6028();
    event_func_6031();
    event_func_6066();
    event_func_6067();
    event_func_6069();
    event_func_6070();
    event_func_5795();
    event_func_5797();
    event_func_5798();
    event_func_5799();
    event_func_5800();
    event_func_3315();
    event_func_3316();
    event_func_3317();
    event_func_3318();
    event_func_5802();
    event_func_5803();
    event_func_5804();
    event_func_5805();
    event_func_3361();
    event_func_3362();
    event_func_5906();
    event_func_3540();
    event_func_5949();
    event_func_5952();
    event_func_5953();
    event_func_5954();
    event_func_5960();
    event_func_5965();
    event_func_5967();
    event_func_4343();
    event_func_4348();
    event_func_5969();
    event_func_5970();
    event_func_5971();
    event_func_5972();
    event_func_5973();
    event_func_5974();
    event_func_5975();
    event_func_5981();
    event_func_5985();
    event_func_5986();
    event_func_5987();
    event_func_5988();
    event_func_5989();
    event_func_5990();
    event_func_5991();
    event_func_5992();
    event_func_5993();
    event_func_5994();
    event_func_5995();
    event_func_5996();
    event_func_5999();
    event_func_6000();
    event_func_6001();
    event_func_6002();
    event_func_4484();
    event_func_4485();
    event_func_4486();
    event_func_4487();
    event_func_6005();
    event_func_4494();
    event_func_6006();
    event_func_6007();
    event_func_6008();
    event_func_6009();
    event_func_6010();
    event_func_6011();
    event_func_6012();
    event_func_6013();
    event_func_6014();
    event_func_6015();
    event_func_6016();
    event_func_6017();
    event_func_6018();
    event_func_4511();
    event_func_4512();
    event_func_4513();
    event_func_4514();
    event_func_6019();
    event_func_4516();
    event_func_6020();
    event_func_4522();
    event_func_6022();
    event_func_6023();
    event_func_6025();
    event_func_6027();
    event_func_6029();
    event_func_6030();
    event_func_4544();
    event_func_6032();
    event_func_6033();
    event_func_6035();
    event_func_6036();
    event_func_6037();
    event_func_6038();
    event_func_6039();
    event_func_6040();
    event_func_6042();
    event_func_4746();
    event_func_6064();
    event_func_6065();
    event_func_6068();
    event_func_4761();
}
// Function purpose: generated callback event_func_6081 processes event block(s) 1_11. Actions/conditions:
//        1_11: updates game state with CalcRect::set_font(((SystemBox*)get_instance(activesystembox_450_instances,
//        default_systembox_instan; updates game state with CalcRect::set_max_width(140).
void Frames::event_func_6081()
{
    // event 1_11 : updates game state with CalcRect::set_font(((SystemBox*)get_instance(activesystembox_450_instances, default_systembox_instan; updates game state with CalcRect::set_max_width(140)
    {
    CalcRect::set_font(((SystemBox*)get_instance(activesystembox_450_instances, default_systembox_instance))->get_font_name(), 12, 0);
    CalcRect::set_max_width(140);
    }
    event_1_11_end: ;
}
// Function purpose: generated callback event_func_6082 processes event block(s) 2_11. Actions/conditions:
//        2_11: loads saved game data; loads saved game data; sets LastNotice to 0; plus 15 more actions.
void Frames::event_func_6082()
{
    // event 2_11 : loads saved game data; loads saved game data; sets LastNotice to 0; plus 15 more actions
    {
        ((ActivePicture*)get_instance(soilbackground_443_instances))->load(str_data_images_soil_gif_546);
        ((ActivePicture*)get_instance(floorlayer_444_instances))->load(str_data_images_ground_tutorial_gif_2562);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(379, str_lastnotice_1176, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(117, str_pos_laundry_679, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(125, str_pos_woodshop_687, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(127, str_pos_metalshop_689, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(602, str_track_dug_1576, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(455, str_track_chipped_1323, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(239, str_track_cuts_865, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(603, str_track_downed_1578, 0);
        loadingCurtain_instances.clear_selection();
        for (ObjectIterator it(loadingCurtain_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(10);
        }
        for (ObjectIterator it(loadingCurtain_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(0, 0);
            pos_end_2_11_0: ;
        }
        
        ((LayerObject*)get_instance(layerobject_37_instances))->show_layer(1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(30, str_illegaloutfits_493, str_3_38_2563);
        media.set_channel_volume(1-1, global_values->get(10));
    }
    event_2_11_end: ;
}
// Function purpose: generated callback event_func_6083 processes event block(s) 5_11. Actions/conditions:
//        5_11: decrypts a save-data file; loads a game or save-data file; encrypts a save-data file.
void Frames::event_func_6083()
{
    // event 5_11 : decrypts a save-data file; loads a game or save-data file; encrypts a save-data file
    {
        if (!(group_load_map_from_file_1)) goto event_5_11_end;
    BlowfishObject::decrypt_file(str_mothking_99, str_data_maps_tutorial_map_2564);
        ((INI*)get_instance(mapload_322_instances))->load_file(str_data_maps_tutorial_map_2564, true, false, true);
    BlowfishObject::encrypt_file(str_mothking_99, str_data_maps_tutorial_map_2564);
    }
    event_5_11_end: ;
}
// Function purpose: generated callback event_func_6084 processes event block(s) 6_11. Actions/conditions:
//        6_11: decrypts a save-data file; loads saved game data; sets the target size; plus 1 more actions.
void Frames::event_func_6084()
{
    // event 6_11 : decrypts a save-data file; loads saved game data; sets the target size; plus 1 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_6_11_end;
    BlowfishObject::decrypt_file(str_mothking_99, str_data_images_tiles_tutorial_gif_2565);
        ((ActivePicture*)get_instance(activepicture_160_instances))->load(str_data_images_tiles_tutorial_gif_2565);
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_size(((ActivePicture*)get_instance(activepicture_160_instances))->get_width(), ((ActivePicture*)get_instance(activepicture_160_instances))->get_height());
    BlowfishObject::encrypt_file(str_mothking_99, str_data_images_tiles_tutorial_gif_2565);
    }
    event_6_11_end: ;
}
// Function purpose: generated callback event_func_6085 processes event block(s) 7_11. Actions/conditions:
//        7_11: sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to
//        _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_; sets ObstacleList3 to
//        _52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_; plus 12 more actions.
void Frames::event_func_6085()
{
    // event 7_11 : sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_; sets ObstacleList3 to _52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_; plus 12 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_7_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(284, str_obstaclelist1_952, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_953);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(285, str_obstaclelist2_954, str_27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_955);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(286, str_obstaclelist3_956, str_52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_993);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(287, str_obstaclelist4_958, str_76_77_78_79_80_81_82_83_84_85_92_980);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(288, str_shadowcasters_960, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_20_21_22_23_24_25_27_32_33_34_35_36_37_38_52_53_54_55_56_57_58_59_60_61_62_63_64_71_76_77_78_79_80_82_83_84_85_90_91_994);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(289, str_shadowcasters2_962, str_10_23_27_38_53_55_61_71_79_64_995);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(290, str_shadowcasters3_964, str_27_9_24_35_52_54_60_62_1011);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(23, str_outsidegroundtiles_485, str_0_19_49_50_66_67_68_69_966);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(291, str_chippablewalls_967, str_5_6_7_16_17_58_968);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(292, str_cuttablefences_969, str_20_21_56_90_91_970);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(293, str_ug_blocks_971, str_5_22_23_24_25_58_972);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(294, str_rooffall_973, str_0_79_83_85_87_88_89_974);
    }
    event_7_11_end: ;
}
// Function purpose: generated callback event_func_6086 processes event block(s) 8_11. Actions/conditions:
//        8_11: clears the current selection or contents; clears the current selection or contents; updates a value on
//        the target object; plus 33 more actions.
void Frames::event_func_6086()
{
    // event 8_11 : clears the current selection or contents; clears the current selection or contents; updates a value on the target object; plus 33 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_8_11_end;
        ((ArrayObject*)get_instance(groundTiles_instances))->clear();
        groundobjects_321_instances.clear_selection();
        for (ObjectIterator it(groundobjects_321_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        global_strings->set(4, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_info_348, str_maphash_738, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(164, str_map_music_742, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_info_348, str_music_53, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(165, str_map_groundtype_743, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_info_348, str_tileset_351, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(166, str_mapname_126, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_info_348, str_mapname_126, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(55, str_maptileset_549, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_info_348, str_tileset_351, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(19, str_maptype_109, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_info_348, str_maptype_109, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(167, str_mapwarden_744, ((ListObject*)get_instance(warden_392_instances))->get_line(randrange_event(((ListObject*)get_instance(warden_392_instances))->get_count())+1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(43, str_maproutine_503, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_info_348, str_routineset_745, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(168, str_inmatecount_746, ((INI*)get_instance(mapload_322_instances))->get_value(str_info_348, str_inmates_519, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(169, str_guardcount_747, ((INI*)get_instance(mapload_322_instances))->get_value(str_info_348, str_guards_538, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(83, str_npclvl_587, ((INI*)get_instance(mapload_322_instances))->get_value(str_info_348, str_npclvl_587, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(170, str_fightfreq_748, ((INI*)get_instance(mapload_322_instances))->get_value(str_info_348, str_fightfreq_748, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_info_348, str_intro_750, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(172, str_hint1_751, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_info_348, str_hint1_751, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(173, str_hint2_752, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_info_348, str_hint2_752, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(174, str_hint3_753, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_info_348, str_hint3_753, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(175, str_map_job_laundry_754, ((INI*)get_instance(mapload_322_instances))->get_value(str_jobs_755, str_laundry_29, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(176, str_map_job_gardening_756, ((INI*)get_instance(mapload_322_instances))->get_value(str_jobs_755, str_gardening_43, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(177, str_map_job_janitor_757, ((INI*)get_instance(mapload_322_instances))->get_value(str_jobs_755, str_janitor_24, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(178, str_map_job_woodshop_758, ((INI*)get_instance(mapload_322_instances))->get_value(str_jobs_755, str_woodshop_21, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(179, str_map_job_metalshop_759, ((INI*)get_instance(mapload_322_instances))->get_value(str_jobs_755, str_metalshop_35, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(180, str_map_job_kitchen_760, ((INI*)get_instance(mapload_322_instances))->get_value(str_jobs_755, str_kitchen_12, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(181, str_map_job_deliveries_761, ((INI*)get_instance(mapload_322_instances))->get_value(str_jobs_755, str_deliveries_577, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(182, str_map_job_tailor_762, ((INI*)get_instance(mapload_322_instances))->get_value(str_jobs_755, str_tailor_479, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(183, str_map_job_mailman_763, ((INI*)get_instance(mapload_322_instances))->get_value(str_jobs_755, str_mailman_556, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(184, str_map_job_library_764, ((INI*)get_instance(mapload_322_instances))->get_value(str_jobs_755, str_library_25, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(17, str_job_478, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(str_pos_635+((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478), -1);
        warden_392_instances.clear_selection();
        for (ObjectIterator it(warden_392_instances); !it.end(); ++it) {
            ((ListObject*)*it)->destroy();
        }
        {
            loop_setjobpayout_running = true;
            int times = int(1);
            loop_setjobpayout_index = 0;
            while (loop_setjobpayout_index < times) {
                loop_setjobpayout_6();
                if (!loop_setjobpayout_running) break;
                loop_setjobpayout_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(721, str_mapheight_1897, height/MathHelper()/16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(490, str_maploop_1369, 0);
    }
    event_8_11_end: ;
}
// Function purpose: generated callback event_func_6087 processes event block(s) 58_11. Actions/conditions:
//        58_11: splits saved text into fields; sets Zones_KitchenTopX to
//        string_to_number(stringtokenizer_81->get(0)); sets Zones_KitchenTopY to
//        string_to_number(stringtokenizer_81->get(1)); plus 30 more actions.
void Frames::event_func_6087()
{
    // event 58_11 : splits saved text into fields; sets Zones_KitchenTopX to string_to_number(stringtokenizer_81->get(0)); sets Zones_KitchenTopY to string_to_number(stringtokenizer_81->get(1)); plus 30 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_58_11_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_kitchen_12, empty_string), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(70, str_zones_kitchentopx_569, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(72, str_zones_kitchentopy_571, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(71, str_zones_kitchenbottomx_570, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(73, str_zones_kitchenbottomy_572, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_gym_775, empty_string), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(842, str_zones_gymtopx_2022, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(843, str_zones_gymtopy_2023, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(844, str_zones_gymbottomx_2024, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(845, str_zones_gymbottomy_2025, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_rollcall_769, empty_string), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(786, str_zones_rollcalltopx_1966, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(787, str_zones_rollcalltopy_1967, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(788, str_zones_rollcallbottomx_1968, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(789, str_zones_rollcallbottomy_1969, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_showers_777, empty_string), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(846, str_zones_showerstopx_2026, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(847, str_zones_showerstopy_2027, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(848, str_zones_showersbottomx_2028, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(849, str_zones_showersbottomy_2029, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_laundry_29, empty_string), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(66, str_zones_laundrytopx_565, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(68, str_zones_laundrytopy_567, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(67, str_zones_laundrybottomx_566, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(69, str_zones_laundrybottomy_568, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_canteen_773, empty_string), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(3, str_zones_canteentopx_438, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(5, str_zones_canteentopy_440, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(4, str_zones_canteenbottomx_439, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(6, str_zones_canteenbottomy_441, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
    }
    event_58_11_end: ;
}
// Function purpose: generated callback event_func_6088 processes event block(s) 59_11. Actions/conditions:
//        59_11: splits saved text into fields; sets Zones_SHUTopX to string_to_number(stringtokenizer_81->get(0));
//        sets Zones_SHUTopY to string_to_number(stringtokenizer_81->get(1)); plus 25 more actions.
void Frames::event_func_6088()
{
    // event 59_11 : splits saved text into fields; sets Zones_SHUTopX to string_to_number(stringtokenizer_81->get(0)); sets Zones_SHUTopY to string_to_number(stringtokenizer_81->get(1)); plus 25 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_59_11_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_shu_779, empty_string), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(850, str_zones_shutopx_2030, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(851, str_zones_shutopy_2031, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(852, str_zones_shubottomx_2032, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(853, str_zones_shubottomy_2033, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_woodshop_21, empty_string), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(58, str_zones_woodshoptopx_557, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(60, str_zones_woodshoptopy_559, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(59, str_zones_woodshopbottomx_558, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(61, str_zones_woodshopbottomy_560, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_metalshop_35, empty_string), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(62, str_zones_metalshoptopx_561, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(64, str_zones_metalshoptopy_563, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(63, str_zones_metalshopbottomx_562, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(65, str_zones_metalshopbottomy_564, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_tailorshop_44, empty_string), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(74, str_zones_tailorshoptopx_573, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(76, str_zones_tailorshoptopy_575, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(75, str_zones_tailorshopbottomx_574, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(77, str_zones_tailorshopbottomy_576, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_deliveries_577, empty_string), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(866, str_zones_deliveriestopx_2046, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(867, str_zones_deliveriestopy_2047, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(868, str_zones_deliveriesbottomx_2048, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(869, str_zones_deliveriesbottomy_2049, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
    }
    event_59_11_end: ;
}
// Function purpose: generated callback event_func_6089 processes event block(s) 60_11. Actions/conditions:
//        60_11: splits saved text into fields; sets Zones_YourCellTopX to
//        string_to_number(stringtokenizer_81->get(0)); sets Zones_YourCellTopY to
//        string_to_number(stringtokenizer_81->get(1)); plus 30 more actions.
void Frames::event_func_6089()
{
    // event 60_11 : splits saved text into fields; sets Zones_YourCellTopX to string_to_number(stringtokenizer_81->get(0)); sets Zones_YourCellTopY to string_to_number(stringtokenizer_81->get(1)); plus 30 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_60_11_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_yourcell_771, empty_string), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(759, str_zones_yourcelltopx_1937, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(761, str_zones_yourcelltopy_1939, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(760, str_zones_yourcellbottomx_1938, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(762, str_zones_yourcellbottomy_1940, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_cells1_795, empty_string), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(266, str_zones_cells1topx_923, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(267, str_zones_cells1topy_924, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(268, str_zones_cells1bottomx_925, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(269, str_zones_cells1bottomy_926, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_cells2_797, empty_string), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(270, str_zones_cells2topx_927, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(271, str_zones_cells2topy_928, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(272, str_zones_cells2bottomx_929, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(273, str_zones_cells2bottomy_930, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_cells3_799, empty_string), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(274, str_zones_cells3topx_931, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(275, str_zones_cells3topy_932, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(276, str_zones_cells3bottomx_933, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(277, str_zones_cells3bottomy_934, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_cells4_801, empty_string), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(278, str_zones_cells4topx_935, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(279, str_zones_cells4topy_936, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(280, str_zones_cells4bottomx_937, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(281, str_zones_cells4bottomy_938, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_cells5_803, empty_string), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(790, str_zones_cells5topx_1970, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(791, str_zones_cells5topy_1971, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(792, str_zones_cells5bottomx_1972, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(793, str_zones_cells5bottomy_1973, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
    }
    event_60_11_end: ;
}
// Function purpose: generated callback event_func_6090 processes event block(s) 61_11. Actions/conditions:
//        61_11: splits saved text into fields; sets Zones_Safe1TopX to string_to_number(stringtokenizer_81->get(0));
//        sets Zones_Safe1TopY to string_to_number(stringtokenizer_81->get(1)); plus 15 more actions.
void Frames::event_func_6090()
{
    // event 61_11 : splits saved text into fields; sets Zones_Safe1TopX to string_to_number(stringtokenizer_81->get(0)); sets Zones_Safe1TopY to string_to_number(stringtokenizer_81->get(1)); plus 15 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_61_11_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_safe1_789, empty_string), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(854, str_zones_safe1topx_2034, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(855, str_zones_safe1topy_2035, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(856, str_zones_safe1bottomx_2036, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(857, str_zones_safe1bottomy_2037, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_safe2_791, empty_string), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(858, str_zones_safe2topx_2038, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(859, str_zones_safe2topy_2039, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(860, str_zones_safe2bottomx_2040, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(861, str_zones_safe2bottomy_2041, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_safe3_793, empty_string), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(862, str_zones_safe3topx_2042, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(863, str_zones_safe3topy_2043, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(864, str_zones_safe3bottomx_2044, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(865, str_zones_safe3bottomy_2045, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
    }
    event_61_11_end: ;
}
// Function purpose: generated callback event_func_6091 processes event block(s) 233_11. Actions/conditions:
//        233_11: sets MusicFade to Out; sets the object position in the world; moves the selected object behind other
//        objects.
void Frames::event_func_6091()
{
    // event 233_11 : sets MusicFade to Out; sets the object position in the world; moves the selected object behind other objects
    {
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_out_1921);
        {
            ((Active*)get_instance(dreamOverlay_instances))->set_global_position(0, 0);
            pos_end_233_11_0: ;
        }
        ((Active*)get_instance(dreamOverlay_instances))->move_back(((Active*)get_instance(sidePanel_instances)));
    }
    event_233_11_end: ;
}
// Frame lifecycle dispatcher on_frame_12_start_events is called by the corresponding FrameN lifecycle method.
//        It dispatches 12 event/helper function(s), including event_func_6081, event_func_6082, event_func_4948,
//        event_func_6083, event_func_6084, event_func_6085, event_func_6086.
void Frames::on_frame_12_start_events()
{
    event_func_6081();
    event_func_6082();
    event_func_4948();
    event_func_6083();
    event_func_6084();
    event_func_6085();
    event_func_6086();
    event_func_6087();
    event_func_6088();
    event_func_6089();
    event_func_6090();
    event_func_6091();
}
// Frame lifecycle dispatcher on_frame_12_init is called by the corresponding FrameN lifecycle method.
void Frames::on_frame_12_init()
{
    index = 11;
    width = 1500;
    height = 1500;
    virtual_width = 1500;
    virtual_height = 1500;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(7);
    layers[0].init(0, 1.0, 1.0, false, false, false);
    layers[1].init(1, 1.0, 1.0, true, false, false);
    layers[2].init(2, 1.0, 1.0, true, false, false);
    layers[3].init(3, 1.0, 1.0, false, false, false);
    layers[4].init(4, 1.0, 1.0, false, false, false);
    layers[5].init(5, 1.0, 1.0, true, false, false);
    layers[6].init(6, 1.0, 1.0, false, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    static ObjectList* qualifier_25_instances[] = {&patroljeepwpright_415_instances, &patroljeepwpdown_417_instances, &patroljeepwpleft_418_instances, &patroljeepwpup_419_instances, NULL};
    qualifier_25.set(4, &qualifier_25_instances[0]);
    static ObjectList* qualifier_24_instances[] = {&buddiesText_instances, &cashText_instances, &healthText_instances, &heatText_instances, &fatigueText_instances, NULL};
    qualifier_24.set(5, &qualifier_24_instances[0]);
    static ObjectList* qualifier_27_instances[] = {&containerdeliveries_756_instances, &containerdeliveries2_757_instances, NULL};
    qualifier_27.set(2, &qualifier_27_instances[0]);
    static ObjectList* qualifier_26_instances[] = {&dighole_207_instances, &brace_412_instances, NULL};
    qualifier_26.set(2, &qualifier_26_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shadow2_347_instances, &shadow3_355_instances, &shadow_324_instances, NULL};
    qualifier_21.set(3, &qualifier_21_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&desks_717_instances, NULL};
    qualifier_20.set(1, &qualifier_20_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&markervendor_332_instances, NULL};
    qualifier_23.set(1, &qualifier_23_instances[0]);
    static ObjectList* qualifier_22_instances[] = {&containermedical_269_instances, &desks_717_instances, &table2_720_instances, NULL};
    qualifier_22.set(3, &qualifier_22_instances[0]);
    static ObjectList* qualifier_8_instances[] = {&doorcell_174_instances, &doorkitchen_211_instances, &doorstaff_212_instances, &doorutility_259_instances, &dooroutside_262_instances, &doorwoodshop_268_instances, &doorjanitor_271_instances, &doorlibrary_272_instances, &doorlaundry_276_instances, &doormetalshop_328_instances, &doormaster_387_instances, &doormailroom_400_instances, &doordeliveries_401_instances, &doorgardening_402_instances, &doortailor_403_instances, NULL};
    qualifier_8.set(15, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&gym3_317_instances, &gym4_318_instances, &joggingmat_407_instances, &pushupmat_408_instances, &skippingmat_435_instances, &punchbag_436_instances, &pushupmat2_761_instances, &speedbag_439_instances, NULL};
    qualifier_9.set(8, &qualifier_9_instances[0]);
    static ObjectList* qualifier_2_instances[] = {&player0_673_instances, &player1_738_instances, &player2_739_instances, &player3_740_instances, &player4_741_instances, &player5_742_instances, &player6_371_instances, &player7_372_instances, &player8_745_instances, NULL};
    qualifier_2.set(9, &qualifier_2_instances[0]);
    static ObjectList* qualifier_3_instances[] = {&guard_169_instances, &player0_673_instances, &inmate_175_instances, &inmate2_190_instances, &inmate3_192_instances, &inmate4_193_instances, &inmate7_286_instances, &inmate8_287_instances, &inmate9_288_instances, &inmate10_289_instances, &inmate11_290_instances, &player1_738_instances, &player2_739_instances, &player3_740_instances, &player4_741_instances, &player5_742_instances, &player6_371_instances, &player7_372_instances, &player8_745_instances, NULL};
    qualifier_3.set(19, &qualifier_3_instances[0]);
    static ObjectList* qualifier_1_instances[] = {&bedmedical_234_instances, &gym3_317_instances, &gym4_318_instances, &bedsolitary_344_instances, &visitationinmate_382_instances, &bedlounger_405_instances, &joggingmat_407_instances, &pushupmat_408_instances, &skippingmat_435_instances, &punchbag_436_instances, &canteenchair_312_instances, &bedplayer_338_instances, &hiding_379_instances, &pushupmat2_761_instances, &speedbag_439_instances, NULL};
    qualifier_1.set(15, &qualifier_1_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&bedmedical_234_instances, &bedguard_337_instances, &bedsolitary_344_instances, &bedlounger_405_instances, &inmateBed_instances, &bedplayer_338_instances, NULL};
    qualifier_6.set(6, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&containermedical_269_instances, &containergardening_409_instances, &containercanteen_691_instances, &containerjanitor_270_instances, &desks_717_instances, &washing2_313_instances, &oven2_314_instances, NULL};
    qualifier_7.set(7, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&containerkitchen_229_instances, &library_233_instances, &phone_235_instances, &kitchensink_236_instances, &containertimber_267_instances, &containerlaundrydirty_274_instances, &containerlaundryclean_275_instances, &library2_316_instances, &containertimber2_325_instances, &powergen_360_instances, &payphone_386_instances, &containertailorin_396_instances, &containermail_399_instances, &containerbookchest_273_instances, &washing2_313_instances, &oven2_314_instances, &metalshop_326_instances, &metalshop2_327_instances, &licenseprints_729_instances, &interwebs_749_instances, &containertailorout_395_instances, &containerdeliveries_756_instances, &containerdeliveries2_757_instances, NULL};
    qualifier_4.set(23, &qualifier_4_instances[0]);
    static ObjectList* qualifier_5_instances[] = {&guardBase_instances, &playerBase_instances, &inmateBase_instances, NULL};
    qualifier_5.set(3, &qualifier_5_instances[0]);
    static ObjectList* qualifier_30_instances[] = {&tutorialArrow_instances, &tutarrow2_773_instances, NULL};
    qualifier_30.set(2, &qualifier_30_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&containerkitchen_229_instances, &containertimber_267_instances, &containermedical_269_instances, &containerlaundrydirty_274_instances, &containerlaundryclean_275_instances, &active9_291_instances, &containertimber2_325_instances, &kettle_354_instances, &containertailorin_396_instances, &containergardening_409_instances, &containercanteen_691_instances, &containerjanitor_270_instances, &containerbookchest_273_instances, &canteenserving_705_instances, &desks_717_instances, &table2_720_instances, &metalshop_326_instances, &metalshop2_327_instances, &containertailorout_395_instances, &containerdeliveries_756_instances, &containerdeliveries2_757_instances, NULL};
    qualifier_18.set(21, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&library_233_instances, &phone_235_instances, &kitchensink_236_instances, &jobboard_244_instances, &active10_293_instances, &sheetsposters_294_instances, &library2_316_instances, &bedsolitary_344_instances, &powergen_360_instances, &payphone_386_instances, &containermail_399_instances, &tv_404_instances, &stash_420_instances, &checkpoint_422_instances, &cake_424_instances, &activityMarker_instances, &camera_237_instances, &fan_707_instances, &toilet2_307_instances, &washing2_313_instances, &oven2_314_instances, &licenseprints_729_instances, &dummies_374_instances, &hiding_379_instances, &interwebs_749_instances, &truck_751_instances, &patroljeep_416_instances, NULL};
    qualifier_19.set(27, &qualifier_19_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&guardBase_instances, &inmateBase_instances, NULL};
    qualifier_14.set(2, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&playerBase_instances, &inmateBase_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&outfitoveralls_375_instances, &overallsoutfit_434_instances, &outfitguard_248_instances, &outfitinmate_249_instances, &outfitpow_376_instances, NULL};
    qualifier_16.set(5, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&containermedical_269_instances, &containergardening_409_instances, &containercanteen_691_instances, &containerjanitor_270_instances, NULL};
    qualifier_17.set(4, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&dighole_207_instances, NULL};
    qualifier_10.set(1, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mission_256_instances, &dialogue3_264_instances, &dialogue4_352_instances, &noticetext_363_instances, &profilestats_432_instances, &buttontext_445_instances, &popupCloudText_instances, &dialogBodyText_instances, &dchar_214_instances, &mouse2_713_instances, NULL};
    qualifier_11.set(10, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&inmate_175_instances, &inmate2_190_instances, &inmate3_192_instances, &inmate4_193_instances, &inmate7_286_instances, &inmate8_287_instances, &inmate9_288_instances, &inmate10_289_instances, &inmate11_290_instances, NULL};
    qualifier_12.set(9, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&guard_169_instances, NULL};
    qualifier_13.set(1, &qualifier_13_instances[0]);
    add_background_object(create_soilbackground_766(0, 0), 0);
    add_background_object(create_quickbackdrop5_686(1552, 624), 0);
    add_background_object(create_floorlayer_767(0, 0), 1);
    add_object(create_extranpcs_750(-88, 136), 1);
    add_object(create_outfitpow_747(-56, 40), 1);
    add_object(create_cursor_178(192, -160), 1);
    add_object(create_gameVariables(48, -176), 1);
    add_object(create_scan_187(0, 0), 1);
    add_object(create_baseyou_674(-9, 305), 1);
    add_object(create_advanceddirectionobject_171(-16, -176), 1);
    add_object(create_los_198(-128, 80), 1);
    add_object(create_ignorenotes_199(-496, 448), 1);
    add_object(create_camera_202(408, 136), 1);
    add_object(create_upperlevelcheck_685(-16, -128), 1);
    add_object(create_dighole_207(-40, -136), 1);
    add_object(create_items_679(88, -40), 1);
    add_object(create_itemsdb_693(16, -208), 1);
    add_object(create_guardscan_219(-186, 278), 1);
    add_object(create_conscan_260(-202, 118), 1);
    add_object(create_chaseob_258(-8, -40), 1);
    add_object(create_attacklooptarget_297(-8, -24), 1);
    add_object(create_npcdetectortop_299(360, -119), 1);
    add_object(create_npcdetectorbottom_300(296, -137), 1);
    add_object(create_npcdetectorleft_301(281, -152), 1);
    add_object(create_npcdetectorright_302(311, -136), 1);
    add_object(create_active_304(-144, -80), 1);
    add_object(create_hiding_748(-304, -80), 1);
    add_object(create_activepicture_319(-208, -48), 1);
    add_object(create_mapload_322(-448, 80), 1);
    add_object(create_globals_127(-416, 112), 1);
    add_object(create_shady_734(-256, 0), 1);
    add_object(create_moveit_362(240, -208), 1);
    add_object(create_doorcheck_364(-414, -30), 1);
    add_object(create_lookinmateflag60_394(-88, 312), 1);
    add_object(create_lookguardflag60_442(-88, 360), 1);
    add_object(create_active2_411(448, -176), 1);
    add_object(create_tutguardleft_769(-432, 208), 1);
    add_object(create_tutguardright_770(-416, 208), 1);
    add_object(create_playercollision_771(-359, 246), 1);
    add_object(create_namesbackersinmates_735(544, -352), 1);
    add_object(create_namesbackersguards_736(592, -352), 1);
    add_object(create_listinmates_217(256, -96), 1);
    add_object(create_digarray_228(80, -176), 1);
    add_object(create_wallsarray_232(112, -176), 1);
    add_object(create_fencearray_265(144, -176), 1);
    add_object(create_groundTiles(-416, 48), 1);
    add_object(create_groundobjects_321(-384, 48), 1);
    add_object(create_shadows_356(-448, 48), 1);
    add_object(create_windowcontrol_0(208, -176), 1);
    add_background_object(create_backdrop22_222(-112, 816), 2);
    add_background_object(create_backdrop3_195(-128, 816), 2);
    add_background_object(create_backdrop8_205(-144, 816), 2);
    add_background_object(create_backdrop6_204(-128, 800), 2);
    add_object(create_layerobject_37(176, -208), 3);
    add_background_object(create_backdrop29_285(32, -266), 5);
    add_object(create_sidePanel(0, 17), 5);
    add_object(create_textbox_680(154, 107), 5);
    add_object(create_lessonTimerText(4, 226), 5);
    add_object(create_target_177(-40, -104), 5);
    add_object(create_mouse_196(-16, -112), 5);
    add_object(create_dchar2_690(32, -64), 5);
    add_object(create_substringreplace_27(96, -144), 5);
    add_object(create_counter2_257(-96, 192), 5);
    add_object(create_stringtokenizer_81(144, -208), 5);
    add_object(create_ventTileRow(304, -208), 5);
    add_object(create_undergroundTileRow(304, -176), 5);
    add_object(create_roofTileRow(336, -208), 5);
    add_object(create_stringtokenizer2_292(112, -208), 5);
    add_object(create_itemSlot(-38, -38), 5);
    add_object(create_activityProgress(213, -87), 5);
    add_object(create_active5_696(297, 148), 5);
    add_object(create_loadingCurtain(-32, 48), 5);
    add_object(create_destarrow_283(344, 20), 5);
    add_object(create_active3_284(213, -58), 5);
    add_object(create_dreamOverlay(-448, -480), 5);
    add_object(create_tutorialArrow(-386, 238), 5);
    add_object(create_tutarrow2_773(-386, 250), 5);
    add_object(create_activesystembox_450(-560, 256), 5);
    add_object(create_missions_298(48, 240), 5);
    add_object(create_craftingpossibles_349(-64, 80), 5);
    add_object(create_warden_754(-560, 80), 5);
    add_object(create_listguards_218(352, -96), 5);
    add_object(create_translationData(-288, 208), 6);
    add_object(create_itemData(-288, 288), 6);
    add_object(create_inispeech_453(-288, 256), 6);
    loop_flash_tut_running = false;
    loop_flash_tut_index = 0;
    loop_grab_vent_check_running = false;
    loop_grab_vent_check_index = 0;
    loop_npc_tab_buy_running = false;
    loop_npc_tab_buy_index = 0;
    loop_perch_running = false;
    loop_perch_index = 0;
    loop_exit_hole_running = false;
    loop_exit_hole_index = 0;
    loop_tip_left_running = false;
    loop_tip_left_index = 0;
    loop_close_craft_running = false;
    loop_close_craft_index = 0;
    loop_create_activity_box_running = false;
    loop_create_activity_box_index = 0;
    loop_restock_npc_desks_custom_running = false;
    loop_restock_npc_desks_custom_index = 0;
    loop_find_open_toilet_slot_running = false;
    loop_find_open_toilet_slot_index = 0;
    loop_make_combshiv_running = false;
    loop_make_combshiv_index = 0;
    loop_vent_setup_running = false;
    loop_vent_setup_index = 0;
    loop_stats_close_npc_running = false;
    loop_stats_close_npc_index = 0;
    loop_buy_npc_running = false;
    loop_buy_npc_index = 0;
    loop_create_stat_bars_running = false;
    loop_create_stat_bars_index = 0;
    loop_swear_filter_go_running = false;
    loop_swear_filter_go_index = 0;
    loop_grabdummy_check_running = false;
    loop_grabdummy_check_index = 0;
    loop_medibox_check_running = false;
    loop_medibox_check_index = 0;
    loop_bog_dir_running = false;
    loop_bog_dir_index = 0;
    loop_digbelow_check_running = false;
    loop_digbelow_check_index = 0;
    loop_build_container_running = false;
    loop_build_container_index = 0;
    loop_return_give_item_running = false;
    loop_return_give_item_index = 0;
    loop_disableselected_running = false;
    loop_disableselected_index = 0;
    loop_talk_loop_running = false;
    loop_talk_loop_index = 0;
    loop_hide_vent_layer_running = false;
    loop_hide_vent_layer_index = 0;
    loop_close_level_running = false;
    loop_close_level_index = 0;
    loop_flip_craft_findslot_running = false;
    loop_flip_craft_findslot_index = 0;
    loop_icon_thumbup_running = false;
    loop_icon_thumbup_index = 0;
    loop_gym_push_off_running = false;
    loop_gym_push_off_index = 0;
    loop_create_guards_running = false;
    loop_create_guards_index = 0;
    loop_clean_fin_running = false;
    loop_clean_fin_index = 0;
    loop_set_walls_running = false;
    loop_set_walls_index = 0;
    loop_tut_button_running = false;
    loop_tut_button_index = 0;
    loop_remove_bog_water_running = false;
    loop_remove_bog_water_index = 0;
    loop_inv_clear_running = false;
    loop_inv_clear_index = 0;
    loop_flip_container_findslot_running = false;
    loop_flip_container_findslot_index = 0;
    loop_npc_prof_sleep_running = false;
    loop_npc_prof_sleep_index = 0;
    loop_ug_lighting_running = false;
    loop_ug_lighting_index = 0;
    loop_flip_into_equip2_running = false;
    loop_flip_into_equip2_index = 0;
    loop_menubuttons_running = false;
    loop_menubuttons_index = 0;
    loop_align_color_running = false;
    loop_align_color_index = 0;
    loop_loot_close_running = false;
    loop_loot_close_index = 0;
    loop_talk_loop_guard_running = false;
    loop_talk_loop_guard_index = 0;
    loop_chair_push_off_24_running = false;
    loop_chair_push_off_24_index = 0;
    loop_gimme_outfit_running = false;
    loop_gimme_outfit_index = 0;
    loop_restock_npc_desks_custom_find_running = false;
    loop_restock_npc_desks_custom_find_index = 0;
    loop_move_check_y_running = false;
    loop_move_check_y_index = 0;
    loop_move_check_x_running = false;
    loop_move_check_x_index = 0;
    loop_check_beat_mission2_running = false;
    loop_check_beat_mission2_index = 0;
    loop_craft_output_running = false;
    loop_craft_output_index = 0;
    loop_unselect_item_running = false;
    loop_unselect_item_index = 0;
    loop_npc_prof_oor_running = false;
    loop_npc_prof_oor_index = 0;
    loop_make_mines_running = false;
    loop_make_mines_index = 0;
    loop_new_rope_running = false;
    loop_new_rope_index = 0;
    loop_os_check_running = false;
    loop_os_check_index = 0;
    loop_flip_into_outfit_running = false;
    loop_flip_into_outfit_index = 0;
    loop_set_stats_running = false;
    loop_set_stats_index = 0;
    loop_talk_loop_guard_2_running = false;
    loop_talk_loop_guard_2_index = 0;
    loop_move_check_doors_running = false;
    loop_move_check_doors_index = 0;
    loop_give_npc_check_running = false;
    loop_give_npc_check_index = 0;
    loop_make_item_str_running = false;
    loop_make_item_str_index = 0;
    loop_inv_add_ifhpok_running = false;
    loop_inv_add_ifhpok_index = 0;
    loop_hehe_running = false;
    loop_hehe_index = 0;
    loop_swear_filter_running = false;
    loop_swear_filter_index = 0;
    loop_collect_vent_running = false;
    loop_collect_vent_index = 0;
    loop_flip_toilet_findslot_running = false;
    loop_flip_toilet_findslot_index = 0;
    loop_check_complete_fencecut_running = false;
    loop_check_complete_fencecut_index = 0;
    loop_create_inmates_running = false;
    loop_create_inmates_index = 0;
    loop_del_from_vendor_running = false;
    loop_del_from_vendor_index = 0;
    loop_assign_keys_running = false;
    loop_assign_keys_index = 0;
    loop_menuoptions_running = false;
    loop_menuoptions_index = 0;
    loop_slider_music_running = false;
    loop_slider_music_index = 0;
    loop_supports_running = false;
    loop_supports_index = 0;
    loop_you_hit_anim_running = false;
    loop_you_hit_anim_index = 0;
    loop_stats_gear_npc_running = false;
    loop_stats_gear_npc_index = 0;
    loop_drop_carries_running = false;
    loop_drop_carries_index = 0;
    loop_notice_running = false;
    loop_notice_index = 0;
    loop_stats_close_running = false;
    loop_stats_close_index = 0;
    loop_give_cash_setup_running = false;
    loop_give_cash_setup_index = 0;
    loop_move_check_running = false;
    loop_move_check_index = 0;
    loop_inv_add_running = false;
    loop_inv_add_index = 0;
    loop_pickupitem_running = false;
    loop_pickupitem_index = 0;
    loop_create_stat_bars_guard_running = false;
    loop_create_stat_bars_guard_index = 0;
    loop_speak_running = false;
    loop_speak_index = 0;
    loop_ventremovealert_running = false;
    loop_ventremovealert_index = 0;
    loop_inv_remove_running = false;
    loop_inv_remove_index = 0;
    loop_new_grap_running = false;
    loop_new_grap_index = 0;
    loop_climb_off_running = false;
    loop_climb_off_index = 0;
    loop_grab_fakewall_check_running = false;
    loop_grab_fakewall_check_index = 0;
    loop_sort_holes_running = false;
    loop_sort_holes_index = 0;
    loop_invstring_running = false;
    loop_invstring_index = 0;
    loop_pavatar_running = false;
    loop_pavatar_index = 0;
    loop_brace_check_running = false;
    loop_brace_check_index = 0;
    loop_flip_into_equip_running = false;
    loop_flip_into_equip_index = 0;
    loop_craftoutput2inv_running = false;
    loop_craftoutput2inv_index = 0;
    loop_set_align_running = false;
    loop_set_align_index = 0;
    loop_build_loot_gear_slots_running = false;
    loop_build_loot_gear_slots_index = 0;
    loop_retrieve_mission_loot_running = false;
    loop_retrieve_mission_loot_index = 0;
    loop_craft2inv_running = false;
    loop_craft2inv_index = 0;
    loop_del_ingred_running = false;
    loop_del_ingred_index = 0;
    loop_numkey_inv_running = false;
    loop_numkey_inv_index = 0;
    loop_npc_tab_stats_running = false;
    loop_npc_tab_stats_index = 0;
    loop_layer_down_running = false;
    loop_layer_down_index = 0;
    loop_create_stat_bars_npc_running = false;
    loop_create_stat_bars_npc_index = 0;
    loop_cl_profile_running = false;
    loop_cl_profile_index = 0;
    loop_npc_talk_2_running = false;
    loop_npc_talk_2_index = 0;
    loop_enter_hole_running = false;
    loop_enter_hole_index = 0;
    loop_restocks_running = false;
    loop_restocks_index = 0;
    loop_fill_loo_slots_running = false;
    loop_fill_loo_slots_index = 0;
    loop_guard_tab_stats_running = false;
    loop_guard_tab_stats_index = 0;
    loop_weed_fin_running = false;
    loop_weed_fin_index = 0;
    loop_craft_check_running = false;
    loop_craft_check_index = 0;
    loop_fill_loot_slots_running = false;
    loop_fill_loot_slots_index = 0;
    loop_star_it_running = false;
    loop_star_it_index = 0;
    loop_find_open_desk_slot_running = false;
    loop_find_open_desk_slot_index = 0;
    loop_grabsheet_check_running = false;
    loop_grabsheet_check_index = 0;
    loop_attack_em_running = false;
    loop_attack_em_index = 0;
    loop_find_open_container_slot_running = false;
    loop_find_open_container_slot_index = 0;
    loop_desk_ids_running = false;
    loop_desk_ids_index = 0;
    loop_icon_heat_running = false;
    loop_icon_heat_index = 0;
    loop_stats_gear_running = false;
    loop_stats_gear_index = 0;
    loop_cancel_actions_running = false;
    loop_cancel_actions_index = 0;
    loop_options_screen_running = false;
    loop_options_screen_index = 0;
    loop_find_open_craft_slot_running = false;
    loop_find_open_craft_slot_index = 0;
    loop_flip_desk_findslot_running = false;
    loop_flip_desk_findslot_index = 0;
    loop_give_npc_running = false;
    loop_give_npc_index = 0;
    loop_digabove_running = false;
    loop_digabove_index = 0;
    loop_digbelow_running = false;
    loop_digbelow_index = 0;
    loop_chair_push_off_8_running = false;
    loop_chair_push_off_8_index = 0;
    loop_you_attack_deadcheck_running = false;
    loop_you_attack_deadcheck_index = 0;
    loop_build_desk_running = false;
    loop_build_desk_index = 0;
    loop_push_reaction_running = false;
    loop_push_reaction_index = 0;
    loop_dighole_running = false;
    loop_dighole_index = 0;
    loop_pillow_check_running = false;
    loop_pillow_check_index = 0;
    loop_retrieve_mission_running = false;
    loop_retrieve_mission_index = 0;
    loop_restock_npc_desks_running = false;
    loop_restock_npc_desks_index = 0;
    loop_setjobpayout_running = false;
    loop_setjobpayout_index = 0;
    loop_talk_los_running = false;
    loop_talk_los_index = 0;
    loop_flip_into_weapon_running = false;
    loop_flip_into_weapon_index = 0;
    loop_craftsum_running = false;
    loop_craftsum_index = 0;
    loop_craft_giveback_running = false;
    loop_craft_giveback_index = 0;
    loop_build_inven_slots_running = false;
    loop_build_inven_slots_index = 0;
    loop_removeitem_running = false;
    loop_removeitem_index = 0;
    loop_sort_weapon_running = false;
    loop_sort_weapon_index = 0;
    loop_add_craft_note_running = false;
    loop_add_craft_note_index = 0;
    loop_digabove_check_running = false;
    loop_digabove_check_index = 0;
    loop_build_loo_slots_running = false;
    loop_build_loo_slots_index = 0;
    loop_find_open_loot_slot_running = false;
    loop_find_open_loot_slot_index = 0;
    loop_icon_thumbdown_running = false;
    loop_icon_thumbdown_index = 0;
    loop_check_complete_chip_running = false;
    loop_check_complete_chip_index = 0;
    loop_check_return_loot_running = false;
    loop_check_return_loot_index = 0;
    loop_findinvslot_running = false;
    loop_findinvslot_index = 0;
    loop_loot_empty_inv_running = false;
    loop_loot_empty_inv_index = 0;
    loop_des_toilet_items_running = false;
    loop_des_toilet_items_index = 0;
    loop_mount_check_running = false;
    loop_mount_check_index = 0;
    loop_wallremovealert_running = false;
    loop_wallremovealert_index = 0;
    loop_npc_buy_setup_running = false;
    loop_npc_buy_setup_index = 0;
    loop_fill_container_running = false;
    loop_fill_container_index = 0;
    loop_slider_sfx_running = false;
    loop_slider_sfx_index = 0;
    loop_you_attack_running = false;
    loop_you_attack_index = 0;
    loop_make_toothshiv_running = false;
    loop_make_toothshiv_index = 0;
    loop_build_craft_slots_running = false;
    loop_build_craft_slots_index = 0;
    loop_flush_water_running = false;
    loop_flush_water_index = 0;
    loop_scan_running = false;
    loop_scan_index = 0;
    loop_letter_warden_running = false;
    loop_letter_warden_index = 0;
    loop_mish_del_stuff_running = false;
    loop_mish_del_stuff_index = 0;
    loop_collect_wall_running = false;
    loop_collect_wall_index = 0;
    loop_menu_close_running = false;
    loop_menu_close_index = 0;
    loop_build_loot_slots_running = false;
    loop_build_loot_slots_index = 0;
    loop_lolol_running = false;
    loop_lolol_index = 0;
    loop_hang_sheet_running = false;
    loop_hang_sheet_index = 0;
    loop_fill_desk_running = false;
    loop_fill_desk_index = 0;
    loop_drop_opponent_running = false;
    loop_drop_opponent_index = 0;
    loop_close_activity_box_running = false;
    loop_close_activity_box_index = 0;
    loop_itemhp_running = false;
    loop_itemhp_index = 0;
    loop_basemenuhelp_running = false;
    loop_basemenuhelp_index = 0;
    loop_desklos_running = false;
    loop_desklos_index = 0;
    loop_find_open_inv_slot_running = false;
    loop_find_open_inv_slot_index = 0;
    loop_des_container_items_running = false;
    loop_des_container_items_index = 0;
    loop_npc_tab_stats_name_running = false;
    loop_npc_tab_stats_name_index = 0;
    loop_door_shadow_running = false;
    loop_door_shadow_index = 0;
    loop_unscrew_check_running = false;
    loop_unscrew_check_index = 0;
    loop_check_rope_edge_running = false;
    loop_check_rope_edge_index = 0;
    loop_menuhelp_running = false;
    loop_menuhelp_index = 0;
    loop_load_y_running = false;
    loop_load_y_index = 0;
    loop_load_x_running = false;
    loop_load_x_index = 0;
    loop_load_map_objects_running = false;
    loop_load_map_objects_index = 0;
    loop_nearest_bed_running = false;
    loop_nearest_bed_index = 0;
    loop_build_craft_output_running = false;
    loop_build_craft_output_index = 0;
    loop_refresh_buy_list_running = false;
    loop_refresh_buy_list_index = 0;
    loop_open_door_check_running = false;
    loop_open_door_check_index = 0;
    loop_npc_talk_running = false;
    loop_npc_talk_index = 0;
    loop_looted_guard_check_running = false;
    loop_looted_guard_check_index = 0;
    loop_check_lighting_running = false;
    loop_check_lighting_index = 0;
    loop_refresh_inv_running = false;
    loop_refresh_inv_index = 0;
    loop_bedsheet_check_running = false;
    loop_bedsheet_check_index = 0;
    loop_desk_inv_findslot_running = false;
    loop_desk_inv_findslot_index = 0;
    loop_fill_loot_gear_slots_running = false;
    loop_fill_loot_gear_slots_index = 0;
    loop_door_sfx_running = false;
    loop_door_sfx_index = 0;
    loop_pickup_steps_check_running = false;
    loop_pickup_steps_check_index = 0;
    loop_menuquit_running = false;
    loop_menuquit_index = 0;
    loop_layer_up_running = false;
    loop_layer_up_index = 0;
    loop_align_char_y_running = false;
    loop_align_char_y_index = 0;
    loop_align_char_x_running = false;
    loop_align_char_x_index = 0;
    loop_climb_off_2_running = false;
    loop_climb_off_2_index = 0;
    loop_kill_speech_running = false;
    loop_kill_speech_index = 0;
    loop_tip_up_running = false;
    loop_tip_up_index = 0;
    static DynamicLoops frame_loops;
    loops = &frame_loops;
    static bool loops_initialized = false;
    if (!loops_initialized) {
        frame_loops[std::string("chair_push_off_24", 17)].set(&loop_wrapper_chair_push_off_24_11, &loop_chair_push_off_24_running, &loop_chair_push_off_24_index);
        frame_loops[std::string("chair_push_off_8", 16)].set(&loop_wrapper_chair_push_off_8_11, &loop_chair_push_off_8_running, &loop_chair_push_off_8_index);
        loops_initialized = true;
    }
    group_check_group_setup_2_4 = true;
    group_check_group_setup_2_0 = true;
    group_check_group_setup_2_1 = true;
    group_check_group_setup_2_2 = true;
    group_check_group_setup_2_3 = true;
    every_2427_6 = 0.0f;
    every_649_11 = 0.0f;
    group_code_right_clicked_lifting_desks_2_1 = false;
    group_code_left_clicked_1 = false;
    group_code_mouseovers_item_hovers_holding_shift_1 = false;
    group_check_group_code_my_stats_1_0 = true;
    every_2286_6 = 0.0f;
    group_check_group_code_my_stats_1_2 = true;
    group_check_group_code_my_stats_1_3 = true;
    group_check_group_code_my_stats_1_4 = true;
    every_2191_6 = 0.0f;
    group_code_crafting_1 = false;
    group_code_menu_1 = false;
    group_set_item_graphic_1 = false;
    group_code_input_mousedown_1 = false;
    group_check_group_code_1_0 = true;
    group_check_group_code_1_1 = true;
    restrict_1015_11 = frame_time;
    group_load_map_from_file_1 = true;
    group_code_misc_mines_1 = false;
    restrict_1009_11 = frame_time;
    restrict_1197_11 = frame_time;
    group_tooltips_1 = false;
    every_629_11 = 0.0f;
    once_condition_517_11 = false;
    group_check_group_code_tutorial_level_stuff_1_1 = true;
    group_check_group_setup_1_9 = true;
    group_code_inventory_underground_lighting_1 = false;
    group_check_group_code_tutorial_level_stuff_1_4 = true;
    group_check_group_code_tutorial_level_stuff_1_5 = true;
    group_check_group_code_my_stats_1_1 = true;
    group_check_group_setup_1_3 = true;
    group_check_group_setup_1_2 = true;
    group_check_group_setup_1_1 = true;
    group_check_group_setup_1_0 = true;
    group_check_group_setup_1_7 = true;
    group_check_group_setup_1_6 = true;
    group_check_group_setup_1_5 = true;
    group_check_group_code_menu_1_0 = true;
    group_code_input_dismount_1 = false;
    every_4607_6 = 0.0f;
    group_check_group_setup_fill_inventory_1_0 = true;
    group_code_sort_these_using_items_2_browsing_1 = false;
    group_code_my_stats_1 = false;
    every_707_11 = 0.0f;
    not_always_1227_11 = loop_count;
    group_check_group_code_misc_1_0 = true;
    group_check_group_setup_new_desk_id_code_1_0 = true;
    every_3837_6 = 0.0f;
    group_check_group_setup_setup_desks_1_0 = true;
    group_check_group_setup_1_8 = true;
    every_1375_6 = 0.0f;
    group_setup_set_walls_1 = false;
    group_code_sort_these_using_items_2_unscrewing_2_1 = false;
    group_code_sort_these_using_items_2_chipping_2_1 = false;
    group_code_input_move_keys_movement_1 = false;
    group_setup_1 = false;
    every_658_11 = 0.0f;
    group_loops_1 = false;
    every_1506_11 = 0.0f;
    every_2285_6 = 0.0f;
    group_code_sort_these_using_items_2_reading_1 = false;
    every_2190_6 = 0.0f;
    group_code_sort_these_using_items_2_cleaning_1 = false;
    group_code_right_clicked_1 = false;
    every_769_6 = 0.0f;
    group_check_group_setup_player_stats_time_1_1 = true;
    group_check_group_setup_player_stats_time_1_0 = true;
    group_code_1 = false;
    once_condition_219_11 = false;
    group_check_group_setup_new_desk_id_code_1_1 = true;
    group_setup_crafting_notes_1 = false;
    every_2188_6 = 0.0f;
    group_code_npc_profiles_npc_profile_1 = false;
    group_code_sort_these_using_items_2_cutting_2_1 = false;
    group_align_color_1 = false;
    group_code_sort_these_using_items_2_cutting_2_bars_2_1 = false;
    group_check_group_code_tutorial_level_stuff_1_0 = true;
    every_696_11 = 0.0f;
    every_2423_6 = 0.0f;
    group_check_group_code_tutorial_level_stuff_1_2 = true;
    group_check_group_code_tutorial_level_stuff_1_3 = true;
    every_3836_6 = 0.0f;
    every_2100_6 = 0.0f;
    group_code_sort_these_using_items_2_weeding_1 = false;
    group_code_sort_these_using_items_2_digging_2_1 = false;
    every_3935_6 = 0.0f;
    once_condition_272_11 = false;
    group_check_group_code_hud_1_0 = true;
    group_check_group_setup_1_4 = true;
    group_code_shadz_ground_1 = false;
    group_code_toilet_1 = false;
    group_code_sort_these_using_items_2_roof_travel_2_1 = false;
    group_check_group_code_crafting_1_0 = true;
    every_2189_6 = 0.0f;
    every_3942_6 = 0.0f;
    every_2287_6 = 0.0f;
    every_676_11 = 0.0f;
}
static void update_active_0(ObjectList ** lists, int count)
{
    ObjectList::iterator it;
    for (int i = 0; i < count; i++) {
        ObjectList & list = *lists[i];
        for (it = list.begin(); it != list.end(); ++it) {
            FrameObject * instance = it->obj;
            if (instance->flags & DESTROYING)
                continue;
            instance->update_inactive();
            if (instance->flags & INACTIVE)
                continue;
            ((Active*)instance)->update();
        }
    }
}
static void update_active_1(ObjectList ** lists, int count)
{
    ObjectList::iterator it;
    for (int i = 0; i < count; i++) {
        ObjectList & list = *lists[i];
        for (it = list.begin(); it != list.end(); ++it) {
            FrameObject * instance = it->obj;
            if (instance->flags & DESTROYING)
                continue;
            ((Active*)instance)->update();
        }
    }
}
static void update_active_2(ObjectList ** lists, int count)
{
    ObjectList::iterator it;
    for (int i = 0; i < count; i++) {
        ObjectList & list = *lists[i];
        for (it = list.begin(); it != list.end(); ++it) {
            FrameObject * instance = it->obj;
            if (instance->flags & DESTROYING)
                continue;
            instance->update_kill();
            if (instance->flags & INACTIVE)
                continue;
            ((Active*)instance)->update();
        }
    }
}
static void update_editobject_3(ObjectList ** lists, int count)
{
    ObjectList::iterator it;
    for (int i = 0; i < count; i++) {
        ObjectList & list = *lists[i];
        for (it = list.begin(); it != list.end(); ++it) {
            FrameObject * instance = it->obj;
            if (instance->flags & DESTROYING)
                continue;
            instance->update_inactive();
            if (instance->flags & INACTIVE)
                continue;
            ((EditObject*)instance)->update();
        }
    }
}
static void update_active_4(ObjectList ** lists, int count)
{
    ObjectList::iterator it;
    for (int i = 0; i < count; i++) {
        ObjectList & list = *lists[i];
        for (it = list.begin(); it != list.end(); ++it) {
            FrameObject * instance = it->obj;
            if (instance->flags & DESTROYING)
                continue;
            ((Active*)instance)->update();
            if (instance->movement)
                instance->movement->update();
        }
    }
}
static void update_textblitter_5(ObjectList ** lists, int count)
{
    ObjectList::iterator it;
    for (int i = 0; i < count; i++) {
        ObjectList & list = *lists[i];
        for (it = list.begin(); it != list.end(); ++it) {
            FrameObject * instance = it->obj;
            if (instance->flags & DESTROYING)
                continue;
            instance->update_inactive();
            if (instance->flags & INACTIVE)
                continue;
            ((TextBlitter*)instance)->update();
        }
    }
}
static void update_pathplanner_6(ObjectList ** lists, int count)
{
    ObjectList::iterator it;
    for (int i = 0; i < count; i++) {
        ObjectList & list = *lists[i];
        for (it = list.begin(); it != list.end(); ++it) {
            FrameObject * instance = it->obj;
            if (instance->flags & DESTROYING)
                continue;
            ((PathPlanner*)instance)->update();
        }
    }
}
static void update_active_7(ObjectList ** lists, int count)
{
    ObjectList::iterator it;
    for (int i = 0; i < count; i++) {
        ObjectList & list = *lists[i];
        for (it = list.begin(); it != list.end(); ++it) {
            FrameObject * instance = it->obj;
            if (instance->flags & DESTROYING)
                continue;
            instance->update_inactive();
            if (instance->flags & INACTIVE)
                continue;
            ((Active*)instance)->update();
            if (instance->movement)
                instance->movement->update();
        }
    }
}
static void update_steamobject_8(ObjectList ** lists, int count)
{
    ObjectList::iterator it;
    for (int i = 0; i < count; i++) {
        ObjectList & list = *lists[i];
        for (it = list.begin(); it != list.end(); ++it) {
            FrameObject * instance = it->obj;
            if (instance->flags & DESTROYING)
                continue;
            ((SteamObject*)instance)->update();
        }
    }
}
static void update_textblitter_9(ObjectList ** lists, int count)
{
    ObjectList::iterator it;
    for (int i = 0; i < count; i++) {
        ObjectList & list = *lists[i];
        for (it = list.begin(); it != list.end(); ++it) {
            FrameObject * instance = it->obj;
            if (instance->flags & DESTROYING)
                continue;
            ((TextBlitter*)instance)->update();
        }
    }
}
static void update_httpobject_10(ObjectList ** lists, int count)
{
    ObjectList::iterator it;
    for (int i = 0; i < count; i++) {
        ObjectList & list = *lists[i];
        for (it = list.begin(); it != list.end(); ++it) {
            FrameObject * instance = it->obj;
            if (instance->flags & DESTROYING)
                continue;
            ((HTTPObject*)instance)->update();
        }
    }
}
static void update_moveit_11(ObjectList ** lists, int count)
{
    ObjectList::iterator it;
    for (int i = 0; i < count; i++) {
        ObjectList & list = *lists[i];
        for (it = list.begin(); it != list.end(); ++it) {
            FrameObject * instance = it->obj;
            if (instance->flags & DESTROYING)
                continue;
            ((MoveIt*)instance)->update();
        }
    }
}
// Generated frame helper update_objects implements runtime logic used by this frame.
void Frames::update_objects()
{
    update_textblitter_9(update_textblitter_9_list, 3);
    update_httpobject_10(update_httpobject_10_list, 1);
    update_moveit_11(update_moveit_11_list, 1);
    update_pathplanner_6(update_pathplanner_6_list, 2);
    update_editobject_3(update_editobject_3_list, 2);
    update_textblitter_5(update_textblitter_5_list, 5);
    update_active_7(update_active_7_list, 2);
    update_active_4(update_active_4_list, 52);
    update_active_2(update_active_2_list, 4);
    update_active_0(update_active_0_list, 163);
    update_active_1(update_active_1_list, 150);
    update_steamobject_8(update_steamobject_8_list, 3);
}
Frames::Frames()
: Frame()
{
    update_textblitter_9_list[0] = &dmgagainst_253_instances;
    update_textblitter_9_list[1] = &stats_340_instances;
    update_textblitter_9_list[2] = &damageto_252_instances;
    update_httpobject_10_list[0] = &getobject_526_instances;
    update_moveit_11_list[0] = &moveit_362_instances;
    update_pathplanner_6_list[0] = &pathfindinginmates_191_instances;
    update_pathplanner_6_list[1] = &pathfindingguards_247_instances;
    update_editobject_3_list[0] = &lbname_531_instances;
    update_editobject_3_list[1] = &editbox_92_instances;
    update_textblitter_5_list[0] = &healthText_instances;
    update_textblitter_5_list[1] = &heatText_instances;
    update_textblitter_5_list[2] = &buddiesText_instances;
    update_textblitter_5_list[3] = &fatigueText_instances;
    update_textblitter_5_list[4] = &cashText_instances;
    update_active_7_list[0] = &snoozy_466_instances;
    update_active_7_list[1] = &snow_413_instances;
    update_active_4_list[0] = &guard2_484_instances;
    update_active_4_list[1] = &inmate10_289_instances;
    update_active_4_list[2] = &inmate12_644_instances;
    update_active_4_list[3] = &inmatess5_510_instances;
    update_active_4_list[4] = &inmatess7_512_instances;
    update_active_4_list[5] = &inmatedtaf2_489_instances;
    update_active_4_list[6] = &inmatess2_507_instances;
    update_active_4_list[7] = &inmate14_646_instances;
    update_active_4_list[8] = &spotlightsroof_213_instances;
    update_active_4_list[9] = &inmatedtaf1_488_instances;
    update_active_4_list[10] = &inmate8_287_instances;
    update_active_4_list[11] = &desksdlc_482_instances;
    update_active_4_list[12] = &dust_223_instances;
    update_active_4_list[13] = &inmatedtaf9_496_instances;
    update_active_4_list[14] = &inmateBase_instances;
    update_active_4_list[15] = &bullet_463_instances;
    update_active_4_list[16] = &inmatess4_509_instances;
    update_active_4_list[17] = &inmatedtaf3_490_instances;
    update_active_4_list[18] = &patroljeep_416_instances;
    update_active_4_list[19] = &inmateescteam1_478_instances;
    update_active_4_list[20] = &dtafshark_498_instances;
    update_active_4_list[21] = &placer_632_instances;
    update_active_4_list[22] = &inmate4_193_instances;
    update_active_4_list[23] = &inmatess3_508_instances;
    update_active_4_list[24] = &guard_169_instances;
    update_active_4_list[25] = &ziplinesniffer_454_instances;
    update_active_4_list[26] = &inmatedtaf8_495_instances;
    update_active_4_list[27] = &inmate7_286_instances;
    update_active_4_list[28] = &desks_305_instances;
    update_active_4_list[29] = &inmatedtaf5_492_instances;
    update_active_4_list[30] = &inmatedtaf4_491_instances;
    update_active_4_list[31] = &inmate2_190_instances;
    update_active_4_list[32] = &guardBase_instances;
    update_active_4_list[33] = &inmate9_288_instances;
    update_active_4_list[34] = &truck_751_instances;
    update_active_4_list[35] = &inmatess1_506_instances;
    update_active_4_list[36] = &desks_717_instances;
    update_active_4_list[37] = &inmateescteam3_480_instances;
    update_active_4_list[38] = &inmate3_192_instances;
    update_active_4_list[39] = &inmatedtaf6_493_instances;
    update_active_4_list[40] = &towerguard_342_instances;
    update_active_4_list[41] = &serviceNpc_instances;
    update_active_4_list[42] = &inmatedtaf7_494_instances;
    update_active_4_list[43] = &inmatess8_513_instances;
    update_active_4_list[44] = &inmateescteam2_479_instances;
    update_active_4_list[45] = &guard3_499_instances;
    update_active_4_list[46] = &inmate5_194_instances;
    update_active_4_list[47] = &truck_388_instances;
    update_active_4_list[48] = &inmate13_645_instances;
    update_active_4_list[49] = &inmatess6_511_instances;
    update_active_4_list[50] = &inmate6_201_instances;
    update_active_4_list[51] = &guard4_514_instances;
    update_active_2_list[0] = &droppedsheet_441_instances;
    update_active_2_list[1] = &options_33_instances;
    update_active_2_list[2] = &main_124_instances;
    update_active_2_list[3] = &active26_246_instances;
    update_active_0_list[0] = &settingsLanguagePrevious_instances;
    update_active_0_list[1] = &camera_237_instances;
    update_active_0_list[2] = &t17presents_91_instances;
    update_active_0_list[3] = &dialogPanel_instances;
    update_active_0_list[4] = &containerjanitor_270_instances;
    update_active_0_list[5] = &interwebs_380_instances;
    update_active_0_list[6] = &soil_173_instances;
    update_active_0_list[7] = &active_24_instances;
    update_active_0_list[8] = &edit4_591_instances;
    update_active_0_list[9] = &doorkitchen_211_instances;
    update_active_0_list[10] = &active2_86_instances;
    update_active_0_list[11] = &playerescteam_477_instances;
    update_active_0_list[12] = &torch_331_instances;
    update_active_0_list[13] = &upperlevelcheck_206_instances;
    update_active_0_list[14] = &fire_377_instances;
    update_active_0_list[15] = &playerdtaf_497_instances;
    update_active_0_list[16] = &settingsFrameRatePrevious_instances;
    update_active_0_list[17] = &undergroundGlow_instances;
    update_active_0_list[18] = &hudBackdrop_instances;
    update_active_0_list[19] = &shadow_324_instances;
    update_active_0_list[20] = &target_177_instances;
    update_active_0_list[21] = &stash_420_instances;
    update_active_0_list[22] = &dummies_374_instances;
    update_active_0_list[23] = &player0_170_instances;
    update_active_0_list[24] = &interfaceButtons_instances;
    update_active_0_list[25] = &fan_707_instances;
    update_active_0_list[26] = &punchbag3_440_instances;
    update_active_0_list[27] = &mainpic_113_instances;
    update_active_0_list[28] = &metaldetector_231_instances;
    update_active_0_list[29] = &sssobjects_502_instances;
    update_active_0_list[30] = &dirt_697_instances;
    update_active_0_list[31] = &scan_187_instances;
    update_active_0_list[32] = &fieldspeechfile_535_instances;
    update_active_0_list[33] = &joggingmat_407_instances;
    update_active_0_list[34] = &guardalert_266_instances;
    update_active_0_list[35] = &hudItem_instances;
    update_active_0_list[36] = &waypointguardgym_182_instances;
    update_active_0_list[37] = &powerupplot_353_instances;
    update_active_0_list[38] = &bonus_82_instances;
    update_active_0_list[39] = &payphone_386_instances;
    update_active_0_list[40] = &camera_202_instances;
    update_active_0_list[41] = &ziplinepostend_753_instances;
    update_active_0_list[42] = &letsgo_100_instances;
    update_active_0_list[43] = &mix_640_instances;
    update_active_0_list[44] = &checkpoint_422_instances;
    update_active_0_list[45] = &doorlaundry_276_instances;
    update_active_0_list[46] = &sidePanel_instances;
    update_active_0_list[47] = &settingsLanguageNext_instances;
    update_active_0_list[48] = &activityPanel_instances;
    update_active_0_list[49] = &flagrus_23_instances;
    update_active_0_list[50] = &popupClouds_instances;
    update_active_0_list[51] = &eteamwalblock_483_instances;
    update_active_0_list[52] = &doorstaff_212_instances;
    update_active_0_list[53] = &icons_433_instances;
    update_active_0_list[54] = &options2_89_instances;
    update_active_0_list[55] = &markervendor_332_instances;
    update_active_0_list[56] = &usespot2_378_instances;
    update_active_0_list[57] = &waypointinmateshower2_309_instances;
    update_active_0_list[58] = &edit2_589_instances;
    update_active_0_list[59] = &highlight_125_instances;
    update_active_0_list[60] = &destarrow_283_instances;
    update_active_0_list[61] = &dialogButton_instances;
    update_active_0_list[62] = &doortailor_403_instances;
    update_active_0_list[63] = &licenseprints_729_instances;
    update_active_0_list[64] = &start_618_instances;
    update_active_0_list[65] = &mouse_9_instances;
    update_active_0_list[66] = &speedbag_439_instances;
    update_active_0_list[67] = &towershoottrail_339_instances;
    update_active_0_list[68] = &bonus_129_instances;
    update_active_0_list[69] = &outsidewaypoints_255_instances;
    update_active_0_list[70] = &doorlibrary_272_instances;
    update_active_0_list[71] = &playerss_110_instances;
    update_active_0_list[72] = &flagfre_19_instances;
    update_active_0_list[73] = &edit1_588_instances;
    update_active_0_list[74] = &kettle_354_instances;
    update_active_0_list[75] = &doormetalshop_328_instances;
    update_active_0_list[76] = &bedlounger_405_instances;
    update_active_0_list[77] = &doorutility_259_instances;
    update_active_0_list[78] = &active6_41_instances;
    update_active_0_list[79] = &jobboard_244_instances;
    update_active_0_list[80] = &musicVolumeBar_instances;
    update_active_0_list[81] = &submitted_539_instances;
    update_active_0_list[82] = &player2_367_instances;
    update_active_0_list[83] = &tmp_448_instances;
    update_active_0_list[84] = &active4_87_instances;
    update_active_0_list[85] = &favourdel_361_instances;
    update_active_0_list[86] = &flagita_21_instances;
    update_active_0_list[87] = &inmatess0_516_instances;
    update_active_0_list[88] = &ssreindeer_504_instances;
    update_active_0_list[89] = &doorwoodshop_268_instances;
    update_active_0_list[90] = &skippingmat_435_instances;
    update_active_0_list[91] = &water_715_instances;
    update_active_0_list[92] = &pushupmat2_761_instances;
    update_active_0_list[93] = &chinupbar_430_instances;
    update_active_0_list[94] = &mapsetupobstaclemarker_323_instances;
    update_active_0_list[95] = &light_330_instances;
    update_active_0_list[96] = &edit3_590_instances;
    update_active_0_list[97] = &dreamOverlay_instances;
    update_active_0_list[98] = &tv_404_instances;
    update_active_0_list[99] = &newdlcclose_77_instances;
    update_active_0_list[100] = &player1_366_instances;
    update_active_0_list[101] = &screenTint_instances;
    update_active_0_list[102] = &cake_424_instances;
    update_active_0_list[103] = &doordeliveries_401_instances;
    update_active_0_list[104] = &doorjanitor_271_instances;
    update_active_0_list[105] = &gym3_317_instances;
    update_active_0_list[106] = &powergen_360_instances;
    update_active_0_list[107] = &activityMarker_instances;
    update_active_0_list[108] = &active9_291_instances;
    update_active_0_list[109] = &flagpol_20_instances;
    update_active_0_list[110] = &doorutilityvents_457_instances;
    update_active_0_list[111] = &player8_373_instances;
    update_active_0_list[112] = &containercanteen_691_instances;
    update_active_0_list[113] = &back_102_instances;
    update_active_0_list[114] = &flageng_17_instances;
    update_active_0_list[115] = &helpTopicCursor_instances;
    update_active_0_list[116] = &edit0_586_instances;
    update_active_0_list[117] = &dizzy_467_instances;
    update_active_0_list[118] = &hover_560_instances;
    update_active_0_list[119] = &doormailroom_400_instances;
    update_active_0_list[120] = &flagger_22_instances;
    update_active_0_list[121] = &visitationinmate_382_instances;
    update_active_0_list[122] = &punchbag_436_instances;
    update_active_0_list[123] = &kitchensink_236_instances;
    update_active_0_list[124] = &ladders_336_instances;
    update_active_0_list[125] = &shower_183_instances;
    update_active_0_list[126] = &edit6_593_instances;
    update_active_0_list[127] = &edit5_592_instances;
    update_active_0_list[128] = &doormaster_387_instances;
    update_active_0_list[129] = &dooroutside_262_instances;
    update_active_0_list[130] = &ventDarkness_instances;
    update_active_0_list[131] = &interwebs_749_instances;
    update_active_0_list[132] = &player4_369_instances;
    update_active_0_list[133] = &activityProgress_instances;
    update_active_0_list[134] = &edit_98_instances;
    update_active_0_list[135] = &doorgardening_402_instances;
    update_active_0_list[136] = &gym4_318_instances;
    update_active_0_list[137] = &loadingspin_149_instances;
    update_active_0_list[138] = &punchbag2_438_instances;
    update_active_0_list[139] = &containermedical_269_instances;
    update_active_0_list[140] = &hiding_379_instances;
    update_active_0_list[141] = &guardpostshower_254_instances;
    update_active_0_list[142] = &flagspa_18_instances;
    update_active_0_list[143] = &shady_348_instances;
    update_active_0_list[144] = &doornokey_518_instances;
    update_active_0_list[145] = &settingsFrameRateNext_instances;
    update_active_0_list[146] = &player3_368_instances;
    update_active_0_list[147] = &doorcell_174_instances;
    update_active_0_list[148] = &grapplingrope_345_instances;
    update_active_0_list[149] = &download2_148_instances;
    update_active_0_list[150] = &doornormal_465_instances;
    update_active_0_list[151] = &visitationvisitor_381_instances;
    update_active_0_list[152] = &phone_235_instances;
    update_active_0_list[153] = &dooroutfit_501_instances;
    update_active_0_list[154] = &reset_594_instances;
    update_active_0_list[155] = &containercanteen_230_instances;
    update_active_0_list[156] = &custom2_135_instances;
    update_active_0_list[157] = &waypointcanteenguard_181_instances;
    update_active_0_list[158] = &pushupmat_408_instances;
    update_active_0_list[159] = &player5_370_instances;
    update_active_0_list[160] = &itemSlot_instances;
    update_active_0_list[161] = &keysdone_581_instances;
    update_active_0_list[162] = &bedsolitary_344_instances;
    update_active_1_list[0] = &bullet2_464_instances;
    update_active_1_list[1] = &outfitguarddtaf_485_instances;
    update_active_1_list[2] = &containertailorout_395_instances;
    update_active_1_list[3] = &player7_372_instances;
    update_active_1_list[4] = &waypointinmate2_311_instances;
    update_active_1_list[5] = &waypointinmaterollcall2_310_instances;
    update_active_1_list[6] = &settingsSlider_instances;
    update_active_1_list[7] = &outfitinmate_249_instances;
    update_active_1_list[8] = &zipend_390_instances;
    update_active_1_list[9] = &dtafvillainchair_500_instances;
    update_active_1_list[10] = &inmate11_290_instances;
    update_active_1_list[11] = &erase_60_instances;
    update_active_1_list[12] = &containerdeliveries2_757_instances;
    update_active_1_list[13] = &minimapwall_410_instances;
    update_active_1_list[14] = &metalshop_326_instances;
    update_active_1_list[15] = &bedplayer_338_instances;
    update_active_1_list[16] = &npcspawn_384_instances;
    update_active_1_list[17] = &slot3_57_instances;
    update_active_1_list[18] = &npcdetectorbottom_300_instances;
    update_active_1_list[19] = &dtafobjects_487_instances;
    update_active_1_list[20] = &canteenserving_277_instances;
    update_active_1_list[21] = &patroljeepwpleft_418_instances;
    update_active_1_list[22] = &containerdeliveries_397_instances;
    update_active_1_list[23] = &attacklooptarget_297_instances;
    update_active_1_list[24] = &patroljeepwpdown_417_instances;
    update_active_1_list[25] = &library_233_instances;
    update_active_1_list[26] = &playercollision_771_instances;
    update_active_1_list[27] = &containerdeliveries_756_instances;
    update_active_1_list[28] = &outfitpow_376_instances;
    update_active_1_list[29] = &toilet2_307_instances;
    update_active_1_list[30] = &npcdetectorright_302_instances;
    update_active_1_list[31] = &outfitguardss_515_instances;
    update_active_1_list[32] = &screenFade_instances;
    update_active_1_list[33] = &slot2_56_instances;
    update_active_1_list[34] = &player6_371_instances;
    update_active_1_list[35] = &zipline_431_instances;
    update_active_1_list[36] = &washing2_313_instances;
    update_active_1_list[37] = &inmate_175_instances;
    update_active_1_list[38] = &lookguardflag60_442_instances;
    update_active_1_list[39] = &canteenchair_312_instances;
    update_active_1_list[40] = &containerbookchest_273_instances;
    update_active_1_list[41] = &outfitguard_248_instances;
    update_active_1_list[42] = &waypointrollcall2_189_instances;
    update_active_1_list[43] = &tutarrow2_773_instances;
    update_active_1_list[44] = &player0_673_instances;
    update_active_1_list[45] = &waypointtruckstart_752_instances;
    update_active_1_list[46] = &loadingCurtain_instances;
    update_active_1_list[47] = &cclsleigh_519_instances;
    update_active_1_list[48] = &cursor_178_instances;
    update_active_1_list[49] = &lockdownlook_365_instances;
    update_active_1_list[50] = &guardscan_219_instances;
    update_active_1_list[51] = &containerdeliveries2_398_instances;
    update_active_1_list[52] = &containertailorin_396_instances;
    update_active_1_list[53] = &alcaboat_459_instances;
    update_active_1_list[54] = &player2_739_instances;
    update_active_1_list[55] = &outfitoveralls_375_instances;
    update_active_1_list[56] = &bedmedical_234_instances;
    update_active_1_list[57] = &active9_88_instances;
    update_active_1_list[58] = &tutorialArrow_instances;
    update_active_1_list[59] = &table2_308_instances;
    update_active_1_list[60] = &shady_734_instances;
    update_active_1_list[61] = &usespot_208_instances;
    update_active_1_list[62] = &outfitinmate4_649_instances;
    update_active_1_list[63] = &active3_63_instances;
    update_active_1_list[64] = &workshoplink_139_instances;
    update_active_1_list[65] = &fx_185_instances;
    update_active_1_list[66] = &slot1_55_instances;
    update_active_1_list[67] = &usespot3_428_instances;
    update_active_1_list[68] = &eteamtank_474_instances;
    update_active_1_list[69] = &waypointcanteenguard3_221_instances;
    update_active_1_list[70] = &metalshop2_327_instances;
    update_active_1_list[71] = &doorcheck_364_instances;
    update_active_1_list[72] = &canteenserving_705_instances;
    update_active_1_list[73] = &soundVolumeBar_instances;
    update_active_1_list[74] = &waypointtowerent_341_instances;
    update_active_1_list[75] = &patroljeepwpright_415_instances;
    update_active_1_list[76] = &containerlaundrydirty_274_instances;
    update_active_1_list[77] = &waypointguard2_315_instances;
    update_active_1_list[78] = &active_44_instances;
    update_active_1_list[79] = &player4_741_instances;
    update_active_1_list[80] = &lookinmateflag60_394_instances;
    update_active_1_list[81] = &outfitinmateescteam_481_instances;
    update_active_1_list[82] = &savecheckground_351_instances;
    update_active_1_list[83] = &outfitguard2_648_instances;
    update_active_1_list[84] = &tutguardleft_769_instances;
    update_active_1_list[85] = &active3_284_instances;
    update_active_1_list[86] = &items_184_instances;
    update_active_1_list[87] = &slidersounds_610_instances;
    update_active_1_list[88] = &fan_281_instances;
    update_active_1_list[89] = &unmountcheck_197_instances;
    update_active_1_list[90] = &menuCloseButton_instances;
    update_active_1_list[91] = &outfitinmatebond_486_instances;
    update_active_1_list[92] = &shadoverride_460_instances;
    update_active_1_list[93] = &waypointtruckpark_391_instances;
    update_active_1_list[94] = &player3_740_instances;
    update_active_1_list[95] = &bedguard_337_instances;
    update_active_1_list[96] = &dighole_207_instances;
    update_active_1_list[97] = &outfitguard3_650_instances;
    update_active_1_list[98] = &active2_105_instances;
    update_active_1_list[99] = &tutguardright_770_instances;
    update_active_1_list[100] = &conscan_260_instances;
    update_active_1_list[101] = &inmateBed_instances;
    update_active_1_list[102] = &shadow2_347_instances;
    update_active_1_list[103] = &invisiblock_517_instances;
    update_active_1_list[104] = &custommaplistbg_137_instances;
    update_active_1_list[105] = &tempplant_426_instances;
    update_active_1_list[106] = &ventCover_instances;
    update_active_1_list[107] = &dirt_242_instances;
    update_active_1_list[108] = &weeds_462_instances;
    update_active_1_list[109] = &library2_316_instances;
    update_active_1_list[110] = &player5_742_instances;
    update_active_1_list[111] = &outfitinmatess_503_instances;
    update_active_1_list[112] = &active10_293_instances;
    update_active_1_list[113] = &outfitinmate3_647_instances;
    update_active_1_list[114] = &containertimber_267_instances;
    update_active_1_list[115] = &containerkitchen_229_instances;
    update_active_1_list[116] = &water_303_instances;
    update_active_1_list[117] = &licenseprints_329_instances;
    update_active_1_list[118] = &checkpointguard_423_instances;
    update_active_1_list[119] = &los_198_instances;
    update_active_1_list[120] = &playerBase_instances;
    update_active_1_list[121] = &slidermusic_572_instances;
    update_active_1_list[122] = &outfitinmate2_639_instances;
    update_active_1_list[123] = &brace_412_instances;
    update_active_1_list[124] = &jeepscan_458_instances;
    update_active_1_list[125] = &zipstart_389_instances;
    update_active_1_list[126] = &player1_738_instances;
    update_active_1_list[127] = &outfitinmatess2_669_instances;
    update_active_1_list[128] = &containergardening_409_instances;
    update_active_1_list[129] = &containertimber2_325_instances;
    update_active_1_list[130] = &containermail_399_instances;
    update_active_1_list[131] = &chaseob_258_instances;
    update_active_1_list[132] = &npcdetectortop_299_instances;
    update_active_1_list[133] = &patroljeepwpup_419_instances;
    update_active_1_list[134] = &sheetsposters_294_instances;
    update_active_1_list[135] = &editor_48_instances;
    update_active_1_list[136] = &player8_745_instances;
    update_active_1_list[137] = &mine_414_instances;
    update_active_1_list[138] = &oven2_314_instances;
    update_active_1_list[139] = &shadow3_355_instances;
    update_active_1_list[140] = &outfitguardescteam_476_instances;
    update_active_1_list[141] = &back_61_instances;
    update_active_1_list[142] = &overallsoutfit_434_instances;
    update_active_1_list[143] = &eteamtank2_475_instances;
    update_active_1_list[144] = &table2_720_instances;
    update_active_1_list[145] = &staffjoboffice_385_instances;
    update_active_1_list[146] = &npcdetectorleft_301_instances;
    update_active_1_list[147] = &medicspot_421_instances;
    update_active_1_list[148] = &containerlaundryclean_275_instances;
    update_active_1_list[149] = &active7_50_instances;
    update_steamobject_8_list[0] = &steamworks_79_instances;
    update_steamobject_8_list[1] = &steamworks2_15_instances;
    update_steamobject_8_list[2] = &steamworks2_469_instances;
}
// Generated frame helper set_index implements runtime logic used by this frame.
void Frames::set_index(int index)
{
    static Frame1 frame1;
    static Frame2 frame2;
    static Frame3 frame3;
    static Frame4 frame4;
    static Frame5 frame5;
    static Frame6 frame6;
    static Frame7 frame7;
    static Frame8 frame8;
    static Frame9 frame9;
    static Frame10 frame10;
    static Frame11 frame11;
    static Frame12 frame12;
    switch (index) {
        case 0:
            data = &frame1;
            break;
        case 1:
            data = &frame2;
            break;
        case 2:
            data = &frame3;
            break;
        case 3:
            data = &frame4;
            break;
        case 4:
            data = &frame5;
            break;
        case 5:
            data = &frame6;
            break;
        case 6:
            data = &frame7;
            break;
        case 7:
            data = &frame8;
            break;
        case 8:
            data = &frame9;
            break;
        case 9:
            data = &frame10;
            break;
        case 10:
            data = &frame11;
            break;
        case 11:
            data = &frame12;
            break;
        default:
            data = NULL;
            break;
    }
    data->frame = this;
}
