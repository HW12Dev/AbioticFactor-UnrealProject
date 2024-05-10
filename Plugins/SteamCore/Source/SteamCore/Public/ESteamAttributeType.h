#pragma once
#include "CoreMinimal.h"
#include "ESteamAttributeType.generated.h"

UENUM(BlueprintType)
enum class ESteamAttributeType : uint8 {
    NOT_SET,
    INTEGER,
    STRING,
};

