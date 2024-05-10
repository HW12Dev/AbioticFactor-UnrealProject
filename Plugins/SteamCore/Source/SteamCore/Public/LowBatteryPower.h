#pragma once
#include "CoreMinimal.h"
#include "LowBatteryPower.generated.h"

USTRUCT(BlueprintType)
struct FLowBatteryPower {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinutesBatteryLeft;
    
    STEAMCORE_API FLowBatteryPower();
};

