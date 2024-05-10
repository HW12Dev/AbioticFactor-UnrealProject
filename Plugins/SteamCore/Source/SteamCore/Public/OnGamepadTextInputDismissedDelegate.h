#pragma once
#include "CoreMinimal.h"
#include "GamepadTextInputDismissed.h"
#include "OnGamepadTextInputDismissedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGamepadTextInputDismissed, const FGamepadTextInputDismissed&, Data);

