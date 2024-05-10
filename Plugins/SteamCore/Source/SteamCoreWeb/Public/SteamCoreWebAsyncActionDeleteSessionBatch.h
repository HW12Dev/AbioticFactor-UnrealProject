#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionDeleteSessionBatch.generated.h"

class UObject;
class USteamCoreWebAsyncActionDeleteSessionBatch;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionDeleteSessionBatch : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionDeleteSessionBatch();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionDeleteSessionBatch* DeleteSessionBatchAsync(UObject* WorldContextObject, const FString& Key, const FString& SessionID, int32 AppID);
    
};

