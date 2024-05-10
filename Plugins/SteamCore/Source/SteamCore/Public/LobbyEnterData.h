#pragma once
#include "CoreMinimal.h"
#include "ESteamChatRoomEnterResponse.h"
#include "SteamID.h"
#include "LobbyEnterData.generated.h"

USTRUCT(BlueprintType)
struct FLobbyEnterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamChatRoomEnterResponse ChatRoomEnterResponse;
    
    STEAMCORE_API FLobbyEnterData();
};

