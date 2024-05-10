#pragma once
#include "CoreMinimal.h"
#include "EOpusFramePerSec.generated.h"

UENUM(BlueprintType)
enum class EOpusFramePerSec : uint8 {
    OPUS_FPS_400,
    OPUS_FPS_200,
    OPUS_FPS_100,
    OPUS_FPS_50,
    OPUS_FPS_25,
};

