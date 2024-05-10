#pragma once
#include "CoreMinimal.h"
#include "NumberOfCurrentPlayers.h"
#include "OnGetNumberOfCurrentPlayersAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.generated.h"

class UObject;
class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetNumberOfCurrentPlayersAsyncDelegate OnCallback;
    
    USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FNumberOfCurrentPlayers& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayersAsync(UObject* WorldContextObject, float Timeout);
    
};

