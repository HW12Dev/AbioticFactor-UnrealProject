#pragma once
#include "CoreMinimal.h"
#include "ESteamPlayerResult.generated.h"

UENUM(BlueprintType)
enum class ESteamPlayerResult : uint8 {
    Invalid,
    FailedToConnect,
    Abandoned,
    Kicked,
    Incomplete,
    Completed,
};

