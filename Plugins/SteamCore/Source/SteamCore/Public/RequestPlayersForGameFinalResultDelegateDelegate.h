#pragma once
#include "CoreMinimal.h"
#include "RequestPlayersForGameFinalResultCallback.h"
#include "RequestPlayersForGameFinalResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRequestPlayersForGameFinalResultDelegate, const FRequestPlayersForGameFinalResultCallback&, Data);

