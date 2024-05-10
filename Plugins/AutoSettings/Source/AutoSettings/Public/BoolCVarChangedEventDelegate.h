#pragma once
#include "CoreMinimal.h"
#include "BoolCVarChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBoolCVarChangedEvent, bool, NewValue);

