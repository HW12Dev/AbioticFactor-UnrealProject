#pragma once
#include "CoreMinimal.h"
#include "FriendsGetFollowerCount.h"
#include "OnGetFollowerCountAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "SteamID.h"
#include "SteamCoreFriendsAsyncActionGetFollowerCount.generated.h"

class UObject;
class USteamCoreFriendsAsyncActionGetFollowerCount;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreFriendsAsyncActionGetFollowerCount : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetFollowerCountAsyncDelegate OnCallback;
    
    USteamCoreFriendsAsyncActionGetFollowerCount();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FFriendsGetFollowerCount& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreFriendsAsyncActionGetFollowerCount* GetFollowerCountAsync(UObject* WorldContextObject, FSteamID SteamID, float Timeout);
    
};

