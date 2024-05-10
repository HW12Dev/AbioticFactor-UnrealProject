#pragma once
#include "CoreMinimal.h"
#include "OnSeamlessTravelStartDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSeamlessTravelStart, const FString&, MapName);

