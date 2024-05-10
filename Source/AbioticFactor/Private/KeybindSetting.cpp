#include "KeybindSetting.h"

FKeybindSetting::FKeybindSetting() {
    this->KeybindType = EKeybindType::Action;
    this->AxisValue = 0.00f;
    this->bHiddenKeybind = false;
}

