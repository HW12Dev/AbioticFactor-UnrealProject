#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BoolCVarChangedSignatureDelegate.h"
#include "FloatCVarChangedSignatureDelegate.h"
#include "IntCVarChangedSignatureDelegate.h"
#include "StringCVarChangedSignatureDelegate.h"
#include "CVarChangeListenerManager.generated.h"

class UCVarChangeListener;

UCLASS(Blueprintable)
class AUTOSETTINGS_API UCVarChangeListenerManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UCVarChangeListener*> Listeners;
    
public:
    UCVarChangeListenerManager();

    UFUNCTION(BlueprintCallable)
    static void AddStringCVarCallbackStatic(FName Name, FStringCVarChangedSignature ChangedCallback, bool CallbackImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void AddIntCVarCallbackStatic(FName Name, FIntCVarChangedSignature ChangedCallback, bool CallbackImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void AddFloatCVarCallbackStatic(FName Name, FFloatCVarChangedSignature ChangedCallback, bool CallbackImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void AddBoolCVarCallbackStatic(FName Name, FBoolCVarChangedSignature ChangedCallback, bool CallbackImmediately);
    
};

