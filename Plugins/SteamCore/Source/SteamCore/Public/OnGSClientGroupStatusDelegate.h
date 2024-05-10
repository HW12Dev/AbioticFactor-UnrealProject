#pragma once
#include "CoreMinimal.h"
#include "GSClientGroupStatus.h"
#include "OnGSClientGroupStatusDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGSClientGroupStatus, const FGSClientGroupStatus&, Data);

