// Generated from event hover conditions; do not edit.
// Returns whether an object type is selectable in the current frame and active event groups.
static bool vita_focus_type(Frames &f, int type)
{
    switch (f.index) {
    case 0:
        switch (type) {
        case 12: return (f.group_langpick_1);
        case 13: return (f.group_langpick_1);
        case 14: return (f.group_langpick_1);
        case 15: return (f.group_langpick_1);
        case 16: return (f.group_langpick_1);
        case 17: return (f.group_langpick_1);
        case 18: return (f.group_langpick_1);
        default: return false;
        }
    case 2:
        switch (type) {
        case 25: return ((true) && !f.group_pick_slot_1);
        case 26: return (f.group_quit_1);
        case 29: return (f.group_quit_1);
        case 35: return true;
        case 36: return true;
        case 40: return (f.group_pick_slot_1);
        case 41: return (f.group_pick_slot_1);
        case 42: return (f.group_pick_slot_1);
        case 44: return (f.group_pick_slot_1);
        case 45: return (f.group_pick_slot_1);
        case 59: return (f.group_new_dlc_1);
        case 66: return (f.group_new_dlc_1);
        case 67: return (f.group_new_dlc_1);
        case 69: return (f.group_new_dlc_1);
        default: return false;
        }
    case 3:
        switch (type) {
        case 30: return true;
        case 74: return true;
        case 75: return true;
        case 77: return true;
        case 78: return true;
        default: return false;
        }
    case 4:
        switch (type) {
        case 19: return (f.group_bonus_maps_1) || (f.group_custom_maps_1) || (f.group_main_maps_1);
        case 66: return (f.group_bonus_maps_1) || (f.group_custom_maps_1) || (f.group_main_maps_1);
        case 75: return true;
        case 77: return true;
        case 87: return true;
        case 92: return true;
        case 97: return true;
        case 99: return (f.group_custom_maps_1);
        case 101: return true;
        case 105: return true;
        default: return false;
        }
    case 6:
        switch (type) {
        case 26: return (f.group_code_1) || (f.group_code_1 && f.group_code_crafting_1) || (f.group_code_1 && f.group_code_my_stats_1);
        case 81: return (f.group_code_1);
        case 120: return (f.group_code_1);
        case 133: return (f.group_code_1) || (f.group_code_1 && f.group_code_mouseovers_item_hovers_holding_shift_1);
        case 135: return (f.group_code_1 && f.group_code_journal_1) || (f.group_code_1 && f.group_code_menu_1) || (f.group_code_1 && f.group_code_npc_profiles_npc_profile_1);
        case 149: return (f.group_code_1);
        case 151: return (f.group_code_1);
        case 153: return (f.group_code_1) || (f.group_code_1 && f.group_code_mouseovers_item_hovers_holding_shift_1) || (f.group_code_1 && f.group_code_npc_profiles_npc_profile_1);
        case 168: return (f.group_code_1);
        case 169: return (f.group_code_1);
        case 173: return (f.group_code_1);
        case 175: return (f.group_code_1);
        case 176: return (f.group_code_1);
        case 178: return (f.group_code_1);
        case 180: return (f.group_code_1);
        case 181: return (f.group_code_1);
        case 182: return (f.group_code_1);
        case 183: return (f.group_code_1) || (f.group_code_1 && f.group_code_caught_solitary_1) || (f.group_code_1 && f.group_code_crafting_1) || (f.group_code_1 && f.group_code_journal_1) || (f.group_code_1 && f.group_code_load_confirm_1) || (f.group_code_1 && f.group_code_menu_1) || (f.group_code_1 && f.group_code_missions_1) || (f.group_code_1 && f.group_code_npc_profiles_npc_profile_1) || (f.group_code_1 && f.group_code_payphone_1) || (f.group_code_1 && f.group_code_sort_these_sleep_stuff_sleep_menu_1) || (f.group_code_1 && f.group_code_toilet_1);
        case 188: return true;
        case 189: return (f.group_code_1) || (f.group_code_1 && f.group_code_npc_profiles_npc_profile_1);
        case 205: return (f.group_code_1);
        case 207: return (f.group_code_1);
        case 208: return (f.group_code_1);
        case 211: return (f.group_code_1);
        case 212: return (f.group_code_1);
        case 213: return (f.group_code_1) || (f.group_code_1 && f.group_code_job_related_laundry_1);
        case 215: return (f.group_code_1) || (f.group_code_1 && f.group_code_job_related_kitchen_1) || (f.group_code_1 && f.group_code_schedules_food_1);
        case 217: return (f.group_code_1);
        case 218: return (f.group_code_1);
        case 219: return (f.group_code_1);
        case 228: return (f.group_code_1);
        case 231: return (f.group_code_1);
        case 233: return true;
        case 241: return (f.group_code_1);
        case 242: return (f.group_code_1);
        case 243: return (f.group_code_1);
        case 248: return (f.group_code_1);
        case 249: return (f.group_code_1) || (f.group_code_1 && f.group_code_job_related_laundry_1);
        case 250: return (f.group_code_1) || (f.group_code_1 && f.group_code_job_related_kitchen_1);
        case 252: return (f.group_code_1);
        case 253: return (f.group_code_1) || (f.group_code_1 && f.group_code_mouseovers_workouts_1);
        case 254: return (f.group_code_1) || (f.group_code_1 && f.group_code_mouseovers_workouts_1);
        case 260: return (f.group_code_1) || (f.group_code_1 && f.group_code_job_related_woodshop_1);
        case 261: return (f.group_code_1);
        case 262: return (f.group_code_1) || (f.group_code_1 && f.group_code_job_related_metalshop_1);
        case 264: return (f.group_code_1 && f.group_code_job_related_metalshop_1);
        case 268: return (f.group_code_1);
        case 271: return (f.group_code_1);
        case 272: return (f.group_code_1);
        case 273: return (f.group_code_1);
        case 277: return (f.group_code_1);
        case 279: return (f.group_code_1);
        case 292: return (f.group_code_1 && f.group_code_menu_1);
        case 295: return (f.group_code_1);
        case 301: return (f.group_code_1);
        case 302: return (f.group_code_1);
        case 303: return (f.group_code_1);
        case 304: return (f.group_code_1);
        case 305: return (f.group_code_1);
        case 306: return (f.group_code_1);
        case 307: return (f.group_code_1);
        case 308: return (f.group_code_1);
        case 309: return (f.group_code_1);
        case 314: return (f.group_code_1);
        case 315: return (f.group_code_1);
        case 317: return (f.group_code_1);
        case 318: return (f.group_code_1);
        case 321: return (f.group_code_1);
        case 323: return (f.group_code_1);
        case 324: return (f.group_code_1);
        case 325: return (f.group_code_1);
        case 330: return (f.group_code_1);
        case 331: return (f.group_code_1);
        case 332: return (f.group_code_1);
        case 333: return (f.group_code_1);
        case 334: return (f.group_code_1);
        case 339: return (f.group_code_1);
        case 340: return (f.group_code_1);
        case 342: return (f.group_code_1) || (f.group_code_1 && f.group_code_mouseovers_workouts_1);
        case 343: return (f.group_code_1) || (f.group_code_1 && f.group_code_mouseovers_workouts_1);
        case 344: return (f.group_code_1);
        case 354: return (f.group_code_1);
        case 357: return (f.group_code_1);
        case 363: return (f.group_code_1) || (f.group_code_1 && f.group_code_mouseovers_workouts_1);
        case 368: return (f.group_code_1) || (f.group_code_1 && f.group_code_mouseovers_workouts_1);
        case 369: return (f.group_code_1) || (f.group_code_1 && f.group_code_mouseovers_workouts_1);
        case 372: return (f.group_code_1) || (f.group_code_1 && f.group_code_mouseovers_workouts_1);
        case 389: return (f.group_code_1);
        case 392: return (f.group_code_1);
        case 403: return (f.group_code_1);
        case 404: return (f.group_code_1);
        case 406: return (f.group_code_1);
        case 411: return (f.group_code_1);
        case 416: return (f.group_code_1);
        case 426: return (f.group_code_1);
        case 429: return (f.group_code_1);
        case 431: return (f.group_code_1);
        case 433: return (f.group_code_1);
        case 447: return (f.group_code_1);
        default: return false;
        }
    case 8:
        switch (type) {
        case 19: return true;
        case 26: return true;
        case 47: return true;
        case 66: return true;
        case 67: return true;
        default: return false;
        }
    case 9:
        switch (type) {
        case 26: return true;
        case 67: return true;
        case 460: return (f.group_base_layer_1);
        case 479: return (f.group_base_layer_1);
        case 480: return (f.group_base_layer_1);
        case 482: return true;
        case 486: return (f.group_remap_keys_1);
        case 487: return (f.group_remap_keys_1);
        case 488: return (f.group_remap_keys_1);
        case 489: return (f.group_remap_keys_1);
        case 490: return (f.group_remap_keys_1);
        case 491: return (f.group_remap_keys_1);
        case 492: return (f.group_remap_keys_1);
        case 493: return true;
        case 499: return true;
        case 500: return true;
        case 503: return (f.group_base_layer_1);
        case 504: return (f.group_base_layer_1);
        default: return false;
        }
    case 10:
        switch (type) {
        case 77: return true;
        case 119: return true;
        case 125: return true;
        case 139: return true;
        case 141: return true;
        case 142: return true;
        case 223: return true;
        case 224: return true;
        case 225: return true;
        case 226: return true;
        case 227: return true;
        case 413: return true;
        case 417: return true;
        case 418: return true;
        case 419: return true;
        case 420: return true;
        case 421: return true;
        case 422: return true;
        case 423: return true;
        case 424: return true;
        case 425: return true;
        case 434: return true;
        case 435: return true;
        case 436: return true;
        case 437: return true;
        case 438: return true;
        case 439: return true;
        case 440: return true;
        case 441: return true;
        case 444: return true;
        case 511: return true;
        case 513: return true;
        case 516: return true;
        case 520: return true;
        case 521: return true;
        case 522: return true;
        default: return false;
        }
    case 11:
        switch (type) {
        case 26: return (f.group_code_1) || (f.group_code_1 && f.group_code_crafting_1) || (f.group_code_1 && f.group_code_my_stats_1);
        case 133: return (f.group_code_1) || (f.group_code_1 && f.group_code_mouseovers_item_hovers_holding_shift_1);
        case 135: return (f.group_code_1 && f.group_code_menu_1) || (f.group_code_1 && f.group_code_npc_profiles_npc_profile_1);
        case 151: return (f.group_code_1);
        case 153: return (f.group_code_1) || (f.group_code_1 && f.group_code_mouseovers_item_hovers_holding_shift_1);
        case 168: return (f.group_code_1);
        case 173: return (f.group_code_1);
        case 176: return (f.group_code_1);
        case 178: return (f.group_code_1);
        case 183: return (f.group_code_1) || (f.group_code_1 && f.group_code_crafting_1) || (f.group_code_1 && f.group_code_menu_1) || (f.group_code_1 && f.group_code_npc_profiles_npc_profile_1);
        case 188: return (f.group_code_1) || (f.group_code_1 && f.group_code_npc_profiles_npc_profile_1);
        case 189: return (f.group_code_1) || (f.group_code_1 && f.group_code_npc_profiles_npc_profile_1);
        case 205: return (f.group_code_1);
        case 207: return (f.group_code_1);
        case 208: return (f.group_code_1);
        case 212: return (f.group_code_1);
        case 218: return (f.group_code_1);
        case 228: return (f.group_code_1);
        case 231: return (f.group_code_1);
        case 242: return (f.group_code_1);
        case 243: return (f.group_code_1);
        case 248: return (f.group_code_1);
        case 253: return (f.group_code_1);
        case 254: return (f.group_code_1);
        case 261: return (f.group_code_1);
        case 271: return (f.group_code_1);
        case 272: return (f.group_code_1);
        case 273: return (f.group_code_1);
        case 279: return (f.group_code_1);
        case 309: return (f.group_code_1);
        case 314: return (f.group_code_1);
        case 317: return (f.group_code_1);
        case 330: return (f.group_code_1);
        case 340: return (f.group_code_1);
        case 342: return (f.group_code_1);
        case 343: return (f.group_code_1);
        case 344: return (f.group_code_1);
        case 357: return (f.group_code_1);
        case 368: return (f.group_code_1);
        case 369: return (f.group_code_1);
        case 372: return (f.group_code_1);
        case 529: return (f.group_code_1);
        case 536: return (f.group_code_1);
        case 549: return (f.group_code_1);
        case 554: return (f.group_code_1);
        default: return false;
        }
    default: return false;
    }
}

bool vita_controls_hide_object(int type)
{
    return type == 8 || type == 128 || type == 341;
}
