#pragma once
#include "CoreMinimal.h"
#include "ESteamLobbyComparison.generated.h"

UENUM(BlueprintType)
enum class ESteamLobbyComparison : uint8 {
    EqualToOrLessThan,
    LessThan,
    Equal,
    GreaterThan,
    EqualToOrGreaterThan,
    NotEqual,
};

