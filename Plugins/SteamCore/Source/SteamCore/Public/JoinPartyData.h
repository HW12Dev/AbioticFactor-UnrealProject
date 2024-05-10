#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "PartyBeaconID.h"
#include "SteamID.h"
#include "JoinPartyData.generated.h"

USTRUCT(BlueprintType)
struct FJoinPartyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyBeaconID BeaconID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDBeaconOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConnectString;
    
    STEAMCORE_API FJoinPartyData();
};

