#pragma once
#include "CoreMinimal.h"
#include "ESteamSessionFindType.generated.h"

UENUM(BlueprintType)
enum class ESteamSessionFindType : uint8 {
    Listen,
    Dedicated,
};

