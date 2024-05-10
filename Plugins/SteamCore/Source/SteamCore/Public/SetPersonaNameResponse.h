#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "SetPersonaNameResponse.generated.h"

USTRUCT(BlueprintType)
struct FSetPersonaNameResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocalSuccess;
    
    STEAMCORE_API FSetPersonaNameResponse();
};

