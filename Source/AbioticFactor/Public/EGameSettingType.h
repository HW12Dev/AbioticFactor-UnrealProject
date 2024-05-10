#pragma once
#include "CoreMinimal.h"
#include "EGameSettingType.generated.h"

UENUM(BlueprintType)
enum class EGameSettingType : uint8 {
    Checkbox,
    Slider,
    Radio,
    Combo,
};

