#pragma once
#include "CoreMinimal.h"
#include "ESteamLeaderboardDisplayType.generated.h"

UENUM(BlueprintType)
enum class ESteamLeaderboardDisplayType : uint8 {
    None,
    Numeric,
    TimeSeconds,
    TimeMilliSeconds,
};

