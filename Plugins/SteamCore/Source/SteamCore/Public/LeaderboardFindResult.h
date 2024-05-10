#pragma once
#include "CoreMinimal.h"
#include "SteamLeaderboard.h"
#include "LeaderboardFindResult.generated.h"

USTRUCT(BlueprintType)
struct FLeaderboardFindResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamLeaderboard SteamLeaderboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeaderboardFound;
    
    STEAMCORE_API FLeaderboardFindResult();
};

