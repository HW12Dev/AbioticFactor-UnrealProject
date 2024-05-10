#include "WebSteamEconomy.h"

UWebSteamEconomy::UWebSteamEconomy() {
}

void UWebSteamEconomy::StartTrade(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamIDd, const FString& SteamId2) {
}

void UWebSteamEconomy::StartAssetTransaction(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& AssetId, int32 AssetQuantity, const FString& Currency, const FString& Language, const FString& Ipaddress, const FString& Referer, bool bClientAuth) {
}

void UWebSteamEconomy::GetMarketPrices(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID) {
}

void UWebSteamEconomy::GetExportedAssetsForUser(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& ContextID) {
}

void UWebSteamEconomy::GetAssetPrices(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& Currency, const FString& Language) {
}

void UWebSteamEconomy::GetAssetClassInfo(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& Language, int32 ClassCount, const FString& ClassID, const FString& InstanceId) {
}

void UWebSteamEconomy::FinalizeAssetTransaction(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& TxnId, const FString& Language) {
}

void UWebSteamEconomy::CanTrade(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& TargetId) {
}


