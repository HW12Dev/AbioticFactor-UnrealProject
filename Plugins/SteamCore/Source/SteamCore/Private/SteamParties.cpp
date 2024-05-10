#include "SteamParties.h"

USteamParties::USteamParties() {
}

void USteamParties::OnReservationCompleted(FPartyBeaconID BeaconID, FSteamID SteamIDUser) {
}

void USteamParties::JoinParty(const FOnJoinParty& Callback, FPartyBeaconID BeaconID) {
}

bool USteamParties::GetNumAvailableBeaconLocations(int32& NumLocations) {
    return false;
}

int32 USteamParties::GetNumActiveBeacons() {
    return 0;
}

bool USteamParties::GetBeaconLocationData(FSteamPartyBeaconLocation BeaconLocation, ESteamPartiesBeaconLocationData EData, FString& PCHDataStringOut) {
    return false;
}

bool USteamParties::GetBeaconDetails(FPartyBeaconID BeaconID, FSteamID& SteamIDBeaconOwner, FSteamPartyBeaconLocation& Location, FString& OutMetadata) {
    return false;
}

FPartyBeaconID USteamParties::GetBeaconByIndex(int32 Index) {
    return FPartyBeaconID{};
}

bool USteamParties::GetAvailableBeaconLocations(TArray<FSteamPartyBeaconLocation>& LocationList, int32 MaxNumLocations) {
    return false;
}

bool USteamParties::DestroyBeacon(FPartyBeaconID BeaconID) {
    return false;
}

void USteamParties::CreateBeacon(const FOnCreateBeacon& Callback, int32 OpenSlots, FSteamPartyBeaconLocation BeaconLocation, const FString& ConnectString, const FString& MetaData) {
}

void USteamParties::ChangeNumOpenSlots(const FOnChangeNumOpenSlots& Callback, FPartyBeaconID BeaconID, int32 OpenSlots) {
}

void USteamParties::CancelReservation(FPartyBeaconID BeaconID, FSteamID SteamIDUser) {
}


