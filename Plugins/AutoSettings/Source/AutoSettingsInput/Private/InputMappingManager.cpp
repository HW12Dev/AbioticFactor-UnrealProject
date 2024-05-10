#include "InputMappingManager.h"

UInputMappingManager::UInputMappingManager() {
    this->PlayerInputOverrides.AddDefaulted(1);
}

void UInputMappingManager::SetPlayerKeyGroupStatic(APlayerController* Player, FGameplayTag KeyGroup) {
}

void UInputMappingManager::SetPlayerInputPresetStatic(APlayerController* Player, FInputMappingPreset Preset) {
}

void UInputMappingManager::SetPlayerInputPresetByTag(APlayerController* Player, FGameplayTag PresetTag) {
}

void UInputMappingManager::OnRegisteredPlayerControllerDestroyed(AActor* DestroyedActor) {
}

bool UInputMappingManager::InitializePlayerInputOverridesStatic(APlayerController* Player) {
    return false;
}

void UInputMappingManager::GetPlayerMappingsByKey(APlayerController* Player, FKey Key, TArray<FInputActionKeyMapping>& Actions, TArray<FInputAxisKeyMapping>& Axes) const {
}

FPlayerInputMappings UInputMappingManager::GetPlayerInputMappingsStatic(APlayerController* Player) {
    return FPlayerInputMappings{};
}

FInputAxisKeyMapping UInputMappingManager::GetPlayerAxisMappingStatic(APlayerController* Player, FName AxisName, float Scale, int32 MappingGroup) {
    return FInputAxisKeyMapping{};
}

TArray<FInputAxisKeyMapping> UInputMappingManager::GetPlayerAxisMappings(APlayerController* Player, FName AxisName, float Scale, int32 MappingGroup, FGameplayTag KeyGroup, bool bUsePlayerKeyGroup) const {
    return TArray<FInputAxisKeyMapping>();
}

FInputAxisKeyMapping UInputMappingManager::GetPlayerAxisMapping(APlayerController* Player, FName AxisName, float Scale, int32 MappingGroup, FGameplayTag KeyGroup, bool bUsePlayerKeyGroup) const {
    return FInputAxisKeyMapping{};
}

FInputActionKeyMapping UInputMappingManager::GetPlayerActionMappingStatic(APlayerController* Player, FName ActionName, int32 MappingGroup) {
    return FInputActionKeyMapping{};
}

TArray<FInputActionKeyMapping> UInputMappingManager::GetPlayerActionMappings(APlayerController* Player, FName ActionName, int32 MappingGroup, FGameplayTag KeyGroup, bool bUsePlayerKeyGroup) const {
    return TArray<FInputActionKeyMapping>();
}

FInputActionKeyMapping UInputMappingManager::GetPlayerActionMapping(APlayerController* Player, FName ActionName, int32 MappingGroup, FGameplayTag KeyGroup, bool bUsePlayerKeyGroup) const {
    return FInputActionKeyMapping{};
}

TArray<FInputMappingPreset> UInputMappingManager::GetDefaultInputPresets() {
    return TArray<FInputMappingPreset>();
}

void UInputMappingManager::AddPlayerAxisOverrideStatic(APlayerController* Player, const FInputAxisKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup) {
}

void UInputMappingManager::AddPlayerAxisOverride(APlayerController* Player, const FInputAxisKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup, bool bClear) {
}

void UInputMappingManager::AddPlayerActionOverrideStatic(APlayerController* Player, const FInputActionKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup) {
}

void UInputMappingManager::AddPlayerActionOverride(APlayerController* Player, const FInputActionKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup, bool bClear) {
}


