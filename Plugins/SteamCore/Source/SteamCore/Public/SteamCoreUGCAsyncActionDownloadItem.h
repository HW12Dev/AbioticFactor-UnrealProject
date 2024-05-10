#pragma once
#include "CoreMinimal.h"
#include "DownloadItemResult.h"
#include "OnDownloadItemResultDelegateDelegate.h"
#include "PublishedFileID.h"
#include "SteamCoreAsyncAction.h"
#include "SteamCoreUGCAsyncActionDownloadItem.generated.h"

class UObject;
class USteamCoreUGCAsyncActionDownloadItem;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionDownloadItem : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDownloadItemResultDelegate OnCallback;
    
    USteamCoreUGCAsyncActionDownloadItem();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FDownloadItemResult& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUGCAsyncActionDownloadItem* DownloadItemAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, bool bHighPriority, float Timeout);
    
};

