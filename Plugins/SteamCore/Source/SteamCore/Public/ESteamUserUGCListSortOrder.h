#pragma once
#include "CoreMinimal.h"
#include "ESteamUserUGCListSortOrder.generated.h"

UENUM(BlueprintType)
enum class ESteamUserUGCListSortOrder : uint8 {
    CreationOrderDesc,
    CreationOrderAsc,
    TitleAsc,
    LastUpdatedDesc,
    SubscriptionDateDesc,
    VoteScoreDesc,
    ForModeration,
};

