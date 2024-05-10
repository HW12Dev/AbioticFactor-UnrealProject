#pragma once
#include "CoreMinimal.h"
#include "ESteamLobbyDistanceFilter.generated.h"

UENUM(BlueprintType)
enum class ESteamLobbyDistanceFilter : uint8 {
    Close,
    Default,
    Far,
    Worldwide,
};

