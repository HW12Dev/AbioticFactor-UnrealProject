#pragma once
#include "CoreMinimal.h"
#include "DownloadClanActivityCountsResult.h"
#include "OnDownloadClanActivityCountsAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "SteamID.h"
#include "SteamCoreFriendsAsyncActionDownloadClanActivityCounts.generated.h"

class UObject;
class USteamCoreFriendsAsyncActionDownloadClanActivityCounts;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreFriendsAsyncActionDownloadClanActivityCounts : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDownloadClanActivityCountsAsyncDelegate OnCallback;
    
    USteamCoreFriendsAsyncActionDownloadClanActivityCounts();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FDownloadClanActivityCountsResult& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreFriendsAsyncActionDownloadClanActivityCounts* DownloadClanActivityCountsAsync(UObject* WorldContextObject, TArray<FSteamID> SteamIDClans, float Timeout);
    
};

