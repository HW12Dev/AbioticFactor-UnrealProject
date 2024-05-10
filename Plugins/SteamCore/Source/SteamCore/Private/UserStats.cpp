#include "UserStats.h"

UUserStats::UUserStats() {
}

void UUserStats::UploadLeaderboardScore(const FOnUploadLeaderboardScore& Callback, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardUploadScoreMethod UploadScoreMethod, int32 Score, TArray<int32> ScoreDetails) {
}

bool UUserStats::UpdateAvgRateStat(const FString& Name, float CountThisSession, float SessionLength) {
    return false;
}

bool UUserStats::StoreStats() {
    return false;
}

bool UUserStats::SetStatInt(const FString& Name, int32 Data) {
    return false;
}

bool UUserStats::SetStatFloat(const FString& Name, float Data) {
    return false;
}

bool UUserStats::SetAchievement(const FString& Name) {
    return false;
}

bool UUserStats::ResetAllStats(bool bAchievementsToo) {
    return false;
}

void UUserStats::RequestUserStats(const FOnRequestUserStats& Callback, FSteamID SteamID) {
}

void UUserStats::RequestGlobalStats(const FOnRequestGlobalStats& Callback, int32 HistoryDays) {
}

void UUserStats::RequestGlobalAchievementPercentages(const FOnRequestGlobalAchievementPercentages& Callback) {
}

bool UUserStats::RequestCurrentStats() {
    return false;
}

bool UUserStats::IndicateAchievementProgress(const FString& Name, int32 CurrentProgress, int32 MaxProgress) {
    return false;
}

bool UUserStats::GetUserStatInteger(FSteamID SteamIDUser, const FString& Name, int32& Data) {
    return false;
}

bool UUserStats::GetUserStatFloat(FSteamID SteamIDUser, const FString& Name, float& Data) {
    return false;
}

bool UUserStats::GetUserAchievementAndUnlockTime(FSteamID SteamIDUser, const FString& Name, bool& bAchieved, int32& UnlockTime) {
    return false;
}

bool UUserStats::GetUserAchievement(FSteamID SteamIDUser, const FString& Name, bool& bAchieved) {
    return false;
}

bool UUserStats::GetStatInt(const FString& Name, int32& Data) {
    return false;
}

bool UUserStats::GetStatFloat(const FString& Name, float& Data) {
    return false;
}

void UUserStats::GetNumberOfCurrentPlayers(const FOnGetNumberOfCurrentPlayers& Callback) {
}

int32 UUserStats::GetNumAchievements() {
    return 0;
}

int32 UUserStats::GetNextMostAchievedAchievementInfo(int32 IteratorPrevious, FString& Name, float& Percent, bool& bAchieved) {
    return 0;
}

int32 UUserStats::GetMostAchievedAchievementInfo(FString& Name, float& Percent, bool& bAchieved) {
    return 0;
}

ESteamLeaderboardSortMethod UUserStats::GetLeaderboardSortMethod(FSteamLeaderboard SteamLeaderboard) {
    return ESteamLeaderboardSortMethod::None;
}

FString UUserStats::GetLeaderboardName(FSteamLeaderboard SteamLeaderboard) {
    return TEXT("");
}

int32 UUserStats::GetLeaderboardEntryCount(FSteamLeaderboard SteamLeaderboard) {
    return 0;
}

ESteamLeaderboardDisplayType UUserStats::GetLeaderboardDisplayType(FSteamLeaderboard SteamLeaderboard) {
    return ESteamLeaderboardDisplayType::None;
}

bool UUserStats::GetGlobalStatInt(const FString& StatName, int32& Data) {
    return false;
}

int32 UUserStats::GetGlobalStatHistoryInt(const FString& StatName, int32 HistoryDays, TArray<int32>& Data) {
    return 0;
}

int32 UUserStats::GetGlobalStatHistoryFloat(const FString& StatName, int32 HistoryDays, TArray<float>& Data) {
    return 0;
}

bool UUserStats::GetGlobalStatFloat(const FString& StatName, float& Data) {
    return false;
}

bool UUserStats::GetDownloadedLeaderboardEntry(FSteamLeaderboardEntries LeaderboardEntries, int32 Index, FSteamLeaderboardEntry& LeaderboardEntry, TArray<int32> Details, TArray<int32>& outDetails) {
    return false;
}

bool UUserStats::GetAchievementProgressLimitsFloat(const FString& Name, float& MinProgress, float& MaxProgress) {
    return false;
}

bool UUserStats::GetAchievementProgressLimits(const FString& Name, int32& MinProgress, int32& MaxProgress) {
    return false;
}

FString UUserStats::GetAchievementName(int32 Achievement) {
    return TEXT("");
}

UTexture2D* UUserStats::GetAchievementIcon(const FString& Name) {
    return NULL;
}

FString UUserStats::GetAchievementDisplayAttribute(const FString& Name, const FString& Key) {
    return TEXT("");
}

bool UUserStats::GetAchievementAndUnlockTime(const FString& Name, bool& bAchieved, int32& UnlockTime) {
    return false;
}

bool UUserStats::GetAchievementAchievedPercent(const FString& Name, float& Percent) {
    return false;
}

bool UUserStats::GetAchievement(const FString& Name, bool& bAchieved) {
    return false;
}

void UUserStats::FindOrCreateLeaderboard(const FOnFindOrCreateLeaderboard& Callback, const FString& LeaderboardName, ESteamLeaderboardSortMethod SortMethod, ESteamLeaderboardDisplayType DisplayType) {
}

void UUserStats::FindLeaderboard(const FOnFindLeaderboard& Callback, const FString& LeaderboardName) {
}

void UUserStats::DownloadLeaderboardEntriesForUsers(const FOnDownloadLeaderboardEntriesForUsers& Callback, FSteamLeaderboard SteamLeaderboard, TArray<FSteamID> Users) {
}

void UUserStats::DownloadLeaderboardEntries(const FOnDownloadLeaderboardEntries& Callback, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardDataRequest DataRequest, int32 RangeStart, int32 RangeEnd) {
}

bool UUserStats::ClearAchievement(const FString& Name) {
    return false;
}

void UUserStats::AttachLeaderboardUGC(const FOnAttachLeaderboardUGC& Callback, FSteamLeaderboard SteamLeaderboard, FSteamUGCHandle Handle) {
}


