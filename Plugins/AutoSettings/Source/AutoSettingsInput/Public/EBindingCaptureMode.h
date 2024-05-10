#pragma once
#include "CoreMinimal.h"
#include "EBindingCaptureMode.generated.h"

UENUM(BlueprintType)
enum class EBindingCaptureMode : uint8 {
    OnReleased,
    OnPressed,
};

