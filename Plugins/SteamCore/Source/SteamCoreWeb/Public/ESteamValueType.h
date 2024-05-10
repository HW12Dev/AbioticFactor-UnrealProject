#pragma once
#include "CoreMinimal.h"
#include "ESteamValueType.generated.h"

UENUM(BlueprintType)
enum class ESteamValueType : uint8 {
    STRING,
    NUMBER,
    BOOL,
};

