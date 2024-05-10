#pragma once
#include "CoreMinimal.h"
#include "SteamID.h"
#include "UserStatsUnloaded.generated.h"

USTRUCT(BlueprintType)
struct FUserStatsUnloaded {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDUser;
    
    STEAMCORE_API FUserStatsUnloaded();
};

