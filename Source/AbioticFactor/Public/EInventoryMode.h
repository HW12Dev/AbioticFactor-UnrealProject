#pragma once
#include "CoreMinimal.h"
#include "EInventoryMode.generated.h"

UENUM(BlueprintType)
enum class EInventoryMode : uint8 {
    Default,
    ContainerView,
    RepairBenchView,
    ChemistryBenchView,
    Journal,
    HealthPanel,
    SkillPanel,
    Crafting,
    ArmorStand,
    Transmog,
    Custom,
};

