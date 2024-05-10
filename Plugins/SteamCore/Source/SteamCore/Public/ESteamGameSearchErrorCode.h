#pragma once
#include "CoreMinimal.h"
#include "ESteamGameSearchErrorCode.generated.h"

UENUM(BlueprintType)
enum class ESteamGameSearchErrorCode : uint8 {
    Invalid,
    OK,
    Failed_Search_Already_In_Progress,
    Failed_No_Search_In_Progress,
    Failed_Not_Lobby_Leader,
    Failed_No_Host_Available,
    Failed_Search_Params_Invalid,
    Failed_Offline,
    Failed_NotAuthorized,
    Failed_Unknown_Error,
};

