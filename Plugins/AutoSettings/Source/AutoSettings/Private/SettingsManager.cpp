#include "SettingsManager.h"

USettingsManager::USettingsManager() {
    this->IniFilename = TEXT("C:/Users/User/AppData/Local/AbioticFactor/Saved/Config/Windows/Settings.ini");
}

void USettingsManager::SaveSettingStatic(FAutoSettingData SettingData) {
}

void USettingsManager::ResetSettings() {
}

void USettingsManager::AutoDetectSettingsStatic(int32 WorkScale, float CPUMultiplier, float GPUMultiplier) {
}

void USettingsManager::ApplySettingStatic(FAutoSettingData SettingData) {
}


