#pragma once
#include "CoreMinimal.h"
#include "GSStatsStored.h"
#include "OnServerStoreUserStatsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnServerStoreUserStats, const FGSStatsStored&, Data, bool, bWasSuccessful);

