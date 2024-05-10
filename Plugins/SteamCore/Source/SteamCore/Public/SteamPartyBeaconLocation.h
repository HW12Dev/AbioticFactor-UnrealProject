#pragma once
#include "CoreMinimal.h"
#include "ESteamPartiesBeaconLocationType.h"
#include "SteamPartyBeaconLocation.generated.h"

USTRUCT(BlueprintType)
struct FSteamPartyBeaconLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamPartiesBeaconLocationType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocationId;
    
    STEAMCORE_API FSteamPartyBeaconLocation();
};

