#pragma once
#include "CoreMinimal.h"
#include "GlobalStatsReceived.h"
#include "OnRequestGlobalStatsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRequestGlobalStats, const FGlobalStatsReceived&, Data, bool, bWasSuccessful);

