#pragma once
#include "CoreMinimal.h"
#include "ESteamChatRoomEnterResponse.generated.h"

UENUM(BlueprintType)
enum class ESteamChatRoomEnterResponse : uint8 {
    None,
    Success,
    DoesntExist,
    NotAllowed,
    Full,
    Error,
    Banned,
    Limited,
    ClanDisabled,
    CommunityBan,
    MemberBlockedYou,
    YouBlockedMember,
    RatelimitExceeded = 15,
};

