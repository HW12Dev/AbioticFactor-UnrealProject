#pragma once
#include "CoreMinimal.h"
#include "EServerSocketConnectionProtocol.generated.h"

UENUM(BlueprintType)
enum class EServerSocketConnectionProtocol : uint8 {
    E_NotSet,
    E_TCP,
    E_UDP,
};

