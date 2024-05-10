#pragma once
#include "CoreMinimal.h"
#include "EBuffApplyStyle.generated.h"

UENUM(BlueprintType)
enum class EBuffApplyStyle : uint8 {
    Stack,
    ReplaceExisting,
    BlockedByExisting,
};

