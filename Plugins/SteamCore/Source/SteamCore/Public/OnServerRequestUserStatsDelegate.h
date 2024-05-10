#pragma once
#include "CoreMinimal.h"
#include "GSStatsReceived.h"
#include "OnServerRequestUserStatsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnServerRequestUserStats, const FGSStatsReceived&, Data, bool, bWasSuccessful);

