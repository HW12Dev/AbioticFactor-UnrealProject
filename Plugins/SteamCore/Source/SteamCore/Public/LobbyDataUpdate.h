#pragma once
#include "CoreMinimal.h"
#include "SteamID.h"
#include "LobbyDataUpdate.generated.h"

USTRUCT(BlueprintType)
struct FLobbyDataUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    STEAMCORE_API FLobbyDataUpdate();
};

