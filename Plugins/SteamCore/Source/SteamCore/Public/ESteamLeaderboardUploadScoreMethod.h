#pragma once
#include "CoreMinimal.h"
#include "ESteamLeaderboardUploadScoreMethod.generated.h"

UENUM(BlueprintType)
enum class ESteamLeaderboardUploadScoreMethod : uint8 {
    None,
    KeepBest,
    ForceUpdate,
};

