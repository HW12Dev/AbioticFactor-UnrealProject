#pragma once
#include "CoreMinimal.h"
#include "RemoveAppDependencyResult.h"
#include "OnRemoveAppDependencyResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRemoveAppDependencyResult, const FRemoveAppDependencyResult&, Data, bool, bWasSuccessful);

