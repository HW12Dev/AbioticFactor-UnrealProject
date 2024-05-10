#pragma once
#include "CoreMinimal.h"
#include "ScreenshotRequested.h"
#include "OnScreenshotRequestedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScreenshotRequested, const FScreenshotRequested&, Data);

