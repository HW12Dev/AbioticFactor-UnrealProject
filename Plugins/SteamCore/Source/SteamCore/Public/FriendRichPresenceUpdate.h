#pragma once
#include "CoreMinimal.h"
#include "SteamID.h"
#include "FriendRichPresenceUpdate.generated.h"

USTRUCT(BlueprintType)
struct FFriendRichPresenceUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDFriend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AppID;
    
    STEAMCORE_API FFriendRichPresenceUpdate();
};

