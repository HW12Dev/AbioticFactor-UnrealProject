#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionCancelTradeOffer.generated.h"

class UObject;
class USteamCoreWebAsyncActionCancelTradeOffer;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionCancelTradeOffer : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionCancelTradeOffer();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionCancelTradeOffer* CancelTradeOfferAsync(UObject* WorldContextObject, const FString& Key, const FString& TradeOfferId);
    
};

