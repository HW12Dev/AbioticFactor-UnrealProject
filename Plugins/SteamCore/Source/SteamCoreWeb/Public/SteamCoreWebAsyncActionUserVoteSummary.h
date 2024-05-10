#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionUserVoteSummary.generated.h"

class UObject;
class USteamCoreWebAsyncActionUserVoteSummary;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionUserVoteSummary : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionUserVoteSummary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionUserVoteSummary* UserVoteSummaryAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, TArray<FString> PublishedFileIDs);
    
};

