#pragma once
#include "CoreMinimal.h"
#include "ScreenshotReady.h"
#include "OnScreenshotReadyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScreenshotReady, const FScreenshotReady&, Data);

