#include "AbioticGameInstance.h"

UAbioticGameInstance::UAbioticGameInstance() : Super(FObjectInitializer()) {
    this->ActiveWorldSaveName = TEXT("Cascade");
    this->bIsSaving = false;
    this->WorldSaveClass = NULL;
    this->MetaDataSaveClass = NULL;
    this->PlayerSaveClass = NULL;
}

void UAbioticGameInstance::ToggleStatUnit(bool bEnabled) {
}

void UAbioticGameInstance::ToggleStatFPS(bool bEnabled) {
}

void UAbioticGameInstance::SetUnfocusedVolumeMultiplier(float NewVolumeMultiplier) {
}

bool UAbioticGameInstance::RestoreSaveBackup(const FString& WorldSaveName, FString& ErrorString) {
    return false;
}

void UAbioticGameInstance::MappingsChanged(APlayerController* Player) {
}

bool UAbioticGameInstance::HasPendingSaves() const {
    return false;
}

UAbioticSave* UAbioticGameInstance::GetWorldSave(const FString& LevelSuffix, bool& bNewSave) {
    return NULL;
}

UAbioticSave* UAbioticGameInstance::GetPlayerSave(const FString& PlayerId, bool bCreateIfNotFound) {
    return NULL;
}

UAbioticSave* UAbioticGameInstance::GetMetaDataSave(bool& bNewSave) {
    return NULL;
}

bool UAbioticGameInstance::DoesWorldSaveExist(const FString& LevelSuffix) {
    return false;
}

bool UAbioticGameInstance::DoesSaveBackupExist(const FString& WorldSaveName) {
    return false;
}

bool UAbioticGameInstance::DoesPlayerSaveExist(const FString& PlayerId) {
    return false;
}

void UAbioticGameInstance::CreateSaveBackup(const FString& WorldSaveName) {
}


void UAbioticGameInstance::AddWorldSaveToQueue(UAbioticSave* SaveGame) {
}

void UAbioticGameInstance::AddPlayerSaveToQueue(UAbioticSave* SaveGame) {
}


