#include "WebSteamUser.h"

UWebSteamUser::UWebSteamUser() {
}

void UWebSteamUser::ResolveVanityURL(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& VanityURL, EVanityUrlType URLType) {
}

void UWebSteamUser::GrantPackage(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 PackageId, const FString& Ipaddress, const FString& ThirdPartyKey, int32 ThirdPartyAppId) {
}

void UWebSteamUser::GetUserGroupList(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID) {
}

void UWebSteamUser::GetPublisherAppOwnershipChanges(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& PackageRowVersion, const FString& CDKeyRowVersion) {
}

void UWebSteamUser::GetPublisherAppOwnership(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID) {
}

void UWebSteamUser::GetPlayerSummaries(const FOnSteamCoreWebCallback& Callback, const FString& Key, TArray<FString> SteamIDs) {
}

void UWebSteamUser::GetPlayerBans(const FOnSteamCoreWebCallback& Callback, const FString& Key, TArray<FString> SteamIDs) {
}

void UWebSteamUser::GetFriendList(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, const FString& Relationship) {
}

void UWebSteamUser::GetAppPriceInfo(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, TArray<int32> AppIDs) {
}

void UWebSteamUser::CheckAppOwnership(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID) {
}


