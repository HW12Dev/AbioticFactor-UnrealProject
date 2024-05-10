#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "PartyBeaconID.h"
#include "CreateBeaconData.generated.h"

USTRUCT(BlueprintType)
struct FCreateBeaconData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyBeaconID BeaconID;
    
    STEAMCORE_API FCreateBeaconData();
};

