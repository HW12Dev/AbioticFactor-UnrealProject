#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "PublishedFileID.h"
#include "RemoteStorageSubscribePublishedFileResult.generated.h"

USTRUCT(BlueprintType)
struct FRemoteStorageSubscribePublishedFileResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPublishedFileID PublishedFileID;
    
    STEAMCORE_API FRemoteStorageSubscribePublishedFileResult();
};

