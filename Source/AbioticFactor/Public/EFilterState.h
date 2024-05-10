#pragma once
#include "CoreMinimal.h"
#include "EFilterState.generated.h"

UENUM(BlueprintType)
enum class EFilterState : uint8 {
    Show,
    Hide,
    OnlyShow,
};

