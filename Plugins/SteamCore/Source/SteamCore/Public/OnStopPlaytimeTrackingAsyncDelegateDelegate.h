#pragma once
#include "CoreMinimal.h"
#include "StopPlaytimeTrackingResult.h"
#include "OnStopPlaytimeTrackingAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStopPlaytimeTrackingAsyncDelegate, const FStopPlaytimeTrackingResult&, Data, bool, bWasSuccessful);

