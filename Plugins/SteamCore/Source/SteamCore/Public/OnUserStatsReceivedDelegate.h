#pragma once
#include "CoreMinimal.h"
#include "UserStatsReceived.h"
#include "OnUserStatsReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserStatsReceived, const FUserStatsReceived&, Data);

