//
// Generated By: dol2asm
// Translation Unit: utils/common/MWTrace
//

#include "TRK_MINNOW_DOLPHIN/utils/common/MWTrace.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void MWTRACE();

//
// External References:
//

//
// Declarations:
//

/* 80372C54-80372CA4 36D594 0050+00 0/0 22/22 0/0 .text            MWTRACE */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void MWTRACE() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/utils/common/MWTrace/MWTRACE.s"
}
#pragma pop
