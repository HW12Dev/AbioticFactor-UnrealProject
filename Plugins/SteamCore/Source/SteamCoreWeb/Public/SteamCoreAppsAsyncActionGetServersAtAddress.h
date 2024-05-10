#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreAppsAsyncActionGetServersAtAddress.generated.h"

class UObject;
class USteamCoreAppsAsyncActionGetServersAtAddress;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreAppsAsyncActionGetServersAtAddress : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreAppsAsyncActionGetServersAtAddress();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreAppsAsyncActionGetServersAtAddress* GetServersAtAddressAsync(UObject* WorldContextObject, const FString& Addr);
    
};

