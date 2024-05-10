#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreAppsAsyncActionSetAppBuildLive.generated.h"

class UObject;
class USteamCoreAppsAsyncActionSetAppBuildLive;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreAppsAsyncActionSetAppBuildLive : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreAppsAsyncActionSetAppBuildLive();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreAppsAsyncActionSetAppBuildLive* SetAppBuildLiveAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, int32 BuildID, const FString& BetaKey, const FString& Description);
    
};

