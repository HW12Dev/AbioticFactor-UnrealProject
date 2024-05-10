#pragma once
#include "CoreMinimal.h"
#include "GetUserItemVoteResult.h"
#include "OnGetUserItemVoteAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "SteamCoreAsyncAction.h"
#include "SteamCoreUGCAsyncActionGetUserItemVote.generated.h"

class UObject;
class USteamCoreUGCAsyncActionGetUserItemVote;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionGetUserItemVote : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetUserItemVoteAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionGetUserItemVote();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FGetUserItemVoteResult& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUGCAsyncActionGetUserItemVote* GetUserItemVoteAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, float Timeout);
    
};

