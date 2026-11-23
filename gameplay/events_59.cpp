#include "vitaframetime.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::on_frame_7_start_events()
{
    event_func_4945();
    event_func_4946();
    event_func_4947();
    event_func_4948();
    event_func_4949();
    event_func_4950();
    event_func_4951();
    event_func_4952();
    event_func_4953();
    event_func_4954();
    event_func_4955();
    event_func_4956();
    event_func_4957();
    event_func_4958();
    event_func_4959();
    event_func_4960();
    event_func_4961();
}
void Frames::on_frame_7_init()
{
    index = 6;
    width = 1500;
    height = 1500;
    virtual_width = 1500;
    virtual_height = 1500;
    background_color = Color(0, 0, 0);
    timer_base = 40;
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
    static ObjectList* qualifier_24_instances[] = {&cashText_instances, &healthText_instances, &heatText_instances, &fatigueText_instances, &buddiesText_instances, NULL};
    qualifier_24.set(5, &qualifier_24_instances[0]);
    static ObjectList* qualifier_27_instances[] = {&containerdeliveries_397_instances, &containerdeliveries2_398_instances, NULL};
    qualifier_27.set(2, &qualifier_27_instances[0]);
    static ObjectList* qualifier_26_instances[] = {&dighole_207_instances, &brace_412_instances, NULL};
    qualifier_26.set(2, &qualifier_26_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shadow_324_instances, &shadow2_347_instances, &shadow3_355_instances, &shadoverride_460_instances, NULL};
    qualifier_21.set(4, &qualifier_21_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&desks_305_instances, NULL};
    qualifier_20.set(1, &qualifier_20_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&markervendor_332_instances, NULL};
    qualifier_23.set(1, &qualifier_23_instances[0]);
    static ObjectList* qualifier_22_instances[] = {&containermedical_269_instances, &canteenserving_277_instances, &table2_308_instances, &interwebs_380_instances, NULL};
    qualifier_22.set(4, &qualifier_22_instances[0]);
    static ObjectList* qualifier_28_instances[] = {&containercanteen_230_instances, &canteenserving_277_instances, &table2_308_instances, NULL};
    qualifier_28.set(3, &qualifier_28_instances[0]);
    static ObjectList* qualifier_8_instances[] = {&doorcell_174_instances, &doorkitchen_211_instances, &doorstaff_212_instances, &doorutility_259_instances, &dooroutside_262_instances, &doorwoodshop_268_instances, &doorjanitor_271_instances, &doorlibrary_272_instances, &doorlaundry_276_instances, &doormetalshop_328_instances, &doormaster_387_instances, &doormailroom_400_instances, &doordeliveries_401_instances, &doorgardening_402_instances, &doortailor_403_instances, &doorutilityvents_457_instances, &doornormal_465_instances, &dooroutfit_501_instances, &doornokey_518_instances, NULL};
    qualifier_8.set(19, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&gym3_317_instances, &gym4_318_instances, &joggingmat_407_instances, &pushupmat_408_instances, &chinupbar_430_instances, &skippingmat_435_instances, &punchbag_436_instances, &speedbag_439_instances, NULL};
    qualifier_9.set(8, &qualifier_9_instances[0]);
    static ObjectList* qualifier_2_instances[] = {&player0_170_instances, &player1_366_instances, &player2_367_instances, &player3_368_instances, &player4_369_instances, &player5_370_instances, &player6_371_instances, &player7_372_instances, &player8_373_instances, &playerescteam_477_instances, &playerdtaf_497_instances, &playerss_110_instances, NULL};
    qualifier_2.set(12, &qualifier_2_instances[0]);
    static ObjectList* qualifier_3_instances[] = {&guard_169_instances, &player0_170_instances, &inmate_175_instances, &inmate2_190_instances, &inmate3_192_instances, &inmate4_193_instances, &inmate7_286_instances, &inmate8_287_instances, &inmate9_288_instances, &inmate10_289_instances, &inmate11_290_instances, &player1_366_instances, &player2_367_instances, &player3_368_instances, &player4_369_instances, &player5_370_instances, &player6_371_instances, &player7_372_instances, &player8_373_instances, &playerescteam_477_instances, &inmateescteam1_478_instances, &inmateescteam2_479_instances, &inmateescteam3_480_instances, &guard2_484_instances, &inmatedtaf1_488_instances, &inmatedtaf2_489_instances, &inmatedtaf3_490_instances, &inmatedtaf4_491_instances, &inmatedtaf5_492_instances, &inmatedtaf6_493_instances, &inmatedtaf7_494_instances, &inmatedtaf8_495_instances, &inmatedtaf9_496_instances, &playerdtaf_497_instances, &guard3_499_instances, &playerss_110_instances, &inmatess1_506_instances, &inmatess2_507_instances, &inmatess3_508_instances, &inmatess4_509_instances, &inmatess5_510_instances, &inmatess6_511_instances, &inmatess7_512_instances, &inmatess8_513_instances, &guard4_514_instances, &inmatess0_516_instances, NULL};
    qualifier_3.set(46, &qualifier_3_instances[0]);
    static ObjectList* qualifier_1_instances[] = {&bedmedical_234_instances, &canteenchair_312_instances, &gym3_317_instances, &gym4_318_instances, &bedplayer_338_instances, &bedsolitary_344_instances, &hiding_379_instances, &visitationinmate_382_instances, &bedlounger_405_instances, &joggingmat_407_instances, &pushupmat_408_instances, &chinupbar_430_instances, &skippingmat_435_instances, &punchbag_436_instances, &speedbag_439_instances, &dtafvillainchair_500_instances, NULL};
    qualifier_1.set(16, &qualifier_1_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&bedmedical_234_instances, &inmateBed_instances, &bedguard_337_instances, &bedplayer_338_instances, &bedsolitary_344_instances, &bedlounger_405_instances, NULL};
    qualifier_6.set(6, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&containercanteen_230_instances, &containermedical_269_instances, &containerjanitor_270_instances, &desks_305_instances, &washing2_313_instances, &oven2_314_instances, &containergardening_409_instances, &desksdlc_482_instances, NULL};
    qualifier_7.set(8, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&containerkitchen_229_instances, &library_233_instances, &phone_235_instances, &kitchensink_236_instances, &containertimber_267_instances, &containerbookchest_273_instances, &containerlaundrydirty_274_instances, &containerlaundryclean_275_instances, &washing2_313_instances, &oven2_314_instances, &library2_316_instances, &containertimber2_325_instances, &metalshop_326_instances, &metalshop2_327_instances, &licenseprints_329_instances, &powergen_360_instances, &interwebs_380_instances, &payphone_386_instances, &truck_388_instances, &containertailorout_395_instances, &containertailorin_396_instances, &containerdeliveries_397_instances, &containerdeliveries2_398_instances, &containermail_399_instances, NULL};
    qualifier_4.set(24, &qualifier_4_instances[0]);
    static ObjectList* qualifier_5_instances[] = {&playerBase_instances, &inmateBase_instances, &guardBase_instances, NULL};
    qualifier_5.set(3, &qualifier_5_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&containerkitchen_229_instances, &containercanteen_230_instances, &containertimber_267_instances, &containermedical_269_instances, &containerjanitor_270_instances, &containerbookchest_273_instances, &containerlaundrydirty_274_instances, &containerlaundryclean_275_instances, &canteenserving_277_instances, &active9_291_instances, &desks_305_instances, &table2_308_instances, &containertimber2_325_instances, &metalshop_326_instances, &metalshop2_327_instances, &kettle_354_instances, &containertailorout_395_instances, &containertailorin_396_instances, &containergardening_409_instances, &desksdlc_482_instances, NULL};
    qualifier_18.set(20, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&library_233_instances, &phone_235_instances, &kitchensink_236_instances, &camera_237_instances, &jobboard_244_instances, &active10_293_instances, &sheetsposters_294_instances, &toilet2_307_instances, &washing2_313_instances, &oven2_314_instances, &library2_316_instances, &licenseprints_329_instances, &bedsolitary_344_instances, &powergen_360_instances, &dummies_374_instances, &hiding_379_instances, &interwebs_380_instances, &payphone_386_instances, &truck_388_instances, &containerdeliveries_397_instances, &containerdeliveries2_398_instances, &containermail_399_instances, &tv_404_instances, &patroljeep_416_instances, &stash_420_instances, &checkpoint_422_instances, &cake_424_instances, &activityMarker_instances, &eteamtank_474_instances, &eteamwalblock_483_instances, &sssobjects_502_instances, &cclsleigh_519_instances, NULL};
    qualifier_19.set(32, &qualifier_19_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&inmateBase_instances, &guardBase_instances, NULL};
    qualifier_14.set(2, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&playerBase_instances, &inmateBase_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&outfitguard_248_instances, &outfitinmate_249_instances, &outfitoveralls_375_instances, &outfitpow_376_instances, &overallsoutfit_434_instances, &outfitguardescteam_476_instances, &outfitinmateescteam_481_instances, &outfitguarddtaf_485_instances, &outfitinmatebond_486_instances, &outfitinmatess_503_instances, &outfitguardss_515_instances, NULL};
    qualifier_16.set(11, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&containercanteen_230_instances, &containermedical_269_instances, &containerjanitor_270_instances, &containergardening_409_instances, &desksdlc_482_instances, NULL};
    qualifier_17.set(5, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&dighole_207_instances, NULL};
    qualifier_10.set(1, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&dialogBodyText_instances, &dchar_214_instances, &mission_256_instances, &dialogue3_264_instances, &debug_295_instances, &dialogue4_352_instances, &noticetext_363_instances, &profilestats_432_instances, &buttontext_445_instances, &popupCloudText_instances, &buttontext3_449_instances, NULL};
    qualifier_11.set(11, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&inmate_175_instances, &inmate2_190_instances, &inmate3_192_instances, &inmate4_193_instances, &inmate7_286_instances, &inmate8_287_instances, &inmate9_288_instances, &inmate10_289_instances, &inmate11_290_instances, &inmateescteam1_478_instances, &inmateescteam2_479_instances, &inmateescteam3_480_instances, &inmatedtaf1_488_instances, &inmatedtaf2_489_instances, &inmatedtaf3_490_instances, &inmatedtaf4_491_instances, &inmatedtaf5_492_instances, &inmatedtaf6_493_instances, &inmatedtaf7_494_instances, &inmatedtaf8_495_instances, &inmatedtaf9_496_instances, &inmatess1_506_instances, &inmatess2_507_instances, &inmatess3_508_instances, &inmatess4_509_instances, &inmatess5_510_instances, &inmatess6_511_instances, &inmatess7_512_instances, &inmatess8_513_instances, &inmatess0_516_instances, NULL};
    qualifier_12.set(30, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&guard_169_instances, &guard2_484_instances, &guard3_499_instances, &guard4_514_instances, NULL};
    qualifier_13.set(4, &qualifier_13_instances[0]);
    add_background_object(create_soilbackground_443(0, 0), 0);
    add_background_object(create_quickbackdrop5_209(1232, 1968), 0);
    add_background_object(create_floorlayer_444(0, 0), 1);
    add_object(create_serviceNpc(-88, 136), 1);
    add_object(create_outfitpow_376(-56, 40), 1);
    add_object(create_cursor_178(192, -160), 1);
    add_object(create_gameVariables(48, -176), 1);
    add_object(create_scan_187(0, 0), 1);
    add_object(create_pathfindinginmates_191(48, -208), 1);
    add_object(create_pathfindingguards_247(80, -208), 1);
    add_object(create_playerBase(-8, 305), 1);
    add_object(create_advanceddirectionobject_171(-16, -176), 1);
    add_object(create_los_198(-128, 80), 1);
    add_object(create_ignorenotes_199(-496, 448), 1);
    add_object(create_camera_202(408, 136), 1);
    add_object(create_upperlevelcheck_206(-16, -128), 1);
    add_object(create_dighole_207(-40, -136), 1);
    add_object(create_items_184(88, -56), 1);
    add_object(create_guardscan_219(-186, 278), 1);
    add_object(create_conscan_260(-186, 118), 1);
    add_object(create_chaseob_258(-8, -40), 1);
    add_object(create_attacklooptarget_297(-8, -24), 1);
    add_object(create_npcdetectortop_299(360, -119), 1);
    add_object(create_npcdetectorbottom_300(296, -137), 1);
    add_object(create_npcdetectorleft_301(281, -152), 1);
    add_object(create_npcdetectorright_302(311, -136), 1);
    add_object(create_active_304(-144, -80), 1);
    add_object(create_hiding_379(-304, -80), 1);
    add_object(create_activepicture_319(-208, -48), 1);
    add_object(create_mapload_322(-448, 80), 1);
    add_object(create_saving_350(-416, 80), 1);
    add_object(create_globals_127(-416, 112), 1);
    add_object(create_filesave_473(-448, 160), 1);
    add_object(create_doorcheck_364(-414, -30), 1);
    add_object(create_lookinmateflag60_394(-88, 312), 1);
    add_object(create_lookguardflag60_442(-88, 360), 1);
    add_object(create_active2_411(448, -176), 1);
    add_object(create_tempplant_426(-528, -304), 1);
    add_object(create_listinmates_217(288, -96), 1);
    add_object(create_digarray_228(80, -176), 1);
    add_object(create_wallsarray_232(112, -176), 1);
    add_object(create_fencearray_265(144, -176), 1);
    add_object(create_tmparray_461(144, -144), 1);
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
    add_object(create_screenTint(-64, -192), 5);
    add_object(create_sidePanel(0, 17), 5);
    add_object(create_dialogPanel(154, 107), 5);
    add_object(create_lessonTimerText(4, 226), 5);
    add_object(create_target_177(-40, -104), 5);
    add_object(create_mouse_196(-16, -112), 5);
    add_object(create_dchar2_225(48, -96), 5);
    add_object(create_substringreplace_27(96, -144), 5);
    add_object(create_counter2_257(-96, 192), 5);
    add_object(create_stringtokenizer_81(144, -208), 5);
    add_object(create_ventTileRow(304, -208), 5);
    add_object(create_undergroundTileRow(304, -176), 5);
    add_object(create_roofTileRow(336, -208), 5);
    add_object(create_stringtokenizer2_292(112, -208), 5);
    add_object(create_cashText(2, 0), 5);
    add_object(create_healthText(2, 12), 5);
    add_object(create_heatText(2, 24), 5);
    add_object(create_fatigueText(2, 36), 5);
    add_object(create_itemSlot(-38, -38), 5);
    add_object(create_activityProgress(213, -87), 5);
    add_object(create_hudToolbar(297, 148), 5);
    add_object(create_loadingCurtain(-32, 48), 5);
    add_object(create_destarrow_283(344, 20), 5);
    add_object(create_active3_284(202, -118), 5);
    add_object(create_activesystembox_450(-544, 240), 5);
    add_object(create_steamworks2_469(-368, -352), 5);
    add_object(create_missions_298(48, 256), 5);
    add_object(create_craftingpossibles_349(-64, 80), 5);
    add_object(create_warden_392(-560, 80), 5);
    add_object(create_listguards_218(384, -96), 5);
    add_object(create_data_163(-544, 368), 6);
    add_object(create_items_162(-544, 400), 6);
    add_object(create_speech_164(-544, 432), 6);
    add_object(create_itemData(-16, -240), 6);
    add_object(create_savemapname_471(-16, -208), 6);
    add_object(create_newmapini_468(16, -208), 6);
    add_object(create_translationData(-352, 240), 6);
    add_object(create_inispeech_453(-352, 272), 6);
    loop_sneaking2_running = false;
    loop_sneaking2_index = 0;
    loop_close_craft_running = false;
    loop_close_craft_index = 0;
    loop_flip_toilet_findslot_running = false;
    loop_flip_toilet_findslot_index = 0;
    loop_custom_desk_items_running = false;
    loop_custom_desk_items_index = 0;
    loop_check_npc_laundry_space_running = false;
    loop_check_npc_laundry_space_index = 0;
    loop_letter_takeover_running = false;
    loop_letter_takeover_index = 0;
    loop_load_dug_soil_running = false;
    loop_load_dug_soil_index = 0;
    loop_assign_cant_chairs_running = false;
    loop_assign_cant_chairs_index = 0;
    loop_gym_align_guards_running = false;
    loop_gym_align_guards_index = 0;
    loop_canc_mission_checkinv_running = false;
    loop_canc_mission_checkinv_index = 0;
    loop_buy_npc_running = false;
    loop_buy_npc_index = 0;
    loop_create_mission_beat_running = false;
    loop_create_mission_beat_index = 0;
    loop_create_stat_bars_running = false;
    loop_create_stat_bars_index = 0;
    loop_check_skips_spd_running = false;
    loop_check_skips_spd_index = 0;
    loop_craft_score_running = false;
    loop_craft_score_index = 0;
    loop_build_container_running = false;
    loop_build_container_index = 0;
    loop_talk_loop_running = false;
    loop_talk_loop_index = 0;
    loop_patrol_target_running = false;
    loop_patrol_target_index = 0;
    loop_enter_tower_running = false;
    loop_enter_tower_index = 0;
    loop_found_unarmed_running = false;
    loop_found_unarmed_index = 0;
    loop_gym_push_off_running = false;
    loop_gym_push_off_index = 0;
    loop_remove_targets_running = false;
    loop_remove_targets_index = 0;
    loop_letter_bc_running = false;
    loop_letter_bc_index = 0;
    loop_you_ko_running = false;
    loop_you_ko_index = 0;
    loop_load_floor_items_running = false;
    loop_load_floor_items_index = 0;
    loop_policing_desk_running = false;
    loop_policing_desk_index = 0;
    loop_mine_explode_dust_running = false;
    loop_mine_explode_dust_index = 0;
    loop_del_from_vendor_running = false;
    loop_del_from_vendor_index = 0;
    loop_sleep_guards_running = false;
    loop_sleep_guards_index = 0;
    loop_tower_guard_break_running = false;
    loop_tower_guard_break_index = 0;
    loop_tailor_item_running = false;
    loop_tailor_item_index = 0;
    loop_flip_craft_findslot_running = false;
    loop_flip_craft_findslot_index = 0;
    loop_stats_dug_running = false;
    loop_stats_dug_index = 0;
    loop_loot_close_running = false;
    loop_loot_close_index = 0;
    loop_npc_find_deskslot_running = false;
    loop_npc_find_deskslot_index = 0;
    loop_free_banter_running = false;
    loop_free_banter_index = 0;
    loop_guards_free_period_running = false;
    loop_guards_free_period_index = 0;
    loop_check_jobquota_running = false;
    loop_check_jobquota_index = 0;
    loop_strip_illegal_items_running = false;
    loop_strip_illegal_items_index = 0;
    loop_new_rope_running = false;
    loop_new_rope_index = 0;
    loop_click_hint_running = false;
    loop_click_hint_index = 0;
    loop_setup_dtaf_running = false;
    loop_setup_dtaf_index = 0;
    loop_npc_kitchen_space_running = false;
    loop_npc_kitchen_space_index = 0;
    loop_npc_prof_oor_running = false;
    loop_npc_prof_oor_index = 0;
    loop_inv_add_ifhpok_running = false;
    loop_inv_add_ifhpok_index = 0;
    loop_policing_heat_running = false;
    loop_policing_heat_index = 0;
    loop_tailor_do_running = false;
    loop_tailor_do_index = 0;
    loop_check_give_mission_running = false;
    loop_check_give_mission_index = 0;
    loop_follow_loop_running = false;
    loop_follow_loop_index = 0;
    loop_shower_align_running = false;
    loop_shower_align_index = 0;
    loop_dig_check_running = false;
    loop_dig_check_index = 0;
    loop_check_oob_running = false;
    loop_check_oob_index = 0;
    loop_slider_music_running = false;
    loop_slider_music_index = 0;
    loop_vis_speak_running = false;
    loop_vis_speak_index = 0;
    loop_create_right_zip_running = false;
    loop_create_right_zip_index = 0;
    loop_laid_him_out_running = false;
    loop_laid_him_out_index = 0;
    loop_lockdown_guards_running = false;
    loop_lockdown_guards_index = 0;
    loop_save_slat_hp_running = false;
    loop_save_slat_hp_index = 0;
    loop_inv_add_running = false;
    loop_inv_add_index = 0;
    loop_tut_hp_running = false;
    loop_tut_hp_index = 0;
    loop_move_deer_running = false;
    loop_move_deer_index = 0;
    loop_fill_fence_floor2_running = false;
    loop_fill_fence_floor2_index = 0;
    loop_climb_off_running = false;
    loop_climb_off_index = 0;
    loop_npc_speedbag_go_running = false;
    loop_npc_speedbag_go_index = 0;
    loop_sleeping_inmates_running = false;
    loop_sleeping_inmates_index = 0;
    loop_rope_go_running = false;
    loop_rope_go_index = 0;
    loop_read_check_running = false;
    loop_read_check_index = 0;
    loop_pavatar_running = false;
    loop_pavatar_index = 0;
    loop_medibox_check_running = false;
    loop_medibox_check_index = 0;
    loop_sleep_inmates_running = false;
    loop_sleep_inmates_index = 0;
    loop_craftoutput2inv_running = false;
    loop_craftoutput2inv_index = 0;
    loop_npc_mailman_space_running = false;
    loop_npc_mailman_space_index = 0;
    loop_check_laundry_space_running = false;
    loop_check_laundry_space_index = 0;
    loop_ww_guard_equip_running = false;
    loop_ww_guard_equip_index = 0;
    loop_numkey_inv_running = false;
    loop_numkey_inv_index = 0;
    loop_fill_fence_floor5_running = false;
    loop_fill_fence_floor5_index = 0;
    loop_cl_profile_running = false;
    loop_cl_profile_index = 0;
    loop_follow_loop_targ_range_running = false;
    loop_follow_loop_targ_range_index = 0;
    loop_createload_inmates_running = false;
    loop_createload_inmates_index = 0;
    loop_vending_item_running = false;
    loop_vending_item_index = 0;
    loop_guard_tab_stats_running = false;
    loop_guard_tab_stats_index = 0;
    loop_timeout_missions_running = false;
    loop_timeout_missions_index = 0;
    loop_make_toothshiv_running = false;
    loop_make_toothshiv_index = 0;
    loop_save_desks_running = false;
    loop_save_desks_index = 0;
    loop_create_snow_running = false;
    loop_create_snow_index = 0;
    loop_phones_close_running = false;
    loop_phones_close_index = 0;
    loop_find_open_desk_slot_running = false;
    loop_find_open_desk_slot_index = 0;
    loop_unscrew_slats_check_running = false;
    loop_unscrew_slats_check_index = 0;
    loop_empty_bogs_running = false;
    loop_empty_bogs_index = 0;
    loop_tree_footer_running = false;
    loop_tree_footer_index = 0;
    loop_find_open_container_slot_running = false;
    loop_find_open_container_slot_index = 0;
    loop_npc_tailorshop_space_done_running = false;
    loop_npc_tailorshop_space_done_index = 0;
    loop_createload_guards_running = false;
    loop_createload_guards_index = 0;
    loop_craftnotes_des_icons_running = false;
    loop_craftnotes_des_icons_index = 0;
    loop_shower_slot_go_running = false;
    loop_shower_slot_go_index = 0;
    loop_give_npc_running = false;
    loop_give_npc_index = 0;
    loop_get_img_running = false;
    loop_get_img_index = 0;
    loop_npc_findslot_running = false;
    loop_npc_findslot_index = 0;
    loop_cam_dis_running = false;
    loop_cam_dis_index = 0;
    loop_close_mission_running = false;
    loop_close_mission_index = 0;
    loop_push_reaction_running = false;
    loop_push_reaction_index = 0;
    loop_ss_gifts_running = false;
    loop_ss_gifts_index = 0;
    loop_job_dest_running = false;
    loop_job_dest_index = 0;
    loop_reset_guards_running = false;
    loop_reset_guards_index = 0;
    loop_setjobpayout_running = false;
    loop_setjobpayout_index = 0;
    loop_save_soil_y_running = false;
    loop_save_soil_y_index = 0;
    loop_connect_towers_running = false;
    loop_connect_towers_index = 0;
    loop_load_curts_running = false;
    loop_load_curts_index = 0;
    loop_phones_list_running = false;
    loop_phones_list_index = 0;
    loop_loop_npc_merchants_running = false;
    loop_loop_npc_merchants_index = 0;
    loop_invstring_running = false;
    loop_invstring_index = 0;
    loop_create_jungleid_running = false;
    loop_create_jungleid_index = 0;
    loop_craft_giveback_running = false;
    loop_craft_giveback_index = 0;
    loop_check_vent_gone_running = false;
    loop_check_vent_gone_index = 0;
    loop_vischaircheck_running = false;
    loop_vischaircheck_index = 0;
    loop_letter_sss_running = false;
    loop_letter_sss_index = 0;
    loop_remove_f_items_running = false;
    loop_remove_f_items_index = 0;
    loop_inmate_deskrob_running = false;
    loop_inmate_deskrob_index = 0;
    loop_naked_check_pos_running = false;
    loop_naked_check_pos_index = 0;
    loop_warden_dest_running = false;
    loop_warden_dest_index = 0;
    loop_dtaf_check_rocket_running = false;
    loop_dtaf_check_rocket_index = 0;
    loop_check_return_loot_running = false;
    loop_check_return_loot_index = 0;
    loop_npc_foodget_running = false;
    loop_npc_foodget_index = 0;
    loop_jobstaff_speak_running = false;
    loop_jobstaff_speak_index = 0;
    loop_wallremovealert_running = false;
    loop_wallremovealert_index = 0;
    loop_fill_container_running = false;
    loop_fill_container_index = 0;
    loop_check_npc_laundry_space_clean_running = false;
    loop_check_npc_laundry_space_clean_index = 0;
    loop_start_fight_target_running = false;
    loop_start_fight_target_index = 0;
    loop_find_chair_running = false;
    loop_find_chair_index = 0;
    loop_set_align_running = false;
    loop_set_align_index = 0;
    loop_patrol_running = false;
    loop_patrol_index = 0;
    loop_grabsheet_check_running = false;
    loop_grabsheet_check_index = 0;
    loop_scan_running = false;
    loop_scan_index = 0;
    loop_grap_go_running = false;
    loop_grap_go_index = 0;
    loop_mish_del_stuff_running = false;
    loop_mish_del_stuff_index = 0;
    loop_paint_fence_running = false;
    loop_paint_fence_index = 0;
    loop_gym_push_reaction_running = false;
    loop_gym_push_reaction_index = 0;
    loop_flood_right_running = false;
    loop_flood_right_index = 0;
    loop_lolol_running = false;
    loop_lolol_index = 0;
    loop_setup_eteam_running = false;
    loop_setup_eteam_index = 0;
    loop_woodshop_do_running = false;
    loop_woodshop_do_index = 0;
    loop_check_job_achieve_running = false;
    loop_check_job_achieve_index = 0;
    loop_set_guard_patrols_running = false;
    loop_set_guard_patrols_index = 0;
    loop_guard_unblock_loo_running = false;
    loop_guard_unblock_loo_index = 0;
    loop_dtaf_achieve_chair_running = false;
    loop_dtaf_achieve_chair_index = 0;
    loop_vending_item_new_running = false;
    loop_vending_item_new_index = 0;
    loop_find_open_inv_slot_running = false;
    loop_find_open_inv_slot_index = 0;
    loop_medstaff_speak_running = false;
    loop_medstaff_speak_index = 0;
    loop_sitting_running = false;
    loop_sitting_index = 0;
    loop_check_beat_mission_running = false;
    loop_check_beat_mission_index = 0;
    loop_guard_wake_running = false;
    loop_guard_wake_index = 0;
    loop_inv_up_npcs_running = false;
    loop_inv_up_npcs_index = 0;
    loop_check_hits_str_running = false;
    loop_check_hits_str_index = 0;
    loop_prof_stat_texts_running = false;
    loop_prof_stat_texts_index = 0;
    loop_swear_filter_running = false;
    loop_swear_filter_index = 0;
    loop_stone_running = false;
    loop_stone_index = 0;
    loop_load_removeslats_running = false;
    loop_load_removeslats_index = 0;
    loop_ug_lighting_running = false;
    loop_ug_lighting_index = 0;
    loop_save_curts_running = false;
    loop_save_curts_index = 0;
    loop_load_fakevents_running = false;
    loop_load_fakevents_index = 0;
    loop_restock_npc_desks_running = false;
    loop_restock_npc_desks_index = 0;
    loop_fix_poster_wall_running = false;
    loop_fix_poster_wall_index = 0;
    loop_des_container_items_running = false;
    loop_des_container_items_index = 0;
    loop_footer_running = false;
    loop_footer_index = 0;
    loop_hudshake_cash_running = false;
    loop_hudshake_cash_index = 0;
    loop_dtaf_name_chex_running = false;
    loop_dtaf_name_chex_index = 0;
    loop_load_saved_desks2_running = false;
    loop_load_saved_desks2_index = 0;
    loop_npc_give_go_running = false;
    loop_npc_give_go_index = 0;
    loop_door_sfx_running = false;
    loop_door_sfx_index = 0;
    loop_pickup_steps_check_running = false;
    loop_pickup_steps_check_index = 0;
    loop_make_layer7_block_running = false;
    loop_make_layer7_block_index = 0;
    loop_sleeping_guards_running = false;
    loop_sleeping_guards_index = 0;
    loop_save_guards_running = false;
    loop_save_guards_index = 0;
    loop_rem_missions_running = false;
    loop_rem_missions_index = 0;
    loop_dtaf_achieve_keycard_running = false;
    loop_dtaf_achieve_keycard_index = 0;
    loop_vent_setup_running = false;
    loop_vent_setup_index = 0;
    loop_guard_check_loo_running = false;
    loop_guard_check_loo_index = 0;
    loop_policing_tools_running = false;
    loop_policing_tools_index = 0;
    loop_job_info_running = false;
    loop_job_info_index = 0;
    loop_collect_laundry_running = false;
    loop_collect_laundry_index = 0;
    loop_loop_npc_inv_running = false;
    loop_loop_npc_inv_index = 0;
    loop_bog_dir_running = false;
    loop_bog_dir_index = 0;
    loop_sdown_neardesk_running = false;
    loop_sdown_neardesk_index = 0;
    loop_check_npc_deliv_space_running = false;
    loop_check_npc_deliv_space_index = 0;
    loop_write_crafting_item_running = false;
    loop_write_crafting_item_index = 0;
    loop_find_open_craft_slot_running = false;
    loop_find_open_craft_slot_index = 0;
    loop_inmate_calls_guard_running = false;
    loop_inmate_calls_guard_index = 0;
    loop_retrieve_mission_loot_running = false;
    loop_retrieve_mission_loot_index = 0;
    loop_itemnameappend_running = false;
    loop_itemnameappend_index = 0;
    loop_create_guards_running = false;
    loop_create_guards_index = 0;
    loop_set_walls_running = false;
    loop_set_walls_index = 0;
    loop_door_shadow_running = false;
    loop_door_shadow_index = 0;
    loop_save_alerts_running = false;
    loop_save_alerts_index = 0;
    loop_empty_vendors_running = false;
    loop_empty_vendors_index = 0;
    loop_save_game_running = false;
    loop_save_game_index = 0;
    loop_post_book_check_running = false;
    loop_post_book_check_index = 0;
    loop_laundry_do_running = false;
    loop_laundry_do_index = 0;
    loop_create_vendors_running = false;
    loop_create_vendors_index = 0;
    loop_setup_zip_running = false;
    loop_setup_zip_index = 0;
    loop_save_containers_compile_running = false;
    loop_save_containers_compile_index = 0;
    loop_find_dirt_spot_running = false;
    loop_find_dirt_spot_index = 0;
    loop_space_finder_running = false;
    loop_space_finder_index = 0;
    loop_load_missions_running = false;
    loop_load_missions_index = 0;
    loop_gimme_outfit_running = false;
    loop_gimme_outfit_index = 0;
    loop_count_downed_guards_result_running = false;
    loop_count_downed_guards_result_index = 0;
    loop_food_guards_init_running = false;
    loop_food_guards_init_index = 0;
    loop_save_crates_running = false;
    loop_save_crates_index = 0;
    loop_canc_mish_running = false;
    loop_canc_mish_index = 0;
    loop_check_shad_override_running = false;
    loop_check_shad_override_index = 0;
    loop_laddergoupcheck_running = false;
    loop_laddergoupcheck_index = 0;
    loop_check_los_running = false;
    loop_check_los_index = 0;
    loop_icon_int_running = false;
    loop_icon_int_index = 0;
    loop_flood_up_running = false;
    loop_flood_up_index = 0;
    loop_rollcall_align_running = false;
    loop_rollcall_align_index = 0;
    loop_craft_check_running = false;
    loop_craft_check_index = 0;
    loop_set_stats_running = false;
    loop_set_stats_index = 0;
    loop_make_craftnote_str_running = false;
    loop_make_craftnote_str_index = 0;
    loop_load_holes_running = false;
    loop_load_holes_index = 0;
    loop_hang_poster_running = false;
    loop_hang_poster_index = 0;
    loop_remove_escapes_running = false;
    loop_remove_escapes_index = 0;
    loop_check_g_weap_running = false;
    loop_check_g_weap_index = 0;
    loop_beat_mission_del_running = false;
    loop_beat_mission_del_index = 0;
    loop_stats_close_npc_running = false;
    loop_stats_close_npc_index = 0;
    loop_create_inmates_running = false;
    loop_create_inmates_index = 0;
    loop_rollcall_guards_init_running = false;
    loop_rollcall_guards_init_index = 0;
    loop_save_missions_running = false;
    loop_save_missions_index = 0;
    loop_load_journal_craftnotes_running = false;
    loop_load_journal_craftnotes_index = 0;
    loop_menuoptions_running = false;
    loop_menuoptions_index = 0;
    loop_load_mines_running = false;
    loop_load_mines_index = 0;
    loop_supports_running = false;
    loop_supports_index = 0;
    loop_stats_close_running = false;
    loop_stats_close_index = 0;
    loop_save_desks_compile_running = false;
    loop_save_desks_compile_index = 0;
    loop_shu_running = false;
    loop_shu_index = 0;
    loop_move_check_running = false;
    loop_move_check_index = 0;
    loop_load_saved_guards_running = false;
    loop_load_saved_guards_index = 0;
    loop_revenge_running = false;
    loop_revenge_index = 0;
    loop_shower_slot_running = false;
    loop_shower_slot_index = 0;
    loop_grab_fakewall_check_running = false;
    loop_grab_fakewall_check_index = 0;
    loop_check_npc_kitchen_space_running = false;
    loop_check_npc_kitchen_space_index = 0;
    loop_sort_holes_running = false;
    loop_sort_holes_index = 0;
    loop_rdeer_running = false;
    loop_rdeer_index = 0;
    loop_check_npc_jq_running = false;
    loop_check_npc_jq_index = 0;
    loop_mount_check_running = false;
    loop_mount_check_index = 0;
    loop_eteam_beds_running = false;
    loop_eteam_beds_index = 0;
    loop_create_mission_item_running = false;
    loop_create_mission_item_index = 0;
    loop_build_loot_gear_slots_running = false;
    loop_build_loot_gear_slots_index = 0;
    loop_det_dir_running = false;
    loop_det_dir_index = 0;
    loop_the_shakedown_running = false;
    loop_the_shakedown_index = 0;
    loop_layer_down_running = false;
    loop_layer_down_index = 0;
    loop_successful_distract_running = false;
    loop_successful_distract_index = 0;
    loop_restock_books_running = false;
    loop_restock_books_index = 0;
    loop_npc_talk_2_running = false;
    loop_npc_talk_2_index = 0;
    loop_reid_crates_running = false;
    loop_reid_crates_index = 0;
    loop_enter_hole_running = false;
    loop_enter_hole_index = 0;
    loop_guards_day_patrol_running = false;
    loop_guards_day_patrol_index = 0;
    loop_fill_loo_slots_running = false;
    loop_fill_loo_slots_index = 0;
    loop_nearest_tower_door_running = false;
    loop_nearest_tower_door_index = 0;
    loop_start_fight_go_running = false;
    loop_start_fight_go_index = 0;
    loop_create_rain_running = false;
    loop_create_rain_index = 0;
    loop_npc_gobed_running = false;
    loop_npc_gobed_index = 0;
    loop_npc_woodshop_space_done_running = false;
    loop_npc_woodshop_space_done_index = 0;
    loop_beat_mission_running = false;
    loop_beat_mission_index = 0;
    loop_hehe_running = false;
    loop_hehe_index = 0;
    loop_elec_him_running = false;
    loop_elec_him_index = 0;
    loop_stats_gear_running = false;
    loop_stats_gear_index = 0;
    loop_cancel_actions_running = false;
    loop_cancel_actions_index = 0;
    loop_metalshop_do_running = false;
    loop_metalshop_do_index = 0;
    loop_flood_go_running = false;
    loop_flood_go_index = 0;
    loop_fill_vac_running = false;
    loop_fill_vac_index = 0;
    loop_you_attack_deadcheck_running = false;
    loop_you_attack_deadcheck_index = 0;
    loop_build_desk_running = false;
    loop_build_desk_index = 0;
    loop_new_shads_x_running = false;
    loop_new_shads_x_index = 0;
    loop_new_shads_y_running = false;
    loop_new_shads_y_index = 0;
    loop_collect_oven_running = false;
    loop_collect_oven_index = 0;
    loop_check_da_distract_running = false;
    loop_check_da_distract_index = 0;
    loop_npc_punchbag_go_running = false;
    loop_npc_punchbag_go_index = 0;
    loop_serve_food_check_running = false;
    loop_serve_food_check_index = 0;
    loop_missed_distract_running = false;
    loop_missed_distract_index = 0;
    loop_npc_library_space_running = false;
    loop_npc_library_space_index = 0;
    loop_paint_wall_running = false;
    loop_paint_wall_index = 0;
    loop_craftsum_running = false;
    loop_craftsum_index = 0;
    loop_job_quit_check_running = false;
    loop_job_quit_check_index = 0;
    loop_digabove_check_running = false;
    loop_digabove_check_index = 0;
    loop_ss_tinsel_running = false;
    loop_ss_tinsel_index = 0;
    loop_icon_thumbdown_running = false;
    loop_icon_thumbdown_index = 0;
    loop_letter_dtaf_running = false;
    loop_letter_dtaf_index = 0;
    loop_create_torches_running = false;
    loop_create_torches_index = 0;
    loop_loot_empty_inv_running = false;
    loop_loot_empty_inv_index = 0;
    loop_find_unemp_running = false;
    loop_find_unemp_index = 0;
    loop_metal_scan_running = false;
    loop_metal_scan_index = 0;
    loop_grap_horiz_check_running = false;
    loop_grap_horiz_check_index = 0;
    loop_cl_journal_running = false;
    loop_cl_journal_index = 0;
    loop_craftnote_icon_running = false;
    loop_craftnote_icon_index = 0;
    loop_serve_food_running = false;
    loop_serve_food_index = 0;
    loop_compile_mission_running = false;
    loop_compile_mission_index = 0;
    loop_follow_los_running = false;
    loop_follow_los_index = 0;
    loop_cut_slats_check_running = false;
    loop_cut_slats_check_index = 0;
    loop_digbelow_running = false;
    loop_digbelow_index = 0;
    loop_letter_warden_running = false;
    loop_letter_warden_index = 0;
    loop_setup_feb16_running = false;
    loop_setup_feb16_index = 0;
    loop_deliv_running = false;
    loop_deliv_index = 0;
    loop_icon_spd_running = false;
    loop_icon_spd_index = 0;
    loop_rope_horiz_check_running = false;
    loop_rope_horiz_check_index = 0;
    loop_npc_laundry_space_running = false;
    loop_npc_laundry_space_index = 0;
    loop_reset_opn_caps_running = false;
    loop_reset_opn_caps_index = 0;
    loop_ss_openwall_running = false;
    loop_ss_openwall_index = 0;
    loop_basemenuhelp_running = false;
    loop_basemenuhelp_index = 0;
    loop_bedsheet_check_running = false;
    loop_bedsheet_check_index = 0;
    loop_shakedown_pick_running = false;
    loop_shakedown_pick_index = 0;
    loop_lockdown_moveem_running = false;
    loop_lockdown_moveem_index = 0;
    loop_rollcall_slot_running = false;
    loop_rollcall_slot_index = 0;
    loop_unscrew_check_running = false;
    loop_unscrew_check_index = 0;
    loop_cam_illegals_running = false;
    loop_cam_illegals_index = 0;
    loop_clean_check_running = false;
    loop_clean_check_index = 0;
    loop_tally_running = false;
    loop_tally_index = 0;
    loop_grab_map_data_running = false;
    loop_grab_map_data_index = 0;
    loop_load_y_running = false;
    loop_load_y_index = 0;
    loop_load_x_running = false;
    loop_load_x_index = 0;
    loop_decay_pouch_running = false;
    loop_decay_pouch_index = 0;
    loop_press_check_str_running = false;
    loop_press_check_str_index = 0;
    loop_dtaf_achieve_finger_running = false;
    loop_dtaf_achieve_finger_index = 0;
    loop_jeep_see_esc_running = false;
    loop_jeep_see_esc_index = 0;
    loop_load_map_objects_running = false;
    loop_load_map_objects_index = 0;
    loop_layer_up_running = false;
    loop_layer_up_index = 0;
    loop_open_door_check_running = false;
    loop_open_door_check_index = 0;
    loop_jungle_id_running = false;
    loop_jungle_id_index = 0;
    loop_check_lighting_running = false;
    loop_check_lighting_index = 0;
    loop_create_mission_target_running = false;
    loop_create_mission_target_index = 0;
    loop_start_laundry_running = false;
    loop_start_laundry_index = 0;
    loop_check_soap_drop_running = false;
    loop_check_soap_drop_index = 0;
    loop_sleep_check_but_running = false;
    loop_sleep_check_but_index = 0;
    loop_stash_crate_running = false;
    loop_stash_crate_index = 0;
    loop_slat_dir_running = false;
    loop_slat_dir_index = 0;
    loop_treadmill_check_spd_running = false;
    loop_treadmill_check_spd_index = 0;
    loop_beat_mission_success_running = false;
    loop_beat_mission_success_index = 0;
    loop_menuquit_running = false;
    loop_menuquit_index = 0;
    loop_align_char_y_running = false;
    loop_align_char_y_index = 0;
    loop_align_char_x_running = false;
    loop_align_char_x_index = 0;
    loop_hax_check_running = false;
    loop_hax_check_index = 0;
    loop_perch_running = false;
    loop_perch_index = 0;
    loop_found_gym_running = false;
    loop_found_gym_index = 0;
    loop_check_takeover_weap_running = false;
    loop_check_takeover_weap_index = 0;
    loop_disableselected_running = false;
    loop_disableselected_index = 0;
    loop_tip_left_running = false;
    loop_tip_left_index = 0;
    loop_close_sleep_running = false;
    loop_close_sleep_index = 0;
    loop_tower_shoot_running = false;
    loop_tower_shoot_index = 0;
    loop_restock_npc_desks_custom_running = false;
    loop_restock_npc_desks_custom_index = 0;
    loop_find_open_toilet_slot_running = false;
    loop_find_open_toilet_slot_index = 0;
    loop_npc_tab_buy_running = false;
    loop_npc_tab_buy_index = 0;
    loop_collect_floor_running = false;
    loop_collect_floor_index = 0;
    loop_save_floor_items_running = false;
    loop_save_floor_items_index = 0;
    loop_ss_lights_running = false;
    loop_ss_lights_index = 0;
    loop_sleigh_footer_running = false;
    loop_sleigh_footer_index = 0;
    loop_laddergodowncheck_running = false;
    loop_laddergodowncheck_index = 0;
    loop_count_downed_guards_running = false;
    loop_count_downed_guards_index = 0;
    loop_chip_check_rock_running = false;
    loop_chip_check_rock_index = 0;
    loop_tot_inmate_rep_running = false;
    loop_tot_inmate_rep_index = 0;
    loop_tower_shoot_go_running = false;
    loop_tower_shoot_go_index = 0;
    loop_digbelow_check_running = false;
    loop_digbelow_check_index = 0;
    loop_return_give_item_running = false;
    loop_return_give_item_index = 0;
    loop_job_apply_running = false;
    loop_job_apply_index = 0;
    loop_start_cook_running = false;
    loop_start_cook_index = 0;
    loop_policing_movealong_running = false;
    loop_policing_movealong_index = 0;
    loop_check_npc_metal_space_running = false;
    loop_check_npc_metal_space_index = 0;
    loop_icon_thumbup_running = false;
    loop_icon_thumbup_index = 0;
    loop_restock_cutlery_running = false;
    loop_restock_cutlery_index = 0;
    loop_pickupitem_running = false;
    loop_pickupitem_index = 0;
    loop_letter_eteam_running = false;
    loop_letter_eteam_index = 0;
    loop_open_lostjob_box_running = false;
    loop_open_lostjob_box_index = 0;
    loop_remove_bog_water_running = false;
    loop_remove_bog_water_index = 0;
    loop_load_saved_desks_running = false;
    loop_load_saved_desks_index = 0;
    loop_ww_setup_running = false;
    loop_ww_setup_index = 0;
    loop_drop_carries_running = false;
    loop_drop_carries_index = 0;
    loop_flip_container_findslot_running = false;
    loop_flip_container_findslot_index = 0;
    loop_page_clear_running = false;
    loop_page_clear_index = 0;
    loop_find_open_loot_slot_running = false;
    loop_find_open_loot_slot_index = 0;
    loop_policing_theft_running = false;
    loop_policing_theft_index = 0;
    loop_npc_punchbag_go_2_running = false;
    loop_npc_punchbag_go_2_index = 0;
    loop_create_mission_stealchar_running = false;
    loop_create_mission_stealchar_index = 0;
    loop_fix_fences_running = false;
    loop_fix_fences_index = 0;
    loop_pouch_used_running = false;
    loop_pouch_used_index = 0;
    loop_talk_loop_guard_running = false;
    loop_talk_loop_guard_index = 0;
    loop_save_craftnotes_go_running = false;
    loop_save_craftnotes_go_index = 0;
    loop_flush_bog_check_running = false;
    loop_flush_bog_check_index = 0;
    loop_make_combshiv_running = false;
    loop_make_combshiv_index = 0;
    loop_remove_sheet_running = false;
    loop_remove_sheet_index = 0;
    loop_removeitem_running = false;
    loop_removeitem_index = 0;
    loop_create_mission_player_running = false;
    loop_create_mission_player_index = 0;
    loop_letter_alca_running = false;
    loop_letter_alca_index = 0;
    loop_check_beat_mission2_running = false;
    loop_check_beat_mission2_index = 0;
    loop_fix_bars_running = false;
    loop_fix_bars_index = 0;
    loop_dtaf_sign_achievement_running = false;
    loop_dtaf_sign_achievement_index = 0;
    loop_icon_str_running = false;
    loop_icon_str_index = 0;
    loop_notice_running = false;
    loop_notice_index = 0;
    loop_restock_gardening_running = false;
    loop_restock_gardening_index = 0;
    loop_guard_bedcheck_running = false;
    loop_guard_bedcheck_index = 0;
    loop_set_work_lesson_running = false;
    loop_set_work_lesson_index = 0;
    loop_key_degrade_go_running = false;
    loop_key_degrade_go_index = 0;
    loop_talk_loop_guard_2_running = false;
    loop_talk_loop_guard_2_index = 0;
    loop_move_check_doors_running = false;
    loop_move_check_doors_index = 0;
    loop_favour_complete_running = false;
    loop_favour_complete_index = 0;
    loop_journal_list_favours_running = false;
    loop_journal_list_favours_index = 0;
    loop_make_item_str_running = false;
    loop_make_item_str_index = 0;
    loop_hit_fx2_running = false;
    loop_hit_fx2_index = 0;
    loop_find_laundry_space_running = false;
    loop_find_laundry_space_index = 0;
    loop_ss_vis_achieve_running = false;
    loop_ss_vis_achieve_index = 0;
    loop_see_water_running = false;
    loop_see_water_index = 0;
    loop_save_fakevents_running = false;
    loop_save_fakevents_index = 0;
    loop_check_complete_fencecut_running = false;
    loop_check_complete_fencecut_index = 0;
    loop_fix_walls_running = false;
    loop_fix_walls_index = 0;
    loop_create_mission_distract_running = false;
    loop_create_mission_distract_index = 0;
    loop_create_down_zip_running = false;
    loop_create_down_zip_index = 0;
    loop_inmate_bedsnitch_running = false;
    loop_inmate_bedsnitch_index = 0;
    loop_assign_keys_running = false;
    loop_assign_keys_index = 0;
    loop_npc_deliv_space_running = false;
    loop_npc_deliv_space_index = 0;
    loop_restock_medical_running = false;
    loop_restock_medical_index = 0;
    loop_you_hit_anim_running = false;
    loop_you_hit_anim_index = 0;
    loop_collect_dirt_running = false;
    loop_collect_dirt_index = 0;
    loop_des_toilet_items_running = false;
    loop_des_toilet_items_index = 0;
    loop_grap_vert_check_running = false;
    loop_grap_vert_check_index = 0;
    loop_flush_bog_running = false;
    loop_flush_bog_index = 0;
    loop_space_finder_go_running = false;
    loop_space_finder_go_index = 0;
    loop_flood_down_running = false;
    loop_flood_down_index = 0;
    loop_sneaking_attk_running = false;
    loop_sneaking_attk_index = 0;
    loop_shakedown_goto_desk_running = false;
    loop_shakedown_goto_desk_index = 0;
    loop_craft_poss_running = false;
    loop_craft_poss_index = 0;
    loop_load_slat_hp_running = false;
    loop_load_slat_hp_index = 0;
    loop_deliv_item_running = false;
    loop_deliv_item_index = 0;
    loop_found_naked_running = false;
    loop_found_naked_index = 0;
    loop_add_day_running = false;
    loop_add_day_index = 0;
    loop_create_left_zip_running = false;
    loop_create_left_zip_index = 0;
    loop_dropitem_running = false;
    loop_dropitem_index = 0;
    loop_restock_dtaf_running = false;
    loop_restock_dtaf_index = 0;
    loop_brace_check_running = false;
    loop_brace_check_index = 0;
    loop_check_distract_mish_running = false;
    loop_check_distract_mish_index = 0;
    loop_load_rocks_running = false;
    loop_load_rocks_index = 0;
    loop_goto_sheet_running = false;
    loop_goto_sheet_index = 0;
    loop_end_level_running = false;
    loop_end_level_index = 0;
    loop_del_ingred_running = false;
    loop_del_ingred_index = 0;
    loop_npc_tab_stats_running = false;
    loop_npc_tab_stats_index = 0;
    loop_file_checks_running = false;
    loop_file_checks_index = 0;
    loop_letter_busted_running = false;
    loop_letter_busted_index = 0;
    loop_create_stat_bars_npc_running = false;
    loop_create_stat_bars_npc_index = 0;
    loop_electric_running = false;
    loop_electric_index = 0;
    loop_npc_laundry_space_clean_running = false;
    loop_npc_laundry_space_clean_index = 0;
    loop_restocks_running = false;
    loop_restocks_index = 0;
    loop_weed_fin_running = false;
    loop_weed_fin_index = 0;
    loop_load_alerts_running = false;
    loop_load_alerts_index = 0;
    loop_flood_left_running = false;
    loop_flood_left_index = 0;
    loop_save_containers_running = false;
    loop_save_containers_index = 0;
    loop_fill_loot_slots_running = false;
    loop_fill_loot_slots_index = 0;
    loop_makelist_running = false;
    loop_makelist_index = 0;
    loop_restock_cleaning_running = false;
    loop_restock_cleaning_index = 0;
    loop_inmate_alert_running = false;
    loop_inmate_alert_index = 0;
    loop_attack_em_running = false;
    loop_attack_em_index = 0;
    loop_cansee_running = false;
    loop_cansee_index = 0;
    loop_loop_npc_equip_running = false;
    loop_loop_npc_equip_index = 0;
    loop_options_screen_running = false;
    loop_options_screen_index = 0;
    loop_policing_cells_running = false;
    loop_policing_cells_index = 0;
    loop_digabove_running = false;
    loop_digabove_index = 0;
    loop_inmate_wake_running = false;
    loop_inmate_wake_index = 0;
    loop_canteen_align_guards_running = false;
    loop_canteen_align_guards_index = 0;
    loop_desk_douse_running = false;
    loop_desk_douse_index = 0;
    loop_pillow_check_running = false;
    loop_pillow_check_index = 0;
    loop_retrieve_mission_running = false;
    loop_retrieve_mission_index = 0;
    loop_ko_check_outfit_running = false;
    loop_ko_check_outfit_index = 0;
    loop_new_filesave_running = false;
    loop_new_filesave_index = 0;
    loop_talk_los_running = false;
    loop_talk_los_index = 0;
    loop_append_running = false;
    loop_append_index = 0;
    loop_restock_ccl_running = false;
    loop_restock_ccl_index = 0;
    loop_roof_fall_running = false;
    loop_roof_fall_index = 0;
    loop_build_inven_slots_running = false;
    loop_build_inven_slots_index = 0;
    loop_sort_weapon_running = false;
    loop_sort_weapon_index = 0;
    loop_find_gym_running = false;
    loop_find_gym_index = 0;
    loop_add_craft_note_running = false;
    loop_add_craft_note_index = 0;
    loop_bound_spotted_running = false;
    loop_bound_spotted_index = 0;
    loop_quotadone_running = false;
    loop_quotadone_index = 0;
    loop_follow_checks_running = false;
    loop_follow_checks_index = 0;
    loop_flag_found_running = false;
    loop_flag_found_index = 0;
    loop_clear_desks_running = false;
    loop_clear_desks_index = 0;
    loop_canc_mission_checkdesk_running = false;
    loop_canc_mission_checkdesk_index = 0;
    loop_weed_check_running = false;
    loop_weed_check_index = 0;
    loop_swear_filter_go_running = false;
    loop_swear_filter_go_index = 0;
    loop_make_jeep_running = false;
    loop_make_jeep_index = 0;
    loop_restock_eteam_d_running = false;
    loop_restock_eteam_d_index = 0;
    loop_npc_talk_guardmention_running = false;
    loop_npc_talk_guardmention_index = 0;
    loop_restock_eteam_b_running = false;
    loop_restock_eteam_b_index = 0;
    loop_restock_eteam_c_running = false;
    loop_restock_eteam_c_index = 0;
    loop_setup_tol_running = false;
    loop_setup_tol_index = 0;
    loop_restock_eteam_a_running = false;
    loop_restock_eteam_a_index = 0;
    loop_slider_sfx_running = false;
    loop_slider_sfx_index = 0;
    loop_you_attack_running = false;
    loop_you_attack_index = 0;
    loop_build_craft_slots_running = false;
    loop_build_craft_slots_index = 0;
    loop_flush_water_running = false;
    loop_flush_water_index = 0;
    loop_lose_craftnote_icons_running = false;
    loop_lose_craftnote_icons_index = 0;
    loop_check_g_outfits_running = false;
    loop_check_g_outfits_index = 0;
    loop_skipped_lesson_running = false;
    loop_skipped_lesson_index = 0;
    loop_menu_close_running = false;
    loop_menu_close_index = 0;
    loop_build_loot_slots_running = false;
    loop_build_loot_slots_index = 0;
    loop_find_legal_item_running = false;
    loop_find_legal_item_index = 0;
    loop_wooof_running = false;
    loop_wooof_index = 0;
    loop_hudshake_heat_running = false;
    loop_hudshake_heat_index = 0;
    loop_drop_opponent_running = false;
    loop_drop_opponent_index = 0;
    loop_npc_library_chest_space_running = false;
    loop_npc_library_chest_space_index = 0;
    loop_close_activity_box_running = false;
    loop_close_activity_box_index = 0;
    loop_lockdown_end_doors_running = false;
    loop_lockdown_end_doors_index = 0;
    loop_find_craft_note_running = false;
    loop_find_craft_note_index = 0;
    loop_g_noweap_running = false;
    loop_g_noweap_index = 0;
    loop_incellcheck_running = false;
    loop_incellcheck_index = 0;
    loop_rollcall_align_guards_running = false;
    loop_rollcall_align_guards_index = 0;
    loop_setup_sss_running = false;
    loop_setup_sss_index = 0;
    loop_map_vals_running = false;
    loop_map_vals_index = 0;
    loop_distract_2_running = false;
    loop_distract_2_index = 0;
    loop_patrol_target_check_running = false;
    loop_patrol_target_check_index = 0;
    loop_set_hax_vals_running = false;
    loop_set_hax_vals_index = 0;
    loop_key_degrade_running = false;
    loop_key_degrade_index = 0;
    loop_back2tower_running = false;
    loop_back2tower_index = 0;
    loop_chaselos_running = false;
    loop_chaselos_index = 0;
    loop_menuhelp_running = false;
    loop_menuhelp_index = 0;
    loop_inmates_free_period_running = false;
    loop_inmates_free_period_index = 0;
    loop_cam_spotted_running = false;
    loop_cam_spotted_index = 0;
    loop_inv_remove_running = false;
    loop_inv_remove_index = 0;
    loop_ph_checkcash_running = false;
    loop_ph_checkcash_index = 0;
    loop_flip_desk_findslot_running = false;
    loop_flip_desk_findslot_index = 0;
    loop_refresh_inv_running = false;
    loop_refresh_inv_index = 0;
    loop_desk_inv_findslot_running = false;
    loop_desk_inv_findslot_index = 0;
    loop_strip_stat_running = false;
    loop_strip_stat_index = 0;
    loop_letter_tol_running = false;
    loop_letter_tol_index = 0;
    loop_jeep_ko_npc_running = false;
    loop_jeep_ko_npc_index = 0;
    loop_halt_all_running = false;
    loop_halt_all_index = 0;
    loop_sol_check_outfit_running = false;
    loop_sol_check_outfit_index = 0;
    loop_position_running = false;
    loop_position_index = 0;
    loop_climb_off_2_running = false;
    loop_climb_off_2_index = 0;
    loop_tip_up_running = false;
    loop_tip_up_index = 0;
    loop_job_pos_fix_running = false;
    loop_job_pos_fix_index = 0;
    loop_grab_vent_check_running = false;
    loop_grab_vent_check_index = 0;
    loop_ventremovealert_running = false;
    loop_ventremovealert_index = 0;
    loop_exit_hole_running = false;
    loop_exit_hole_index = 0;
    loop_flip_into_equip2_running = false;
    loop_flip_into_equip2_index = 0;
    loop_create_activity_box_running = false;
    loop_create_activity_box_index = 0;
    loop_npc_wipe_inv_running = false;
    loop_npc_wipe_inv_index = 0;
    loop_restock_ss_running = false;
    loop_restock_ss_index = 0;
    loop_chair_dir_running = false;
    loop_chair_dir_index = 0;
    loop_add_craftnotes_running = false;
    loop_add_craftnotes_index = 0;
    loop_npc_tab_stats_name_running = false;
    loop_npc_tab_stats_name_index = 0;
    loop_guard_sees_unlocked_running = false;
    loop_guard_sees_unlocked_index = 0;
    loop_grabdummy_check_running = false;
    loop_grabdummy_check_index = 0;
    loop_put_to_bed_running = false;
    loop_put_to_bed_index = 0;
    loop_des_buttons_running = false;
    loop_des_buttons_index = 0;
    loop_journal_favours_running = false;
    loop_journal_favours_index = 0;
    loop_hide_vent_layer_running = false;
    loop_hide_vent_layer_index = 0;
    loop_mish_setup_running = false;
    loop_mish_setup_index = 0;
    loop_rollcall_slot_go_running = false;
    loop_rollcall_slot_go_index = 0;
    loop_decline_mission_running = false;
    loop_decline_mission_index = 0;
    loop_inmate_los_running = false;
    loop_inmate_los_index = 0;
    loop_vendor_running = false;
    loop_vendor_index = 0;
    loop_tower_hole_running = false;
    loop_tower_hole_index = 0;
    loop_load_saved_cons_running = false;
    loop_load_saved_cons_index = 0;
    loop_align_color_running = false;
    loop_align_color_index = 0;
    loop_npc_prof_sleep_running = false;
    loop_npc_prof_sleep_index = 0;
    loop_dtaf_achieve_voice_running = false;
    loop_dtaf_achieve_voice_index = 0;
    loop_npc_tailorshop_space_running = false;
    loop_npc_tailorshop_space_index = 0;
    loop_save_craftnotes_running = false;
    loop_save_craftnotes_index = 0;
    loop_fill_holes_running = false;
    loop_fill_holes_index = 0;
    loop_menubuttons_running = false;
    loop_menubuttons_index = 0;
    loop_snore_running = false;
    loop_snore_index = 0;
    loop_nearest_tower_running = false;
    loop_nearest_tower_index = 0;
    loop_dtaf_guard_equip_running = false;
    loop_dtaf_guard_equip_index = 0;
    loop_save_inmates_running = false;
    loop_save_inmates_index = 0;
    loop_check_deers_running = false;
    loop_check_deers_index = 0;
    loop_npc_speedbag_go_2_running = false;
    loop_npc_speedbag_go_2_index = 0;
    loop_alcaboat_speak_running = false;
    loop_alcaboat_speak_index = 0;
    loop_move_check_y_running = false;
    loop_move_check_y_index = 0;
    loop_move_check_x_running = false;
    loop_move_check_x_index = 0;
    loop_craft_output_running = false;
    loop_craft_output_index = 0;
    loop_open_journal_running = false;
    loop_open_journal_index = 0;
    loop_move_deer_check_running = false;
    loop_move_deer_check_index = 0;
    loop_make_mines_running = false;
    loop_make_mines_index = 0;
    loop_flip_into_outfit_running = false;
    loop_flip_into_outfit_index = 0;
    loop_unmount_npc_running = false;
    loop_unmount_npc_index = 0;
    loop_warden_speak_running = false;
    loop_warden_speak_index = 0;
    loop_give_npc_check_running = false;
    loop_give_npc_check_index = 0;
    loop_follower_kod_running = false;
    loop_follower_kod_index = 0;
    loop_del_dizzy_running = false;
    loop_del_dizzy_index = 0;
    loop_guardpick_running = false;
    loop_guardpick_index = 0;
    loop_using_gym_running = false;
    loop_using_gym_index = 0;
    loop_clear_ya_desk_running = false;
    loop_clear_ya_desk_index = 0;
    loop_journal_craftnotes_running = false;
    loop_journal_craftnotes_index = 0;
    loop_count_avail_missions_running = false;
    loop_count_avail_missions_index = 0;
    loop_collect_vent_running = false;
    loop_collect_vent_index = 0;
    loop_check_jeep_running = false;
    loop_check_jeep_index = 0;
    loop_fade_sleep_running = false;
    loop_fade_sleep_index = 0;
    loop_raise_npc_running = false;
    loop_raise_npc_index = 0;
    loop_create_mission_give_running = false;
    loop_create_mission_give_index = 0;
    loop_see_carry_running = false;
    loop_see_carry_index = 0;
    loop_speak_running = false;
    loop_speak_index = 0;
    loop_chair_push_running = false;
    loop_chair_push_index = 0;
    loop_close_load_running = false;
    loop_close_load_index = 0;
    loop_give_cash_setup_running = false;
    loop_give_cash_setup_index = 0;
    loop_laid_out_running = false;
    loop_laid_out_index = 0;
    loop_npc_woodshop_space_running = false;
    loop_npc_woodshop_space_index = 0;
    loop_loop_npc_missions_running = false;
    loop_loop_npc_missions_index = 0;
    loop_shakedown_list_running = false;
    loop_shakedown_list_index = 0;
    loop_stats_gear_npc_running = false;
    loop_stats_gear_npc_index = 0;
    loop_stat_visitors_running = false;
    loop_stat_visitors_index = 0;
    loop_npc_inv_add_running = false;
    loop_npc_inv_add_index = 0;
    loop_craft2inv_running = false;
    loop_craft2inv_index = 0;
    loop_shower_align_guards_running = false;
    loop_shower_align_guards_index = 0;
    loop_itemhp_running = false;
    loop_itemhp_index = 0;
    loop_tanked_up_running = false;
    loop_tanked_up_index = 0;
    loop_policing_alert_running = false;
    loop_policing_alert_index = 0;
    loop_clean_fin_running = false;
    loop_clean_fin_index = 0;
    loop_hudshake_follow_running = false;
    loop_hudshake_follow_index = 0;
    loop_find_npc_carry_item_running = false;
    loop_find_npc_carry_item_index = 0;
    loop_cansee2_running = false;
    loop_cansee2_index = 0;
    loop_policing_loot_running = false;
    loop_policing_loot_index = 0;
    loop_find_weeds_spot_running = false;
    loop_find_weeds_spot_index = 0;
    loop_refresh_buy_list_running = false;
    loop_refresh_buy_list_index = 0;
    loop_space_finder_go_check_running = false;
    loop_space_finder_go_check_index = 0;
    loop_comb_rep_running = false;
    loop_comb_rep_index = 0;
    loop_npc_stat_texts_running = false;
    loop_npc_stat_texts_index = 0;
    loop_policing_naked_running = false;
    loop_policing_naked_index = 0;
    loop_unselect_item_running = false;
    loop_unselect_item_index = 0;
    loop_elec_me_running = false;
    loop_elec_me_index = 0;
    loop_npc_talk_running = false;
    loop_npc_talk_index = 0;
    loop_npc_give_check_running = false;
    loop_npc_give_check_index = 0;
    loop_desk_ids_running = false;
    loop_desk_ids_index = 0;
    loop_icon_heat_running = false;
    loop_icon_heat_index = 0;
    loop_ph_click_check_running = false;
    loop_ph_click_check_index = 0;
    loop_looted_guard_check_running = false;
    loop_looted_guard_check_index = 0;
    loop_guard_sees_alert_running = false;
    loop_guard_sees_alert_index = 0;
    loop_star_it_running = false;
    loop_star_it_index = 0;
    loop_chip_check_running = false;
    loop_chip_check_index = 0;
    loop_mine_explode_running = false;
    loop_mine_explode_index = 0;
    loop_lockdown_gocell_running = false;
    loop_lockdown_gocell_index = 0;
    loop_policing_attack_running = false;
    loop_policing_attack_index = 0;
    loop_smackt_ya_running = false;
    loop_smackt_ya_index = 0;
    loop_inmate_wake_outfit_running = false;
    loop_inmate_wake_outfit_index = 0;
    loop_weights_check_str_running = false;
    loop_weights_check_str_index = 0;
    loop_et_guard_equip_running = false;
    loop_et_guard_equip_index = 0;
    loop_flip_into_weapon_running = false;
    loop_flip_into_weapon_index = 0;
    loop_browse_check_running = false;
    loop_browse_check_index = 0;
    loop_fill_loot_gear_slots_running = false;
    loop_fill_loot_gear_slots_index = 0;
    loop_check_nudes_running = false;
    loop_check_nudes_index = 0;
    loop_build_loo_slots_running = false;
    loop_build_loo_slots_index = 0;
    loop_create_torches_jeep_running = false;
    loop_create_torches_jeep_index = 0;
    loop_intermission_running = false;
    loop_intermission_index = 0;
    loop_check_complete_chip_running = false;
    loop_check_complete_chip_index = 0;
    loop_create_joblist_running = false;
    loop_create_joblist_index = 0;
    loop_findinvslot_running = false;
    loop_findinvslot_index = 0;
    loop_new_grap_running = false;
    loop_new_grap_index = 0;
    loop_npc_buy_setup_running = false;
    loop_npc_buy_setup_index = 0;
    loop_flip_into_equip_running = false;
    loop_flip_into_equip_index = 0;
    loop_npc_metal_space_running = false;
    loop_npc_metal_space_index = 0;
    loop_jeep_sound_running = false;
    loop_jeep_sound_index = 0;
    loop_guard_wake_outfit_running = false;
    loop_guard_wake_outfit_index = 0;
    loop_tower_fencecut_running = false;
    loop_tower_fencecut_index = 0;
    loop_dismissed_txt_running = false;
    loop_dismissed_txt_index = 0;
    loop_collect_wall_running = false;
    loop_collect_wall_index = 0;
    loop_load_journal_favours_running = false;
    loop_load_journal_favours_index = 0;
    loop_hang_sheet_running = false;
    loop_hang_sheet_index = 0;
    loop_create_up_zip_running = false;
    loop_create_up_zip_index = 0;
    loop_payme_running = false;
    loop_payme_index = 0;
    loop_summon_guard_running = false;
    loop_summon_guard_index = 0;
    loop_checkpoint_speak_running = false;
    loop_checkpoint_speak_index = 0;
    loop_build_craft_output_running = false;
    loop_build_craft_output_index = 0;
    loop_desklos_running = false;
    loop_desklos_index = 0;
    loop_cut_vents_check_running = false;
    loop_cut_vents_check_index = 0;
    loop_guard_sees_hole_running = false;
    loop_guard_sees_hole_index = 0;
    loop_jeep_ko_npc_go_running = false;
    loop_jeep_ko_npc_go_index = 0;
    loop_dighole_running = false;
    loop_dighole_index = 0;
    loop_policing_nogo_running = false;
    loop_policing_nogo_index = 0;
    loop_check_tower_breaks_running = false;
    loop_check_tower_breaks_index = 0;
    loop_shake_search_running = false;
    loop_shake_search_index = 0;
    loop_load_braces_running = false;
    loop_load_braces_index = 0;
    loop_remove_posters_running = false;
    loop_remove_posters_index = 0;
    loop_cut_fence_check_running = false;
    loop_cut_fence_check_index = 0;
    loop_rnd_hit_sfx_running = false;
    loop_rnd_hit_sfx_index = 0;
    loop_save_soil_x_running = false;
    loop_save_soil_x_index = 0;
    loop_create_stat_bars_guard_running = false;
    loop_create_stat_bars_guard_index = 0;
    loop_nearest_bed_running = false;
    loop_nearest_bed_index = 0;
    loop_reset_npcs_running = false;
    loop_reset_npcs_index = 0;
    loop_set_arrays_running = false;
    loop_set_arrays_index = 0;
    loop_add_step_running = false;
    loop_add_step_index = 0;
    loop_jeep_see_running = false;
    loop_jeep_see_index = 0;
    loop_rope_vert_check_running = false;
    loop_rope_vert_check_index = 0;
    loop_load_crates_running = false;
    loop_load_crates_index = 0;
    loop_save_inv_running = false;
    loop_save_inv_index = 0;
    loop_fill_desk_running = false;
    loop_fill_desk_index = 0;
    loop_guard_see_item_running = false;
    loop_guard_see_item_index = 0;
    loop_kill_speech_running = false;
    loop_kill_speech_index = 0;
    static DynamicLoops frame_loops;
    loops = &frame_loops;
    static bool loops_initialized = false;
    if (!loops_initialized) {
        frame_loops[std::string("create_right_zip", 16)].set(&loop_wrapper_create_right_zip_6, &loop_create_right_zip_running, &loop_create_right_zip_index);
        frame_loops[std::string("create_guards", 13)].set(&loop_wrapper_create_guards_6, &loop_create_guards_running, &loop_create_guards_index);
        frame_loops[std::string("create_rain", 11)].set(&loop_wrapper_create_rain_6, &loop_create_rain_running, &loop_create_rain_index);
        frame_loops[std::string("create_activity_box", 19)].set(&loop_wrapper_create_activity_box_6, &loop_create_activity_box_running, &loop_create_activity_box_index);
        frame_loops[std::string("create_stat_bars_guard", 22)].set(&loop_wrapper_create_stat_bars_guard_6, &loop_create_stat_bars_guard_running, &loop_create_stat_bars_guard_index);
        frame_loops[std::string("create_up_zip", 13)].set(&loop_wrapper_create_up_zip_6, &loop_create_up_zip_running, &loop_create_up_zip_index);
        frame_loops[std::string("create_jungleID", 15)].set(&loop_wrapper_create_jungleid_6, &loop_create_jungleid_running, &loop_create_jungleid_index);
        frame_loops[std::string("create_snow", 11)].set(&loop_wrapper_create_snow_6, &loop_create_snow_running, &loop_create_snow_index);
        frame_loops[std::string("create_vendors", 14)].set(&loop_wrapper_create_vendors_6, &loop_create_vendors_running, &loop_create_vendors_index);
        frame_loops[std::string("setup_zip", 9)].set(&loop_wrapper_setup_zip_6, &loop_setup_zip_running, &loop_setup_zip_index);
        frame_loops[std::string("create_left_zip", 15)].set(&loop_wrapper_create_left_zip_6, &loop_create_left_zip_running, &loop_create_left_zip_index);
        frame_loops[std::string("create_mission_target", 21)].set(&loop_wrapper_create_mission_target_6, &loop_create_mission_target_running, &loop_create_mission_target_index);
        frame_loops[std::string("create_mission_Beat", 19)].set(&loop_wrapper_create_mission_beat_6, &loop_create_mission_beat_running, &loop_create_mission_beat_index);
        frame_loops[std::string("create_stat_bars", 16)].set(&loop_wrapper_create_stat_bars_6, &loop_create_stat_bars_running, &loop_create_stat_bars_index);
        frame_loops[std::string("create_mission_StealChar", 24)].set(&loop_wrapper_create_mission_stealchar_6, &loop_create_mission_stealchar_running, &loop_create_mission_stealchar_index);
        frame_loops[std::string("create_torches_jeep", 19)].set(&loop_wrapper_create_torches_jeep_6, &loop_create_torches_jeep_running, &loop_create_torches_jeep_index);
        frame_loops[std::string("create_mission_item", 19)].set(&loop_wrapper_create_mission_item_6, &loop_create_mission_item_running, &loop_create_mission_item_index);
        frame_loops[std::string("create_joblist", 14)].set(&loop_wrapper_create_joblist_6, &loop_create_joblist_running, &loop_create_joblist_index);
        frame_loops[std::string("create_inmates", 14)].set(&loop_wrapper_create_inmates_6, &loop_create_inmates_running, &loop_create_inmates_index);
        frame_loops[std::string("create_mission_Distract", 23)].set(&loop_wrapper_create_mission_distract_6, &loop_create_mission_distract_running, &loop_create_mission_distract_index);
        frame_loops[std::string("create_down_zip", 15)].set(&loop_wrapper_create_down_zip_6, &loop_create_down_zip_running, &loop_create_down_zip_index);
        frame_loops[std::string("create_mission_Give", 19)].set(&loop_wrapper_create_mission_give_6, &loop_create_mission_give_running, &loop_create_mission_give_index);
        frame_loops[std::string("create_mission_player", 21)].set(&loop_wrapper_create_mission_player_6, &loop_create_mission_player_running, &loop_create_mission_player_index);
        frame_loops[std::string("create_stat_bars_npc", 20)].set(&loop_wrapper_create_stat_bars_npc_6, &loop_create_stat_bars_npc_running, &loop_create_stat_bars_npc_index);
        frame_loops[std::string("create_torches", 14)].set(&loop_wrapper_create_torches_6, &loop_create_torches_running, &loop_create_torches_index);
        loops_initialized = true;
    }
    once_condition_590_6 = false;
    every_2427_6 = 0.0f;
    group_code_left_clicked_dtaf_1 = false;
    group_code_schedules_hour_tickover_medsec_1 = false;
    once_condition_594_6 = false;
    group_code_crafting_1 = false;
    group_code_pathfinding_guards_policing_beyond_walls_bonus_maps_1 = false;
    every_1234_6 = 0.0f;
    group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1 = false;
    group_code_schedules_roll_call_1 = false;
    group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1_0 = true;
    every_2101_6 = 0.0f;
    group_code_schedules_leisure_work_npcs_doing_jobs_npc_gardening_1 = false;
    every_1636_6 = 0.0f;
    group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1_0 = true;
    every_967_6 = 0.0f;
    group_check_group_code_schedules_leisure_work_1_2 = true;
    group_check_group_code_schedules_leisure_work_1_3 = true;
    group_check_group_code_schedules_leisure_work_1_0 = true;
    group_check_group_code_schedules_leisure_work_1_1 = true;
    group_tooltips_1 = false;
    every_2285_6 = 0.0f;
    restrict_3390_6 = frame_time;
    group_code_job_related_woodshop_1 = false;
    every_2287_6 = 0.0f;
    group_check_group_setup_1_9 = true;
    group_check_group_setup_1_8 = true;
    every_1172_6 = 0.0f;
    group_check_group_setup_1_3 = true;
    group_check_group_setup_1_2 = true;
    group_check_group_setup_1_1 = true;
    group_check_group_setup_1_0 = true;
    group_check_group_setup_1_7 = true;
    group_check_group_setup_1_6 = true;
    group_check_group_setup_1_5 = true;
    group_check_group_setup_1_4 = true;
    every_1132_6 = 0.0f;
    every_1638_6 = 0.0f;
    group_code_dlc_alcatraz_1 = false;
    group_code_pathfinding_guards_player_shakedown_1 = false;
    group_code_pathfinding_guards_policing_1 = false;
    group_code_input_dismount_1 = false;
    group_code_gym_equip_press_ups_1 = false;
    group_code_gym_equip_speed_bag_1 = false;
    once_condition_2111_6 = false;
    group_saving_1 = false;
    every_1460_6 = 0.0f;
    every_1236_6 = 0.0f;
    group_code_dlc_bannedcamp_1 = false;
    once_condition_627_6 = false;
    every_1230_6 = 0.0f;
    group_check_group_code_misc_1_0 = true;
    group_extra_npcs_medic_1 = false;
    every_3837_6 = 0.0f;
    group_code_zones_1 = false;
    group_code_schedules_gym_1 = false;
    every_4497_6 = 0.0f;
    group_code_dlc_feb16_1 = false;
    every_2161_6 = 0.0f;
    group_code_gym_equip_skipping_1 = false;
    group_code_input_move_keys_movement_1 = false;
    group_setup_1 = false;
    every_1232_6 = 0.0f;
    group_check_group_code_dlc_tol_1_0 = true;
    group_code_sort_these_using_items_2_cleaning_1 = false;
    group_code_schedules_food_1 = false;
    group_check_group_code_pathfinding_1_0 = true;
    group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1 = false;
    group_code_gym_equip_treadmill_1 = false;
    group_check_group_load_map_from_file_old_tiles_ground_1_0 = true;
    group_check_group_code_schedules_hour_tickover_1_4 = true;
    group_check_group_code_schedules_hour_tickover_1_5 = true;
    group_check_group_code_schedules_hour_tickover_1_6 = true;
    group_check_group_code_schedules_hour_tickover_1_7 = true;
    group_check_group_code_schedules_hour_tickover_1_0 = true;
    group_check_group_code_schedules_hour_tickover_1_1 = true;
    group_check_group_code_schedules_hour_tickover_1_2 = true;
    group_check_group_code_schedules_hour_tickover_1_3 = true;
    group_code_1 = false;
    group_check_group_code_schedules_hour_tickover_1_8 = true;
    group_check_group_code_schedules_hour_tickover_1_9 = true;
    every_1700_6 = 0.0f;
    group_check_group_setup_new_desk_id_code_1_0 = true;
    every_4533_6 = 0.0f;
    group_check_group_code_1_0 = true;
    group_align_color_1 = false;
    group_code_sort_these_using_items_2_cutting_2_bars_2_1 = false;
    group_check_group_code_dlc_sss_1_0 = true;
    group_check_group_code_dlc_sss_1_1 = true;
    group_check_group_code_dlc_sss_1_2 = true;
    every_2100_6 = 0.0f;
    group_check_group_setup_assign_canteen_chairs_1_1 = true;
    group_check_group_setup_assign_canteen_chairs_1_0 = true;
    every_2223_6 = 0.0f;
    group_code_fire_1 = false;
    every_1235_6 = 0.0f;
    every_1119_6 = 0.0f;
    group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_8 = true;
    group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_9 = true;
    group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_0 = true;
    group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_1 = true;
    group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_2 = true;
    group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_3 = true;
    group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_4 = true;
    group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_5 = true;
    every_2168_6 = 0.0f;
    group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_7 = true;
    group_code_dlc_tol_1 = false;
    group_check_group_code_dlc_bannedcamp_1_0 = true;
    group_extra_npcs_visitors_1 = false;
    group_check_group_code_schedules_food_1_1 = true;
    group_check_group_code_schedules_food_1_0 = true;
    every_2187_6 = 0.0f;
    every_2068_6 = 0.0f;
    group_code_pathfinding_guards_guard_towers_1 = false;
    group_code_load_confirm_1 = false;
    every_4607_6 = 0.0f;
    group_cheats_debug_mode_box_1 = false;
    group_check_group_setup_2_4 = true;
    group_check_group_setup_2_5 = true;
    group_check_group_setup_2_0 = true;
    group_check_group_setup_2_1 = true;
    group_check_group_setup_2_2 = true;
    group_check_group_setup_2_3 = true;
    group_check_group_code_my_stats_1_8 = true;
    group_check_group_code_my_stats_1_9 = true;
    group_load_map_from_file_new_tiles_1 = false;
    group_code_job_related_laundry_1 = false;
    group_check_group_code_my_stats_1_0 = true;
    every_2286_6 = 0.0f;
    group_check_group_code_my_stats_1_2 = true;
    group_check_group_code_my_stats_1_3 = true;
    group_check_group_code_my_stats_1_4 = true;
    group_check_group_code_my_stats_1_5 = true;
    group_check_group_code_my_stats_1_6 = true;
    group_check_group_code_my_stats_1_7 = true;
    every_1992_6 = 0.0f;
    group_code_menu_1 = false;
    group_check_group_code_dlc_feb16_1_0 = true;
    every_995_6 = 0.0f;
    group_code_flooding_1 = false;
    every_2142_6 = 0.0f;
    group_code_pathfinding_guards_policing_during_lockdown_and_lights_out_outside_camp_map_1 = false;
    every_1725_6 = 0.0f;
    group_check_group_code_gym_equip_press_ups_1_0 = true;
    group_code_schedules_lockdown_new_1 = false;
    group_extra_npcs_job_staff_1 = false;
    once_condition_628_6 = false;
    every_1242_6 = 0.0f;
    group_check_group_saving_1_1 = true;
    group_check_group_saving_1_0 = true;
    group_check_group_saving_1_2 = true;
    every_4051_6 = 0.0f;
    group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_6 = true;
    once_condition_4539_6 = false;
    group_check_group_setup_eteam_beds_1_0 = true;
    group_check_group_setup_eteam_beds_1_1 = true;
    every_2732_6 = 0.0f;
    group_code_schedules_leisure_work_1 = false;
    every_3941_6 = 0.0f;
    every_2059_6 = 0.0f;
    group_check_group_code_gym_equip_skipping_1_0 = true;
    every_1189_6 = 0.0f;
    group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1_0 = true;
    once_condition_626_6 = false;
    every_1728_6 = 0.0f;
    every_2248_6 = 0.0f;
    group_check_group_setup_setup_chairs_1_1 = true;
    group_check_group_setup_setup_chairs_1_0 = true;
    once_condition_706_6 = false;
    group_check_group_code_journal_1_0 = true;
    group_check_group_code_journal_1_1 = true;
    group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1 = false;
    group_code_sort_these_using_items_2_browsing_1 = false;
    group_code_out_of_bounds_beyond_walls_2_bonus_maps_2_1 = false;
    group_check_group_code_pathfinding_guards_policing_1_0 = true;
    group_code_my_stats_1 = false;
    every_4037_6 = 0.0f;
    group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1 = false;
    every_4598_6 = 0.0f;
    every_2244_6 = 0.0f;
    group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1_0 = true;
    group_code_sort_these_using_items_2_unscrewing_2_1 = false;
    group_code_out_of_bounds_beyond_walls_2_normal_maps_2_1 = false;
    group_code_sort_these_using_items_2_chipping_2_1 = false;
    group_loops_1 = false;
    group_check_group_setup_load_stuff_1_0 = true;
    group_check_group_setup_load_stuff_1_1 = true;
    group_check_group_setup_load_stuff_1_2 = true;
    group_check_group_setup_load_stuff_1_3 = true;
    group_check_group_setup_load_stuff_1_4 = true;
    group_check_group_setup_load_stuff_1_5 = true;
    group_check_group_setup_load_stuff_1_6 = true;
    group_check_group_setup_load_stuff_1_7 = true;
    group_code_caught_solitary_1 = false;
    every_1486_6 = 0.0f;
    every_2189_6 = 0.0f;
    group_check_group_code_gym_equip_speed_bag_1_0 = true;
    group_check_group_code_gym_equip_speed_bag_1_1 = true;
    group_code_dlc_ccl_1 = false;
    group_guard_towers_1 = false;
    group_check_group_code_dlc_ccl_1_0 = true;
    every_2188_6 = 0.0f;
    group_code_npc_profiles_npc_profile_1 = false;
    group_check_group_code_gym_equip_treadmill_1_0 = true;
    group_check_group_code_gym_equip_treadmill_1_1 = true;
    restrict_1529_6 = frame_time;
    once_condition_512_6 = false;
    group_code_schedules_shower_1 = false;
    group_code_sort_these_using_items_2_weeding_1 = false;
    group_code_job_related_metalshop_1 = false;
    every_1134_6 = 0.0f;
    every_2076_6 = 0.0f;
    every_1237_6 = 0.0f;
    group_check_group_code_menu_1_0 = true;
    group_code_dlc_eteam_1 = false;
    every_4158_6 = 0.0f;
    every_1108_6 = 0.0f;
    once_condition_2110_6 = false;
    once_condition_508_6 = false;
    every_2060_6 = 0.0f;
    once_condition_4540_6 = false;
    group_code_sort_these_using_items_2_roof_travel_2_1 = false;
    group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1 = false;
    every_1788_6 = 0.0f;
    once_condition_2112_6 = false;
    group_check_group_code_gym_equip_punch_bag_1_1 = true;
    every_2733_6 = 0.0f;
    group_code_pathfinding_guards_policing_see_unlocked_door_1 = false;
    every_2152_6 = 0.0f;
    group_check_group_code_schedules_roll_call_1_2 = true;
    group_code_misc_jeep_1 = false;
    group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_old_1 = false;
    group_code_left_clicked_1 = false;
    every_3942_6 = 0.0f;
    group_check_group_code_schedules_gym_1_1 = true;
    group_check_group_code_schedules_gym_1_0 = true;
    group_code_journal_1 = false;
    once_condition_649_6 = false;
    group_code_job_related_kitchen_1 = false;
    every_2249_6 = 0.0f;
    group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1 = false;
    group_code_sort_these_sleep_stuff_sleep_menu_1 = false;
    group_code_input_mousedown_1 = false;
    group_check_group_code_1_2 = true;
    group_check_group_code_1_3 = true;
    group_code_mouseovers_workouts_1 = false;
    group_check_group_code_1_1 = true;
    not_always_993_6 = loop_count;
    group_check_group_code_1_4 = true;
    group_check_group_code_1_5 = true;
    restrict_3775_6_0 = frame_time;
    restrict_3775_6_1 = frame_time;
    group_check_group_code_my_stats_1_16 = true;
    not_always_2226_6 = loop_count;
    group_load_map_from_file_old_tiles_1 = true;
    group_check_group_code_gym_equip_skipping_1_1 = true;
    group_code_pathfinding_inmates_see_s_stuff_see_s_item_1 = false;
    every_1389_6 = 0.0f;
    every_1124_6 = 0.0f;
    group_check_group_setup_1_12 = true;
    group_check_group_code_my_stats_1_17 = true;
    group_check_group_setup_1_13 = true;
    group_check_group_code_schedules_shower_1_2 = true;
    group_check_group_code_payphone_1_0 = true;
    restrict_754_6 = frame_time;
    every_1973_6 = 0.0f;
    every_1241_6 = 0.0f;
    group_check_group_code_my_stats_1_1 = true;
    every_1243_6 = 0.0f;
    group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1_0 = true;
    every_1122_6 = 0.0f;
    group_check_group_code_schedules_lockdown_new_1_2 = true;
    group_check_group_code_schedules_lockdown_new_1_1 = true;
    group_check_group_code_schedules_lockdown_new_1_0 = true;
    group_check_group_code_my_stats_1_13 = true;
    group_check_group_setup_1_16 = true;
    group_check_group_setup_1_15 = true;
    group_check_group_setup_1_14 = true;
    group_check_group_code_schedules_shower_1_1 = true;
    group_check_group_code_schedules_shower_1_0 = true;
    group_check_group_setup_1_11 = true;
    group_check_group_setup_1_10 = true;
    group_check_group_code_my_stats_1_18 = true;
    every_2173_6 = 0.0f;
    group_check_group_code_my_stats_1_12 = true;
    every_1690_6 = 0.0f;
    group_check_group_code_my_stats_1_10 = true;
    group_check_group_code_my_stats_1_11 = true;
    group_check_group_setup_fill_inventory_1_1 = true;
    group_check_group_setup_fill_inventory_1_0 = true;
    group_check_group_code_my_stats_1_14 = true;
    group_check_group_code_my_stats_1_15 = true;
    group_check_group_code_gym_equip_weights_1_1 = true;
    group_check_group_code_gym_equip_weights_1_0 = true;
    group_check_group_code_schedules_hour_tickover_1_12 = true;
    group_check_group_code_schedules_hour_tickover_1_13 = true;
    group_check_group_code_schedules_hour_tickover_1_10 = true;
    every_2037_6 = 0.0f;
    group_code_gym_equip_1 = false;
    every_1435_6 = 0.0f;
    group_code_dlc_sss_1 = false;
    group_code_dlc_dtaf_1 = false;
    group_code_gym_equip_weights_1 = false;
    restrict_677_6 = frame_time;
    group_check_group_code_dlc_dtaf_1_0 = true;
    group_code_gym_equip_punch_bag_1 = false;
    every_1285_6 = 0.0f;
    every_769_6 = 0.0f;
    not_always_3476_6 = loop_count;
    group_code_left_clicked_eteam_1 = false;
    group_check_group_code_schedules_hour_tickover_1_11 = true;
    every_4503_6 = 0.0f;
    every_1499_6 = 0.0f;
    once_condition_2207_6 = false;
    group_code_old_distract_1 = false;
    every_2153_6 = 0.0f;
    restrict_651_6 = frame_time;
    group_code_schedules_hour_tickover_minsec_1 = false;
    every_4055_6 = 0.0f;
    every_2011_6 = 0.0f;
    every_3765_6 = 0.0f;
    group_code_schedules_hour_tickover_maxsec_1 = false;
    every_709_6 = 0.0f;
    once_condition_4541_6 = false;
    group_code_missions_1 = false;
    every_1121_6 = 0.0f;
    every_2231_6 = 0.0f;
    every_1123_6 = 0.0f;
    group_code_right_clicked_1 = false;
    group_steamworks_1 = false;
    group_code_schedules_hour_tickover_1 = false;
    every_1223_6 = 0.0f;
    group_check_group_code_gym_equip_press_ups_1_1 = true;
    group_code_conflict_you_attacking_old_beat_code_1 = false;
    group_code_schedules_sleeping_1 = true;
    restrict_2986_6 = frame_time;
    once_condition_4594_6 = false;
    once_condition_675_6 = false;
    group_code_mouseovers_item_hovers_holding_shift_1 = false;
    restrict_2980_6 = frame_time;
    every_2191_6 = 0.0f;
    every_4608_6 = 0.0f;
    group_set_item_graphic_1 = false;
    group_check_group_load_map_from_file_new_tiles_ground_2_1_0 = true;
    group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1_0 = true;
    group_check_group_code_caught_solitary_1_2 = true;
    group_extra_npcs_warden_1 = false;
    once_condition_595_6 = false;
    group_check_group_code_schedules_sleeping_1_0 = true;
    group_check_group_code_schedules_sleeping_1_1 = true;
    group_check_group_code_load_confirm_1_3 = true;
    group_check_group_code_load_confirm_1_2 = true;
    group_check_group_code_load_confirm_1_1 = true;
    group_check_group_code_load_confirm_1_0 = true;
    group_load_map_from_file_1 = true;
    group_code_pathfinding_guards_policing_reporting_body_1 = false;
    group_code_misc_mines_1 = false;
    group_code_misc_cameras_1 = false;
    every_2274_6 = 0.0f;
    once_condition_591_6 = false;
    group_code_inventory_underground_lighting_1 = false;
    once_condition_593_6 = false;
    group_code_misc_reindeer_1 = false;
    group_cheats_debug_mode_1 = false;
    group_check_group_code_pathfinding_inmates_1_0 = true;
    once_condition_738_6 = false;
    group_check_group_setup_new_desk_id_code_1_1 = true;
    group_setup_crafting_notes_1 = false;
    every_1654_6 = 0.0f;
    every_1752_6 = 0.0f;
    group_check_group_setup_setup_desks_1_2 = true;
    group_check_group_setup_setup_desks_1_0 = true;
    group_check_group_setup_setup_desks_1_1 = true;
    group_code_schedules_leisure_work_npcs_doing_jobs_1 = false;
    every_3766_6 = 0.0f;
    every_1375_6 = 0.0f;
    group_setup_set_walls_1 = false;
    group_check_group_code_gym_equip_punch_bag_1_0 = true;
    group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_gardening_1_0 = true;
    once_condition_2208_6 = false;
    group_check_group_code_zones_1_0 = true;
    group_code_sort_these_using_items_2_reading_1 = false;
    every_2190_6 = 0.0f;
    every_2063_6 = 0.0f;
    once_condition_734_6 = false;
    group_code_schedules_leisure_work_npcs_doing_jobs_npc_janitor_1 = false;
    group_check_group_setup_player_stats_time_1_1 = true;
    group_check_group_setup_player_stats_time_1_0 = true;
    group_check_group_setup_player_stats_time_1_3 = true;
    group_check_group_setup_player_stats_time_1_2 = true;
    group_check_group_setup_player_stats_time_1_5 = true;
    group_check_group_setup_player_stats_time_1_4 = true;
    every_2230_6 = 0.0f;
    group_check_group_code_schedules_roll_call_1_0 = true;
    group_check_group_code_schedules_roll_call_1_1 = true;
    every_1231_6 = 0.0f;
    group_code_sort_these_using_items_2_cutting_2_1 = false;
    group_code_payphone_1 = false;
    every_4380_6 = 0.0f;
    not_always_2099_6 = loop_count;
    group_code_left_clicked_sss_1 = false;
    every_2423_6 = 0.0f;
    group_code_pathfinding_guards_policing_beyond_walls_custom_maps_1 = false;
    group_code_pathfinding_guards_policing_during_lockdown_and_lights_out_outside_non_camp_map_1 = false;
    group_code_pathfinding_missing_equip_1 = false;
    every_3836_6 = 0.0f;
    group_check_group_code_pathfinding_guards_guard_towers_1_0 = true;
    group_check_group_extra_npcs_1_0 = true;
    group_check_group_code_dlc_eteam_1_0 = true;
    group_code_sort_these_using_items_2_digging_2_1 = false;
    every_3935_6 = 0.0f;
    every_3778_6 = 0.0f;
    every_2273_6 = 0.0f;
    every_4146_6 = 0.0f;
    group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1_0 = true;
    group_check_group_code_caught_solitary_1_5 = true;
    group_check_group_code_caught_solitary_1_4 = true;
    group_check_group_code_caught_solitary_1_7 = true;
    group_check_group_code_caught_solitary_1_6 = true;
    group_check_group_code_caught_solitary_1_1 = true;
    group_check_group_code_caught_solitary_1_0 = true;
    group_check_group_code_caught_solitary_1_3 = true;
    group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1_0 = true;
    group_code_pathfinding_guards_policing_beyond_walls_normal_maps_1 = false;
    group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_janitor_1_0 = true;
    group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1 = false;
    group_code_schedules_hour_tickover_camp_1 = false;
    once_condition_730_6 = false;
    group_code_toilet_1 = false;
    group_check_group_code_crafting_1_0 = true;
    group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1 = false;
    every_716_6 = 0.0f;
    group_code_out_of_bounds_beyond_walls_2_custom_maps_2_1 = false;
    group_check_group_setup_setup_vents_and_vent_slats_1_0 = true;
    group_code_left_clicked_ccl_1 = false;
}
// Function purpose: generated callback event_func_4962 processes event block(s) 24_7. Actions/conditions:
//        24_7: decrypts a save-data file.
void Frames::event_func_4962()
{
    // event 24_7 : decrypts a save-data file
    {
    BlowfishObject::decrypt_file(str_mothking_99, File::get_appdata_directory()+str_the_escapists_global_dat_300);
    }
    event_24_7_end: ;
}
// Function purpose: generated callback event_func_4963 processes event block(s) 25_7. Actions/conditions:
//        25_7: loads a game or save-data file; sets a stored numeric value.
void Frames::event_func_4963()
{
    // event 25_7 : loads a game or save-data file; sets a stored numeric value
    {
        ((INI*)get_instance(globals_127_instances))->load_file(File::get_appdata_directory()+str_the_escapists_global_dat_300, false, false, true);
        ((INI*)get_instance(globals_127_instances))->set_value_int(str_prisons_297, global_strings->get(0), 1);
    }
    event_25_7_end: ;
}
// Function purpose: generated callback event_func_4964 processes event block(s) 26_7. Group(s): Update Globals
//        with Score. Actions/conditions: 26_7: sets a stored numeric value.
void Frames::event_func_4964()
{
    // event 26_7 : sets a stored numeric value
    {
        // group: Update Globals with Score
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(84, str_newscore_2325)) > (((INI*)get_instance(globals_127_instances))->get_value(str_scores_245, global_strings->get(0), 0)))) goto event_26_7_end;
        ((INI*)get_instance(globals_127_instances))->set_value_int(str_scores_245, global_strings->get(0), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(84, str_newscore_2325));
    }
    event_26_7_end: ;
}
// Function purpose: generated callback event_func_4965 processes event block(s) 27_7. Actions/conditions:
//        27_7: updates game state with save_file().
void Frames::event_func_4965()
{
    // event 27_7 : updates game state with save_file()
    {
        ((INI*)get_instance(globals_127_instances))->save_file();
    }
    event_27_7_end: ;
}
// Function purpose: generated callback event_func_4966 processes event block(s) 28_7. Actions/conditions:
//        28_7: encrypts a save-data file.
void Frames::event_func_4966()
{
    // event 28_7 : encrypts a save-data file
    {
    BlowfishObject::encrypt_file(str_mothking_99, File::get_appdata_directory()+str_the_escapists_global_dat_300);
    }
    event_28_7_end: ;
}
void Frames::loop_score_global_7()
{
    event_func_4962();
    event_func_4963();
    event_func_4964();
    event_func_4965();
    event_func_4966();
}
// Function purpose: generated callback event_func_4967 processes event block(s) 55_7. Actions/conditions:
//        55_7: updates game state with File::delete_folder(File::get_appdata_directory()+\The
//        Escapists\save+number_to_string(global_values; splits saved text into fields; clears the current selection
//        or contents; plus 5 more actions.
void Frames::event_func_4967()
{
    // event 55_7 : updates game state with File::delete_folder(File::get_appdata_directory()+\The Escapists\save+number_to_string(global_values; splits saved text into fields; clears the current selection or contents; plus 5 more actions
    {
    File::delete_folder(File::get_appdata_directory()+str_the_escapists_save_190+number_to_string(global_values->get(14))+str__2303);
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(47, str_name_103)+str__346+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(48, str_avatar_105)), str__346);
        ((AssociateArray*)get_instance(gameVariables_instances))->clear();
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(47, str_name_103, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(48, str_avatar_105, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
    }
    event_55_7_end: ;
}
// Function purpose: generated callback event_func_4968 processes event block(s) 56_7. Actions/conditions:
//        56_7: plays a sound or music track; plays a sound or music track.
void Frames::event_func_4968()
{
    // event 56_7 : plays a sound or music track; plays a sound or music track
    {
        media.play_id(SOUND_RUMBLE_15, 1-1);
        media.play(str_music_theme_ogg_92, 10-1, 0);
        next_frame = 4 + 0;    
    
    }
    event_56_7_end: ;
}
void Frames::loop_close_level_7()
{
    event_func_4967();
    event_func_4968();
}
// Function purpose: generated callback event_func_4969 processes event block(s) 45_7. Actions/conditions:
//        45_7: sets filth to stringtokenizer_81->get(loop_censor_check_index).
void Frames::event_func_4969()
{
    // event 45_7 : sets filth to stringtokenizer_81->get(loop_censor_check_index)
    {
        if (!(group_drm_free_version_1)) goto event_45_7_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(44, str_filth_232, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_censor_check_index));
    }
    event_45_7_end: ;
}
// Function purpose: generated callback event_func_4970 processes event block(s) 46_7. Actions/conditions:
//        46_7: sets error to 1; sets a game or interface text string; sets the selected object's visibility to true;
//        plus 1 more actions.
void Frames::event_func_4970()
{
    // event 46_7 : sets error to 1; sets a game or interface text string; sets the selected object's visibility to true; plus 1 more actions
    {
        if (!(group_drm_free_version_1)) goto event_46_7_end;
        if (!((string_find(uppercase_string(((EditObject*)get_instance(lbname_531_instances))->get_text()), uppercase_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_filth_232)), 0)) != (-1))) goto event_46_7_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_error_233, 1);
        ((Text*)get_instance(filth_536_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_30_235));
        ((Text*)get_instance(filth_536_instances))->set_visible(true);
        ((Counter*)get_instance(counter_4_instances))->set(100);
    }
    event_46_7_end: ;
}
void Frames::loop_censor_check_7()
{
    event_func_4969();
    event_func_4970();
}
// Function purpose: generated callback event_func_4971 processes event block(s) 44_7. Actions/conditions:
//        44_7: splits saved text into fields.
void Frames::event_func_4971()
{
    // event 44_7 : splits saved text into fields
    {
        if (!(group_drm_free_version_1)) goto event_44_7_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(10, str_censored_90), str__96);
        {
            loop_censor_check_running = true;
            int times = int(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get_count());
            loop_censor_check_index = 0;
            while (loop_censor_check_index < times) {
                loop_censor_check_7();
                if (!loop_censor_check_running) break;
                loop_censor_check_index++;
            }
        }
    }
    event_44_7_end: ;
}
// Function purpose: generated callback event_func_4972 processes event block(s) 47_7. Actions/conditions:
//        47_7: plays a sound or music track.
void Frames::event_func_4972()
{
    // event 47_7 : plays a sound or music track
    {
        if (!(group_drm_free_version_1)) goto event_47_7_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (1))) goto event_47_7_end;
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_47_7_end: ;
}
// Function purpose: generated callback event_func_4973 processes event block(s) 48_7. Actions/conditions:
//        48_7: adds a post to the current list; adds a post to the current list; adds a post to the current list;
//        plus 14 more actions.
void Frames::event_func_4973()
{
    // event 48_7 : adds a post to the current list; adds a post to the current list; adds a post to the current list; plus 14 more actions
    {
        if (!(group_drm_free_version_1)) goto event_48_7_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (0))) goto event_48_7_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(85, str_has_lb_2326)) == (1))) goto event_48_7_end;
        if (!(true)) goto event_48_7_end;
        ((HTTPObject*)get_instance(getobject_526_instances))->add_post(str_s_id_2327, str_999_2328);
        ((HTTPObject*)get_instance(getobject_526_instances))->add_post(str_s_name_2329, ((EditObject*)get_instance(lbname_531_instances))->get_text());
        ((HTTPObject*)get_instance(getobject_526_instances))->add_post(str_days_2330, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(86, str_t_day_902)));
        ((HTTPObject*)get_instance(getobject_526_instances))->add_post(str_score_2331, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(84, str_newscore_2325)));
        ((HTTPObject*)get_instance(getobject_526_instances))->add_post(str_mins_2332, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(87, str_playtime_1553)));
        ((HTTPObject*)get_instance(getobject_526_instances))->add_post(str_version_2333, global_strings->get(1));
        ((HTTPObject*)get_instance(getobject_526_instances))->add_post(str_map_2334, global_strings->get(0));
        ((HTTPObject*)get_instance(getobject_526_instances))->add_post(str_savhas_1547, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(88, str_savhas_1547));
        ((HTTPObject*)get_instance(getobject_526_instances))->add_post(str_h_2335, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(89, str_hax_828)));
        ((HTTPObject*)get_instance(getobject_526_instances))->add_post(str_chipped_dug_cuts_downed_2336, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(90, str_track_chipped_1323))+str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(91, str_track_dug_1576))+str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(92, str_track_cuts_865))+str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(93, str_track_downed_1578)));
        ((StringParser*)get_instance(stringparser_527_instances))->set(str_lolrus_999_2337+((EditObject*)get_instance(lbname_531_instances))->get_text()+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(86, str_t_day_902))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(84, str_newscore_2325))+str__254+global_strings->get(1)+str__254+global_strings->get(0));
        ((StringParser*)get_instance(stringparser_527_instances))->set(((StringParser*)get_instance(stringparser_527_instances))->get_md5());
        ((HTTPObject*)get_instance(getobject_526_instances))->add_post(str_md5_2338, ((StringParser*)get_instance(stringparser_527_instances))->value);
        ((HTTPObject*)get_instance(getobject_526_instances))->get(str_http_www_escapistgame_com_lbsub_stm_php_2339);
    }
    event_48_7_end: ;
}
// Function purpose: generated callback event_func_4974 processes event block(s) 49_7. Actions/conditions:
//        49_7: sets SENT to 1; hides a game layer; sets the object's animation to 2.
void Frames::event_func_4974()
{
    // event 49_7 : sets SENT to 1; hides a game layer; sets the object's animation to 2
    {
        if (!(group_drm_free_version_1)) goto event_49_7_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (0))) goto event_49_7_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(94, str_sent_2340, 1);
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(2-1);
        ((Active*)get_instance(submitted_539_instances))->force_animation(2);
    }
    event_49_7_end: ;
}
void Frames::loop_check_name_7()
{
    event_func_4971();
    event_func_4972();
    event_func_4973();
    event_func_4974();
}
void Frames::test_collisions_7()
{
    ObjectList::iterator it1, it2;
}
void Frames::steam_download_success_7()
{
    folder_search_loop_0();
}
void Frames::steam_download_fail_7()
{
    folder_search_loop_0();
}
void Frames::steam_on_loop_7()
{
    folder_search_loop_0();
}
void Frames::steam_on_loop_finish_7()
{
    folder_search_loop_0();
}
void Frames::steam_search_success_7()
{
    folder_search_loop_0();
}
void Frames::steam_on_connect_7()
{
    folder_search_loop_0();
}
// Function purpose: generated callback event_func_4975 processes event block(s) 8_7. Group(s): Show Score.
//        Actions/conditions: 8_7: increments ticktock by 1.
void Frames::event_func_4975()
{
    VITA_LEGACY_EVENT();
    // event 8_7 : increments ticktock by 1
    {
        // group: Show Score
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(95, str_ticktock_2341, 1);
    }
    event_8_7_end: ;
}
// Function purpose: generated callback event_func_4976 processes event block(s) 9_7. Group(s): Show Score.
//        Actions/conditions: 9_7: sets a game or interface text string; sets a game or interface text string.
void Frames::event_func_4976()
{
    VITA_LEGACY_EVENT();
    // event 9_7 : sets a game or interface text string; sets a game or interface text string
    {
        // group: Show Score
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(95, str_ticktock_2341)) == (25))) goto event_9_7_end;
        ((Text*)get_instance(scstats_521_instances))->set_string(((Text*)get_instance(scstats_521_instances))->text+uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_escaped_2342, str_2_155)+str__1589));
        ((Text*)get_instance(totals_523_instances))->set_string(((Text*)get_instance(totals_523_instances))->text+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(96, str_endscore_stats_2343)));
    }
    event_9_7_end: ;
}
// Function purpose: generated callback event_func_4977 processes event block(s) 10_7. Group(s): Show Score.
//        Actions/conditions: 10_7: sets a game or interface text string; sets a game or interface text string.
void Frames::event_func_4977()
{
    VITA_LEGACY_EVENT();
    // event 10_7 : sets a game or interface text string; sets a game or interface text string
    {
        // group: Show Score
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(95, str_ticktock_2341)) == (50))) goto event_10_7_end;
        ((Text*)get_instance(scstats_521_instances))->set_string(((Text*)get_instance(scstats_521_instances))->text+str__198+uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_escaped_2342, str_11_331)+str__1589));
        ((Text*)get_instance(totals_523_instances))->set_string(((Text*)get_instance(totals_523_instances))->text+str__198+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(97, str_susp_total_1588))+str__2050);
    }
    event_10_7_end: ;
}
// Function purpose: generated callback event_func_4978 processes event block(s) 11_7. Group(s): Show Score.
//        Actions/conditions: 11_7: sets a game or interface text string; sets a game or interface text string.
void Frames::event_func_4978()
{
    VITA_LEGACY_EVENT();
    // event 11_7 : sets a game or interface text string; sets a game or interface text string
    {
        // group: Show Score
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(95, str_ticktock_2341)) == (75))) goto event_11_7_end;
        ((Text*)get_instance(scstats_521_instances))->set_string(((Text*)get_instance(scstats_521_instances))->text+str__198+uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_escaped_2342, str_3_158)+str__1589));
        ((Text*)get_instance(totals_523_instances))->set_string(((Text*)get_instance(totals_523_instances))->text+str__198+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(98, str_comb_rep_1458)));
    }
    event_11_7_end: ;
}
// Function purpose: generated callback event_func_4979 processes event block(s) 12_7. Group(s): Show Score.
//        Actions/conditions: 12_7: sets a game or interface text string; sets a game or interface text string.
void Frames::event_func_4979()
{
    VITA_LEGACY_EVENT();
    // event 12_7 : sets a game or interface text string; sets a game or interface text string
    {
        // group: Show Score
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(95, str_ticktock_2341)) == (100))) goto event_12_7_end;
        ((Text*)get_instance(scstats_521_instances))->set_string(((Text*)get_instance(scstats_521_instances))->text+str__198+uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_escaped_2342, str_4_161)+str__1589));
        ((Text*)get_instance(totals_523_instances))->set_string(((Text*)get_instance(totals_523_instances))->text+str__198+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(99, str_score_p_1236)));
    }
    event_12_7_end: ;
}
// Function purpose: generated callback event_func_4980 processes event block(s) 13_7. Group(s): Show Score.
//        Actions/conditions: 13_7: sets a game or interface text string; sets a game or interface text string.
void Frames::event_func_4980()
{
    VITA_LEGACY_EVENT();
    // event 13_7 : sets a game or interface text string; sets a game or interface text string
    {
        // group: Show Score
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(95, str_ticktock_2341)) == (125))) goto event_13_7_end;
        ((Text*)get_instance(scstats_521_instances))->set_string(((Text*)get_instance(scstats_521_instances))->text+str__198+uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_escaped_2342, str_5_164)+str__1589));
        ((Text*)get_instance(totals_523_instances))->set_string(((Text*)get_instance(totals_523_instances))->text+str__2344+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(100, str_score_n_1157)));
    }
    event_13_7_end: ;
}
// Function purpose: generated callback event_func_4981 processes event block(s) 14_7. Group(s): Show Score.
//        Actions/conditions: 14_7: sets a game or interface text string; sets a game or interface text string.
void Frames::event_func_4981()
{
    VITA_LEGACY_EVENT();
    // event 14_7 : sets a game or interface text string; sets a game or interface text string
    {
        // group: Show Score
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(95, str_ticktock_2341)) == (150))) goto event_14_7_end;
        ((Text*)get_instance(scstats_521_instances))->set_string(((Text*)get_instance(scstats_521_instances))->text+str__198+uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_escaped_2342, str_12_334)+str__1589));
        ((Text*)get_instance(totals_523_instances))->set_string(((Text*)get_instance(totals_523_instances))->text+str__198+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(101, str_endscore_daysbonus_2345)));
    }
    event_14_7_end: ;
}
// Function purpose: generated callback event_func_4982 processes event block(s) 15_7. Group(s): Show Score.
//        Actions/conditions: 15_7: sets a game or interface text string; sets a game or interface text string.
void Frames::event_func_4982()
{
    VITA_LEGACY_EVENT();
    // event 15_7 : sets a game or interface text string; sets a game or interface text string
    {
        // group: Show Score
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(95, str_ticktock_2341)) == (175))) goto event_15_7_end;
        ((Text*)get_instance(scstats_521_instances))->set_string(((Text*)get_instance(scstats_521_instances))->text+str__198+uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_escaped_2342, str_13_632)+str__1589));
        ((Text*)get_instance(totals_523_instances))->set_string(((Text*)get_instance(totals_523_instances))->text+str__198+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(102, str_endscore_eff_2346)));
    }
    event_15_7_end: ;
}
// Function purpose: generated callback event_func_4983 processes event block(s) 16_7. Group(s): Show Score.
//        Actions/conditions: 16_7: sets a game or interface text string.
void Frames::event_func_4983()
{
    VITA_LEGACY_EVENT();
    // event 16_7 : sets a game or interface text string
    {
        // group: Show Score
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(95, str_ticktock_2341)) == (200))) goto event_16_7_end;
        ((Text*)get_instance(overallscore2_541_instances))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_escaped_2342, str_7_323)));
    }
    event_16_7_end: ;
}
// Function purpose: generated callback event_func_4984 processes event block(s) 17_7. Group(s): Show Score.
//        Actions/conditions: 17_7: sets a game or interface text string.
void Frames::event_func_4984()
{
    VITA_LEGACY_EVENT();
    // event 17_7 : sets a game or interface text string
    {
        // group: Show Score
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(95, str_ticktock_2341)) == (225))) goto event_17_7_end;
        ((Text*)get_instance(overallscore3_542_instances))->set_string(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(84, str_newscore_2325)));
    }
    event_17_7_end: ;
}
// Function purpose: generated callback event_func_4985 processes event block(s) 20_7. Actions/conditions:
//        20_7: sets LClick to 0.
void Frames::event_func_4985()
{
    // event 20_7 : sets LClick to 0
    {
        if (!(frame_time >= 1.0)) goto event_20_7_end;
        if (is_mouse_pressed(SDL_BUTTON_LEFT)) goto event_20_7_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 0);
    }
    event_20_7_end: ;
}
// Function purpose: generated callback event_func_4986 processes event block(s) 21_7. Actions/conditions:
//        21_7: checks the event-specific game state condition is met; this handler gates a game event without a
//        direct value/object action.
void Frames::event_func_4986()
{
    // event 21_7 : checks the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!((global_values->get(16)) == (0))) goto event_21_7_end;
        if (!group_drm_free_version_1) {
            group_drm_free_version_1 = true;
        }
    }
    event_21_7_end: ;
}
// Function purpose: generated callback event_func_4987 processes event block(s) 22_7. Actions/conditions:
//        22_7: checks the event-specific game state condition is met; this handler gates a game event without a
//        direct value/object action.
void Frames::event_func_4987()
{
    // event 22_7 : checks the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!((global_values->get(16)) == (1))) goto event_22_7_end;
        if (!group_drm_version_1) {
            group_drm_version_1 = true;
            group_check_group_drm_version_1_0 = true;
        }
    }
    event_22_7_end: ;
}
// Function purpose: generated callback event_func_4988 processes event block(s) 23_7. Group(s): Update Globals
//        with Score. Actions/conditions: 23_7: checks skips if the event-specific game state condition is met; the
//        event-specific game state condition is met; this handler gates a game event without a dir.
void Frames::event_func_4988()
{
    // event 23_7 : checks skips if the event-specific game state condition is met; the event-specific game state condition is met; this handler gates a game event without a dir
    {
        // group: Update Globals with Score
        if (frame_time < 0.1) goto event_23_7_end;
        if (not_always_23_7 > loop_count) {
            not_always_23_7 = loop_count + 2;
            goto event_23_7_end;
        }
        not_always_23_7 = loop_count + 2;
        if (!((global_values->get(18)) == (0))) goto event_23_7_end;
        {
            loop_score_global_running = true;
            int times = int(1);
            loop_score_global_index = 0;
            while (loop_score_global_index < times) {
                loop_score_global_7();
                if (!loop_score_global_running) break;
                loop_score_global_index++;
            }
        }
    }
    event_23_7_end: ;
}
// Function purpose: generated callback event_func_4989 processes event block(s) 29_7. Actions/conditions:
//        29_7: updates game state with request_user_data().
void Frames::event_func_4989()
{
    // event 29_7 : updates game state with request_user_data()
    {
        if (!(group_drm_version_1)) goto event_29_7_end;
        if (!group_check_group_drm_version_1_0) goto event_29_7_end;
        group_check_group_drm_version_1_0 = false;
        ((SteamObject*)get_instance(steamworks2_15_instances))->request_user_data();
    }
    event_29_7_end: ;
}
// Function purpose: generated callback event_func_4990 processes event block(s) 30_7. Actions/conditions:
//        30_7: adds a post to the current list; adds a post to the current list; adds a post to the current list;
//        plus 15 more actions.
void Frames::event_func_4990()
{
    // event 30_7 : adds a post to the current list; adds a post to the current list; adds a post to the current list; plus 15 more actions
    {
        if (!(group_drm_version_1)) goto event_30_7_end;
        if (frame_time < 1.0) goto event_30_7_end;
        if (not_always_30_7 > loop_count) {
            not_always_30_7 = loop_count + 2;
            goto event_30_7_end;
        }
        not_always_30_7 = loop_count + 2;
        if (!((global_strings->get(5)) != (empty_string))) goto event_30_7_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(85, str_has_lb_2326)) == (1))) goto event_30_7_end;
        if (!(true)) goto event_30_7_end;
        ((HTTPObject*)get_instance(getobject_526_instances))->add_post(str_s_id_2327, number_to_string(global_values->get(15)));
        ((HTTPObject*)get_instance(getobject_526_instances))->add_post(str_s_name_2329, global_strings->get(5));
        ((HTTPObject*)get_instance(getobject_526_instances))->add_post(str_days_2330, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(86, str_t_day_902)));
        ((HTTPObject*)get_instance(getobject_526_instances))->add_post(str_score_2331, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(84, str_newscore_2325)));
        ((HTTPObject*)get_instance(getobject_526_instances))->add_post(str_mins_2332, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(87, str_playtime_1553)));
        ((HTTPObject*)get_instance(getobject_526_instances))->add_post(str_version_2333, global_strings->get(1));
        ((HTTPObject*)get_instance(getobject_526_instances))->add_post(str_map_2334, global_strings->get(0));
        ((HTTPObject*)get_instance(getobject_526_instances))->add_post(str_savhas_1547, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(88, str_savhas_1547));
        ((HTTPObject*)get_instance(getobject_526_instances))->add_post(str_h_2335, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(89, str_hax_828)));
        ((HTTPObject*)get_instance(getobject_526_instances))->add_post(str_chipped_dug_cuts_downed_2336, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(90, str_track_chipped_1323))+str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(91, str_track_dug_1576))+str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(92, str_track_cuts_865))+str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(93, str_track_downed_1578)));
        ((StringParser*)get_instance(stringparser_527_instances))->set(str_lolrus_2347+number_to_string(global_values->get(15))+str__254+global_strings->get(5)+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(86, str_t_day_902))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(84, str_newscore_2325))+str__254+global_strings->get(1)+str__254+global_strings->get(0));
        ((StringParser*)get_instance(stringparser_527_instances))->set(((StringParser*)get_instance(stringparser_527_instances))->get_md5());
        ((HTTPObject*)get_instance(getobject_526_instances))->add_post(str_md5_2338, ((StringParser*)get_instance(stringparser_527_instances))->value);
        ((HTTPObject*)get_instance(getobject_526_instances))->get(str_http_www_escapistgame_com_lbsub_stm_php_2339);
        ((Active*)get_instance(submitted_539_instances))->force_animation(2);
    }
    event_30_7_end: ;
}
// Function purpose: generated callback event_func_4991 processes event block(s) 31_7. Actions/conditions:
//        31_7: updates game state with File::delete_folder(File::get_appdata_directory()+\The
//        Escapists\save+number_to_string(global_values.
void Frames::event_func_4991()
{
    // event 31_7 : updates game state with File::delete_folder(File::get_appdata_directory()+\The Escapists\save+number_to_string(global_values
    {
        if (!(group_drm_version_1)) goto event_31_7_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_31_7_end;
        if (!(frame_time >= 2.0)) goto event_31_7_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_31_7_end;
    File::delete_folder(File::get_appdata_directory()+str_the_escapists_save_190+number_to_string(global_values->get(14))+str__2303);
        {
            loop_close_level_running = true;
            int times = int(1);
            loop_close_level_index = 0;
            while (loop_close_level_index < times) {
                loop_close_level_7();
                if (!loop_close_level_running) break;
                loop_close_level_index++;
            }
        }
    }
    event_31_7_end: ;
}
// Function purpose: generated callback event_func_4992 processes event block(s) 32_7. Actions/conditions:
//        32_7: unlocks the DayOne achievement.
void Frames::event_func_4992()
{
    // event 32_7 : unlocks the DayOne achievement
    {
        if (!(group_drm_version_1)) goto event_32_7_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(86, str_t_day_902)) == (1))) goto event_32_7_end;
        if (!((global_values->get(16)) == (1))) goto event_32_7_end;
        if (((SteamObject*)get_instance(steamworks2_15_instances))->is_achievement_unlocked(str_dayone_2348)) goto event_32_7_end;
        ((SteamObject*)get_instance(steamworks2_15_instances))->unlock_achievement(str_dayone_2348);
    }
    event_32_7_end: ;
}
// Function purpose: generated callback event_func_4993 processes event block(s) 33_7. Actions/conditions:
//        33_7: unlocks the NorthernLights achievement.
void Frames::event_func_4993()
{
    // event 33_7 : unlocks the NorthernLights achievement
    {
        if (!(group_drm_version_1)) goto event_33_7_end;
        if (!((global_values->get(16)) == (1))) goto event_33_7_end;
        if (!((global_strings->get(0)) == (str_ss_136))) goto event_33_7_end;
        if (!((global_values->get(18)) == (1))) goto event_33_7_end;
        if (((SteamObject*)get_instance(steamworks2_15_instances))->is_achievement_unlocked(str_northernlights_2349)) goto event_33_7_end;
        ((SteamObject*)get_instance(steamworks2_15_instances))->unlock_achievement(str_northernlights_2349);
    }
    event_33_7_end: ;
}
// Function purpose: generated callback event_func_4994 processes event block(s) 34_7. Actions/conditions:
//        34_7: unlocks the SoldiersOfFortune achievement.
void Frames::event_func_4994()
{
    // event 34_7 : unlocks the SoldiersOfFortune achievement
    {
        if (!(group_drm_version_1)) goto event_34_7_end;
        if (!((global_values->get(16)) == (1))) goto event_34_7_end;
        if (!((global_strings->get(0)) == (str_escapeteam_138))) goto event_34_7_end;
        if (!((global_values->get(18)) == (1))) goto event_34_7_end;
        if (((SteamObject*)get_instance(steamworks2_15_instances))->is_achievement_unlocked(str_soldiersoffortune_2350)) goto event_34_7_end;
        ((SteamObject*)get_instance(steamworks2_15_instances))->unlock_achievement(str_soldiersoffortune_2350);
    }
    event_34_7_end: ;
}
// Function purpose: generated callback event_func_4995 processes event block(s) 35_7. Actions/conditions:
//        35_7: unlocks the SpyHard achievement.
void Frames::event_func_4995()
{
    // event 35_7 : unlocks the SpyHard achievement
    {
        if (!(group_drm_version_1)) goto event_35_7_end;
        if (!((global_values->get(16)) == (1))) goto event_35_7_end;
        if (!((global_strings->get(0)) == (str_dtaf_137))) goto event_35_7_end;
        if (!((global_values->get(18)) == (1))) goto event_35_7_end;
        if (((SteamObject*)get_instance(steamworks2_15_instances))->is_achievement_unlocked(str_spyhard_2351)) goto event_35_7_end;
        ((SteamObject*)get_instance(steamworks2_15_instances))->unlock_achievement(str_spyhard_2351);
    }
    event_35_7_end: ;
}
// Function purpose: generated callback event_func_4996 processes event block(s) 36_7. Actions/conditions:
//        36_7: unlocks the LovedUp achievement.
void Frames::event_func_4996()
{
    // event 36_7 : unlocks the LovedUp achievement
    {
        if (!(group_drm_version_1)) goto event_36_7_end;
        if (!((global_values->get(16)) == (1))) goto event_36_7_end;
        if (!((global_strings->get(0)) == (str_escapeteam_138))) goto event_36_7_end;
        if (!((global_values->get(18)) == (1))) goto event_36_7_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(103, str_tot_inmate_rep_1457)) >= (270))) goto event_36_7_end;
        if (((SteamObject*)get_instance(steamworks2_15_instances))->is_achievement_unlocked(str_lovedup_2352)) goto event_36_7_end;
        ((SteamObject*)get_instance(steamworks2_15_instances))->unlock_achievement(str_lovedup_2352);
    }
    event_36_7_end: ;
}
// Function purpose: generated callback event_func_4997 processes event block(s) 37_7. Actions/conditions:
//        37_7: unlocks the CleanGetaway achievement.
void Frames::event_func_4997()
{
    // event 37_7 : unlocks the CleanGetaway achievement
    {
        if (!(group_drm_version_1)) goto event_37_7_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(97, str_susp_total_1588)) <= (0))) goto event_37_7_end;
        if (!((global_values->get(16)) == (1))) goto event_37_7_end;
        if (((SteamObject*)get_instance(steamworks2_15_instances))->is_achievement_unlocked(str_cleangetaway_2353)) goto event_37_7_end;
        ((SteamObject*)get_instance(steamworks2_15_instances))->unlock_achievement(str_cleangetaway_2353);
    }
    event_37_7_end: ;
}
// Function purpose: generated callback event_func_4998 processes event block(s) 38_7. Actions/conditions:
//        38_7: unlocks the escapist achievement.
void Frames::event_func_4998()
{
    // event 38_7 : unlocks the escapist achievement
    {
        if (!(group_drm_version_1)) goto event_38_7_end;
        if (!((global_values->get(16)) == (1))) goto event_38_7_end;
        if (((SteamObject*)get_instance(steamworks2_15_instances))->is_achievement_unlocked(str_escapist_2354)) goto event_38_7_end;
        if (!((((INI*)get_instance(globals_127_instances))->get_value(str_prisons_297, str_perks_143, 0)) >= (1))) goto event_38_7_end;
        if (!((((INI*)get_instance(globals_127_instances))->get_value(str_prisons_297, str_stalagflucht_144, 0)) >= (1))) goto event_38_7_end;
        if (!((((INI*)get_instance(globals_127_instances))->get_value(str_prisons_297, str_shanktonstatepen_145, 0)) >= (1))) goto event_38_7_end;
        if (!((((INI*)get_instance(globals_127_instances))->get_value(str_prisons_297, str_jungle_146, 0)) >= (1))) goto event_38_7_end;
        if (!((((INI*)get_instance(globals_127_instances))->get_value(str_prisons_297, str_sanpancho_147, 0)) >= (1))) goto event_38_7_end;
        if (!((((INI*)get_instance(globals_127_instances))->get_value(str_prisons_297, str_irongate_148, 0)) >= (1))) goto event_38_7_end;
        ((SteamObject*)get_instance(steamworks2_15_instances))->unlock_achievement(str_escapist_2354);
    }
    event_38_7_end: ;
}
// Function purpose: generated callback event_func_4999 processes event block(s) 39_7. Actions/conditions:
//        39_7: sets SENT to 1.
void Frames::event_func_4999()
{
    // event 39_7 : sets SENT to 1
    {
        if (!(group_drm_free_version_1)) goto event_39_7_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(85, str_has_lb_2326)) == (0))) goto event_39_7_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(94, str_sent_2340, 1);
    }
    event_39_7_end: ;
}
// Function purpose: generated callback event_func_5000 processes event block(s) 40_7. Actions/conditions:
//        40_7: shows a game layer.
void Frames::event_func_5000()
{
    // event 40_7 : shows a game layer
    {
        if (!(group_drm_free_version_1)) goto event_40_7_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_40_7_end;
        if (!(frame_time >= 2.0)) goto event_40_7_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(85, str_has_lb_2326)) == (1))) goto event_40_7_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_sent_2340)) == (0))) goto event_40_7_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_40_7_end;
        ((LayerObject*)get_instance(layerobject_37_instances))->show_layer(2-1);
    }
    event_40_7_end: ;
}
// Function purpose: generated callback event_func_5001 processes event block(s) 41_7. Actions/conditions:
//        41_7: checks the event-specific game state condition is met; game state has_LB; game state SENT; game state
//        LClick; this handler gates a game event without a direc.
void Frames::event_func_5001()
{
    // event 41_7 : checks the event-specific game state condition is met; game state has_LB; game state SENT; game state LClick; this handler gates a game event without a direc
    {
        if (!(group_drm_free_version_1)) goto event_41_7_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_41_7_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(85, str_has_lb_2326)) == (0))) goto event_41_7_end;
        if (!(frame_time >= 2.0)) goto event_41_7_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_sent_2340)) == (0))) goto event_41_7_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_41_7_end;
        {
            loop_close_level_running = true;
            int times = int(1);
            loop_close_level_index = 0;
            while (loop_close_level_index < times) {
                loop_close_level_7();
                if (!loop_close_level_running) break;
                loop_close_level_index++;
            }
        }
    }
    event_41_7_end: ;
}
// Function purpose: generated callback event_func_5002 processes event block(s) 42_7. Actions/conditions:
//        42_7: sets a game or interface text string; enables keyboard focus for the control.
void Frames::event_func_5002()
{
    // event 42_7 : sets a game or interface text string; enables keyboard focus for the control
    {
        if (!(group_drm_free_version_1)) goto event_42_7_end;
        if (!(layers[2-1].visible)) goto event_42_7_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_sent_2340)) == (0))) goto event_42_7_end;
        ((Text*)get_instance(slot5_533_instances))->set_string(((EditObject*)get_instance(lbname_531_instances))->get_text()+str__96);
        ((EditObject*)get_instance(lbname_531_instances))->enable_focus();
    }
    event_42_7_end: ;
}
// Function purpose: generated callback event_func_5003 processes event block(s) 43_7. Actions/conditions:
//        43_7: sets error to 0.
void Frames::event_func_5003()
{
    // event 43_7 : sets error to 0
    {
        if (!(group_drm_free_version_1)) goto event_43_7_end;
        if (!(is_key_pressed_once(SDLK_RETURN))) goto event_43_7_end;
        if (!(layers[2-1].visible)) goto event_43_7_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_error_233, 0);
        {
            loop_check_name_running = true;
            int times = int(1);
            loop_check_name_index = 0;
            while (loop_check_name_index < times) {
                loop_check_name_7();
                if (!loop_check_name_running) break;
                loop_check_name_index++;
            }
        }
    }
    event_43_7_end: ;
}
// Function purpose: generated callback event_func_5004 processes event block(s) 50_7. Actions/conditions:
//        50_7: checks the event-specific game state condition is met; game state SENT; skips if the event-specific
//        game state condition is met; game state LClick; this hand.
void Frames::event_func_5004()
{
    // event 50_7 : checks the event-specific game state condition is met; game state SENT; skips if the event-specific game state condition is met; game state LClick; this hand
    {
        if (!(group_drm_free_version_1)) goto event_50_7_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_50_7_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_sent_2340)) == (1))) goto event_50_7_end;
        if (layers[2-1].visible) goto event_50_7_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_50_7_end;
        {
            loop_close_level_running = true;
            int times = int(1);
            loop_close_level_index = 0;
            while (loop_close_level_index < times) {
                loop_close_level_7();
                if (!loop_close_level_running) break;
                loop_close_level_index++;
            }
        }
    }
    event_50_7_end: ;
}
// Function purpose: generated callback event_func_5005 processes event block(s) 51_7. Actions/conditions:
//        51_7: subtracts from the current value.
void Frames::event_func_5005()
{
    // event 51_7 : subtracts from the current value
    {
        if (!(group_drm_free_version_1)) goto event_51_7_end;
        if (!((((Counter*)get_instance(counter_4_instances))->value) > (0))) goto event_51_7_end;
        ((Counter*)get_instance(counter_4_instances))->subtract(1);
    }
    event_51_7_end: ;
}
// Function purpose: generated callback event_func_5006 processes event block(s) 52_7. Actions/conditions:
//        52_7: sets the selected object's visibility to false.
void Frames::event_func_5006()
{
    // event 52_7 : sets the selected object's visibility to false
    {
        if (!(group_drm_free_version_1)) goto event_52_7_end;
        if (!((((Counter*)get_instance(counter_4_instances))->value) == (0))) goto event_52_7_end;
        ((Text*)get_instance(filth_536_instances))->set_visible(false);
    }
    event_52_7_end: ;
}
// Function purpose: generated callback event_func_5007 processes event block(s) 53_7. Actions/conditions:
//        53_7: sets the selected object's visibility to true; updates game state with flash((500) / 1000.0).
void Frames::event_func_5007()
{
    VITA_LEGACY_EVENT();
    // event 53_7 : sets the selected object's visibility to true; updates game state with flash((500) / 1000.0)
    {
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(95, str_ticktock_2341)) == (250))) goto event_53_7_end;
        ((Text*)get_instance(clicktocont_522_instances))->set_visible(true);
        ((Text*)get_instance(clicktocont_522_instances))->flash((500) / 1000.0);
    }
    event_53_7_end: ;
}
void Frames::handle_frame_8_events()
{
    test_collisions_7();
    event_func_4985();
    event_func_4990();
    if (next_frame != -1) return;
    event_func_4975();
    event_func_4976();
    event_func_4977();
    event_func_4978();
    event_func_4979();
    event_func_4980();
    event_func_4981();
    event_func_4982();
    event_func_4983();
    event_func_4984();
    event_func_4986();
    event_func_4987();
    event_func_4988();
    if (!group_drm_version_1) goto group_drm_version_1_end;
    event_func_4989();
    event_func_4992();
    event_func_4993();
    event_func_4994();
    event_func_4995();
    event_func_4996();
    event_func_4997();
    event_func_4998();
    group_drm_version_1_end: ;
    if (!group_drm_free_version_1) goto group_drm_free_version_1_end;
    event_func_4999();
    event_func_5002();
    event_func_5003();
    event_func_5005();
    event_func_5006();
    group_drm_free_version_1_end: ;
    event_func_5007();
    event_func_17();
}
void Frames::handle_frame_8_pre_events()
{
    event_func_4991();
    event_func_5000();
    event_func_5001();
    event_func_5004();
}
// Function purpose: generated callback event_func_5008 processes event block(s) 1_7. Actions/conditions: 1_7:
//        plays a sound or music track; loads a game or save-data file; sets the selected object's visibility to
//        false; plus 7 more actions.
void Frames::event_func_5008()
{
    // event 1_7 : plays a sound or music track; loads a game or save-data file; sets the selected object's visibility to false; plus 7 more actions
    {
        media.play(str_music_escaped_ogg_2355, 10-1, 1);
        ((INI*)get_instance(translationData_instances))->load_file(str_data_data_215+global_strings->get(6)+str_dat_216);
        ((Text*)get_instance(filth_536_instances))->set_visible(false);
        media.play_id(SOUND_RUMBLE_15, 1-1);
        ((EditObject*)get_instance(lbname_531_instances))->set_limit(12);
        
        global_values->set(11, 0);
        ((Text*)get_instance(dchar2_225_instances))->set_string(empty_string);
    }
    event_1_7_end: ;
}
// Function purpose: generated callback event_func_5009 processes event block(s) 2_7. Actions/conditions: 2_7:
//        sets a game or interface text string; sets LClick to 1; sets the selected object's visibility to false; plus
//        10 more actions.
void Frames::event_func_5009()
{
    // event 2_7 : sets a game or interface text string; sets LClick to 1; sets the selected object's visibility to false; plus 10 more actions
    {
        ((Text*)get_instance(totals_523_instances))->set_string(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(86, str_t_day_902))+str__198+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(97, str_susp_total_1588)/MathHelper()/(get_max(((AssociateArray*)get_instance(gameVariables_instances))->get_value(86, str_t_day_902)-1, 1)))+str__2356+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(87, str_playtime_1553))+str__189+((INI*)get_instance(translationData_instances))->get_string(str_escaped_2342, str_10_329)+str__624+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(104, str_score_total_2357)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        ((Text*)get_instance(clicktocont_522_instances))->set_visible(false);
        ((Text*)get_instance(overallscore_525_instances))->set_string(uppercase_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(53, str_mapname_126)));
        ((Text*)get_instance(scstats_521_instances))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_escaped_2342, str_6_241)+str__2358+((INI*)get_instance(translationData_instances))->get_string(str_escaped_2342, str_11_331)+str__2358+((INI*)get_instance(translationData_instances))->get_string(str_escaped_2342, str_9_327)+str__2359+((INI*)get_instance(translationData_instances))->get_string(str_escaped_2342, str_7_323)+str__1589));
        ((Text*)get_instance(clicktocont_522_instances))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_escaped_2342, str_8_325)));
        ((Text*)get_instance(youescaped_530_instances))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_escaped_2342, str_1_97)));
        ((Text*)get_instance(enteraname_532_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_leaderboards_1710, str_6_241));
        ((Text*)get_instance(overallscore2_541_instances))->set_string(empty_string);
        ((Text*)get_instance(overallscore3_542_instances))->set_string(empty_string);
    }
    event_2_7_end: ;
}
// Function purpose: generated callback event_func_5010 processes event block(s) 3_7. Actions/conditions: 3_7:
//        sets EndScore_DaysBonus to 0; sets ticktock to -15.
void Frames::event_func_5010()
{
    // event 3_7 : sets EndScore_DaysBonus to 0; sets ticktock to -15
    {
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(101, str_endscore_daysbonus_2345, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(95, str_ticktock_2341, -15);
    }
    event_3_7_end: ;
}
// Function purpose: generated callback event_func_5011 processes event block(s) 4_7. Group(s): new score calc.
//        Actions/conditions: 4_7: sets EndScore_DaysBonus to 1000*(16-gameVariables->get_value(86, T_day)).
void Frames::event_func_5011()
{
    // event 4_7 : sets EndScore_DaysBonus to 1000*(16-gameVariables->get_value(86, T_day))
    {
        // group: new score calc
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(86, str_t_day_902)) < (16))) goto event_4_7_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(101, str_endscore_daysbonus_2345, 1000*(16-((AssociateArray*)get_instance(gameVariables_instances))->get_value(86, str_t_day_902)));
    }
    event_4_7_end: ;
}
// Function purpose: generated callback event_func_5012 processes event block(s) 5_7. Actions/conditions: 5_7:
//        increments Susp_Total by gameVariables->get_value(105, Susp_Highest); sets Susp_Total to
//        get_min(100, gameVariables->get_value(97,
//        Susp_Total)/MathHelper()/gameVariables->get_value(86, T_day)); sets Susp_Total to get_max(0,
//        gameVariables->get_value(97, Susp_Total)); plus 7 more actions.
void Frames::event_func_5012()
{
    // event 5_7 : increments Susp_Total by gameVariables->get_value(105, Susp_Highest); sets Susp_Total to get_min(100, gameVariables->get_value(97, Susp_Total)/MathHelper()/gameVariables->get_value(86, T_day)); sets Susp_Total to get_max(0, gameVariables->get_value(97, Susp_Total)); plus 7 more actions
    {
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(97, str_susp_total_1588, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(105, str_susp_highest_1912));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(97, str_susp_total_1588, get_min(100, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(97, str_susp_total_1588)/MathHelper()/((AssociateArray*)get_instance(gameVariables_instances))->get_value(86, str_t_day_902)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(97, str_susp_total_1588, get_max(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(97, str_susp_total_1588)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(100, str_score_n_1157, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(100, str_score_n_1157)+(((AssociateArray*)get_instance(gameVariables_instances))->get_value(97, str_susp_total_1588)*10));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(96, str_endscore_stats_2343, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(106, str_end_str_1459)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(107, str_end_spd_1460)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(108, str_end_int_1461));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(102, str_endscore_eff_2346, get_max(0, (30000-((AssociateArray*)get_instance(gameVariables_instances))->get_value(109, str_score_f_1125))));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(84, str_newscore_2325, (((AssociateArray*)get_instance(gameVariables_instances))->get_value(96, str_endscore_stats_2343)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(102, str_endscore_eff_2346)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(98, str_comb_rep_1458)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(99, str_score_p_1236)-((AssociateArray*)get_instance(gameVariables_instances))->get_value(100, str_score_n_1157))+((AssociateArray*)get_instance(gameVariables_instances))->get_value(101, str_endscore_daysbonus_2345));
    }
    event_5_7_end: ;
}
// Function purpose: generated callback event_func_5013 processes event block(s) 6_7. Group(s): new score calc.
//        Actions/conditions: 6_7: sets NewScore to 0.
void Frames::event_func_5013()
{
    // event 6_7 : sets NewScore to 0
    {
        // group: new score calc
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(84, str_newscore_2325)) < (0))) goto event_6_7_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(84, str_newscore_2325, 0);
    }
    event_6_7_end: ;
}
// Function purpose: generated callback event_func_5014 processes event block(s) 7_7. Actions/conditions: 7_7:
//        sets a game or interface text string; sets a game or interface text string; sets a game or interface text
//        string; plus 1 more actions.
void Frames::event_func_5014()
{
    // event 7_7 : sets a game or interface text string; sets a game or interface text string; sets a game or interface text string; plus 1 more actions
    {
        ((Text*)get_instance(scstats_521_instances))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_escaped_2342, str_2_155)+str__2358+((INI*)get_instance(translationData_instances))->get_string(str_escaped_2342, str_11_331)+str__2358+((INI*)get_instance(translationData_instances))->get_string(str_escaped_2342, str_3_158)+str__2358+((INI*)get_instance(translationData_instances))->get_string(str_escaped_2342, str_4_161)+str__2358+((INI*)get_instance(translationData_instances))->get_string(str_escaped_2342, str_5_164)+str__2358+((INI*)get_instance(translationData_instances))->get_string(str_escaped_2342, str_12_334)+str__2358+((INI*)get_instance(translationData_instances))->get_string(str_escaped_2342, str_13_632)+str__2359+((INI*)get_instance(translationData_instances))->get_string(str_escaped_2342, str_7_323)+str__1589));
        ((Text*)get_instance(totals_523_instances))->set_string(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(96, str_endscore_stats_2343))+str__198+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(97, str_susp_total_1588)/MathHelper()/(get_max(((AssociateArray*)get_instance(gameVariables_instances))->get_value(86, str_t_day_902)-1, 1)))+str__2356+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(98, str_comb_rep_1458))+str__198+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(99, str_score_p_1236))+str__2344+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(100, str_score_n_1157))+str__198+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(101, str_endscore_daysbonus_2345))+str__198+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(102, str_endscore_eff_2346))+str__624+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(84, str_newscore_2325)));
        ((Text*)get_instance(scstats_521_instances))->set_string(empty_string);
        ((Text*)get_instance(totals_523_instances))->set_string(empty_string);
    }
    event_7_7_end: ;
}
// Function purpose: generated callback event_func_5015 processes event block(s) 18_7. Group(s): Prison has
//        LB?. Actions/conditions: 18_7: sets has_LB to 1.
void Frames::event_func_5015()
{
    // event 18_7 : sets has_LB to 1
    {
        // group: Prison has LB?
        if (!((global_values->get(18)) < (2))) goto event_18_7_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(85, str_has_lb_2326, 1);
    }
    event_18_7_end: ;
}
// Function purpose: generated callback event_func_5016 processes event block(s) 19_7. Actions/conditions:
//        19_7: sets text formatting to bold; sets text formatting to bold.
void Frames::event_func_5016()
{
    // event 19_7 : sets text formatting to bold; sets text formatting to bold
    {
        if (!((global_strings->get(6)) == (str_rus_7))) goto event_19_7_end;
        ((Text*)get_instance(overallscore_525_instances))->set_bold(0);
        ((Text*)get_instance(youescaped_530_instances))->set_bold(0);
    }
    event_19_7_end: ;
}
// Function purpose: generated callback event_func_5017 processes event block(s) 57_7. Actions/conditions:
//        57_7: sets the selected object's visibility to true.
void Frames::event_func_5017()
{
    // event 57_7 : sets the selected object's visibility to true
    {
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(89, str_hax_828)) == (0))) goto event_57_7_end;
        ((Active*)get_instance(submitted_539_instances))->set_visible(true);
    }
    event_57_7_end: ;
}
void Frames::on_frame_8_start_events()
{
    event_func_5008();
    event_func_5009();
    event_func_5010();
    event_func_5011();
    event_func_5012();
    event_func_5013();
    event_func_5014();
    event_func_5015();
    event_func_5016();
    event_func_5017();
}
void Frames::on_frame_8_init()
{
    index = 7;
    width = 320;
    height = 240;
    virtual_width = 320;
    virtual_height = 240;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(2);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 1.0, 1.0, false, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    add_background_object(create_backdrop5_543(2, -14), 0);
    add_background_object(create_backdrop_524(416, 32), 0);
    add_background_object(create_quickbackdrop2_544(-16, 128), 0);
    add_background_object(create_quickbackdrop3_545(-16, -48), 0);
    add_object(create_scstats_521(17, 75), 0);
    add_object(create_dchar2_540(352, 144), 0);
    add_object(create_totals_523(183, 75), 0);
    add_object(create_clicktocont_522(40, 221), 0);
    add_object(create_done_528(352, 101), 0);
    add_object(create_overallscore_525(40, 23), 0);
    add_object(create_overallscore2_541(40, 155), 0);
    add_object(create_overallscore3_542(40, 171), 0);
    add_object(create_youescaped_530(40, 13), 0);
    add_object(create_gameVariables(-16, -96), 0);
    add_object(create_getobject_526(176, -96), 0);
    add_object(create_stringparser_527(208, -96), 0);
    add_object(create_mouse_529(-112, 0), 0);
    add_object(create_submitted_539(309, 227), 0);
    add_object(create_steamworks2_15(16, -96), 0);
    add_object(create_translationData(144, -96), 0);
    add_background_object(create_quickbackdrop_534(0, 0), 1);
    add_background_object(create_backdrop6_64(50, 77), 1);
    add_object(create_enteraname_532(64, 86), 1);
    add_object(create_layerobject_37(-128, -80), 1);
    add_object(create_fieldspeechfile_535(145, 106), 1);
    add_object(create_slot5_533(101, 107), 1);
    add_object(create_filth_536(3, 224), 1);
    add_object(create_stringtokenizer_81(336, 48), 1);
    add_object(create_counter_537(-16, 0), 1);
    add_object(create_globals_127(128, -80), 1);
    add_object(create_lbname_531(64, 240), 1);
    loop_score_global_running = false;
    loop_score_global_index = 0;
    loop_check_name_running = false;
    loop_check_name_index = 0;
    loop_censor_check_running = false;
    loop_censor_check_index = 0;
    loop_close_level_running = false;
    loop_close_level_index = 0;
    loops = NULL;
    group_check_group_drm_version_1_0 = true;
    group_drm_version_1 = false;
    group_drm_free_version_1 = false;
    not_always_23_7 = loop_count;
    not_always_30_7 = loop_count;
}
// Function purpose: generated callback event_func_5018 processes event block(s) 13_8. Actions/conditions:
//        13_8: splits saved text into fields; sets a game or interface text string; sets a game or interface text
//        string; plus 9 more actions.
void Frames::event_func_5018()
{
    // event 13_8 : splits saved text into fields; sets a game or interface text string; sets a game or interface text string; plus 9 more actions
    {
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((ListObject*)get_instance(list_80_instances))->get_current_line(), str__254);
        ((Text*)get_instance(numbes_550_instances))->set_string(empty_string);
        ((Text*)get_instance(names_546_instances))->set_string(empty_string);
        ((Text*)get_instance(score_548_instances))->set_string(empty_string);
        ((Text*)get_instance(time_551_instances))->set_string(empty_string);
        ((Active*)get_instance(hover_560_instances))->set_visible(false);
        ((Active*)get_instance(active6_41_instances))->set_visible(true);
        ((Active*)get_instance(active2_86_instances))->set_visible(false);
        ((Active*)get_instance(active_24_instances))->set_visible(false);
    }
    event_13_8_end: ;
}
// Function purpose: generated callback event_func_5019 processes event block(s) 14_8. Actions/conditions:
//        14_8: updates game state with get(http://www.escapistgame.com/LB.php?p=+number_to_string(get_value(60,
//        page))+&m=+get(1)).
void Frames::event_func_5019()
{
    // event 14_8 : updates game state with get(http://www.escapistgame.com/LB.php?p=+number_to_string(get_value(60, page))+&m=+get(1))
    {
        ((HTTPObject*)get_instance(getobject_526_instances))->get(str_http_www_escapistgame_com_lb_php_p_2360+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(60, str_page_288))+str_m_2361+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1));
    }
    event_14_8_end: ;
}
// Function purpose: generated callback event_func_5020 processes event block(s) 22_8. Group(s): update list.
//        Actions/conditions: 22_8: sets the selected object's visibility to true.
void Frames::event_func_5020()
{
    // event 22_8 : sets the selected object's visibility to true
    {
        // group: update list
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(60, str_page_288)) > (0))) goto event_22_8_end;
        ((Active*)get_instance(active2_86_instances))->set_visible(true);
    }
    event_22_8_end: ;
}
// Function purpose: generated callback event_func_5021 processes event block(s) 23_8. Group(s): update list.
//        Actions/conditions: 23_8: sets the selected object's visibility to true.
void Frames::event_func_5021()
{
    // event 23_8 : sets the selected object's visibility to true
    {
        // group: update list
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(60, str_page_288)) < (4))) goto event_23_8_end;
        ((Active*)get_instance(active_24_instances))->set_visible(true);
    }
    event_23_8_end: ;
}
void Frames::loop_update_8()
{
    event_func_5018();
    event_func_5019();
    event_func_5020();
    event_func_5021();
}
// Function purpose: generated callback event_func_5022 processes event block(s) 19_8. Actions/conditions:
//        19_8: sets pName to stringtokenizer2_292->get(0).
void Frames::event_func_5022()
{
    // event 19_8 : sets pName to stringtokenizer2_292->get(0)
    {
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(110, str_pname_2362, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0));
    }
    event_19_8_end: ;
}
// Function purpose: generated callback event_func_5023 processes event block(s) 20_8. Group(s): update list.
//        Actions/conditions: 20_8: sets pName to left_string(stringtokenizer2_292->get(0), 22)+....
void Frames::event_func_5023()
{
    // event 20_8 : sets pName to left_string(stringtokenizer2_292->get(0), 22)+...
    {
        // group: update list
        if (!((string_size(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))) > (22))) goto event_20_8_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(110, str_pname_2362, left_string(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0), 22)+str__2363);
    }
    event_20_8_end: ;
}
void Frames::loop_trim_8()
{
    event_func_5022();
    event_func_5023();
}
// Function purpose: generated callback event_func_5024 processes event block(s) 16_8. Actions/conditions:
//        16_8: splits saved text into fields.
void Frames::event_func_5024()
{
    // event 16_8 : splits saved text into fields
    {
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_format_index), str__346);
    }
    event_16_8_end: ;
}
// Function purpose: generated callback event_func_5025 processes event block(s) 17_8. Actions/conditions:
//        17_8: sets a game or interface text string.
void Frames::event_func_5025()
{
    // event 17_8 : sets a game or interface text string
    {
        ((Text*)get_instance(numbes_550_instances))->set_string(((Text*)get_instance(numbes_550_instances))->text+number_to_string((((AssociateArray*)get_instance(gameVariables_instances))->get_value(60, str_page_288)*10)+loop_format_index+1)+str__2364);
    }
    event_17_8_end: ;
}
// Function purpose: generated callback event_func_5026 processes event block(s) 18_8. Group(s): update list.
//        Actions/conditions: 18_8: sets a game or interface text string; sets a game or interface text string; sets a
//        game or interface text string.
void Frames::event_func_5026()
{
    // event 18_8 : sets a game or interface text string; sets a game or interface text string; sets a game or interface text string
    {
        // group: update list
        if (!((((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)) != (empty_string))) goto event_18_8_end;
        {
            loop_trim_running = true;
            int times = int(1);
            loop_trim_index = 0;
            while (loop_trim_index < times) {
                loop_trim_8();
                if (!loop_trim_running) break;
                loop_trim_index++;
            }
        }
        ((Text*)get_instance(names_546_instances))->set_string(((Text*)get_instance(names_546_instances))->text+((AssociateArray*)get_instance(gameVariables_instances))->get_string(110, str_pname_2362)+str__198);
        ((Text*)get_instance(time_551_instances))->set_string(((Text*)get_instance(time_551_instances))->text+((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)+str__198);
        ((Text*)get_instance(score_548_instances))->set_string(((Text*)get_instance(score_548_instances))->text+((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)+str__198);
    }
    event_18_8_end: ;
}
// Function purpose: generated callback event_func_5027 processes event block(s) 21_8. Group(s): update list.
//        Actions/conditions: 21_8: sets a game or interface text string; sets a game or interface text string; sets a
//        game or interface text string.
void Frames::event_func_5027()
{
    // event 21_8 : sets a game or interface text string; sets a game or interface text string; sets a game or interface text string
    {
        // group: update list
        if (!((((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)) == (empty_string))) goto event_21_8_end;
        ((Text*)get_instance(score_548_instances))->set_string(((Text*)get_instance(score_548_instances))->text+str__198);
        ((Text*)get_instance(names_546_instances))->set_string(((Text*)get_instance(names_546_instances))->text+str__198);
        ((Text*)get_instance(time_551_instances))->set_string(((Text*)get_instance(time_551_instances))->text+str__198);
    }
    event_21_8_end: ;
}
void Frames::loop_format_8()
{
    event_func_5024();
    event_func_5025();
    event_func_5026();
    event_func_5027();
}
void Frames::test_collisions_8()
{
    ObjectList::iterator it1, it2;
}
void Frames::steam_download_success_8()
{
    folder_search_loop_0();
}
void Frames::steam_download_fail_8()
{
    folder_search_loop_0();
}
void Frames::steam_on_loop_8()
{
    folder_search_loop_0();
}
void Frames::steam_on_loop_finish_8()
{
    folder_search_loop_0();
}
void Frames::steam_search_success_8()
{
    folder_search_loop_0();
}
void Frames::steam_on_connect_8()
{
    folder_search_loop_0();
}
// Function purpose: generated callback event_func_5028 processes event block(s) 6_8. Actions/conditions: 6_8:
//        sets the current line selection; splits saved text into fields; sets a game or interface text string; plus 1
//        more actions.
void Frames::event_func_5028()
{
    // event 6_8 : sets the current line selection; splits saved text into fields; sets a game or interface text string; plus 1 more actions
    {
        if (frame_time < 0.5) goto event_6_8_end;
        if (not_always_6_8 > loop_count) {
            not_always_6_8 = loop_count + 2;
            goto event_6_8_end;
        }
        not_always_6_8 = loop_count + 2;
        ((ListObject*)get_instance(list_80_instances))->current_line = 1;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((ListObject*)get_instance(list_80_instances))->get_current_line(), str__254);
        ((Text*)get_instance(map_556_instances))->set_string(uppercase_string(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((Counter*)get_instance(counter_4_instances))->set(50);
    }
    event_6_8_end: ;
}
// Function purpose: generated callback event_func_5029 processes event block(s) 7_8. Actions/conditions: 7_8:
//        checks skips if the event-specific game state condition is met; this handler gates a game event without a
//        direct value/object action.
void Frames::event_func_5029()
{
    // event 7_8 : checks skips if the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (frame_time < 0.5) goto event_7_8_end;
        if (not_always_7_8 > loop_count) {
            not_always_7_8 = loop_count + 2;
            goto event_7_8_end;
        }
        not_always_7_8 = loop_count + 2;
        {
            loop_update_running = true;
            int times = int(1);
            loop_update_index = 0;
            while (loop_update_index < times) {
                loop_update_8();
                if (!loop_update_running) break;
                loop_update_index++;
            }
        }
    }
    event_7_8_end: ;
}
// Function purpose: generated callback event_func_5030 processes event block(s) 15_8. Group(s): update list.
//        Actions/conditions: 15_8: splits saved text into fields; sets a game or interface text string; sets the
//        selected object's visibility to true; plus 11 more actions.
void Frames::event_func_5030()
{
    // event 15_8 : splits saved text into fields; sets a game or interface text string; sets the selected object's visibility to true; plus 11 more actions
    {
        // group: update list
        if (!(((HTTPObject*)get_instance(getobject_526_instances))->done)) goto event_15_8_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((HTTPObject*)get_instance(getobject_526_instances))->value, str__254);
        ((Text*)get_instance(names_546_instances))->set_string(empty_string);
        ((Text*)get_instance(names_546_instances))->set_visible(true);
        ((Text*)get_instance(score_548_instances))->set_string(empty_string);
        ((Text*)get_instance(score_548_instances))->set_visible(true);
        ((Text*)get_instance(numbes_550_instances))->set_string(empty_string);
        ((Text*)get_instance(numbes_550_instances))->set_visible(true);
        ((Text*)get_instance(time_551_instances))->set_string(empty_string);
        ((Text*)get_instance(time_551_instances))->set_visible(true);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(111, str_loaded_2365, 1);
        {
            loop_format_running = true;
            int times = int(10);
            loop_format_index = 0;
            while (loop_format_index < times) {
                loop_format_8();
                if (!loop_format_running) break;
                loop_format_index++;
            }
        }
        ((Active*)get_instance(active6_41_instances))->set_visible(false);
    }
    event_15_8_end: ;
}
// Function purpose: generated callback event_func_5031 processes event block(s) 24_8. Actions/conditions:
//        24_8: sets LClick to 0.
void Frames::event_func_5031()
{
    // event 24_8 : sets LClick to 0
    {
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) > (0))) goto event_24_8_end;
        if (is_mouse_pressed(SDL_BUTTON_LEFT)) goto event_24_8_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 0);
    }
    event_24_8_end: ;
}
// Function purpose: generated callback event_func_5032 processes event block(s) 25_8. Actions/conditions:
//        25_8: sets loaded to 0; increments page by 1; sets LClick to 1; plus 1 more actions.
void Frames::event_func_5032()
{
    // event 25_8 : sets loaded to 0; increments page by 1; sets LClick to 1; plus 1 more actions
    {
        if (!(((Active*)get_instance(active_24_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_25_8_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_25_8_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(60, str_page_288)) < (4))) goto event_25_8_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(111, str_loaded_2365, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(60, str_page_288, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        {
            loop_update_running = true;
            int times = int(1);
            loop_update_index = 0;
            while (loop_update_index < times) {
                loop_update_8();
                if (!loop_update_running) break;
                loop_update_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_25_8_end: ;
}
// Function purpose: generated callback event_func_5033 processes event block(s) 26_8. Actions/conditions:
//        26_8: sets loaded to 0; sets LClick to 1; changes a stored game value; plus 1 more actions.
void Frames::event_func_5033()
{
    // event 26_8 : sets loaded to 0; sets LClick to 1; changes a stored game value; plus 1 more actions
    {
        if (!(((Active*)get_instance(active2_86_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_26_8_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_26_8_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(60, str_page_288)) > (0))) goto event_26_8_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(111, str_loaded_2365, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(60, str_page_288, 1);
        {
            loop_update_running = true;
            int times = int(1);
            loop_update_index = 0;
            while (loop_update_index < times) {
                loop_update_8();
                if (!loop_update_running) break;
                loop_update_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_26_8_end: ;
}
// Function purpose: generated callback event_func_5034 processes event block(s) 27_8. Actions/conditions:
//        27_8: sets the selected object's direction to 0.
void Frames::event_func_5034()
{
    // event 27_8 : sets the selected object's direction to 0
    {
        ((Active*)get_instance(active4_87_instances))->set_direction(0);
    }
    event_27_8_end: ;
}
