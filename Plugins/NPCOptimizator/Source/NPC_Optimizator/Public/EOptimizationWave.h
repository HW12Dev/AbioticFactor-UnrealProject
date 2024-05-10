#pragma once
#include "CoreMinimal.h"
#include "EOptimizationWave.generated.h"

UENUM(BlueprintType)
enum class EOptimizationWave : uint8 {
    Invisible,
    NoOptimization,
    FirstWave,
    SecondWave,
    ThirdWave,
};

