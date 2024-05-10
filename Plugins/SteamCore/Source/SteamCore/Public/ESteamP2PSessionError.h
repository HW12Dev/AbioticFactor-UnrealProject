#pragma once
#include "CoreMinimal.h"
#include "ESteamP2PSessionError.generated.h"

UENUM(BlueprintType)
enum class ESteamP2PSessionError : uint8 {
    None,
    NotRunningApp,
    NoRightsToApp,
    DestinationNotLoggedIn,
    Timeout,
    Max,
};

