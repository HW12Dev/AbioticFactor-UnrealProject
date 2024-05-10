#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingLoadingIndicatorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLevelStreamingLoadingIndicator, bool, bIsLoading);

