#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreInputSource.generated.h"

UENUM(BlueprintType)
enum class ESteamCoreInputSource : uint8 {
    None,
    LeftTrackpad,
    RightTrackpad,
    Joystick,
    ABXY,
    Switch,
    LeftTrigger,
    RightTrigger,
    LeftBumper,
    RightBumper,
    Gyro,
    CenterTrackpad,
    RightJoystick,
    DPad,
    Key,
    Mouse,
    LeftGyro,
    Count,
};

