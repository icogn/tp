/* 800E23FC-800E243C 0DCD3C 0040+00 6/6 0/0 0/0 .text            concatMagneBootMtx__9daAlink_cFv */
void daAlink_c::concatMagneBootMtx() {
    if (i_checkMagneBootsOn()) {
        mDoMtx_stack_c::concat(mMagneBootMtx);
    }
}

/* 800E243C-800E247C 0DCD7C 0040+00 1/1 0/0 0/0 .text            concatMagneBootInvMtx__9daAlink_cFv
 */
void daAlink_c::concatMagneBootInvMtx() {
    if (i_checkMagneBootsOn()) {
        mDoMtx_stack_c::concat(mMagneBootInvMtx);
    }
}

/* 800E247C-800E24B0 0DCDBC 0034+00 8/8 0/0 0/0 .text multVecMagneBootInvMtx__9daAlink_cFP4cXyz */
void daAlink_c::multVecMagneBootInvMtx(cXyz* vec) {
    if (i_checkMagneBootsOn()) {
        mDoMtx_multVecSR(mMagneBootInvMtx, vec, vec);
    }
}

/* 800E24B0-800E251C 0DCDF0 006C+00 2/2 0/0 0/0 .text
 * commonMagneLineCheck__9daAlink_cFP4cXyzP4cXyz                */
int daAlink_c::commonMagneLineCheck(cXyz* param_0, cXyz* param_1) {
    mMagneLineChk.Set(param_0, param_1, this);

    if (dComIfG_Bgsp().LineCross(&mMagneLineChk) && daTagMagne_c::checkMagnetCode(mMagneLineChk)) {
        return 1;
    }

    return 0;
}

/* 800E251C-800E2580 0DCE5C 0064+00 2/2 0/0 0/0 .text            checkBootsMoveAnime__9daAlink_cFi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAlink_c::checkBootsMoveAnime(int param_0) {
    nofralloc
#include "asm/d/a/d_a_alink/checkBootsMoveAnime__9daAlink_cFi.s"
}
#pragma pop

/* 800E2580-800E2738 0DCEC0 01B8+00 17/17 0/0 0/0 .text            setHeavyBoots__9daAlink_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAlink_c::setHeavyBoots(int param_0) {
    nofralloc
#include "asm/d/a/d_a_alink/setHeavyBoots__9daAlink_cFi.s"
}
#pragma pop

/* 800E2738-800E2808 0DD078 00D0+00 2/2 0/0 0/0 .text getMagneBootsLocalAngleY__9daAlink_cFsi */
// matches with literals
#ifdef NONMATCHING
s16 daAlink_c::getMagneBootsLocalAngleY(s16 param_0, int param_1) {
    if (param_1 == 1 || (param_1 != 2 && field_0x3114 <= 0x4000 && field_0x3114 != -0x8000)) {
        return param_0;
    }

    cXyz vec(cM_ssin(param_0), 0.0f, cM_scos(param_0));
    mDoMtx_stack_c::YrotS(field_0x3116);
    mDoMtx_stack_c::XrotM(-0x8000);
    mDoMtx_stack_c::YrotM(-field_0x3116);
    mDoMtx_stack_c::multVec(&vec, &vec);

    return vec.atan2sX_Z();
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm s16 daAlink_c::getMagneBootsLocalAngleY(s16 param_0, int param_1) {
    nofralloc
#include "asm/d/a/d_a_alink/getMagneBootsLocalAngleY__9daAlink_cFsi.s"
}
#pragma pop
#endif

/* 800E2808-800E2DC4 0DD148 05BC+00 3/3 0/0 0/0 .text
 * setMagneBootsMtx__9daAlink_cFP13cBgS_PolyInfoi               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAlink_c::setMagneBootsMtx(cBgS_PolyInfo* param_0, int param_1) {
    nofralloc
#include "asm/d/a/d_a_alink/setMagneBootsMtx__9daAlink_cFP13cBgS_PolyInfoi.s"
}
#pragma pop

/* 800E2DC4-800E2F88 0DD704 01C4+00 7/7 0/0 0/0 .text            cancelMagneBootsOn__9daAlink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAlink_c::cancelMagneBootsOn() {
    nofralloc
#include "asm/d/a/d_a_alink/cancelMagneBootsOn__9daAlink_cFv.s"
}
#pragma pop

/* 800E2F88-800E3048 0DD8C8 00C0+00 1/1 0/0 0/0 .text            checkMagneBootsFly__9daAlink_cFv */
int daAlink_c::checkMagneBootsFly() {
    if (field_0x2fb8 != 0 && i_checkEquipHeavyBoots() && !checkDeadHP() && mProcID != PROC_MAGNE_BOOTS_FLY && !checkEventRun()) {
        cXyz vec(field_0x369c);
        vec.normalizeZP();
        
        if (mMagneBootsTopVec.getDotProduct(vec) > lit_8131 && procMagneBootsFlyInit()) {
            return 1;
        }
    }

    return 0;
}

/* 800E3048-800E30DC 0DD988 0094+00 2/2 0/0 0/0 .text            procBootsEquipInit__9daAlink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAlink_c::procBootsEquipInit() {
    nofralloc
#include "asm/d/a/d_a_alink/procBootsEquipInit__9daAlink_cFv.s"
}
#pragma pop

/* 800E30DC-800E3218 0DDA1C 013C+00 1/0 0/0 0/0 .text            procBootsEquip__9daAlink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAlink_c::procBootsEquip() {
    nofralloc
#include "asm/d/a/d_a_alink/procBootsEquip__9daAlink_cFv.s"
}
#pragma pop

/* 800E3218-800E3454 0DDB58 023C+00 1/1 0/0 0/0 .text            procMagneBootsFlyInit__9daAlink_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daAlink_c::procMagneBootsFlyInit() {
    nofralloc
#include "asm/d/a/d_a_alink/procMagneBootsFlyInit__9daAlink_cFv.s"
}
#pragma pop

/* 800E3454-800E3760 0DDD94 030C+00 1/0 0/0 0/0 .text            procMagneBootsFly__9daAlink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAlink_c::procMagneBootsFly() {
    nofralloc
#include "asm/d/a/d_a_alink/procMagneBootsFly__9daAlink_cFv.s"
}
#pragma pop