//
// Generated By: dol2asm
// Translation Unit: d_a_tbox2
//

#include "rel/d/a/d_a_tbox2/d_a_tbox2.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);

    static u8 now[48];
};

struct J3DModelData {};

struct J3DAnmTransform {};

struct mDoExt_bckAnm {
    /* 8000D7DC */ void init(J3DAnmTransform*, int, int, f32, s16, s16, bool);
    /* 8000D9CC */ void entry(J3DModelData*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct fopAc_ac_c {};

struct fopAcM_lc_c {
    /* 8001DC68 */ void lineCheck(cXyz const*, cXyz const*, fopAc_ac_c const*);

    static u8 mLineCheck[112];
};

struct daTbox2_c {
    /* 80496A18 */ void initBaseMtx();
    /* 80496A54 */ void setBaseMtx();
    /* 80496AB8 */ void Create();
    /* 80496C20 */ void CreateHeap();
    /* 80496E3C */ void create1st();
    /* 8049724C */ void demoProc();
    /* 80497478 */ void openInit();
    /* 80497500 */ void Execute(f32 (**)[3][4]);
    /* 804975EC */ void mode_proc_call();
    /* 80497678 */ void mode_exec_wait();
    /* 80497790 */ void mode_exec();
    /* 8049780C */ void action();
    /* 804978C8 */ void init_actionWait();
    /* 804978D4 */ void actionWait();
    /* 804978D8 */ void init_actionNotOpenDemo();
    /* 804978E4 */ void actionNotOpenDemo();
    /* 8049794C */ void init_actionOpenDemo();
    /* 80497958 */ void actionOpenDemo();
    /* 80497A0C */ void init_actionOpenWait();
    /* 80497A18 */ void actionOpenWait();
    /* 80497BD0 */ void setGetDemoItem();
    /* 80497C60 */ void boxCheck();
    /* 80497DA0 */ void Draw();
    /* 80497E6C */ void Delete();
    /* 80498140 */ bool checkSmallTbox();
};

struct daPy_py_c {
    static u8 m_midnaActor[4];
};

struct dKy_tevstr_c {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dEvt_info_c {
    /* 80043428 */ void setEventName(char*);
};

struct dEvt_control_c {
    /* 80042468 */ void reset();
    /* 800436BC */ void setPtI(void*);
};

struct dEvent_manager_c {
    /* 80047A78 */ void endCheck(s16);
    /* 80047B1C */ void getMyStaffId(char const*, fopAc_ac_c*, int);
    /* 80047D4C */ void getIsAddvance(int);
    /* 80047E10 */ void getMyActIdx(int, char const* const*, int, int, int);
    /* 8004817C */ void cutEnd(int);
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 804971F0 */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct dBgW_Base {};

struct dBgW {
    /* 8007B970 */ dBgW();
    /* 8007B9C0 */ void Move();
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 804970F0 */ ~dBgS_ObjAcch();
};

struct cBgS_PolyInfo {
    /* 802680B0 */ ~cBgS_PolyInfo();
};

struct csXyz {};

struct dBgS_MoveBgActor {
    /* 80078624 */ dBgS_MoveBgActor();
    /* 80078688 */ bool CreateHeap();
    /* 80078690 */ bool Create();
    /* 80078698 */ bool Execute(f32 (**)[3][4]);
    /* 800786A0 */ bool Draw();
    /* 800786A8 */ bool Delete();
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

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80075F58 */ void SetWall(f32, f32);
    /* 80497080 */ ~dBgS_AcchCir();
};

struct dBgS {
    /* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
    /* 80074ABC */ void ChkMoveBG(cBgS_PolyInfo const&);
};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 80076AAC */ void CrrPos(dBgS&);
};

struct cM3dGCylS {};

struct cM3dGCyl {
    /* 8026F114 */ void Set(cM3dGCylS const&);
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 80497160 */ ~cM3dGCyl();
};

struct cM3dGCir {
    /* 8026EF18 */ ~cM3dGCir();
};

struct cM3dGAab {
    /* 804971A8 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 804980F8 */ ~cCcD_GStts();
};

struct cBgW_BgId {
    /* 802681D4 */ void ChkUsed() const;
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

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80496DF4 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

extern "C" void initBaseMtx__9daTbox2_cFv();
extern "C" void setBaseMtx__9daTbox2_cFv();
extern "C" void Create__9daTbox2_cFv();
extern "C" void CreateHeap__9daTbox2_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void create1st__9daTbox2_cFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void demoProc__9daTbox2_cFv();
extern "C" void openInit__9daTbox2_cFv();
extern "C" void Execute__9daTbox2_cFPPA3_A4_f();
extern "C" void mode_proc_call__9daTbox2_cFv();
extern "C" void mode_exec_wait__9daTbox2_cFv();
extern "C" void mode_exec__9daTbox2_cFv();
extern "C" void action__9daTbox2_cFv();
extern "C" void init_actionWait__9daTbox2_cFv();
extern "C" void actionWait__9daTbox2_cFv();
extern "C" void init_actionNotOpenDemo__9daTbox2_cFv();
extern "C" void actionNotOpenDemo__9daTbox2_cFv();
extern "C" void init_actionOpenDemo__9daTbox2_cFv();
extern "C" void actionOpenDemo__9daTbox2_cFv();
extern "C" void init_actionOpenWait__9daTbox2_cFv();
extern "C" void actionOpenWait__9daTbox2_cFv();
extern "C" void setGetDemoItem__9daTbox2_cFv();
extern "C" void boxCheck__9daTbox2_cFv();
extern "C" void Draw__9daTbox2_cFv();
extern "C" void Delete__9daTbox2_cFv();
extern "C" static void daTbox2_create1st__FP9daTbox2_c();
extern "C" static void daTbox2_MoveBGDelete__FP9daTbox2_c();
extern "C" static void daTbox2_MoveBGExecute__FP9daTbox2_c();
extern "C" static void daTbox2_MoveBGDraw__FP9daTbox2_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" bool checkSmallTbox__9daTbox2_cFv();
extern "C" static void func_80498148();
extern "C" static void func_80498150();
extern "C" extern char const* const d_a_tbox2__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_seenActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_createItemForPresentDemo__FPC4cXyziUciiPC5csXyzPC4cXyz();
extern "C" void fopAcM_createItemForTrBoxDemo__FPC4cXyziiiPC5csXyzPC4cXyz();
extern "C" void lineCheck__11fopAcM_lc_cFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void setEventName__11dEvt_info_cFPc();
extern "C" void setPtI__14dEvt_control_cFPv();
extern "C" void setPtI_Id__14dEvt_control_cFUi();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void getIsAddvance__16dEvent_manager_cFi();
extern "C" void getMyActIdx__16dEvent_manager_cFiPCPCciii();
extern "C" void cutEnd__16dEvent_manager_cFi();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void ChkMoveBG__4dBgSFRC13cBgS_PolyInfo();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool CreateHeap__16dBgS_MoveBgActorFv();
extern "C" bool Create__16dBgS_MoveBgActorFv();
extern "C" bool Execute__16dBgS_MoveBgActorFPPA3_A4_f();
extern "C" bool Draw__16dBgS_MoveBgActorFv();
extern "C" bool Delete__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_set_allcol_ratio__Ff();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void Set__8cM3dGCylFRC9cM3dGCylS();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXMultVec();
extern "C" void PSVECAdd();
extern "C" void PSVECSquareMag();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void strcmp();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mLineCheck__11fopAcM_lc_c[112];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" u8 m_midnaActor__9daPy_py_c[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 struct_80498480[4];

//
// Declarations:
//

/* 80496A18-80496A54 000078 003C+00 1/1 0/0 0/0 .text            initBaseMtx__9daTbox2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTbox2_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/initBaseMtx__9daTbox2_cFv.s"
}
#pragma pop

/* 80496A54-80496AB8 0000B4 0064+00 2/2 0/0 0/0 .text            setBaseMtx__9daTbox2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTbox2_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/setBaseMtx__9daTbox2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80498160-80498180 000000 0020+00 4/4 0/0 0/0 .rodata          l_resInfo */
SECTION_RODATA static u8 const l_resInfo[32] = {
    0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x0E,
    0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x10,
};
COMPILER_STRIP_GATE(0x80498160, &l_resInfo);

/* 80498180-804981BC 000020 003C+00 1/2 0/0 0/0 .rodata          l_cyl_info */
SECTION_RODATA static u8 const l_cyl_info[60] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC2, 0x20, 0x00, 0x00, 0x42, 0x20, 0x00,
    0x00, 0x42, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC2, 0x70,
    0x00, 0x00, 0x42, 0x48, 0x00, 0x00, 0x42, 0x8C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xC2, 0x70, 0x00, 0x00, 0x42, 0x8C, 0x00, 0x00, 0x42, 0xA0, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80498180, &l_cyl_info);

/* 804981BC-804981C0 00005C 0004+00 0/1 0/0 0/0 .rodata          @3714 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3714 = 50.0f;
COMPILER_STRIP_GATE(0x804981BC, &lit_3714);
#pragma pop

/* 804981C0-804981C4 000060 0004+00 1/3 0/0 0/0 .rodata          @3715 */
SECTION_RODATA static u8 const lit_3715[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x804981C0, &lit_3715);

/* 804981C4-804981C8 000064 0004+00 0/1 0/0 0/0 .rodata          @3716 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3716 = -6.0f;
COMPILER_STRIP_GATE(0x804981C4, &lit_3716);
#pragma pop

/* 804981C8-804981CC 000068 0004+00 1/2 0/0 0/0 .rodata          @3717 */
SECTION_RODATA static f32 const lit_3717 = 5.0f;
COMPILER_STRIP_GATE(0x804981C8, &lit_3717);

/* 804981CC-804981D0 00006C 0004+00 1/2 0/0 0/0 .rodata          @3718 */
SECTION_RODATA static f32 const lit_3718 = 30.0f;
COMPILER_STRIP_GATE(0x804981CC, &lit_3718);

/* 804981E0-804981E0 000080 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_804981E0 = "Tbox2";
SECTION_DEAD static char const* const stringBase_804981E6 = "TREASURE";
#pragma pop

/* 8049825C-80498268 000000 000C+00 2/2 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80498268-8049827C 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 8049827C-80498280 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_tbox2__stringBase0;

/* 80498280-80498284 -00001 0004+00 1/1 0/0 0/0 .data            l_staff_name */
SECTION_DATA static void* l_staff_name = (void*)(((char*)&d_a_tbox2__stringBase0) + 0x6);

/* 80498284-804982C8 000028 0044+00 1/1 0/0 0/0 .data            l_cyl_src */
SECTION_DATA static u8 l_cyl_src[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80496AB8-80496C20 000118 0168+00 1/0 0/0 0/0 .text            Create__9daTbox2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTbox2_c::Create() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/Create__9daTbox2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804981D0-804981D4 000070 0004+00 4/4 0/0 0/0 .rodata          @3763 */
SECTION_RODATA static f32 const lit_3763 = 1.0f;
COMPILER_STRIP_GATE(0x804981D0, &lit_3763);

/* 804981E0-804981E0 000080 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_804981EF = "WAIT";
SECTION_DEAD static char const* const stringBase_804981F4 = "OPEN";
SECTION_DEAD static char const* const stringBase_804981F9 = "APPEAR";
SECTION_DEAD static char const* const stringBase_80498200 = "OPEN_SHORT";
#pragma pop

/* 804982C8-804982D8 -00001 0010+00 1/1 0/0 0/0 .data            action_table$3964 */
SECTION_DATA static void* action_table[4] = {
    (void*)(((char*)&d_a_tbox2__stringBase0) + 0xF),
    (void*)(((char*)&d_a_tbox2__stringBase0) + 0x14),
    (void*)(((char*)&d_a_tbox2__stringBase0) + 0x19),
    (void*)(((char*)&d_a_tbox2__stringBase0) + 0x20),
};

/* 804982D8-804982E4 -00001 000C+00 0/1 0/0 0/0 .data            @4060 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4060[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_exec_wait__9daTbox2_cFv,
};
#pragma pop

/* 804982E4-804982F0 -00001 000C+00 0/1 0/0 0/0 .data            @4061 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4061[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_exec__9daTbox2_cFv,
};
#pragma pop

/* 804982F0-80498308 000094 0018+00 0/1 0/0 0/0 .data            l_func$4059 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_func_4059[24] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80498308-80498314 -00001 000C+00 0/1 0/0 0/0 .data            @4101 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4101[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionOpenWait__9daTbox2_cFv,
};
#pragma pop

/* 80498314-80498320 -00001 000C+00 0/1 0/0 0/0 .data            @4102 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4102[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionOpenDemo__9daTbox2_cFv,
};
#pragma pop

/* 80498320-8049832C -00001 000C+00 0/1 0/0 0/0 .data            @4103 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4103[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionNotOpenDemo__9daTbox2_cFv,
};
#pragma pop

/* 8049832C-80498338 -00001 000C+00 0/1 0/0 0/0 .data            @4104 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4104[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionWait__9daTbox2_cFv,
};
#pragma pop

/* 80498338-80498368 0000DC 0030+00 0/1 0/0 0/0 .data            l_func$4100 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_func_4100[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80498368-80498388 -00001 0020+00 1/0 0/0 0/0 .data            daTbox2_METHODS */
SECTION_DATA static void* daTbox2_METHODS[8] = {
    (void*)daTbox2_create1st__FP9daTbox2_c,
    (void*)daTbox2_MoveBGDelete__FP9daTbox2_c,
    (void*)daTbox2_MoveBGExecute__FP9daTbox2_c,
    (void*)NULL,
    (void*)daTbox2_MoveBGDraw__FP9daTbox2_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80498388-804983B8 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_TBOX2 */
SECTION_DATA extern void* g_profile_TBOX2[12] = {
    (void*)0xFFFFFFFD, (void*)0x0004FFFD,
    (void*)0x00FC0000, (void*)&g_fpcLf_Method,
    (void*)0x00000ACC, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x010D0000, (void*)&daTbox2_METHODS,
    (void*)0x00044100, (void*)0x000E0000,
};

/* 804983B8-804983C4 00015C 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 804983C4-804983D0 000168 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 804983D0-804983DC 000174 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 804983DC-80498400 000180 0024+00 3/3 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80498150,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80498148,
};

/* 80498400-8049840C 0001A4 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 8049840C-80498418 0001B0 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80498418-80498444 0001BC 002C+00 2/2 0/0 0/0 .data            __vt__12daTboxBase_c */
SECTION_DATA extern void* __vt__12daTboxBase_c[11] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__16dBgS_MoveBgActorFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__16dBgS_MoveBgActorFPPA3_A4_f,
    (void*)Draw__16dBgS_MoveBgActorFv,
    (void*)Delete__16dBgS_MoveBgActorFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
    (void*)NULL,
};

/* 80498444-80498450 0001E8 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80496C20-80496DF4 000280 01D4+00 1/0 0/0 0/0 .text            CreateHeap__9daTbox2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTbox2_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/CreateHeap__9daTbox2_cFv.s"
}
#pragma pop

/* 80496DF4-80496E3C 000454 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80498450-8049847C 0001F4 002C+00 2/2 0/0 0/0 .data            __vt__9daTbox2_c */
SECTION_DATA extern void* __vt__9daTbox2_c[11] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__9daTbox2_cFv,
    (void*)Create__9daTbox2_cFv,
    (void*)Execute__9daTbox2_cFPPA3_A4_f,
    (void*)Draw__9daTbox2_cFv,
    (void*)Delete__9daTbox2_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
    (void*)checkSmallTbox__9daTbox2_cFv,
};

/* 80496E3C-80497080 00049C 0244+00 1/1 0/0 0/0 .text            create1st__9daTbox2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTbox2_c::create1st() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/create1st__9daTbox2_cFv.s"
}
#pragma pop

/* 80497080-804970F0 0006E0 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_AcchCir::~dBgS_AcchCir() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 804970F0-80497160 000750 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80497160-804971A8 0007C0 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 804971A8-804971F0 000808 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 804971F0-8049724C 000850 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804981D4-804981D8 000074 0004+00 1/1 0/0 0/0 .rodata          @4021 */
SECTION_RODATA static f32 const lit_4021 = -1.0f;
COMPILER_STRIP_GATE(0x804981D4, &lit_4021);

/* 8049724C-80497478 0008AC 022C+00 3/3 0/0 0/0 .text            demoProc__9daTbox2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTbox2_c::demoProc() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/demoProc__9daTbox2_cFv.s"
}
#pragma pop

/* 80497478-80497500 000AD8 0088+00 1/1 0/0 0/0 .text            openInit__9daTbox2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTbox2_c::openInit() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/openInit__9daTbox2_cFv.s"
}
#pragma pop

/* 80497500-804975EC 000B60 00EC+00 1/0 0/0 0/0 .text            Execute__9daTbox2_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTbox2_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/Execute__9daTbox2_cFPPA3_A4_f.s"
}
#pragma pop

/* 804975EC-80497678 000C4C 008C+00 1/1 0/0 0/0 .text            mode_proc_call__9daTbox2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTbox2_c::mode_proc_call() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/mode_proc_call__9daTbox2_cFv.s"
}
#pragma pop

/* 80497678-80497790 000CD8 0118+00 1/0 0/0 0/0 .text            mode_exec_wait__9daTbox2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTbox2_c::mode_exec_wait() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/mode_exec_wait__9daTbox2_cFv.s"
}
#pragma pop

/* 80497790-8049780C 000DF0 007C+00 2/1 0/0 0/0 .text            mode_exec__9daTbox2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTbox2_c::mode_exec() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/mode_exec__9daTbox2_cFv.s"
}
#pragma pop

/* 8049780C-804978C8 000E6C 00BC+00 1/1 0/0 0/0 .text            action__9daTbox2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTbox2_c::action() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/action__9daTbox2_cFv.s"
}
#pragma pop

/* 804978C8-804978D4 000F28 000C+00 1/1 0/0 0/0 .text            init_actionWait__9daTbox2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTbox2_c::init_actionWait() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/init_actionWait__9daTbox2_cFv.s"
}
#pragma pop

/* 804978D4-804978D8 000F34 0004+00 1/0 0/0 0/0 .text            actionWait__9daTbox2_cFv */
void daTbox2_c::actionWait() {
    /* empty function */
}

/* 804978D8-804978E4 000F38 000C+00 1/1 0/0 0/0 .text init_actionNotOpenDemo__9daTbox2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTbox2_c::init_actionNotOpenDemo() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/init_actionNotOpenDemo__9daTbox2_cFv.s"
}
#pragma pop

/* 804978E4-8049794C 000F44 0068+00 1/0 0/0 0/0 .text            actionNotOpenDemo__9daTbox2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTbox2_c::actionNotOpenDemo() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/actionNotOpenDemo__9daTbox2_cFv.s"
}
#pragma pop

/* 8049794C-80497958 000FAC 000C+00 1/1 0/0 0/0 .text            init_actionOpenDemo__9daTbox2_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTbox2_c::init_actionOpenDemo() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/init_actionOpenDemo__9daTbox2_cFv.s"
}
#pragma pop

/* 80497958-80497A0C 000FB8 00B4+00 1/0 0/0 0/0 .text            actionOpenDemo__9daTbox2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTbox2_c::actionOpenDemo() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/actionOpenDemo__9daTbox2_cFv.s"
}
#pragma pop

/* 80497A0C-80497A18 00106C 000C+00 3/3 0/0 0/0 .text            init_actionOpenWait__9daTbox2_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTbox2_c::init_actionOpenWait() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/init_actionOpenWait__9daTbox2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804981E0-804981E0 000080 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8049820B = "DEFAULT_TREASURE_SIMPLE";
SECTION_DEAD static char const* const stringBase_80498223 = "DEFAULT_TREASURE_NOTOPEN";
SECTION_DEAD static char const* const stringBase_8049823C = "DEFAULT_TREASURE_NORMAL";
#pragma pop

/* 80497A18-80497BD0 001078 01B8+00 1/0 0/0 0/0 .text            actionOpenWait__9daTbox2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTbox2_c::actionOpenWait() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/actionOpenWait__9daTbox2_cFv.s"
}
#pragma pop

/* 80497BD0-80497C60 001230 0090+00 1/1 0/0 0/0 .text            setGetDemoItem__9daTbox2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTbox2_c::setGetDemoItem() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/setGetDemoItem__9daTbox2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804981D8-804981DC 000078 0004+00 0/1 0/0 0/0 .rodata          @4266 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4266 = 22500.0f;
COMPILER_STRIP_GATE(0x804981D8, &lit_4266);
#pragma pop

/* 804981DC-804981E0 00007C 0004+00 0/1 0/0 0/0 .rodata          @4267 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4267 = 20.0f;
COMPILER_STRIP_GATE(0x804981DC, &lit_4267);
#pragma pop

/* 804981E0-804981E0 000080 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80498254 = "R_SP01";
#pragma pop

/* 80497C60-80497DA0 0012C0 0140+00 1/1 0/0 0/0 .text            boxCheck__9daTbox2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTbox2_c::boxCheck() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/boxCheck__9daTbox2_cFv.s"
}
#pragma pop

/* 80497DA0-80497E6C 001400 00CC+00 1/0 0/0 0/0 .text            Draw__9daTbox2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTbox2_c::Draw() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/Draw__9daTbox2_cFv.s"
}
#pragma pop

/* 80497E6C-80497ED8 0014CC 006C+00 1/0 0/0 0/0 .text            Delete__9daTbox2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTbox2_c::Delete() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/Delete__9daTbox2_cFv.s"
}
#pragma pop

/* 80497ED8-8049808C 001538 01B4+00 1/0 0/0 0/0 .text            daTbox2_create1st__FP9daTbox2_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTbox2_create1st(daTbox2_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/daTbox2_create1st__FP9daTbox2_c.s"
}
#pragma pop

/* 8049808C-804980AC 0016EC 0020+00 1/0 0/0 0/0 .text            daTbox2_MoveBGDelete__FP9daTbox2_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTbox2_MoveBGDelete(daTbox2_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/daTbox2_MoveBGDelete__FP9daTbox2_c.s"
}
#pragma pop

/* 804980AC-804980CC 00170C 0020+00 1/0 0/0 0/0 .text            daTbox2_MoveBGExecute__FP9daTbox2_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTbox2_MoveBGExecute(daTbox2_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/daTbox2_MoveBGExecute__FP9daTbox2_c.s"
}
#pragma pop

/* 804980CC-804980F8 00172C 002C+00 1/0 0/0 0/0 .text            daTbox2_MoveBGDraw__FP9daTbox2_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTbox2_MoveBGDraw(daTbox2_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/daTbox2_MoveBGDraw__FP9daTbox2_c.s"
}
#pragma pop

/* 804980F8-80498140 001758 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80498140-80498148 0017A0 0008+00 1/0 0/0 0/0 .text            checkSmallTbox__9daTbox2_cFv */
bool daTbox2_c::checkSmallTbox() {
    return true;
}

/* 80498148-80498150 0017A8 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80498148() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/func_80498148.s"
}
#pragma pop

/* 80498150-80498158 0017B0 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80498150() {
    nofralloc
#include "asm/rel/d/a/d_a_tbox2/d_a_tbox2/func_80498150.s"
}
#pragma pop

/* 804981E0-804981E0 000080 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
