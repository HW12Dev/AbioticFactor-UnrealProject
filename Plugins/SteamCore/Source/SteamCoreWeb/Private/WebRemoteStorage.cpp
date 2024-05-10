#include "WebRemoteStorage.h"

UWebRemoteStorage::UWebRemoteStorage() {
}

void UWebRemoteStorage::UnsubscribePublishedFile(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& PublishedFileIDs) {
}

void UWebRemoteStorage::SubscribePublishedFile(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& PublishedFileIDs) {
}

void UWebRemoteStorage::SetUGCUsedByGC(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, const FString& UGCID, int32 AppID, bool bUsed) {
}

void UWebRemoteStorage::GetUGCFileDetails(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, const FString& UGCID, int32 AppID) {
}

void UWebRemoteStorage::GetPublishedFileDetails(const FOnSteamCoreWebCallback& Callback, const FString& PublishedFileIDs) {
}

void UWebRemoteStorage::GetCollectionDetails(const FOnSteamCoreWebCallback& Callback, TArray<FString> PublishedFileIDs) {
}

void UWebRemoteStorage::EnumerateUserSubscribedFiles(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, int32 ListType) {
}

void UWebRemoteStorage::EnumerateUserPublishedFiles(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID) {
}


