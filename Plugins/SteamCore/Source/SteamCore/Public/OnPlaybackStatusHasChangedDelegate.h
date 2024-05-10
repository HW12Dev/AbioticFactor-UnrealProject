#pragma once
#include "CoreMinimal.h"
#include "PlaybackStatusHasChanged.h"
#include "OnPlaybackStatusHasChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlaybackStatusHasChanged, const FPlaybackStatusHasChanged&, Data);

