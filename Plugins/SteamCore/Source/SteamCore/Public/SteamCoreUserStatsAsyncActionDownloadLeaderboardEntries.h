#pragma once
#include "CoreMinimal.h"
#include "ESteamLeaderboardDataRequest.h"
#include "LeaderboardScoresDownloaded.h"
#include "OnDownloadLeaderboardEntriesAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "SteamLeaderboard.h"
#include "SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.generated.h"

class UObject;
class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDownloadLeaderboardEntriesAsyncDelegate OnCallback;
    
    USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FLeaderboardScoresDownloaded& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries* DownloadLeaderboardEntriesAsync(UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardDataRequest request, int32 RangeStart, int32 RangeEnd, float Timeout);
    
};

