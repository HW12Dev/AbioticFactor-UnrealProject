#include "WebPublishedFileService.h"

UWebPublishedFileService::UWebPublishedFileService() {
}

void UWebPublishedFileService::UpdateTags(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& PublishedFileID, int32 AppID, const FString& AddTags, const FString& RemoveTags) {
}

void UWebPublishedFileService::UpdateIncompatibleStatus(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& PublishedFileID, int32 AppID, bool bIncompatible) {
}

void UWebPublishedFileService::UpdateBanStatus(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& PublishedFileID, int32 AppID, bool bBanned, const FString& Reason) {
}

void UWebPublishedFileService::SetDeveloperMetadata(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& PublishedFileID, int32 AppID, const FString& MetaData) {
}

void UWebPublishedFileService::QueryFiles(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 QueryType, int32 Page, const FString& Cursor, int32 NumPerPage, int32 CreatorAppID, int32 AppID, const FString& RequiredTags, const FString& ExcludedTags, bool bMatchAllTags, const FString& RequiredFlags, const FString& OmittedFlags, const FString& SearchText, int32 FileType, const FString& ChildPublishedFileId, int32 Days, bool bIncludeRecentVotesOnly, int32 CacheMaxAgeSeconds, int32 Language, const FString& RequiredKvTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKvTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, bool bReturnMetadata, int32 ReturnPlaytimeStats) {
}


