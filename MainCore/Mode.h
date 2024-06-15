// Modeの親クラスの定義
#ifndef MODE_H
#define MODE_H

class Mode {
   public:
    virtual void enter() = 0;    // モード遷移時の初期化処理
    virtual void routine() = 0;  // モードのメイン処理
    virtual void exit() = 0;     // モード遷移時の終了処理
};

#endif
