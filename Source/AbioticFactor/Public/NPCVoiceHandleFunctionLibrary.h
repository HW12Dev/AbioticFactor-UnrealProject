#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERowValid.h"
#include "NPCVoice.h"
#include "NPCVoiceRowHandle.h"
#include "NPCVoiceHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UNPCVoiceHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNPCVoiceHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FNPCVoiceRowHandle MakeNPCVoiceRowHandle(const FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FNPCVoiceRowHandle MakeLiteralNPCVoiceRowHandle(FNPCVoiceRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable)
    static void GetNPCVoiceRow(FNPCVoiceRowHandle RowHandle, FNPCVoice& Data, ERowValid& ReturnPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllNPCVoiceRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllNPCVoiceRowHandles(TArray<FNPCVoiceRowHandle>& OutRowHandles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_NPCVoiceRowHandle(FNPCVoiceRowHandle A, FNPCVoiceRowHandle B);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesNPCVoiceRowExist(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BreakNPCVoiceRowHandle(const FNPCVoiceRowHandle RowHandle);
    
};

