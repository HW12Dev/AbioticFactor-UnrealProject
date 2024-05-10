#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetAssetPrices.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetAssetPrices;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetAssetPrices : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetAssetPrices();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetAssetPrices* GetAssetPricesAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& Currency, const FString& Language);
    
};

