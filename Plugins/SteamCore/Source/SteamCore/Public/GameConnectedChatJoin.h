#pragma once
#include "CoreMinimal.h"
#include "SteamID.h"
#include "GameConnectedChatJoin.generated.h"

USTRUCT(BlueprintType)
struct FGameConnectedChatJoin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDClanChat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDUser;
    
    STEAMCORE_API FGameConnectedChatJoin();
};

