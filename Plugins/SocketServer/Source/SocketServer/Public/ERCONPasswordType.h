#pragma once
#include "CoreMinimal.h"
#include "ERCONPasswordType.generated.h"

UENUM(BlueprintType)
enum class ERCONPasswordType : uint8 {
    E_parameter,
    E_gd,
    E_ad,
};

