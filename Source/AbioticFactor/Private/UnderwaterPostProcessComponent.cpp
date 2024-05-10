#include "UnderwaterPostProcessComponent.h"

UUnderwaterPostProcessComponent::UUnderwaterPostProcessComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Priority = 1.00f;
    this->BlendWeight = 1.00f;
    this->bEnabled = true;
}

void UUnderwaterPostProcessComponent::OnRegister()
{
}
void UUnderwaterPostProcessComponent::OnUnregister()
{
}
void UUnderwaterPostProcessComponent::Serialize(FArchive& Ar)
{
}

//void UUnderwaterPostProcessComponent::AddOrUpdateBlendable(TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight) {
//}


