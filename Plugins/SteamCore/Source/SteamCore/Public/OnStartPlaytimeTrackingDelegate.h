#pragma once
#include "CoreMinimal.h"
#include "StartPlaytimeTrackingResult.h"
#include "OnStartPlaytimeTrackingDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnStartPlaytimeTracking, const FStartPlaytimeTrackingResult&, Data, bool, bWasSuccessful);

