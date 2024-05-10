#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "SteamLeaderboard.h"
#include "AttachLeaderboardUGCData.generated.h"

USTRUCT(BlueprintType)
struct FAttachLeaderboardUGCData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamLeaderboard SteamLeaderboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    STEAMCORE_API FAttachLeaderboardUGCData();
};

