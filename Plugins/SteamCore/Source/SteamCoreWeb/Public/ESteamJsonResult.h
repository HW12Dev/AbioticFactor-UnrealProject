#pragma once
#include "CoreMinimal.h"
#include "ESteamJsonResult.generated.h"

UENUM(BlueprintType)
enum class ESteamJsonResult : uint8 {
    Found,
    NotFound,
};

