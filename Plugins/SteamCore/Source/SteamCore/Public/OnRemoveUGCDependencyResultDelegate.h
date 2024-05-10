#pragma once
#include "CoreMinimal.h"
#include "RemoveUGCDependencyResult.h"
#include "OnRemoveUGCDependencyResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRemoveUGCDependencyResult, const FRemoveUGCDependencyResult&, Data, bool, bWasSuccessful);

