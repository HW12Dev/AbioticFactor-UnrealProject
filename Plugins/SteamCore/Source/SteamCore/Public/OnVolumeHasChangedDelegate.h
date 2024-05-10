#pragma once
#include "CoreMinimal.h"
#include "VolumeHasChanged.h"
#include "OnVolumeHasChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVolumeHasChanged, const FVolumeHasChanged&, Data);

