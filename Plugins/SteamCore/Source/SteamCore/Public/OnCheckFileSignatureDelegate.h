#pragma once
#include "CoreMinimal.h"
#include "CheckFileSignature.h"
#include "OnCheckFileSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCheckFileSignature, const FCheckFileSignature&, Data);

