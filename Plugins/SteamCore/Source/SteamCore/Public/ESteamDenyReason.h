#pragma once
#include "CoreMinimal.h"
#include "ESteamDenyReason.generated.h"

UENUM(BlueprintType)
enum class ESteamDenyReason : uint8 {
    Invalid,
    InvalidVersion,
    Generic,
    NotLoggedOn,
    NoLicense,
    Cheater,
    LoggedInElseWhere,
    UnknownText,
    IncompatibleAnticheat,
    MemoryCorruption,
    IncompatibleSoftware,
    SteamConnectionLost,
    SteamConnectionError,
    SteamResponseTimedOut,
    SteamValidationStalled,
    SteamOwnerLeftGuestUser,
};

