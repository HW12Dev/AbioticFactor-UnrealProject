#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EventBean.generated.h"

UCLASS(Blueprintable)
class UEventBean : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FregisteredEventDelegate, const FString&, Message, const TArray<uint8>&, byteArray);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FregisteredEventDelegate onregisteredEventDelegate;
    
    UEventBean();

    UFUNCTION(BlueprintCallable)
    void registeredEventDelegate(const FString& Message, const TArray<uint8>& byteArray);
    
};

