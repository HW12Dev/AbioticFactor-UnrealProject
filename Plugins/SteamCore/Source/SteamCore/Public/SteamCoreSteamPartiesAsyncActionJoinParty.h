#pragma once
#include "CoreMinimal.h"
#include "JoinPartyData.h"
#include "OnJoinPartyCallbackDelegate.h"
#include "PartyBeaconID.h"
#include "SteamCoreAsyncAction.h"
#include "SteamCoreSteamPartiesAsyncActionJoinParty.generated.h"

class UObject;
class USteamCoreSteamPartiesAsyncActionJoinParty;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreSteamPartiesAsyncActionJoinParty : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoinPartyCallback OnCallback;
    
    USteamCoreSteamPartiesAsyncActionJoinParty();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreSteamPartiesAsyncActionJoinParty* JoinPartyAsync(UObject* WorldContextObject, FPartyBeaconID BeaconID, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FJoinPartyData& Data, bool bWasSuccessful);
    
};

