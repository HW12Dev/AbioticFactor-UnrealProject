#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetNewsForApp.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetNewsForApp;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetNewsForApp : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetNewsForApp();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetNewsForApp* GetNewsForAppAsync(UObject* WorldContextObject, int32 AppID, int32 MaxLength, TArray<FString> Feeds, int32 EndDate, int32 Count);
    
};

