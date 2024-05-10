#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionStartSecureMultiplayerSession.generated.h"

class UObject;
class USteamCoreWebAsyncActionStartSecureMultiplayerSession;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionStartSecureMultiplayerSession : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionStartSecureMultiplayerSession();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionStartSecureMultiplayerSession* StartSecureMultiplayerSessionAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID);
    
};

