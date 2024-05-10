#pragma once
#include "CoreMinimal.h"
#include "ESteamLeaderboardDataRequest.generated.h"

UENUM(BlueprintType)
enum class ESteamLeaderboardDataRequest : uint8 {
    Global,
    GlobalAroundUser,
    Friends,
    Users,
};

