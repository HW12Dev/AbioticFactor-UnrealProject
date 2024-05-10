#pragma once
#include "CoreMinimal.h"
#include "EBuffSeverity.generated.h"

UENUM(BlueprintType)
enum class EBuffSeverity : uint8 {
    Positive,
    Minor,
    Moderate,
    Severe,
};

