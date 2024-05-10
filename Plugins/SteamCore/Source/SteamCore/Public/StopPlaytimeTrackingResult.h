#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "StopPlaytimeTrackingResult.generated.h"

USTRUCT(BlueprintType)
struct FStopPlaytimeTrackingResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    STEAMCORE_API FStopPlaytimeTrackingResult();
};

