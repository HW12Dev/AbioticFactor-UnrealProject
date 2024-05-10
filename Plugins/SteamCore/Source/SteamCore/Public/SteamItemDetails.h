#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreItemFlags.h"
#include "SteamItemDef.h"
#include "SteamItemInstanceID.h"
#include "SteamItemDetails.generated.h"

USTRUCT(BlueprintType)
struct FSteamItemDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamItemInstanceID InstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamItemDef Definition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<ESteamCoreItemFlags>> Flags;
    
    STEAMCORE_API FSteamItemDetails();
};

