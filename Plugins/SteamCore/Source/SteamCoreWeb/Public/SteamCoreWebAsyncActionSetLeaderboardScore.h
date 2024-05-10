#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionSetLeaderboardScore.generated.h"

class UObject;
class USteamCoreWebAsyncActionSetLeaderboardScore;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionSetLeaderboardScore : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionSetLeaderboardScore();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionSetLeaderboardScore* SetLeaderboardScoreAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, int32 LeaderboardId, const FString& SteamID, int32 Score, TArray<uint8> Details, const FString& ScoreMethod);
    
};

