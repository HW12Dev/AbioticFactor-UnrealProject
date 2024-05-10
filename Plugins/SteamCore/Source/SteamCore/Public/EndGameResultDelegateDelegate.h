#pragma once
#include "CoreMinimal.h"
#include "EndGameResultCallback.h"
#include "EndGameResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndGameResultDelegate, const FEndGameResultCallback&, Data);

