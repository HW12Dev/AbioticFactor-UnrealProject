#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "RemoteStorageFileReadAsyncComplete.generated.h"

USTRUCT(BlueprintType)
struct FRemoteStorageFileReadAsyncComplete {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Read;
    
    STEAMCORE_API FRemoteStorageFileReadAsyncComplete();
};

