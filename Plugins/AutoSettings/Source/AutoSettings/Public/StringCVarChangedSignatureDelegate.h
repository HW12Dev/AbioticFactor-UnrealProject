#pragma once
#include "CoreMinimal.h"
#include "StringCVarChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FStringCVarChangedSignature, const FString&, NewValue);

