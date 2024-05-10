#pragma once
#include "CoreMinimal.h"
#include "ESteamFailureType.generated.h"

UENUM(BlueprintType)
enum class ESteamFailureType : uint8 {
    FlushedCallbackQueue,
    PipeFail,
};

