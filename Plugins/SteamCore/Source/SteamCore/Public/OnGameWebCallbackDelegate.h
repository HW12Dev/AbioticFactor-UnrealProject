#pragma once
#include "CoreMinimal.h"
#include "GameWebCallback.h"
#include "OnGameWebCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameWebCallback, const FGameWebCallback&, Data);

