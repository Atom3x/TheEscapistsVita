#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_427 processes event block(s) 35_5. Group(s): Everything
//        Else. Actions/conditions: 35_5: sets error to 2; sets a game or interface text string; sets the selected
//        object's visibility to true.
void Frames::event_func_427()
{
    // event 35_5 : sets error to 2; sets a game or interface text string; sets the selected object's visibility to true
    {
        // group: Everything Else
        if (!((global_values->get(18)) == (2))) goto event_35_5_end;
        if (!((global_values->get(11)) == (1))) goto event_35_5_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (0))) goto event_35_5_end;
        if (!((((INI*)get_instance(newmapread_165_instances))->get_string(str_info_348, str_version_342)) != (empty_string))) goto event_35_5_end;
        if (!((((INI*)get_instance(newmapread_165_instances))->get_string(str_info_348, str_version_342)) != (((AssociateArray*)get_instance(gameVariables_instances))->get_string(80, str_save_version_341)))) goto event_35_5_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_error_233, 2);
        ((Text*)get_instance(string3_29_instances))->set_string(((ListObject*)get_instance(errors_168_instances))->get_line(1)+((ListObject*)get_instance(errors_168_instances))->get_line(4));
        ((Text*)get_instance(string3_29_instances))->set_visible(true);
    }
    event_35_5_end: ;
}
// Function purpose: generated callback event_func_428 processes event block(s) 36_5. Group(s): Everything
//        Else. Actions/conditions: 36_5: sets error to 1; sets string to
//        errors_168->get_line(1)+errors_168->get_line(2); sets string to
//        StringReplace::replace(gameVariables->get_string(82, string), #, ); plus 6 more actions.
void Frames::event_func_428()
{
    // event 36_5 : sets error to 1; sets string to errors_168->get_line(1)+errors_168->get_line(2); sets string to StringReplace::replace(gameVariables->get_string(82, string), #, ); plus 6 more actions
    {
        // group: Everything Else
        if (!((global_values->get(18)) == (0))) goto event_36_5_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (0))) goto event_36_5_end;
        if (((ActivePicture*)get_instance(activepicture_160_instances))->image != NULL) goto event_36_5_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_error_233, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(82, str_string_345, ((ListObject*)get_instance(errors_168_instances))->get_line(1)+((ListObject*)get_instance(errors_168_instances))->get_line(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(82, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(82, str_string_345), str__346, str__198));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(82, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(82, str_string_345), str_source_347, str_tiles_350+((INI*)get_instance(newmapread_165_instances))->get_string(str_info_348, str_tileset_351)+str_gif_352));
        ((Text*)get_instance(string3_29_instances))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(82, str_string_345));
        ((Text*)get_instance(string3_29_instances))->set_visible(true);
    }
    event_36_5_end: ;
}
// Function purpose: generated callback event_func_429 processes event block(s) 37_5. Group(s): Everything
//        Else. Actions/conditions: 37_5: sets error to 1; sets string to
//        errors_168->get_line(1)+errors_168->get_line(2); sets string to
//        StringReplace::replace(gameVariables->get_string(82, string), #, ); plus 6 more actions.
void Frames::event_func_429()
{
    // event 37_5 : sets error to 1; sets string to errors_168->get_line(1)+errors_168->get_line(2); sets string to StringReplace::replace(gameVariables->get_string(82, string), #, ); plus 6 more actions
    {
        // group: Everything Else
        if (!((global_values->get(18)) != (2))) goto event_37_5_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (0))) goto event_37_5_end;
        if (File::file_readable(str_data_images_tiles_353+global_strings->get(0)+str_gif_354)) goto event_37_5_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_error_233, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(82, str_string_345, ((ListObject*)get_instance(errors_168_instances))->get_line(1)+((ListObject*)get_instance(errors_168_instances))->get_line(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(82, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(82, str_string_345), str__346, str__198));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(82, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(82, str_string_345), str_source_347, str_tiles_350+((INI*)get_instance(newmapread_165_instances))->get_string(str_info_348, str_tileset_351)+str_gif_352));
        ((Text*)get_instance(string3_29_instances))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(82, str_string_345));
        ((Text*)get_instance(string3_29_instances))->set_visible(true);
    }
    event_37_5_end: ;
}
// Function purpose: generated callback event_func_430 processes event block(s) 38_5. Group(s): Everything
//        Else. Actions/conditions: 38_5: updates a value on the target object; updates a value on the target object;
//        updates a value on the target object.
void Frames::event_func_430()
{
    // event 38_5 : updates a value on the target object; updates a value on the target object; updates a value on the target object
    {
        // group: Everything Else
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (0))) goto event_38_5_end;
        ((StringParser*)get_instance(data_163_instances))->set(str_l0l_355+number_to_string(File::get_size(str_data_data_215+global_strings->get(6)+str_dat_216)));
        ((StringParser*)get_instance(items_162_instances))->set(str_l0l_355+number_to_string(File::get_size(str_data_items_356+global_strings->get(6)+str_dat_216)));
        ((StringParser*)get_instance(speech_164_instances))->set(str_l0l_355+number_to_string(File::get_size(str_data_speech_357+global_strings->get(6)+str_dat_216)));
    }
    event_38_5_end: ;
}
// Function purpose: generated callback event_func_431 processes event block(s) 39_5. Group(s): Everything
//        Else. Actions/conditions: 39_5: sets error to 1; sets string to
//        errors_168->get_line(1)+errors_168->get_line(2); sets string to
//        StringReplace::replace(gameVariables->get_string(82, string), #, ); plus 6 more actions.
void Frames::event_func_431()
{
    // event 39_5 : sets error to 1; sets string to errors_168->get_line(1)+errors_168->get_line(2); sets string to StringReplace::replace(gameVariables->get_string(82, string), #, ); plus 6 more actions
    {
        // group: Everything Else
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (0))) goto event_39_5_end;
        if (!((((StringParser*)get_instance(data_163_instances))->get_md5()) != (((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_hash_358+uppercase_string(global_strings->get(6))+str_data_359)))) goto event_39_5_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_error_233, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(82, str_string_345, ((ListObject*)get_instance(errors_168_instances))->get_line(1)+((ListObject*)get_instance(errors_168_instances))->get_line(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(82, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(82, str_string_345), str__346, str__198));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(82, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(82, str_string_345), str_source_347, str_data_360+global_strings->get(6)+str_dat_361));
        ((Text*)get_instance(string3_29_instances))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(82, str_string_345));
        ((Text*)get_instance(string3_29_instances))->set_visible(true);
    }
    event_39_5_end: ;
}
// Function purpose: generated callback event_func_432 processes event block(s) 40_5. Group(s): Everything
//        Else. Actions/conditions: 40_5: sets error to 1; sets string to
//        errors_168->get_line(1)+errors_168->get_line(2); sets string to
//        StringReplace::replace(gameVariables->get_string(82, string), #, ); plus 6 more actions.
void Frames::event_func_432()
{
    // event 40_5 : sets error to 1; sets string to errors_168->get_line(1)+errors_168->get_line(2); sets string to StringReplace::replace(gameVariables->get_string(82, string), #, ); plus 6 more actions
    {
        // group: Everything Else
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (0))) goto event_40_5_end;
        if (!((((StringParser*)get_instance(items_162_instances))->get_md5()) != (((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_hash_358+uppercase_string(global_strings->get(6))+str_items_362)))) goto event_40_5_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_error_233, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(82, str_string_345, ((ListObject*)get_instance(errors_168_instances))->get_line(1)+((ListObject*)get_instance(errors_168_instances))->get_line(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(82, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(82, str_string_345), str__346, str__198));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(82, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(82, str_string_345), str_source_347, str_items_363+global_strings->get(6)+str_dat_361));
        ((Text*)get_instance(string3_29_instances))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(82, str_string_345));
        ((Text*)get_instance(string3_29_instances))->set_visible(true);
    }
    event_40_5_end: ;
}
// Function purpose: generated callback event_func_433 processes event block(s) 41_5. Group(s): Everything
//        Else. Actions/conditions: 41_5: sets error to 1; sets string to
//        errors_168->get_line(1)+errors_168->get_line(2); sets string to
//        StringReplace::replace(gameVariables->get_string(82, string), #, ); plus 6 more actions.
void Frames::event_func_433()
{
    // event 41_5 : sets error to 1; sets string to errors_168->get_line(1)+errors_168->get_line(2); sets string to StringReplace::replace(gameVariables->get_string(82, string), #, ); plus 6 more actions
    {
        // group: Everything Else
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (0))) goto event_41_5_end;
        if (!((((StringParser*)get_instance(speech_164_instances))->get_md5()) != (((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_hash_358+uppercase_string(global_strings->get(6))+str_speech_364)))) goto event_41_5_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_error_233, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(82, str_string_345, ((ListObject*)get_instance(errors_168_instances))->get_line(1)+((ListObject*)get_instance(errors_168_instances))->get_line(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(82, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(82, str_string_345), str__346, str__198));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(82, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(82, str_string_345), str_source_347, str_speech_365+global_strings->get(6)+str_dat_361));
        ((Text*)get_instance(string3_29_instances))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(82, str_string_345));
        ((Text*)get_instance(string3_29_instances))->set_visible(true);
    }
    event_41_5_end: ;
}
// Function purpose: generated callback event_func_434 processes event block(s) 42_5. Group(s): Everything
//        Else. Actions/conditions: 42_5: sets error to 1; sets string to
//        errors_168->get_line(1)+errors_168->get_line(6); sets string to
//        StringReplace::replace(gameVariables->get_string(82, string), #, ); plus 6 more actions.
void Frames::event_func_434()
{
    // event 42_5 : sets error to 1; sets string to errors_168->get_line(1)+errors_168->get_line(6); sets string to StringReplace::replace(gameVariables->get_string(82, string), #, ); plus 6 more actions
    {
        // group: Everything Else
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (0))) goto event_42_5_end;
        if (!((global_strings->get(7)) != (empty_string))) goto event_42_5_end;
        if (File::file_readable(str_data_366+global_strings->get(7)+str_dat_216)) goto event_42_5_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_error_233, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(82, str_string_345, ((ListObject*)get_instance(errors_168_instances))->get_line(1)+((ListObject*)get_instance(errors_168_instances))->get_line(6));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(82, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(82, str_string_345), str__346, str__198));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(82, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(82, str_string_345), str_source_347, global_strings->get(7)+str_dat_216));
        ((Text*)get_instance(string3_29_instances))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(82, str_string_345));
        ((Text*)get_instance(string3_29_instances))->set_visible(true);
    }
    event_42_5_end: ;
}
// Function purpose: generated callback event_func_435 processes event block(s) 43_5. Group(s): Check file
//        hashes. Actions/conditions: 43_5: sets a game or interface text string; sets the selected object's
//        visibility to true; sets the selected object's visibility to true.
void Frames::event_func_435()
{
    // event 43_5 : sets a game or interface text string; sets the selected object's visibility to true; sets the selected object's visibility to true
    {
        // group: Check file hashes
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (1))) goto event_43_5_end;
        ((Text*)get_instance(string2_155_instances))->set_string(((ListObject*)get_instance(errors_168_instances))->get_line(8));
        ((Text*)get_instance(string2_155_instances))->set_visible(true);
        ((Text*)get_instance(string3_29_instances))->set_visible(true);
    }
    event_43_5_end: ;
}
// Function purpose: generated callback event_func_436 processes event block(s) 44_5. Group(s): Check file
//        hashes. Actions/conditions: 44_5: sets a game or interface text string; sets the selected object's
//        visibility to true; sets the selected object's visibility to true.
void Frames::event_func_436()
{
    // event 44_5 : sets a game or interface text string; sets the selected object's visibility to true; sets the selected object's visibility to true
    {
        // group: Check file hashes
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (2))) goto event_44_5_end;
        ((Text*)get_instance(string2_155_instances))->set_string(((ListObject*)get_instance(errors_168_instances))->get_line(9));
        ((Text*)get_instance(string2_155_instances))->set_visible(true);
        ((Text*)get_instance(string3_29_instances))->set_visible(true);
    }
    event_44_5_end: ;
}
// Function purpose: generated callback event_func_437 processes event block(s) 45_5. Group(s): Check file
//        hashes. Actions/conditions: 45_5: sets a game or interface text string.
void Frames::event_func_437()
{
    // event 45_5 : sets a game or interface text string
    {
        // group: Check file hashes
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (0))) goto event_45_5_end;
        if (!((global_strings->get(0)) != (str_tutorial_298))) goto event_45_5_end;
        ((Text*)get_instance(string2_155_instances))->set_string(str_tip_367+((ListObject*)get_instance(tips_156_instances))->get_line(randrange_event(((ListObject*)get_instance(tips_156_instances))->get_count())+1));
        next_frame = index + 1 + 0;    
    
    }
    event_45_5_end: ;
}
// Function purpose: generated callback event_func_438 processes event block(s) 46_5. Group(s): Check file
//        hashes. Actions/conditions: 46_5: sets a game or interface text string.
void Frames::event_func_438()
{
    // event 46_5 : sets a game or interface text string
    {
        // group: Check file hashes
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (0))) goto event_46_5_end;
        if (!((global_strings->get(0)) == (str_tutorial_298))) goto event_46_5_end;
        ((Text*)get_instance(string2_155_instances))->set_string(str_tip_367+((ListObject*)get_instance(tips_156_instances))->get_line(randrange_event(((ListObject*)get_instance(tips_156_instances))->get_count())+1));
        next_frame = 11 + 0;    
    
    }
    event_46_5_end: ;
}
void Frames::loop_file_checks_5()
{
    event_func_414();
    event_func_415();
    event_func_416();
    event_func_417();
    event_func_418();
    event_func_419();
    event_func_420();
    event_func_421();
    event_func_422();
    event_func_423();
    event_func_424();
    event_func_425();
    event_func_426();
    event_func_427();
    event_func_428();
    event_func_429();
    event_func_430();
    event_func_431();
    event_func_432();
    event_func_433();
    event_func_434();
    event_func_435();
    event_func_436();
    event_func_437();
    event_func_438();
}
// Function purpose: generated callback event_func_439 processes event block(s) 2_5. Group(s): SET UP ERROR
//        MESSAGES FOR EACH LANG. Actions/conditions: 2_5: adds a line to the current list; adds a line to the current
//        list; adds a line to the current list; plus 9 more actions.
void Frames::event_func_439()
{
    // event 2_5 : adds a line to the current list; adds a line to the current list; adds a line to the current list; plus 9 more actions
    {
        // group: SET UP ERROR MESSAGES FOR EACH LANG
        if (!((global_strings->get(6)) == (str_eng_0))) goto event_2_5_end;
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_error_368);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_source_is_missing_or_corrupted_369);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_this_map_is_not_yet_playable_370);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_save_file_incompatible_with_this_map_version_371);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_please_re_install_372);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_custom_speech_file_source_not_found_revert_back_to_default_in_settings_373);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_this_downloadable_content_is_not_installed_374);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_press_esc_to_quit_375);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_click_to_continue_376);
    }
    event_2_5_end: ;
}
// Function purpose: generated callback event_func_440 processes event block(s) 3_5. Group(s): SET UP ERROR
//        MESSAGES FOR EACH LANG. Actions/conditions: 3_5: adds a line to the current list; adds a line to the current
//        list; adds a line to the current list; plus 9 more actions.
void Frames::event_func_440()
{
    // event 3_5 : adds a line to the current list; adds a line to the current list; adds a line to the current list; plus 9 more actions
    {
        // group: SET UP ERROR MESSAGES FOR EACH LANG
        if (!((global_strings->get(6)) == (str_fre_3))) goto event_3_5_end;
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_erreur_377);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_source_est_manquant_ou_endommag_378);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_ce_plan_n_est_pas_encore_disponible_379);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_le_fichier_de_sauvegarde_est_incompatible_avec_cette_version_du_plan_380);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_veuillez_le_r_installer_381);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_fichier_de_dialogues_personnalis_source_introuvable_revenir_aux_param_tres_par_d_faut_382);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_ce_contenu_t_l_chargeable_n_est_pas_install_383);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_appuyez_sur_chap_pour_quitter_384);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_cliquez_pour_continuer_385);
    }
    event_3_5_end: ;
}
// Function purpose: generated callback event_func_441 processes event block(s) 4_5. Group(s): SET UP ERROR
//        MESSAGES FOR EACH LANG. Actions/conditions: 4_5: adds a line to the current list; adds a line to the current
//        list; adds a line to the current list; plus 9 more actions.
void Frames::event_func_441()
{
    // event 4_5 : adds a line to the current list; adds a line to the current list; adds a line to the current list; plus 9 more actions
    {
        // group: SET UP ERROR MESSAGES FOR EACH LANG
        if (!((global_strings->get(6)) == (str_ger_6))) goto event_4_5_end;
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_fehler_386);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_source_fehlt_oder_ist_besch_digt_387);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_diese_karte_ist_noch_nicht_spielbar_388);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_gespeicherte_datei_inkompatibel_mit_dieser_kartenversion_389);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_bitte_neu_installieren_390);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_benutzerdefinierte_sprachdatei_source_nicht_gefunden_in_einstellungen_auf_standard_zur_cksetzen_391);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_dieser_herunterladbare_inhalt_ist_nicht_installiert_392);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_esc_dr_cken_um_zu_verlassen_393);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_klicken_um_fortzufahren_394);
    }
    event_4_5_end: ;
}
// Function purpose: generated callback event_func_442 processes event block(s) 5_5. Group(s): SET UP ERROR
//        MESSAGES FOR EACH LANG. Actions/conditions: 5_5: adds a line to the current list; adds a line to the current
//        list; adds a line to the current list; plus 9 more actions.
void Frames::event_func_442()
{
    // event 5_5 : adds a line to the current list; adds a line to the current list; adds a line to the current list; plus 9 more actions
    {
        // group: SET UP ERROR MESSAGES FOR EACH LANG
        if (!((global_strings->get(6)) == (str_spa_2))) goto event_5_5_end;
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_error_368);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_source_se_ha_perdido_o_est_corrupto_395);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_a_n_no_puedes_jugar_este_mapa_396);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_archivo_guardado_incompatible_con_esta_versi_n_de_mapa_397);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_vuelve_a_instalar_398);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_no_se_encuentra_el_archivo_personalizado_de_voz_source_volver_a_poner_los_ajustes_en_por_defecto_399);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_este_contenido_descargable_no_se_ha_instalado_400);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_pulsa_esc_para_salir_401);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_haz_clic_para_continuar_402);
    }
    event_5_5_end: ;
}
// Function purpose: generated callback event_func_443 processes event block(s) 6_5. Group(s): SET UP ERROR
//        MESSAGES FOR EACH LANG. Actions/conditions: 6_5: adds a line to the current list; adds a line to the current
//        list; adds a line to the current list; plus 9 more actions.
void Frames::event_func_443()
{
    // event 6_5 : adds a line to the current list; adds a line to the current list; adds a line to the current list; plus 9 more actions
    {
        // group: SET UP ERROR MESSAGES FOR EACH LANG
        if (!((global_strings->get(6)) == (str_ita_5))) goto event_6_5_end;
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_errore_403);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_source_manca_o_danneggiato_404);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_non_puoi_ancora_accedere_a_questa_mappa_405);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_salvataggio_incompatibile_con_questa_versione_di_mappa_406);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_per_favore_reinstalla_407);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_file_dialog_source_non_trovato_default_impostazioni_408);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_questo_contenuto_scaricabile_non_installato_409);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_premi_esc_per_uscire_410);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_fai_clic_per_continuare_411);
    }
    event_6_5_end: ;
}
// Function purpose: generated callback event_func_444 processes event block(s) 7_5. Group(s): SET UP ERROR
//        MESSAGES FOR EACH LANG. Actions/conditions: 7_5: adds a line to the current list; adds a line to the current
//        list; adds a line to the current list; plus 9 more actions.
void Frames::event_func_444()
{
    // event 7_5 : adds a line to the current list; adds a line to the current list; adds a line to the current list; plus 9 more actions
    {
        // group: SET UP ERROR MESSAGES FOR EACH LANG
        if (!((global_strings->get(6)) == (str_pol_4))) goto event_7_5_end;
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_b_d_412);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_source_brakuj_cy_lub_uszkodzony_plik_413);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_mapa_nie_jest_jeszcze_dost_pna_414);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_plik_zapisu_jest_niekompatybilny_z_t_wersj_mapy_415);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_zainstaluj_ponownie_416);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_nie_znaleziono_pliku_d_wi_kowego_u_ytkownika_source_przywr_warto_domy_ln_w_ustawieniach_417);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_ta_zawarto_do_pobrania_nie_zosta_a_zainstalowana_418);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_naci_nij_esc_aby_wyj_419);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_kliknij_aby_kontynuowa_420);
    }
    event_7_5_end: ;
}
// Function purpose: generated callback event_func_445 processes event block(s) 8_5. Group(s): SET UP ERROR
//        MESSAGES FOR EACH LANG. Actions/conditions: 8_5: adds a line to the current list; adds a line to the current
//        list; adds a line to the current list; plus 9 more actions.
void Frames::event_func_445()
{
    // event 8_5 : adds a line to the current list; adds a line to the current list; adds a line to the current list; plus 9 more actions
    {
        // group: SET UP ERROR MESSAGES FOR EACH LANG
        if (!((global_strings->get(6)) == (str_rus_7))) goto event_8_5_end;
        ((ListObject*)get_instance(errors_168_instances))->add_line(str__421);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_source_422);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str__423);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str__424);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str__425);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_source_426);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str__427);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str_esc_428);
        ((ListObject*)get_instance(errors_168_instances))->add_line(str__429);
    }
    event_8_5_end: ;
}
void Frames::loop_error_setup_5()
{
    event_func_439();
    event_func_440();
    event_func_441();
    event_func_442();
    event_func_443();
    event_func_444();
    event_func_445();
}
void Frames::test_collisions_5()
{
    ObjectList::iterator it1, it2;
}
void Frames::steam_download_success_5()
{
    folder_search_loop_0();
}
void Frames::steam_download_fail_5()
{
    folder_search_loop_0();
}
void Frames::steam_on_loop_5()
{
    folder_search_loop_0();
}
void Frames::steam_on_loop_finish_5()
{
    folder_search_loop_0();
}
void Frames::steam_search_success_5()
{
    folder_search_loop_0();
}
void Frames::steam_on_connect_5()
{
    folder_search_loop_0();
}
// Function purpose: generated callback event_func_446 processes event block(s) 9_5. Actions/conditions: 9_5:
//        sets loadkeys to 1.
void Frames::event_func_446()
{
    // event 9_5 : sets loadkeys to 1
    {
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(83, str_loadkeys_430)) == (0))) goto event_9_5_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(83, str_loadkeys_430, 1);
        {
            loop_load_keys_running = true;
            int times = int(1);
            loop_load_keys_index = 0;
            while (loop_load_keys_index < times) {
                loop_load_keys_1();
                if (!loop_load_keys_running) break;
                loop_load_keys_index++;
            }
        }
    }
    event_9_5_end: ;
}
// Function purpose: generated callback event_func_447 processes event block(s) 10_5. Actions/conditions: 10_5:
//        splits saved text into fields; sets a game or interface text string; sets a game or interface text string;
//        plus 1 more actions.
void Frames::event_func_447()
{
    // event 10_5 : splits saved text into fields; sets a game or interface text string; sets a game or interface text string; plus 1 more actions
    {
        if (frame_time < 0.06) goto event_10_5_end;
        if (not_always_10_5 > loop_count) {
            not_always_10_5 = loop_count + 2;
            goto event_10_5_end;
        }
        not_always_10_5 = loop_count + 2;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(ini_28_instances))->get_string(str_val_431, left_string(global_strings->get(6), 1)), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_hash_358+uppercase_string(global_strings->get(6))+str_data_359, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_hash_358+uppercase_string(global_strings->get(6))+str_items_362, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_hash_358+uppercase_string(global_strings->get(6))+str_speech_364, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2));
    }
    event_10_5_end: ;
}
// Function purpose: generated callback event_func_448 processes event block(s) 19_5. Actions/conditions: 19_5:
//        decrypts a save-data file; loads saved game data; encrypts a save-data file.
void Frames::event_func_448()
{
    // event 19_5 : decrypts a save-data file; loads saved game data; encrypts a save-data file
    {
        if (frame_time < 0.1) goto event_19_5_end;
        if (not_always_19_5 > loop_count) {
            not_always_19_5 = loop_count + 2;
            goto event_19_5_end;
        }
        not_always_19_5 = loop_count + 2;
    BlowfishObject::decrypt_file(str_mothking_99, str_data_images_tiles_353+global_strings->get(0)+str_gif_354);
        ((ActivePicture*)get_instance(activepicture_160_instances))->load(str_data_images_tiles_353+global_strings->get(0)+str_gif_354);
    BlowfishObject::encrypt_file(str_mothking_99, str_data_images_tiles_353+global_strings->get(0)+str_gif_354);
    }
    event_19_5_end: ;
}
// Function purpose: generated callback event_func_449 processes event block(s) 20_5. Actions/conditions: 20_5:
//        checks skips if the event-specific game state condition is met; this handler gates a game event without a
//        direct value/object action.
void Frames::event_func_449()
{
    // event 20_5 : checks skips if the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (frame_time < 0.1) goto event_20_5_end;
        if (not_always_20_5 > loop_count) {
            not_always_20_5 = loop_count + 2;
            goto event_20_5_end;
        }
        not_always_20_5 = loop_count + 2;
        {
            loop_file_checks_running = true;
            int times = int(1);
            loop_file_checks_index = 0;
            while (loop_file_checks_index < times) {
                loop_file_checks_5();
                if (!loop_file_checks_running) break;
                loop_file_checks_index++;
            }
        }
    }
    event_20_5_end: ;
}
// Function purpose: generated callback event_func_450 processes event block(s) 47_5. Group(s): Check file
//        hashes. Actions/conditions: 47_5: checks the required game action is held; game state error; this handler
//        gates a game event without a direct value/object action.
void Frames::event_func_450()
{
    // event 47_5 : checks the required game action is held; game state error; this handler gates a game event without a direct value/object action
    {
        // group: Check file hashes
        if (!(is_key_pressed_once(SDLK_ESCAPE))) goto event_47_5_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (1))) goto event_47_5_end;
        has_quit = true;
    }
    event_47_5_end: ;
}
// Function purpose: generated callback event_func_451 processes event block(s) 48_5. Group(s): Check file
//        hashes. Actions/conditions: 48_5: checks the event-specific game state condition is met; game state error;
//        this handler gates a game event without a direct value/object action.
void Frames::event_func_451()
{
    // event 48_5 : checks the event-specific game state condition is met; game state error; this handler gates a game event without a direct value/object action
    {
        // group: Check file hashes
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_48_5_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (2))) goto event_48_5_end;
        next_frame = 1 + 0;    
    
    }
    event_48_5_end: ;
}
void Frames::handle_frame_6_events()
{
    test_collisions_5();
    if (next_frame != -1) return;
    event_func_446();
    event_func_447();
    event_func_448();
    event_func_449();
    event_func_48();
    if (!group_check_file_hashes_if_loading_a_save_1) goto group_check_file_hashes_if_loading_a_save_1_end;
    group_check_file_hashes_if_loading_a_save_1_end: ;
    event_func_450();
}
void Frames::handle_frame_6_pre_events()
{
    event_func_451();
}
// Function purpose: generated callback event_func_452 processes event block(s) 1_5. Actions/conditions: 1_5:
//        sets global value 12 from 4; sets the selected object's visibility to false; sets the selected object's
//        visibility to false; plus 7 more actions.
void Frames::event_func_452()
{
    // event 1_5 : sets global value 12 from 4; sets the selected object's visibility to false; sets the selected object's visibility to false; plus 7 more actions
    {
        global_values->set(12, 4);
        ((Text*)get_instance(string2_155_instances))->set_visible(false);
        ((Text*)get_instance(string3_29_instances))->set_visible(false);
        
        ((INI*)get_instance(gameSettings_instances))->load_file(File::get_appdata_directory()+str_the_escapists_settings_cfg_62, false, false, true);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(83, str_loadkeys_430, 0);
        ((INI*)get_instance(ini_28_instances))->load_file(str_data_val_dat_432);
        ((ListObject*)get_instance(errors_168_instances))->clear();
        {
            loop_error_setup_running = true;
            int times = int(1);
            loop_error_setup_index = 0;
            while (loop_error_setup_index < times) {
                loop_error_setup_5();
                if (!loop_error_setup_running) break;
                loop_error_setup_index++;
            }
        }
    }
    event_1_5_end: ;
}
void Frames::on_frame_6_start_events()
{
    event_func_452();
}
void Frames::on_frame_6_init()
{
    index = 5;
    width = 320;
    height = 240;
    virtual_width = 320;
    virtual_height = 240;
    background_color = Color(0, 0, 0);
    timer_base = 50;
    reset_image_cache();
    flush_image_cache();
    layers.resize(1);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    add_background_object(create_backdrop6_158(320, 128), 0);
    add_background_object(create_backdrop_96(336, 144), 0);
    add_background_object(create_backdrop2_157(-112, 112), 0);
    add_object(create_string2_155(43, 200), 0);
    add_object(create_string3_159(48, 96), 0);
    add_object(create_gameVariables(64, -32), 0);
    add_object(create_gameSettings(96, -32), 0);
    add_object(create_mouse_31(0, -48), 0);
    add_object(create_activepicture_160(-112, 0), 0);
    add_object(create_stringtokenizer_81(192, -32), 0);
    add_object(create_items_162(-176, 16), 0);
    add_object(create_data_163(-176, 48), 0);
    add_object(create_speech_164(-176, 80), 0);
    add_object(create_steamworks_79(-140, -100), 0);
    add_object(create_substringreplace_27(0, -176), 0);
    add_object(create_tips_156(336, 0), 0);
    add_object(create_errors_168(-224, 144), 0);
    add_object(create_ini_28(240, -160), 0);
    add_object(create_newmapread_165(240, -128), 0);
    add_object(create_saveread_166(240, -96), 0);
    add_object(create_saveref_167(240, -64), 0);
    loop_load_keys_running = false;
    loop_load_keys_index = 0;
    loop_file_checks_running = false;
    loop_file_checks_index = 0;
    loop_error_setup_running = false;
    loop_error_setup_index = 0;
    loops = NULL;
    not_always_19_5 = loop_count;
    group_check_file_hashes_if_loading_a_save_1 = false;
    not_always_20_5 = loop_count;
    not_always_10_5 = loop_count;
}
// Function purpose: generated callback event_func_453 processes event block(s) 1018_6. Actions/conditions:
//        1018_6: sets EndString to Caught entry 4.
void Frames::event_func_453()
{
    // event 1018_6 : sets EndString to Caught entry 4
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1018_6_end;
        if (group_saving_1) goto event_1018_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1018_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1018_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_endstring_435, ((INI*)get_instance(translationData_instances))->get_string(str_caught_436, str_4_161));
        if (!group_code_caught_solitary_1) {
            group_code_caught_solitary_1 = true;
            group_check_group_code_caught_solitary_1_0 = true;
            group_check_group_code_caught_solitary_1_1 = true;
            group_check_group_code_caught_solitary_1_2 = true;
            group_check_group_code_caught_solitary_1_3 = true;
            group_check_group_code_caught_solitary_1_4 = true;
            group_check_group_code_caught_solitary_1_5 = true;
            group_check_group_code_caught_solitary_1_6 = true;
            group_check_group_code_caught_solitary_1_7 = true;
        }
    }
    event_1018_6_end: ;
}
void Frames::loop_sneaking2_6()
{
    event_func_453();
}
// Function purpose: generated callback event_func_454 processes event block(s) 559_6. Actions/conditions:
//        559_6: splits saved text into fields; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer_81->get(0))*16; sets the selected object's vertical position to
//        string_to_number(stringtokenizer_81->get(1))*16; plus 1 more actions.
void Frames::event_func_454()
{
    // event 559_6 : splits saved text into fields; sets the selected object's horizontal position to string_to_number(stringtokenizer_81->get(0))*16; sets the selected object's vertical position to string_to_number(stringtokenizer_81->get(1))*16; plus 1 more actions
    {
        if (!(group_setup_1)) goto event_559_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(loop_load_dug_soil_index), str_x_437);
        soil_173_instances.clear_selection();
        for (ObjectIterator it(soil_173_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1))*16);
            ((Active*)*it)->paste(0);
        }
    }
    event_559_6_end: ;
}
void Frames::loop_load_dug_soil_6()
{
    event_func_454();
}
// Function purpose: generated callback event_func_455 processes event block(s) 389_6. Actions/conditions:
//        389_6: sets the selected object's numeric value to 1.
void Frames::event_func_455()
{
    // event 389_6 : sets the selected object's numeric value to 1
    {
        if (!(group_setup_1)) goto event_389_6_end;
        canteenchair_312_instances.clear_selection();
        for (ObjectIterator it(canteenchair_312_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_assign_cant_chairs_index))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((AssociateArray*)get_instance(gameVariables_instances))->get_value(3, str_zones_canteentopx_438)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) <= (((AssociateArray*)get_instance(gameVariables_instances))->get_value(4, str_zones_canteenbottomx_439)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((AssociateArray*)get_instance(gameVariables_instances))->get_value(5, str_zones_canteentopy_440)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) <= (((AssociateArray*)get_instance(gameVariables_instances))->get_value(6, str_zones_canteenbottomy_441)))) { it.deselect(); continue; }
        }
        if (!canteenchair_312_instances.has_selection()) goto event_389_6_end;
        for (ObjectIterator it(canteenchair_312_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_389_6_end: ;
}
void Frames::loop_assign_cant_chairs_6()
{
    event_func_455();
}
// Function purpose: generated callback event_func_456 processes event block(s) 2038_6. Actions/conditions:
//        2038_6: sets the selected object's numeric value to ((Active*)get_single(waypointguardgym_182_instances,
//        it.current_index, default_active_instance))->get_x()+8; sets the selected object's numeric value to
//        ((Active*)get_single(waypointguardgym_182_instances, it.current_index, default_active_instance))->get_y()+8.
void Frames::event_func_456()
{
    // event 2038_6 : sets the selected object's numeric value to ((Active*)get_single(waypointguardgym_182_instances, it.current_index, default_active_instance))->get_x()+8; sets the selected object's numeric value to ((Active*)get_single(waypointguardgym_182_instances, it.current_index, default_active_instance))->get_y()+8
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2038_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_gym_align_guards_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_2038_6_end;
        if (!check_not_overlap(guardBase_instances, waypointguardgym_182_instances)) goto event_2038_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(250))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(60))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_2038_6_end;
        waypointguardgym_182_instances.clear_selection();
        for (ObjectIterator it(waypointguardgym_182_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_gym_align_guards_index+1))) { it.deselect(); continue; }
        }
        if (!waypointguardgym_182_instances.has_selection()) goto event_2038_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(waypointguardgym_182_instances, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(waypointguardgym_182_instances, it.current_index, default_active_instance))->get_y()+8);
        }
    }
    event_2038_6_end: ;
}
void Frames::loop_gym_align_guards_6()
{
    event_func_456();
}
// Function purpose: generated callback event_func_457 processes event block(s) 2609_6. Actions/conditions:
//        2609_6: creates a powerbar 239 object; sets horizontal scaling; sets the selected object's string to
//        number_to_string(get_floor(playerBase->alterables->values.get(8)))+/ 100; plus 1 more actions.
void Frames::event_func_457()
{
    // event 2609_6 : creates a powerbar 239 object; sets horizontal scaling; sets the selected object's string to number_to_string(get_floor(playerBase->alterables->values.get(8)))+/ 100; plus 1 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2609_6_end;
        if (!((loop_create_stat_bars_index+1) == (1))) goto event_2609_6_end;
        FrameObject * single_instance_2609_6_0; single_instance_2609_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityProgress(parent->x + -10, parent->y + -31), parent->layer);
                if (single_instance_2609_6_0 == NULL)
                    single_instance_2609_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2609_6_0))->set_x_scale(((Active*)get_instance(playerBase_instances))->alterables->values.get(8)*0.6);
        ((Active*)((Active*)single_instance_2609_6_0))->alterables->strings.set(1, number_to_string(get_floor(((Active*)get_instance(playerBase_instances))->alterables->values.get(8)))+str_100_442);
        ((Active*)((Active*)single_instance_2609_6_0))->alterables->strings.set(0, str_profile_281);
    }
    event_2609_6_end: ;
}
// Function purpose: generated callback event_func_458 processes event block(s) 2610_6. Actions/conditions:
//        2610_6: creates a powerbar 239 object; sets horizontal scaling; sets the selected object's string to
//        number_to_string(get_floor(playerBase->alterables->values.get(9)))+/ 100; plus 1 more actions.
void Frames::event_func_458()
{
    // event 2610_6 : creates a powerbar 239 object; sets horizontal scaling; sets the selected object's string to number_to_string(get_floor(playerBase->alterables->values.get(9)))+/ 100; plus 1 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2610_6_end;
        if (!((loop_create_stat_bars_index+1) == (2))) goto event_2610_6_end;
        FrameObject * single_instance_2610_6_0; single_instance_2610_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityProgress(parent->x + -10, parent->y + -20), parent->layer);
                if (single_instance_2610_6_0 == NULL)
                    single_instance_2610_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2610_6_0))->set_x_scale(((Active*)get_instance(playerBase_instances))->alterables->values.get(9)*0.6);
        ((Active*)((Active*)single_instance_2610_6_0))->alterables->strings.set(1, number_to_string(get_floor(((Active*)get_instance(playerBase_instances))->alterables->values.get(9)))+str_100_442);
        ((Active*)((Active*)single_instance_2610_6_0))->alterables->strings.set(0, str_profile_281);
    }
    event_2610_6_end: ;
}
// Function purpose: generated callback event_func_459 processes event block(s) 2611_6. Actions/conditions:
//        2611_6: creates a powerbar 239 object; sets horizontal scaling; sets the selected object's string to
//        number_to_string(get_floor(playerBase->alterables->values.get(10)))+/ 100; plus 1 more actions.
void Frames::event_func_459()
{
    // event 2611_6 : creates a powerbar 239 object; sets horizontal scaling; sets the selected object's string to number_to_string(get_floor(playerBase->alterables->values.get(10)))+/ 100; plus 1 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2611_6_end;
        if (!((loop_create_stat_bars_index+1) == (3))) goto event_2611_6_end;
        FrameObject * single_instance_2611_6_0; single_instance_2611_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityProgress(parent->x + -10, parent->y + -9), parent->layer);
                if (single_instance_2611_6_0 == NULL)
                    single_instance_2611_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2611_6_0))->set_x_scale(((Active*)get_instance(playerBase_instances))->alterables->values.get(10)*0.6);
        ((Active*)((Active*)single_instance_2611_6_0))->alterables->strings.set(1, number_to_string(get_floor(((Active*)get_instance(playerBase_instances))->alterables->values.get(10)))+str_100_442);
        ((Active*)((Active*)single_instance_2611_6_0))->alterables->strings.set(0, str_profile_281);
    }
    event_2611_6_end: ;
}
void Frames::loop_create_stat_bars_6()
{
    event_func_457();
    event_func_458();
    event_func_459();
}
// Function purpose: generated callback event_func_460 processes event block(s) 4396_6. Actions/conditions:
//        4396_6: removes the selected object.
void Frames::event_func_460()
{
    // event 4396_6 : removes the selected object
    {
        if (!(group_guard_towers_1)) goto event_4396_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(7, str_currguardz_443)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_4396_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4396_6_end: ;
}
// Function purpose: generated callback event_func_461 processes event block(s) 4397_6. Actions/conditions:
//        4397_6: removes the selected object.
void Frames::event_func_461()
{
    // event 4397_6 : removes the selected object
    {
        if (!(group_guard_towers_1)) goto event_4397_6_end;
        outfitguard_248_instances.clear_selection();
        for (ObjectIterator it(outfitguard_248_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(7, str_currguardz_443)))) { it.deselect(); continue; }
        }
        if (!outfitguard_248_instances.has_selection()) goto event_4397_6_end;
        for (ObjectIterator it(outfitguard_248_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4397_6_end: ;
}
// Function purpose: generated callback event_func_462 processes event block(s) 4398_6. Actions/conditions:
//        4398_6: removes the selected object.
void Frames::event_func_462()
{
    // event 4398_6 : removes the selected object
    {
        if (!(group_guard_towers_1)) goto event_4398_6_end;
        guard_169_instances.clear_selection();
        for (ObjectIterator it(guard_169_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(7, str_currguardz_443)))) { it.deselect(); continue; }
        }
        if (!guard_169_instances.has_selection()) goto event_4398_6_end;
        for (ObjectIterator it(guard_169_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4398_6_end: ;
}
void Frames::loop_enter_tower_6()
{
    event_func_460();
    event_func_461();
    event_func_462();
}
// Function purpose: generated callback event_func_463 processes event block(s) 735_6. Actions/conditions:
//        735_6: creates a buttons 245 object; positions the target object; positions the target object; plus 7 more
//        actions.
void Frames::event_func_463()
{
    // event 735_6 : creates a buttons 245 object; positions the target object; positions the target object; plus 7 more actions
    {
        if (!(group_code_1 && group_code_dlc_bannedcamp_1)) goto event_735_6_end;
        FrameObject * single_instance_735_6_0; single_instance_735_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 65, parent->y + 35), parent->layer);
                if (single_instance_735_6_0 == NULL)
                    single_instance_735_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_735_6_0))->set_x(((Active*)get_instance(dialogPanel_instances))->get_box_index(2)-90);
        ((Active*)((Active*)single_instance_735_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(3)-25);
        ((Active*)((Active*)single_instance_735_6_0))->force_animation(43);
        FrameObject * single_instance_735_6_1; single_instance_735_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_735_6_0)->x + 3, ((Active*)single_instance_735_6_0)->y + 3), ((Active*)single_instance_735_6_0)->layer);
            if (single_instance_735_6_1 == NULL)
                single_instance_735_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_735_6_1))->blend_color.set(Color(150, 150, 150));
        ((Text*)((Text*)single_instance_735_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_6_241)));
    }
    event_735_6_end: ;
}
// Function purpose: generated callback event_func_464 processes event block(s) 739_6. Actions/conditions:
//        739_6: creates a buttons 245 object; positions the target object; positions the target object; plus 7 more
//        actions.
void Frames::event_func_464()
{
    // event 739_6 : creates a buttons 245 object; positions the target object; positions the target object; plus 7 more actions
    {
        if (!(group_code_1 && group_code_dlc_ccl_1)) goto event_739_6_end;
        FrameObject * single_instance_739_6_0; single_instance_739_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 65, parent->y + 35), parent->layer);
                if (single_instance_739_6_0 == NULL)
                    single_instance_739_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_739_6_0))->set_x(((Active*)get_instance(dialogPanel_instances))->get_box_index(2)-90);
        ((Active*)((Active*)single_instance_739_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(3)-25);
        ((Active*)((Active*)single_instance_739_6_0))->force_animation(43);
        FrameObject * single_instance_739_6_1; single_instance_739_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_739_6_0)->x + 3, ((Active*)single_instance_739_6_0)->y + 3), ((Active*)single_instance_739_6_0)->layer);
            if (single_instance_739_6_1 == NULL)
                single_instance_739_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_739_6_1))->blend_color.set(Color(150, 150, 150));
        ((Text*)((Text*)single_instance_739_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_6_241)));
    }
    event_739_6_end: ;
}
void Frames::loop_letter_bc_6()
{
    event_func_463();
    event_func_464();
}
// Function purpose: generated callback event_func_465 processes event block(s) 554_6. Actions/conditions:
//        554_6: splits saved text into fields.
void Frames::event_func_465()
{
    // event 554_6 : splits saved text into fields
    {
        if (!(group_setup_1)) goto event_554_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(saving_350_instances))->get_string_default(str_flooritems_444, number_to_string(loop_load_floor_items_index+1), empty_string), str__254);
    }
    event_554_6_end: ;
}
// Function purpose: generated callback event_func_466 processes event block(s) 555_6. Actions/conditions:
//        555_6: adds a items 184 instance; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer_81->get(0)); sets the selected object's vertical position to
//        string_to_number(stringtokenizer_81->get(1)); plus 7 more actions.
void Frames::event_func_466()
{
    // event 555_6 : adds a items 184 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer_81->get(0)); sets the selected object's vertical position to string_to_number(stringtokenizer_81->get(1)); plus 7 more actions
    {
        if (!(group_setup_1)) goto event_555_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0))) > (0))) goto event_555_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1))) > (0))) goto event_555_6_end;
        items_184_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_items_184(0, 0), 1);
            items_184_instances.add_back();
        }
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
            ((Active*)*it)->set_layer(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2))-1);
            ((Active*)*it)->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
            ((Active*)*it)->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)));
            ((Active*)*it)->alterables->flags.enable(-2);
        }
    }
    event_555_6_end: ;
}
void Frames::loop_load_floor_items_6()
{
    event_func_465();
    event_func_466();
}
// Function purpose: generated callback event_func_467 processes event block(s) 1651_6. Actions/conditions:
//        1651_6: sets the selected object's numeric value to ((Active*)get_single(bedguard_337_instances,
//        it.current_index, default_active_instance))->get_x()+8; sets the selected object's numeric value to
//        ((Active*)get_single(bedguard_337_instances, it.current_index, default_active_instance))->get_y()+8.
void Frames::event_func_467()
{
    // event 1651_6 : sets the selected object's numeric value to ((Active*)get_single(bedguard_337_instances, it.current_index, default_active_instance))->get_x()+8; sets the selected object's numeric value to ((Active*)get_single(bedguard_337_instances, it.current_index, default_active_instance))->get_y()+8
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1651_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sleep_guards_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1651_6_end;
        bedguard_337_instances.clear_selection();
        for (ObjectIterator it(bedguard_337_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!bedguard_337_instances.has_selection()) goto event_1651_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(bedguard_337_instances, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(bedguard_337_instances, it.current_index, default_active_instance))->get_y()+8);
        }
    }
    event_1651_6_end: ;
}
// Function purpose: generated callback event_func_468 processes event block(s) 1653_6. Actions/conditions:
//        1653_6: splits saved text into fields; sets the selected object's numeric value to
//        string_to_number(stringtokenizer_81->get(0)).
void Frames::event_func_468()
{
    // event 1653_6 : splits saved text into fields; sets the selected object's numeric value to string_to_number(stringtokenizer_81->get(0))
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1653_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sleep_guards_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1653_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->strings.get(3), str__96);
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        }
    }
    event_1653_6_end: ;
}
void Frames::loop_sleep_guards_6()
{
    event_func_467();
    event_func_468();
}
// Function purpose: generated callback event_func_469 processes event block(s) 3104_6. Actions/conditions:
//        3104_6: sets ItemID to 137.
void Frames::event_func_469()
{
    // event 3104_6 : sets ItemID to 137
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3104_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_3104_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 137);
    }
    event_3104_6_end: ;
}
// Function purpose: generated callback event_func_470 processes event block(s) 3105_6. Actions/conditions:
//        3105_6: sets done to 1; sets ItemID to 251; sets tailor_alt to 1.
void Frames::event_func_470()
{
    // event 3105_6 : sets done to 1; sets ItemID to 251; sets tailor_alt to 1
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3105_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_3105_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(10, str_tailor_alt_446)) != (1))) goto event_3105_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(11, str_done_447)) == (0))) goto event_3105_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(11, str_done_447, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 251);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(10, str_tailor_alt_446, 1);
    }
    event_3105_6_end: ;
}
// Function purpose: generated callback event_func_471 processes event block(s) 3106_6. Actions/conditions:
//        3106_6: sets done to 1; sets ItemID to 257; sets tailor_alt to 0.
void Frames::event_func_471()
{
    // event 3106_6 : sets done to 1; sets ItemID to 257; sets tailor_alt to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3106_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_3106_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(10, str_tailor_alt_446)) == (1))) goto event_3106_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(11, str_done_447)) == (0))) goto event_3106_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(11, str_done_447, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 257);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(10, str_tailor_alt_446, 0);
    }
    event_3106_6_end: ;
}
void Frames::loop_tailor_item_6()
{
    event_func_469();
    event_func_470();
    event_func_471();
}
// Function purpose: generated callback event_func_472 processes event block(s) 3021_6. Actions/conditions:
//        3021_6: removes the selected object.
void Frames::event_func_472()
{
    // event 3021_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3021_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_448))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3021_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3021_6_end: ;
}
// Function purpose: generated callback event_func_473 processes event block(s) 3022_6. Actions/conditions:
//        3022_6: removes the selected object.
void Frames::event_func_473()
{
    // event 3022_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3022_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_weapon_449))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3022_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3022_6_end: ;
}
// Function purpose: generated callback event_func_474 processes event block(s) 3023_6. Actions/conditions:
//        3023_6: removes the selected object.
void Frames::event_func_474()
{
    // event 3023_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3023_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_outfit_450))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3023_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3023_6_end: ;
}
// Function purpose: generated callback event_func_475 processes event block(s) 3024_6. Actions/conditions:
//        3024_6: sets a game or interface text string; sets a game or interface text string; sets a game or interface
//        text string; plus 8 more actions.
void Frames::event_func_475()
{
    // event 3024_6 : sets a game or interface text string; sets a game or interface text string; sets a game or interface text string; plus 8 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3024_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452))+str_inv_1_453, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452))+str_inv_2_454, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452))+str_inv_3_455, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452))+str_inv_4_456, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452))+str_inv_5_457, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452))+str_inv_6_458, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452)), empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_weapon_460+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452)), empty_string);
    }
    event_3024_6_end: ;
}
// Function purpose: generated callback event_func_476 processes event block(s) 3025_6. Actions/conditions:
//        3025_6: sets a game or interface text string; removes the selected object.
void Frames::event_func_476()
{
    // event 3025_6 : sets a game or interface text string; removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3025_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_448))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3025_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452))+str_inv_1_453, number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7))+str__96+((Active*)get_single(hudItem_instances, default_active_instance))->alterables->strings.get(1)+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(12)));
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3025_6_end: ;
}
// Function purpose: generated callback event_func_477 processes event block(s) 3026_6. Actions/conditions:
//        3026_6: sets a game or interface text string; removes the selected object.
void Frames::event_func_477()
{
    // event 3026_6 : sets a game or interface text string; removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3026_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_448))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3026_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452))+str_inv_2_454, number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7))+str__96+((Active*)get_single(hudItem_instances, default_active_instance))->alterables->strings.get(1)+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(12)));
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3026_6_end: ;
}
// Function purpose: generated callback event_func_478 processes event block(s) 3027_6. Actions/conditions:
//        3027_6: sets a game or interface text string; removes the selected object.
void Frames::event_func_478()
{
    // event 3027_6 : sets a game or interface text string; removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3027_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_448))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3027_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452))+str_inv_3_455, number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7))+str__96+((Active*)get_single(hudItem_instances, default_active_instance))->alterables->strings.get(1)+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(12)));
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3027_6_end: ;
}
// Function purpose: generated callback event_func_479 processes event block(s) 3028_6. Actions/conditions:
//        3028_6: sets a game or interface text string; removes the selected object.
void Frames::event_func_479()
{
    // event 3028_6 : sets a game or interface text string; removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3028_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_448))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (4))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3028_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452))+str_inv_4_456, number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7))+str__96+((Active*)get_single(hudItem_instances, default_active_instance))->alterables->strings.get(1)+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(12)));
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3028_6_end: ;
}
// Function purpose: generated callback event_func_480 processes event block(s) 3029_6. Actions/conditions:
//        3029_6: sets a game or interface text string; removes the selected object.
void Frames::event_func_480()
{
    // event 3029_6 : sets a game or interface text string; removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3029_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_448))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (5))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3029_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452))+str_inv_5_457, number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7))+str__96+((Active*)get_single(hudItem_instances, default_active_instance))->alterables->strings.get(1)+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(12)));
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3029_6_end: ;
}
// Function purpose: generated callback event_func_481 processes event block(s) 3030_6. Actions/conditions:
//        3030_6: sets a game or interface text string; removes the selected object.
void Frames::event_func_481()
{
    // event 3030_6 : sets a game or interface text string; removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3030_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_448))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (6))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3030_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452))+str_inv_6_458, number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7))+str__96+((Active*)get_single(hudItem_instances, default_active_instance))->alterables->strings.get(1)+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(12)));
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3030_6_end: ;
}
// Function purpose: generated callback event_func_482 processes event block(s) 3031_6. Actions/conditions:
//        3031_6: sets a game or interface text string; removes the selected object.
void Frames::event_func_482()
{
    // event 3031_6 : sets a game or interface text string; removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3031_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_outfit_450))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3031_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452)), number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7)));
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3031_6_end: ;
}
// Function purpose: generated callback event_func_483 processes event block(s) 3032_6. Actions/conditions:
//        3032_6: sets a game or interface text string; removes the selected object.
void Frames::event_func_483()
{
    // event 3032_6 : sets a game or interface text string; removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3032_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_weapon_449))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3032_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_weapon_460+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452)), number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7)));
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3032_6_end: ;
}
// Function purpose: generated callback event_func_484 processes event block(s) 3033_6. Actions/conditions:
//        3033_6: removes the selected object.
void Frames::event_func_484()
{
    // event 3033_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3033_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_outfit_459+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452)))) == (empty_string))) goto event_3033_6_end;
        qualifier_16.clear_selection();
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452)))) { it.deselect(); continue; }
        }
        if (!qualifier_16.has_selection()) goto event_3033_6_end;
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3033_6_end: ;
}
void Frames::loop_loot_close_6()
{
    event_func_472();
    event_func_473();
    event_func_474();
    event_func_475();
    event_func_476();
    event_func_477();
    event_func_478();
    event_func_479();
    event_func_480();
    event_func_481();
    event_func_482();
    event_func_483();
    event_func_484();
}
// Function purpose: generated callback event_func_485 processes event block(s) 1791_6. Actions/conditions:
//        1791_6: sets the selected object's numeric value to ((Active*)single_instance_1791_6_0)->get_x(); sets the
//        selected object's numeric value to ((Active*)single_instance_1791_6_0)->get_y().
void Frames::event_func_485()
{
    // event 1791_6 : sets the selected object's numeric value to ((Active*)single_instance_1791_6_0)->get_x(); sets the selected object's numeric value to ((Active*)single_instance_1791_6_0)->get_y()
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1791_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_guards_free_period_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1791_6_end;
        waypointguard2_315_instances.clear_selection();
        FrameObject * single_instance_1791_6_0; single_instance_1791_6_0 = pick_random(waypointguard2_315_instances);
        if (single_instance_1791_6_0 == NULL) goto event_1791_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)single_instance_1791_6_0)->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)single_instance_1791_6_0)->get_y());
        }
    }
    event_1791_6_end: ;
}
void Frames::loop_guards_free_period_6()
{
    event_func_485();
}
// Function purpose: generated callback event_func_486 processes event block(s) 3671_6. Actions/conditions:
//        3671_6: sets the selected object's horizontal position to ((Active*)get_qualifier(qualifier_2,
//        it.current_index, default_active_instance))->get_x(); sets the selected object's vertical position to
//        ((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->get_y(); sets horizontal
//        scaling; plus 1 more actions.
void Frames::event_func_486()
{
    // event 3671_6 : sets the selected object's horizontal position to ((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->get_x(); sets the selected object's vertical position to ((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->get_y(); sets horizontal scaling; plus 1 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_roof_travel_2_1)) goto event_3671_6_end;
        grapplingrope_345_instances.clear_selection();
        for (ObjectIterator it(grapplingrope_345_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->set_y(((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->set_x_scale(get_distance_int(((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->get_x(), ((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->get_y(), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(13, str_ropex_461), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(14, str_ropey_462)));
            ((Active*)*it)->set_angle(get_angle_int(((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->get_x(), ((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->get_y(), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(13, str_ropex_461), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(14, str_ropey_462)), 0);
        }
    }
    event_3671_6_end: ;
}
// Function purpose: generated callback event_func_487 processes event block(s) 3672_6. Actions/conditions:
//        3672_6: sets the selected object's horizontal position to playerBase->get_x()+1.
void Frames::event_func_487()
{
    // event 3672_6 : sets the selected object's horizontal position to playerBase->get_x()+1
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_roof_travel_2_1)) goto event_3672_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(13, str_ropex_461)))) goto event_3672_6_end;
        ((Active*)get_instance(playerBase_instances))->set_x(((Active*)get_instance(playerBase_instances))->get_x()+1);
    }
    event_3672_6_end: ;
}
// Function purpose: generated callback event_func_488 processes event block(s) 3673_6. Actions/conditions:
//        3673_6: sets the selected object's horizontal position to playerBase->get_x()-1.
void Frames::event_func_488()
{
    // event 3673_6 : sets the selected object's horizontal position to playerBase->get_x()-1
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_roof_travel_2_1)) goto event_3673_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(13, str_ropex_461)))) goto event_3673_6_end;
        ((Active*)get_instance(playerBase_instances))->set_x(((Active*)get_instance(playerBase_instances))->get_x()-1);
    }
    event_3673_6_end: ;
}
// Function purpose: generated callback event_func_489 processes event block(s) 3674_6. Actions/conditions:
//        3674_6: sets the selected object's vertical position to playerBase->get_y()+1.
void Frames::event_func_489()
{
    // event 3674_6 : sets the selected object's vertical position to playerBase->get_y()+1
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_roof_travel_2_1)) goto event_3674_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(14, str_ropey_462)))) goto event_3674_6_end;
        ((Active*)get_instance(playerBase_instances))->set_y(((Active*)get_instance(playerBase_instances))->get_y()+1);
    }
    event_3674_6_end: ;
}
// Function purpose: generated callback event_func_490 processes event block(s) 3675_6. Actions/conditions:
//        3675_6: sets the selected object's vertical position to playerBase->get_y()-1.
void Frames::event_func_490()
{
    // event 3675_6 : sets the selected object's vertical position to playerBase->get_y()-1
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_roof_travel_2_1)) goto event_3675_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(14, str_ropey_462)))) goto event_3675_6_end;
        ((Active*)get_instance(playerBase_instances))->set_y(((Active*)get_instance(playerBase_instances))->get_y()-1);
    }
    event_3675_6_end: ;
}
// Function purpose: generated callback event_func_491 processes event block(s) 3676_6. Actions/conditions:
//        3676_6: sets Rope to 0; removes the selected object.
void Frames::event_func_491()
{
    // event 3676_6 : sets Rope to 0; removes the selected object
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_roof_travel_2_1)) goto event_3676_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(13, str_ropex_461)))) goto event_3676_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(14, str_ropey_462)))) goto event_3676_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(15, str_rope_463, 0);
        grapplingrope_345_instances.clear_selection();
        for (ObjectIterator it(grapplingrope_345_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3676_6_end: ;
}
void Frames::loop_new_rope_6()
{
    event_func_486();
    event_func_487();
    event_func_488();
    event_func_489();
    event_func_490();
    event_func_491();
}
// Function purpose: generated callback event_func_492 processes event block(s) 654_6. Actions/conditions:
//        654_6: adds a dtafobjects 487 instance; sets the selected object's direction to 8; sets the selected
//        object's string to Rocket.
void Frames::event_func_492()
{
    // event 654_6 : adds a dtafobjects 487 instance; sets the selected object's direction to 8; sets the selected object's string to Rocket
    {
        if (!(group_code_1 && group_code_dlc_dtaf_1)) goto event_654_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(928, 678), 2);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->alterables->strings.set(0, str_rocket_464);
        }
    }
    event_654_6_end: ;
}
// Function purpose: generated callback event_func_493 processes event block(s) 655_6. Actions/conditions:
//        655_6: adds a dtafobjects 487 instance; sets the selected object's direction to 16; sets the selected
//        object's string to Panel_Left; plus 5 more actions.
void Frames::event_func_493()
{
    // event 655_6 : adds a dtafobjects 487 instance; sets the selected object's direction to 16; sets the selected object's string to Panel_Left; plus 5 more actions
    {
        if (!(group_code_1 && group_code_dlc_dtaf_1)) goto event_655_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(912, 800), 1);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->strings.set(0, str_panel_left_465);
            ((Active*)*it)->paste(1);
        }
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindinginmates_191_instances));
            for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
    planner->add_obstacle(((Active*)*it));        }
        }
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindingguards_247_instances));
            for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
    planner->add_obstacle(((Active*)*it));        }
        }
    }
    event_655_6_end: ;
}
// Function purpose: generated callback event_func_494 processes event block(s) 656_6. Actions/conditions:
//        656_6: adds a dtafobjects 487 instance; sets the selected object's direction to 0; sets the selected
//        object's string to Panel_Right; plus 5 more actions.
void Frames::event_func_494()
{
    // event 656_6 : adds a dtafobjects 487 instance; sets the selected object's direction to 0; sets the selected object's string to Panel_Right; plus 5 more actions
    {
        if (!(group_code_1 && group_code_dlc_dtaf_1)) goto event_656_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(1072, 800), 1);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->strings.set(0, str_panel_right_466);
            ((Active*)*it)->paste(1);
        }
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindinginmates_191_instances));
            for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
    planner->add_obstacle(((Active*)*it));        }
        }
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindingguards_247_instances));
            for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
    planner->add_obstacle(((Active*)*it));        }
        }
    }
    event_656_6_end: ;
}
// Function purpose: generated callback event_func_495 processes event block(s) 657_6. Actions/conditions:
//        657_6: adds a dtafobjects 487 instance; sets the selected object's direction to 24; sets the selected
//        object's string to Panel_Bottom; plus 5 more actions.
void Frames::event_func_495()
{
    // event 657_6 : adds a dtafobjects 487 instance; sets the selected object's direction to 24; sets the selected object's string to Panel_Bottom; plus 5 more actions
    {
        if (!(group_code_1 && group_code_dlc_dtaf_1)) goto event_657_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(976, 864), 1);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->alterables->strings.set(0, str_panel_bottom_467);
            ((Active*)*it)->paste(1);
        }
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindinginmates_191_instances));
            for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
    planner->add_obstacle(((Active*)*it));        }
        }
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindingguards_247_instances));
            for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
    planner->add_obstacle(((Active*)*it));        }
        }
    }
    event_657_6_end: ;
}
// Function purpose: generated callback event_func_496 processes event block(s) 658_6. Actions/conditions:
//        658_6: adds a dtafobjects 487 instance; sets the object's animation to 5; sets the selected object's
//        direction to 0; plus 7 more actions.
void Frames::event_func_496()
{
    // event 658_6 : adds a dtafobjects 487 instance; sets the object's animation to 5; sets the selected object's direction to 0; plus 7 more actions
    {
        if (!(group_code_1 && group_code_dlc_dtaf_1)) goto event_658_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(992, 90), 1);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(VITA_VIEW_X(((Active*)*it), 992));
            ((Active*)*it)->set_y(VITA_VIEW_Y(((Active*)*it), 232));
            ((Active*)*it)->paste(1);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_658_6_end: ;
}
// Function purpose: generated callback event_func_497 processes event block(s) 659_6. Actions/conditions:
//        659_6: adds a dtafobjects 487 instance; sets the object's animation to 7; sets the selected object's
//        direction to 24; plus 7 more actions.
void Frames::event_func_497()
{
    // event 659_6 : adds a dtafobjects 487 instance; sets the object's animation to 7; sets the selected object's direction to 24; plus 7 more actions
    {
        if (!(group_code_1 && group_code_dlc_dtaf_1)) goto event_659_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(0, 0), 1);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->set_x(VITA_VIEW_X(((Active*)*it), 720));
            ((Active*)*it)->set_y(VITA_VIEW_Y(((Active*)*it), 496));
            ((Active*)*it)->paste(0);
            ((Active*)*it)->destroy();
        }
    }
    event_659_6_end: ;
}
// Function purpose: generated callback event_func_498 processes event block(s) 660_6. Actions/conditions:
//        660_6: adds a dtafobjects 487 instance; sets the object's animation to 7; sets the selected object's
//        direction to 0; plus 6 more actions.
void Frames::event_func_498()
{
    // event 660_6 : adds a dtafobjects 487 instance; sets the object's animation to 7; sets the selected object's direction to 0; plus 6 more actions
    {
        if (!(group_code_1 && group_code_dlc_dtaf_1)) goto event_660_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(992, 90), 1);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(VITA_VIEW_X(((Active*)*it), 1088));
            ((Active*)*it)->set_y(VITA_VIEW_Y(((Active*)*it), 912));
            ((Active*)*it)->alterables->strings.set(0, str_sign1_468);
        }
    }
    event_660_6_end: ;
}
// Function purpose: generated callback event_func_499 processes event block(s) 661_6. Actions/conditions:
//        661_6: adds a dtafobjects 487 instance; sets the object's animation to 7; sets the selected object's
//        direction to 0; plus 6 more actions.
void Frames::event_func_499()
{
    // event 661_6 : adds a dtafobjects 487 instance; sets the object's animation to 7; sets the selected object's direction to 0; plus 6 more actions
    {
        if (!(group_code_1 && group_code_dlc_dtaf_1)) goto event_661_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(992, 90), 1);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(VITA_VIEW_X(((Active*)*it), 896));
            ((Active*)*it)->set_y(VITA_VIEW_Y(((Active*)*it), 912));
            ((Active*)*it)->alterables->strings.set(0, str_sign1_468);
        }
    }
    event_661_6_end: ;
}
// Function purpose: generated callback event_func_500 processes event block(s) 662_6. Actions/conditions:
//        662_6: adds a dtafobjects 487 instance; sets the object's animation to 8; sets the selected object's
//        direction to 0; plus 7 more actions.
void Frames::event_func_500()
{
    // event 662_6 : adds a dtafobjects 487 instance; sets the object's animation to 8; sets the selected object's direction to 0; plus 7 more actions
    {
        if (!(group_code_1 && group_code_dlc_dtaf_1)) goto event_662_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(992, 90), 1);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(VITA_VIEW_X(((Active*)*it), 848));
            ((Active*)*it)->set_y(VITA_VIEW_Y(((Active*)*it), 736));
            ((Active*)*it)->paste(1);
            ((Active*)*it)->alterables->strings.set(0, str_sign2_469);
        }
    }
    event_662_6_end: ;
}
