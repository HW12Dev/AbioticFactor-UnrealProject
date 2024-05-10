#pragma once
#include "CoreMinimal.h"
#include "ESteamAudioPlaybackStatus.generated.h"

UENUM(BlueprintType)
enum class ESteamAudioPlaybackStatus : uint8 {
    Undefined,
    Playing,
    Paused,
    Idle,
};

