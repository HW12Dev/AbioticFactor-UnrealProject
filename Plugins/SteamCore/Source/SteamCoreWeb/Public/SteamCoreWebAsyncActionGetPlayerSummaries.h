#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetPlayerSummaries.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetPlayerSummaries;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetPlayerSummaries : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetPlayerSummaries();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetPlayerSummaries* GetPlayerSummariesAsync(UObject* WorldContextObject, const FString& Key, TArray<FString> SteamIDs);
    
};

