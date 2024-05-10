#include "SliderSetting.h"

USliderSetting::USliderSetting() {
    this->LeftValue = 0.00f;
    this->RightValue = 1.00f;
}

void USliderSetting::UpdateSliderValue_Implementation(float NormalizedValue, float RawValue) {
}

void USliderSetting::SliderValueUpdated(float NormalizedValue) {
}

bool USliderSetting::ShouldSaveCurrentValue_Implementation() const {
    return false;
}

float USliderSetting::RawValueToNormalized(float RawValue) const {
    return 0.0f;
}


float USliderSetting::NormalizedValueToRaw(float NormalizedValue) const {
    return 0.0f;
}

float USliderSetting::ClampRawValue(float RawValue) const {
    return 0.0f;
}


