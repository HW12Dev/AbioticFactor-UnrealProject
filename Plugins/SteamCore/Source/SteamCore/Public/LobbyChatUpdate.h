#pragma once
#include "CoreMinimal.h"
#include "ESteamChatMemberStateChange.h"
#include "SteamID.h"
#include "LobbyChatUpdate.generated.h"

USTRUCT(BlueprintType)
struct FLobbyChatUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDUserChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDMakingChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESteamChatMemberStateChange> ChatMemberStateChange;
    
    STEAMCORE_API FLobbyChatUpdate();
};

