#pragma once
#include "CoreMinimal.h"
#include "ComputeNewPlayerCompatibilityResult.h"
#include "OnComputeNewPlayerCompatibilityDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnComputeNewPlayerCompatibility, const FComputeNewPlayerCompatibilityResult&, Data, bool, bWasSuccessful);

