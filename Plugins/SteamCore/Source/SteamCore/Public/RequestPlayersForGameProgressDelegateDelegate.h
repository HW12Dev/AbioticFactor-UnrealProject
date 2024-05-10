#pragma once
#include "CoreMinimal.h"
#include "RequestPlayersForGameProgressCallback.h"
#include "RequestPlayersForGameProgressDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRequestPlayersForGameProgressDelegate, const FRequestPlayersForGameProgressCallback&, Data);

