#ifndef M_DO_M_DO_MTX_H
#define M_DO_M_DO_MTX_H

#include "SSystem/SComponent/c_sxyz.h"
#include "SSystem/SComponent/c_xyz.h"
#include "dolphin/mtx/mtx.h"
#include "dolphin/mtx/quat.h"
#include "dolphin/types.h"

void mDoMtx_XYZrotS(Mtx, s16, s16, s16);
void mDoMtx_XYZrotM(Mtx, s16, s16, s16);
void mDoMtx_ZXYrotS(Mtx, s16, s16, s16);
void mDoMtx_ZXYrotM(Mtx, s16, s16, s16);
void mDoMtx_ZrotS(Mtx, s16);
void mDoMtx_YrotS(Mtx, s16);
void mDoMtx_XrotS(Mtx, s16);
void mDoMtx_XrotM(Mtx mtx, s16 x);
void mDoMtx_YrotM(Mtx, s16);
void mDoMtx_MtxToRot(CMtxP, csXyz*);
void mDoMtx_lookAt(f32 (*param_0)[4], Vec const* param_1, Vec const* param_2, s16 param_3);
void mDoMtx_concatProjView(f32 const (*param_0)[4], f32 const (*param_1)[4], f32 (*param_2)[4]);

inline void mDoMtx_multVecSR(Mtx m, const Vec* src, Vec* dst) {
    PSMTXMultVecSR(m, src, dst);
}

class mDoMtx_stack_c {
public:
    /* 8000CCC8 */ static bool push();
    /* 8000CD14 */ static bool pop();
    /* 8000CD64 */ static void transS(cXyz const&);
    /* 8000CDD4 */ static void transM(cXyz const&);
    /* 8000CD9C */ static void transM(f32, f32, f32);
    /* 8000CE00 */ static void scaleS(cXyz const&);
    /* 8000CE70 */ static void scaleM(cXyz const&);
    /* 8000CE38 */ static void scaleM(f32, f32, f32);
    /* 8000CE9C */ static void XYZrotS(csXyz const&);
    /* 8000CED4 */ static void XYZrotM(csXyz const&);
    /* 8000CF0C */ static void ZXYrotS(csXyz const&);
    /* 8000CF44 */ static void ZXYrotM(csXyz const&);
    /* 8000CF7C */ static void quatM(Quaternion const*);
    /* 8000D070 */ ~mDoMtx_stack_c();  // inline

    static MtxP get() { return now; }
    static void transS(f32 x, f32 y, f32 z) { PSMTXTrans(now, x, y, z); }
    static void scaleS(f32 x, f32 y, f32 z) { PSMTXScale(now, x, y, z); }
    static void multVec(const Vec* a, Vec* b) { PSMTXMultVec(now, a, b); }
    static void XYZrotS(s16 x, s16 y, s16 z) { mDoMtx_XYZrotS(now, x, y, z); }
    static void XYZrotM(s16 x, s16 y, s16 z) { mDoMtx_XYZrotM(now, x, y, z); }
    static void ZXYrotS(s16 x, s16 y, s16 z) { mDoMtx_ZXYrotS(now, x, y, z); }
    static void ZXYrotM(s16 x, s16 y, s16 z) { mDoMtx_ZXYrotM(now, x, y, z); }
    static void YrotM(s16 y) { mDoMtx_YrotM(now, y); }
    static void YrotS(s16 y) { mDoMtx_YrotS(now, y); }
    static void XrotM(s16 x) { mDoMtx_XrotM(now, x); }
    static void inverse() { PSMTXInverse(now, now); }
    static void concat(const Mtx m) { PSMTXConcat(now, m, now); }
    static void copy(const Mtx m) { PSMTXCopy(m, now); }

    static Mtx now;
    static Mtx buffer[16];
    static Mtx* next;
    static Mtx* end;
};

extern Mtx g_mDoMtx_identity;

class mDoMtx_quatStack_c {
public:
    ~mDoMtx_quatStack_c();  // inline

    /* 0x000 */ mDoMtx_quatStack_c* field_0x0;
    /* 0x004 */ mDoMtx_quatStack_c* field_0x4;
    /* 0x008 */ u8 field_0x8[0xC];
    /* 0x014 */ mDoMtx_quatStack_c* field_0x14;
    /* 0x018 */ u8 field_0x18[0xFC];
    /* 0x114 */ mDoMtx_quatStack_c* field_0x114;
    /* 0x118 */ mDoMtx_quatStack_c* field_0x118;
};  // Size: 0x11C

inline void mDoMtx_multVecZero(MtxP param_0, Vec* param_1) {
    param_1->x = param_0[0][3];
    param_1->y = param_0[1][3];
    param_1->z = param_0[2][3];
}

#endif /* M_DO_M_DO_MTX_H */
