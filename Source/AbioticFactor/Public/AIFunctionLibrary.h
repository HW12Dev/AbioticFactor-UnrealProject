#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BlackboardName.h"
#include "AIFunctionLibrary.generated.h"

class UBlackboardComponent;
class UObject;

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UAIFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAIFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetValueAsVector(UBlackboardComponent* Blackboard, FBlackboardName Key, FVector VectorValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetValueAsString(UBlackboardComponent* Blackboard, FBlackboardName Key, const FString& StringValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetValueAsRotator(UBlackboardComponent* Blackboard, FBlackboardName Key, FRotator VectorValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetValueAsObject(UBlackboardComponent* Blackboard, FBlackboardName Key, UObject* ObjectValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetValueAsName(UBlackboardComponent* Blackboard, FBlackboardName Key, FName NameValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetValueAsInt(UBlackboardComponent* Blackboard, FBlackboardName Key, int32 IntValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetValueAsFloat(UBlackboardComponent* Blackboard, FBlackboardName Key, float FloatValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetValueAsEnum(UBlackboardComponent* Blackboard, FBlackboardName Key, uint8 EnumValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetValueAsClass(UBlackboardComponent* Blackboard, FBlackboardName Key, UClass* ClassValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetValueAsBool(UBlackboardComponent* Blackboard, FBlackboardName Key, bool BoolValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetValueAsVector(const UBlackboardComponent* Blackboard, FBlackboardName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetValueAsString(const UBlackboardComponent* Blackboard, FBlackboardName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetValueAsRotator(const UBlackboardComponent* Blackboard, FBlackboardName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetValueAsObject(const UBlackboardComponent* Blackboard, FBlackboardName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetValueAsName(const UBlackboardComponent* Blackboard, FBlackboardName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetValueAsInt(const UBlackboardComponent* Blackboard, FBlackboardName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetValueAsFloat(const UBlackboardComponent* Blackboard, FBlackboardName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetValueAsEnum(const UBlackboardComponent* Blackboard, FBlackboardName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UClass* GetValueAsClass(const UBlackboardComponent* Blackboard, FBlackboardName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetValueAsBool(const UBlackboardComponent* Blackboard, FBlackboardName Key);
    
};

