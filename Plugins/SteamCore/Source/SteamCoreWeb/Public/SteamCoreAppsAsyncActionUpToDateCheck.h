#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreAppsAsyncActionUpToDateCheck.generated.h"

class UObject;
class USteamCoreAppsAsyncActionUpToDateCheck;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreAppsAsyncActionUpToDateCheck : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreAppsAsyncActionUpToDateCheck();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreAppsAsyncActionUpToDateCheck* UpToDateCheckAsync(UObject* WorldContextObject, int32 AppID, int32 Version);
    
};

