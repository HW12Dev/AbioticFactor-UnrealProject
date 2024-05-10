#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingLoadStatusDelegate.generated.h"

class ULevelStreaming;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLevelStreamingLoadStatus, ULevelStreaming*, Level);

