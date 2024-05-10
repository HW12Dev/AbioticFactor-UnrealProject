#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreAppsAsyncActionGetAppDepotVersions.generated.h"

class UObject;
class USteamCoreAppsAsyncActionGetAppDepotVersions;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreAppsAsyncActionGetAppDepotVersions : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreAppsAsyncActionGetAppDepotVersions();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreAppsAsyncActionGetAppDepotVersions* GetAppDepotVersionsAsync(UObject* WorldContextObject, const FString& Key, int32 AppID);
    
};

