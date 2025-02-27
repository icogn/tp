//
// Generated By: dol2asm
// Translation Unit: d_a_npc_lf
//

#include "rel/d/a/npc/d_a_npc_lf/d_a_npc_lf.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct npc_lf_class {};

struct mDoMtx_stack_c {
    /* 8000CE38 */ void scaleM(f32, f32, f32);

    static u8 now[48];
};

struct lf_s {
    /* 80A6A8A4 */ ~lf_s();
    /* 80A6A8E0 */ lf_s();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daNPC_LF_HIO_c {
    /* 80A69B6C */ daNPC_LF_HIO_c();
    /* 80A6A8E4 */ ~daNPC_LF_HIO_c();
};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct JMath {
    static u8 sincosTable_[65536];
};

struct J3DSys {
    static u8 mCurrentMtx[48];
};

struct J3DModel {};

struct J3DJoint {};

//
// Forward References:
//

extern "C" void __ct__14daNPC_LF_HIO_cFv();
extern "C" static void nodeCallBack__FP8J3DJointi();
extern "C" static void daNPC_LF_Draw__FP12npc_lf_class();
extern "C" static void npc_lf_move__FP10fopAc_ac_cP4lf_s();
extern "C" static void action__FP10fopAc_ac_cP4lf_s();
extern "C" static void daNPC_LF_Execute__FP12npc_lf_class();
extern "C" static bool daNPC_LF_IsDelete__FP12npc_lf_class();
extern "C" static void daNPC_LF_Delete__FP12npc_lf_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daNPC_LF_Create__FP10fopAc_ac_c();
extern "C" void __dt__4lf_sFv();
extern "C" void __ct__4lf_sFv();
extern "C" void __dt__14daNPC_LF_HIO_cFv();
extern "C" void __sinit_d_a_npc_lf_cpp();
extern "C" extern char const* const d_a_npc_lf__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSVECAdd();
extern "C" void PSVECSquareMag();
extern "C" void __construct_array();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" extern u32 __float_nan;
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80A6A97C-80A6A980 000000 0004+00 4/4 0/0 0/0 .rodata          @3769 */
SECTION_RODATA static f32 const lit_3769 = 1.0f;
COMPILER_STRIP_GATE(0x80A6A97C, &lit_3769);

/* 80A6A980-80A6A984 000004 0004+00 0/1 0/0 0/0 .rodata          @3770 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3770 = 7.0f;
COMPILER_STRIP_GATE(0x80A6A980, &lit_3770);
#pragma pop

/* 80A6A984-80A6A988 000008 0004+00 1/2 0/0 0/0 .rodata          @3771 */
SECTION_RODATA static f32 const lit_3771 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x80A6A984, &lit_3771);

/* 80A6A988-80A6A98C 00000C 0004+00 0/2 0/0 0/0 .rodata          @3772 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3772 = 3.0f / 5.0f;
COMPILER_STRIP_GATE(0x80A6A988, &lit_3772);
#pragma pop

/* 80A6A98C-80A6A990 000010 0004+00 0/2 0/0 0/0 .rodata          @3773 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3773 = 250.0f;
COMPILER_STRIP_GATE(0x80A6A98C, &lit_3773);
#pragma pop

/* 80A6AA1C-80A6AA28 000000 000C+00 1/1 0/0 0/0 .data            wp$3976 */
SECTION_DATA static u8 wp[12] = {
    0x3F, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x40, 0x20, 0x00, 0x00,
};

/* 80A6AA28-80A6AA48 -00001 0020+00 1/1 0/0 0/0 .data            l_daNPC_LF_Method */
SECTION_DATA static void* l_daNPC_LF_Method[8] = {
    (void*)daNPC_LF_Create__FP10fopAc_ac_c,
    (void*)daNPC_LF_Delete__FP12npc_lf_class,
    (void*)daNPC_LF_Execute__FP12npc_lf_class,
    (void*)daNPC_LF_IsDelete__FP12npc_lf_class,
    (void*)daNPC_LF_Draw__FP12npc_lf_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80A6AA48-80A6AA78 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_NPC_LF */
SECTION_DATA extern void* g_profile_NPC_LF[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x010F0000, (void*)&g_fpcLf_Method,
    (void*)0x00001FC4, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02BE0000, (void*)&l_daNPC_LF_Method,
    (void*)0x00040000, (void*)0x02000000,
};

/* 80A6AA78-80A6AA84 00005C 000C+00 2/2 0/0 0/0 .data            __vt__14daNPC_LF_HIO_c */
SECTION_DATA extern void* __vt__14daNPC_LF_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14daNPC_LF_HIO_cFv,
};

/* 80A69B6C-80A69BB4 0000EC 0048+00 1/1 0/0 0/0 .text            __ct__14daNPC_LF_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNPC_LF_HIO_c::daNPC_LF_HIO_c() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_lf/d_a_npc_lf/__ct__14daNPC_LF_HIO_cFv.s"
}
#pragma pop

/* 80A69BB4-80A69CD8 000134 0124+00 1/1 0/0 0/0 .text            nodeCallBack__FP8J3DJointi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void nodeCallBack(J3DJoint* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_lf/d_a_npc_lf/nodeCallBack__FP8J3DJointi.s"
}
#pragma pop

/* 80A69CD8-80A69D90 000258 00B8+00 1/0 0/0 0/0 .text            daNPC_LF_Draw__FP12npc_lf_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNPC_LF_Draw(npc_lf_class* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_lf/d_a_npc_lf/daNPC_LF_Draw__FP12npc_lf_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80A6A990-80A6A994 000014 0004+00 0/1 0/0 0/0 .rodata          @3861 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3861 = 50.0f;
COMPILER_STRIP_GATE(0x80A6A990, &lit_3861);
#pragma pop

/* 80A6A994-80A6A998 000018 0004+00 1/3 0/0 0/0 .rodata          @3862 */
SECTION_RODATA static u8 const lit_3862[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80A6A994, &lit_3862);

/* 80A6A998-80A6A99C 00001C 0004+00 0/1 0/0 0/0 .rodata          @3947 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3947 = 500.0f;
COMPILER_STRIP_GATE(0x80A6A998, &lit_3947);
#pragma pop

/* 80A6A99C-80A6A9A4 000020 0004+04 0/1 0/0 0/0 .rodata          @3948 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3948[1 + 1 /* padding */] = {
    100.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80A6A99C, &lit_3948);
#pragma pop

/* 80A6A9A4-80A6A9AC 000028 0008+00 0/1 0/0 0/0 .rodata          @3949 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3949[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80A6A9A4, &lit_3949);
#pragma pop

/* 80A6A9AC-80A6A9B4 000030 0008+00 0/1 0/0 0/0 .rodata          @3950 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3950[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80A6A9AC, &lit_3950);
#pragma pop

/* 80A6A9B4-80A6A9BC 000038 0008+00 0/1 0/0 0/0 .rodata          @3951 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3951[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80A6A9B4, &lit_3951);
#pragma pop

/* 80A6A9BC-80A6A9C0 000040 0004+00 0/1 0/0 0/0 .rodata          @3952 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3952 = 30.0f;
COMPILER_STRIP_GATE(0x80A6A9BC, &lit_3952);
#pragma pop

/* 80A6A9C0-80A6A9C4 000044 0004+00 0/2 0/0 0/0 .rodata          @3953 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3953 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80A6A9C0, &lit_3953);
#pragma pop

/* 80A6A9C4-80A6A9C8 000048 0004+00 0/1 0/0 0/0 .rodata          @3954 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3954 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x80A6A9C4, &lit_3954);
#pragma pop

/* 80A6A9C8-80A6A9CC 00004C 0004+00 0/1 0/0 0/0 .rodata          @3955 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3955 = 10.0f;
COMPILER_STRIP_GATE(0x80A6A9C8, &lit_3955);
#pragma pop

/* 80A6A9CC-80A6A9D0 000050 0004+00 0/2 0/0 0/0 .rodata          @3956 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3956 = 0.5f;
COMPILER_STRIP_GATE(0x80A6A9CC, &lit_3956);
#pragma pop

/* 80A6A9D0-80A6A9D4 000054 0004+00 0/1 0/0 0/0 .rodata          @3957 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3957 = 20.0f;
COMPILER_STRIP_GATE(0x80A6A9D0, &lit_3957);
#pragma pop

/* 80A6A9D4-80A6A9D8 000058 0004+00 0/1 0/0 0/0 .rodata          @3958 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3958 = 5.0f;
COMPILER_STRIP_GATE(0x80A6A9D4, &lit_3958);
#pragma pop

/* 80A6A9D8-80A6A9DC 00005C 0004+00 0/1 0/0 0/0 .rodata          @3959 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3959 = 4000.0f;
COMPILER_STRIP_GATE(0x80A6A9D8, &lit_3959);
#pragma pop

/* 80A6A9DC-80A6A9E0 000060 0004+00 0/1 0/0 0/0 .rodata          @3960 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3960 = -4000.0f;
COMPILER_STRIP_GATE(0x80A6A9DC, &lit_3960);
#pragma pop

/* 80A6A9E0-80A6A9E4 000064 0004+00 0/1 0/0 0/0 .rodata          @3961 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3961 = 1000.0f;
COMPILER_STRIP_GATE(0x80A6A9E0, &lit_3961);
#pragma pop

/* 80A6A9E4-80A6A9EC 000068 0008+00 0/1 0/0 0/0 .rodata          @3963 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3963[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80A6A9E4, &lit_3963);
#pragma pop

/* 80A6AA90-80A6AA94 000008 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_80A6AA90[4];

/* 80A6AA94-80A6AAA0 00000C 000C+00 1/1 0/0 0/0 .bss             @3764 */
static u8 lit_3764[12];

/* 80A6AAA0-80A6AABC 000018 001C+00 4/4 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[28];

/* 80A69D90-80A6A1B8 000310 0428+00 1/1 0/0 0/0 .text            npc_lf_move__FP10fopAc_ac_cP4lf_s
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void npc_lf_move(fopAc_ac_c* param_0, lf_s* param_1) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_lf/d_a_npc_lf/npc_lf_move__FP10fopAc_ac_cP4lf_s.s"
}
#pragma pop

/* ############################################################################################## */
/* 80A6A9EC-80A6A9F0 000070 0004+00 0/1 0/0 0/0 .rodata          @4026 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4026 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80A6A9EC, &lit_4026);
#pragma pop

/* 80A6A9F0-80A6A9F4 000074 0004+00 0/1 0/0 0/0 .rodata          @4027 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4027 = 2000.0f;
COMPILER_STRIP_GATE(0x80A6A9F0, &lit_4027);
#pragma pop

/* 80A6A9F4-80A6A9F8 000078 0004+00 0/1 0/0 0/0 .rodata          @4028 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4028 = 200.0f;
COMPILER_STRIP_GATE(0x80A6A9F4, &lit_4028);
#pragma pop

/* 80A6A9F8-80A6A9FC 00007C 0004+00 0/1 0/0 0/0 .rodata          @4029 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4029 = 13000.0f;
COMPILER_STRIP_GATE(0x80A6A9F8, &lit_4029);
#pragma pop

/* 80A6A9FC-80A6AA00 000080 0004+00 0/1 0/0 0/0 .rodata          @4030 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4030 = -3.0f / 10.0f;
COMPILER_STRIP_GATE(0x80A6A9FC, &lit_4030);
#pragma pop

/* 80A6A1B8-80A6A420 000738 0268+00 1/1 0/0 0/0 .text            action__FP10fopAc_ac_cP4lf_s */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void action(fopAc_ac_c* param_0, lf_s* param_1) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_lf/d_a_npc_lf/action__FP10fopAc_ac_cP4lf_s.s"
}
#pragma pop

/* ############################################################################################## */
/* 80A6AA00-80A6AA04 000084 0004+00 1/1 0/0 0/0 .rodata          @4060 */
SECTION_RODATA static f32 const lit_4060 = 1500.0f;
COMPILER_STRIP_GATE(0x80A6AA00, &lit_4060);

/* 80A6A420-80A6A514 0009A0 00F4+00 2/1 0/0 0/0 .text            daNPC_LF_Execute__FP12npc_lf_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNPC_LF_Execute(npc_lf_class* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_lf/d_a_npc_lf/daNPC_LF_Execute__FP12npc_lf_class.s"
}
#pragma pop

/* 80A6A514-80A6A51C 000A94 0008+00 1/0 0/0 0/0 .text            daNPC_LF_IsDelete__FP12npc_lf_class
 */
static bool daNPC_LF_IsDelete(npc_lf_class* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80A6AA14-80A6AA14 000098 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80A6AA14 = "NPC_LF";
#pragma pop

/* 80A6A51C-80A6A570 000A9C 0054+00 1/0 0/0 0/0 .text            daNPC_LF_Delete__FP12npc_lf_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNPC_LF_Delete(npc_lf_class* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_lf/d_a_npc_lf/daNPC_LF_Delete__FP12npc_lf_class.s"
}
#pragma pop

/* 80A6A570-80A6A650 000AF0 00E0+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_lf/d_a_npc_lf/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80A6AA04-80A6AA08 000088 0004+00 0/1 0/0 0/0 .rodata          @4173 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4173 = 6457.0f;
COMPILER_STRIP_GATE(0x80A6AA04, &lit_4173);
#pragma pop

/* 80A6AA08-80A6AA0C 00008C 0004+00 0/1 0/0 0/0 .rodata          @4174 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4174 = -5188.0f;
COMPILER_STRIP_GATE(0x80A6AA08, &lit_4174);
#pragma pop

/* 80A6AA0C-80A6AA10 000090 0004+00 0/1 0/0 0/0 .rodata          @4175 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4175 = 300.0f;
COMPILER_STRIP_GATE(0x80A6AA0C, &lit_4175);
#pragma pop

/* 80A6AA10-80A6AA14 000094 0004+00 0/1 0/0 0/0 .rodata          @4176 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4176 = 65536.0f;
COMPILER_STRIP_GATE(0x80A6AA10, &lit_4176);
#pragma pop

/* 80A6A650-80A6A8A4 000BD0 0254+00 1/0 0/0 0/0 .text            daNPC_LF_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNPC_LF_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_lf/d_a_npc_lf/daNPC_LF_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80A6A8A4-80A6A8E0 000E24 003C+00 1/1 0/0 0/0 .text            __dt__4lf_sFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm lf_s::~lf_s() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_lf/d_a_npc_lf/__dt__4lf_sFv.s"
}
#pragma pop

/* 80A6A8E0-80A6A8E4 000E60 0004+00 1/1 0/0 0/0 .text            __ct__4lf_sFv */
lf_s::lf_s() {
    /* empty function */
}

/* 80A6A8E4-80A6A92C 000E64 0048+00 2/1 0/0 0/0 .text            __dt__14daNPC_LF_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNPC_LF_HIO_c::~daNPC_LF_HIO_c() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_lf/d_a_npc_lf/__dt__14daNPC_LF_HIO_cFv.s"
}
#pragma pop

/* 80A6A92C-80A6A968 000EAC 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_npc_lf_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_npc_lf_cpp() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_lf/d_a_npc_lf/__sinit_d_a_npc_lf_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80A6A92C, __sinit_d_a_npc_lf_cpp);
#pragma pop

/* 80A6AA14-80A6AA14 000098 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
