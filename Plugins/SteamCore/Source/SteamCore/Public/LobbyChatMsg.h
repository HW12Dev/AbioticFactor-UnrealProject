#pragma once
#include "CoreMinimal.h"
#include "ESteamChatEntryType.h"
#include "SteamID.h"
#include "LobbyChatMsg.generated.h"

USTRUCT(BlueprintType)
struct FLobbyChatMsg {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamChatEntryType ChatEntryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChatID;
    
    STEAMCORE_API FLobbyChatMsg();
};

