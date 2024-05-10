#pragma once
#include "CoreMinimal.h"
#include "SteamID.h"
#include "LobbyKickedData.generated.h"

USTRUCT(BlueprintType)
struct FLobbyKickedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDAdmin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKickedDueToDisconnect;
    
    STEAMCORE_API FLobbyKickedData();
};

