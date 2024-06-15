#include "ModeManager.h"
#include <Arduino.h>

// コンストラクタ
ModeManager::ModeManager(Mode* modeWait, Mode* modeSstv)
    : _currentMode(NULL),
      _nextMode(NULL),
      _modeWait(modeWait),
      _modeSstv(modeSstv) {}

// モードの実行
void ModeManager::execute() {
    if (_currentMode != NULL) {
        _currentMode->routine();  // 現在のモードのメイン処理
    } else {
        // モード未指定のためエラー
        // 処理(強制的にセーフモードに移行，再起動など)
    }
}

// モードの切り替え
void ModeManager::switchMode() {
    if (_nextMode != NULL) {
        _currentMode->exit();      // 現在のモードの終了処理
        _currentMode = _nextMode;  // 現在のモードを更新
        _nextMode = NULL;          // 次のモードをリセット
        _currentMode->enter();     // 次のモードの初期化処理
    } else {
        // モード切替なし
        // SSTV放送判断
        // if (_currentMode == _modeWait &&
        // [20分経過し，放送回数が残っているかを判断する関数]) {
        //     _currentMode->exit();      // 現在のモードの終了処理
        //     _currentMode = _modeSstv;  // SSTVモードへ遷移
        //     _currentMode->enter();     // SSTVモードの初期化処理
        // }
    }
}

// _nextModeのセッター
void ModeManager::setNextMode(Mode* _nextMode) {
    this->_nextMode = _nextMode;
}
