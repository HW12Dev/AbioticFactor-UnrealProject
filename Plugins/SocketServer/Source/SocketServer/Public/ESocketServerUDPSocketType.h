#pragma once
#include "CoreMinimal.h"
#include "ESocketServerUDPSocketType.generated.h"

UENUM(BlueprintType)
enum class ESocketServerUDPSocketType : uint8 {
    E_SSS_SERVER,
    E_SSS_CLIENT,
};

