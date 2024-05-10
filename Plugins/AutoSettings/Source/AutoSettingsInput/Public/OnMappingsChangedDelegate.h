#pragma once
#include "CoreMinimal.h"
#include "OnMappingsChangedDelegate.generated.h"

class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMappingsChanged, APlayerController*, Player);

