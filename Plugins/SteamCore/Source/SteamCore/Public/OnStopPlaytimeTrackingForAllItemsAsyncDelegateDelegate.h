#pragma once
#include "CoreMinimal.h"
#include "StopPlaytimeTrackingResult.h"
#include "OnStopPlaytimeTrackingForAllItemsAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStopPlaytimeTrackingForAllItemsAsyncDelegate, const FStopPlaytimeTrackingResult&, Data, bool, bWasSuccessful);

