#include "NetworkingUtils.h"

UNetworkingUtils::UNetworkingUtils() {
}

bool UNetworkingUtils::ParsePingLocationString(const FString& String, FSteamNetworkPingLocation& Result) {
    return false;
}

void UNetworkingUtils::InitRelayNetworkAccess() {
}

float UNetworkingUtils::GetLocalPingLocation(FSteamNetworkPingLocation& Result) {
    return 0.0f;
}

int32 UNetworkingUtils::EstimatePingTimeFromLocalHost(const FSteamNetworkPingLocation& RemoteLocation) {
    return 0;
}

int32 UNetworkingUtils::EstimatePingTimeBetweenTwoLocations(const FSteamNetworkPingLocation& Location1, const FSteamNetworkPingLocation& Location2) {
    return 0;
}

void UNetworkingUtils::ConvertPingLocationToString(const FSteamNetworkPingLocation& Location, FString& String) {
}

bool UNetworkingUtils::CheckPingDataUpToDate(float MaxAgeSeconds) {
    return false;
}


