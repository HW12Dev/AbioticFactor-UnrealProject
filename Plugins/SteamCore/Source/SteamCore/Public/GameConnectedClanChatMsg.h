#pragma once
#include "CoreMinimal.h"
#include "SteamID.h"
#include "GameConnectedClanChatMsg.generated.h"

USTRUCT(BlueprintType)
struct FGameConnectedClanChatMsg {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDClanChat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MessageID;
    
    STEAMCORE_API FGameConnectedClanChatMsg();
};

