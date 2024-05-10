#pragma once
#include "CoreMinimal.h"
#include "ESocketServerTCPSeparator.generated.h"

UENUM(BlueprintType)
enum class ESocketServerTCPSeparator : uint8 {
    E_None,
    E_ByteSeparator,
    E_StringSeparator,
    E_LengthSeparator,
};

