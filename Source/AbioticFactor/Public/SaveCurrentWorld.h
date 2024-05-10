#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SaveCurrentWorldOutputPinDelegate.h"
#include "SaveCurrentWorld.generated.h"

class UAbioticSave;
class UObject;
class USaveCurrentWorld;

UCLASS(Blueprintable)
class ABIOTICFACTOR_API USaveCurrentWorld : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveCurrentWorldOutputPin SaveWorld;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAbioticSave*> DuplicatedWorldSaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAbioticSave*> DuplicatedPlayerSaves;
    
public:
    USaveCurrentWorld();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USaveCurrentWorld* SaveCurrentWorld(const UObject* WorldContextObject);
    
};

