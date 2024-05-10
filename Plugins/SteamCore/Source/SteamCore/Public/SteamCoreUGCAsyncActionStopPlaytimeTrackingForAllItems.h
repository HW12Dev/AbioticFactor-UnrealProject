#pragma once
#include "CoreMinimal.h"
#include "OnStopPlaytimeTrackingForAllItemsAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "StopPlaytimeTrackingResult.h"
#include "SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems.generated.h"

class UObject;
class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStopPlaytimeTrackingForAllItemsAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems* StopPlaytimeTrackingForAllItemsAsync(UObject* WorldContextObject, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FStopPlaytimeTrackingResult& Data, bool bWasSuccessful);
    
};

