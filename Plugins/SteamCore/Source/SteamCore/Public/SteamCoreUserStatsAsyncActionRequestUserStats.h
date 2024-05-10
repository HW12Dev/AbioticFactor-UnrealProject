#pragma once
#include "CoreMinimal.h"
#include "OnRequestUserStatsAsyncDelegateDelegate.h"
#include "RequestUserStatsData.h"
#include "SteamCoreAsyncAction.h"
#include "SteamID.h"
#include "SteamCoreUserStatsAsyncActionRequestUserStats.generated.h"

class UObject;
class USteamCoreUserStatsAsyncActionRequestUserStats;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUserStatsAsyncActionRequestUserStats : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestUserStatsAsyncDelegate OnCallback;
    
    USteamCoreUserStatsAsyncActionRequestUserStats();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUserStatsAsyncActionRequestUserStats* RequestUserStatsAsync(UObject* WorldContextObject, FSteamID SteamID, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FRequestUserStatsData& Data, bool bWasSuccessful);
    
};

