#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "SteamUGCHandle.h"
#include "RemoteStorageFileShareResult.generated.h"

USTRUCT(BlueprintType)
struct FRemoteStorageFileShareResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamUGCHandle File;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    STEAMCORE_API FRemoteStorageFileShareResult();
};

