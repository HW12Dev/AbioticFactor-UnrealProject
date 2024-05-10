#pragma once
#include "CoreMinimal.h"
#include "ESteamUniverse.generated.h"

UENUM(BlueprintType)
enum class ESteamUniverse : uint8 {
    Invalid,
    Public,
    Beta,
    Internal,
    Dev,
    Max,
};

