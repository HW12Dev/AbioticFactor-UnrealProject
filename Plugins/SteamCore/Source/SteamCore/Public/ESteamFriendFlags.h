#pragma once
#include "CoreMinimal.h"
#include "ESteamFriendFlags.generated.h"

UENUM(BlueprintType)
enum class ESteamFriendFlags : uint8 {
    None,
    Blocked,
    FriendshipRequested,
    Immediate,
    ClanMember,
    OnGameServer,
    RequestingFriendship,
    RequestingInfo,
    Ignored,
    IgnoredFriend,
    ChatMember,
    All,
};

