#pragma once
#include "CoreMinimal.h"
#include "ESteamAccountType.generated.h"

UENUM(BlueprintType)
enum class ESteamAccountType : uint8 {
    Invalid,
    Individual,
    Multiseat,
    GameServer,
    AnonGameServer,
    Pending,
    ContentServer,
    Clan,
    Chat,
    ConsoleUser,
    AnonUser,
    Max,
};

