#pragma once
#include "CoreMinimal.h"
#include "CreateLobbyData.h"
#include "ESteamLobbyType.h"
#include "OnCreateLobbyAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "SteamCoreMatchmakingAsyncActionCreateLobby.generated.h"

class UObject;
class USteamCoreMatchmakingAsyncActionCreateLobby;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreMatchmakingAsyncActionCreateLobby : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreateLobbyAsyncDelegate OnCallback;
    
    USteamCoreMatchmakingAsyncActionCreateLobby();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FCreateLobbyData& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreMatchmakingAsyncActionCreateLobby* CreateLobbyAsync(UObject* WorldContextObject, ESteamLobbyType LobbyType, int32 MaxMembers, float Timeout);
    
};

