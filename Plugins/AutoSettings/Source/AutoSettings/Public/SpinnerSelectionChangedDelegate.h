#pragma once
#include "CoreMinimal.h"
#include "SpinnerSelectionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpinnerSelectionChanged, const FString&, Value);

