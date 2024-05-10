#pragma once
#include "CoreMinimal.h"
#include "ESteamP2PSend.generated.h"

UENUM(BlueprintType)
enum class ESteamP2PSend : uint8 {
    Unreliable,
    UnreliableNoDelay,
    Reliable,
    ReliableWithBuffering,
};

