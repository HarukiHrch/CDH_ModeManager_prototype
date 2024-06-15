#ifndef MODEMANAGER_H
#define MODEMANAGER_H

#include "Mode.h"

class ModeManager {
   public:
    ModeManager(Mode* modeWait, Mode* modeSstv);  // コンストラクタ
    void execute();                               // モードの実行
    void switchMode();                            // モードの切り替え
    void setNextMode(Mode* _nextMode);            // _nextModeのセッター
   private:
    Mode* _currentMode;  // 現在のモードのオブジェクトを指すポインタ
    Mode* _nextMode;  // 次のモードのオブジェクトを指すポインタ
    Mode* _modeWait;  // 待機モードのインスタンスを指すポインタ
    Mode* _modeSstv;  // SSTVモードのインスタンスを指すポインタ
};

#endif
