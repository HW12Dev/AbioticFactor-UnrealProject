#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionCreateSession.generated.h"

class UObject;
class USteamCoreWebAsyncActionCreateSession;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionCreateSession : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionCreateSession();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionCreateSession* CreateSessionAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& Context, const FString& Title, const FString& Users, const FString& SteamID);
    
};

