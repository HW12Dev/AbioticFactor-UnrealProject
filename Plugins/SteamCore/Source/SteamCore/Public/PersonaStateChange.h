#pragma once
#include "CoreMinimal.h"
#include "ESteamPersonaChange.h"
#include "SteamID.h"
#include "PersonaStateChange.generated.h"

USTRUCT(BlueprintType)
struct FPersonaStateChange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESteamPersonaChange> Flags;
    
    STEAMCORE_API FPersonaStateChange();
};

