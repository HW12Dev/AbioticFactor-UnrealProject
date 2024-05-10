#pragma once
#include "CoreMinimal.h"
#include "CapturePromptClosedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCapturePromptClosedEvent, bool, bWasCancelled);

