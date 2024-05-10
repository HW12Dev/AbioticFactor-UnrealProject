#pragma once
#include "CoreMinimal.h"
#include "ChangeNumOpenSlotsData.h"
#include "OnChangeNumOpenSlotsCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeNumOpenSlotsCallback, const FChangeNumOpenSlotsData&, Data, bool, bWasSuccessful);

