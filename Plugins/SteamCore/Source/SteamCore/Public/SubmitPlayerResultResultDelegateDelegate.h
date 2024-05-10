#pragma once
#include "CoreMinimal.h"
#include "SubmitPlayerResultResultCallback.h"
#include "SubmitPlayerResultResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSubmitPlayerResultResultDelegate, const FSubmitPlayerResultResultCallback&, Data);

