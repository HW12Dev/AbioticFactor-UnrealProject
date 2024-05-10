#pragma once
#include "CoreMinimal.h"
#include "OnStartPlaytimeTrackingAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "StartPlaytimeTrackingResult.h"
#include "SteamCoreAsyncAction.h"
#include "SteamCoreUGCAsyncActionStartPlaytimeTracking.generated.h"

class UObject;
class USteamCoreUGCAsyncActionStartPlaytimeTracking;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionStartPlaytimeTracking : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartPlaytimeTrackingAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionStartPlaytimeTracking();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUGCAsyncActionStartPlaytimeTracking* StartPlaytimeTrackingAsync(UObject* WorldContextObject, TArray<FPublishedFileID> PublishedFileIDs, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FStartPlaytimeTrackingResult& Data, bool bWasSuccessful);
    
};

