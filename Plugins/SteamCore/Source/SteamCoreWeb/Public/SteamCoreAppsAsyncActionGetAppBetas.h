#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreAppsAsyncActionGetAppBetas.generated.h"

class UObject;
class USteamCoreAppsAsyncActionGetAppBetas;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreAppsAsyncActionGetAppBetas : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreAppsAsyncActionGetAppBetas();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreAppsAsyncActionGetAppBetas* GetAppBetasAsync(UObject* WorldContextObject, const FString& Key, int32 AppID);
    
};

