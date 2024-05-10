#pragma once
#include "CoreMinimal.h"
#include "ECompendiumUnlockType.generated.h"

UENUM(BlueprintType)
enum class ECompendiumUnlockType : uint8 {
    Exploration,
    Email,
    NarrativeNPC,
    KilLRequirement,
};

