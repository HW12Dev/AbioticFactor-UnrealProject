#pragma once
#include "CoreMinimal.h"
#include "LobbyMatchList.h"
#include "OnRequestLobbyListAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "SteamCoreMatchmakingAsyncActionRequestLobbyList.generated.h"

class UObject;
class USteamCoreMatchmakingAsyncActionRequestLobbyList;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreMatchmakingAsyncActionRequestLobbyList : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestLobbyListAsyncDelegate OnCallback;
    
    USteamCoreMatchmakingAsyncActionRequestLobbyList();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreMatchmakingAsyncActionRequestLobbyList* RequestLobbyListAsync(UObject* WorldContextObject, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FLobbyMatchList& Data, bool bWasSuccessful);
    
};

