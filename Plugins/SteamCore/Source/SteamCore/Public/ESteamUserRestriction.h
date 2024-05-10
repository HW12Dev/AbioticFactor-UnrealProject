#pragma once
#include "CoreMinimal.h"
#include "ESteamUserRestriction.generated.h"

UENUM(BlueprintType)
enum class ESteamUserRestriction : uint8 {
    None,
    Unknown,
    AnyChat,
    VoiceChat = 4,
    GroupChat = 8,
    Rating = 16,
    GameInvites = 32,
    Trading = 64,
};

