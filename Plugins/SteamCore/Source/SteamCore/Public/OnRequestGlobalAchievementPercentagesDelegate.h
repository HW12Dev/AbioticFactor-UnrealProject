#pragma once
#include "CoreMinimal.h"
#include "GlobalAchievementPercentagesReady.h"
#include "OnRequestGlobalAchievementPercentagesDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRequestGlobalAchievementPercentages, const FGlobalAchievementPercentagesReady&, Data, bool, bWasSuccessful);

