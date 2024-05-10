#pragma once
#include "CoreMinimal.h"
#include "AddUGCDependencyResult.h"
#include "OnAddUGCDependencyResultAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAddUGCDependencyResultAsyncDelegate, const FAddUGCDependencyResult&, Data, bool, bWasSuccessful);

