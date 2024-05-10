#include "GameServerStats.h"

UGameServerStats::UGameServerStats() {
}

bool UGameServerStats::UpdateUserAvgRateStat(FSteamID SteamIDUser, const FString& Name, float CountThisSession, float SessionLength) {
    return false;
}

bool UGameServerStats::SetUserStatInt(FSteamID SteamIDUser, const FString& Name, int32 Data) {
    return false;
}

bool UGameServerStats::SetUserStatFloat(FSteamID SteamIDUser, const FString& Name, float Data) {
    return false;
}

bool UGameServerStats::SetUserAchievement(FSteamID SteamIDUser, const FString& Name) {
    return false;
}

void UGameServerStats::ServerStoreUserStats(const FOnServerStoreUserStats& Callback, FSteamID SteamIDUser) {
}

void UGameServerStats::ServerRequestUserStats(const FOnServerRequestUserStats& Callback, FSteamID SteamIDUser) {
}

bool UGameServerStats::GetUserStatInt(FSteamID SteamIDUser, const FString& Name, int32& Data) {
    return false;
}

bool UGameServerStats::GetUserStatFloat(FSteamID SteamIDUser, const FString& Name, float& Data) {
    return false;
}

bool UGameServerStats::GetUserAchievement(FSteamID SteamIDUser, const FString& Name, bool& bAchieved) {
    return false;
}

bool UGameServerStats::ClearUserAchievement(FSteamID SteamIDUser, const FString& Name) {
    return false;
}


