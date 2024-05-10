#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "AISpawnerData.h"
#include "SpawnerCooldownUpdatedDelegate.h"
#include "AIDirectorSubsystem.generated.h"

class AAbioticCharacter;
class AActor;
class UObject;

UCLASS(Blueprintable)
class UAIDirectorSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<AActor>, FAISpawnerData> AISpawnMap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnerCooldownUpdated OnSpawnerCooldownUpdated;
    
    UAIDirectorSubsystem();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetCooldownForSpawner(const UObject* WorldContextObject, AActor* Spawner, float TimeRemaining, bool bOnlySpawnOnce);
    
    UFUNCTION(BlueprintCallable)
    void RemoveVignetteAISpawnData(const TArray<FString>& VignetteNames);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool RefreshCooldownOnOwningSpawner(const UObject* WorldContextObject, AAbioticCharacter* AI, TArray<AActor*> NearbyPlayers);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSpawnedAIFromSpawnerPtr(TSoftObjectPtr<AActor> Spawner, TArray<AAbioticCharacter*>& SpawnedAI);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSpawnedAIFromSpawner(AActor* Spawner, TArray<AAbioticCharacter*>& SpawnedAI);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    TArray<AActor*> GetNearbyPlayersOnDeathFromSpawner(const UObject* WorldContextObject, AActor* Spawner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastTotalCooldownFromSpawner(AActor* Spawner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    float GetCurrentCooldownRemainingFromSpawner(const UObject* WorldContextObject, AActor* Spawner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesSpawnerDataExist(AActor* Spawner);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool ClearCooldownOnOwningSpawner(const UObject* WorldContextObject, AAbioticCharacter* AI);
    
    UFUNCTION(BlueprintCallable)
    void AddSpawnedAIToSpawnList(AActor* Spawner, AAbioticCharacter* AI);
    
};

