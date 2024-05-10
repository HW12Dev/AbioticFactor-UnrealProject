#pragma once
#include "CoreMinimal.h"
#include "ESteamBroadcastUploadResult.generated.h"

UENUM(BlueprintType)
enum class ESteamBroadcastUploadResult : uint8 {
    None,
    OK,
    InitFailed,
    FrameFailed,
    Timeout,
    BandwidthExceeded,
    LowFPS,
    MissingKeyFrames,
    NoConnection,
    RelayFailed,
    SettingsChanged,
    MissingAudio,
    TooFarBehind,
    TranscodeBehind,
};

