#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetTradeOffer.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetTradeOffer;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetTradeOffer : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetTradeOffer();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetTradeOffer* GetTradeOfferAsync(UObject* WorldContextObject, const FString& Key, const FString& TradeOfferId, const FString& Language);
    
};

