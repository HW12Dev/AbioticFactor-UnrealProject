#pragma once
#include "CoreMinimal.h"
#include "EPlantGrowthStage.generated.h"

UENUM(BlueprintType)
enum class EPlantGrowthStage : uint8 {
    Sprout,
    Budding,
    Juvenile,
    Flowering,
    Grown,
    Harvested,
    Regrowing,
    Dead,
};

