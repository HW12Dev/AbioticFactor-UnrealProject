#pragma once
#include "CoreMinimal.h"
#include "ESteamPlayerAcceptState.generated.h"

UENUM(BlueprintType)
enum class ESteamPlayerAcceptState : uint8 {
    Unknown,
    PlayerAccepted,
    PlayerDeclined,
};

