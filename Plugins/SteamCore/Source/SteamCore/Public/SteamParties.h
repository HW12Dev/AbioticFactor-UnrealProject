#pragma once
#include "CoreMinimal.h"
#include "ESteamPartiesBeaconLocationData.h"
#include "OnActiveBeaconsDelegateDelegate.h"
#include "OnAvailableBeaconLocationsDelegateDelegate.h"
#include "OnChangeNumOpenSlotsDelegate.h"
#include "OnChangeNumOpenSlotsDelegateDelegate.h"
#include "OnCreateBeaconDelegate.h"
#include "OnCreateBeaconDelegateDelegate.h"
#include "OnJoinPartyDelegate.h"
#include "OnJoinPartyDelegateDelegate.h"
#include "OnReservationNotificationDelegateDelegate.h"
#include "PartyBeaconID.h"
#include "SteamCoreSubsystem.h"
#include "SteamID.h"
#include "SteamPartyBeaconLocation.h"
#include "SteamParties.generated.h"

UCLASS(Blueprintable)
class STEAMCORE_API USteamParties : public USteamCoreSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoinPartyDelegate JoinPartyDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreateBeaconDelegate CreateBeaconDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReservationNotificationDelegate ReservationNotificationDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeNumOpenSlotsDelegate ChangeNumOpenSlotsDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAvailableBeaconLocationsDelegate AvailableBeaconLocationsDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveBeaconsDelegate ActiveBeaconsDelegate;
    
    USteamParties();

    UFUNCTION(BlueprintCallable)
    static void OnReservationCompleted(FPartyBeaconID BeaconID, FSteamID SteamIDUser);
    
    UFUNCTION(BlueprintCallable)
    void JoinParty(const FOnJoinParty& Callback, FPartyBeaconID BeaconID);
    
    UFUNCTION(BlueprintCallable)
    static bool GetNumAvailableBeaconLocations(int32& NumLocations);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNumActiveBeacons();
    
    UFUNCTION(BlueprintCallable)
    static bool GetBeaconLocationData(FSteamPartyBeaconLocation BeaconLocation, ESteamPartiesBeaconLocationData EData, FString& PCHDataStringOut);
    
    UFUNCTION(BlueprintCallable)
    static bool GetBeaconDetails(FPartyBeaconID BeaconID, FSteamID& SteamIDBeaconOwner, FSteamPartyBeaconLocation& Location, FString& OutMetadata);
    
    UFUNCTION(BlueprintCallable)
    static FPartyBeaconID GetBeaconByIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAvailableBeaconLocations(TArray<FSteamPartyBeaconLocation>& LocationList, int32 MaxNumLocations);
    
    UFUNCTION(BlueprintCallable)
    static bool DestroyBeacon(FPartyBeaconID BeaconID);
    
    UFUNCTION(BlueprintCallable)
    void CreateBeacon(const FOnCreateBeacon& Callback, int32 OpenSlots, FSteamPartyBeaconLocation BeaconLocation, const FString& ConnectString, const FString& MetaData);
    
    UFUNCTION(BlueprintCallable)
    void ChangeNumOpenSlots(const FOnChangeNumOpenSlots& Callback, FPartyBeaconID BeaconID, int32 OpenSlots);
    
    UFUNCTION(BlueprintCallable)
    static void CancelReservation(FPartyBeaconID BeaconID, FSteamID SteamIDUser);
    
};

