#pragma once
#include "CoreMinimal.h"
#include "StopPlaytimeTrackingResult.h"
#include "OnStopPlaytimeTrackingDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnStopPlaytimeTracking, const FStopPlaytimeTrackingResult&, Data, bool, bWasSuccessful);

