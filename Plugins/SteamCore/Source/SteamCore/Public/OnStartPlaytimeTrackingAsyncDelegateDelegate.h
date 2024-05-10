#pragma once
#include "CoreMinimal.h"
#include "StartPlaytimeTrackingResult.h"
#include "OnStartPlaytimeTrackingAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStartPlaytimeTrackingAsyncDelegate, const FStartPlaytimeTrackingResult&, Data, bool, bWasSuccessful);

