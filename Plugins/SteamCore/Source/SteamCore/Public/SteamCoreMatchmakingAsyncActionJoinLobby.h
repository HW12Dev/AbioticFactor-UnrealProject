#pragma once
#include "CoreMinimal.h"
#include "JoinLobbyData.h"
#include "OnJoinLobbyAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "SteamID.h"
#include "SteamCoreMatchmakingAsyncActionJoinLobby.generated.h"

class UObject;
class USteamCoreMatchmakingAsyncActionJoinLobby;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreMatchmakingAsyncActionJoinLobby : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoinLobbyAsyncDelegate OnCallback;
    
    USteamCoreMatchmakingAsyncActionJoinLobby();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreMatchmakingAsyncActionJoinLobby* JoinLobbyAsync(UObject* WorldContextObject, FSteamID SteamIDLobby, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FJoinLobbyData& Data, bool bWasSuccessful);
    
};

