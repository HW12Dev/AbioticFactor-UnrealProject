#pragma once
#include "CoreMinimal.h"
#include "ClanOfficerListResponse.h"
#include "OnRequestClanOfficerListAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "SteamID.h"
#include "SteamCoreFriendsAsyncActionRequestClanOfficerList.generated.h"

class UObject;
class USteamCoreFriendsAsyncActionRequestClanOfficerList;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreFriendsAsyncActionRequestClanOfficerList : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestClanOfficerListAsyncDelegate OnCallback;
    
    USteamCoreFriendsAsyncActionRequestClanOfficerList();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreFriendsAsyncActionRequestClanOfficerList* RequestClanOfficerListAsync(UObject* WorldContextObject, FSteamID SteamIDClan, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FClanOfficerListResponse& Data, bool bWasSuccessful);
    
};

