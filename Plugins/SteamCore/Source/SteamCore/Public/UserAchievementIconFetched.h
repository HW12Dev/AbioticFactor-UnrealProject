#pragma once
#include "CoreMinimal.h"
#include "SteamGameID.h"
#include "UserAchievementIconFetched.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FUserAchievementIconFetched {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamGameID GameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AchievementName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAchieved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    STEAMCORE_API FUserAchievementIconFetched();
};

