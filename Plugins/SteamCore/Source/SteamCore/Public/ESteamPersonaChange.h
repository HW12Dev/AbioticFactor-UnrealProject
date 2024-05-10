#pragma once
#include "CoreMinimal.h"
#include "ESteamPersonaChange.generated.h"

UENUM(BlueprintType)
enum class ESteamPersonaChange : uint8 {
    Name,
    Status,
    ComeOnline,
    GoneOffline,
    GamePlayed,
    GameServer,
    Avatar,
    JoinedSource,
    LeftSource,
    RelationshipChanged,
    NameFirstSet,
    FacebookInfo,
    Nickname,
    SteamLevel,
};

