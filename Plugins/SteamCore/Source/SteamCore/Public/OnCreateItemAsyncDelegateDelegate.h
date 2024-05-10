#pragma once
#include "CoreMinimal.h"
#include "CreateItemResult.h"
#include "OnCreateItemAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCreateItemAsyncDelegate, const FCreateItemResult&, Data, bool, bWasSuccessful);

