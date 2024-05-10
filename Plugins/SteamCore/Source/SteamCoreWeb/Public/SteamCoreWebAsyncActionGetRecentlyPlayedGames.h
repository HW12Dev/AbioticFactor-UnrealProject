#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetRecentlyPlayedGames.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetRecentlyPlayedGames;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetRecentlyPlayedGames : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetRecentlyPlayedGames();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetRecentlyPlayedGames* GetRecentlyPlayedGamesAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 Count);
    
};

