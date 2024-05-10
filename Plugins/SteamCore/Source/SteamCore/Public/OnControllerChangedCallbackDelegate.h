#pragma once
#include "CoreMinimal.h"
#include "OnControllerChangedCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnControllerChangedCallback, bool, bIsConnected, int32, UserId);

