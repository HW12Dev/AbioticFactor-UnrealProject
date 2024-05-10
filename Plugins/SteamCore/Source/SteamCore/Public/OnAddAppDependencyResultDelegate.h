#pragma once
#include "CoreMinimal.h"
#include "AddAppDependencyResult.h"
#include "OnAddAppDependencyResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnAddAppDependencyResult, const FAddAppDependencyResult&, Data, bool, bWasSuccessful);

