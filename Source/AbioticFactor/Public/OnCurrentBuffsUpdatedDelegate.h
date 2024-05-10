#pragma once
#include "CoreMinimal.h"
#include "OnCurrentBuffsUpdatedDelegate.generated.h"

class UCharacterBuffComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCurrentBuffsUpdated, UCharacterBuffComponent*, BuffComponent);

