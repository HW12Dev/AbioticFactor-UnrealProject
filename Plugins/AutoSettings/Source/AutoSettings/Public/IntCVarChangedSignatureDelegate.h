#pragma once
#include "CoreMinimal.h"
#include "IntCVarChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FIntCVarChangedSignature, int32, NewValue);

