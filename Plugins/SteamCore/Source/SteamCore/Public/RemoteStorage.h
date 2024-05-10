#pragma once
#include "CoreMinimal.h"
#include "ESteamRemoteStoragePlatform.h"
#include "ESteamUGCReadAction.h"
#include "OnFileReadAsyncDelegate.h"
#include "OnFileShareAsyncDelegate.h"
#include "OnFileWriteAsyncDelegate.h"
#include "OnRemoteStoragePublishedFileSubscribedDelegate.h"
#include "OnRemoteStoragePublishedFileUnsubscribedDelegate.h"
#include "OnRemoteStorageSubscribePublishedFileResultDelegate.h"
#include "OnRemoteStorageUnsubscribePublishedFileResultDelegate.h"
#include "OnUGCDownloadAsyncDelegate.h"
#include "OnUGCDownloadToLocationAsyncDelegate.h"
#include "RemoteStorageFileReadAsyncComplete.h"
#include "SteamCoreSubsystem.h"
#include "SteamID.h"
#include "SteamUGCHandle.h"
#include "UGCFileWriteStreamHandle.h"
#include "RemoteStorage.generated.h"

UCLASS(Blueprintable)
class STEAMCORE_API URemoteStorage : public USteamCoreSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRemoteStorageUnsubscribePublishedFileResult RemoteStorageUnsubscribePublishedFileResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRemoteStorageSubscribePublishedFileResult RemoteStorageSubscribePublishedFileResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRemoteStoragePublishedFileUnsubscribed RemoteStoragePublishedFileUnsubscribed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRemoteStoragePublishedFileSubscribed RemoteStoragePublishedFileSubscribed;
    
    URemoteStorage();

    UFUNCTION(BlueprintCallable)
    static int32 UGCRead(FSteamUGCHandle Content, TArray<uint8>& OutData, int32 DataToRead, int32 Offset, ESteamUGCReadAction Action);
    
    UFUNCTION(BlueprintCallable)
    void UGCDownloadToLocation(const FOnUGCDownloadToLocationAsync& Callback, FSteamUGCHandle Content, const FString& Location, int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    void UGCDownload(const FOnUGCDownloadAsync& Callback, FSteamUGCHandle Content, int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    static bool SetSyncPlatforms(const FString& File, ESteamRemoteStoragePlatform RemoteStoragePlatform);
    
    UFUNCTION(BlueprintCallable)
    static void SetCloudEnabledForApp(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCloudEnabledForApp();
    
    UFUNCTION(BlueprintCallable)
    static bool IsCloudEnabledForAccount();
    
    UFUNCTION(BlueprintCallable)
    static bool GetUGCDownloadProgress(FSteamUGCHandle Handle, int32& BytesDownloaded, int32& BytesExpected);
    
    UFUNCTION(BlueprintCallable)
    static bool GetUGCDetails(FSteamUGCHandle Handle, int32& AppID, FString& Name, int32& FileSizeInBytes, FSteamID& SteamIDOwner);
    
    UFUNCTION(BlueprintCallable)
    static ESteamRemoteStoragePlatform GetSyncPlatforms(const FString& File);
    
    UFUNCTION(BlueprintCallable)
    static bool GetQuota(int32& TotalBytes, int32& AvailableBytes);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFileTimestamp(const FString& File);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFileSize(const FString& File);
    
    UFUNCTION(BlueprintCallable)
    static FString GetFileNameAndSize(int32 File, int32& FileSizeInBytes);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFileCount();
    
    UFUNCTION(BlueprintCallable)
    static FSteamUGCHandle GetCachedUGCHandle(int32 ICachedContent);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCachedUGCCount();
    
    UFUNCTION(BlueprintCallable)
    static bool FileWriteStreamWriteChunk(FUGCFileWriteStreamHandle Handle, TArray<uint8> Data);
    
    UFUNCTION(BlueprintCallable)
    static FUGCFileWriteStreamHandle FileWriteStreamOpen(const FString& File);
    
    UFUNCTION(BlueprintCallable)
    static bool FileWriteStreamClose(FUGCFileWriteStreamHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static bool FileWriteStreamCancel(FUGCFileWriteStreamHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    void FileWriteAsync(const FOnFileWriteAsync& Callback, const FString& File, TArray<uint8> Data);
    
    UFUNCTION(BlueprintCallable)
    static bool FileWrite(const FString& File, TArray<uint8> Data);
    
    UFUNCTION(BlueprintCallable)
    void FileShare(const FOnFileShareAsync& Callback, const FString& File);
    
    UFUNCTION(BlueprintCallable)
    static bool FileReadAsyncComplete(FRemoteStorageFileReadAsyncComplete ReadCall, TArray<uint8>& Buffer, int32 BytesToRead);
    
    UFUNCTION(BlueprintCallable)
    void FileReadAsync(const FOnFileReadAsync& Callback, const FString& File, int32 Offset, int32 BytesToRead);
    
    UFUNCTION(BlueprintCallable)
    static int32 FileRead(const FString& File, TArray<uint8>& Buffer, int32 DataToRead);
    
    UFUNCTION(BlueprintCallable)
    static bool FilePersisted(const FString& File);
    
    UFUNCTION(BlueprintCallable)
    static bool FileForget(const FString& File);
    
    UFUNCTION(BlueprintCallable)
    static bool FileExists(const FString& File);
    
    UFUNCTION(BlueprintCallable)
    static bool FileDelete(const FString& File);
    
};

