#pragma once
#include "CoreMinimal.h"
#include "ESteamMessageType.generated.h"

UENUM(BlueprintType)
enum class ESteamMessageType : uint8 {
    ENotification,
    EMessage,
    EWarning,
};

