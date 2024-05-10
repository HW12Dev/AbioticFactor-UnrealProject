#pragma once
#include "CoreMinimal.h"
#include "GSClientApprove.h"
#include "OnGSClientApproveDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGSClientApprove, const FGSClientApprove&, Data);

