#pragma once
#include "CoreMinimal.h"
#include "StopPlaytimeTrackingResult.h"
#include "OnStopPlaytimeTrackingForAllItemsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnStopPlaytimeTrackingForAllItems, const FStopPlaytimeTrackingResult&, Data, bool, bWasSuccessful);

