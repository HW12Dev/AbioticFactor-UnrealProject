#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_Tether.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UEnvQueryTest_Tether : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> TetherContext;
    
public:
    UEnvQueryTest_Tether();

};

