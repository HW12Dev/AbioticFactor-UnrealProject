#include "WebPlayerService.h"

UWebPlayerService::UWebPlayerService() {
}

void UWebPlayerService::IsPlayingSharedGame(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppIdPlaying) {
}

void UWebPlayerService::GetSteamLevel(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID) {
}

void UWebPlayerService::GetRecentlyPlayedGames(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 Count) {
}

void UWebPlayerService::GetOwnedGames(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32> Filter) {
}

void UWebPlayerService::GetCommunityBadgeProgress(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 BadgeId) {
}

void UWebPlayerService::GetBadges(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID) {
}


