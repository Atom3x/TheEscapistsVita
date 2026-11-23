#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_3042()
{
    // event 307_6
    {
        if (!(group_load_map_from_file_1)) goto event_307_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (92))) goto event_307_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_307_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_307_6_end;
        containerdeliveries_397_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_containerdeliveries_397(0, 0), 1);
            containerdeliveries_397_instances.add_back();
        }
        for (ObjectIterator it(containerdeliveries_397_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_307_6_end: ;
}
void Frames::event_func_3043()
{
    // event 308_6
    {
        if (!(group_load_map_from_file_1)) goto event_308_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (92))) goto event_308_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_308_6_end;
        containerdeliveries_397_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_containerdeliveries_397(0, 0), 1);
            containerdeliveries_397_instances.add_back();
        }
        for (ObjectIterator it(containerdeliveries_397_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_308_6_end: ;
}
void Frames::event_func_3044()
{
    // event 309_6
    {
        if (!(group_load_map_from_file_1)) goto event_309_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (92))) goto event_309_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_309_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(0, 0), 1);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_309_6_end: ;
}
void Frames::event_func_3045()
{
    // event 310_6
    {
        if (!(group_load_map_from_file_1)) goto event_310_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (93))) goto event_310_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_310_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_310_6_end;
        containerdeliveries2_398_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_containerdeliveries2_398(0, 0), 1);
            containerdeliveries2_398_instances.add_back();
        }
        for (ObjectIterator it(containerdeliveries2_398_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_310_6_end: ;
}
void Frames::event_func_3046()
{
    // event 311_6
    {
        if (!(group_load_map_from_file_1)) goto event_311_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (93))) goto event_311_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_311_6_end;
        containerdeliveries2_398_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_containerdeliveries2_398(0, 0), 1);
            containerdeliveries2_398_instances.add_back();
        }
        for (ObjectIterator it(containerdeliveries2_398_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_311_6_end: ;
}
void Frames::event_func_3047()
{
    // event 312_6
    {
        if (!(group_load_map_from_file_1)) goto event_312_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (93))) goto event_312_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_312_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(0, 0), 1);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_312_6_end: ;
}
void Frames::event_func_3048()
{
    // event 313_6
    {
        if (!(group_load_map_from_file_1)) goto event_313_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (94))) goto event_313_6_end;
        medicspot_421_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_medicspot_421(0, 0), 1);
            medicspot_421_instances.add_back();
        }
        for (ObjectIterator it(medicspot_421_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_313_6_end: ;
}
void Frames::event_func_3049()
{
    // event 314_6
    {
        if (!(group_load_map_from_file_1)) goto event_314_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (95))) goto event_314_6_end;
        checkpoint_422_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_checkpoint_422(0, 0), 1);
            checkpoint_422_instances.add_back();
        }
        for (ObjectIterator it(checkpoint_422_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_314_6_end: ;
}
void Frames::event_func_3050()
{
    // event 315_6
    {
        if (!(group_load_map_from_file_1)) goto event_315_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (96))) goto event_315_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_315_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_315_6_end;
        skippingmat_435_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_skippingmat_435(0, 0), 1);
            skippingmat_435_instances.add_back();
        }
        for (ObjectIterator it(skippingmat_435_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_315_6_end: ;
}
void Frames::event_func_3051()
{
    // event 316_6
    {
        if (!(group_load_map_from_file_1)) goto event_316_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (96))) goto event_316_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_316_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(0, 0), 1);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_316_6_end: ;
}
void Frames::event_func_3052()
{
    // event 317_6
    {
        if (!(group_load_map_from_file_1)) goto event_317_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (96))) goto event_317_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_317_6_end;
        sssobjects_502_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_sssobjects_502(0, 0), 1);
            sssobjects_502_instances.add_back();
        }
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_317_6_end: ;
}
void Frames::event_func_3053()
{
    // event 318_6
    {
        if (!(group_load_map_from_file_1)) goto event_318_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (96))) goto event_318_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_318_6_end;
        sssobjects_502_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_sssobjects_502(0, 0), 2);
            sssobjects_502_instances.add_back();
        }
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->paste(0);
            ((Active*)*it)->destroy();
        }
    }
    event_318_6_end: ;
}
void Frames::event_func_3054()
{
    // event 319_6
    {
        if (!(group_load_map_from_file_1)) goto event_319_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (97))) goto event_319_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_319_6_end;
        punchbag_436_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_punchbag_436(0, 0), 1);
            punchbag_436_instances.add_back();
        }
        for (ObjectIterator it(punchbag_436_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
        punchbag2_438_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_punchbag2_438(0, 0), 1);
            punchbag2_438_instances.add_back();
        }
        for (ObjectIterator it(punchbag2_438_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16)+1);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_319_6_end: ;
}
void Frames::event_func_3055()
{
    // event 320_6
    {
        if (!(group_load_map_from_file_1)) goto event_320_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (97))) goto event_320_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_320_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(0, 0), 1);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(6);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_320_6_end: ;
}
void Frames::event_func_3056()
{
    // event 321_6
    {
        if (!(group_load_map_from_file_1)) goto event_321_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (98))) goto event_321_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_321_6_end;
        speedbag_439_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_speedbag_439(0, 0), 1);
            speedbag_439_instances.add_back();
        }
        for (ObjectIterator it(speedbag_439_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
        punchbag3_440_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_punchbag3_440(0, 0), 1);
            punchbag3_440_instances.add_back();
        }
        for (ObjectIterator it(punchbag3_440_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16)+1);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_321_6_end: ;
}
void Frames::event_func_3057()
{
    // event 322_6
    {
        if (!(group_load_map_from_file_1)) goto event_322_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (98))) goto event_322_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_322_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(0, 0), 1);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(6);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_322_6_end: ;
}
void Frames::event_func_3058()
{
    // event 323_6
    {
        if (!(group_load_map_from_file_1)) goto event_323_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (63))) goto event_323_6_end;
        patroljeepwpright_415_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_patroljeepwpright_415(0, 0), 1);
            patroljeepwpright_415_instances.add_back();
        }
        for (ObjectIterator it(patroljeepwpright_415_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_323_6_end: ;
}
void Frames::event_func_3059()
{
    // event 324_6
    {
        if (!(group_load_map_from_file_1)) goto event_324_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (64))) goto event_324_6_end;
        patroljeepwpdown_417_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_patroljeepwpdown_417(0, 0), 1);
            patroljeepwpdown_417_instances.add_back();
        }
        for (ObjectIterator it(patroljeepwpdown_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
        }
    }
    event_324_6_end: ;
}
void Frames::event_func_3060()
{
    // event 325_6
    {
        if (!(group_load_map_from_file_1)) goto event_325_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (65))) goto event_325_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3))) == (1))) goto event_325_6_end;
        powergen_360_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_powergen_360(0, 0), 1);
            powergen_360_instances.add_back();
        }
        for (ObjectIterator it(powergen_360_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_325_6_end: ;
}
void Frames::event_func_3061()
{
    // event 326_6
    {
        if (!(group_load_map_from_file_1)) goto event_326_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2))) == (65))) goto event_326_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3))) == (3))) goto event_326_6_end;
        powergen_360_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_powergen_360(0, 0), 4);
            powergen_360_instances.add_back();
        }
        for (ObjectIterator it(powergen_360_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0))*16);
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1))*16);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3)));
        }
    }
    event_326_6_end: ;
}
void Frames::loop_load_map_objects_6()
{
    event_func_2893();
    event_func_2894();
    event_func_2895();
    event_func_2896();
    event_func_2897();
    event_func_2898();
    event_func_2899();
    event_func_2900();
    event_func_2901();
    event_func_2902();
    event_func_2903();
    event_func_2904();
    event_func_2905();
    event_func_2906();
    event_func_2907();
    event_func_2908();
    event_func_2909();
    event_func_2910();
    event_func_2911();
    event_func_2912();
    event_func_2913();
    event_func_2914();
    event_func_2915();
    event_func_2916();
    event_func_2917();
    event_func_2918();
    event_func_2919();
    event_func_2920();
    event_func_2921();
    event_func_2922();
    event_func_2923();
    event_func_2924();
    event_func_2925();
    event_func_2926();
    event_func_2927();
    event_func_2928();
    event_func_2929();
    event_func_2930();
    event_func_2931();
    event_func_2932();
    event_func_2933();
    event_func_2934();
    event_func_2935();
    event_func_2936();
    event_func_2937();
    event_func_2938();
    event_func_2939();
    event_func_2940();
    event_func_2941();
    event_func_2942();
    event_func_2943();
    event_func_2944();
    event_func_2945();
    event_func_2946();
    event_func_2947();
    event_func_2948();
    event_func_2949();
    event_func_2950();
    event_func_2951();
    event_func_2952();
    event_func_2953();
    event_func_2954();
    event_func_2955();
    event_func_2956();
    event_func_2957();
    event_func_2958();
    event_func_2959();
    event_func_2960();
    event_func_2961();
    event_func_2962();
    event_func_2963();
    event_func_2964();
    event_func_2965();
    event_func_2966();
    event_func_2967();
    event_func_2968();
    event_func_2969();
    event_func_2970();
    event_func_2971();
    event_func_2972();
    event_func_2973();
    event_func_2974();
    event_func_2975();
    event_func_2976();
    event_func_2977();
    event_func_2978();
    event_func_2979();
    event_func_2980();
    event_func_2981();
    event_func_2982();
    event_func_2983();
    event_func_2984();
    event_func_2985();
    event_func_2986();
    event_func_2987();
    event_func_2988();
    event_func_2989();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_2995();
    event_func_2996();
    event_func_2997();
    event_func_2998();
    event_func_2999();
    event_func_3000();
    event_func_3001();
    event_func_3002();
    event_func_3003();
    event_func_3004();
    event_func_3005();
    event_func_3006();
    event_func_3007();
    event_func_3008();
    event_func_3009();
    event_func_3010();
    event_func_3011();
    event_func_3012();
    event_func_3013();
    event_func_3014();
    event_func_3015();
    event_func_3016();
    event_func_3017();
    event_func_3018();
    event_func_3019();
    event_func_3020();
    event_func_3021();
    event_func_3022();
    event_func_3023();
    event_func_3024();
    event_func_3025();
    event_func_3026();
    event_func_3027();
    event_func_3028();
    event_func_3029();
    event_func_3030();
    event_func_3031();
    event_func_3032();
    event_func_3033();
    event_func_3034();
    event_func_3035();
    event_func_3036();
    event_func_3037();
    event_func_3038();
    event_func_3039();
    event_func_3040();
    event_func_3041();
    event_func_3042();
    event_func_3043();
    event_func_3044();
    event_func_3045();
    event_func_3046();
    event_func_3047();
    event_func_3048();
    event_func_3049();
    event_func_3050();
    event_func_3051();
    event_func_3052();
    event_func_3053();
    event_func_3054();
    event_func_3055();
    event_func_3056();
    event_func_3057();
    event_func_3058();
    event_func_3059();
    event_func_3060();
    event_func_3061();
}
void Frames::event_func_3062()
{
    // event 2183_6
    {
        if (!(group_code_1)) goto event_2183_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2183_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(515, str_inrange_1413)) < (120))) goto event_2183_6_end;
        media.play_id(SOUND_DOOR_0, 1-1);
    }
    event_2183_6_end: ;
}
void Frames::loop_door_sfx_6()
{
    event_func_3062();
}
void Frames::event_func_3063()
{
    // event 2182_6
    {
        if (!(group_code_1)) goto event_2182_6_end;
        doorcheck_364_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(doorcheck_364_instances, qualifier_8)) goto event_2182_6_end;
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!qualifier_8.has_selection()) goto event_2182_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(515, str_inrange_1413, get_distance_int(((Active*)get_instance(playerBase_instances))->get_x(), ((Active*)get_instance(playerBase_instances))->get_y(), ((Active*)get_instance(doorcheck_364_instances))->get_x(), ((Active*)get_instance(doorcheck_364_instances))->get_y()));
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        {
            loop_door_sfx_running = true;
            int times = int(1);
            loop_door_sfx_index = 0;
            while (loop_door_sfx_index < times) {
                loop_door_sfx_6();
                if (!loop_door_sfx_running) break;
                loop_door_sfx_index++;
            }
        }
    }
    event_2182_6_end: ;
}
void Frames::event_func_3064()
{
    // event 2184_6
    {
        if (!(group_code_1)) goto event_2184_6_end;
        {
            ((Active*)get_instance(doorcheck_364_instances))->set_global_position(-10, -10);
            pos_end_2184_6_0: ;
        }
    }
    event_2184_6_end: ;
}
void Frames::loop_open_door_check_6()
{
    event_func_3063();
    event_func_3064();
}
void Frames::event_func_3065()
{
    // event 3049_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3049_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_3049_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(15);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(449, str_chiptype_1316, str_rock_1882);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(155, str_chipping_728, 100);
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
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(402, str_actype_1216, ((INI*)get_instance(translationData_instances))->get_string(str_action_857, str_5_164));
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
    event_3049_6_end: ;
}
void Frames::loop_chip_check_rock_6()
{
    event_func_1385();
    event_func_3065();
}
void Frames::event_func_3066()
{
    // event 1531_6
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1531_6_end;
        FrameObject * single_instance_1531_6_0; single_instance_1531_6_0 = NULL;
        // select single: true false false
        usespot_208_instances.clear_selection();
        for (ObjectIterator p_it(usespot_208_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_items_184(parent->x + 8, parent->y + 6), parent->layer);
                if (single_instance_1531_6_0 == NULL)
                    single_instance_1531_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1531_6_0))->alterables->values.set(2, 152);
        ((Active*)((Active*)single_instance_1531_6_0))->alterables->flags.enable(-2);
        ((Active*)((Active*)single_instance_1531_6_0))->alterables->values.set(3, 1);
    }
    event_1531_6_end: ;
}
void Frames::loop_create_jungleid_6()
{
    event_func_3066();
}
void Frames::event_func_3067()
{
    // event 1530_6
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1530_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_jungid_1883))) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_1530_6_end;
        if (!check_not_overlap(usespot_208_instances, items_184_instances)) goto event_1530_6_end;
        {
            loop_create_jungleid_running = true;
            int times = int(1);
            loop_create_jungleid_index = 0;
            while (loop_create_jungleid_index < times) {
                loop_create_jungleid_6();
                if (!loop_create_jungleid_running) break;
                loop_create_jungleid_index++;
            }
        }
    }
    event_1530_6_end: ;
}
void Frames::event_func_3068()
{
    // event 1532_6
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1532_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_jungid_1883))) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_1532_6_end;
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1532_6_end: ;
}
void Frames::loop_jungle_id_6()
{
    event_func_3067();
    event_func_3068();
}
void Frames::event_func_3069()
{
    // event 3869_6
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3869_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(342, str_isawake_1135)) == (1))) goto event_3869_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(341, str_inrange_1134)) == (1))) goto event_3869_6_end;
        {
            loop_npc_tab_buy_running = true;
            int times = int(1);
            loop_npc_tab_buy_index = 0;
            while (loop_npc_tab_buy_index < times) {
                loop_npc_tab_buy_6();
                if (!loop_npc_tab_buy_running) break;
                loop_npc_tab_buy_index++;
            }
        }
    }
    event_3869_6_end: ;
}
void Frames::loop_npc_buy_setup_6()
{
    event_func_2125();
    event_func_2126();
    event_func_2127();
    event_func_2133();
    event_func_2132();
    event_func_3069();
}
void Frames::event_func_3070()
{
    // event 2127_6
    {
        if (!(group_code_1)) goto event_2127_6_end;
        icons_433_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_icons_433(0, 0), 5);
            icons_433_instances.add_back();
        }
        for (ObjectIterator it(icons_433_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(343, str_iconx_1136));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(344, str_icony_1137));
            ((Active*)*it)->alterables->values.set(25, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(345, str_iconz_1138));
        }
    }
    event_2127_6_end: ;
}
void Frames::loop_icon_thumbdown_6()
{
    event_func_3070();
}
void Frames::event_func_3071()
{
    // event 4027_6
    {
        if (!(group_code_1 && group_code_missions_1)) goto event_4027_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_4027_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(2, empty_string);
            ((Active*)*it)->alterables->values.sub(12, 5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(343, str_iconx_1136, ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(344, str_icony_1137, ((Active*)get_single(inmateBase_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(345, str_iconz_1138, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        {
            loop_icon_thumbdown_running = true;
            int times = int(1);
            loop_icon_thumbdown_index = 0;
            while (loop_icon_thumbdown_index < times) {
                loop_icon_thumbdown_6();
                if (!loop_icon_thumbdown_running) break;
                loop_icon_thumbdown_index++;
            }
        }
    }
    event_4027_6_end: ;
}
void Frames::loop_decline_mission_6()
{
    event_func_1643();
    event_func_3071();
}
void Frames::event_func_3072()
{
    // event 3263_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3263_6_end;
        if (!((get_mouse_y()) > (((Active*)get_instance(playerBase_instances))->get_y()))) goto event_3263_6_end;
        usespot_208_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_usespot_208(0, 0), 4);
            usespot_208_instances.add_back();
        }
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(9, str_rope_463);
            ((Active*)*it)->set_x(((get_mouse_x()/MathHelper()/16)*16));
            ((Active*)*it)->set_y(((get_mouse_y()/MathHelper()/16)*16)+16);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(670, str_currlay_1774, ((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 5));
    }
    event_3263_6_end: ;
}
void Frames::event_func_3073()
{
    // event 3264_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3264_6_end;
        if (!((get_mouse_y()) < (((Active*)get_instance(playerBase_instances))->get_y()))) goto event_3264_6_end;
        usespot_208_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_usespot_208(0, 0), 4);
            usespot_208_instances.add_back();
        }
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(9, str_rope_463);
            ((Active*)*it)->set_x(((get_mouse_x()/MathHelper()/16)*16));
            ((Active*)*it)->set_y(((get_mouse_y()/MathHelper()/16)*16)-16);
        }
    }
    event_3264_6_end: ;
}
void Frames::event_func_3074()
{
    // event 3266_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3266_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(9)) == (str_rope_463))) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_3266_6_end;
        if (!((((Active*)get_single(usespot_208_instances, default_active_instance))->layer->index+1) == (5))) goto event_3266_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value(((Active*)get_single(usespot_208_instances, default_active_instance))->get_x()/MathHelper()/16, ((Active*)get_single(usespot_208_instances, default_active_instance))->get_y()/MathHelper()/16, 5)) == (0))) goto event_3266_6_end;
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+16);
            ((Active*)*it)->set_layer(2-1);
        }
    }
    event_3266_6_end: ;
}
void Frames::event_func_3075()
{
    // event 3267_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3267_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(9)) == (str_rope_463))) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_3267_6_end;
        if (!((((Active*)get_single(usespot_208_instances, default_active_instance))->layer->index+1) == (5))) goto event_3267_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value(((Active*)get_single(usespot_208_instances, default_active_instance))->get_x()/MathHelper()/16, ((Active*)get_single(usespot_208_instances, default_active_instance))->get_y()/MathHelper()/16, 5)) >= (87))) goto event_3267_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value(((Active*)get_single(usespot_208_instances, default_active_instance))->get_x()/MathHelper()/16, ((Active*)get_single(usespot_208_instances, default_active_instance))->get_y()/MathHelper()/16, 5)) <= (89))) goto event_3267_6_end;
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+16);
            ((Active*)*it)->set_layer(2-1);
        }
    }
    event_3267_6_end: ;
}
void Frames::event_func_3076()
{
    // event 3270_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3270_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(9)) == (str_rope_463))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_3270_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(669, str_go_1773, 2);
        media.play_id(SOUND_BUY_11, -1, 1);
    }
    event_3270_6_end: ;
}
void Frames::loop_rope_vert_check_6()
{
    event_func_3072();
    event_func_3073();
    event_func_2718();
    event_func_3074();
    event_func_3075();
    event_func_2789();
    event_func_2720();
    event_func_3076();
    event_func_2791();
    event_func_2723();
    event_func_2792();
    event_func_2793();
}
void Frames::event_func_3077()
{
    // event 3080_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3080_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), ((Active*)get_instance(playerBase_instances))->layer->index+1)) == (56))) goto event_3080_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(715, str_cutpower_1884, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(715, str_cutpower_1884)/MathHelper()/2);
    }
    event_3080_6_end: ;
}
void Frames::event_func_3078()
{
    // event 3082_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3082_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_3082_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(14);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(154, str_cutting_727, 100);
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
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(402, str_actype_1216, ((INI*)get_instance(translationData_instances))->get_string(str_action_857, str_4_161));
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
    event_3082_6_end: ;
}
void Frames::event_func_3079()
{
    // event 3083_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3083_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(716, str_elec_power_1885, 1);
    }
    event_3083_6_end: ;
}
void Frames::event_func_3080()
{
    // event 3084_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3084_6_end;
        powergen_360_instances.clear_selection();
        for (ObjectIterator it(powergen_360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!powergen_360_instances.has_selection()) goto event_3084_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(716, str_elec_power_1885, 0);
    }
    event_3084_6_end: ;
}
void Frames::event_func_3081()
{
    // event 3085_6
    bool or_result_3085_6 = false;
    bool or_temp_result_3085_6_0 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3085_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(358, str_fatigue_36)) < (100))) goto or_event_3085_6_0_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), ((Active*)get_instance(playerBase_instances, default_active_instance))->layer->index+1)) == (90))) goto or_event_3085_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(716, str_elec_power_1885)) == (1))) goto or_event_3085_6_0_end;
        or_result_3085_6 = true;
        or_temp_result_3085_6_0 = true;
    }
    or_event_3085_6_0_end: ;
    // event 3085_6
    bool or_temp_result_3085_6_1 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3085_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(358, str_fatigue_36)) < (100))) goto or_event_3085_6_1_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), ((Active*)get_instance(playerBase_instances, default_active_instance))->layer->index+1)) == (91))) goto or_event_3085_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(716, str_elec_power_1885)) == (1))) goto or_event_3085_6_1_end;
        or_result_3085_6 = true;
        or_temp_result_3085_6_1 = true;
        or_event_3085_6_1_end: ;
        if (!or_result_3085_6) goto or_final_or_event_3085_6_1_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(154, str_cutting_727, 0);
            ((AssociateArray*)*it)->set_value(509, str_elecdmg_1407, 10);
        }
        {
            loop_close_activity_box_running = true;
            int times = int(1);
            loop_close_activity_box_index = 0;
            while (loop_close_activity_box_index < times) {
                loop_close_activity_box_6();
                if (!loop_close_activity_box_running) break;
                loop_close_activity_box_index++;
            }
        }
        {
            loop_elec_me_running = true;
            int times = int(1);
            loop_elec_me_index = 0;
            while (loop_elec_me_index < times) {
                loop_elec_me_6();
                if (!loop_elec_me_running) break;
                loop_elec_me_index++;
            }
        }
    }
    or_final_or_event_3085_6_1_end: ;
}
void Frames::loop_cut_fence_check_6()
{
    event_func_3077();
    event_func_1385();
    event_func_3078();
    event_func_3079();
    event_func_3080();
    event_func_3081();
}
void Frames::event_func_3082()
{
    // event 3442_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3442_6_end;
        stash_420_instances.clear_selection();
        spread_value(stash_420_instances, 0, 1);
    }
    event_3442_6_end: ;
}
void Frames::loop_reid_crates_6()
{
    event_func_3082();
}
void Frames::event_func_3083()
{
    // event 3212_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3212_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) == (0))) goto event_3212_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, str_inventory_full_1886);
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
            loop_stash_crate_running = false;
    
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_3212_6_end: ;
}
void Frames::event_func_3084()
{
    // event 3213_6
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3213_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) > (0))) goto event_3213_6_end;
        stash_420_instances.clear_selection();
        for (ObjectIterator it(stash_420_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(717, str_stashid_1887)))) { it.deselect(); continue; }
        }
        if (!stash_420_instances.has_selection()) goto event_3213_6_end;
        for (ObjectIterator it(stash_420_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(str_24_25_44_58_62_85_86_87_88_114_116_117_118_120_123_125_1888, str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get_count()))));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(480, str_itemhp_1355, 100);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(479, str_offfloor_1354, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, str_found_1889+((INI*)get_instance(itemData_instances))->get_string(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_itemid_445)), str_name_103)+str__918);
        media.play_id(SOUND_ACCOLADE_9, 1-1);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_add_running = true;
            int times = int(1);
            loop_inv_add_index = 0;
            while (loop_inv_add_index < times) {
                loop_inv_add_6();
                if (!loop_inv_add_running) break;
                loop_inv_add_index++;
            }
        }
        {
            loop_reid_crates_running = true;
            int times = int(stash_420_instances.size());
            loop_reid_crates_index = 0;
            while (loop_reid_crates_index < times) {
                loop_reid_crates_6();
                if (!loop_reid_crates_running) break;
                loop_reid_crates_index++;
            }
        }
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
    }
    event_3213_6_end: ;
}
void Frames::loop_stash_crate_6()
{
    event_func_1692();
    event_func_3083();
    event_func_3084();
}
void Frames::event_func_3085()
{
    // event 3781_6
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_treadmill_1)) goto event_3781_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(718, str_max_dist_1890)) > (0))) goto event_3781_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(718, str_max_dist_1890)%MathHelper()%2) == (0))) goto event_3781_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(9)) < (100))) goto event_3781_6_end;
        ((Active*)get_instance(playerBase_instances))->alterables->values.add(9, 1);
        {
            loop_icon_spd_running = true;
            int times = int(1);
            loop_icon_spd_index = 0;
            while (loop_icon_spd_index < times) {
                loop_icon_spd_6();
                if (!loop_icon_spd_running) break;
                loop_icon_spd_index++;
            }
        }
    }
    event_3781_6_end: ;
}
void Frames::loop_treadmill_check_spd_6()
{
    event_func_3085();
}
void Frames::event_func_3086()
{
    // event 3480_6
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3480_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 68);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_add_running = true;
            int times = int(1);
            loop_inv_add_index = 0;
            while (loop_inv_add_index < times) {
                loop_inv_add_6();
                if (!loop_inv_add_running) break;
                loop_inv_add_index++;
            }
        }
    }
    event_3480_6_end: ;
}
void Frames::event_func_3087()
{
    // event 3481_6
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3481_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(89, str_addsuccess_596)) == (1))) goto event_3481_6_end;
        active9_291_instances.clear_selection();
        for (ObjectIterator it(active9_291_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!active9_291_instances.has_selection()) goto event_3481_6_end;
        for (ObjectIterator it(active9_291_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3481_6_end: ;
}
void Frames::loop_pickup_steps_check_6()
{
    event_func_3086();
    event_func_3087();
}
void Frames::event_func_3088()
{
    // event 1661_6
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1661_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sleeping_guards_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1661_6_end;
        bedguard_337_instances.clear_selection();
        if (!check_overlap(guardBase_instances, bedguard_337_instances)) goto event_1661_6_end;
        for (ObjectIterator it(bedguard_337_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!bedguard_337_instances.has_selection()) goto event_1661_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (6))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1661_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bedguard_337_instances, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->set_y(((Active*)get_single(bedguard_337_instances, it.current_index, default_active_instance))->get_y()+8);
            ((Active*)*it)->set_direction(24);
        }
    }
    event_1661_6_end: ;
}
void Frames::event_func_3089()
{
    // event 1662_6
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1662_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sleeping_guards_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1662_6_end;
        if (!check_not_overlap(guardBase_instances, waypointguard2_315_instances)) goto event_1662_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1662_6_end;
        waypointguard2_315_instances.clear_selection();
        for (ObjectIterator it(waypointguard2_315_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(10)))) { it.deselect(); continue; }
        }
        if (!waypointguard2_315_instances.has_selection()) goto event_1662_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(waypointguard2_315_instances, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(waypointguard2_315_instances, it.current_index, default_active_instance))->get_y()+8);
        }
    }
    event_1662_6_end: ;
}
void Frames::event_func_3090()
{
    // event 1663_6
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1663_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sleeping_guards_index+1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1663_6_end;
        waypointguard2_315_instances.clear_selection();
        if (!check_overlap(guardBase_instances, waypointguard2_315_instances)) goto event_1663_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (6))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1663_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->strings.get(3), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(699, str_currg_1849, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(700, str_currd_1850, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(10));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(698, str_currw_1848, ((Active*)get_single(waypointguard2_315_instances, default_active_instance))->alterables->values.get(0));
        {
            loop_patrol_target_check_running = true;
            int times = int(1);
            loop_patrol_target_check_index = 0;
            while (loop_patrol_target_check_index < times) {
                loop_patrol_target_check_6();
                if (!loop_patrol_target_check_running) break;
                loop_patrol_target_check_index++;
            }
        }
    }
    event_1663_6_end: ;
}
void Frames::event_func_3091()
{
    // event 1664_6
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1664_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sleeping_guards_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(61))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1664_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(61);
        }
        FrameObject * single_instance_1664_6_0; single_instance_1664_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(guardBase_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_lockdownlook_365(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1664_6_0 == NULL)
                    single_instance_1664_6_0 = new_obj;
            }
        }
    }
    event_1664_6_end: ;
}
void Frames::loop_sleeping_guards_6()
{
    event_func_3088();
    event_func_3089();
    event_func_3090();
    event_func_3091();
}
void Frames::loop_wrapper_create_right_zip_6(void * frame)
{
    ((Frames*)frame)->loop_create_right_zip_6();
}
void Frames::loop_wrapper_create_guards_6(void * frame)
{
    ((Frames*)frame)->loop_create_guards_6();
}
void Frames::loop_wrapper_create_rain_6(void * frame)
{
    ((Frames*)frame)->loop_create_rain_6();
}
void Frames::loop_wrapper_create_activity_box_6(void * frame)
{
    ((Frames*)frame)->loop_create_activity_box_6();
}
void Frames::loop_wrapper_create_stat_bars_guard_6(void * frame)
{
    ((Frames*)frame)->loop_create_stat_bars_guard_6();
}
void Frames::loop_wrapper_create_up_zip_6(void * frame)
{
    ((Frames*)frame)->loop_create_up_zip_6();
}
void Frames::loop_wrapper_create_jungleid_6(void * frame)
{
    ((Frames*)frame)->loop_create_jungleid_6();
}
void Frames::loop_wrapper_create_snow_6(void * frame)
{
    ((Frames*)frame)->loop_create_snow_6();
}
void Frames::loop_wrapper_create_vendors_6(void * frame)
{
    ((Frames*)frame)->loop_create_vendors_6();
}
void Frames::loop_wrapper_setup_zip_6(void * frame)
{
    ((Frames*)frame)->loop_setup_zip_6();
}
void Frames::loop_wrapper_create_left_zip_6(void * frame)
{
    ((Frames*)frame)->loop_create_left_zip_6();
}
void Frames::loop_wrapper_create_mission_target_6(void * frame)
{
    ((Frames*)frame)->loop_create_mission_target_6();
}
void Frames::loop_wrapper_create_mission_beat_6(void * frame)
{
    ((Frames*)frame)->loop_create_mission_beat_6();
}
void Frames::loop_wrapper_create_stat_bars_6(void * frame)
{
    ((Frames*)frame)->loop_create_stat_bars_6();
}
void Frames::loop_wrapper_create_mission_stealchar_6(void * frame)
{
    ((Frames*)frame)->loop_create_mission_stealchar_6();
}
void Frames::loop_wrapper_create_torches_jeep_6(void * frame)
{
    ((Frames*)frame)->loop_create_torches_jeep_6();
}
void Frames::loop_wrapper_create_mission_item_6(void * frame)
{
    ((Frames*)frame)->loop_create_mission_item_6();
}
void Frames::loop_wrapper_create_joblist_6(void * frame)
{
    ((Frames*)frame)->loop_create_joblist_6();
}
void Frames::loop_wrapper_create_inmates_6(void * frame)
{
    ((Frames*)frame)->loop_create_inmates_6();
}
void Frames::loop_wrapper_create_mission_distract_6(void * frame)
{
    ((Frames*)frame)->loop_create_mission_distract_6();
}
void Frames::loop_wrapper_create_down_zip_6(void * frame)
{
    ((Frames*)frame)->loop_create_down_zip_6();
}
void Frames::loop_wrapper_create_mission_give_6(void * frame)
{
    ((Frames*)frame)->loop_create_mission_give_6();
}
void Frames::loop_wrapper_create_mission_player_6(void * frame)
{
    ((Frames*)frame)->loop_create_mission_player_6();
}
void Frames::loop_wrapper_create_stat_bars_npc_6(void * frame)
{
    ((Frames*)frame)->loop_create_stat_bars_npc_6();
}
void Frames::loop_wrapper_create_torches_6(void * frame)
{
    ((Frames*)frame)->loop_create_torches_6();
}
void Frames::event_func_3092()
{
    // event 4038_6
    {
        if (!(group_code_1 && group_code_flooding_1)) goto event_4038_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(453, str_wx_1321, ((Active*)foreach_instance_flood)->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(454, str_wy_1322, ((Active*)foreach_instance_flood)->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(316, str_tx_1096, ((Active*)foreach_instance_flood)->alterables->values.get(4));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(317, str_ty_1097, ((Active*)foreach_instance_flood)->alterables->values.get(5));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(451, str_toiid_1319, ((Active*)foreach_instance_flood)->alterables->values.get(6));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(452, str_wspread_1320, ((Active*)foreach_instance_flood)->alterables->values.get(1)-1);
    }
    event_4038_6_end: ;
}
void Frames::event_func_3093()
{
    // event 4039_6
    {
        if (!(group_code_1 && group_code_flooding_1)) goto event_4039_6_end;
        if (!((((Active*)foreach_instance_flood)->alterables->values.get(1)) > (0))) goto event_4039_6_end;
        ((Active*)((Active*)foreach_instance_flood))->alterables->values.sub(1, 1);
        {
            loop_flood_up_running = true;
            int times = int(1);
            loop_flood_up_index = 0;
            while (loop_flood_up_index < times) {
                loop_flood_up_6();
                if (!loop_flood_up_running) break;
                loop_flood_up_index++;
            }
        }
        {
            loop_flood_down_running = true;
            int times = int(1);
            loop_flood_down_index = 0;
            while (loop_flood_down_index < times) {
                loop_flood_down_6();
                if (!loop_flood_down_running) break;
                loop_flood_down_index++;
            }
        }
        {
            loop_flood_left_running = true;
            int times = int(1);
            loop_flood_left_index = 0;
            while (loop_flood_left_index < times) {
                loop_flood_left_6();
                if (!loop_flood_left_running) break;
                loop_flood_left_index++;
            }
        }
        {
            loop_flood_right_running = true;
            int times = int(1);
            loop_flood_right_index = 0;
            while (loop_flood_right_index < times) {
                loop_flood_right_6();
                if (!loop_flood_right_running) break;
                loop_flood_right_index++;
            }
        }
    }
    event_4039_6_end: ;
}
void Frames::foreach_flood_6()
{
    event_func_3092();
    event_func_3093();
}
void Frames::event_func_3094()
{
    // event 717_6
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_717_6_end;
        if (!((((Active*)foreach_instance_odeer)->alterables->values.get(1)) == (0))) goto event_717_6_end;
        if (!((((Active*)foreach_instance_odeer)->get_x()) < (((Active*)foreach_instance_odeer)->alterables->values.get(23)))) goto event_717_6_end;
        ((Active*)((Active*)foreach_instance_odeer))->set_x(((Active*)foreach_instance_odeer)->get_x()+1);
        ((Active*)((Active*)foreach_instance_odeer))->set_direction(0);
    }
    event_717_6_end: ;
}
void Frames::event_func_3095()
{
    // event 718_6
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_718_6_end;
        if (!((((Active*)foreach_instance_odeer)->alterables->values.get(1)) == (0))) goto event_718_6_end;
        if (!((((Active*)foreach_instance_odeer)->get_x()) > (((Active*)foreach_instance_odeer)->alterables->values.get(23)))) goto event_718_6_end;
        ((Active*)((Active*)foreach_instance_odeer))->set_x(((Active*)foreach_instance_odeer)->get_x()-1);
        ((Active*)((Active*)foreach_instance_odeer))->set_direction(16);
    }
    event_718_6_end: ;
}
void Frames::event_func_3096()
{
    // event 719_6
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_719_6_end;
        if (!((((Active*)foreach_instance_odeer)->alterables->values.get(1)) == (0))) goto event_719_6_end;
        if (!((((Active*)foreach_instance_odeer)->get_y()) < (((Active*)foreach_instance_odeer)->alterables->values.get(24)))) goto event_719_6_end;
        ((Active*)((Active*)foreach_instance_odeer))->set_y(((Active*)foreach_instance_odeer)->get_y()+1);
        ((Active*)((Active*)foreach_instance_odeer))->set_direction(24);
    }
    event_719_6_end: ;
}
void Frames::event_func_3097()
{
    // event 720_6
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_720_6_end;
        if (!((((Active*)foreach_instance_odeer)->alterables->values.get(1)) == (0))) goto event_720_6_end;
        if (!((((Active*)foreach_instance_odeer)->get_y()) > (((Active*)foreach_instance_odeer)->alterables->values.get(24)))) goto event_720_6_end;
        ((Active*)((Active*)foreach_instance_odeer))->set_y(((Active*)foreach_instance_odeer)->get_y()-1);
        ((Active*)((Active*)foreach_instance_odeer))->set_direction(8);
    }
    event_720_6_end: ;
}
void Frames::event_func_3098()
{
    // event 2169_6
    {
        if (!(group_code_1 && group_code_misc_reindeer_1)) goto event_2169_6_end;
        if (!((((Active*)foreach_instance_odeer)->alterables->values.get(1)) == (0))) goto event_2169_6_end;
        if (!((((Active*)foreach_instance_odeer)->get_x()) < (((Active*)foreach_instance_odeer)->alterables->values.get(23)))) goto event_2169_6_end;
        ((Active*)((Active*)foreach_instance_odeer))->set_x(((Active*)foreach_instance_odeer)->get_x()+1);
        ((Active*)((Active*)foreach_instance_odeer))->set_direction(0);
    }
    event_2169_6_end: ;
}
void Frames::event_func_3099()
{
    // event 2170_6
    {
        if (!(group_code_1 && group_code_misc_reindeer_1)) goto event_2170_6_end;
        if (!((((Active*)foreach_instance_odeer)->alterables->values.get(1)) == (0))) goto event_2170_6_end;
        if (!((((Active*)foreach_instance_odeer)->get_x()) > (((Active*)foreach_instance_odeer)->alterables->values.get(23)))) goto event_2170_6_end;
        ((Active*)((Active*)foreach_instance_odeer))->set_x(((Active*)foreach_instance_odeer)->get_x()-1);
        ((Active*)((Active*)foreach_instance_odeer))->set_direction(16);
    }
    event_2170_6_end: ;
}
