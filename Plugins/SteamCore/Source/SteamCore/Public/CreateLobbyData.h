#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "SteamID.h"
#include "CreateLobbyData.generated.h"

USTRUCT(BlueprintType)
struct FCreateLobbyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDLobby;
    
    STEAMCORE_API FCreateLobbyData();
};

