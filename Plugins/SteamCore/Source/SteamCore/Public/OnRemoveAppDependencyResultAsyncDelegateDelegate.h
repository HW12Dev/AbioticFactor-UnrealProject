#pragma once
#include "CoreMinimal.h"
#include "RemoveAppDependencyResult.h"
#include "OnRemoveAppDependencyResultAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRemoveAppDependencyResultAsyncDelegate, const FRemoveAppDependencyResult&, Data, bool, bWasSuccessful);

