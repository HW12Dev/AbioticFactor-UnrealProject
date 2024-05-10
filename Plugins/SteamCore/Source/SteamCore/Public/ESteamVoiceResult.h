#pragma once
#include "CoreMinimal.h"
#include "ESteamVoiceResult.generated.h"

UENUM(BlueprintType)
enum class ESteamVoiceResult : uint8 {
    OK,
    NotInitialized,
    NotRecording,
    NoData,
    BufferTooSmall,
    DataCorrupted,
    Restricted,
    UnsupportedCodec,
    ReceiverOutOfDate,
    ReceiverDidNotAnswer,
};

