// DeviceDriverの親クラスの定義
#ifndef DEVICE_DRIVER_H
#define DEVICE_DRIVER_H

class DeviceDriver {
   public:
    virtual void init() = 0;  // pin settingなどsetup()で行う処理
};

#endif
