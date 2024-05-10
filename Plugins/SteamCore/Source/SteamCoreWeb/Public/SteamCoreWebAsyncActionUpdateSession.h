#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionUpdateSession.generated.h"

class UObject;
class USteamCoreWebAsyncActionUpdateSession;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionUpdateSession : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionUpdateSession();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionUpdateSession* UpdateSessionAsync(UObject* WorldContextObject, const FString& Key, const FString& SessionID, int32 AppID, const FString& Title, const FString& Users, const FString& SteamID);
    
};

