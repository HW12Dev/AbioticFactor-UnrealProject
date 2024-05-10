#pragma once
#include "CoreMinimal.h"
#include "SteamLeaderboard.h"
#include "SteamLeaderboardEntries.h"
#include "LeaderboardScoresDownloaded.generated.h"

USTRUCT(BlueprintType)
struct FLeaderboardScoresDownloaded {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamLeaderboard SteamLeaderboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamLeaderboardEntries SteamLeaderboardEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EntryCount;
    
    STEAMCORE_API FLeaderboardScoresDownloaded();
};

