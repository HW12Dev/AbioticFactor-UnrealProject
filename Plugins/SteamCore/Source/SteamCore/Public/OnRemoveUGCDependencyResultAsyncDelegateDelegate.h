#pragma once
#include "CoreMinimal.h"
#include "RemoveUGCDependencyResult.h"
#include "OnRemoveUGCDependencyResultAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRemoveUGCDependencyResultAsyncDelegate, const FRemoveUGCDependencyResult&, Data, bool, bWasSuccessful);

