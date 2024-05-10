#pragma once
#include "CoreMinimal.h"
#include "Interfaces/Interface_PostProcessVolume.h"
#include "Engine/Scene.h"
#include "Components/SceneComponent.h"
#include "Components/PostProcessComponent.h"
#include "UnderwaterPostProcessComponent.generated.h"

class IBlendableInterface;
class UBlendableInterface;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
//class ABIOTICFACTOR_API UUnderwaterPostProcessComponent : public USceneComponent, public IInterface_PostProcessVolume {
class ABIOTICFACTOR_API UUnderwaterPostProcessComponent : public UPostProcessComponent {
    GENERATED_BODY()
public:
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    //FPostProcessSettings Settings;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //float Priority;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    //float BlendWeight;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //uint8 bEnabled: 1;
    
    UUnderwaterPostProcessComponent(const FObjectInitializer& ObjectInitializer);

    //UFUNCTION(BlueprintCallable)
    //void AddOrUpdateBlendable(TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight);
    

    // Fix for true pure virtual functions not being implemented
    virtual void OnRegister() override;
    virtual void OnUnregister() override;
    virtual void Serialize(FArchive& Ar) override;
};

