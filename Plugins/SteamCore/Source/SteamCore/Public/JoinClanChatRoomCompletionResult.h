#pragma once
#include "CoreMinimal.h"
#include "ESteamChatRoomEnterResponse.h"
#include "SteamID.h"
#include "JoinClanChatRoomCompletionResult.generated.h"

USTRUCT(BlueprintType)
struct FJoinClanChatRoomCompletionResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDClanChat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamChatRoomEnterResponse ChatRoomEnterResponse;
    
    STEAMCORE_API FJoinClanChatRoomCompletionResult();
};

