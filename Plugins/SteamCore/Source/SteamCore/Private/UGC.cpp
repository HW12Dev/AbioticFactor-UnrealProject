#include "UGC.h"

UUGC::UUGC() {
}

bool UUGC::UpdateItemPreviewVideo(FUGCUpdateHandle Handle, int32 Index, const FString& PreviewVideo) {
    return false;
}

bool UUGC::UpdateItemPreviewFile(FUGCUpdateHandle Handle, int32 Index, const FString& PreviewFile) {
    return false;
}

void UUGC::UnsubscribeItem(const FOnUnsubscribeItem& Callback, FPublishedFileID PublishedFileID) {
}

void UUGC::SuspendDownloads(bool bSuspend) {
}

void UUGC::SubscribeItem(const FOnSubscribeItem& Callback, FPublishedFileID PublishedFileID) {
}

void UUGC::SubmitItemUpdate(const FOnSubmitItemUpdate& Callback, FUGCUpdateHandle Handle, const FString& ChangeNote) {
}

void UUGC::StopPlaytimeTrackingForAllItems(const FOnStopPlaytimeTrackingForAllItems& Callback) {
}

void UUGC::StopPlaytimeTracking(const FOnStopPlaytimeTracking& Callback, TArray<FPublishedFileID> PublishedFileIDs) {
}

void UUGC::StartPlaytimeTracking(const FOnStartPlaytimeTracking& Callback, TArray<FPublishedFileID> PublishedFileID) {
}

FUGCUpdateHandle UUGC::StartItemUpdate(int32 ConsumerAppID, FPublishedFileID PublishedFileID) {
    return FUGCUpdateHandle{};
}

void UUGC::SetUserItemVote(const FOnSetUserItemVote& Callback, FPublishedFileID PublishedFileID, bool bVoteUp) {
}

bool UUGC::SetSearchText(FUGCQueryHandle Handle, const FString& SearchText) {
    return false;
}

bool UUGC::SetReturnTotalOnly(FUGCQueryHandle Handle, bool bReturnTotalOnly) {
    return false;
}

bool UUGC::SetReturnPlaytimeStats(FUGCQueryHandle Handle, int32 Days) {
    return false;
}

bool UUGC::SetReturnOnlyIDs(FUGCQueryHandle Handle, bool bReturnOnlyIDs) {
    return false;
}

bool UUGC::SetReturnMetadata(FUGCQueryHandle Handle, bool bReturnMetadata) {
    return false;
}

bool UUGC::SetReturnLongDescription(FUGCQueryHandle Handle, bool bReturnLongDescription) {
    return false;
}

bool UUGC::SetReturnKeyValueTags(FUGCQueryHandle Handle, bool bReturnKeyValueTags) {
    return false;
}

bool UUGC::SetReturnChildren(FUGCQueryHandle Handle, bool bReturnChildren) {
    return false;
}

bool UUGC::SetReturnAdditionalPreviews(FUGCQueryHandle Handle, bool bReturnAdditionalPreviews) {
    return false;
}

bool UUGC::SetRankedByTrendDays(FUGCQueryHandle Handle, int32 Days) {
    return false;
}

bool UUGC::SetMatchAnyTag(FUGCQueryHandle Handle, bool bMatchAnyTag) {
    return false;
}

bool UUGC::SetLanguage(FUGCQueryHandle Handle, const FString& Language) {
    return false;
}

bool UUGC::SetItemVisibility(FUGCUpdateHandle Handle, ESteamRemoteStoragePublishedFileVisibility Visibility) {
    return false;
}

bool UUGC::SetItemUpdateLanguage(FUGCUpdateHandle Handle, const FString& Language) {
    return false;
}

bool UUGC::SetItemTitle(FUGCUpdateHandle Handle, const FString& Title) {
    return false;
}

bool UUGC::SetItemTags(FUGCUpdateHandle Handle, TArray<FString> Tags) {
    return false;
}

bool UUGC::SetItemPreview(FUGCUpdateHandle Handle, const FString& PreviewFile) {
    return false;
}

bool UUGC::SetItemMetadata(FUGCUpdateHandle Handle, const FString& MetaData) {
    return false;
}

bool UUGC::SetItemDescription(FUGCUpdateHandle Handle, const FString& Description) {
    return false;
}

bool UUGC::SetItemContent(FUGCUpdateHandle Handle, const FString& ContentFolder) {
    return false;
}

bool UUGC::SetCloudFileNameFilter(FUGCQueryHandle Handle, const FString& MatchCloudFileName) {
    return false;
}

bool UUGC::SetAllowLegacyUpload(FUGCUpdateHandle Handle, bool bAllowLegacyUpload) {
    return false;
}

bool UUGC::SetAllowCachedResponse(FUGCQueryHandle Handle, int32 MaxAgeSeconds) {
    return false;
}

void UUGC::SendQueryUGCRequest(const FOnSendQueryUGCRequest& Callback, FUGCQueryHandle Handle) {
}

bool UUGC::RemoveItemPreview(FUGCUpdateHandle Handle, int32 Index) {
    return false;
}

bool UUGC::RemoveItemKeyValueTags(FUGCUpdateHandle Handle, const FString& Key) {
    return false;
}

void UUGC::RemoveItemFromFavorites(const FOnRemoveItemFromFavorites& Callback, int32 AppID, FPublishedFileID PublishedFileID) {
}

void UUGC::RemoveDependency(const FOnRemoveUGCDependencyResult& Callback, FPublishedFileID ParentPublishedFileID, FPublishedFileID ChildPublishedFileId) {
}

void UUGC::RemoveAppDependency(const FOnRemoveAppDependencyResult& Callback, FPublishedFileID PublishedFileID, int32 AppID) {
}

bool UUGC::ReleaseQueryUGCRequest(FUGCQueryHandle Handle) {
    return false;
}

void UUGC::GetUserItemVote(const FOnGetUserItemVote& Callback, FPublishedFileID PublishedFileID) {
}

int32 UUGC::GetSubscribedItems(TArray<FPublishedFileID>& PublishedFileIDs, int32 MaxEntries) {
    return 0;
}

bool UUGC::GetQueryUGCTagDisplayName(FUGCQueryHandle Handle, int32 Index, int32 IndexTag, FString& Value) {
    return false;
}

bool UUGC::GetQueryUGCTag(FUGCQueryHandle Handle, int32 Index, int32 IndexTag, FString& Value) {
    return false;
}

bool UUGC::GetQueryUGCStatistic(FUGCQueryHandle Handle, int32 Index, ESteamItemStatistic StatType, FString& StatValue) {
    return false;
}

bool UUGC::GetQueryUGCResult(FUGCQueryHandle Handle, int32 Index, FSteamUGCDetails& Details) {
    return false;
}

bool UUGC::GetQueryUGCPreviewURL(FUGCQueryHandle Handle, int32 Index, FString& URL) {
    return false;
}

int32 UUGC::GetQueryUGCNumTags(FUGCQueryHandle Handle, int32 Index) {
    return 0;
}

int32 UUGC::GetQueryUGCNumKeyValueTags(FUGCQueryHandle Handle, int32 Index) {
    return 0;
}

int32 UUGC::GetQueryUGCNumAdditionalPreviews(FUGCQueryHandle Handle, int32 Index) {
    return 0;
}

bool UUGC::GetQueryUGCMetadata(FUGCQueryHandle Handle, int32 Index, FString& MetaData, int32 MetadataSize) {
    return false;
}

bool UUGC::GetQueryUGCKeyValueTag(FUGCQueryHandle Handle, int32 Index, int32 KeyValueTagIndex, FString& Key, FString& Value) {
    return false;
}

bool UUGC::GetQueryUGCChildren(FUGCQueryHandle Handle, int32 Index, TArray<FPublishedFileID>& PublishedFileIDs, int32 MaxEntries) {
    return false;
}

bool UUGC::GetQueryUGCAdditionalPreview(FUGCQueryHandle Handle, int32 Index, int32 PreviewIndex, FString& URLOrVideoID, FString& OriginalFileName, ESteamItemPreviewType& PreviewType) {
    return false;
}

int32 UUGC::GetNumSubscribedItems() {
    return 0;
}

ESteamItemUpdateStatus UUGC::GetItemUpdateProgress(FUGCUpdateHandle Handle, int32& BytesProcessed, int32& BytesTotal) {
    return ESteamItemUpdateStatus::Invalid;
}

int32 UUGC::GetItemState(FPublishedFileID PublishedFileID, TArray<ESteamItemState>& States) {
    return 0;
}

bool UUGC::GetItemInstallInfo(FPublishedFileID PublishedFileID, int32& SizeOnDisk, FString& Folder, int32& Timestamp) {
    return false;
}

bool UUGC::GetItemDownloadInfo(FPublishedFileID PublishedFileID, int32& BytesDownloaded, int32& BytesTotal) {
    return false;
}

void UUGC::GetAppDependencies(const FOnGetAppDependenciesResult& Callback, FPublishedFileID PublishedFileID) {
}

bool UUGC::DownloadItem(FPublishedFileID PublishedFileID, bool bHighPriority) {
    return false;
}

void UUGC::DeleteItem(const FOnDeleteItemResult& Callback, FPublishedFileID PublishedFileID) {
}

FUGCQueryHandle UUGC::CreateQueryUserUGCRequest(FSteamID SteamID, ESteamUserUGCList ListType, ESteamUGCMatchingUGCType MatchingUGCType, ESteamUserUGCListSortOrder SortOrder, int32 CreatorAppID, int32 ConsumerAppID, int32 Page) {
    return FUGCQueryHandle{};
}

FUGCQueryHandle UUGC::CreateQueryUGCDetailsRequest(TArray<FPublishedFileID> PublishedFileIDs) {
    return FUGCQueryHandle{};
}

FUGCQueryHandle UUGC::CreateQueryAllUGCRequest(ESteamUGCQuery QueryType, ESteamUGCMatchingUGCType FileType, int32 CreatorAppID, int32 ConsumerAppID, int32 Page) {
    return FUGCQueryHandle{};
}

void UUGC::CreateItem(const FOnCreateItem& Callback, int32 ConsumerAppID, ESteamWorkshopFileType FileType) {
}

bool UUGC::BInitWorkshopForGameServer(int32 WorkshopDepotID, const FString& Folder) {
    return false;
}

bool UUGC::AddRequiredTagGroup(FUGCQueryHandle Handle, TArray<FString> TagGroups) {
    return false;
}

bool UUGC::AddRequiredTag(FUGCQueryHandle Handle, const FString& TagName) {
    return false;
}

bool UUGC::AddRequiredKeyValueTag(FUGCQueryHandle Handle, const FString& Key, const FString& Value) {
    return false;
}

void UUGC::AddItemToFavorites(const FOnAddItemToFavorites& Callback, int32 AppID, FPublishedFileID PublishedFileID) {
}

bool UUGC::AddItemPreviewVideo(FUGCUpdateHandle Handle, const FString& VideoID) {
    return false;
}

bool UUGC::AddItemPreviewFile(FUGCUpdateHandle Handle, const FString& PreviewFile, ESteamItemPreviewType Type) {
    return false;
}

bool UUGC::AddItemKeyValueTag(FUGCUpdateHandle Handle, const FString& Key, const FString& Value) {
    return false;
}

bool UUGC::AddExcludedTag(FUGCQueryHandle Handle, const FString& TagName) {
    return false;
}

void UUGC::AddDependency(const FOnAddUGCDependencyResult& Callback, FPublishedFileID PublishedFileID, FPublishedFileID ChildPublishedFileId) {
}

void UUGC::AddAppDependency(const FOnAddAppDependencyResult& Callback, FPublishedFileID PublishedFileID, int32 AppID) {
}


