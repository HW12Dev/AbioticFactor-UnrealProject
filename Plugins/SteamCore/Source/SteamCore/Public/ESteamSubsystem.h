#pragma once
#include "CoreMinimal.h"
#include "ESteamSubsystem.generated.h"

UENUM(BlueprintType)
enum class ESteamSubsystem : uint8 {
    SteamCore,
    AppList,
    Apps,
    Friends,
    GameServer,
    GameServerStats,
    Inventory,
    Input,
    Matchmaking,
    MatchmakingServers,
    Music,
    Networking,
    NetworkingUtils,
    ParentalSettings,
    RemoteStorage,
    RemotePlay,
    Screenshots,
    UGC,
    User,
    UserStats,
    Utils,
    Video,
    SteamParties,
    GameSearch,
};

