#pragma once
#include "CoreMinimal.h"
#include "GameOverlayActivated.h"
#include "OnGameOverlayActivatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameOverlayActivated, const FGameOverlayActivated&, Data);

