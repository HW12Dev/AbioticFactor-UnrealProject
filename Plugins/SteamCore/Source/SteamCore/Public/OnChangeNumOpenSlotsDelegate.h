#pragma once
#include "CoreMinimal.h"
#include "ChangeNumOpenSlotsData.h"
#include "OnChangeNumOpenSlotsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnChangeNumOpenSlots, const FChangeNumOpenSlotsData&, Data, bool, bWasSuccessful);

