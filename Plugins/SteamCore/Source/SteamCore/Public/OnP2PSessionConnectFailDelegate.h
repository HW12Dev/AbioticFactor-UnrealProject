#pragma once
#include "CoreMinimal.h"
#include "P2PSessionConnectFail.h"
#include "OnP2PSessionConnectFailDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnP2PSessionConnectFail, const FP2PSessionConnectFail&, Data);

