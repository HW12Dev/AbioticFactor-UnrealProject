#pragma once
#include "CoreMinimal.h"
#include "EModifiedRuleset.generated.h"

UENUM(BlueprintType)
enum class EModifiedRuleset : uint8 {
    Normal,
    NonStandard,
    ExtremelyModified,
    Modded,
};

