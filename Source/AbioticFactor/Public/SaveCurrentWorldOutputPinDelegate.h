#pragma once
#include "CoreMinimal.h"
#include "SaveCurrentWorldOutputPinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSaveCurrentWorldOutputPin, bool, bSuccess);

