#pragma once
#include "CoreMinimal.h"
#include "FloatCVarChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FFloatCVarChangedSignature, float, NewValue);

