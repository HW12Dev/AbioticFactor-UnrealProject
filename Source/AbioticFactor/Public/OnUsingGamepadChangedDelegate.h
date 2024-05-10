#pragma once
#include "CoreMinimal.h"
#include "OnUsingGamepadChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUsingGamepadChanged, bool, bUsingGamepad);

