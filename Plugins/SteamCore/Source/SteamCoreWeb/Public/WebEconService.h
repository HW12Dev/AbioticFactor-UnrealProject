#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebEconService.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebEconService : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebEconService();

    UFUNCTION(BlueprintCallable)
    void GetTradeOffersSummary(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 TimeLastVisit);
    
    UFUNCTION(BlueprintCallable)
    void GetTradeOffers(const FOnSteamCoreWebCallback& Callback, const FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, const FString& Language, bool bActiveOnly, bool bHistoricalOnly, int32 TimeHistoricalCutoff);
    
    UFUNCTION(BlueprintCallable)
    void GetTradeOffer(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& TradeOfferId, const FString& Language);
    
    UFUNCTION(BlueprintCallable)
    void GetTradeHistory(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 MaxTrades, int32 StartAfterTime, const FString& StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions, const FString& Language, bool bIncludeFailed, bool bIncludeTotal);
    
    UFUNCTION(BlueprintCallable)
    void FlushInventoryCache(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& ContextID);
    
    UFUNCTION(BlueprintCallable)
    void FlushContextCache(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void FlushAssetAppearanceCache(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void DeclineTradeOffer(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& TradeOfferId);
    
    UFUNCTION(BlueprintCallable)
    void CancelTradeOffer(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& TradeOfferId);
    
};

