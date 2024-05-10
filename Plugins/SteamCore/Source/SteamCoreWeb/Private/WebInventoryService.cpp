#include "WebInventoryService.h"

UWebInventoryService::UWebInventoryService() {
}

void UWebInventoryService::ModifyItems(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& InputJson, const FString& SteamID, int32 Timestamp, const FString& Updates) {
}

void UWebInventoryService::GetQuantity(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, TArray<int32> ItemdefIDs, bool bForce) {
}

void UWebInventoryService::GetPriceSheet(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 Currency) {
}

void UWebInventoryService::GetItemDefs(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& ModifiedSince, TArray<int32> ItemdefIDs, TArray<int32> WorkshopIDs, int32 CacheMaxAgeSeconds) {
}

void UWebInventoryService::GetInventory(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID) {
}

void UWebInventoryService::ExchangeItem(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, TArray<int32> MaterialsItemID, TArray<int32> MaterialsQuantity, const FString& OutputItemdefId) {
}

void UWebInventoryService::ConsumeItem(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& ItemId, const FString& Quantity, const FString& SteamID, const FString& RequestID) {
}

void UWebInventoryService::Consolidate(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, TArray<int32> ItemdefIDs, bool bForce) {
}

void UWebInventoryService::AddPromoItem(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, int32 ItemdefId, const FString& ItemPropsJson, const FString& SteamID, bool bNotify, const FString& RequestID) {
}

void UWebInventoryService::AddItem(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, TArray<int32> ItemdefId, const FString& ItemPropsJson, const FString& SteamID, bool bNotify, const FString& RequestID, bool bTradeRestriction) {
}


