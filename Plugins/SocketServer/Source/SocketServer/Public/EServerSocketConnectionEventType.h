#pragma once
#include "CoreMinimal.h"
#include "EServerSocketConnectionEventType.generated.h"

UENUM(BlueprintType)
enum class EServerSocketConnectionEventType : uint8 {
    E_Server,
    E_Client,
};

