#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LoadingProcessInterface.generated.h"

UINTERFACE(Blueprintable)
class COMMONLOADINGSCREEN_API ULoadingProcessInterface : public UInterface {
    GENERATED_BODY()
};

class COMMONLOADINGSCREEN_API ILoadingProcessInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool K2_ShouldShowLoadingScreen(FString& OutDebugReason);
    
};

