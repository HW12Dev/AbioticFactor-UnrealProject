#pragma once
#include "CoreMinimal.h"
#include "GameServerItem.h"
#include "OnPingServerAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "SteamCoreMatchmakingServersAsyncActionPingServer.generated.h"

class UObject;
class USteamCoreMatchmakingServersAsyncActionPingServer;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreMatchmakingServersAsyncActionPingServer : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPingServerAsyncDelegate OnCallback;
    
    USteamCoreMatchmakingServersAsyncActionPingServer();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreMatchmakingServersAsyncActionPingServer* PingServerAsync(UObject* WorldContextObject, const FString& IP, int32 Port, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FGameServerItem& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CancelPingQueries(UObject* WorldContextObject);
    
};

