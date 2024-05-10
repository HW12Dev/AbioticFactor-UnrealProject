#pragma once
#include "CoreMinimal.h"
#include "PublishedFileID.h"
#include "ItemInstalled.generated.h"

USTRUCT(BlueprintType)
struct FItemInstalled {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AppID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPublishedFileID PublishedFileID;
    
    STEAMCORE_API FItemInstalled();
};

