#include "WebApps.h"

UWebApps::UWebApps() {
}

void UWebApps::UpToDateCheck(const FOnSteamCoreWebCallback& Callback, int32 AppID, int32 Version) {
}

void UWebApps::SetAppBuildLive(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, int32 BuildID, const FString& BetaKey, const FString& Description) {
}

void UWebApps::GetServersAtAddress(const FOnSteamCoreWebCallback& Callback, const FString& Addr) {
}

void UWebApps::GetServerList(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& Filter, int32 Limit) {
}

void UWebApps::GetPlayersBanned(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID) {
}

void UWebApps::GetCheatingReports(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, int32 TimeBegin, int32 TimeEnd, bool bIncludeReports, bool bIncludeBans, int32 ReportidMin) {
}

void UWebApps::GetAppList(const FOnSteamCoreWebAppListCallback& Callback, const FString& Key) {
}

void UWebApps::GetAppDepotVersions(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID) {
}

void UWebApps::GetAppBuilds(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, int32 Count) {
}

void UWebApps::GetAppBetas(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID) {
}


