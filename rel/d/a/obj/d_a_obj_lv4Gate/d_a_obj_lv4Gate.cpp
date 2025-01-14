//
// Generated By: dol2asm
// Translation Unit: d_a_obj_lv4Gate
//

#include "rel/d/a/obj/d_a_obj_lv4Gate/d_a_obj_lv4Gate.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    /* 8000CD9C */ void transM(f32, f32, f32);

    static u8 now[48];
};

struct mDoHIO_entry_c {
    /* 80C5EB9C */ ~mDoHIO_entry_c();
};

struct fopAc_ac_c {};

struct daLv4Gate_c {
    /* 80C5EBE4 */ void setBaseMtx();
    /* 80C5EC80 */ void CreateHeap();
    /* 80C5ECEC */ void create();
    /* 80C5EE54 */ void Execute(f32 (**)[3][4]);
    /* 80C5EEA4 */ void moveGate();
    /* 80C5EF48 */ void init_modeWait();
    /* 80C5EF54 */ void modeWait();
    /* 80C5EFB0 */ void init_modeMove();
    /* 80C5EFBC */ void modeMove();
    /* 80C5F0C4 */ void init_modeMoveEnd();
    /* 80C5F1E4 */ void modeMoveEnd();
    /* 80C5F1E8 */ void Draw();
    /* 80C5F28C */ void Delete();
};

struct daLv4Gate_HIO_c {
    /* 80C5EB6C */ daLv4Gate_HIO_c();
    /* 80C5F348 */ ~daLv4Gate_HIO_c();
};

struct cXyz {};

struct dVibration_c {
    /* 8006FA24 */ void StartShock(int, int, cXyz);
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dBgW {};

struct cBgS_PolyInfo {};

struct csXyz {};

struct dBgS_MoveBgActor {
    /* 80078624 */ dBgS_MoveBgActor();
    /* 80078690 */ bool Create();
    /* 800786B0 */ bool IsDelete();
    /* 800786B8 */ bool ToFore();
    /* 800786C0 */ bool ToBack();
    /* 800787BC */ void MoveBGCreate(char const*, int,
                                     void (*)(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*,
                                              csXyz*, csXyz*),
                                     u32, f32 (*)[3][4]);
    /* 800788DC */ void MoveBGDelete();
    /* 80078950 */ void MoveBGExecute();
};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

struct J3DModel {};

//
// Forward References:
//

extern "C" void __ct__15daLv4Gate_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__11daLv4Gate_cFv();
extern "C" void CreateHeap__11daLv4Gate_cFv();
extern "C" void create__11daLv4Gate_cFv();
extern "C" void Execute__11daLv4Gate_cFPPA3_A4_f();
extern "C" void moveGate__11daLv4Gate_cFv();
extern "C" void init_modeWait__11daLv4Gate_cFv();
extern "C" void modeWait__11daLv4Gate_cFv();
extern "C" void init_modeMove__11daLv4Gate_cFv();
extern "C" void modeMove__11daLv4Gate_cFv();
extern "C" void init_modeMoveEnd__11daLv4Gate_cFv();
extern "C" void modeMoveEnd__11daLv4Gate_cFv();
extern "C" void Draw__11daLv4Gate_cFv();
extern "C" void Delete__11daLv4Gate_cFv();
extern "C" static void daLv4Gate_Draw__FP11daLv4Gate_c();
extern "C" static void daLv4Gate_Execute__FP11daLv4Gate_c();
extern "C" static void daLv4Gate_Delete__FP11daLv4Gate_c();
extern "C" static void daLv4Gate_Create__FP10fopAc_ac_c();
extern "C" void __dt__15daLv4Gate_HIO_cFv();
extern "C" void __sinit_d_a_obj_lv4Gate_cpp();
extern "C" extern char const* const d_a_obj_lv4Gate__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotS__FPA4_fsss();
extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool Create__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void PSVECAdd();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80C5F3F4-80C5F3F8 000000 0004+00 4/4 0/0 0/0 .rodata          @3625 */
SECTION_RODATA static f32 const lit_3625 = 2.0f;
COMPILER_STRIP_GATE(0x80C5F3F4, &lit_3625);

/* 80C5F41C-80C5F428 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C5F428-80C5F43C 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80C5F43C-80C5F448 -00001 000C+00 0/1 0/0 0/0 .data            @3725 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3725[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__11daLv4Gate_cFv,
};
#pragma pop

/* 80C5F448-80C5F454 -00001 000C+00 0/1 0/0 0/0 .data            @3726 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3726[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeMove__11daLv4Gate_cFv,
};
#pragma pop

/* 80C5F454-80C5F460 -00001 000C+00 0/1 0/0 0/0 .data            @3727 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3727[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeMoveEnd__11daLv4Gate_cFv,
};
#pragma pop

/* 80C5F460-80C5F484 000044 0024+00 0/1 0/0 0/0 .data            mode_proc$3724 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 mode_proc[36] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80C5F484-80C5F4A4 -00001 0020+00 1/0 0/0 0/0 .data            l_daLv4Gate_Method */
SECTION_DATA static void* l_daLv4Gate_Method[8] = {
    (void*)daLv4Gate_Create__FP10fopAc_ac_c,
    (void*)daLv4Gate_Delete__FP11daLv4Gate_c,
    (void*)daLv4Gate_Execute__FP11daLv4Gate_c,
    (void*)NULL,
    (void*)daLv4Gate_Draw__FP11daLv4Gate_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C5F4A4-80C5F4D4 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Lv4Gate */
SECTION_DATA extern void* g_profile_Obj_Lv4Gate[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x009C0000, (void*)&g_fpcLf_Method,
    (void*)0x000005B8, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x027D0000, (void*)&l_daLv4Gate_Method,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 80C5F4D4-80C5F4FC 0000B8 0028+00 1/1 0/0 0/0 .data            __vt__11daLv4Gate_c */
SECTION_DATA extern void* __vt__11daLv4Gate_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__11daLv4Gate_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__11daLv4Gate_cFPPA3_A4_f,
    (void*)Draw__11daLv4Gate_cFv,
    (void*)Delete__11daLv4Gate_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C5F4FC-80C5F508 0000E0 000C+00 2/2 0/0 0/0 .data            __vt__15daLv4Gate_HIO_c */
SECTION_DATA extern void* __vt__15daLv4Gate_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__15daLv4Gate_HIO_cFv,
};

/* 80C5F508-80C5F514 0000EC 000C+00 3/3 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80C5EB6C-80C5EB9C 0000EC 0030+00 1/1 0/0 0/0 .text            __ct__15daLv4Gate_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daLv4Gate_HIO_c::daLv4Gate_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4Gate/d_a_obj_lv4Gate/__ct__15daLv4Gate_HIO_cFv.s"
}
#pragma pop

/* 80C5EB9C-80C5EBE4 00011C 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4Gate/d_a_obj_lv4Gate/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C5F3F8-80C5F3FC 000004 0004+00 1/4 0/0 0/0 .rodata          @3646 */
SECTION_RODATA static u8 const lit_3646[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80C5F3F8, &lit_3646);

/* 80C5EBE4-80C5EC80 000164 009C+00 2/2 0/0 0/0 .text            setBaseMtx__11daLv4Gate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4Gate_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4Gate/d_a_obj_lv4Gate/setBaseMtx__11daLv4Gate_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C5F414-80C5F414 000020 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C5F414 = "L4Gate";
#pragma pop

/* 80C5EC80-80C5ECEC 000200 006C+00 1/0 0/0 0/0 .text            CreateHeap__11daLv4Gate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4Gate_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4Gate/d_a_obj_lv4Gate/CreateHeap__11daLv4Gate_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C5F3FC-80C5F400 000008 0004+00 0/1 0/0 0/0 .rodata          @3710 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3710 = -250.0f;
COMPILER_STRIP_GATE(0x80C5F3FC, &lit_3710);
#pragma pop

/* 80C5F400-80C5F404 00000C 0004+00 0/1 0/0 0/0 .rodata          @3711 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3711 = 250.0f;
COMPILER_STRIP_GATE(0x80C5F400, &lit_3711);
#pragma pop

/* 80C5ECEC-80C5EE54 00026C 0168+00 1/1 0/0 0/0 .text            create__11daLv4Gate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4Gate_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4Gate/d_a_obj_lv4Gate/create__11daLv4Gate_cFv.s"
}
#pragma pop

/* 80C5EE54-80C5EEA4 0003D4 0050+00 1/0 0/0 0/0 .text            Execute__11daLv4Gate_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4Gate_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4Gate/d_a_obj_lv4Gate/Execute__11daLv4Gate_cFPPA3_A4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C5F520-80C5F52C 000008 000C+00 1/1 0/0 0/0 .bss             @3619 */
static u8 lit_3619[12];

/* 80C5F52C-80C5F538 000014 000C+00 3/3 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[12];

/* 80C5F538-80C5F53C 000020 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_80C5F538[4];

/* 80C5EEA4-80C5EF48 000424 00A4+00 1/1 0/0 0/0 .text            moveGate__11daLv4Gate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4Gate_c::moveGate() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4Gate/d_a_obj_lv4Gate/moveGate__11daLv4Gate_cFv.s"
}
#pragma pop

/* 80C5EF48-80C5EF54 0004C8 000C+00 1/1 0/0 0/0 .text            init_modeWait__11daLv4Gate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4Gate_c::init_modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4Gate/d_a_obj_lv4Gate/init_modeWait__11daLv4Gate_cFv.s"
}
#pragma pop

/* 80C5EF54-80C5EFB0 0004D4 005C+00 1/0 0/0 0/0 .text            modeWait__11daLv4Gate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4Gate_c::modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4Gate/d_a_obj_lv4Gate/modeWait__11daLv4Gate_cFv.s"
}
#pragma pop

/* 80C5EFB0-80C5EFBC 000530 000C+00 1/1 0/0 0/0 .text            init_modeMove__11daLv4Gate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4Gate_c::init_modeMove() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4Gate/d_a_obj_lv4Gate/init_modeMove__11daLv4Gate_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C5F404-80C5F408 000010 0004+00 0/2 0/0 0/0 .rodata          @3775 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3775 = 1.0f;
COMPILER_STRIP_GATE(0x80C5F404, &lit_3775);
#pragma pop

/* 80C5F408-80C5F40C 000014 0004+00 0/2 0/0 0/0 .rodata          @3776 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3776 = -1.0f;
COMPILER_STRIP_GATE(0x80C5F408, &lit_3776);
#pragma pop

/* 80C5F40C-80C5F410 000018 0004+00 0/1 0/0 0/0 .rodata          @3777 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3777 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80C5F40C, &lit_3777);
#pragma pop

/* 80C5F410-80C5F414 00001C 0004+00 0/1 0/0 0/0 .rodata          @3778 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3778 = 0.5f;
COMPILER_STRIP_GATE(0x80C5F410, &lit_3778);
#pragma pop

/* 80C5EFBC-80C5F0C4 00053C 0108+00 1/0 0/0 0/0 .text            modeMove__11daLv4Gate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4Gate_c::modeMove() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4Gate/d_a_obj_lv4Gate/modeMove__11daLv4Gate_cFv.s"
}
#pragma pop

/* 80C5F0C4-80C5F1E4 000644 0120+00 2/2 0/0 0/0 .text            init_modeMoveEnd__11daLv4Gate_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4Gate_c::init_modeMoveEnd() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4Gate/d_a_obj_lv4Gate/init_modeMoveEnd__11daLv4Gate_cFv.s"
}
#pragma pop

/* 80C5F1E4-80C5F1E8 000764 0004+00 1/0 0/0 0/0 .text            modeMoveEnd__11daLv4Gate_cFv */
void daLv4Gate_c::modeMoveEnd() {
    /* empty function */
}

/* 80C5F1E8-80C5F28C 000768 00A4+00 1/0 0/0 0/0 .text            Draw__11daLv4Gate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4Gate_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4Gate/d_a_obj_lv4Gate/Draw__11daLv4Gate_cFv.s"
}
#pragma pop

/* 80C5F28C-80C5F2BC 00080C 0030+00 1/0 0/0 0/0 .text            Delete__11daLv4Gate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4Gate_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4Gate/d_a_obj_lv4Gate/Delete__11daLv4Gate_cFv.s"
}
#pragma pop

/* 80C5F2BC-80C5F2E8 00083C 002C+00 1/0 0/0 0/0 .text            daLv4Gate_Draw__FP11daLv4Gate_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daLv4Gate_Draw(daLv4Gate_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4Gate/d_a_obj_lv4Gate/daLv4Gate_Draw__FP11daLv4Gate_c.s"
}
#pragma pop

/* 80C5F2E8-80C5F308 000868 0020+00 1/0 0/0 0/0 .text            daLv4Gate_Execute__FP11daLv4Gate_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daLv4Gate_Execute(daLv4Gate_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4Gate/d_a_obj_lv4Gate/daLv4Gate_Execute__FP11daLv4Gate_c.s"
}
#pragma pop

/* 80C5F308-80C5F328 000888 0020+00 1/0 0/0 0/0 .text            daLv4Gate_Delete__FP11daLv4Gate_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daLv4Gate_Delete(daLv4Gate_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4Gate/d_a_obj_lv4Gate/daLv4Gate_Delete__FP11daLv4Gate_c.s"
}
#pragma pop

/* 80C5F328-80C5F348 0008A8 0020+00 1/0 0/0 0/0 .text            daLv4Gate_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daLv4Gate_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4Gate/d_a_obj_lv4Gate/daLv4Gate_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C5F348-80C5F3A4 0008C8 005C+00 2/1 0/0 0/0 .text            __dt__15daLv4Gate_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daLv4Gate_HIO_c::~daLv4Gate_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4Gate/d_a_obj_lv4Gate/__dt__15daLv4Gate_HIO_cFv.s"
}
#pragma pop

/* 80C5F3A4-80C5F3E0 000924 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_lv4Gate_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_lv4Gate_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4Gate/d_a_obj_lv4Gate/__sinit_d_a_obj_lv4Gate_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80C5F3A4, __sinit_d_a_obj_lv4Gate_cpp);
#pragma pop

/* 80C5F414-80C5F414 000020 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
