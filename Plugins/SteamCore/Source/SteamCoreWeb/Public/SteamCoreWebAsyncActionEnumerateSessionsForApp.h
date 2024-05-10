#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionEnumerateSessionsForApp.generated.h"

class UObject;
class USteamCoreWebAsyncActionEnumerateSessionsForApp;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionEnumerateSessionsForApp : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionEnumerateSessionsForApp();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionEnumerateSessionsForApp* EnumerateSessionsForAppAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const FString& Language);
    
};

