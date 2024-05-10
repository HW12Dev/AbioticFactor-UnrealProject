#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetTradeOffers.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetTradeOffers;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetTradeOffers : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetTradeOffers();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetTradeOffers* GetTradeOffersAsync(UObject* WorldContextObject, const FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, const FString& Language, bool bActiveOnly, bool bHistoricalOnly, int32 TimeHistoricalCutoff);
    
};

