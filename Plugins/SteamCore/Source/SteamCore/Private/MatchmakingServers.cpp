#include "MatchmakingServers.h"

UMatchmakingServers::UMatchmakingServers() {
}

void UMatchmakingServers::ServerRules(const FOnServerRules& Callback, const FString& IP, int32 QueryPort) {
}

void UMatchmakingServers::RequestSpectatorServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter) {
}

void UMatchmakingServers::RequestLANServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter) {
}

void UMatchmakingServers::RequestInternetServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter) {
}

void UMatchmakingServers::RequestHistoryServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter) {
}

void UMatchmakingServers::RequestFriendsServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter) {
}

void UMatchmakingServers::RequestFavoritesServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter) {
}

void UMatchmakingServers::PingServer(const FOnServerPing& Callback, const FString& IP, int32 QueryPort) {
}


