#pragma once
#include "CoreMinimal.h"
#include "BoolCVarChangedSignatureDelegate.h"
#include "FloatCVarChangedSignatureDelegate.h"
#include "IntCVarChangedSignatureDelegate.h"
#include "StringCVarChangedSignatureDelegate.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "AccessibilitySettingRowHandle.h"
#include "AudioSettingRowHandle.h"
#include "ControlSettingRowHandle.h"
#include "EDayOfTheWeek.h"
#include "EMonthOfTheYear.h"
#include "EPaintColor.h"
#include "GameplaySettingRowHandle.h"
#include "HitData.h"
#include "PaintedDeployableRowHandle.h"
#include "Templates/SubclassOf.h"
#include "VideoSettingRowHandle.h"
#include "AbioticFunctionLibrary.generated.h"

class AAbioticCharacter;
class AActor;
class UDialogueVoice;
class UDialogueWave;
class ULevelStreaming;
class UMaterialInterface;
class UObject;
class UPrimitiveComponent;
class USoundWave;
class UWorld;

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UAbioticFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAbioticFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ValidateDamageResults(UObject* WorldContextObject, UPARAM(Ref) TArray<FHitResult>& HitResults, UPARAM(Ref) TArray<FHitData>& HitData, UPARAM(Ref) TArray<AActor*>& HitPawns, TEnumAsByte<ETraceTypeQuery> TraceChannel, TMap<AActor*, FHitResult>& OutHitActors);
    
    UFUNCTION(BlueprintCallable)
    static void SortSavesByDate(UPARAM(Ref) TMap<UObject*, FDateTime>& SaveMap, bool bSortByNewest);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldUseRCON();
    
    UFUNCTION(BlueprintCallable)
    static void SetPrimitiveCanEverAffectNavigation(UPrimitiveComponent* Primitive, bool bCanEverAffectNavigation);
    
    UFUNCTION(BlueprintCallable)
    static void SetMouseSmoothing(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorCanEverAffectNavigation(AActor* Actor, bool bCanEverAffectNavigation);
    
    UFUNCTION(BlueprintCallable)
    static void ProcessDamageResults(UPARAM(Ref) TArray<FHitResult>& HitResults, TEnumAsByte<ECollisionChannel> TraceChannel, TArray<FHitData>& OutHitData, TArray<AActor*>& OutHitPawns);
    
    UFUNCTION(BlueprintCallable)
    static void OpenFolderDirectory(const FString& FolderPath);
    
    UFUNCTION(BlueprintCallable)
    static void ModifyPhysicsLocks(UPrimitiveComponent* Primitive, bool bLockXRotation, bool bLockYRotation, bool bLockZRotation);
    
    UFUNCTION(BlueprintCallable)
    static void MarkObjectDirty(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static FSoftObjectPath MakeSavedObjectPath(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsReleaseMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFilmMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDemoMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasActorRecentlyLoaded(UObject* WorldContextObject, AActor* Actor, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetWorldSaveFilePath(const FString& WorldSaveName, const FString& LevelSuffix);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetWorldSandboxSettingsFilePath(const FString& WorldSaveName);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UWorld> GetWorldAssetFromLevelStreaming(ULevelStreaming* LevelStreaming);
    
    UFUNCTION(BlueprintCallable)
    static UDialogueVoice* GetVoiceFromDialogue(const UDialogueWave* DialogueWave);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetVideoSetting_String(FVideoSettingRowHandle VideoSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetVideoSetting_Int(FVideoSettingRowHandle VideoSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetVideoSetting_Float(FVideoSettingRowHandle VideoSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetVideoSetting_Bool(FVideoSettingRowHandle VideoSetting);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSubtitlesFromDialogue(const UDialogueWave* DialogueWave, bool bUseSourceText, TArray<FString>& OutSubtitleLines, TArray<float>& OutSubtitleTimes);
    
    UFUNCTION(BlueprintCallable)
    static FString GetSourceTextFromDialogueWave(const UDialogueWave* DialogueWave);
    
    UFUNCTION(BlueprintCallable)
    static USoundWave* GetSoundWaveFromDialogue(const UDialogueWave* DialogueWave);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetServerMaxPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSaveSubfolderName();
    
    UFUNCTION(BlueprintCallable)
    static void GetSavedObjectPath(const FSoftObjectPath& InSavePath, FSoftObjectPath& OutSavePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRCONPort();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPlayerSaveFilePath(const FString& WorldSaveName, const FString& PlayerId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TSoftObjectPtr<UWorld> GetPersistentWorld(const UObject* WorldContextObject, bool bRemovePIEPrefix);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UObject* GetPersistentLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPaintedMaterials(FPaintedDeployableRowHandle PaintedRow, EPaintColor PaintColor, TArray<TSoftObjectPtr<UMaterialInterface>>& OutMaterials);
    
    UFUNCTION(BlueprintCallable)
    static FText GetLocalizedTextFromDialogueWave(const UDialogueWave* DialogueWave);
    
    UFUNCTION(BlueprintCallable)
    static FString GetLevelNameFromWorldAsset(const TSoftObjectPtr<UWorld>& WorldAsset);
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetLevelFromStreamingLevel(ULevelStreaming* LevelStreaming);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGameplaySetting_String(FGameplaySettingRowHandle VideoSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetGameplaySetting_Int(FGameplaySettingRowHandle GameplaySetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGameplaySetting_Float(FGameplaySettingRowHandle GameplaySetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetGameplaySetting_Bool(FGameplaySettingRowHandle GameplaySetting);
    
    UFUNCTION(BlueprintCallable)
    static void GetCurrectFacilityDate(const int32 DaysPassed, EDayOfTheWeek& CurrentWeekday, int32& CurrentDay, EMonthOfTheYear& CurrentMonth, int32& CurrentYear);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetControlSetting_String(FControlSettingRowHandle VideoSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetControlSetting_Int(FControlSettingRowHandle ControlSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetControlSetting_Float(FControlSettingRowHandle ControlSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetControlSetting_Bool(FControlSettingRowHandle ControlSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetAudioSetting_String(FAudioSettingRowHandle VideoSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAudioSetting_Int(FAudioSettingRowHandle AudioSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAudioSetting_Float(FAudioSettingRowHandle AudioSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAudioSetting_Bool(FAudioSettingRowHandle AudioSetting);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllLevelStreaming(UObject* WorldContextObject, TArray<ULevelStreaming*>& OutLevelStreaming);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllActorsOfClassFromLevel(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const UObject* LevelObject, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetAdminIniPath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetAccessibilitySetting_String(FAccessibilitySettingRowHandle VideoSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAccessibilitySetting_Int(FAccessibilitySettingRowHandle AccessibilitySetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAccessibilitySetting_Float(FAccessibilitySettingRowHandle AccessibilitySetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAccessibilitySetting_Bool(FAccessibilitySettingRowHandle AccessibilitySetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AAbioticCharacter* GetAbioticPlayerCharacter(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> FuzzySearch(const TArray<FName>& NameArray, const FString& SearchInput);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EnableLumenOptimizations(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> DistributeValueRandomlyToArray(int32 ValueToBeDistributed, int32 ArraySize);
    
    UFUNCTION(BlueprintCallable)
    static FString ConvertStringToSave(const FString& String);
    
    UFUNCTION(BlueprintCallable)
    static FSoftObjectPath ConvertSoftObjectToSave(const TSoftObjectPtr<UObject> SoftObject);
    
    UFUNCTION(BlueprintCallable)
    static void AddVideoSettingCallback_String(FVideoSettingRowHandle VideoSetting, FStringCVarChangedSignature ChangedCallback, bool CallbackImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void AddVideoSettingCallback_Int(FVideoSettingRowHandle VideoSetting, FIntCVarChangedSignature ChangedCallback, bool CallbackImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void AddVideoSettingCallback_Float(FVideoSettingRowHandle VideoSetting, FFloatCVarChangedSignature ChangedCallback, bool CallbackImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void AddVideoSettingCallback_Bool(FVideoSettingRowHandle VideoSetting, FBoolCVarChangedSignature ChangedCallback, bool CallbackImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void AddGameplaySettingCallback_String(FGameplaySettingRowHandle GameplaySetting, FStringCVarChangedSignature ChangedCallback, bool CallbackImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void AddGameplaySettingCallback_Int(FGameplaySettingRowHandle GameplaySetting, FIntCVarChangedSignature ChangedCallback, bool CallbackImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void AddGameplaySettingCallback_Float(FGameplaySettingRowHandle GameplaySetting, FFloatCVarChangedSignature ChangedCallback, bool CallbackImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void AddGameplaySettingCallback_Bool(FGameplaySettingRowHandle GameplaySetting, FBoolCVarChangedSignature ChangedCallback, bool CallbackImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void AddControlSettingCallback_String(FControlSettingRowHandle ControlSetting, FStringCVarChangedSignature ChangedCallback, bool CallbackImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void AddControlSettingCallback_Int(FControlSettingRowHandle ControlSetting, FIntCVarChangedSignature ChangedCallback, bool CallbackImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void AddControlSettingCallback_Float(FControlSettingRowHandle ControlSetting, FFloatCVarChangedSignature ChangedCallback, bool CallbackImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void AddControlSettingCallback_Bool(FControlSettingRowHandle ControlSetting, FBoolCVarChangedSignature ChangedCallback, bool CallbackImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void AddAudioSettingCallback_String(FAudioSettingRowHandle AudioSetting, FStringCVarChangedSignature ChangedCallback, bool CallbackImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void AddAudioSettingCallback_Int(FAudioSettingRowHandle AudioSetting, FIntCVarChangedSignature ChangedCallback, bool CallbackImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void AddAudioSettingCallback_Float(FAudioSettingRowHandle AudioSetting, FFloatCVarChangedSignature ChangedCallback, bool CallbackImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void AddAudioSettingCallback_Bool(FAudioSettingRowHandle AudioSetting, FBoolCVarChangedSignature ChangedCallback, bool CallbackImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void AddAccessibilitySettingCallback_String(FAccessibilitySettingRowHandle AccessibilitySetting, FStringCVarChangedSignature ChangedCallback, bool CallbackImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void AddAccessibilitySettingCallback_Int(FAccessibilitySettingRowHandle AccessibilitySetting, FIntCVarChangedSignature ChangedCallback, bool CallbackImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void AddAccessibilitySettingCallback_Float(FAccessibilitySettingRowHandle AccessibilitySetting, FFloatCVarChangedSignature ChangedCallback, bool CallbackImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void AddAccessibilitySettingCallback_Bool(FAccessibilitySettingRowHandle AccessibilitySetting, FBoolCVarChangedSignature ChangedCallback, bool CallbackImmediately);
    
};

