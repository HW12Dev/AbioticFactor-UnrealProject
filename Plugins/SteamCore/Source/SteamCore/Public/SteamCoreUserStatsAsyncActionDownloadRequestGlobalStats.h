#pragma once
#include "CoreMinimal.h"
#include "GlobalStatsReceived.h"
#include "OnRequestGlobalStatsAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.generated.h"

class UObject;
class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestGlobalStatsAsyncDelegate OnCallback;
    
    USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats* RequestGlobalStatsAsync(UObject* WorldContextObject, int32 HistoryDays, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FGlobalStatsReceived& Data, bool bWasSuccessful);
    
};

