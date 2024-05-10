#pragma once
#include "CoreMinimal.h"
#include "OnPreLoadMapTriggeredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPreLoadMapTriggered, const FString&, MapName);

