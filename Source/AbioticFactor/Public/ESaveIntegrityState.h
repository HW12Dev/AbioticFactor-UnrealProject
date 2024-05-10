#pragma once
#include "CoreMinimal.h"
#include "ESaveIntegrityState.generated.h"

UENUM(BlueprintType)
enum class ESaveIntegrityState : uint8 {
    Playable,
    UpgradeRequired,
    LaterVersion,
    Incompatible,
    Corrupt,
};

