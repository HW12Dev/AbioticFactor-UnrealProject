#pragma once
#include "CoreMinimal.h"
#include "OnDeleteItemResultAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "SteamCoreAsyncAction.h"
#include "UGCDeleteItemResult.h"
#include "SteamCoreUGCAsyncActionDeleteItem.generated.h"

class UObject;
class USteamCoreUGCAsyncActionDeleteItem;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionDeleteItem : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeleteItemResultAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionDeleteItem();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FUGCDeleteItemResult& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUGCAsyncActionDeleteItem* DeleteItemAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, float Timeout);
    
};

