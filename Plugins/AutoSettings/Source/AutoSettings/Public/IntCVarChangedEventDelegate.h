#pragma once
#include "CoreMinimal.h"
#include "IntCVarChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIntCVarChangedEvent, int32, NewValue);

