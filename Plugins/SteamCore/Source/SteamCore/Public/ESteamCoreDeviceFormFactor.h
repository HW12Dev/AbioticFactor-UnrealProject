#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreDeviceFormFactor.generated.h"

UENUM(BlueprintType)
enum class ESteamCoreDeviceFormFactor : uint8 {
    Unknown,
    Phone,
    Tablet,
    Computer,
    TV,
};

