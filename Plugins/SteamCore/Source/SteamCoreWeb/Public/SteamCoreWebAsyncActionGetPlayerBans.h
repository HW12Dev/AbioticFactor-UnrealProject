#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetPlayerBans.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetPlayerBans;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetPlayerBans : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetPlayerBans();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetPlayerBans* GetPlayerBansAsync(UObject* WorldContextObject, const FString& Key, TArray<FString> SteamIDs);
    
};

