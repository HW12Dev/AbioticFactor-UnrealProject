#pragma once
#include "CoreMinimal.h"
#include "ESteamLeaderboardSortMethod.generated.h"

UENUM(BlueprintType)
enum class ESteamLeaderboardSortMethod : uint8 {
    None,
    Ascending,
    Descending,
};

