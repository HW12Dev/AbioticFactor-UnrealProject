#pragma once
#include "CoreMinimal.h"
#include "ESteamChatMemberStateChange.generated.h"

UENUM(BlueprintType)
enum class ESteamChatMemberStateChange : uint8 {
    None,
    Entered,
    Left,
    Disconnected = 4,
    Kicked = 8,
    Banned = 16,
};

