#pragma once
#include "CoreMinimal.h"
#include "OnSubscribeItemAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "RemoteStorageSubscribePublishedFileResult.h"
#include "SteamCoreAsyncAction.h"
#include "SteamCoreUGCAsyncActionSubscribeItem.generated.h"

class UObject;
class USteamCoreUGCAsyncActionSubscribeItem;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionSubscribeItem : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSubscribeItemAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionSubscribeItem();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUGCAsyncActionSubscribeItem* SubscribeItemAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileIDs, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful);
    
};

