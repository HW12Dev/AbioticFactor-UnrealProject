#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingVisibleStatusDelegate.generated.h"

class ULevelStreaming;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLevelStreamingVisibleStatus, ULevelStreaming*, Level, bool, bVisible);

