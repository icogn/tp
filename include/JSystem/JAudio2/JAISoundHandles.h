#ifndef JAISOUNDHANDLES_H
#define JAISOUNDHANDLES_H

#include "JSystem/JAudio2/JAISound.h"
#include "JSystem/JUtility/JUTAssert.h"
#include "dolphin/types.h"

class JAISound;
class JAISoundID;

class JAISoundHandle {
public:
    JAISoundHandle();
    ~JAISoundHandle() {}

    bool isSoundAttached() const { return sound_ != NULL; }

    JAISound* operator->() const {
        JUT_ASSERT("JAISound.h", 58, sound_ != 0);
        return sound_;
    }

    operator bool() const { return isSoundAttached(); }

    void releaseSound();

    JAISound* getSound() { return sound_; }

    JAISound* sound_;  // member from assert in operator->()
};

class JAISoundHandles {
public:
    JAISoundHandles(JAISoundHandle* pHandle, int param_1) {
        *mSoundHandle = pHandle;
        numHandles_ = param_1;
    };

    void getHandleSoundID(JAISoundID);
    JAISoundHandle* getFreeHandle();

private:
    JAISoundHandle** mSoundHandle;
    int numHandles_;
};

#endif /* JAISOUNDHANDLES_H */
