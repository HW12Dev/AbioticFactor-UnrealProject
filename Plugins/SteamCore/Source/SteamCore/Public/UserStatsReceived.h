#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "SteamID.h"
#include "UserStatsReceived.generated.h"

USTRUCT(BlueprintType)
struct FUserStatsReceived {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID GameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamID;
    
    STEAMCORE_API FUserStatsReceived();
};

