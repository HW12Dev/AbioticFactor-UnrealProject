#pragma once
#include "CoreMinimal.h"
#include "ESteamUserUGCList.generated.h"

UENUM(BlueprintType)
enum class ESteamUserUGCList : uint8 {
    Published,
    VotedOn,
    VotedUp,
    VotedDown,
    WillVoteLater,
    Favorited,
    Subscribed,
    UsedOrPlayed,
    Followed,
};

