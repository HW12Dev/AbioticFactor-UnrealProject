#pragma once
#include "CoreMinimal.h"
#include "EDynamicProperty.generated.h"

UENUM(BlueprintType)
enum class EDynamicProperty : uint8 {
    CurrentAmmo,
    TimerState,
    GrowthStage,
    GrowthProgress,
    CurrentFixState,
    TeleporterFrequency,
    PaintColor,
};

