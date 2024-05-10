#pragma once
#include "CoreMinimal.h"
#include "SteamID.h"
#include "GameLobbyJoinRequested.generated.h"

USTRUCT(BlueprintType)
struct FGameLobbyJoinRequested {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDFriend;
    
    STEAMCORE_API FGameLobbyJoinRequested();
};

