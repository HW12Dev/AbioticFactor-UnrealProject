#pragma once
#include "CoreMinimal.h"
#include "EVanityUrlType.generated.h"

UENUM(BlueprintType)
enum class EVanityUrlType : uint8 {
    Individual,
    Group,
    OfficialGameGroup,
};

