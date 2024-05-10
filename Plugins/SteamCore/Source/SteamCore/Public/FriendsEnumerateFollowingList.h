#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "SteamID.h"
#include "FriendsEnumerateFollowingList.generated.h"

USTRUCT(BlueprintType)
struct FFriendsEnumerateFollowingList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSteamID> SteamIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Results;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalResult;
    
    STEAMCORE_API FFriendsEnumerateFollowingList();
};

