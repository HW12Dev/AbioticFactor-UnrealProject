#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "RemoteStorageFileWriteAsyncComplete.generated.h"

USTRUCT(BlueprintType)
struct FRemoteStorageFileWriteAsyncComplete {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    STEAMCORE_API FRemoteStorageFileWriteAsyncComplete();
};

