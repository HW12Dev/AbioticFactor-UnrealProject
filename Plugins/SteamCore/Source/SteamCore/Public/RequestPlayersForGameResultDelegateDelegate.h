#pragma once
#include "CoreMinimal.h"
#include "RequestPlayersForGameResultCallback.h"
#include "RequestPlayersForGameResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRequestPlayersForGameResultDelegate, const FRequestPlayersForGameResultCallback&, Data);

