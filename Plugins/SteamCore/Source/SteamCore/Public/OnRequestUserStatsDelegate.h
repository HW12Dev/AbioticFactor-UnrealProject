#pragma once
#include "CoreMinimal.h"
#include "RequestUserStatsData.h"
#include "OnRequestUserStatsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRequestUserStats, const FRequestUserStatsData&, Data, bool, bWasSuccessful);

