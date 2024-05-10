#include "AIDirectorSubsystem.h"

UAIDirectorSubsystem::UAIDirectorSubsystem() {
}

void UAIDirectorSubsystem::SetCooldownForSpawner(const UObject* WorldContextObject, AActor* Spawner, float TimeRemaining, bool bOnlySpawnOnce) {
}

void UAIDirectorSubsystem::RemoveVignetteAISpawnData(const TArray<FString>& VignetteNames) {
}

bool UAIDirectorSubsystem::RefreshCooldownOnOwningSpawner(const UObject* WorldContextObject, AAbioticCharacter* AI, TArray<AActor*> NearbyPlayers) {
    return false;
}

int32 UAIDirectorSubsystem::GetSpawnedAIFromSpawnerPtr(TSoftObjectPtr<AActor> Spawner, TArray<AAbioticCharacter*>& SpawnedAI) {
    return 0;
}

int32 UAIDirectorSubsystem::GetSpawnedAIFromSpawner(AActor* Spawner, TArray<AAbioticCharacter*>& SpawnedAI) {
    return 0;
}

TArray<AActor*> UAIDirectorSubsystem::GetNearbyPlayersOnDeathFromSpawner(const UObject* WorldContextObject, AActor* Spawner) {
    return TArray<AActor*>();
}

float UAIDirectorSubsystem::GetLastTotalCooldownFromSpawner(AActor* Spawner) {
    return 0.0f;
}

float UAIDirectorSubsystem::GetCurrentCooldownRemainingFromSpawner(const UObject* WorldContextObject, AActor* Spawner) {
    return 0.0f;
}

bool UAIDirectorSubsystem::DoesSpawnerDataExist(AActor* Spawner) {
    return false;
}

bool UAIDirectorSubsystem::ClearCooldownOnOwningSpawner(const UObject* WorldContextObject, AAbioticCharacter* AI) {
    return false;
}

void UAIDirectorSubsystem::AddSpawnedAIToSpawnList(AActor* Spawner, AAbioticCharacter* AI) {
}


