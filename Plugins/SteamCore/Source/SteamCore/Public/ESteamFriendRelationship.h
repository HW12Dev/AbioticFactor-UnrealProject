#pragma once
#include "CoreMinimal.h"
#include "ESteamFriendRelationship.generated.h"

UENUM(BlueprintType)
enum class ESteamFriendRelationship : uint8 {
    None,
    Blocked,
    RequestRecipient,
    Friend,
    RequestInitiator,
    Ignored,
    IgnoredFriend,
    Suggested_DEPRECATED,
    Max,
};

