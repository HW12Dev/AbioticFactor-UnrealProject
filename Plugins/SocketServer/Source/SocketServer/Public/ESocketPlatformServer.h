#pragma once
#include "CoreMinimal.h"
#include "ESocketPlatformServer.generated.h"

UENUM(BlueprintType)
enum class ESocketPlatformServer : uint8 {
    E_SSS_SYSTEM,
    E_SSS_DEFAULT,
    E_SSS_WINDOWS,
    E_SSS_MAC,
    E_SSS_IOS,
    E_SSS_UNIX,
    E_SSS_ANDROID,
    E_SSS_PS4,
    E_SSS_XBOXONE,
    E_SSS_HTML5,
    E_SSS_SWITCH,
};

