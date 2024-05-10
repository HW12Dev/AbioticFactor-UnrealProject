#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetNumberOfCurrentPlayers.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetNumberOfCurrentPlayers : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetNumberOfCurrentPlayers();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayersAsync(UObject* WorldContextObject, int32 AppID);
    
};

