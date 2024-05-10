#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UserAchievementStored.h"
#include "UserStatsReceived.h"
#include "UserStatsStored.h"
#include "AchievementRowHandle.h"
#include "AchievementStatListener.h"
#include "AchievementStatRowHandle.h"
#include "AchievementUnlockedDelegate.h"
#include "AchievementsSubsystem.generated.h"

class UPlayerStatsSave;

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UAchievementsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasLoadedStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPendingStats;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAchievementUnlocked OnAchievementUnlocked;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerStatsSave* PlayerStatsSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FAchievementStatRowHandle, FAchievementStatListener> StatListeners;
    
public:
    UAchievementsSubsystem();

    UFUNCTION(BlueprintCallable)
    bool UploadAchievementData();
    
    UFUNCTION(BlueprintCallable)
    void TriggerAchievement(FAchievementRowHandle Achievement, bool bSkipStore);
    
private:
    UFUNCTION(BlueprintCallable)
    void RetryStatRequest();
    
    UFUNCTION(BlueprintCallable)
    void OnUserStatsStored(const FUserStatsStored& Data);
    
    UFUNCTION(BlueprintCallable)
    void OnUserStatsReceived(const FUserStatsReceived& Data);
    
    UFUNCTION(BlueprintCallable)
    void OnUserAchievementStored(const FUserAchievementStored& Data);
    
public:
    UFUNCTION(BlueprintCallable)
    bool InitializeAchievements();
    
    UFUNCTION(BlueprintCallable)
    void IncrementAchievementStat_Int(FAchievementStatRowHandle Stat, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void IncrementAchievementStat_Float(FAchievementStatRowHandle Stat, float Value);
    
    UFUNCTION(BlueprintCallable)
    bool HasUnlockedAchievement(FAchievementRowHandle Achievement);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAchievementStat_Int(FAchievementStatRowHandle Stat);
    
    UFUNCTION(BlueprintCallable)
    float GetAchievementStat_Float(FAchievementStatRowHandle Stat);
    
    UFUNCTION(BlueprintCallable)
    bool ClearStatsAndAchievements();
    
};

