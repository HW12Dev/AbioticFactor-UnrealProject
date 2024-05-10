#pragma once
#include "CoreMinimal.h"
#include "SteamID.h"
#include "GSStatsUnloaded.generated.h"

USTRUCT(BlueprintType)
struct FGSStatsUnloaded {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDUser;
    
    STEAMCORE_API FGSStatsUnloaded();
};

