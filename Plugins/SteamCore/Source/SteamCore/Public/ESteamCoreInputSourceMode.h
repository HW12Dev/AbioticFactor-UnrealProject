#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreInputSourceMode.generated.h"

UENUM(BlueprintType)
enum class ESteamCoreInputSourceMode : uint8 {
    None,
    Dpad,
    Buttons,
    FourButtons,
    AbsoluteMouse,
    RelativeMouse,
    JoystickMove,
    JoystickMouse,
    JoystickCamera,
    ScrollWheel,
    Trigger,
    TouchMenu,
    MouseJoystick,
    MouseRegion,
    RadialMenu,
    SingleButton,
    Switches,
};

