#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OnPostLoadMapTriggeredDelegate.h"
#include "OnPreLoadMapTriggeredDelegate.h"
#include "OnSeamlessTravelStartDelegate.h"
#include "OnShowLoadingScreenAdditionalSecsTriggeredDelegate.h"
#include "LoadingScreenManager.generated.h"

class UObject;
class UWorld;

UCLASS(Blueprintable)
class COMMONLOADINGSCREEN_API ULoadingScreenManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowLoadingScreenAdditionalSecsTriggered OnShowLoadingScreenAdditionalSecsTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreLoadMapTriggered OnPreLoadMapTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPostLoadMapTriggered OnPostLoadMapTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSeamlessTravelStart OnSeamlessTravelStart;
    
    ULoadingScreenManager();

    UFUNCTION(BlueprintCallable)
    void RemoveLoadingScreenWatcher(UObject* Object);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void K2_SetLoadingScreenCustomText(UWorld* WorldContextObject, const FString& NewText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLoadingScreenCustomText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDebugReasonForShowingOrHidingLoadingScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentLoadingMap() const;
    
    UFUNCTION(BlueprintCallable)
    void AddLoadingScreenWatcher(UObject* Object);
    
};

