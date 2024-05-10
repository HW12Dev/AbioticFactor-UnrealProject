#pragma once
#include "CoreMinimal.h"
#include "SteamID.h"
#include "GameRichPresenceJoinRequested.generated.h"

USTRUCT(BlueprintType)
struct FGameRichPresenceJoinRequested {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDFriend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Connect;
    
    STEAMCORE_API FGameRichPresenceJoinRequested();
};

