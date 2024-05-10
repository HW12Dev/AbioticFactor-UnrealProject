#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetMarketPrices.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetMarketPrices;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetMarketPrices : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetMarketPrices();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetMarketPrices* GetMarketPricesAsync(UObject* WorldContextObject, const FString& Key, int32 AppID);
    
};

