#include "AbioticFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UAbioticFunctionLibrary::UAbioticFunctionLibrary() {
}

void UAbioticFunctionLibrary::ValidateDamageResults(UObject* WorldContextObject, TArray<FHitResult>& HitResults, TArray<FHitData>& HitData, TArray<AActor*>& HitPawns, TEnumAsByte<ETraceTypeQuery> TraceChannel, TMap<AActor*, FHitResult>& OutHitActors) {
}

void UAbioticFunctionLibrary::SortSavesByDate(TMap<UObject*, FDateTime>& SaveMap, bool bSortByNewest) {
}

bool UAbioticFunctionLibrary::ShouldUseRCON() {
    return false;
}

void UAbioticFunctionLibrary::SetPrimitiveCanEverAffectNavigation(UPrimitiveComponent* Primitive, bool bCanEverAffectNavigation) {
}

void UAbioticFunctionLibrary::SetMouseSmoothing(bool bEnabled) {
}

void UAbioticFunctionLibrary::SetActorCanEverAffectNavigation(AActor* Actor, bool bCanEverAffectNavigation) {
}

void UAbioticFunctionLibrary::ProcessDamageResults(TArray<FHitResult>& HitResults, TEnumAsByte<ECollisionChannel> TraceChannel, TArray<FHitData>& OutHitData, TArray<AActor*>& OutHitPawns) {
}

void UAbioticFunctionLibrary::OpenFolderDirectory(const FString& FolderPath) {
}

void UAbioticFunctionLibrary::ModifyPhysicsLocks(UPrimitiveComponent* Primitive, bool bLockXRotation, bool bLockYRotation, bool bLockZRotation) {
}

void UAbioticFunctionLibrary::MarkObjectDirty(UObject* Object) {
}

FSoftObjectPath UAbioticFunctionLibrary::MakeSavedObjectPath(const AActor* Actor) {
    return FSoftObjectPath{};
}

bool UAbioticFunctionLibrary::IsReleaseMode() {
    return false;
}

bool UAbioticFunctionLibrary::IsFilmMode() {
    return false;
}

bool UAbioticFunctionLibrary::IsEditor() {
    return false;
}

bool UAbioticFunctionLibrary::IsDemoMode() {
    return false;
}

bool UAbioticFunctionLibrary::HasActorRecentlyLoaded(UObject* WorldContextObject, AActor* Actor, float Tolerance) {
    return false;
}

FString UAbioticFunctionLibrary::GetWorldSaveFilePath(const FString& WorldSaveName, const FString& LevelSuffix) {
    return TEXT("");
}

FString UAbioticFunctionLibrary::GetWorldSandboxSettingsFilePath(const FString& WorldSaveName) {
    return TEXT("");
}

TSoftObjectPtr<UWorld> UAbioticFunctionLibrary::GetWorldAssetFromLevelStreaming(ULevelStreaming* LevelStreaming) {
    return NULL;
}

UDialogueVoice* UAbioticFunctionLibrary::GetVoiceFromDialogue(const UDialogueWave* DialogueWave) {
    return NULL;
}

FString UAbioticFunctionLibrary::GetVideoSetting_String(FVideoSettingRowHandle VideoSetting) {
    return TEXT("");
}

int32 UAbioticFunctionLibrary::GetVideoSetting_Int(FVideoSettingRowHandle VideoSetting) {
    return 0;
}

float UAbioticFunctionLibrary::GetVideoSetting_Float(FVideoSettingRowHandle VideoSetting) {
    return 0.0f;
}

bool UAbioticFunctionLibrary::GetVideoSetting_Bool(FVideoSettingRowHandle VideoSetting) {
    return false;
}

bool UAbioticFunctionLibrary::GetSubtitlesFromDialogue(const UDialogueWave* DialogueWave, bool bUseSourceText, TArray<FString>& OutSubtitleLines, TArray<float>& OutSubtitleTimes) {
    return false;
}

FString UAbioticFunctionLibrary::GetSourceTextFromDialogueWave(const UDialogueWave* DialogueWave) {
    return TEXT("");
}

USoundWave* UAbioticFunctionLibrary::GetSoundWaveFromDialogue(const UDialogueWave* DialogueWave) {
    return NULL;
}

int32 UAbioticFunctionLibrary::GetServerMaxPlayers() {
    return 0;
}

FString UAbioticFunctionLibrary::GetSaveSubfolderName() {
    return TEXT("");
}

void UAbioticFunctionLibrary::GetSavedObjectPath(const FSoftObjectPath& InSavePath, FSoftObjectPath& OutSavePath) {
}

int32 UAbioticFunctionLibrary::GetRCONPort() {
    return 0;
}

FString UAbioticFunctionLibrary::GetPlayerSaveFilePath(const FString& WorldSaveName, const FString& PlayerId) {
    return TEXT("");
}

TSoftObjectPtr<UWorld> UAbioticFunctionLibrary::GetPersistentWorld(const UObject* WorldContextObject, bool bRemovePIEPrefix) {
    return NULL;
}

UObject* UAbioticFunctionLibrary::GetPersistentLevel(const UObject* WorldContextObject) {
    return NULL;
}

bool UAbioticFunctionLibrary::GetPaintedMaterials(FPaintedDeployableRowHandle PaintedRow, EPaintColor PaintColor, TArray<TSoftObjectPtr<UMaterialInterface>>& OutMaterials) {
    return false;
}

FText UAbioticFunctionLibrary::GetLocalizedTextFromDialogueWave(const UDialogueWave* DialogueWave) {
    return FText::GetEmpty();
}

FString UAbioticFunctionLibrary::GetLevelNameFromWorldAsset(const TSoftObjectPtr<UWorld>& WorldAsset) {
    return TEXT("");
}

UObject* UAbioticFunctionLibrary::GetLevelFromStreamingLevel(ULevelStreaming* LevelStreaming) {
    return NULL;
}

FString UAbioticFunctionLibrary::GetGameplaySetting_String(FGameplaySettingRowHandle VideoSetting) {
    return TEXT("");
}

int32 UAbioticFunctionLibrary::GetGameplaySetting_Int(FGameplaySettingRowHandle GameplaySetting) {
    return 0;
}

float UAbioticFunctionLibrary::GetGameplaySetting_Float(FGameplaySettingRowHandle GameplaySetting) {
    return 0.0f;
}

bool UAbioticFunctionLibrary::GetGameplaySetting_Bool(FGameplaySettingRowHandle GameplaySetting) {
    return false;
}

void UAbioticFunctionLibrary::GetCurrectFacilityDate(const int32 DaysPassed, EDayOfTheWeek& CurrentWeekday, int32& CurrentDay, EMonthOfTheYear& CurrentMonth, int32& CurrentYear) {
}

FString UAbioticFunctionLibrary::GetControlSetting_String(FControlSettingRowHandle VideoSetting) {
    return TEXT("");
}

int32 UAbioticFunctionLibrary::GetControlSetting_Int(FControlSettingRowHandle ControlSetting) {
    return 0;
}

float UAbioticFunctionLibrary::GetControlSetting_Float(FControlSettingRowHandle ControlSetting) {
    return 0.0f;
}

bool UAbioticFunctionLibrary::GetControlSetting_Bool(FControlSettingRowHandle ControlSetting) {
    return false;
}

FString UAbioticFunctionLibrary::GetAudioSetting_String(FAudioSettingRowHandle VideoSetting) {
    return TEXT("");
}

int32 UAbioticFunctionLibrary::GetAudioSetting_Int(FAudioSettingRowHandle AudioSetting) {
    return 0;
}

float UAbioticFunctionLibrary::GetAudioSetting_Float(FAudioSettingRowHandle AudioSetting) {
    return 0.0f;
}

bool UAbioticFunctionLibrary::GetAudioSetting_Bool(FAudioSettingRowHandle AudioSetting) {
    return false;
}

void UAbioticFunctionLibrary::GetAllLevelStreaming(UObject* WorldContextObject, TArray<ULevelStreaming*>& OutLevelStreaming) {
}

void UAbioticFunctionLibrary::GetAllActorsOfClassFromLevel(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const UObject* LevelObject, TArray<AActor*>& OutActors) {
}

FString UAbioticFunctionLibrary::GetAdminIniPath() {
    return TEXT("");
}

FString UAbioticFunctionLibrary::GetAccessibilitySetting_String(FAccessibilitySettingRowHandle VideoSetting) {
    return TEXT("");
}

int32 UAbioticFunctionLibrary::GetAccessibilitySetting_Int(FAccessibilitySettingRowHandle AccessibilitySetting) {
    return 0;
}

float UAbioticFunctionLibrary::GetAccessibilitySetting_Float(FAccessibilitySettingRowHandle AccessibilitySetting) {
    return 0.0f;
}

bool UAbioticFunctionLibrary::GetAccessibilitySetting_Bool(FAccessibilitySettingRowHandle AccessibilitySetting) {
    return false;
}

AAbioticCharacter* UAbioticFunctionLibrary::GetAbioticPlayerCharacter(const UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

TArray<FName> UAbioticFunctionLibrary::FuzzySearch(const TArray<FName>& NameArray, const FString& SearchInput) {
    return TArray<FName>();
}

void UAbioticFunctionLibrary::EnableLumenOptimizations(const UObject* WorldContextObject) {
}

TArray<int32> UAbioticFunctionLibrary::DistributeValueRandomlyToArray(int32 ValueToBeDistributed, int32 ArraySize) {
    return TArray<int32>();
}

FString UAbioticFunctionLibrary::ConvertStringToSave(const FString& String) {
    return TEXT("");
}

FSoftObjectPath UAbioticFunctionLibrary::ConvertSoftObjectToSave(const TSoftObjectPtr<UObject> SoftObject) {
    return FSoftObjectPath{};
}

void UAbioticFunctionLibrary::AddVideoSettingCallback_String(FVideoSettingRowHandle VideoSetting, FStringCVarChangedSignature ChangedCallback, bool CallbackImmediately) {
}

void UAbioticFunctionLibrary::AddVideoSettingCallback_Int(FVideoSettingRowHandle VideoSetting, FIntCVarChangedSignature ChangedCallback, bool CallbackImmediately) {
}

void UAbioticFunctionLibrary::AddVideoSettingCallback_Float(FVideoSettingRowHandle VideoSetting, FFloatCVarChangedSignature ChangedCallback, bool CallbackImmediately) {
}

void UAbioticFunctionLibrary::AddVideoSettingCallback_Bool(FVideoSettingRowHandle VideoSetting, FBoolCVarChangedSignature ChangedCallback, bool CallbackImmediately) {
}

void UAbioticFunctionLibrary::AddGameplaySettingCallback_String(FGameplaySettingRowHandle GameplaySetting, FStringCVarChangedSignature ChangedCallback, bool CallbackImmediately) {
}

void UAbioticFunctionLibrary::AddGameplaySettingCallback_Int(FGameplaySettingRowHandle GameplaySetting, FIntCVarChangedSignature ChangedCallback, bool CallbackImmediately) {
}

void UAbioticFunctionLibrary::AddGameplaySettingCallback_Float(FGameplaySettingRowHandle GameplaySetting, FFloatCVarChangedSignature ChangedCallback, bool CallbackImmediately) {
}

void UAbioticFunctionLibrary::AddGameplaySettingCallback_Bool(FGameplaySettingRowHandle GameplaySetting, FBoolCVarChangedSignature ChangedCallback, bool CallbackImmediately) {
}

void UAbioticFunctionLibrary::AddControlSettingCallback_String(FControlSettingRowHandle ControlSetting, FStringCVarChangedSignature ChangedCallback, bool CallbackImmediately) {
}

void UAbioticFunctionLibrary::AddControlSettingCallback_Int(FControlSettingRowHandle ControlSetting, FIntCVarChangedSignature ChangedCallback, bool CallbackImmediately) {
}

void UAbioticFunctionLibrary::AddControlSettingCallback_Float(FControlSettingRowHandle ControlSetting, FFloatCVarChangedSignature ChangedCallback, bool CallbackImmediately) {
}

void UAbioticFunctionLibrary::AddControlSettingCallback_Bool(FControlSettingRowHandle ControlSetting, FBoolCVarChangedSignature ChangedCallback, bool CallbackImmediately) {
}

void UAbioticFunctionLibrary::AddAudioSettingCallback_String(FAudioSettingRowHandle AudioSetting, FStringCVarChangedSignature ChangedCallback, bool CallbackImmediately) {
}

void UAbioticFunctionLibrary::AddAudioSettingCallback_Int(FAudioSettingRowHandle AudioSetting, FIntCVarChangedSignature ChangedCallback, bool CallbackImmediately) {
}

void UAbioticFunctionLibrary::AddAudioSettingCallback_Float(FAudioSettingRowHandle AudioSetting, FFloatCVarChangedSignature ChangedCallback, bool CallbackImmediately) {
}

void UAbioticFunctionLibrary::AddAudioSettingCallback_Bool(FAudioSettingRowHandle AudioSetting, FBoolCVarChangedSignature ChangedCallback, bool CallbackImmediately) {
}

void UAbioticFunctionLibrary::AddAccessibilitySettingCallback_String(FAccessibilitySettingRowHandle AccessibilitySetting, FStringCVarChangedSignature ChangedCallback, bool CallbackImmediately) {
}

void UAbioticFunctionLibrary::AddAccessibilitySettingCallback_Int(FAccessibilitySettingRowHandle AccessibilitySetting, FIntCVarChangedSignature ChangedCallback, bool CallbackImmediately) {
}

void UAbioticFunctionLibrary::AddAccessibilitySettingCallback_Float(FAccessibilitySettingRowHandle AccessibilitySetting, FFloatCVarChangedSignature ChangedCallback, bool CallbackImmediately) {
}

void UAbioticFunctionLibrary::AddAccessibilitySettingCallback_Bool(FAccessibilitySettingRowHandle AccessibilitySetting, FBoolCVarChangedSignature ChangedCallback, bool CallbackImmediately) {
}


