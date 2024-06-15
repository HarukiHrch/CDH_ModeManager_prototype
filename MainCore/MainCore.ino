#ifdef SUBCORE
#error "Core Selection is wrong"
#endif

#include "include.h"

// Instantiate
ModeWait modeWait();
ModeSstv modeSstv();
ModeManager modeManager(&modeWait, &modeSstv);

void setup() {
    // Pin Setting
}

void loop() {
    // Booting task
    // パラメータ読み出し
    // etc...

    // 初回起動判定
    // if (firstBoot) {
    //     // 初回起動時の処理
    // } else {
    //     // 通常起動時の処理
    //     // Modemanger._nextmodeを待機モードにセット
    // }

    // Main Loop
    while (1) {
        // Clear WDT

        // Clear Error Flag

        // Mode loop
        modeManager.execute();

        // Check Error Flag

        // Check Mode Change
        modeManager.switchMode();
    }

    // loop()は最後まで到達しない
}
