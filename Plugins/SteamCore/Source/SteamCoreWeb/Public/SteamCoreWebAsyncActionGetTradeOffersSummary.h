#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetTradeOffersSummary.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetTradeOffersSummary;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetTradeOffersSummary : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetTradeOffersSummary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetTradeOffersSummary* GetTradeOffersSummaryAsync(UObject* WorldContextObject, const FString& Key, int32 TimeLastVisit);
    
};

