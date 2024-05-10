#pragma once
#include "CoreMinimal.h"
#include "ESteamPersonaState.generated.h"

UENUM(BlueprintType)
enum class ESteamPersonaState : uint8 {
    Offline,
    Online,
    Busy,
    Away,
    Snooze,
    LookingToTrade,
    LookingToPlay,
    Max,
};

