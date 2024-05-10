#pragma once
#include "CoreMinimal.h"
#include "SubmitItemUpdateResult.h"
#include "OnSubmitItemUpdateAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSubmitItemUpdateAsyncDelegate, const FSubmitItemUpdateResult&, Data, bool, bWasSuccessful);

