#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h"
#include "Templates/SubclassOf.h"
#include "EQGenerator_CoverPoints.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, EditInlineNew)
class ABIOTICFACTOR_API UEQGenerator_CoverPoints : public UEnvQueryGenerator_ProjectedPoints {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> GenerateAround;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue Radius;
    
public:
    UEQGenerator_CoverPoints();

};

