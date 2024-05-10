#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSteamCoreWebCallback, const FString&, Data, bool, bWasSuccessful);

