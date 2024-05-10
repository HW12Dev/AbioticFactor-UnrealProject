#pragma once
#include "CoreMinimal.h"
#include "LeaderboardScoresDownloadedForUsers.h"
#include "OnDownloadLeaderboardEntriesForUsersAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "SteamID.h"
#include "SteamLeaderboard.h"
#include "SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.generated.h"

class UObject;
class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDownloadLeaderboardEntriesForUsersAsyncDelegate OnCallback;
    
    USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FLeaderboardScoresDownloadedForUsers& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* DownloadLeaderboardEntriesForUsersAsync(UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, TArray<FSteamID> Users, float Timeout);
    
};

