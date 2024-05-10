#pragma once
#include "CoreMinimal.h"
#include "ESteamGamepadTextInputMode.generated.h"

UENUM(BlueprintType)
enum class ESteamGamepadTextInputMode : uint8 {
    Normal,
    Password,
};

