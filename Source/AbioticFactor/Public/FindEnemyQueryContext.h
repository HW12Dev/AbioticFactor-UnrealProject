#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "FindEnemyQueryContext.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABIOTICFACTOR_API UFindEnemyQueryContext : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UFindEnemyQueryContext();

};

