#pragma once
#include "CoreMinimal.h"
#include "ESteamLeaderboardDisplayType.h"
#include "ESteamLeaderboardSortMethod.h"
#include "FindOrCreateLeaderboardData.h"
#include "OnFindOrCreateLeaderboardAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.generated.h"

class UObject;
class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFindOrCreateLeaderboardAsyncDelegate OnCallback;
    
    USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FFindOrCreateLeaderboardData& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard* FindOrCreateLeaderboardAsync(UObject* WorldContextObject, const FString& LeaderboardName, ESteamLeaderboardSortMethod SortMethod, ESteamLeaderboardDisplayType DisplayType, float Timeout);
    
};

