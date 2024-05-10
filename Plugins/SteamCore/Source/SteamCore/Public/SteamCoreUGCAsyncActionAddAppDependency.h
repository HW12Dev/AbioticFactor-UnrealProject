#pragma once
#include "CoreMinimal.h"
#include "AddAppDependencyResult.h"
#include "OnAddAppDependencyResultAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "SteamCoreAsyncAction.h"
#include "SteamCoreUGCAsyncActionAddAppDependency.generated.h"

class UObject;
class USteamCoreUGCAsyncActionAddAppDependency;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionAddAppDependency : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAddAppDependencyResultAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionAddAppDependency();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FAddAppDependencyResult& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUGCAsyncActionAddAppDependency* AddAppDependencyAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, int32 AppID, float Timeout);
    
};

