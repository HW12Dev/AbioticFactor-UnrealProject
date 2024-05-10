#pragma once
#include "CoreMinimal.h"
#include "GameServerItem.h"
#include "OnServerRefreshCompleteDelegateDelegate.h"
#include "OnServerUpdatedAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "SteamCoreMatchmakingServersAsyncActionRequestServerList.generated.h"

class UObject;
class UServerFilter;
class USteamCoreMatchmakingServersAsyncActionRequestServerList;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreMatchmakingServersAsyncActionRequestServerList : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnServerUpdatedAsyncDelegate OnCallback;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnServerRefreshCompleteDelegate OnRefreshCompleted;
    
    USteamCoreMatchmakingServersAsyncActionRequestServerList();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestSpectatorServerListAsync(UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestLANServerListAsync(UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestInternetServerListAsync(UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestHistoryServerListAsync(UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestFriendsServerListAsync(UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestFavoritesServerListAsync(UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleServerListFinished();
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FGameServerItem& Data);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CancelServerListQueries(UObject* WorldContextObject);
    
};

