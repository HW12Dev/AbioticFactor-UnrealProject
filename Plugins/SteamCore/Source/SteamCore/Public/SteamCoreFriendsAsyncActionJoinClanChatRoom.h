#pragma once
#include "CoreMinimal.h"
#include "JoinClanChatRoomCompletionResult.h"
#include "OnJoinClanChatRoomAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "SteamID.h"
#include "SteamCoreFriendsAsyncActionJoinClanChatRoom.generated.h"

class UObject;
class USteamCoreFriendsAsyncActionJoinClanChatRoom;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreFriendsAsyncActionJoinClanChatRoom : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoinClanChatRoomAsyncDelegate OnCallback;
    
    USteamCoreFriendsAsyncActionJoinClanChatRoom();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreFriendsAsyncActionJoinClanChatRoom* JoinClanChatRoomAsync(UObject* WorldContextObject, FSteamID SteamIDClan, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FJoinClanChatRoomCompletionResult& Data, bool bWasSuccessful);
    
};

