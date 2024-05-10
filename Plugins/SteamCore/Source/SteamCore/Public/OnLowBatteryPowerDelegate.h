#pragma once
#include "CoreMinimal.h"
#include "LowBatteryPower.h"
#include "OnLowBatteryPowerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLowBatteryPower, const FLowBatteryPower&, Data);

