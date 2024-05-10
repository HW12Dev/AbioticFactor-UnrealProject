#include "WebGameInventory.h"

UWebGameInventory::UWebGameInventory() {
}

void UWebGameInventory::UpdateItemDefs() {
}

void UWebGameInventory::SupportGetAssetHistory(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& AssetId, const FString& ContextID) {
}

void UWebGameInventory::HistoryExecuteCommands(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& ContextID, int32 ActorId) {
}

void UWebGameInventory::GetUserHistory(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& ContextID, int32 StartTime, int32 EndTime) {
}

void UWebGameInventory::GetHistoryCommandDetails(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& Command, const FString& ContextID, const FString& Arguments) {
}


