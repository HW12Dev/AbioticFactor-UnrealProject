#pragma once
#include "CoreMinimal.h"
#include "OnStopPlaytimeTrackingAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "SteamCoreAsyncAction.h"
#include "StopPlaytimeTrackingResult.h"
#include "SteamCoreUGCAsyncActionStopPlaytimeTracking.generated.h"

class UObject;
class USteamCoreUGCAsyncActionStopPlaytimeTracking;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionStopPlaytimeTracking : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStopPlaytimeTrackingAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionStopPlaytimeTracking();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUGCAsyncActionStopPlaytimeTracking* StopPlaytimeTrackingAsync(UObject* WorldContextObject, TArray<FPublishedFileID> PublishedFileIDs, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FStopPlaytimeTrackingResult& Data, bool bWasSuccessful);
    
};

