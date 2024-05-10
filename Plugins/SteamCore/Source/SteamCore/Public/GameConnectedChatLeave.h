#pragma once
#include "CoreMinimal.h"
#include "SteamID.h"
#include "GameConnectedChatLeave.generated.h"

USTRUCT(BlueprintType)
struct FGameConnectedChatLeave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDClanChat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKicked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDropped;
    
    STEAMCORE_API FGameConnectedChatLeave();
};

