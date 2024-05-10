#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "PlayerStatsSave.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UPlayerStatsSave : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> Stats_Int;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FName, float> Stats_Float;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> Achievements;
    
    UPlayerStatsSave();

};

