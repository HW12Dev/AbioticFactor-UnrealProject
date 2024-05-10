#pragma once
#include "CoreMinimal.h"
#include "SteamNetworkPingLocation.generated.h"

USTRUCT(BlueprintType)
struct FSteamNetworkPingLocation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Location;
    
public:
    STEAMCORE_API FSteamNetworkPingLocation();
};

