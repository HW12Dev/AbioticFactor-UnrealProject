#pragma once
#include "CoreMinimal.h"
#include "OnRemoveUGCDependencyResultAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "RemoveUGCDependencyResult.h"
#include "SteamCoreAsyncAction.h"
#include "SteamCoreUGCAsyncActionRemoveUGCDependency.generated.h"

class UObject;
class USteamCoreUGCAsyncActionRemoveUGCDependency;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionRemoveUGCDependency : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRemoveUGCDependencyResultAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionRemoveUGCDependency();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUGCAsyncActionRemoveUGCDependency* RemoveDependencyAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, FPublishedFileID ChildPublishedFileId, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FRemoveUGCDependencyResult& Data, bool bWasSuccessful);
    
};

