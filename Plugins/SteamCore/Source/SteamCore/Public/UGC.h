#pragma once
#include "CoreMinimal.h"
#include "ESteamItemPreviewType.h"
#include "ESteamItemState.h"
#include "ESteamItemStatistic.h"
#include "ESteamItemUpdateStatus.h"
#include "ESteamRemoteStoragePublishedFileVisibility.h"
#include "ESteamUGCMatchingUGCType.h"
#include "ESteamUGCQuery.h"
#include "ESteamUserUGCList.h"
#include "ESteamUserUGCListSortOrder.h"
#include "ESteamWorkshopFileType.h"
#include "OnAddAppDependencyResultDelegate.h"
#include "OnAddItemToFavoritesDelegate.h"
#include "OnAddUGCDependencyResultDelegate.h"
#include "OnCreateItemDelegate.h"
#include "OnDeleteItemResultDelegate.h"
#include "OnDownloadItemResultDelegate.h"
#include "OnGetAppDependenciesResultDelegate.h"
#include "OnGetUserItemVoteDelegate.h"
#include "OnItemInstalledDelegate.h"
#include "OnRemoveAppDependencyResultDelegate.h"
#include "OnRemoveItemFromFavoritesDelegate.h"
#include "OnRemoveUGCDependencyResultDelegate.h"
#include "OnSendQueryUGCRequestDelegate.h"
#include "OnSetUserItemVoteDelegate.h"
#include "OnStartPlaytimeTrackingDelegate.h"
#include "OnStopPlaytimeTrackingDelegate.h"
#include "OnStopPlaytimeTrackingForAllItemsDelegate.h"
#include "OnSubmitItemUpdateDelegate.h"
#include "OnSubscribeItemDelegate.h"
#include "OnUnsubscribeItemDelegate.h"
#include "OnUserSubscribedItemsListChangedDelegate.h"
#include "PublishedFileID.h"
#include "SteamCoreSubsystem.h"
#include "SteamID.h"
#include "SteamUGCDetails.h"
#include "UGCQueryHandle.h"
#include "UGCUpdateHandle.h"
#include "UGC.generated.h"

UCLASS(Blueprintable)
class STEAMCORE_API UUGC : public USteamCoreSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemInstalled ItemInstalled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDownloadItemResult DownloadItemResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUserSubscribedItemsListChanged UserSubscribedItemsListChanged;
    
    UUGC();

    UFUNCTION(BlueprintCallable)
    static bool UpdateItemPreviewVideo(FUGCUpdateHandle Handle, int32 Index, const FString& PreviewVideo);
    
    UFUNCTION(BlueprintCallable)
    static bool UpdateItemPreviewFile(FUGCUpdateHandle Handle, int32 Index, const FString& PreviewFile);
    
    UFUNCTION(BlueprintCallable)
    void UnsubscribeItem(const FOnUnsubscribeItem& Callback, FPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    static void SuspendDownloads(bool bSuspend);
    
    UFUNCTION(BlueprintCallable)
    void SubscribeItem(const FOnSubscribeItem& Callback, FPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    void SubmitItemUpdate(const FOnSubmitItemUpdate& Callback, FUGCUpdateHandle Handle, const FString& ChangeNote);
    
    UFUNCTION(BlueprintCallable)
    void StopPlaytimeTrackingForAllItems(const FOnStopPlaytimeTrackingForAllItems& Callback);
    
    UFUNCTION(BlueprintCallable)
    void StopPlaytimeTracking(const FOnStopPlaytimeTracking& Callback, TArray<FPublishedFileID> PublishedFileIDs);
    
    UFUNCTION(BlueprintCallable)
    void StartPlaytimeTracking(const FOnStartPlaytimeTracking& Callback, TArray<FPublishedFileID> PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    static FUGCUpdateHandle StartItemUpdate(int32 ConsumerAppID, FPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    void SetUserItemVote(const FOnSetUserItemVote& Callback, FPublishedFileID PublishedFileID, bool bVoteUp);
    
    UFUNCTION(BlueprintCallable)
    static bool SetSearchText(FUGCQueryHandle Handle, const FString& SearchText);
    
    UFUNCTION(BlueprintCallable)
    static bool SetReturnTotalOnly(FUGCQueryHandle Handle, bool bReturnTotalOnly);
    
    UFUNCTION(BlueprintCallable)
    static bool SetReturnPlaytimeStats(FUGCQueryHandle Handle, int32 Days);
    
    UFUNCTION(BlueprintCallable)
    static bool SetReturnOnlyIDs(FUGCQueryHandle Handle, bool bReturnOnlyIDs);
    
    UFUNCTION(BlueprintCallable)
    static bool SetReturnMetadata(FUGCQueryHandle Handle, bool bReturnMetadata);
    
    UFUNCTION(BlueprintCallable)
    static bool SetReturnLongDescription(FUGCQueryHandle Handle, bool bReturnLongDescription);
    
    UFUNCTION(BlueprintCallable)
    static bool SetReturnKeyValueTags(FUGCQueryHandle Handle, bool bReturnKeyValueTags);
    
    UFUNCTION(BlueprintCallable)
    static bool SetReturnChildren(FUGCQueryHandle Handle, bool bReturnChildren);
    
    UFUNCTION(BlueprintCallable)
    static bool SetReturnAdditionalPreviews(FUGCQueryHandle Handle, bool bReturnAdditionalPreviews);
    
    UFUNCTION(BlueprintCallable)
    static bool SetRankedByTrendDays(FUGCQueryHandle Handle, int32 Days);
    
    UFUNCTION(BlueprintCallable)
    static bool SetMatchAnyTag(FUGCQueryHandle Handle, bool bMatchAnyTag);
    
    UFUNCTION(BlueprintCallable)
    static bool SetLanguage(FUGCQueryHandle Handle, const FString& Language);
    
    UFUNCTION(BlueprintCallable)
    static bool SetItemVisibility(FUGCUpdateHandle Handle, ESteamRemoteStoragePublishedFileVisibility Visibility);
    
    UFUNCTION(BlueprintCallable)
    static bool SetItemUpdateLanguage(FUGCUpdateHandle Handle, const FString& Language);
    
    UFUNCTION(BlueprintCallable)
    static bool SetItemTitle(FUGCUpdateHandle Handle, const FString& Title);
    
    UFUNCTION(BlueprintCallable)
    static bool SetItemTags(FUGCUpdateHandle Handle, TArray<FString> Tags);
    
    UFUNCTION(BlueprintCallable)
    static bool SetItemPreview(FUGCUpdateHandle Handle, const FString& PreviewFile);
    
    UFUNCTION(BlueprintCallable)
    static bool SetItemMetadata(FUGCUpdateHandle Handle, const FString& MetaData);
    
    UFUNCTION(BlueprintCallable)
    static bool SetItemDescription(FUGCUpdateHandle Handle, const FString& Description);
    
    UFUNCTION(BlueprintCallable)
    static bool SetItemContent(FUGCUpdateHandle Handle, const FString& ContentFolder);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCloudFileNameFilter(FUGCQueryHandle Handle, const FString& MatchCloudFileName);
    
    UFUNCTION(BlueprintCallable)
    bool SetAllowLegacyUpload(FUGCUpdateHandle Handle, bool bAllowLegacyUpload);
    
    UFUNCTION(BlueprintCallable)
    static bool SetAllowCachedResponse(FUGCQueryHandle Handle, int32 MaxAgeSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SendQueryUGCRequest(const FOnSendQueryUGCRequest& Callback, FUGCQueryHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveItemPreview(FUGCUpdateHandle Handle, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveItemKeyValueTags(FUGCUpdateHandle Handle, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItemFromFavorites(const FOnRemoveItemFromFavorites& Callback, int32 AppID, FPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDependency(const FOnRemoveUGCDependencyResult& Callback, FPublishedFileID ParentPublishedFileID, FPublishedFileID ChildPublishedFileId);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAppDependency(const FOnRemoveAppDependencyResult& Callback, FPublishedFileID PublishedFileID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    static bool ReleaseQueryUGCRequest(FUGCQueryHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    void GetUserItemVote(const FOnGetUserItemVote& Callback, FPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSubscribedItems(TArray<FPublishedFileID>& PublishedFileIDs, int32 MaxEntries);
    
    UFUNCTION(BlueprintCallable)
    static bool GetQueryUGCTagDisplayName(FUGCQueryHandle Handle, int32 Index, int32 IndexTag, FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool GetQueryUGCTag(FUGCQueryHandle Handle, int32 Index, int32 IndexTag, FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool GetQueryUGCStatistic(FUGCQueryHandle Handle, int32 Index, ESteamItemStatistic StatType, FString& StatValue);
    
    UFUNCTION(BlueprintCallable)
    static bool GetQueryUGCResult(FUGCQueryHandle Handle, int32 Index, FSteamUGCDetails& Details);
    
    UFUNCTION(BlueprintCallable)
    static bool GetQueryUGCPreviewURL(FUGCQueryHandle Handle, int32 Index, FString& URL);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetQueryUGCNumTags(FUGCQueryHandle Handle, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetQueryUGCNumKeyValueTags(FUGCQueryHandle Handle, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetQueryUGCNumAdditionalPreviews(FUGCQueryHandle Handle, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static bool GetQueryUGCMetadata(FUGCQueryHandle Handle, int32 Index, FString& MetaData, int32 MetadataSize);
    
    UFUNCTION(BlueprintCallable)
    static bool GetQueryUGCKeyValueTag(FUGCQueryHandle Handle, int32 Index, int32 KeyValueTagIndex, FString& Key, FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool GetQueryUGCChildren(FUGCQueryHandle Handle, int32 Index, TArray<FPublishedFileID>& PublishedFileIDs, int32 MaxEntries);
    
    UFUNCTION(BlueprintCallable)
    static bool GetQueryUGCAdditionalPreview(FUGCQueryHandle Handle, int32 Index, int32 PreviewIndex, FString& URLOrVideoID, FString& OriginalFileName, ESteamItemPreviewType& PreviewType);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNumSubscribedItems();
    
    UFUNCTION(BlueprintCallable)
    static ESteamItemUpdateStatus GetItemUpdateProgress(FUGCUpdateHandle Handle, int32& BytesProcessed, int32& BytesTotal);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetItemState(FPublishedFileID PublishedFileID, TArray<ESteamItemState>& States);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemInstallInfo(FPublishedFileID PublishedFileID, int32& SizeOnDisk, FString& Folder, int32& Timestamp);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemDownloadInfo(FPublishedFileID PublishedFileID, int32& BytesDownloaded, int32& BytesTotal);
    
    UFUNCTION(BlueprintCallable)
    void GetAppDependencies(const FOnGetAppDependenciesResult& Callback, FPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    static bool DownloadItem(FPublishedFileID PublishedFileID, bool bHighPriority);
    
    UFUNCTION(BlueprintCallable)
    void DeleteItem(const FOnDeleteItemResult& Callback, FPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    static FUGCQueryHandle CreateQueryUserUGCRequest(FSteamID SteamID, ESteamUserUGCList ListType, ESteamUGCMatchingUGCType MatchingUGCType, ESteamUserUGCListSortOrder SortOrder, int32 CreatorAppID, int32 ConsumerAppID, int32 Page);
    
    UFUNCTION(BlueprintCallable)
    static FUGCQueryHandle CreateQueryUGCDetailsRequest(TArray<FPublishedFileID> PublishedFileIDs);
    
    UFUNCTION(BlueprintCallable)
    static FUGCQueryHandle CreateQueryAllUGCRequest(ESteamUGCQuery QueryType, ESteamUGCMatchingUGCType FileType, int32 CreatorAppID, int32 ConsumerAppID, int32 Page);
    
    UFUNCTION(BlueprintCallable)
    void CreateItem(const FOnCreateItem& Callback, int32 ConsumerAppID, ESteamWorkshopFileType FileType);
    
    UFUNCTION(BlueprintCallable)
    static bool BInitWorkshopForGameServer(int32 WorkshopDepotID, const FString& Folder);
    
    UFUNCTION(BlueprintCallable)
    static bool AddRequiredTagGroup(FUGCQueryHandle Handle, TArray<FString> TagGroups);
    
    UFUNCTION(BlueprintCallable)
    static bool AddRequiredTag(FUGCQueryHandle Handle, const FString& TagName);
    
    UFUNCTION(BlueprintCallable)
    static bool AddRequiredKeyValueTag(FUGCQueryHandle Handle, const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddItemToFavorites(const FOnAddItemToFavorites& Callback, int32 AppID, FPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    static bool AddItemPreviewVideo(FUGCUpdateHandle Handle, const FString& VideoID);
    
    UFUNCTION(BlueprintCallable)
    static bool AddItemPreviewFile(FUGCUpdateHandle Handle, const FString& PreviewFile, ESteamItemPreviewType Type);
    
    UFUNCTION(BlueprintCallable)
    static bool AddItemKeyValueTag(FUGCUpdateHandle Handle, const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool AddExcludedTag(FUGCQueryHandle Handle, const FString& TagName);
    
    UFUNCTION(BlueprintCallable)
    void AddDependency(const FOnAddUGCDependencyResult& Callback, FPublishedFileID PublishedFileID, FPublishedFileID ChildPublishedFileId);
    
    UFUNCTION(BlueprintCallable)
    void AddAppDependency(const FOnAddAppDependencyResult& Callback, FPublishedFileID PublishedFileID, int32 AppID);
    
};

