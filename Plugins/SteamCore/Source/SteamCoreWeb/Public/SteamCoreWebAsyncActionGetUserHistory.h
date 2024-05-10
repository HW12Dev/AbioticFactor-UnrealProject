#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetUserHistory.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetUserHistory;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetUserHistory : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetUserHistory();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetUserHistory* GetUserHistoryAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& SteamID, const FString& ContextID, int32 StartTime, int32 EndTime);
    
};

