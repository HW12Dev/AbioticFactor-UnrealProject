#pragma once
#include "CoreMinimal.h"
#include "MicroTxnAuthorizationResponse.h"
#include "OnMicroTxnAuthorizationResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMicroTxnAuthorizationResponse, const FMicroTxnAuthorizationResponse&, Data);

