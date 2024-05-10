#pragma once
#include "CoreMinimal.h"
#include "OnSetUserItemVoteAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "SetUserItemVoteResult.h"
#include "SteamCoreAsyncAction.h"
#include "SteamCoreUGCAsyncActionSetUserItemVote.generated.h"

class UObject;
class USteamCoreUGCAsyncActionSetUserItemVote;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionSetUserItemVote : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetUserItemVoteAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionSetUserItemVote();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUGCAsyncActionSetUserItemVote* SetUserItemVoteAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, bool bVoteUp, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FSetUserItemVoteResult& Data, bool bWasSuccessful);
    
};

