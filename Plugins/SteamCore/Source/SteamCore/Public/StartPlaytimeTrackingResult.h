#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "StartPlaytimeTrackingResult.generated.h"

USTRUCT(BlueprintType)
struct FStartPlaytimeTrackingResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    STEAMCORE_API FStartPlaytimeTrackingResult();
};

