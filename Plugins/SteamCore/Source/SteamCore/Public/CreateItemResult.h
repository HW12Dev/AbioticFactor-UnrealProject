#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "PublishedFileID.h"
#include "CreateItemResult.generated.h"

USTRUCT(BlueprintType)
struct FCreateItemResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPublishedFileID PublishedFileID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUserNeedsToAcceptWorkshopLegalAgreement;
    
    STEAMCORE_API FCreateItemResult();
};

