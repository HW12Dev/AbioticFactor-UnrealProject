#pragma once
#include "CoreMinimal.h"
#include "OnShowLoadingScreenAdditionalSecsTriggeredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShowLoadingScreenAdditionalSecsTriggered, bool, bIsActive);

