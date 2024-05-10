#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "SteamGameID.h"
#include "SteamID.h"
#include "RequestUserStatsData.generated.h"

USTRUCT(BlueprintType)
struct FRequestUserStatsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamGameID GameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDUser;
    
    STEAMCORE_API FRequestUserStatsData();
};

