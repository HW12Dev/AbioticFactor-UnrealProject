#pragma once
#include "CoreMinimal.h"
#include "SteamID.h"
#include "GameConnectedFriendChatMsg.generated.h"

USTRUCT(BlueprintType)
struct FGameConnectedFriendChatMsg {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MessageID;
    
    STEAMCORE_API FGameConnectedFriendChatMsg();
};

