#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreXboxOrigin.generated.h"

UENUM(BlueprintType)
enum class ESteamCoreXboxOrigin : uint8 {
    A,
    B,
    X,
    Y,
    LeftBumper,
    RightBumper,
    Menu,
    View,
    LeftTrigger_Pull,
    LeftTrigger_Click,
    RightTrigger_Pull,
    RightTrigger_Click,
    LeftStick_Move,
    LeftStick_Click,
    LeftStick_DPadNorth,
    LeftStick_DPadSouth,
    LeftStick_DPadWest,
    LeftStick_DPadEast,
    RightStick_Move,
    RightStick_Click,
    RightStick_DPadNorth,
    RightStick_DPadSouth,
    RightStick_DPadWest,
    RightStick_DPadEast,
    DPad_North,
    DPad_South,
    DPad_West,
    DPad_East,
    Count,
};

