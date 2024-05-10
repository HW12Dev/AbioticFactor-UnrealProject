#pragma once
#include "CoreMinimal.h"
#include "OnInputTypeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInputTypeChanged, bool, bUsingGamepad);

