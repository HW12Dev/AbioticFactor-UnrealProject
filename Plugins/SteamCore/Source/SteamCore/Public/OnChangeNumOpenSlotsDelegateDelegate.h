#pragma once
#include "CoreMinimal.h"
#include "ChangeNumOpenSlotsData.h"
#include "OnChangeNumOpenSlotsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeNumOpenSlotsDelegate, const FChangeNumOpenSlotsData&, Data);

