#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionItemVoteSummary.generated.h"

class UObject;
class USteamCoreWebAsyncActionItemVoteSummary;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionItemVoteSummary : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionItemVoteSummary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionItemVoteSummary* ItemVoteSummaryAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID, TArray<FString> PublishedFileIDs);
    
};

