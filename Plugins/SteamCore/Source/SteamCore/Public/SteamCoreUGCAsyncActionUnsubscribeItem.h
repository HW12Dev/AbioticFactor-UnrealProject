#pragma once
#include "CoreMinimal.h"
#include "OnUnsubscribeItemAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "RemoteStorageSubscribePublishedFileResult.h"
#include "SteamCoreAsyncAction.h"
#include "SteamCoreUGCAsyncActionUnsubscribeItem.generated.h"

class UObject;
class USteamCoreUGCAsyncActionUnsubscribeItem;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionUnsubscribeItem : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnsubscribeItemAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionUnsubscribeItem();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUGCAsyncActionUnsubscribeItem* UnsubscribeItemAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileIDs, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful);
    
};

