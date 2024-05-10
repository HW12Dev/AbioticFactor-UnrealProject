#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreWebLobbyType.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebLobbyMatchmakingService.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebLobbyMatchmakingService : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebLobbyMatchmakingService();

    UFUNCTION(BlueprintCallable)
    void RemoveUserFromLobby(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamIdToRemove, const FString& SteamIDLobby, const FString& InputJson);
    
    UFUNCTION(BlueprintCallable)
    void CreateLobby(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, int32 MaxMembers, ESteamCoreWebLobbyType LobbyType, const FString& LobbyName, const FString& InputJson, TArray<FString> SteamIdInvitedMembers, const FString& LobbyMetaData);
    
};

