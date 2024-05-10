#include "Apps.h"

UApps::UApps() {
}

void UApps::UninstallDLC(int32 AppID) {
}

bool UApps::MarkContentCorrupt(bool bMissingFilesOnly) {
    return false;
}

void UApps::InstallDLC(int32 AppID) {
}

FString UApps::GetLaunchQueryParam(const FString& Key) {
    return TEXT("");
}

int32 UApps::GetLaunchCommandLine(FString& CommandLine) {
    return 0;
}

int32 UApps::GetInstalledDepots(int32 AppID, int32 MaxDepots, TArray<int32>& Depots) {
    return 0;
}

void UApps::GetFileDetails(const FOnFileDetailsResult& Callback, const FString& Filename) {
}

int32 UApps::GetEarliestPurchaseUnixTime(int32 AppID) {
    return 0;
}

bool UApps::GetDlcDownloadProgress(int32 AppID, int32& BytesDownloaded, int32& BytesTotal) {
    return false;
}

int32 UApps::GetDLCCount() {
    return 0;
}

FString UApps::GetCurrentGameLanguage() {
    return TEXT("");
}

bool UApps::GetCurrentBetaName(FString& Name) {
    return false;
}

FString UApps::GetAvailableGameLanguages() {
    return TEXT("");
}

FSteamID UApps::GetAppOwner() {
    return FSteamID{};
}

int32 UApps::GetAppInstallDir(int32 AppID, FString& Folder) {
    return 0;
}

int32 UApps::GetAppBuildId() {
    return 0;
}

bool UApps::BIsVACBanned() {
    return false;
}

bool UApps::BIsTimedTrial(int32& SecondsAllowed, int32& SecondsPlayed) {
    return false;
}

bool UApps::BIsSubscribedFromFreeWeekend() {
    return false;
}

bool UApps::BIsSubscribedFromFamilySharing() {
    return false;
}

bool UApps::BIsSubscribedApp(int32 AppID) {
    return false;
}

bool UApps::BIsSubscribed() {
    return false;
}

bool UApps::BIsLowViolence() {
    return false;
}

bool UApps::BIsDlcInstalled(int32 AppID) {
    return false;
}

bool UApps::BIsCybercafe() {
    return false;
}

bool UApps::BIsAppInstalled(int32 AppID) {
    return false;
}

bool UApps::BGetDLCDataByIndex(int32 DLC, int32& AppID, bool& bAvailable, FString& Name) {
    return false;
}


