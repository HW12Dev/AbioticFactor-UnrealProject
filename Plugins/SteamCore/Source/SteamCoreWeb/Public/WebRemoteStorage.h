#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebRemoteStorage.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebRemoteStorage : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebRemoteStorage();

    UFUNCTION(BlueprintCallable)
    void UnsubscribePublishedFile(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& PublishedFileIDs);
    
    UFUNCTION(BlueprintCallable)
    void SubscribePublishedFile(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& PublishedFileIDs);
    
    UFUNCTION(BlueprintCallable)
    void SetUGCUsedByGC(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, const FString& UGCID, int32 AppID, bool bUsed);
    
    UFUNCTION(BlueprintCallable)
    void GetUGCFileDetails(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, const FString& UGCID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetPublishedFileDetails(const FOnSteamCoreWebCallback& Callback, const FString& PublishedFileIDs);
    
    UFUNCTION(BlueprintCallable)
    void GetCollectionDetails(const FOnSteamCoreWebCallback& Callback, TArray<FString> PublishedFileIDs);
    
    UFUNCTION(BlueprintCallable)
    void EnumerateUserSubscribedFiles(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, int32 ListType);
    
    UFUNCTION(BlueprintCallable)
    void EnumerateUserPublishedFiles(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID);
    
};

