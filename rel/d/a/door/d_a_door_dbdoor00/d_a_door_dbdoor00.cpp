//
// Generated By: dol2asm
// Translation Unit: d_a_door_dbdoor00
//

#include "rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    /* 8000CCC8 */ void push();
    /* 8000CD14 */ void pop();
    /* 8000CD9C */ void transM(f32, f32, f32);

    static u8 now[48];
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct door_param2_c {
    /* 8003A194 */ void getDoorModel(fopAc_ac_c*);
    /* 8003A1B8 */ void getFRoomNo(fopAc_ac_c*);
    /* 8003A224 */ void getExitNo(fopAc_ac_c*);
};

struct daDbDoor00_c {
    /* 8045D470 */ void getAlwaysArcName();
    /* 8045D480 */ void getDzb();
    /* 8045D490 */ void getDummyBmdName();
    /* 8045D4A0 */ void getBmdArcName();
    /* 8045D4B0 */ void getBmdName();
    /* 8045D504 */ void getDoorModelData();
    /* 8045D594 */ void CreateHeap();
    /* 8045D744 */ void calcMtx();
    /* 8045D8F4 */ void CreateInit();
    /* 8045D9A8 */ void create();
    /* 8045DA68 */ void getDemoAction();
    /* 8045DAB0 */ void demoProc();
    /* 8045DE44 */ void checkArea();
    /* 8045DF70 */ bool checkUnlock();
    /* 8045DF78 */ void actionWait();
    /* 8045DF9C */ void actionLockWait();
    /* 8045E000 */ void actionLockOff();
    /* 8045E094 */ void actionLockDemo();
    /* 8045E108 */ void actionCloseWait();
    /* 8045E1C8 */ void actionOpen();
    /* 8045E1EC */ void execute();
    /* 8045E2DC */ void checkDraw();
    /* 8045E31C */ void draw();
    /* 8045E428 */ void Delete();
};

struct dStage_roomControl_c {
    /* 800244E8 */ void checkRoomDisp(int) const;
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
    /* 8003C37C */ void getRes(char const*, char const*, dRes_info_c*, int);
};

struct dEvt_info_c {
    /* 80043428 */ void setEventName(char*);
};

struct dEvt_control_c {
    /* 80042468 */ void reset();
};

struct dEvent_manager_c {
    /* 80047ADC */ void endCheckOld(char const*);
    /* 80047B1C */ void getMyStaffId(char const*, fopAc_ac_c*, int);
    /* 80047D4C */ void getIsAddvance(int);
    /* 80047E10 */ void getMyActIdx(int, char const* const*, int, int, int);
    /* 800480EC */ void getMySubstanceP(int, char const*, int);
    /* 8004817C */ void cutEnd(int);
    /* 800483C4 */ void setGoal(cXyz*);
};

struct dBgW_Base {};

struct dBgW {
    /* 8007B970 */ dBgW();
    /* 8007B9C0 */ void Move();
};

struct dBgS {
    /* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct cBgD_t {};

struct cBgW {
    /* 80079F38 */ void Set(cBgD_t*, u32, f32 (*)[3][4]);
};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

struct JUTNameTab {
    /* 802DEA58 */ void getIndex(char const*) const;
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

extern "C" static void nodeCallBack__FP8J3DJointi();
extern "C" void getAlwaysArcName__12daDbDoor00_cFv();
extern "C" void getDzb__12daDbDoor00_cFv();
extern "C" void getDummyBmdName__12daDbDoor00_cFv();
extern "C" void getBmdArcName__12daDbDoor00_cFv();
extern "C" void getBmdName__12daDbDoor00_cFv();
extern "C" void getDoorModelData__12daDbDoor00_cFv();
extern "C" static void CheckCreateHeap__FP10fopAc_ac_c();
extern "C" void CreateHeap__12daDbDoor00_cFv();
extern "C" void calcMtx__12daDbDoor00_cFv();
extern "C" void CreateInit__12daDbDoor00_cFv();
extern "C" void create__12daDbDoor00_cFv();
extern "C" void getDemoAction__12daDbDoor00_cFv();
extern "C" void demoProc__12daDbDoor00_cFv();
extern "C" void checkArea__12daDbDoor00_cFv();
extern "C" bool checkUnlock__12daDbDoor00_cFv();
extern "C" void actionWait__12daDbDoor00_cFv();
extern "C" void actionLockWait__12daDbDoor00_cFv();
extern "C" void actionLockOff__12daDbDoor00_cFv();
extern "C" void actionLockDemo__12daDbDoor00_cFv();
extern "C" void actionCloseWait__12daDbDoor00_cFv();
extern "C" void actionOpen__12daDbDoor00_cFv();
extern "C" void execute__12daDbDoor00_cFv();
extern "C" void checkDraw__12daDbDoor00_cFv();
extern "C" void draw__12daDbDoor00_cFv();
extern "C" void Delete__12daDbDoor00_cFv();
extern "C" static void daDbdoor00_Draw__FP12daDbDoor00_c();
extern "C" static void daDbdoor00_Execute__FP12daDbDoor00_c();
extern "C" static bool daDbdoor00_IsDelete__FP12daDbDoor00_c();
extern "C" static void daDbdoor00_Delete__FP12daDbDoor00_c();
extern "C" static void daDbdoor00_Create__FP10fopAc_ac_c();
extern "C" extern char const* const d_a_door_dbdoor00__stringBase0;
extern "C" extern void* g_profile_DBDOOR[12];

//
// External References:
//

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void push__14mDoMtx_stack_cFv();
extern "C" void pop__14mDoMtx_stack_cFv();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_seenActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderOtherEvent__FP10fopAc_ac_cPCcUsUsUs();
extern "C" void checkRoomDisp__20dStage_roomControl_cCFi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfG_getStageRes__FPCc();
extern "C" void getDoorModel__13door_param2_cFP10fopAc_ac_c();
extern "C" void getFRoomNo__13door_param2_cFP10fopAc_ac_c();
extern "C" void getExitNo__13door_param2_cFP10fopAc_ac_c();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void setEventName__11dEvt_info_cFPc();
extern "C" void endCheckOld__16dEvent_manager_cFPCc();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void getIsAddvance__16dEvent_manager_cFi();
extern "C" void getMyActIdx__16dEvent_manager_cFiPCPCciii();
extern "C" void getMySubstanceP__16dEvent_manager_cFiPCci();
extern "C" void cutEnd__16dEvent_manager_cFi();
extern "C" void setGoal__16dEvent_manager_cFP4cXyz();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void getIndex__10JUTNameTabCFPCc();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void sprintf();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* 8045D378-8045D470 000078 00F8+00 1/1 0/0 0/0 .text            nodeCallBack__FP8J3DJointi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void nodeCallBack(J3DJoint* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/nodeCallBack__FP8J3DJointi.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045E56C-8045E56C 000038 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8045E56C = "door-pushDouble_";
SECTION_DEAD static char const* const stringBase_8045E57D = "static";
#pragma pop

/* 8045D470-8045D480 000170 0010+00 3/3 0/0 0/0 .text            getAlwaysArcName__12daDbDoor00_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDbDoor00_c::getAlwaysArcName() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/getAlwaysArcName__12daDbDoor00_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045E56C-8045E56C 000038 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8045E584 = "door-pushDouble.dzb";
#pragma pop

/* 8045D480-8045D490 000180 0010+00 1/1 0/0 0/0 .text            getDzb__12daDbDoor00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDbDoor00_c::getDzb() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/getDzb__12daDbDoor00_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045E56C-8045E56C 000038 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8045E598 = "door-pushDoubleDummy.bmd";
#pragma pop

/* 8045D490-8045D4A0 000190 0010+00 1/1 0/0 0/0 .text            getDummyBmdName__12daDbDoor00_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDbDoor00_c::getDummyBmdName() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/getDummyBmdName__12daDbDoor00_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045E56C-8045E56C 000038 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8045E5B1 = "DbDoor0";
#pragma pop

/* 8045D4A0-8045D4B0 0001A0 0010+00 3/3 0/0 0/0 .text            getBmdArcName__12daDbDoor00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDbDoor00_c::getBmdArcName() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/getBmdArcName__12daDbDoor00_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045E56C-8045E56C 000038 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8045E5B9 = "%s%02d.bmd";
#pragma pop

/* 8045E664-8045E670 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8045E670-8045E684 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 8045E684-8045E688 -00001 0004+00 1/1 0/0 0/0 .data            l_bmd_base_name */
SECTION_DATA static void* l_bmd_base_name = (void*)&d_a_door_dbdoor00__stringBase0;

/* 8045E7B0-8045E7D0 000000 0020+00 1/1 0/0 0/0 .bss             l_bmdName$3699 */
static u8 l_bmdName[32];

/* 8045D4B0-8045D504 0001B0 0054+00 1/1 0/0 0/0 .text            getBmdName__12daDbDoor00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDbDoor00_c::getBmdName() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/getBmdName__12daDbDoor00_cFv.s"
}
#pragma pop

/* 8045D504-8045D574 000204 0070+00 1/1 0/0 0/0 .text            getDoorModelData__12daDbDoor00_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDbDoor00_c::getDoorModelData() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/getDoorModelData__12daDbDoor00_cFv.s"
}
#pragma pop

/* 8045D574-8045D594 000274 0020+00 1/1 0/0 0/0 .text            CheckCreateHeap__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void CheckCreateHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/CheckCreateHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045E56C-8045E56C 000038 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8045E5C4 = "DbDoor00_L";
SECTION_DEAD static char const* const stringBase_8045E5CF = "DbDoor00_R";
#pragma pop

/* 8045D594-8045D744 000294 01B0+00 1/1 0/0 0/0 .text            CreateHeap__12daDbDoor00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDbDoor00_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/CreateHeap__12daDbDoor00_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045E534-8045E538 000000 0004+00 3/3 0/0 0/0 .rodata          @3806 */
SECTION_RODATA static u8 const lit_3806[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x8045E534, &lit_3806);

/* 8045E538-8045E53C 000004 0004+00 0/1 0/0 0/0 .rodata          @3807 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3807 = -150.0f;
COMPILER_STRIP_GATE(0x8045E538, &lit_3807);
#pragma pop

/* 8045E53C-8045E540 000008 0004+00 0/1 0/0 0/0 .rodata          @3808 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3808 = -400.0f;
COMPILER_STRIP_GATE(0x8045E53C, &lit_3808);
#pragma pop

/* 8045E540-8045E544 00000C 0004+00 0/1 0/0 0/0 .rodata          @3809 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3809 = 80.0f;
COMPILER_STRIP_GATE(0x8045E540, &lit_3809);
#pragma pop

/* 8045E544-8045E548 000010 0004+00 0/1 0/0 0/0 .rodata          @3810 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3810 = 70.0f;
COMPILER_STRIP_GATE(0x8045E544, &lit_3810);
#pragma pop

/* 8045E548-8045E54C 000014 0004+00 0/1 0/0 0/0 .rodata          @3811 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3811 = -80.0f;
COMPILER_STRIP_GATE(0x8045E548, &lit_3811);
#pragma pop

/* 8045D744-8045D8F4 000444 01B0+00 4/4 0/0 0/0 .text            calcMtx__12daDbDoor00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDbDoor00_c::calcMtx() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/calcMtx__12daDbDoor00_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045E54C-8045E550 000018 0004+00 1/1 0/0 0/0 .rodata          @3826 */
SECTION_RODATA static f32 const lit_3826 = 250.0f;
COMPILER_STRIP_GATE(0x8045E54C, &lit_3826);

/* 8045D8F4-8045D9A8 0005F4 00B4+00 1/1 0/0 0/0 .text            CreateInit__12daDbDoor00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDbDoor00_c::CreateInit() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/CreateInit__12daDbDoor00_cFv.s"
}
#pragma pop

/* 8045D9A8-8045DA68 0006A8 00C0+00 1/1 0/0 0/0 .text            create__12daDbDoor00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDbDoor00_c::create() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/create__12daDbDoor00_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045E56C-8045E56C 000038 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8045E5DA = "WAIT";
SECTION_DEAD static char const* const stringBase_8045E5DF = "SET_START";
SECTION_DEAD static char const* const stringBase_8045E5E9 = "SET_ANGLE";
SECTION_DEAD static char const* const stringBase_8045E5F3 = "END";
SECTION_DEAD static char const* const stringBase_8045E5F7 = "OPEN";
SECTION_DEAD static char const* const stringBase_8045E5FC = "STOP_OPEN";
SECTION_DEAD static char const* const stringBase_8045E606 = "SET_GOAL";
SECTION_DEAD static char const* const stringBase_8045E60F = "SET_GOAL2";
SECTION_DEAD static char const* const stringBase_8045E619 = "ADJUSTMENT";
#pragma pop

/* 8045E688-8045E6AC -00001 0024+00 1/1 0/0 0/0 .data            action_table$3865 */
SECTION_DATA static void* action_table[9] = {
    (void*)(((char*)&d_a_door_dbdoor00__stringBase0) + 0x6E),
    (void*)(((char*)&d_a_door_dbdoor00__stringBase0) + 0x73),
    (void*)(((char*)&d_a_door_dbdoor00__stringBase0) + 0x7D),
    (void*)(((char*)&d_a_door_dbdoor00__stringBase0) + 0x87),
    (void*)(((char*)&d_a_door_dbdoor00__stringBase0) + 0x8B),
    (void*)(((char*)&d_a_door_dbdoor00__stringBase0) + 0x90),
    (void*)(((char*)&d_a_door_dbdoor00__stringBase0) + 0x9A),
    (void*)(((char*)&d_a_door_dbdoor00__stringBase0) + 0xA3),
    (void*)(((char*)&d_a_door_dbdoor00__stringBase0) + 0xAD),
};

/* 8045DA68-8045DAB0 000768 0048+00 1/1 0/0 0/0 .text            getDemoAction__12daDbDoor00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDbDoor00_c::getDemoAction() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/getDemoAction__12daDbDoor00_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045E56C-8045E56C 000038 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8045E624 = "Timer";
#pragma pop

/* 8045E6AC-8045E6D0 -00001 0024+00 1/1 0/0 0/0 .data            @3957 */
SECTION_DATA static void* lit_3957[9] = {
    (void*)(((char*)demoProc__12daDbDoor00_cFv) + 0x1A4),
    (void*)(((char*)demoProc__12daDbDoor00_cFv) + 0x74),
    (void*)(((char*)demoProc__12daDbDoor00_cFv) + 0xA4),
    (void*)(((char*)demoProc__12daDbDoor00_cFv) + 0x1A4),
    (void*)(((char*)demoProc__12daDbDoor00_cFv) + 0xB8),
    (void*)(((char*)demoProc__12daDbDoor00_cFv) + 0x1A4),
    (void*)(((char*)demoProc__12daDbDoor00_cFv) + 0x118),
    (void*)(((char*)demoProc__12daDbDoor00_cFv) + 0x140),
    (void*)(((char*)demoProc__12daDbDoor00_cFv) + 0x168),
};

/* 8045DAB0-8045DE44 0007B0 0394+00 5/4 0/0 0/0 .text            demoProc__12daDbDoor00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDbDoor00_c::demoProc() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/demoProc__12daDbDoor00_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045E550-8045E554 00001C 0004+00 0/0 0/0 0/0 .rodata          @3953 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3953 = 1.0f;
COMPILER_STRIP_GATE(0x8045E550, &lit_3953);
#pragma pop

/* 8045E554-8045E558 000020 0004+00 0/0 0/0 0/0 .rodata          @3954 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3954 = -1.0f;
COMPILER_STRIP_GATE(0x8045E554, &lit_3954);
#pragma pop

/* 8045E558-8045E55C 000024 0004+00 0/0 0/0 0/0 .rodata          @3955 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3955 = 9.0f / 10.0f;
COMPILER_STRIP_GATE(0x8045E558, &lit_3955);
#pragma pop

/* 8045E55C-8045E560 000028 0004+00 0/0 0/0 0/0 .rodata          @3956 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3956 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x8045E55C, &lit_3956);
#pragma pop

/* 8045E560-8045E564 00002C 0004+00 0/1 0/0 0/0 .rodata          @4032 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4032 = 160.0f;
COMPILER_STRIP_GATE(0x8045E560, &lit_4032);
#pragma pop

/* 8045E564-8045E568 000030 0004+00 0/1 0/0 0/0 .rodata          @4033 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4033 = 200.0f;
COMPILER_STRIP_GATE(0x8045E564, &lit_4033);
#pragma pop

/* 8045E568-8045E56C 000034 0004+00 0/1 0/0 0/0 .rodata          @4034 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4034 = -200.0f;
COMPILER_STRIP_GATE(0x8045E568, &lit_4034);
#pragma pop

/* 8045DE44-8045DF70 000B44 012C+00 1/1 0/0 0/0 .text            checkArea__12daDbDoor00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDbDoor00_c::checkArea() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/checkArea__12daDbDoor00_cFv.s"
}
#pragma pop

/* 8045DF70-8045DF78 000C70 0008+00 1/1 0/0 0/0 .text            checkUnlock__12daDbDoor00_cFv */
bool daDbDoor00_c::checkUnlock() {
    return true;
}

/* 8045DF78-8045DF9C 000C78 0024+00 1/0 0/0 0/0 .text            actionWait__12daDbDoor00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDbDoor00_c::actionWait() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/actionWait__12daDbDoor00_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045E56C-8045E56C 000038 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8045E62A = "DBDOOR00_STOP_OPEN";
#pragma pop

/* 8045DF9C-8045E000 000C9C 0064+00 1/0 0/0 0/0 .text            actionLockWait__12daDbDoor00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDbDoor00_c::actionLockWait() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/actionLockWait__12daDbDoor00_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045E56C-8045E56C 000038 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8045E63D = "DOUBLE_DOOR";
#pragma pop

/* 8045E000-8045E094 000D00 0094+00 1/0 0/0 0/0 .text            actionLockOff__12daDbDoor00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDbDoor00_c::actionLockOff() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/actionLockOff__12daDbDoor00_cFv.s"
}
#pragma pop

/* 8045E094-8045E108 000D94 0074+00 1/0 0/0 0/0 .text            actionLockDemo__12daDbDoor00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDbDoor00_c::actionLockDemo() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/actionLockDemo__12daDbDoor00_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045E56C-8045E56C 000038 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8045E649 = "DEFAULT_DOUBLE_DOOR_OPEN";
#pragma pop

/* 8045E108-8045E1C8 000E08 00C0+00 1/0 0/0 0/0 .text            actionCloseWait__12daDbDoor00_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDbDoor00_c::actionCloseWait() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/actionCloseWait__12daDbDoor00_cFv.s"
}
#pragma pop

/* 8045E1C8-8045E1EC 000EC8 0024+00 1/0 0/0 0/0 .text            actionOpen__12daDbDoor00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDbDoor00_c::actionOpen() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/actionOpen__12daDbDoor00_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045E6D0-8045E6DC -00001 000C+00 0/1 0/0 0/0 .data            @4092 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4092[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionWait__12daDbDoor00_cFv,
};
#pragma pop

/* 8045E6DC-8045E6E8 -00001 000C+00 0/1 0/0 0/0 .data            @4093 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4093[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionLockWait__12daDbDoor00_cFv,
};
#pragma pop

/* 8045E6E8-8045E6F4 -00001 000C+00 0/1 0/0 0/0 .data            @4094 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4094[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionLockOff__12daDbDoor00_cFv,
};
#pragma pop

/* 8045E6F4-8045E700 -00001 000C+00 0/1 0/0 0/0 .data            @4095 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4095[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionLockDemo__12daDbDoor00_cFv,
};
#pragma pop

/* 8045E700-8045E70C -00001 000C+00 0/1 0/0 0/0 .data            @4096 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4096[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionCloseWait__12daDbDoor00_cFv,
};
#pragma pop

/* 8045E70C-8045E718 -00001 000C+00 0/1 0/0 0/0 .data            @4097 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4097[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionOpen__12daDbDoor00_cFv,
};
#pragma pop

/* 8045E718-8045E760 0000B4 0048+00 0/1 0/0 0/0 .data            l_action$4091 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_action[72] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 8045E7D0-8045E7D4 000020 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_8045E7D0[4];

/* 8045E1EC-8045E2DC 000EEC 00F0+00 1/1 0/0 0/0 .text            execute__12daDbDoor00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDbDoor00_c::execute() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/execute__12daDbDoor00_cFv.s"
}
#pragma pop

/* 8045E2DC-8045E31C 000FDC 0040+00 1/1 0/0 0/0 .text            checkDraw__12daDbDoor00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDbDoor00_c::checkDraw() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/checkDraw__12daDbDoor00_cFv.s"
}
#pragma pop

/* 8045E31C-8045E428 00101C 010C+00 1/1 0/0 0/0 .text            draw__12daDbDoor00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDbDoor00_c::draw() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/draw__12daDbDoor00_cFv.s"
}
#pragma pop

/* 8045E428-8045E49C 001128 0074+00 1/1 0/0 0/0 .text            Delete__12daDbDoor00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDbDoor00_c::Delete() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/Delete__12daDbDoor00_cFv.s"
}
#pragma pop

/* 8045E49C-8045E4BC 00119C 0020+00 1/0 0/0 0/0 .text            daDbdoor00_Draw__FP12daDbDoor00_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daDbdoor00_Draw(daDbDoor00_c* param_0) {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/daDbdoor00_Draw__FP12daDbDoor00_c.s"
}
#pragma pop

/* 8045E4BC-8045E4E0 0011BC 0024+00 1/0 0/0 0/0 .text daDbdoor00_Execute__FP12daDbDoor00_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daDbdoor00_Execute(daDbDoor00_c* param_0) {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/daDbdoor00_Execute__FP12daDbDoor00_c.s"
}
#pragma pop

/* 8045E4E0-8045E4E8 0011E0 0008+00 1/0 0/0 0/0 .text daDbdoor00_IsDelete__FP12daDbDoor00_c */
static bool daDbdoor00_IsDelete(daDbDoor00_c* param_0) {
    return true;
}

/* 8045E4E8-8045E50C 0011E8 0024+00 1/0 0/0 0/0 .text            daDbdoor00_Delete__FP12daDbDoor00_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daDbdoor00_Delete(daDbDoor00_c* param_0) {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/daDbdoor00_Delete__FP12daDbDoor00_c.s"
}
#pragma pop

/* 8045E50C-8045E52C 00120C 0020+00 1/0 0/0 0/0 .text            daDbdoor00_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daDbdoor00_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_dbdoor00/d_a_door_dbdoor00/daDbdoor00_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045E760-8045E780 -00001 0020+00 1/0 0/0 0/0 .data            l_daDbdoor00_Method */
SECTION_DATA static void* l_daDbdoor00_Method[8] = {
    (void*)daDbdoor00_Create__FP10fopAc_ac_c,
    (void*)daDbdoor00_Delete__FP12daDbDoor00_c,
    (void*)daDbdoor00_Execute__FP12daDbDoor00_c,
    (void*)daDbdoor00_IsDelete__FP12daDbDoor00_c,
    (void*)daDbdoor00_Draw__FP12daDbDoor00_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 8045E780-8045E7B0 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_DBDOOR */
SECTION_DATA extern void* g_profile_DBDOOR[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02270000, (void*)&g_fpcLf_Method,
    (void*)0x000005C4, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01270000, (void*)&l_daDbdoor00_Method,
    (void*)0x00044000, (void*)0x00060000,
};

/* 8045E56C-8045E56C 000038 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
