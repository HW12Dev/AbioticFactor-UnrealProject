#pragma once
#include "CoreMinimal.h"
#include "ECVarType.generated.h"

UENUM(BlueprintType)
enum class ECVarType : uint8 {
    Bool,
    Float,
    Int,
    String,
};

