#pragma once
#include "CoreMinimal.h"
#include "OnRemoveAppDependencyResultAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "RemoveAppDependencyResult.h"
#include "SteamCoreAsyncAction.h"
#include "SteamCoreUGCAsyncActionRemoveAppDependency.generated.h"

class UObject;
class USteamCoreUGCAsyncActionRemoveAppDependency;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionRemoveAppDependency : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRemoveAppDependencyResultAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionRemoveAppDependency();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUGCAsyncActionRemoveAppDependency* RemoveAppDependencyAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, int32 AppID, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FRemoveAppDependencyResult& Data, bool bWasSuccessful);
    
};

