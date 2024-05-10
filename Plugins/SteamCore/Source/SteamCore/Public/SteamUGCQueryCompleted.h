#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "UGCQueryHandle.h"
#include "SteamUGCQueryCompleted.generated.h"

USTRUCT(BlueprintType)
struct FSteamUGCQueryCompleted {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUGCQueryHandle Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumResultsReturned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalMatchingResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCachedData;
    
    STEAMCORE_API FSteamUGCQueryCompleted();
};

