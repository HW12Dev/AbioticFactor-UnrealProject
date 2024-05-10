#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebAsyncCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSteamCoreWebAsyncCallback, const FString&, Data, bool, bWasSuccessful);

