#pragma once
#include "CoreMinimal.h"
#include "P2PSessionRequest.h"
#include "OnP2PSessionRequestDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnP2PSessionRequest, const FP2PSessionRequest&, Data);

