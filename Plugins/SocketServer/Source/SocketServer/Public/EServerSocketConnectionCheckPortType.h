#pragma once
#include "CoreMinimal.h"
#include "EServerSocketConnectionCheckPortType.generated.h"

UENUM(BlueprintType)
enum class EServerSocketConnectionCheckPortType : uint8 {
    E_TCP,
    E_UDP,
};

