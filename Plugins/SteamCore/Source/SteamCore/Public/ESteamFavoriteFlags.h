#pragma once
#include "CoreMinimal.h"
#include "ESteamFavoriteFlags.generated.h"

UENUM(BlueprintType)
enum class ESteamFavoriteFlags : uint8 {
    None,
    Favorite,
    History,
};

