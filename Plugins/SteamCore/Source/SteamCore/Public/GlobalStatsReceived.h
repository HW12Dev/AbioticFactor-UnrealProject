#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "SteamGameID.h"
#include "GlobalStatsReceived.generated.h"

USTRUCT(BlueprintType)
struct FGlobalStatsReceived {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamGameID GameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    STEAMCORE_API FGlobalStatsReceived();
};

