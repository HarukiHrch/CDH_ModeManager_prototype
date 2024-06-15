#ifndef MODE_SSTV_H
#define MODE_SSTV_H

#include "Mode.h"

class ModeSstv : public Mode {
   public:
    ModeSstv();               // コンストラクタ
    void enter() override;    // SSTVモードへ遷移時の初期化処理
    void routine() override;  // SSTVモードのメイン処理
    void exit() override;     // SSTVモードから遷移時の終了処理
    // bool [20分経過し，放送回数が残っているかを判断する関数]

   private:
    // SSTVモードの状態変数など
    // [前回の放送時刻を記録する変数]
    // [1セットの放送の送信回数を記録する変数]
};

#endif
