#pragma once
#include "CoreMinimal.h"
#include "ESteamPartiesBeaconLocationType.generated.h"

UENUM(BlueprintType)
enum class ESteamPartiesBeaconLocationType : uint8 {
    Invalid,
    ChatGroup,
    Max,
};

