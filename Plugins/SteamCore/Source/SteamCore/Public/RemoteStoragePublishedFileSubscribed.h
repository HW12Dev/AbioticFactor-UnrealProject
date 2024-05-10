#pragma once
#include "CoreMinimal.h"
#include "PublishedFileID.h"
#include "RemoteStoragePublishedFileSubscribed.generated.h"

USTRUCT(BlueprintType)
struct FRemoteStoragePublishedFileSubscribed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPublishedFileID PublishedFileID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AppID;
    
    STEAMCORE_API FRemoteStoragePublishedFileSubscribed();
};

