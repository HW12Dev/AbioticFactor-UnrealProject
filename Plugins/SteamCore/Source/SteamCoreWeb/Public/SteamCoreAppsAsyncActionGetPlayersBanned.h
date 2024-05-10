#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreAppsAsyncActionGetPlayersBanned.generated.h"

class UObject;
class USteamCoreAppsAsyncActionGetPlayersBanned;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreAppsAsyncActionGetPlayersBanned : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreAppsAsyncActionGetPlayersBanned();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreAppsAsyncActionGetPlayersBanned* GetPlayersBannedAsync(UObject* WorldContextObject, const FString& Key, int32 AppID);
    
};

