#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionEndSecureMultiplayerSession.generated.h"

class UObject;
class USteamCoreWebAsyncActionEndSecureMultiplayerSession;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionEndSecureMultiplayerSession : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionEndSecureMultiplayerSession();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionEndSecureMultiplayerSession* EndSecureMultiplayerSessionAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID, const FString& SessionID);
    
};

