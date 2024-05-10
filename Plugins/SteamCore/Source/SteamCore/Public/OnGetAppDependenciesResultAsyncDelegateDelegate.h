#pragma once
#include "CoreMinimal.h"
#include "GetAppDependenciesResult.h"
#include "OnGetAppDependenciesResultAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGetAppDependenciesResultAsyncDelegate, const FGetAppDependenciesResult&, Data, bool, bWasSuccessful);

