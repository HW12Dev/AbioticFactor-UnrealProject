#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetGlobalStatsForGame.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetGlobalStatsForGame;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetGlobalStatsForGame : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetGlobalStatsForGame();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetGlobalStatsForGame* GetGlobalStatsForGameAsync(UObject* WorldContextObject, int32 AppID, TArray<FString> Names, int32 StartDate, int32 EndDate);
    
};

