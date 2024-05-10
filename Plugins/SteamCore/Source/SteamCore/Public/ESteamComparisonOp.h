#pragma once
#include "CoreMinimal.h"
#include "ESteamComparisonOp.generated.h"

UENUM(BlueprintType)
enum class ESteamComparisonOp : uint8 {
    Equals,
    NotEquals,
    GreaterThan,
    GreaterThanEquals,
    LessThan,
    LessThanEquals,
    Near,
    In,
    NotIn,
};

