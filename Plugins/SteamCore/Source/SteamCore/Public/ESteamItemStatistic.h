#pragma once
#include "CoreMinimal.h"
#include "ESteamItemStatistic.generated.h"

UENUM(BlueprintType)
enum class ESteamItemStatistic : uint8 {
    NumSubscriptions,
    NumFavorites,
    NumFollowers,
    NumUniqueSubscriptions,
    NumUniqueFavorites,
    NumUniqueFollowers,
    NumUniqueWebsiteViews,
    ReportScore,
    NumSecondsPlayed,
    NumPlaytimeSessions,
    NumComments,
    NumSecondsPlayedDuringTimePeriod,
    NumPlaytimeSessionsDuringTimePeriod,
};

