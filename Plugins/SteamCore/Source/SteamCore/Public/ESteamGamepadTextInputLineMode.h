#pragma once
#include "CoreMinimal.h"
#include "ESteamGamepadTextInputLineMode.generated.h"

UENUM(BlueprintType)
enum class ESteamGamepadTextInputLineMode : uint8 {
    SingleLine,
    MultipleLines,
};

