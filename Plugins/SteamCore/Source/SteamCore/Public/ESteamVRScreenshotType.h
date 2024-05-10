#pragma once
#include "CoreMinimal.h"
#include "ESteamVRScreenshotType.generated.h"

UENUM(BlueprintType)
enum class ESteamVRScreenshotType : uint8 {
    None,
    Mono,
    Stereo,
    MonoCubemap,
    MonoPanorama,
    StereoPanorama,
};

