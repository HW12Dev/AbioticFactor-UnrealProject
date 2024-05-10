#pragma once
#include "CoreMinimal.h"
#include "ESteamBeginAuthSessionResult.generated.h"

UENUM(BlueprintType)
enum class ESteamBeginAuthSessionResult : uint8 {
    OK,
    InvalidTicket,
    DuplicateRequest,
    InvalidVersion,
    GameMismatch,
    ExpiredTicket,
};

