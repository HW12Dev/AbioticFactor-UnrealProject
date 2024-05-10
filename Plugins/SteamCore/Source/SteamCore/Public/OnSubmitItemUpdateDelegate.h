#pragma once
#include "CoreMinimal.h"
#include "SubmitItemUpdateResult.h"
#include "OnSubmitItemUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSubmitItemUpdate, const FSubmitItemUpdateResult&, Data, bool, bWasSuccessful);

