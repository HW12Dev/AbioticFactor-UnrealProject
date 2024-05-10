#pragma once
#include "CoreMinimal.h"
#include "AddAppDependencyResult.h"
#include "OnAddAppDependencyResultAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAddAppDependencyResultAsyncDelegate, const FAddAppDependencyResult&, Data, bool, bWasSuccessful);

