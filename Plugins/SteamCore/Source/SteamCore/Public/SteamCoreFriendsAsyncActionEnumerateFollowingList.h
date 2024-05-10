#pragma once
#include "CoreMinimal.h"
#include "FriendsEnumerateFollowingList.h"
#include "OnEnumerateFollowingListAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "SteamCoreFriendsAsyncActionEnumerateFollowingList.generated.h"

class UObject;
class USteamCoreFriendsAsyncActionEnumerateFollowingList;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreFriendsAsyncActionEnumerateFollowingList : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnumerateFollowingListAsyncDelegate OnCallback;
    
    USteamCoreFriendsAsyncActionEnumerateFollowingList();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FFriendsEnumerateFollowingList& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreFriendsAsyncActionEnumerateFollowingList* EnumerateFollowingListAsync(UObject* WorldContextObject, int32 StartIndex, float Timeout);
    
};

