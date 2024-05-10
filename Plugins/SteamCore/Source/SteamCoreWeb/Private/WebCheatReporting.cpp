#include "WebCheatReporting.h"

UWebCheatReporting::UWebCheatReporting() {
}

void UWebCheatReporting::StartSecureMultiplayerSession(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID) {
}

void UWebCheatReporting::RequestVacStatusForUser(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& SessionID) {
}

void UWebCheatReporting::RequestPlayerGameBan(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& ReportID, const FString& CheatDescription, int32 Duration, bool bDelayBan) {
}

void UWebCheatReporting::ReportPlayerCheating(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& SteamIdReporter, const FString& AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32 GameMode, int32 SuspicionStartTime, int32 Severity) {
}

void UWebCheatReporting::ReportCheatData(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& PathAndFileName, const FString& WebCheatURL, const FString& TimeNow, const FString& TimeStarted, const FString& TimeStopped, const FString& CheatName, int32 GameProcessId, int32 CheatProcessId, const FString& CheatParam1, const FString& CheatParam2) {
}

void UWebCheatReporting::RemovePlayerGameBan(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID) {
}

void UWebCheatReporting::GetCheatingReports(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, int32 TimeEnd, int32 TimeBegin, const FString& ReportidMin, bool bIncludeReports, bool bIncludeBans, const FString& SteamID) {
}

void UWebCheatReporting::EndSecureMultiplayerSession(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& SessionID) {
}


