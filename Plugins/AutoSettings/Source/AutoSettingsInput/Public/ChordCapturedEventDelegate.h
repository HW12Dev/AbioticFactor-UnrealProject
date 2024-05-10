#pragma once
#include "CoreMinimal.h"
#include "CapturedInput.h"
#include "ChordCapturedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChordCapturedEvent, FCapturedInput, CapturedInput);

