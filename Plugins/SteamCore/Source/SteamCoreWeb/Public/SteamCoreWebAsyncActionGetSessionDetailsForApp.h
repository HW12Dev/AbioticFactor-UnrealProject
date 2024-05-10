#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetSessionDetailsForApp.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetSessionDetailsForApp;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetSessionDetailsForApp : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetSessionDetailsForApp();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetSessionDetailsForApp* GetSessionDetailsForAppAsync(UObject* WorldContextObject, const FString& Key, const FString& Sessions, int32 AppID, const FString& Language);
    
};

