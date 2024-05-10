#pragma once
#include "CoreMinimal.h"
#include "AddUGCDependencyResult.h"
#include "OnAddUGCDependencyResultAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "SteamCoreAsyncAction.h"
#include "SteamCoreUGCAsyncActionAddUGCDependency.generated.h"

class UObject;
class USteamCoreUGCAsyncActionAddUGCDependency;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionAddUGCDependency : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAddUGCDependencyResultAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionAddUGCDependency();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FAddUGCDependencyResult& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUGCAsyncActionAddUGCDependency* AddDependencyAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, FPublishedFileID ChildPublishedFileId, float Timeout);
    
};

