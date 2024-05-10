#pragma once
#include "CoreMinimal.h"
#include "SteamID.h"
#include "SteamUGCHandle.h"
#include "SteamLeaderboardEntry.generated.h"

USTRUCT(BlueprintType)
struct FSteamLeaderboardEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GlobalRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Details;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamUGCHandle UGCHandle;
    
    STEAMCORE_API FSteamLeaderboardEntry();
};

