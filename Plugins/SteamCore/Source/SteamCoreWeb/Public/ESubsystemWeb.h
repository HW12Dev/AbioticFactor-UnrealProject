#pragma once
#include "CoreMinimal.h"
#include "ESubsystemWeb.generated.h"

UENUM(BlueprintType)
enum class ESubsystemWeb : uint8 {
    SteamCoreWeb,
    Apps,
    Broadcast,
    CheatReporting,
    Community,
    Econ,
    EconMarket,
    Economy,
    GameInventory,
    GameNotifications,
    GameServers,
    GameServerStats,
    Inventory,
    LobbyMatchmaking,
    Leaderboards,
    MicroTxn,
    News,
    PlayerService,
    PublishedFile,
    PublishedItemSearch,
    PublishedItemVoting,
    RemoteStorage,
    User,
    UserAuth,
    UserStats,
    Workshop,
};

