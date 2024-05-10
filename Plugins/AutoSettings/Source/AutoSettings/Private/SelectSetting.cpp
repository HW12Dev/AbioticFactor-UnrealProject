#include "SelectSetting.h"

USelectSetting::USelectSetting() {
    this->OptionFactory = NULL;
    this->bUpdatingSettingOptions = false;
}

void USelectSetting::UpdateOptions_Implementation(const TArray<FSettingOption>& InOptions) {
}

void USelectSetting::RegenerateOptions() {
}


