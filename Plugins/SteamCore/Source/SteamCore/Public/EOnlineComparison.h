#pragma once
#include "CoreMinimal.h"
#include "EOnlineComparison.generated.h"

UENUM(BlueprintType)
enum class EOnlineComparison : uint8 {
    Equals,
    NotEquals,
    GreaterThan,
    GreaterThanEquals,
    LessThan,
    LessThanEquals,
};

