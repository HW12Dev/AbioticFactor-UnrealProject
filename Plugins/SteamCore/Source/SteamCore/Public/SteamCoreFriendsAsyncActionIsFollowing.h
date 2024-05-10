#pragma once
#include "CoreMinimal.h"
#include "FriendsIsFollowing.h"
#include "OnIsFollowingAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "SteamID.h"
#include "SteamCoreFriendsAsyncActionIsFollowing.generated.h"

class UObject;
class USteamCoreFriendsAsyncActionIsFollowing;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreFriendsAsyncActionIsFollowing : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIsFollowingAsyncDelegate OnCallback;
    
    USteamCoreFriendsAsyncActionIsFollowing();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreFriendsAsyncActionIsFollowing* IsFollowingAsync(UObject* WorldContextObject, FSteamID SteamID, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FFriendsIsFollowing& Data, bool bWasSuccessful);
    
};

