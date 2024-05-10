#include "LevelManagerSubsystem.h"

ULevelManagerSubsystem::ULevelManagerSubsystem() {
}

bool ULevelManagerSubsystem::IsLocationLoaded(const FVector& Location) {
    return false;
}

bool ULevelManagerSubsystem::IsLevelLoaded(const TSoftObjectPtr<UWorld>& Level) {
    return false;
}

bool ULevelManagerSubsystem::IsAnyLevelLoading() {
    return false;
}

bool ULevelManagerSubsystem::GetLoadedLevelState(const TSoftObjectPtr<UWorld>& Level, bool& bPendingUnload, FString& VisibleState, TArray<AAbioticCharacter*>& PlayersInLevel, bool& bLocalPlayerInLevel) {
    return false;
}

TSoftObjectPtr<UWorld> ULevelManagerSubsystem::GetLevelAtLocation(const FVector& Location) {
    return NULL;
}

void ULevelManagerSubsystem::GetAllSublevels(TArray<TSoftObjectPtr<UWorld>>& Sublevels) {
}

float ULevelManagerSubsystem::GetActorTimeSinceCreation(const AActor* Actor) {
    return 0.0f;
}

bool ULevelManagerSubsystem::FindLatestLevelPlayerIsIn(AAbioticCharacter* Player, TSoftObjectPtr<UWorld>& Level) {
    return false;
}


