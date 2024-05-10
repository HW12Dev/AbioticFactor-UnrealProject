#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "SteamGameID.h"
#include "GlobalAchievementPercentagesReady.generated.h"

USTRUCT(BlueprintType)
struct FGlobalAchievementPercentagesReady {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamGameID GameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    STEAMCORE_API FGlobalAchievementPercentagesReady();
};

