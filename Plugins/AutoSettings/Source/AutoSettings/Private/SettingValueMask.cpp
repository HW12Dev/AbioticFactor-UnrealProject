#include "SettingValueMask.h"

USettingValueMask::USettingValueMask() {
}

FString USettingValueMask::RecombineValues_Implementation(const FString& SettingValue, const FString& ConsoleValue) const {
    return TEXT("");
}

FString USettingValueMask::MaskValue_Implementation(const FString& ConsoleValue) const {
    return TEXT("");
}


