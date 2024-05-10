#pragma once
#include "CoreMinimal.h"
#include "SteamID.h"
#include "AvatarImageLoaded.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FAvatarImageLoaded {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Image;
    
    STEAMCORE_API FAvatarImageLoaded();
};

