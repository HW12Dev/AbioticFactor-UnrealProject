#include "NativeSliderSetting.h"

UNativeSliderSetting::UNativeSliderSetting() {
    this->Slider = NULL;
    this->bMouseCaptureInProgress = false;
}

void UNativeSliderSetting::SliderValueChanged(float NewValue) {
}

void UNativeSliderSetting::SliderMouseCaptureEnd() {
}

void UNativeSliderSetting::SliderMouseCaptureBegin() {
}


