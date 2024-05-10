#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetSteamLevel.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetSteamLevel;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetSteamLevel : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetSteamLevel();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetSteamLevel* GetSteamLevelAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID);
    
};

