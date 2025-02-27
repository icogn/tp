//
// Generated By: dol2asm
// Translation Unit: JKRSolidHeap
//

#include "JSystem/JKernel/JKRSolidHeap.h"
#include "JSystem/JUtility/JUTAssert.h"
#include "MSL_C/math.h"
#include "dol2asm.h"
#include "global.h"

//
// Forward References:
//

extern "C" void create__12JKRSolidHeapFUlP7JKRHeapb();
extern "C" void do_destroy__12JKRSolidHeapFv();
extern "C" void __ct__12JKRSolidHeapFPvUlP7JKRHeapb();
extern "C" void __dt__12JKRSolidHeapFv();
extern "C" void adjustSize__12JKRSolidHeapFv();
extern "C" void do_alloc__12JKRSolidHeapFUli();
extern "C" void allocFromHead__12JKRSolidHeapFUli();
extern "C" void allocFromTail__12JKRSolidHeapFUli();
extern "C" void do_free__12JKRSolidHeapFPv();
extern "C" void do_freeAll__12JKRSolidHeapFv();
extern "C" void do_freeTail__12JKRSolidHeapFv();
extern "C" void do_fillFreeArea__12JKRSolidHeapFv();
extern "C" void do_resize__12JKRSolidHeapFPvUl();
extern "C" void do_getSize__12JKRSolidHeapFPv();
extern "C" void check__12JKRSolidHeapFv();
extern "C" void dump__12JKRSolidHeapFv();
extern "C" void state_register__12JKRSolidHeapCFPQ27JKRHeap6TStateUl();
extern "C" void state_compare__12JKRSolidHeapCFRCQ27JKRHeap6TStateRCQ27JKRHeap6TState();
extern "C" void getHeapType__12JKRSolidHeapFv();
extern "C" void do_getFreeSize__12JKRSolidHeapFv();
extern "C" void do_getMaxFreeBlock__12JKRSolidHeapFv();
extern "C" void do_getTotalFreeSize__12JKRSolidHeapFv();
extern "C" extern char const* const JKRSolidHeap__stringBase0;

//
// External References:
//

extern "C" bool dump_sort__7JKRHeapFv();
extern "C" void __ct__7JKRHeapFPvUlP7JKRHeapb();
extern "C" void __dt__7JKRHeapFv();
extern "C" void alloc__7JKRHeapFUliP7JKRHeap();
extern "C" void free__7JKRHeapFPvP7JKRHeap();
extern "C" void callAllDisposer__7JKRHeapFv();
extern "C" void resize__7JKRHeapFPvUl();
extern "C" void getFreeSize__7JKRHeapFv();
extern "C" void getTotalFreeSize__7JKRHeapFv();
extern "C" void getMaxAllocatableSize__7JKRHeapFi();
extern "C" void dispose__7JKRHeapFPvPv();
extern "C" void dispose__7JKRHeapFv();
extern "C" void __dl__FPv();
extern "C" void state_dump__7JKRHeapCFRCQ27JKRHeap6TState();
extern "C" bool do_changeGroupID__7JKRHeapFUc();
extern "C" bool do_getCurrentGroupId__7JKRHeapFv();
extern "C" void JUTReportConsole_f(const char*, ...);
extern "C" void JUTWarningConsole_f(const char*, ...);
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" u8 sRootHeap__7JKRHeap[4];
extern "C" u8 mErrorHandler__7JKRHeap[4];

//
// Declarations:
//

/* 802D0A24-802D0AD0 2CB364 00AC+00 0/0 4/4 1/1 .text            create__12JKRSolidHeapFUlP7JKRHeapb
 */
JKRSolidHeap* JKRSolidHeap::create(u32 size, JKRHeap* heap, bool useErrorHandler) {
    if (!heap) {
        heap = getRootHeap();
    }

    if (size == 0xffffffff) {
        size = heap->getMaxAllocatableSize(0x10);
    }

    u32 alignedSize = ALIGN_PREV(size, 0x10);
    u32 solidHeapSize = ALIGN_NEXT(sizeof(JKRSolidHeap), 0x10);
    if (alignedSize < solidHeapSize)
        return NULL;

    JKRSolidHeap* solidHeap = (JKRSolidHeap*)JKRAllocFromHeap(heap, alignedSize, 0x10);
    void* dataPtr = (u8*)solidHeap + solidHeapSize;
    if (!solidHeap)
        return NULL;

    solidHeap =
        new (solidHeap) JKRSolidHeap(dataPtr, alignedSize - solidHeapSize, heap, useErrorHandler);
    return solidHeap;
}

/* 802D0AD0-802D0B30 2CB410 0060+00 1/0 0/0 0/0 .text            do_destroy__12JKRSolidHeapFv */
void JKRSolidHeap::do_destroy(void) {
    JKRHeap* parent = getParent();
    if (parent) {
        this->~JKRSolidHeap();
        JKRFreeToHeap(parent, this);
    }
}

/* 802D0B30-802D0B8C 2CB470 005C+00 1/1 0/0 0/0 .text            __ct__12JKRSolidHeapFPvUlP7JKRHeapb
 */
JKRSolidHeap::JKRSolidHeap(void* start, u32 size, JKRHeap* parent, bool useErrorHandler)
    : JKRHeap(start, size, parent, useErrorHandler) {
    mFreeSize = mSize;
    mSolidHead = (u8*)mStart;
    mSolidTail = (u8*)mEnd;
    field_0x78 = NULL;
}

/* 802D0B8C-802D0BF4 2CB4CC 0068+00 1/0 0/0 0/0 .text            __dt__12JKRSolidHeapFv */
JKRSolidHeap::~JKRSolidHeap(void) {
    dispose();
}

/* 802D0BF4-802D0CB0 2CB534 00BC+00 0/0 5/5 1/1 .text            adjustSize__12JKRSolidHeapFv */
s32 JKRSolidHeap::adjustSize(void) {
    JKRHeap* parent = getParent();
    if (parent) {
        lock();
        u32 thisSize = (u32)mStart - (u32)this;
        u32 newSize = ALIGN_NEXT(mSolidHead - mStart, 0x20);
        if (parent->resize(this, thisSize + newSize) != -1) {
            mFreeSize = 0;
            mSize = newSize;
            mEnd = mStart + mSize;
            mSolidHead = mEnd;
            mSolidTail = mEnd;
        }

        unlock();

        return thisSize + newSize;
    }

    return -1;
}

/* 802D0CB0-802D0D58 2CB5F0 00A8+00 1/0 0/0 0/0 .text            do_alloc__12JKRSolidHeapFUli */
void* JKRSolidHeap::do_alloc(u32 size, int alignment) {
#if DEBUG
    // TODO(Julgodis): JUTAssertion::setConfirmMessage
    if (alignment != 0) {
        int u = abs(alignment);
        JUT_ASSERT("JKRSolidHeap.cpp", 0xdb, u < 0x80);
        JUT_ASSERT("JKRSolidHeap.cpp", 0xdc, JGadget::binary::isPower2(u));
    }
#endif

    lock();

    if (size < 4) {
        size = 4;
    }

    void* ptr;
    if (alignment >= 0) {
        ptr = allocFromHead(size, alignment < 4 ? 4 : alignment);
    } else {
        if (-alignment < 4) {
            alignment = 4;
        } else {
            alignment = -alignment;
        }

        ptr = allocFromTail(size, alignment);
    }

    unlock();
    return ptr;
}

/* 802D0D58-802D0E20 2CB698 00C8+00 1/1 0/0 0/0 .text            allocFromHead__12JKRSolidHeapFUli
 */
void* JKRSolidHeap::allocFromHead(u32 size, int alignment) {
    size = ALIGN_NEXT(size, 0x4);
    void* ptr = NULL;
    u32 alignedStart = (alignment - 1 + (u32)mSolidHead) & ~(alignment - 1);
    u32 offset = alignedStart - (u32)mSolidHead;
    u32 totalSize = size + offset;
    if (totalSize <= mFreeSize) {
        ptr = (void*)alignedStart;
        mSolidHead += totalSize;
        mFreeSize -= totalSize;
    } else {
        JUTWarningConsole_f("allocFromHead: cannot alloc memory (0x%x byte).\n", totalSize);
        if (getErrorFlag() == true) {
            callErrorHandler(this, size, alignment);
        }
    }

    return ptr;
}

/* 802D0E20-802D0EE4 2CB760 00C4+00 1/1 0/0 0/0 .text            allocFromTail__12JKRSolidHeapFUli
 */
void* JKRSolidHeap::allocFromTail(u32 size, int alignment) {
    size = ALIGN_NEXT(size, 4);
    void* ptr = NULL;
    u32 alignedStart = ALIGN_PREV((u32)mSolidTail - size, alignment);
    u32 totalSize = (u32)mSolidTail - (u32)alignedStart;
    if (totalSize <= mFreeSize) {
        ptr = (void*)alignedStart;
        mSolidTail -= totalSize;
        mFreeSize -= totalSize;
    } else {
        JUTWarningConsole_f("allocFromTail: cannot alloc memory (0x%x byte).\n", totalSize);
        if (getErrorFlag() == true) {
            callErrorHandler(this, size, alignment);
        }
    }
    return ptr;
}

/* 802D0EE4-802D0F14 2CB824 0030+00 1/0 0/0 0/0 .text            do_free__12JKRSolidHeapFPv */
void JKRSolidHeap::do_free(void* ptr) {
    JUTWarningConsole_f("free: cannot free memory block (%08x)\n", ptr);
}

/* 802D0F14-802D0F74 2CB854 0060+00 1/0 0/0 0/0 .text            do_freeAll__12JKRSolidHeapFv */
void JKRSolidHeap::do_freeAll(void) {
    lock();

    this->JKRHeap::callAllDisposer();
    mFreeSize = mSize;
    mSolidHead = (u8*)mStart;
    mSolidTail = (u8*)mEnd;
    field_0x78 = NULL;

    unlock();
}

/* 802D0F74-802D1000 2CB8B4 008C+00 1/0 0/0 0/0 .text            do_freeTail__12JKRSolidHeapFv */
void JKRSolidHeap::do_freeTail(void) {
    lock();

    if (mSolidTail != mEnd) {
        dispose(mSolidTail, mEnd);
    }

    this->mFreeSize = ((u32)mEnd - (u32)mSolidTail + mFreeSize);
    this->mSolidTail = mEnd;

    JKRSolidHeap::Unknown* unknown = field_0x78;
    while (unknown) {
        unknown->field_0xc = mEnd;
        unknown = unknown->mNext;
    }

    unlock();
}

/* 802D1000-802D1004 2CB940 0004+00 1/0 0/0 0/0 .text            do_fillFreeArea__12JKRSolidHeapFv
 */
void JKRSolidHeap::do_fillFreeArea() {
#if DEBUG
    fillMemory(mSolidHead, mEnd - mSolidHead, (uint)DAT_8074a8ba);
#endif
}

/* 802D1004-802D1038 2CB944 0034+00 1/0 0/0 0/0 .text            do_resize__12JKRSolidHeapFPvUl */
s32 JKRSolidHeap::do_resize(void* ptr, u32 newSize) {
    JUTWarningConsole_f("resize: cannot resize memory block (%08x: %d)\n", ptr, newSize);
    return -1;
}

/* 802D1038-802D106C 2CB978 0034+00 1/0 0/0 0/0 .text            do_getSize__12JKRSolidHeapFPv */
s32 JKRSolidHeap::do_getSize(void* ptr) {
    JUTWarningConsole_f("getSize: cannot get memory block size (%08x)\n", ptr);
    return -1;
}

/* 802D106C-802D10FC 2CB9AC 0090+00 1/0 0/0 0/0 .text            check__12JKRSolidHeapFv */
bool JKRSolidHeap::check(void) {
    lock();

    bool result = true;
    u32 calculatedSize =
        ((u32)mSolidHead - (u32)mStart) + mFreeSize + ((u32)mEnd - (u32)mSolidTail);
    u32 availableSize = mSize;
    if (calculatedSize != availableSize) {
        result = false;
        JUTWarningConsole_f("check: bad total memory block size (%08X, %08X)\n", availableSize,
                            calculatedSize);
    }

    unlock();
    return result;
}

/* 802D10FC-802D11FC 2CBA3C 0100+00 1/0 0/0 0/0 .text            dump__12JKRSolidHeapFv */
bool JKRSolidHeap::dump(void) {
    bool result = check();

    lock();
    u32 headSize = ((u32)mSolidHead - (u32)mStart);
    u32 tailSize = ((u32)mEnd - (u32)mSolidTail);
    s32 htSize = headSize + tailSize;
    JUTReportConsole_f("head %08x: %08x\n", mStart, headSize);
    JUTReportConsole_f("tail %08x: %08x\n", mSolidTail, ((u32)mEnd - (u32)mSolidTail));

    u32 totalSize = mSize;
    float percentage = (float)htSize / (float)totalSize * 100.0f;
    JUTReportConsole_f("%d / %d bytes (%6.2f%%) used\n", htSize, totalSize, percentage);
    unlock();

    return result;
}
/* 802D11FC-802D1258 2CBB3C 005C+00 1/0 0/0 0/0 .text
 * state_register__12JKRSolidHeapCFPQ27JKRHeap6TStateUl         */
// full match expect using the wrong register
#ifdef NONMATCHING
void JKRSolidHeap::state_register(JKRHeap::TState* p, u32 id) const {
    JUT_ASSERT("JKRSolidHeap.cpp", 0x25c, p != 0);
    JUT_ASSERT("JKRSolidHeap.cpp", 0x25d, p->getHeap() == this);

    getState_(p);
    setState_u32ID_(p, id);
    setState_uUsedSize_(p, getUsedSize());
    setState_u32CheckCode_(p, (u32)mSolidHead + (u32)mSolidTail * 3);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRSolidHeap::state_register(JKRHeap::TState* param_0, u32 param_1) const {
    nofralloc
#include "asm/JSystem/JKernel/JKRSolidHeap/state_register__12JKRSolidHeapCFPQ27JKRHeap6TStateUl.s"
}
#pragma pop
#endif

/* 802D1258-802D1288 2CBB98 0030+00 1/0 0/0 0/0 .text
 * state_compare__12JKRSolidHeapCFRCQ27JKRHeap6TStateRCQ27JKRHeap6TState */
bool JKRSolidHeap::state_compare(JKRHeap::TState const& r1, JKRHeap::TState const& r2) const {
    JUT_ASSERT("JKRSolidHeap.cpp", 0x278, r1.getHeap() == r2.getHeap());

    bool result = true;
    if (r1.getCheckCode() != r2.getCheckCode()) {
        result = false;
    }

    if (r1.getUsedSize() != r2.getUsedSize()) {
        result = false;
    }

    return result;
}

/* 802D1288-802D1294 2CBBC8 000C+00 1/0 0/0 0/0 .text            getHeapType__12JKRSolidHeapFv */
u32 JKRSolidHeap::getHeapType(void) {
    return 'SLID';
}

/* 802D1294-802D129C 2CBBD4 0008+00 1/0 0/0 0/0 .text            do_getFreeSize__12JKRSolidHeapFv */
s32 JKRSolidHeap::do_getFreeSize(void) {
    return mFreeSize;
}

/* 802D129C-802D12A4 2CBBDC 0008+00 1/0 0/0 0/0 .text do_getMaxFreeBlock__12JKRSolidHeapFv */
void* JKRSolidHeap::do_getMaxFreeBlock(void) {
    return mSolidHead;
}

/* 802D12A4-802D12C4 2CBBE4 0020+00 1/0 0/0 0/0 .text do_getTotalFreeSize__12JKRSolidHeapFv */
s32 JKRSolidHeap::do_getTotalFreeSize(void) {
    return getFreeSize();
}

/* 8039CE50-8039CE50 0294B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
