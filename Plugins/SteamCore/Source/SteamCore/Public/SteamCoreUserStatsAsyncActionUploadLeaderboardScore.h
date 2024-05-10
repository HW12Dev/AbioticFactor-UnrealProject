#pragma once
#include "CoreMinimal.h"
#include "ESteamLeaderboardUploadScoreMethod.h"
#include "LeaderboardScoreUploaded.h"
#include "OnUploadLeaderboardScoreAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "SteamLeaderboard.h"
#include "SteamCoreUserStatsAsyncActionUploadLeaderboardScore.generated.h"

class UObject;
class USteamCoreUserStatsAsyncActionUploadLeaderboardScore;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUserStatsAsyncActionUploadLeaderboardScore : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUploadLeaderboardScoreAsyncDelegate OnCallback;
    
    USteamCoreUserStatsAsyncActionUploadLeaderboardScore();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUserStatsAsyncActionUploadLeaderboardScore* UploadLeaderboardScoreAsync(UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardUploadScoreMethod UploadScoreMethod, int32 Score, TArray<int32> ScoreDetails, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FLeaderboardScoreUploaded& Data, bool bWasSuccessful);
    
};

