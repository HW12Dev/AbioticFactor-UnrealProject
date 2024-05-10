#include "WebGameServersService.h"

UWebGameServersService::UWebGameServersService() {
}

void UWebGameServersService::SetMemo(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, const FString& Memo) {
}

void UWebGameServersService::SetBanStatus(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, bool bBanned, int32 banSeconds) {
}

void UWebGameServersService::ResetLoginToken(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID) {
}

void UWebGameServersService::QueryLoginToken(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& LoginToken) {
}

void UWebGameServersService::GetServerSteamIDsByIP(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& ServerIP) {
}

void UWebGameServersService::GetServerIPsBySteamID(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& ServerSteamId) {
}

void UWebGameServersService::GetAccountPublicInfo(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID) {
}

void UWebGameServersService::GetAccountList(const FOnSteamCoreWebCallback& Callback, const FString& Key) {
}

void UWebGameServersService::DeleteAccount(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID) {
}

void UWebGameServersService::CreateAccount(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& Memo) {
}


