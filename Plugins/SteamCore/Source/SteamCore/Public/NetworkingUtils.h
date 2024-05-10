#pragma once
#include "CoreMinimal.h"
#include "SteamCoreSubsystem.h"
#include "SteamNetworkPingLocation.h"
#include "NetworkingUtils.generated.h"

UCLASS(Blueprintable)
class STEAMCORE_API UNetworkingUtils : public USteamCoreSubsystem {
    GENERATED_BODY()
public:
    UNetworkingUtils();

    UFUNCTION(BlueprintCallable)
    static bool ParsePingLocationString(const FString& String, FSteamNetworkPingLocation& Result);
    
    UFUNCTION(BlueprintCallable)
    void InitRelayNetworkAccess();
    
    UFUNCTION(BlueprintCallable)
    float GetLocalPingLocation(FSteamNetworkPingLocation& Result);
    
    UFUNCTION(BlueprintCallable)
    int32 EstimatePingTimeFromLocalHost(const FSteamNetworkPingLocation& RemoteLocation);
    
    UFUNCTION(BlueprintCallable)
    int32 EstimatePingTimeBetweenTwoLocations(const FSteamNetworkPingLocation& Location1, const FSteamNetworkPingLocation& Location2);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertPingLocationToString(const FSteamNetworkPingLocation& Location, FString& String);
    
    UFUNCTION(BlueprintCallable)
    bool CheckPingDataUpToDate(float MaxAgeSeconds);
    
};

