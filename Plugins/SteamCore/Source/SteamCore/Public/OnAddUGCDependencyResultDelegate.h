#pragma once
#include "CoreMinimal.h"
#include "AddUGCDependencyResult.h"
#include "OnAddUGCDependencyResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnAddUGCDependencyResult, const FAddUGCDependencyResult&, Data, bool, bWasSuccessful);

