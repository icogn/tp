//
// Generated By: dol2asm
// Translation Unit: JASBasicWaveBank
//

#include "JSystem/JAudio2/JASBasicWaveBank.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JKRHeap {};

struct JASWaveInfo {
    static u32 one[1 + 1 /* padding */];
};

struct JASWaveHandle {
    /* 80298BD0 */ ~JASWaveHandle();
};

struct JASWaveBank {
    /* 80298B88 */ ~JASWaveBank();
};

struct JASWaveArc {
    /* 8029A13C */ JASWaveArc();
    /* 8029A1B4 */ ~JASWaveArc();
    /* 8029A664 */ void onDispose();
};

struct JASBasicWaveBank {
    struct TWaveHandle {
        /* 802985E4 */ ~TWaveHandle();
        /* 80298B64 */ void getWavePtr() const;
        /* 80298C18 */ TWaveHandle();
        /* 80298C64 */ void getWaveInfo() const;
    };

    struct TWaveGroup {
        /* 802989C0 */ TWaveGroup();
        /* 80298A0C */ ~TWaveGroup();
        /* 80298A84 */ void setWaveCount(u32, JKRHeap*);
        /* 80298B04 */ void onLoadDone();
        /* 80298B2C */ void onEraseDone();
        /* 80298B54 */ void getWaveID(int) const;
    };

    struct TGroupWaveInfo {
        /* 80298C4C */ TGroupWaveInfo();
    };

    /* 802984F8 */ JASBasicWaveBank();
    /* 80298558 */ ~JASBasicWaveBank();
    /* 80298640 */ void getWaveGroup(u32);
    /* 80298664 */ void setGroupCount(u32, JKRHeap*);
    /* 80298710 */ void setWaveTableSize(u32, JKRHeap*);
    /* 80298790 */ void incWaveTable(JASBasicWaveBank::TWaveGroup const*);
    /* 8029883C */ void decWaveTable(JASBasicWaveBank::TWaveGroup const*);
    /* 802988DC */ void getWaveHandle(u32) const;
    /* 80298910 */ void setWaveInfo(JASBasicWaveBank::TWaveGroup*, int, u16, JASWaveInfo const&);
    /* 80298C6C */ void getWaveArc(u32);
    /* 80298C8C */ void getArcCount() const;

    static u8 mNoLoad[4 + 4 /* padding */];
};

//
// Forward References:
//

extern "C" void __ct__16JASBasicWaveBankFv();
extern "C" void __dt__16JASBasicWaveBankFv();
extern "C" void __dt__Q216JASBasicWaveBank11TWaveHandleFv();
extern "C" void getWaveGroup__16JASBasicWaveBankFUl();
extern "C" void setGroupCount__16JASBasicWaveBankFUlP7JKRHeap();
extern "C" void setWaveTableSize__16JASBasicWaveBankFUlP7JKRHeap();
extern "C" void incWaveTable__16JASBasicWaveBankFPCQ216JASBasicWaveBank10TWaveGroup();
extern "C" void decWaveTable__16JASBasicWaveBankFPCQ216JASBasicWaveBank10TWaveGroup();
extern "C" void getWaveHandle__16JASBasicWaveBankCFUl();
extern "C" void
setWaveInfo__16JASBasicWaveBankFPQ216JASBasicWaveBank10TWaveGroupiUsRC11JASWaveInfo();
extern "C" void __ct__Q216JASBasicWaveBank10TWaveGroupFv();
extern "C" void __dt__Q216JASBasicWaveBank10TWaveGroupFv();
extern "C" void setWaveCount__Q216JASBasicWaveBank10TWaveGroupFUlP7JKRHeap();
extern "C" void onLoadDone__Q216JASBasicWaveBank10TWaveGroupFv();
extern "C" void onEraseDone__Q216JASBasicWaveBank10TWaveGroupFv();
extern "C" void getWaveID__Q216JASBasicWaveBank10TWaveGroupCFi();
extern "C" void getWavePtr__Q216JASBasicWaveBank11TWaveHandleCFv();
extern "C" void __dt__11JASWaveBankFv();
extern "C" void __dt__13JASWaveHandleFv();
extern "C" void __ct__Q216JASBasicWaveBank11TWaveHandleFv();
extern "C" void __ct__Q216JASBasicWaveBank14TGroupWaveInfoFv();
extern "C" void getWaveInfo__Q216JASBasicWaveBank11TWaveHandleCFv();
extern "C" void getWaveArc__16JASBasicWaveBankFUl();
extern "C" void getArcCount__16JASBasicWaveBankCFv();
extern "C" u8 mNoLoad__16JASBasicWaveBank[4 + 4 /* padding */];

//
// External References:
//

extern "C" void __ct__10JASWaveArcFv();
extern "C" void __dt__10JASWaveArcFv();
extern "C" void onDispose__10JASWaveArcFv();
extern "C" void* __nwa__FUlP7JKRHeapi();
extern "C" void __dl__FPv();
extern "C" void __dla__FPv();
extern "C" void OSInitMutex();
extern "C" void OSLockMutex();
extern "C" void OSUnlockMutex();
extern "C" void __destroy_new_array();
extern "C" void __construct_new_array();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_29();
extern "C" u32 one__11JASWaveInfo[1 + 1 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 803C7728-803C773C 024848 0014+00 2/2 0/0 0/0 .data __vt__Q216JASBasicWaveBank11TWaveHandle */
SECTION_DATA extern void* __vt__Q216JASBasicWaveBank11TWaveHandle[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__Q216JASBasicWaveBank11TWaveHandleFv,
    (void*)getWaveInfo__Q216JASBasicWaveBank11TWaveHandleCFv,
    (void*)getWavePtr__Q216JASBasicWaveBank11TWaveHandleCFv,
};

/* 803C773C-803C7754 02485C 0018+00 2/2 0/0 0/0 .data __vt__Q216JASBasicWaveBank10TWaveGroup */
SECTION_DATA extern void* __vt__Q216JASBasicWaveBank10TWaveGroup[6] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__Q216JASBasicWaveBank10TWaveGroupFv,
    (void*)onDispose__10JASWaveArcFv,
    (void*)onLoadDone__Q216JASBasicWaveBank10TWaveGroupFv,
    (void*)onEraseDone__Q216JASBasicWaveBank10TWaveGroupFv,
};

/* 803C7754-803C7768 024874 0014+00 3/3 2/2 0/0 .data            __vt__13JASWaveHandle */
SECTION_DATA extern void* __vt__13JASWaveHandle[5] = {
    (void*)NULL /* RTTI */, (void*)NULL, (void*)__dt__13JASWaveHandleFv, (void*)NULL, (void*)NULL,
};

/* 803C7768-803C7780 024888 0018+00 2/2 0/0 0/0 .data            __vt__16JASBasicWaveBank */
SECTION_DATA extern void* __vt__16JASBasicWaveBank[6] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16JASBasicWaveBankFv,
    (void*)getWaveHandle__16JASBasicWaveBankCFUl,
    (void*)getWaveArc__16JASBasicWaveBankFUl,
    (void*)getArcCount__16JASBasicWaveBankCFv,
};

/* 803C7780-803C7798 0248A0 0018+00 3/3 2/2 0/0 .data            __vt__11JASWaveBank */
SECTION_DATA extern void* __vt__11JASWaveBank[6] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__11JASWaveBankFv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 802984F8-80298558 292E38 0060+00 0/0 1/1 0/0 .text            __ct__16JASBasicWaveBankFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASBasicWaveBank::JASBasicWaveBank() {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/__ct__16JASBasicWaveBankFv.s"
}
#pragma pop

/* 80298558-802985E4 292E98 008C+00 1/0 0/0 0/0 .text            __dt__16JASBasicWaveBankFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASBasicWaveBank::~JASBasicWaveBank() {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/__dt__16JASBasicWaveBankFv.s"
}
#pragma pop

/* 802985E4-80298640 292F24 005C+00 3/2 0/0 0/0 .text __dt__Q216JASBasicWaveBank11TWaveHandleFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASBasicWaveBank::TWaveHandle::~TWaveHandle() {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/__dt__Q216JASBasicWaveBank11TWaveHandleFv.s"
}
#pragma pop

/* 80298640-80298664 292F80 0024+00 1/1 1/1 0/0 .text            getWaveGroup__16JASBasicWaveBankFUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::getWaveGroup(u32 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/getWaveGroup__16JASBasicWaveBankFUl.s"
}
#pragma pop

/* 80298664-80298710 292FA4 00AC+00 0/0 1/1 0/0 .text
 * setGroupCount__16JASBasicWaveBankFUlP7JKRHeap                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::setGroupCount(u32 param_0, JKRHeap* param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/setGroupCount__16JASBasicWaveBankFUlP7JKRHeap.s"
}
#pragma pop

/* 80298710-80298790 293050 0080+00 0/0 1/1 0/0 .text
 * setWaveTableSize__16JASBasicWaveBankFUlP7JKRHeap             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::setWaveTableSize(u32 param_0, JKRHeap* param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/setWaveTableSize__16JASBasicWaveBankFUlP7JKRHeap.s"
}
#pragma pop

/* 80298790-8029883C 2930D0 00AC+00 1/1 0/0 0/0 .text
 * incWaveTable__16JASBasicWaveBankFPCQ216JASBasicWaveBank10TWaveGroup */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::incWaveTable(JASBasicWaveBank::TWaveGroup const* param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/incWaveTable__16JASBasicWaveBankFPCQ216JASBasicWaveBank10TWaveGroup.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451278-80451280 000778 0004+04 2/2 0/0 0/0 .sbss            mNoLoad__16JASBasicWaveBank */
u8 JASBasicWaveBank::mNoLoad[4 + 4 /* padding */];

/* 8029883C-802988DC 29317C 00A0+00 1/1 0/0 0/0 .text
 * decWaveTable__16JASBasicWaveBankFPCQ216JASBasicWaveBank10TWaveGroup */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::decWaveTable(JASBasicWaveBank::TWaveGroup const* param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/decWaveTable__16JASBasicWaveBankFPCQ216JASBasicWaveBank10TWaveGroup.s"
}
#pragma pop

/* 802988DC-80298910 29321C 0034+00 1/0 0/0 0/0 .text getWaveHandle__16JASBasicWaveBankCFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::getWaveHandle(u32 param_0) const {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/getWaveHandle__16JASBasicWaveBankCFUl.s"
}
#pragma pop

/* 80298910-802989C0 293250 00B0+00 0/0 1/1 0/0 .text
 * setWaveInfo__16JASBasicWaveBankFPQ216JASBasicWaveBank10TWaveGroupiUsRC11JASWaveInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::setWaveInfo(JASBasicWaveBank::TWaveGroup* param_0, int param_1,
                                       u16 param_2, JASWaveInfo const& param_3) {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/func_80298910.s"
}
#pragma pop

/* 802989C0-80298A0C 293300 004C+00 1/1 0/0 0/0 .text __ct__Q216JASBasicWaveBank10TWaveGroupFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASBasicWaveBank::TWaveGroup::TWaveGroup() {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/__ct__Q216JASBasicWaveBank10TWaveGroupFv.s"
}
#pragma pop

/* 80298A0C-80298A84 29334C 0078+00 3/2 0/0 0/0 .text __dt__Q216JASBasicWaveBank10TWaveGroupFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASBasicWaveBank::TWaveGroup::~TWaveGroup() {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/__dt__Q216JASBasicWaveBank10TWaveGroupFv.s"
}
#pragma pop

/* 80298A84-80298B04 2933C4 0080+00 0/0 1/1 0/0 .text
 * setWaveCount__Q216JASBasicWaveBank10TWaveGroupFUlP7JKRHeap   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::TWaveGroup::setWaveCount(u32 param_0, JKRHeap* param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/setWaveCount__Q216JASBasicWaveBank10TWaveGroupFUlP7JKRHeap.s"
}
#pragma pop

/* 80298B04-80298B2C 293444 0028+00 1/0 0/0 0/0 .text
 * onLoadDone__Q216JASBasicWaveBank10TWaveGroupFv               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::TWaveGroup::onLoadDone() {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/onLoadDone__Q216JASBasicWaveBank10TWaveGroupFv.s"
}
#pragma pop

/* 80298B2C-80298B54 29346C 0028+00 1/0 0/0 0/0 .text
 * onEraseDone__Q216JASBasicWaveBank10TWaveGroupFv              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::TWaveGroup::onEraseDone() {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/onEraseDone__Q216JASBasicWaveBank10TWaveGroupFv.s"
}
#pragma pop

/* 80298B54-80298B64 293494 0010+00 2/2 0/0 0/0 .text
 * getWaveID__Q216JASBasicWaveBank10TWaveGroupCFi               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::TWaveGroup::getWaveID(int param_0) const {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/getWaveID__Q216JASBasicWaveBank10TWaveGroupCFi.s"
}
#pragma pop

/* 80298B64-80298B88 2934A4 0024+00 1/0 0/0 0/0 .text
 * getWavePtr__Q216JASBasicWaveBank11TWaveHandleCFv             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::TWaveHandle::getWavePtr() const {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/getWavePtr__Q216JASBasicWaveBank11TWaveHandleCFv.s"
}
#pragma pop

/* 80298B88-80298BD0 2934C8 0048+00 1/0 0/0 0/0 .text            __dt__11JASWaveBankFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASWaveBank::~JASWaveBank() {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/__dt__11JASWaveBankFv.s"
}
#pragma pop

/* 80298BD0-80298C18 293510 0048+00 1/0 0/0 0/0 .text            __dt__13JASWaveHandleFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASWaveHandle::~JASWaveHandle() {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/__dt__13JASWaveHandleFv.s"
}
#pragma pop

/* 80298C18-80298C4C 293558 0034+00 1/1 0/0 0/0 .text __ct__Q216JASBasicWaveBank11TWaveHandleFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASBasicWaveBank::TWaveHandle::TWaveHandle() {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/__ct__Q216JASBasicWaveBank11TWaveHandleFv.s"
}
#pragma pop

/* 80298C4C-80298C64 29358C 0018+00 1/1 0/0 0/0 .text __ct__Q216JASBasicWaveBank14TGroupWaveInfoFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASBasicWaveBank::TGroupWaveInfo::TGroupWaveInfo() {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/__ct__Q216JASBasicWaveBank14TGroupWaveInfoFv.s"
}
#pragma pop

/* 80298C64-80298C6C 2935A4 0008+00 1/0 0/0 0/0 .text
 * getWaveInfo__Q216JASBasicWaveBank11TWaveHandleCFv            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::TWaveHandle::getWaveInfo() const {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/getWaveInfo__Q216JASBasicWaveBank11TWaveHandleCFv.s"
}
#pragma pop

/* 80298C6C-80298C8C 2935AC 0020+00 1/0 0/0 0/0 .text            getWaveArc__16JASBasicWaveBankFUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::getWaveArc(u32 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/getWaveArc__16JASBasicWaveBankFUl.s"
}
#pragma pop

/* 80298C8C-80298C94 2935CC 0008+00 1/0 0/0 0/0 .text            getArcCount__16JASBasicWaveBankCFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::getArcCount() const {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/getArcCount__16JASBasicWaveBankCFv.s"
}
#pragma pop
