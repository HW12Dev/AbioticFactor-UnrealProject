#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetUserStatsForGame.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetUserStatsForGame;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetUserStatsForGame : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetUserStatsForGame();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetUserStatsForGame* GetUserStatsForGameAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID);
    
};

