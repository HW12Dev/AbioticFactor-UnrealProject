#pragma once
#include "CoreMinimal.h"
#include "EKeybindType.generated.h"

UENUM(BlueprintType)
enum class EKeybindType : uint8 {
    Action,
    Axis,
};

