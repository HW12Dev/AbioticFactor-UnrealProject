#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionRequestNotifications.generated.h"

class UObject;
class USteamCoreWebAsyncActionRequestNotifications;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionRequestNotifications : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionRequestNotifications();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionRequestNotifications* RequestNotificationsAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID);
    
};

