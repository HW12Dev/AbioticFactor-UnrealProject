#pragma once
#include "CoreMinimal.h"
#include "GlobalAchievementPercentagesReady.h"
#include "OnRequestGlobalAchievementPercentagesAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.generated.h"

class UObject;
class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestGlobalAchievementPercentagesAsyncDelegate OnCallback;
    
    USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages* RequestGlobalAchievementPercentagesAsync(UObject* WorldContextObject, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FGlobalAchievementPercentagesReady& Data, bool bWasSuccessful);
    
};

