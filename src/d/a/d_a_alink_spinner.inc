#include "rel/d/a/d_a_spinner/d_a_spinner.h"

/* 8010D93C-8010D94C 10827C 0010+00 0/0 0/0 1/1 .text            getSpinnerGravity__9daAlink_cCFv */
f32 daAlink_c::getSpinnerGravity() const {
    return daAlinkHIO_spinner_c0::m.mGravity;
}

/* 8010D94C-8010D95C 10828C 0010+00 0/0 0/0 1/1 .text getSpinnerMaxFallSpeed__9daAlink_cCFv */
f32 daAlink_c::getSpinnerMaxFallSpeed() const {
    return daAlinkHIO_spinner_c0::m.mMaxFallSpeed;
}

/* 8010D95C-8010D96C 10829C 0010+00 0/0 0/0 1/1 .text            getSpinnerJumpRate__9daAlink_cCFv
 */
f32 daAlink_c::getSpinnerJumpRate() const {
    return daAlinkHIO_spinner_c0::m.mJumpRate;
}

/* 8010D96C-8010D9B0 1082AC 0044+00 1/1 0/0 2/2 .text getSpinnerRideMoveTime__9daAlink_cFv */
s16 daAlink_c::getSpinnerRideMoveTime() {
    if (checkLv4BossRoom()) {
        return daAlinkHIO_spinner_c0::m.mBossRideMoveTime;
    }

    return daAlinkHIO_spinner_c0::m.mRideMoveTime;
}

/* 8010D9B0-8010D9F4 1082F0 0044+00 1/1 0/0 3/3 .text            getSpinnerRideSpeedF__9daAlink_cFv
 */
f32 daAlink_c::getSpinnerRideSpeedF() {
    if (checkLv4BossRoom()) {
        return daAlinkHIO_spinner_c0::m.mBossRideSpeed;
    }

    return daAlinkHIO_spinner_c0::m.mRideSpeed;
}

/* 8010D9F4-8010DA04 108334 0010+00 0/0 0/0 1/1 .text getSpinnerRideDecSpeedMax__9daAlink_cCFv */
f32 daAlink_c::getSpinnerRideDecSpeedMax() const {
    return daAlinkHIO_spinner_c0::m.mDecelSpeedMax;
}

/* 8010DA04-8010DA14 108344 0010+00 0/0 0/0 1/1 .text getSpinnerRideDecSpeedMin__9daAlink_cCFv */
f32 daAlink_c::getSpinnerRideDecSpeedMin() const {
    return daAlinkHIO_spinner_c0::m.mDecelSpeedMin;
}

/* 8010DA14-8010DA24 108354 0010+00 0/0 0/0 1/1 .text getSpinnerRideDecSpeedRate__9daAlink_cCFv */
f32 daAlink_c::getSpinnerRideDecSpeedRate() const {
    return daAlinkHIO_spinner_c0::m.mDecelRate;
}

/* 8010DA24-8010DA34 108364 0010+00 0/0 0/0 1/1 .text getSpinnerRideRotAngleMax__9daAlink_cCFv */
s16 daAlink_c::getSpinnerRideRotAngleMax() const {
    return daAlinkHIO_spinner_c0::m.mRideRotAngleMax;
}

/* 8010DA34-8010DA44 108374 0010+00 0/0 0/0 1/1 .text getSpinnerRideRotAngleMin__9daAlink_cCFv */
s16 daAlink_c::getSpinnerRideRotAngleMin() const {
    return daAlinkHIO_spinner_c0::m.mRideRotAngleMin;
}

/* 8010DA44-8010DA98 108384 0054+00 1/0 0/0 0/0 .text onSpinnerPathForceRemove__9daAlink_cFv */
void daAlink_c::onSpinnerPathForceRemove() {
    if (checkSpinnerRide() && mRideAcKeep.getActor() != NULL) {
        ((daSpinner_c*)mRideAcKeep.getActor())->onPathForceRemove();
    }
}

/* 8010DA98-8010DAFC 1083D8 0064+00 1/0 0/0 0/0 .text            checkSpinnerPathMove__9daAlink_cFv
 */
bool daAlink_c::checkSpinnerPathMove() {
    if (checkSpinnerRide() && mRideAcKeep.getActor() != NULL) {
        if (((daSpinner_c*)mRideAcKeep.getActor())->checkPathMoveNow() != NULL) {
            return true;
        }
    }

    return false;
}

/* 8010DAFC-8010DB28 10843C 002C+00 2/2 0/0 0/0 .text            checkLv4BossRoom__9daAlink_cFv */
bool daAlink_c::checkLv4BossRoom() {
    return checkStageName("D_MN10A");
}

/* 8010DB28-8010DBC8 108468 00A0+00 1/0 0/0 0/0 .text checkSpinnerTriggerAttack__9daAlink_cFv */
// matches with literals
#ifdef NONMATCHING
bool daAlink_c::checkSpinnerTriggerAttack() {
    if (checkSpinnerRide() && mRideAcKeep.getActor() != NULL) {
        if (((daSpinner_c*)mRideAcKeep.getActor())->reflectAccept()) {
            return true;
        }
    }

    return false;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool daAlink_c::checkSpinnerTriggerAttack() {
    nofralloc
#include "asm/d/a/d_a_alink/checkSpinnerTriggerAttack__9daAlink_cFv.s"
}
#pragma pop
#endif

/* 8010DBC8-8010DC64 108508 009C+00 2/2 0/0 0/0 .text            setSpinnerSyncPos__9daAlink_cFv */
void daAlink_c::setSpinnerSyncPos() {
    daSpinner_c* spinner = (daSpinner_c*)mRideAcKeep.getActor();

    mDoMtx_multVecZero(spinner->getModelMtx(), &current.pos);
    mDoMtx_stack_c::ZXYrotS(spinner->mCollisionRot);
    mDoMtx_stack_c::YrotM(mCollisionRot.y - spinner->mCollisionRot.y);
    mDoMtx_MtxToRot(mDoMtx_stack_c::get(), &mCollisionRot);
    field_0x37a4 = spinner->current.pos;
}

/* 8010DC64-8010DDCC 1085A4 0168+00 1/1 0/0 0/0 .text            procSpinnerReadyInit__9daAlink_cFv
 */
// matches with literals
#ifdef NONMATCHING
int daAlink_c::procSpinnerReadyInit() {
    fopAc_ac_c* spinner = (fopAc_ac_c*)fopAcM_fastCreate(
        PROC_SPINNER, daSpinner_c::getWaitArg(), &current.pos, fopAcM_GetRoomNo(this),
        &mCollisionRot, NULL, -1, NULL, NULL);

    if (spinner == NULL) {
        return 0;
    }

    commonProcInit(PROC_SPINNER_READY);
    mRideAcKeep.setData(spinner);
    setSingleAnime(ANM_BOARD_SPINNER, daAlinkHIO_smallJump_c0::m.mSmallJumpAnm.mRate, 6.0f,
                   daAlinkHIO_smallJump_c0::m.mSmallJumpAnm.mEndF,
                   daAlinkHIO_smallJump_c0::m.mSmallJumpAnm.mInterpolation);
    mNormalSpeed = 0.0f;
    setHeavyBoots(0);

    mSpeed.y = 26.0f;
    voiceStart(Z2SE_AL_V_JUMP_S);
    seStartOnlyReverb(Z2SE_AL_SPINNER_START);

    field_0x2f99 = 15;
    deleteEquipItem(TRUE, TRUE);

    current.angle.y = mCollisionRot.y;
    field_0x3588 = l_waitBaseAnime;
    field_0x33b0 = field_0x3588.y;
    field_0x34d4 = l_waitBaseAnime;
    mCommonCounter = 8;

    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daAlink_c::procSpinnerReadyInit() {
    nofralloc
#include "asm/d/a/d_a_alink/procSpinnerReadyInit__9daAlink_cFv.s"
}
#pragma pop
#endif

/* 8010DDCC-8010DE64 10870C 0098+00 1/0 0/0 0/0 .text            procSpinnerReady__9daAlink_cFv */
int daAlink_c::procSpinnerReady() {
    daSpinner_c* spinner = (daSpinner_c*)mRideAcKeep.getActor();

    if (spinner == NULL) {
        return checkNextAction(0);
    }

    current.pos.x = spinner->current.pos.x;
    current.pos.z = spinner->current.pos.z;

    mCommonCounter--;
    field_0x2f99 = 15;

    if ((mCommonCounter < 0 && current.pos.y <= spinner->getModelMtx()[1][3]) ||
        mCommonCounter < -30) {
        current.pos.y = spinner->getModelMtx()[1][3];
        procSpinnerWaitInit();
    }

    return 1;
}

/* 8010DE64-8010DE78 1087A4 0014+00 1/1 0/0 0/0 .text            setSpinnerStatus__9daAlink_cFUcUc
 */
void daAlink_c::setSpinnerStatus(u8 status, u8 flag) {
    dComIfGp_setDoStatus(status, flag);
}

/* 8010DE78-8010DF4C 1087B8 00D4+00 2/2 0/0 0/0 .text            procSpinnerWaitInit__9daAlink_cFv
 */
// matches with literals
#ifdef NONMATCHING
int daAlink_c::procSpinnerWaitInit() {
    if (!commonProcInitNotSameProc(PROC_SPINNER_WAIT)) {
        return 0;
    }

    mRideStatus = 5;
    setBgCheckParam();
    setSingleAnimeBaseSpeed(ANM_SPINNER_RIDE, daAlinkHIO_board_c0::m.mSitAnmSpeed, 4.0f);
    mSpeed.y = 0.0f;
    setSpecialGravity(0.0f, mMaxFallSpeed, 0);
    mNormalSpeed = 0.0f;
    mCommonCounter = 0;

    field_0x300e = mCollisionRot.y;
    field_0x3010 = 0;
    field_0x3198 = ANM_SPINNER_RIDE;
    field_0x33b0 = 70.0f;
    field_0x3012 = 0;
    field_0x37a4 = mRideAcKeep.getActor()->current.pos;

    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daAlink_c::procSpinnerWaitInit() {
    nofralloc
#include "asm/d/a/d_a_alink/procSpinnerWaitInit__9daAlink_cFv.s"
}
#pragma pop
#endif

/* 8010DF4C-8010E48C 10888C 0540+00 1/0 0/0 0/0 .text            procSpinnerWait__9daAlink_cFv */
// matches with literals
#ifdef NONMATCHING
int daAlink_c::procSpinnerWait() {
    daSpinner_c* spinner = (daSpinner_c*)mRideAcKeep.getActor();

    if (spinner == NULL || spinner->getDeleteFlg() || checkWindSpeedOnXZ() ||
        i_checkEndResetFlg1(ERFLG1_UNK_1) || i_checkEndResetFlg0(ERFLG0_UNK_2)) {
        mNormalSpeed = 0.0f;
        setJumpMode();
        return procFallInit(1, daAlinkHIO_autoJump_c0::m.mFallInterpolation);
    }

    if (spinner->checkSpinnerTagEnd()) {
        return procSmallJumpInit(2);
    }

    int itemSetBtn = checkItemSetButton(SPINNER);
    if (mCommonCounter == 0) {
        if (!itemButton()) {
            mCommonCounter = 1;
            mNormalSpeed = getSpinnerRideSpeedF();
            spinner->setMove(mNormalSpeed, getSpinnerRideMoveTime());
        } else if (checkInputOnR()) {
            int direction = getDirectionFromAngle(mStickAngle);
            s16 angle = field_0x33ac * 384.0f * field_0x33ac;

            if (direction == DIR_LEFT) {
                mCollisionRot.y += angle;
            } else if (direction == DIR_RIGHT) {
                mCollisionRot.y -= angle;
            }

            current.angle.y = mCollisionRot.y;
            field_0x300e = mCollisionRot.y;
        }
    } else {
        if (checkSetItemTrigger(SPINNER) || swordSwingTrigger() || itemSetBtn == 2) {
            if (swordSwingTrigger()) {
                swordEquip(0);
            }
            setJumpMode();
            mNormalSpeed = 0.0f;
            return procFallInit(1, daAlinkHIO_autoJump_c0::m.mFallInterpolation);
        }

        daPy_frameCtrl_c* frameCtrl = mFrameCtrl1;
        dMeter2Info_onDirectUseItem(itemSetBtn);

        if (spinner->checkPathMoveNow() == NULL) {
            seStartOnlyReverbLevel(Z2SE_AL_SPINNER_RIDE);
            setSpinnerStatus(ACTION_STR_ATTACK, ACTION_FLG_DEFAULT);
        } else {
            seStartOnlyReverbLevel(Z2SE_AL_SPINNER_RAIL);
            setSpinnerStatus(ACTION_STR_JUMP2, ACTION_FLG_DEFAULT);
        }

        mNormalSpeed = spinner->mSpeedF;
        current.angle.y = spinner->current.angle.y;

        if (spinner->checkSpinnerTagIntoIncRot()) {
            field_0x3012 = 1;
            setSpinnerStatus(ACTION_STR_SPIN, ACTION_FLG_CONTINUATION);

            if (field_0x3198 != ANM_SPINNER_PUSH && field_0x2060->getOldFrameRate() < 0.01f) {
                setSingleAnimeBaseSpeed(ANM_SPINNER_RIDE, daAlinkHIO_board_c0::m.mSitAnmSpeed,
                                        daAlinkHIO_board_c0::m.mFastPushInterpolation);
                field_0x3198 = ANM_SPINNER_PUSH;
                fopAcM_seStartCurrent(spinner, Z2SE_OBJ_SPNR_SW_PUSH, 0);
            }
        } else if (spinner->checkSpinnerTagInto()) {
            if (field_0x3012 != 0) {
                setSpinnerStatus(ACTION_STR_SPIN, ACTION_FLG_CONTINUATION);
            } else {
                setSpinnerStatus(ACTION_STR_SPIN, ACTION_FLG_DEFAULT);
            }

            if ((field_0x3198 == ANM_SPINNER_PUSH && field_0x2060->getOldFrameRate() < 0.01f) ||
                (field_0x3198 != ANM_SPINNER_PUSH && field_0x3198 != ANM_SPINNER_STAND)) {
                setSingleAnimeBaseSpeed(ANM_SPINNER_STAND, daAlinkHIO_board_c0::m.mStandAnmSpeed,
                                        daAlinkHIO_board_c0::m.mStandInterpolation);
                field_0x3198 = ANM_SPINNER_STAND;
            }
        } else if (spinner->getButtonJump() && field_0x3198 != ANM_SPINNER_ATTACK) {
            field_0x3198 = ANM_SPINNER_ATTACK;
            setSingleAnime(ANM_SPINNER_ATTACK, 0.0f, daAlinkHIO_board_c0::m.mAirborneAnm.mStart,
                           daAlinkHIO_board_c0::m.mAirborneAnm.mEndF,
                           daAlinkHIO_board_c0::m.mAirborneAnm.mInterpolation);
            field_0x3010 = 0;
        } else if (field_0x3198 == ANM_SPINNER_ATTACK) {
            if (!spinner->getJumpFlg()) {
                setSingleAnime(ANM_SPINNER_ATTACK_LAND, daAlinkHIO_board_c0::m.mLandAnm.mRate,
                               daAlinkHIO_board_c0::m.mLandAnm.mStart, 16,
                               daAlinkHIO_board_c0::m.mLandAnm.mInterpolation);
                field_0x3198 = ANM_SPINNER_ATTACK_LAND;
            } else if (field_0x3010 == 0 && field_0x2060->getOldFrameRate() < 0.01f) {
                setSingleAnime(ANM_SPINNER_ATTACK, daAlinkHIO_board_c0::m.mAirborneAnm.mRate,
                               daAlinkHIO_board_c0::m.mAirborneAnm.mStart,
                               daAlinkHIO_board_c0::m.mAirborneAnm.mEndF, -1.0f);
                field_0x3010 = 1;
            }
        } else if ((field_0x3198 == ANM_SPINNER_ATTACK_LAND && frameCtrl->checkAnmEnd()) ||
                   (field_0x3198 != ANM_SPINNER_ATTACK_LAND && field_0x3198 != ANM_SPINNER_RIDE)) {
            setSingleAnimeBaseSpeed(ANM_SPINNER_RIDE, daAlinkHIO_board_c0::m.mSitAnmSpeed,
                                    daAlinkHIO_board_c0::m.mSitInterpolation);
            field_0x3198 = ANM_SPINNER_RIDE;
        }
    }

    setSpinnerSyncPos();
    mCollisionRot.y = field_0x300e;

    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daAlink_c::procSpinnerWait() {
    nofralloc
#include "asm/d/a/d_a_alink/procSpinnerWait__9daAlink_cFv.s"
}
#pragma pop
#endif