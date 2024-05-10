#pragma once
#include "CoreMinimal.h"
#include "EBuffVisibility.generated.h"

UENUM(BlueprintType)
enum class EBuffVisibility : uint8 {
    FullVisibility,
    Hidden,
    HealthScreen,
};

