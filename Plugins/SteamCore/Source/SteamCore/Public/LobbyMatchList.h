#pragma once
#include "CoreMinimal.h"
#include "LobbyMatchList.generated.h"

USTRUCT(BlueprintType)
struct FLobbyMatchList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LobbiesMatching;
    
    STEAMCORE_API FLobbyMatchList();
};

