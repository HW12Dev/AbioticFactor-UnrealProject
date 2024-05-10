#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/Tests/EnvQueryTest_Trace.h"
#include "EnvQueryTest_TraceDistance.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UEnvQueryTest_TraceDistance : public UEnvQueryTest_Trace {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue TraceMaxDistance;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue TraceIgnoreZ;
    
public:
    UEnvQueryTest_TraceDistance();

};

