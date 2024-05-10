#include "AbioticGameMode.h"

AAbioticGameMode::AAbioticGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool AAbioticGameMode::SaveModeratorList(const TArray<FString>& InModeratorList) {
    return false;
}

bool AAbioticGameMode::SaveBannedPlayerList(const TArray<FString>& InBannedPlayerList) {
    return false;
}


bool AAbioticGameMode::LoadModeratorList(TArray<FString>& OutModeratorList) {
    return false;
}

bool AAbioticGameMode::LoadBannedPlayerList(TArray<FString>& OutBannedPlayerList) {
    return false;
}


