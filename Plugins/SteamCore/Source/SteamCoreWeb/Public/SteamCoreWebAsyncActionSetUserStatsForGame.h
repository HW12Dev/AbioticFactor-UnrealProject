#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionSetUserStatsForGame.generated.h"

class UObject;
class USteamCoreWebAsyncActionSetUserStatsForGame;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionSetUserStatsForGame : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionSetUserStatsForGame();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionSetUserStatsForGame* SetUserStatsForGameAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID, TArray<FString> Names, TArray<int32> Values);
    
};

