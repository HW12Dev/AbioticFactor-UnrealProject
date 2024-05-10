#pragma once
#include "CoreMinimal.h"
#include "GlobalAchievementPercentagesReady.h"
#include "OnRequestGlobalAchievementPercentagesAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRequestGlobalAchievementPercentagesAsyncDelegate, const FGlobalAchievementPercentagesReady&, Data, bool, bWasSuccessful);

