#pragma once
#include "CoreMinimal.h"
#include "EOptimizationWave.h"
#include "OptimizationChangeWaveDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOptimizationChangeWave, EOptimizationWave, NewWave);

