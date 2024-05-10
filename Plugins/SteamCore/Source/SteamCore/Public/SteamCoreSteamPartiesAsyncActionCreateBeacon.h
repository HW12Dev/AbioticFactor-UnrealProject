#pragma once
#include "CoreMinimal.h"
#include "CreateBeaconData.h"
#include "OnCreateBeaconCallbackDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "SteamPartyBeaconLocation.h"
#include "SteamCoreSteamPartiesAsyncActionCreateBeacon.generated.h"

class UObject;
class USteamCoreSteamPartiesAsyncActionCreateBeacon;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreSteamPartiesAsyncActionCreateBeacon : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreateBeaconCallback OnCallback;
    
    USteamCoreSteamPartiesAsyncActionCreateBeacon();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FCreateBeaconData& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreSteamPartiesAsyncActionCreateBeacon* CreateBeaconAsync(UObject* WorldContextObject, int32 OpenSlots, FSteamPartyBeaconLocation BeaconLocation, const FString& ConnectString, const FString& MetaData, float Timeout);
    
};

