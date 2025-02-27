//
// Generated By: dol2asm
// Translation Unit: OSTime
//

#include "dolphin/os/OSTime.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// External References:
//

extern "C" void OSDisableInterrupts();
extern "C" void OSRestoreInterrupts();
extern "C" void __div2i();
extern "C" void __mod2i();

//
// Declarations:
//

/* 803426FC-80342714 33D03C 0018+00 1/1 33/33 0/0 .text            OSGetTime */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm OSTime OSGetTime(void) {
    nofralloc
#include "asm/dolphin/os/OSTime/OSGetTime.s"
}
#pragma pop

/* 80342714-8034271C -00001 0008+00 0/0 0/0 0/0 .text            OSGetTick */
asm OSTick OSGetTick(void) {
    // clang-format off
	nofralloc
	mftb r3, 0x10c
	blr
    // clang-format on
}

/* 8034271C-80342780 33D05C 0064+00 0/0 16/16 0/0 .text            __OSGetSystemTime */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm OSTime __OSGetSystemTime(void) {
    nofralloc
#include "asm/dolphin/os/OSTime/__OSGetSystemTime.s"
}
#pragma pop

/* 80342780-803427D8 33D0C0 0058+00 0/0 1/1 0/0 .text            __OSTimeToSystemTime */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm OSTime __OSTimeToSystemTime(OSTime time) {
    nofralloc
#include "asm/dolphin/os/OSTime/__OSTimeToSystemTime.s"
}
#pragma pop

/* ############################################################################################## */
/* 803D1048-803D1078 02E168 0030+00 1/1 0/0 0/0 .data            YearDays */
SECTION_DATA static u8 YearDays[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x3B, 0x00, 0x00, 0x00, 0x5A,
    0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x97, 0x00, 0x00, 0x00, 0xB5, 0x00, 0x00, 0x00, 0xD4,
    0x00, 0x00, 0x00, 0xF3, 0x00, 0x00, 0x01, 0x11, 0x00, 0x00, 0x01, 0x30, 0x00, 0x00, 0x01, 0x4E,
};

/* 803D1078-803D10A8 02E198 0030+00 1/1 0/0 0/0 .data            LeapYearDays */
SECTION_DATA static u8 LeapYearDays[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x5B,
    0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0xB6, 0x00, 0x00, 0x00, 0xD5,
    0x00, 0x00, 0x00, 0xF4, 0x00, 0x00, 0x01, 0x12, 0x00, 0x00, 0x01, 0x31, 0x00, 0x00, 0x01, 0x4F,
};

/* 803427D8-80342974 33D118 019C+00 1/1 0/0 0/0 .text            GetDates */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GetDates(OSTime ticks, OSCalendarTime* ct) {
    nofralloc
#include "asm/dolphin/os/OSTime/GetDates.s"
}
#pragma pop

/* 80342974-80342B78 33D2B4 0204+00 0/0 4/4 0/0 .text            OSTicksToCalendarTime */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void OSTicksToCalendarTime(OSTime ticks, OSCalendarTime* ct) {
    nofralloc
#include "asm/dolphin/os/OSTime/OSTicksToCalendarTime.s"
}
#pragma pop
