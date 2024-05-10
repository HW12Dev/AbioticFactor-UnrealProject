#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetLeaderboardsForGame.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetLeaderboardsForGame;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetLeaderboardsForGame : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetLeaderboardsForGame();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetLeaderboardsForGame* GetLeaderboardsForGameAsync(UObject* WorldContextObject, const FString& Key, int32 AppID);
    
};

