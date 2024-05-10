#pragma once
#include "CoreMinimal.h"
#include "GetAppDependenciesResult.h"
#include "OnGetAppDependenciesResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGetAppDependenciesResult, const FGetAppDependenciesResult&, Data, bool, bWasSuccessful);

