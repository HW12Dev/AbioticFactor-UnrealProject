#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "LevelStreamingLoadStatusDelegate.h"
#include "LevelStreamingLoadingIndicatorDelegate.h"
#include "LevelStreamingVisibleStatusDelegate.h"
#include "LevelManagerSubsystem.generated.h"

class AAbioticCharacter;
class AActor;
class UWorld;

UCLASS(Blueprintable)
class ULevelManagerSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelStreamingLoadStatus OnLevelLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelStreamingLoadStatus OnLevelUnloaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelStreamingVisibleStatus OnLevelVisibilityUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelStreamingLoadingIndicator OnLevelLoadingUpdated;
    
    ULevelManagerSubsystem();

    UFUNCTION(BlueprintCallable)
    bool IsLocationLoaded(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    bool IsLevelLoaded(const TSoftObjectPtr<UWorld>& Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyLevelLoading();
    
    UFUNCTION(BlueprintCallable)
    bool GetLoadedLevelState(const TSoftObjectPtr<UWorld>& Level, bool& bPendingUnload, FString& VisibleState, TArray<AAbioticCharacter*>& PlayersInLevel, bool& bLocalPlayerInLevel);
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UWorld> GetLevelAtLocation(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void GetAllSublevels(TArray<TSoftObjectPtr<UWorld>>& Sublevels);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActorTimeSinceCreation(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool FindLatestLevelPlayerIsIn(AAbioticCharacter* Player, TSoftObjectPtr<UWorld>& Level);
    
};

