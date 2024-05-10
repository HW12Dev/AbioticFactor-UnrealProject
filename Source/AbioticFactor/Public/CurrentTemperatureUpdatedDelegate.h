#pragma once
#include "CoreMinimal.h"
#include "CurrentTemperatureUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCurrentTemperatureUpdated, float, NewTemperature);

