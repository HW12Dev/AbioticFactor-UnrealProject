#pragma once
#include "CoreMinimal.h"
#include "ESteamCheckFileSignature.generated.h"

UENUM(BlueprintType)
enum class ESteamCheckFileSignature : uint8 {
    InvalidSignature,
    ValidSignature,
    FileNotFound,
    NoSignaturesFoundForThisApp,
    NoSignaturesFoundForThisFile,
};

