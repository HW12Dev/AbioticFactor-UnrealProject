#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERowValid.h"
#include "SkillData.h"
#include "SkillRowHandle.h"
#include "SkillHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API USkillHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USkillHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSkillRowHandle MakeSkillRowHandle(const FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSkillRowHandle MakeLiteralSkillRowHandle(FSkillRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable)
    static void GetSkillRow(FSkillRowHandle RowHandle, FSkillData& Data, ERowValid& ReturnPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllSkillRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllSkillRowHandles(TArray<FSkillRowHandle>& OutRowHandles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_SkillRowHandle(FSkillRowHandle A, FSkillRowHandle B);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesSkillRowExist(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BreakSkillRowHandle(const FSkillRowHandle RowHandle);
    
};

