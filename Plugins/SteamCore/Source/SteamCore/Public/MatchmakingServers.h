#pragma once
#include "CoreMinimal.h"
#include "OnServerPingDelegate.h"
#include "OnServerRulesDelegate.h"
#include "OnServerUpdatedDelegate.h"
#include "SteamCoreSubsystem.h"
#include "MatchmakingServers.generated.h"

class UServerFilter;

UCLASS(Blueprintable)
class STEAMCORE_API UMatchmakingServers : public USteamCoreSubsystem {
    GENERATED_BODY()
public:
    UMatchmakingServers();

    UFUNCTION(BlueprintCallable)
    void ServerRules(const FOnServerRules& Callback, const FString& IP, int32 QueryPort);
    
    UFUNCTION(BlueprintCallable)
    void RequestSpectatorServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter);
    
    UFUNCTION(BlueprintCallable)
    void RequestLANServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter);
    
    UFUNCTION(BlueprintCallable)
    void RequestInternetServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter);
    
    UFUNCTION(BlueprintCallable)
    void RequestHistoryServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter);
    
    UFUNCTION(BlueprintCallable)
    void RequestFriendsServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter);
    
    UFUNCTION(BlueprintCallable)
    void RequestFavoritesServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter);
    
    UFUNCTION(BlueprintCallable)
    void PingServer(const FOnServerPing& Callback, const FString& IP, int32 QueryPort);
    
};

