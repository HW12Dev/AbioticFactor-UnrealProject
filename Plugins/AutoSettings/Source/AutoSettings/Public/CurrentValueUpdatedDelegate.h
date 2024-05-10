#pragma once
#include "CoreMinimal.h"
#include "CurrentValueUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCurrentValueUpdated, const FString&, Value);

