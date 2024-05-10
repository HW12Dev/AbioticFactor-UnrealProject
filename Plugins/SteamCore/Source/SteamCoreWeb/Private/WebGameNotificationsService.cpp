#include "WebGameNotificationsService.h"

UWebGameNotificationsService::UWebGameNotificationsService() {
}

void UWebGameNotificationsService::UpdateSession(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SessionID, int32 AppID, const FString& Title, const FString& Users, const FString& SteamID) {
}

void UWebGameNotificationsService::RequestNotifications(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID) {
}

void UWebGameNotificationsService::GetSessionDetailsForApp(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& Sessions, int32 AppID, const FString& Language) {
}

void UWebGameNotificationsService::EnumerateSessionsForApp(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const FString& Language) {
}

void UWebGameNotificationsService::DeleteSessionBatch(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SessionID, int32 AppID) {
}

void UWebGameNotificationsService::DeleteSession(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SessionID, int32 AppID, const FString& SteamID) {
}

void UWebGameNotificationsService::CreateSession(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& Context, const FString& Title, const FString& Users, const FString& SteamID) {
}


