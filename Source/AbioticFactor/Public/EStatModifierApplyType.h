#pragma once
#include "CoreMinimal.h"
#include "EStatModifierApplyType.generated.h"

UENUM(BlueprintType)
enum class EStatModifierApplyType : uint8 {
    Add,
    Multiply,
};

