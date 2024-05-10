#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreInputLEDFlag.generated.h"

UENUM(BlueprintType)
enum class ESteamCoreInputLEDFlag : uint8 {
    SetColor,
    RestoreUserDefault,
};

