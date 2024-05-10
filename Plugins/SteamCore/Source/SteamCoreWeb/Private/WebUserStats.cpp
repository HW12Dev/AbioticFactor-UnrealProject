#include "WebUserStats.h"

UWebUserStats::UWebUserStats() {
}

void UWebUserStats::SetUserStatsForGame(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, TArray<FString> Names, TArray<int32> Values) {
}

void UWebUserStats::GetUserStatsForGame(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID) {
}

void UWebUserStats::GetSchemaForGame(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& Language) {
}

void UWebUserStats::GetPlayerAchievements(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& Language) {
}

void UWebUserStats::GetNumberOfCurrentPlayers(const FOnSteamCoreWebCallback& Callback, int32 AppID) {
}

void UWebUserStats::GetGlobalStatsForGame(const FOnSteamCoreWebCallback& Callback, int32 AppID, TArray<FString> Names, int32 StartDate, int32 EndDate) {
}

void UWebUserStats::GetGlobalAchievementPercentagesForApp(const FOnSteamCoreWebCallback& Callback, const FString& GameID) {
}


