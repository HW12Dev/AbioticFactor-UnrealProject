#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebInventoryService.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebInventoryService : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebInventoryService();

    UFUNCTION(BlueprintCallable)
    void ModifyItems(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& InputJson, const FString& SteamID, int32 Timestamp, const FString& Updates);
    
    UFUNCTION(BlueprintCallable)
    void GetQuantity(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, TArray<int32> ItemdefIDs, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void GetPriceSheet(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 Currency);
    
    UFUNCTION(BlueprintCallable)
    void GetItemDefs(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& ModifiedSince, TArray<int32> ItemdefIDs, TArray<int32> WorkshopIDs, int32 CacheMaxAgeSeconds);
    
    UFUNCTION(BlueprintCallable)
    void GetInventory(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID);
    
    UFUNCTION(BlueprintCallable)
    void ExchangeItem(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, TArray<int32> MaterialsItemID, TArray<int32> MaterialsQuantity, const FString& OutputItemdefId);
    
    UFUNCTION(BlueprintCallable)
    void ConsumeItem(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& ItemId, const FString& Quantity, const FString& SteamID, const FString& RequestID);
    
    UFUNCTION(BlueprintCallable)
    void Consolidate(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, TArray<int32> ItemdefIDs, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void AddPromoItem(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, int32 ItemdefId, const FString& ItemPropsJson, const FString& SteamID, bool bNotify, const FString& RequestID);
    
    UFUNCTION(BlueprintCallable)
    void AddItem(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, TArray<int32> ItemdefId, const FString& ItemPropsJson, const FString& SteamID, bool bNotify, const FString& RequestID, bool bTradeRestriction);
    
};

