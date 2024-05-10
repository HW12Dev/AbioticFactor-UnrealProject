#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreInputType.generated.h"

UENUM(BlueprintType)
enum class ESteamCoreInputType : uint8 {
    k_ESteamInputType_Unknown,
    k_ESteamInputType_SteamController,
    k_ESteamInputType_XBox360Controller,
    k_ESteamInputType_XBoxOneController,
    k_ESteamInputType_GenericGamepad,
    k_ESteamInputType_PS4Controller,
    k_ESteamInputType_AppleMFiController,
    k_ESteamInputType_AndroidController,
    k_ESteamInputType_SwitchJoyConPair,
    k_ESteamInputType_SwitchJoyConSingle,
    k_ESteamInputType_SwitchProController,
    k_ESteamInputType_MobileTouch,
    k_ESteamInputType_PS3Controller,
    k_ESteamInputType_PS5Controller,
    k_ESteamInputType_SteamDeckController,
    k_ESteamInputType_Count,
    k_ESteamInputType_MaximumPossibleValue = 255,
};

