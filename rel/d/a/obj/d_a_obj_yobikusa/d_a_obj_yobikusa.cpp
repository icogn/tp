//
// Generated By: dol2asm
// Translation Unit: d_a_obj_yobikusa
//

#include "rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void setAction__15daObjYobikusa_cFQ215daObjYobikusa_c6Mode_e();
extern "C" void callInit__15daObjYobikusa_cFv();
extern "C" void callExecute__15daObjYobikusa_cFv();
extern "C" void initSwingWind__15daObjYobikusa_cFv();
extern "C" void executeSwingWind__15daObjYobikusa_cFv();
extern "C" void initPushDown__15daObjYobikusa_cFv();
extern "C" void executePushDown__15daObjYobikusa_cFv();
extern "C" void initPickLeaf__15daObjYobikusa_cFv();
extern "C" void executePickLeaf__15daObjYobikusa_cFv();
extern "C" void create_init__15daObjYobikusa_cFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void initBaseMtx__15daObjYobikusa_cFv();
extern "C" void getJointAngle__15daObjYobikusa_cFP5csXyzi();
extern "C" void getJointScale__15daObjYobikusa_cFi();
extern "C" static void nodeCallBack__FP8J3DJointi();
extern "C" void __dt__5csXyzFv();
extern "C" void initCcCylinder__15daObjYobikusa_cFv();
extern "C" void setCcCylinder__15daObjYobikusa_cFv();
extern "C" void toPickLeaf__15daObjYobikusa_cFv();
extern "C" void setNewLeaf__15daObjYobikusa_cFv();
extern "C" static void createSolidHeap__FP10fopAc_ac_c();
extern "C" static void daObjYobikusa_Draw__FP15daObjYobikusa_c();
extern "C" static void daObjYobikusa_Execute__FP15daObjYobikusa_c();
extern "C" void execute__15daObjYobikusa_cFv();
extern "C" static bool daObjYobikusa_IsDelete__FP15daObjYobikusa_c();
extern "C" static void daObjYobikusa_Delete__FP15daObjYobikusa_c();
extern "C" static void daObjYobikusa_Create__FP10fopAc_ac_c();
extern "C" void __ct__5csXyzFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __sinit_d_a_obj_yobikusa_cpp();
extern "C" static void func_8059DE60();
extern "C" static void func_8059DE68();
extern "C" u8 const M_attr__15daObjYobikusa_c[64];
extern "C" extern char const* const d_a_obj_yobikusa__stringBase0;
extern "C" u8 ActionTable__15daObjYobikusa_c[72];

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void scaleM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_cancelCarryNow__FP10fopAc_ac_c();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void dKyw_get_AllWind_vec__FP4cXyzP4cXyzPf();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void GetAc__22dCcD_GAtTgCoCommonBaseFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void ChkCoHit__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void cM_rnd__Fv();
extern "C" void __ct__13cBgS_PolyInfoFv();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void cLib_chaseF__FPfff();
extern "C" void __dl__FPv();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];

//
// Declarations:
//

/* 8059DF68-8059DF74 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8059DF74-8059DF88 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};
#pragma pop

/* 8059DF88-8059DF8C -00001 0004+00 1/1 0/0 0/0 .data            l_arcName1 */
SECTION_DATA static const char* l_arcName1 = "J_Tobi";

/* 8059DF8C-8059DF90 -00001 0004+00 1/1 0/0 0/0 .data            l_arcName2 */
SECTION_DATA static const char* l_arcName2 = "J_Umak";

/* 8059DF90-8059DF9C -00001 000C+00 0/1 0/0 0/0 .data            @3641 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3641[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)initSwingWind__15daObjYobikusa_cFv,
};
#pragma pop

/* 8059DF9C-8059DFA8 -00001 000C+00 0/1 0/0 0/0 .data            @3642 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3642[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)executeSwingWind__15daObjYobikusa_cFv,
};
#pragma pop

/* 8059DFA8-8059DFB4 -00001 000C+00 0/1 0/0 0/0 .data            @3643 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3643[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)initPushDown__15daObjYobikusa_cFv,
};
#pragma pop

/* 8059DFB4-8059DFC0 -00001 000C+00 0/1 0/0 0/0 .data            @3644 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3644[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)executePushDown__15daObjYobikusa_cFv,
};
#pragma pop

/* 8059DFC0-8059DFCC -00001 000C+00 0/1 0/0 0/0 .data            @3645 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3645[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)initPickLeaf__15daObjYobikusa_cFv,
};
#pragma pop

/* 8059DFCC-8059DFD8 -00001 000C+00 0/1 0/0 0/0 .data            @3646 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3646[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)executePickLeaf__15daObjYobikusa_cFv,
};
#pragma pop

/* 8059DFD8-8059E020 000070 0048+00 1/2 0/0 0/0 .data            ActionTable__15daObjYobikusa_c */
SECTION_DATA u8 daObjYobikusa_c::ActionTable[72] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* SECTION_DATA actionFunc daObjYobikusa_c::ActionTable[72] = {
    &daObjYobikusa_c::initSwingWind,
    &daObjYobikusa_c::executeSwingWind,
    &daObjYobikusa_c::initPushDown,
    &daObjYobikusa_c::executePushDown,
    &daObjYobikusa_c::initPickLeaf,
    &daObjYobikusa_c::executePickLeaf,
}; */

/* 8059C9F8-8059CA2C 000078 0034+00 5/5 0/0 0/0 .text
 * setAction__15daObjYobikusa_cFQ215daObjYobikusa_c6Mode_e      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYobikusa_c::setAction(daObjYobikusa_c::Mode_e param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/setAction__15daObjYobikusa_cFQ215daObjYobikusa_c6Mode_e.s"
}
#pragma pop

/* 8059CA2C-8059CA54 0000AC 0028+00 1/1 0/0 0/0 .text            callInit__15daObjYobikusa_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYobikusa_c::callInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/callInit__15daObjYobikusa_cFv.s"
}
#pragma pop

/* 8059CA54-8059CA80 0000D4 002C+00 1/1 0/0 0/0 .text            callExecute__15daObjYobikusa_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYobikusa_c::callExecute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/callExecute__15daObjYobikusa_cFv.s"
}
#pragma pop

/* 8059CA80-8059CA8C 000100 000C+00 1/0 0/0 0/0 .text            initSwingWind__15daObjYobikusa_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYobikusa_c::initSwingWind() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/initSwingWind__15daObjYobikusa_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8059DE7C-8059DEBC 000000 0040+00 6/6 0/0 0/0 .rodata          M_attr__15daObjYobikusa_c */
SECTION_RODATA u8 const daObjYobikusa_c::M_attr[64] = {
    0x44, 0x7A, 0x00, 0x00, 0x45, 0x7A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0xBB, 0x80, 0x00,
    0x43, 0xFA, 0x00, 0x00, 0x44, 0x90, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x43, 0x48, 0x00, 0x00,
    0x43, 0xC8, 0x00, 0x00, 0x3C, 0xA3, 0xD7, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x45, 0x9C, 0x40, 0x00, 0x43, 0x16, 0x00, 0x00, 0x04, 0x00, 0x00, 0x40, 0x27, 0x10, 0x19, 0xB6,
};
COMPILER_STRIP_GATE(0x8059DE7C, &daObjYobikusa_c::M_attr);

/* 8059DEBC-8059DEC0 000040 0004+00 2/5 0/0 0/0 .rodata          @3699 */
SECTION_RODATA static u8 const lit_3699[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x8059DEBC, &lit_3699);

/* 8059CA8C-8059CC54 00010C 01C8+00 1/0 0/0 0/0 .text executeSwingWind__15daObjYobikusa_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYobikusa_c::executeSwingWind() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/executeSwingWind__15daObjYobikusa_cFv.s"
}
#pragma pop

/* 8059CC54-8059CC60 0002D4 000C+00 1/0 0/0 0/0 .text            initPushDown__15daObjYobikusa_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYobikusa_c::initPushDown() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/initPushDown__15daObjYobikusa_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8059DEC0-8059DEC4 000044 0004+00 1/1 0/0 0/0 .rodata          @3724 */
SECTION_RODATA static f32 const lit_3724 = 65.0f;
COMPILER_STRIP_GATE(0x8059DEC0, &lit_3724);

/* 8059CC60-8059CD44 0002E0 00E4+00 1/0 0/0 0/0 .text executePushDown__15daObjYobikusa_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYobikusa_c::executePushDown() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/executePushDown__15daObjYobikusa_cFv.s"
}
#pragma pop

/* 8059CD44-8059CD80 0003C4 003C+00 1/0 0/0 0/0 .text            initPickLeaf__15daObjYobikusa_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYobikusa_c::initPickLeaf() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/initPickLeaf__15daObjYobikusa_cFv.s"
}
#pragma pop

/* 8059CD80-8059CE7C 000400 00FC+00 1/0 0/0 0/0 .text executePickLeaf__15daObjYobikusa_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYobikusa_c::executePickLeaf() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/executePickLeaf__15daObjYobikusa_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8059DEC4-8059DEC8 000048 0004+00 0/1 0/0 0/0 .rodata          @3773 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3773 = -50.0f;
COMPILER_STRIP_GATE(0x8059DEC4, &lit_3773);
#pragma pop

/* 8059DEC8-8059DECC 00004C 0004+00 0/1 0/0 0/0 .rodata          @3774 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3774 = -30.0f;
COMPILER_STRIP_GATE(0x8059DEC8, &lit_3774);
#pragma pop

/* 8059DECC-8059DED0 000050 0004+00 0/1 0/0 0/0 .rodata          @3775 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3775 = 50.0f;
COMPILER_STRIP_GATE(0x8059DECC, &lit_3775);
#pragma pop

/* 8059DED0-8059DED4 000054 0004+00 0/1 0/0 0/0 .rodata          @3776 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3776 = 120.0f;
COMPILER_STRIP_GATE(0x8059DED0, &lit_3776);
#pragma pop

/* 8059DED4-8059DED8 000058 0004+00 0/1 0/0 0/0 .rodata          @3777 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3777 = 30.0f;
COMPILER_STRIP_GATE(0x8059DED4, &lit_3777);
#pragma pop

/* 8059DED8-8059DEDC 00005C 0004+00 1/4 0/0 0/0 .rodata          @3778 */
SECTION_RODATA static f32 const lit_3778 = 1.0f;
COMPILER_STRIP_GATE(0x8059DED8, &lit_3778);

/* 8059DEDC-8059DEE0 000060 0004+00 0/1 0/0 0/0 .rodata          @3779 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3779 = 65535.0f;
COMPILER_STRIP_GATE(0x8059DEDC, &lit_3779);
#pragma pop

/* 8059E020-8059E040 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjYobikusa_Method */
SECTION_DATA static void* l_daObjYobikusa_Method[8] = {
    (void*)daObjYobikusa_Create__FP10fopAc_ac_c,
    (void*)daObjYobikusa_Delete__FP15daObjYobikusa_c,
    (void*)daObjYobikusa_Execute__FP15daObjYobikusa_c,
    (void*)daObjYobikusa_IsDelete__FP15daObjYobikusa_c,
    (void*)daObjYobikusa_Draw__FP15daObjYobikusa_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 8059E040-8059E070 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Yobikusa */
SECTION_DATA extern void* g_profile_Obj_Yobikusa[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x014D0000, (void*)&g_fpcLf_Method,
    (void*)0x00000770, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x001D0000, (void*)&l_daObjYobikusa_Method,
    (void*)0x00040180, (void*)0x000E0000,
};

/* 8059E070-8059E07C 000108 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 8059E07C-8059E088 000114 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 8059E088-8059E094 000120 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 8059E094-8059E0A0 00012C 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 8059E0A0-8059E0AC 000138 000C+00 2/2 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 8059E0AC-8059E0D0 000144 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8059DE68,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8059DE60,
};

/* 8059CE7C-8059D040 0004FC 01C4+00 1/1 0/0 0/0 .text            create_init__15daObjYobikusa_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYobikusa_c::create_init() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/create_init__15daObjYobikusa_cFv.s"
}
#pragma pop

/* 8059D040-8059D0B0 0006C0 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 8059D0B0-8059D120 000730 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_AcchCir::~dBgS_AcchCir() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 8059D120-8059D198 0007A0 0078+00 1/1 0/0 0/0 .text            initBaseMtx__15daObjYobikusa_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYobikusa_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/initBaseMtx__15daObjYobikusa_cFv.s"
}
#pragma pop

/* 8059D198-8059D1BC 000818 0024+00 1/1 0/0 0/0 .text getJointAngle__15daObjYobikusa_cFP5csXyzi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYobikusa_c::getJointAngle(csXyz* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/getJointAngle__15daObjYobikusa_cFP5csXyzi.s"
}
#pragma pop

/* 8059D1BC-8059D1C4 00083C 0008+00 1/1 0/0 0/0 .text            getJointScale__15daObjYobikusa_cFi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYobikusa_c::getJointScale(int param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/getJointScale__15daObjYobikusa_cFi.s"
}
#pragma pop

/* 8059D1C4-8059D2E4 000844 0120+00 1/1 0/0 0/0 .text            nodeCallBack__FP8J3DJointi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void nodeCallBack(J3DJoint* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/nodeCallBack__FP8J3DJointi.s"
}
#pragma pop

/* 8059D2E4-8059D320 000964 003C+00 2/2 0/0 0/0 .text            __dt__5csXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm csXyz::~csXyz() {
extern "C" asm void __dt__5csXyzFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/__dt__5csXyzFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8059DEE0-8059DF24 000064 0044+00 1/1 0/0 0/0 .rodata          ccCylSrc$3880 */
SECTION_RODATA static u8 const ccCylSrc[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xD8, 0x48, 0x04, 0x22, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x01, 0x39,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00, 0x42, 0xA0, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8059DEE0, &ccCylSrc);

/* 8059D320-8059D380 0009A0 0060+00 1/1 0/0 0/0 .text            initCcCylinder__15daObjYobikusa_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYobikusa_c::initCcCylinder() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/initCcCylinder__15daObjYobikusa_cFv.s"
}
#pragma pop

/* 8059D380-8059D3B4 000A00 0034+00 1/1 0/0 0/0 .text            setCcCylinder__15daObjYobikusa_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYobikusa_c::setCcCylinder() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/setCcCylinder__15daObjYobikusa_cFv.s"
}
#pragma pop

/* 8059D3B4-8059D454 000A34 00A0+00 1/1 0/0 0/0 .text            toPickLeaf__15daObjYobikusa_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYobikusa_c::toPickLeaf() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/toPickLeaf__15daObjYobikusa_cFv.s"
}
#pragma pop

/* 8059D454-8059D520 000AD4 00CC+00 2/2 0/0 0/0 .text            setNewLeaf__15daObjYobikusa_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYobikusa_c::setNewLeaf() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/setNewLeaf__15daObjYobikusa_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8059DF24-8059DF24 0000A8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8059DF32 = "J_Tobi.bmd";
SECTION_DEAD static char const* const stringBase_8059DF3D = "J_Tobi_c.bmd";
SECTION_DEAD static char const* const stringBase_8059DF4A = "J_Umakusa.bmd";
SECTION_DEAD static char const* const stringBase_8059DF58 = "J_Umakusa_c.bmd";
#pragma pop

/* 8059D520-8059D674 000BA0 0154+00 1/1 0/0 0/0 .text            createSolidHeap__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void createSolidHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/createSolidHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* 8059D674-8059D718 000CF4 00A4+00 1/0 0/0 0/0 .text daObjYobikusa_Draw__FP15daObjYobikusa_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjYobikusa_Draw(daObjYobikusa_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/daObjYobikusa_Draw__FP15daObjYobikusa_c.s"
}
#pragma pop

/* 8059D718-8059D738 000D98 0020+00 1/0 0/0 0/0 .text daObjYobikusa_Execute__FP15daObjYobikusa_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjYobikusa_Execute(daObjYobikusa_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/daObjYobikusa_Execute__FP15daObjYobikusa_c.s"
}
#pragma pop

/* 8059D738-8059D9A0 000DB8 0268+00 1/1 0/0 0/0 .text            execute__15daObjYobikusa_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYobikusa_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/execute__15daObjYobikusa_cFv.s"
}
#pragma pop

/* 8059D9A0-8059D9A8 001020 0008+00 1/0 0/0 0/0 .text daObjYobikusa_IsDelete__FP15daObjYobikusa_c
 */
static bool daObjYobikusa_IsDelete(daObjYobikusa_c* param_0) {
    return true;
}

/* 8059D9A8-8059DAF4 001028 014C+00 1/0 0/0 0/0 .text daObjYobikusa_Delete__FP15daObjYobikusa_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjYobikusa_Delete(daObjYobikusa_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/daObjYobikusa_Delete__FP15daObjYobikusa_c.s"
}
#pragma pop

/* 8059DAF4-8059DC88 001174 0194+00 1/0 0/0 0/0 .text daObjYobikusa_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjYobikusa_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/daObjYobikusa_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 8059DC88-8059DC8C 001308 0004+00 1/1 0/0 0/0 .text            __ct__5csXyzFv */
extern "C" void __ct__5csXyzFv() {
    /* empty function */
}

/* 8059DC8C-8059DCD4 00130C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGCyl::~cM3dGCyl() {
extern "C" asm void __dt__8cM3dGCylFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 8059DCD4-8059DD1C 001354 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 8059DD1C-8059DD78 00139C 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_GStts::~dCcD_GStts() {
extern "C" asm void __dt__10dCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 8059DD78-8059DDC0 0013F8 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cCcD_GStts::~cCcD_GStts() {
extern "C" asm void __dt__10cCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 8059DDC0-8059DE60 001440 00A0+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_yobikusa_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_yobikusa_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/__sinit_d_a_obj_yobikusa_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x8059DDC0, __sinit_d_a_obj_yobikusa_cpp);
#pragma pop

/* 8059DE60-8059DE68 0014E0 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8059DE60() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/func_8059DE60.s"
}
#pragma pop

/* 8059DE68-8059DE70 0014E8 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8059DE68() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_yobikusa/d_a_obj_yobikusa/func_8059DE68.s"
}
#pragma pop

/* 8059DF24-8059DF24 0000A8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
