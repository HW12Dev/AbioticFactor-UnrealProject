#pragma once
#include "CoreMinimal.h"
#include "CapturedInput.h"
#include "ChordRejectedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChordRejectedEvent, FCapturedInput, CapturedInput);

