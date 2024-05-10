#pragma once
#include "CoreMinimal.h"
#include "ESteamPartiesBeaconLocationData.generated.h"

UENUM(BlueprintType)
enum class ESteamPartiesBeaconLocationData : uint8 {
    Invalid,
    Name,
    IconURLSmall,
    IconURLMedium,
    IconURLLarge,
};

