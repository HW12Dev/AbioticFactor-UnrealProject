#pragma once
#include "CoreMinimal.h"
#include "ESteamItemPreviewType.generated.h"

UENUM(BlueprintType)
enum class ESteamItemPreviewType : uint8 {
    Image,
    YouTubeVideo,
    Sketchfab,
    EnvironmentMap_HorizontalCross,
    EnvironmentMap_LatLong,
    ReservedMax = 254,
};

