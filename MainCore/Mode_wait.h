#ifndef MODE_WAIT_H
#define MODE_WAIT_H

#include "Mode.h"

class ModeWait : public Mode {
   public:
    ModeWait();  // コンストラクタ
    void enter() override;    // 待機モードへ遷移時の初期化処理
    void routine() override;  // 待機モードのメイン処理
    void exit() override;     // 待機モードから遷移時の終了処理

   private:
    // 待機モードの状態変数など
};

#endif
