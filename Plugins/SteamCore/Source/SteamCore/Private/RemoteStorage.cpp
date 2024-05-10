#include "RemoteStorage.h"

URemoteStorage::URemoteStorage() {
}

int32 URemoteStorage::UGCRead(FSteamUGCHandle Content, TArray<uint8>& OutData, int32 DataToRead, int32 Offset, ESteamUGCReadAction Action) {
    return 0;
}

void URemoteStorage::UGCDownloadToLocation(const FOnUGCDownloadToLocationAsync& Callback, FSteamUGCHandle Content, const FString& Location, int32 Priority) {
}

void URemoteStorage::UGCDownload(const FOnUGCDownloadAsync& Callback, FSteamUGCHandle Content, int32 Priority) {
}

bool URemoteStorage::SetSyncPlatforms(const FString& File, ESteamRemoteStoragePlatform RemoteStoragePlatform) {
    return false;
}

void URemoteStorage::SetCloudEnabledForApp(bool bEnabled) {
}

bool URemoteStorage::IsCloudEnabledForApp() {
    return false;
}

bool URemoteStorage::IsCloudEnabledForAccount() {
    return false;
}

bool URemoteStorage::GetUGCDownloadProgress(FSteamUGCHandle Handle, int32& BytesDownloaded, int32& BytesExpected) {
    return false;
}

bool URemoteStorage::GetUGCDetails(FSteamUGCHandle Handle, int32& AppID, FString& Name, int32& FileSizeInBytes, FSteamID& SteamIDOwner) {
    return false;
}

ESteamRemoteStoragePlatform URemoteStorage::GetSyncPlatforms(const FString& File) {
    return ESteamRemoteStoragePlatform::None;
}

bool URemoteStorage::GetQuota(int32& TotalBytes, int32& AvailableBytes) {
    return false;
}

int32 URemoteStorage::GetFileTimestamp(const FString& File) {
    return 0;
}

int32 URemoteStorage::GetFileSize(const FString& File) {
    return 0;
}

FString URemoteStorage::GetFileNameAndSize(int32 File, int32& FileSizeInBytes) {
    return TEXT("");
}

int32 URemoteStorage::GetFileCount() {
    return 0;
}

FSteamUGCHandle URemoteStorage::GetCachedUGCHandle(int32 ICachedContent) {
    return FSteamUGCHandle{};
}

int32 URemoteStorage::GetCachedUGCCount() {
    return 0;
}

bool URemoteStorage::FileWriteStreamWriteChunk(FUGCFileWriteStreamHandle Handle, TArray<uint8> Data) {
    return false;
}

FUGCFileWriteStreamHandle URemoteStorage::FileWriteStreamOpen(const FString& File) {
    return FUGCFileWriteStreamHandle{};
}

bool URemoteStorage::FileWriteStreamClose(FUGCFileWriteStreamHandle Handle) {
    return false;
}

bool URemoteStorage::FileWriteStreamCancel(FUGCFileWriteStreamHandle Handle) {
    return false;
}

void URemoteStorage::FileWriteAsync(const FOnFileWriteAsync& Callback, const FString& File, TArray<uint8> Data) {
}

bool URemoteStorage::FileWrite(const FString& File, TArray<uint8> Data) {
    return false;
}

void URemoteStorage::FileShare(const FOnFileShareAsync& Callback, const FString& File) {
}

bool URemoteStorage::FileReadAsyncComplete(FRemoteStorageFileReadAsyncComplete ReadCall, TArray<uint8>& Buffer, int32 BytesToRead) {
    return false;
}

void URemoteStorage::FileReadAsync(const FOnFileReadAsync& Callback, const FString& File, int32 Offset, int32 BytesToRead) {
}

int32 URemoteStorage::FileRead(const FString& File, TArray<uint8>& Buffer, int32 DataToRead) {
    return 0;
}

bool URemoteStorage::FilePersisted(const FString& File) {
    return false;
}

bool URemoteStorage::FileForget(const FString& File) {
    return false;
}

bool URemoteStorage::FileExists(const FString& File) {
    return false;
}

bool URemoteStorage::FileDelete(const FString& File) {
    return false;
}


