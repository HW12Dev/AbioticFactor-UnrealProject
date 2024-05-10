#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetAppPriceInfo.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetAppPriceInfo;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetAppPriceInfo : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetAppPriceInfo();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetAppPriceInfo* GetAppPriceInfoAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, TArray<int32> AppIDs);
    
};

