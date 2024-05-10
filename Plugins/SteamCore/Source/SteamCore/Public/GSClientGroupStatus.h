#pragma once
#include "CoreMinimal.h"
#include "SteamID.h"
#include "GSClientGroupStatus.generated.h"

USTRUCT(BlueprintType)
struct FGSClientGroupStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOfficer;
    
    STEAMCORE_API FGSClientGroupStatus();
};

