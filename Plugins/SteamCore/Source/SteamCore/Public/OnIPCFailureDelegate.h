#pragma once
#include "CoreMinimal.h"
#include "IPCFailure.h"
#include "OnIPCFailureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIPCFailure, const FIPCFailure&, Data);

