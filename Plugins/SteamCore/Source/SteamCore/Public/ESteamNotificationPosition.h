#pragma once
#include "CoreMinimal.h"
#include "ESteamNotificationPosition.generated.h"

UENUM(BlueprintType)
enum class ESteamNotificationPosition : uint8 {
    TopLeft,
    TopRight,
    BottomLeft,
    BottomRight,
};

