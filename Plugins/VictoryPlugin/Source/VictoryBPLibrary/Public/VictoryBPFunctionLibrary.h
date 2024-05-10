#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineBaseTypes.h"
#include "Engine/HitResult.h"
#include "InputCoreTypes.h"
#include "Input/Events.h"
#include "Templates/SubclassOf.h"
#include "VictoryInput.h"
#include "VictoryInputAxis.h"
#include "VictoryBPFunctionLibrary.generated.h"

class AActor;
class ACharacter;
class APlayerController;
class APlayerStart;
class APostProcessVolume;
class ASceneCapture2D;
class AStaticMeshActor;
class ULevelStreamingDynamic;
class UMaterialInterface;
class UMeshComponent;
class UObject;
class UPanelSlot;
class UPrimitiveComponent;
class USceneCaptureComponent2D;
class USceneComponent;
class USkeletalMeshComponent;
class USoundClass;
class UTexture2D;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable)
class VICTORYBPLIBRARY_API UVictoryBPFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVictoryBPFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool WorldType__InPIEWorld(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool WorldType__InGameInstanceWorld(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool WorldType__InEditorWorld(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool WidgetIsChildOf(UWidget* ChildWidget, UWidget* PossibleParent);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UUserWidget* WidgetGetParentOfClass(UWidget* ChildWidget, TSubclassOf<UUserWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void WidgetGetChildrenOfClass(UWidget* ParentWidget, TArray<UUserWidget*>& ChildWidgets, TSubclassOf<UUserWidget> WidgetClass, bool bImmediateOnly);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Visibility__GetRenderedActors(UObject* WorldContextObject, TArray<AActor*>& CurrentlyRenderedActors, float MinRecentTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Visibility__GetNotRenderedActors(UObject* WorldContextObject, TArray<AActor*>& CurrentlyNotRenderedActors, float MinRecentTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ViewportPositionDeproject(UObject* WorldContextObject, const FVector2D& ViewportPosition, FVector& OutWorldOrigin, FVector& OutWorldDirection);
    
    UFUNCTION(BlueprintCallable)
    static bool Viewport__SetMousePosition(const APlayerController* ThePC, const float& PosX, const float& PosY);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Viewport__GetMousePosition(const APlayerController* ThePC, float& PosX, float& PosY);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Viewport__GetCenterOfViewport(const APlayerController* ThePC, float& PosX, float& PosY);
    
    UFUNCTION(BlueprintCallable)
    static bool Viewport__EnableWorldRendering(const APlayerController* ThePC, bool RenderTheWorld);
    
    UFUNCTION(BlueprintCallable)
    static bool VictorySoundVolumeChange(USoundClass* SoundClassObject, float NewVolume);
    
    UFUNCTION(BlueprintCallable)
    static void VictorySortIntArray(UPARAM(Ref) TArray<int32>& IntArray, TArray<int32>& IntArrayRef);
    
    UFUNCTION(BlueprintCallable)
    static void VictorySortFloatArray(UPARAM(Ref) TArray<float>& FloatArray, TArray<float>& FloatArrayRef);
    
    UFUNCTION(BlueprintCallable)
    static void VictorySimulateMouseWheel(const float& Delta);
    
    UFUNCTION(BlueprintCallable)
    static void VictorySimulateKeyPress(APlayerController* ThePC, FKey Key, TEnumAsByte<EInputEvent> EventType);
    
    UFUNCTION(BlueprintCallable)
    static void VictorySetCustomConfigVar_Vector2D(const FString& SectionName, const FString& VariableName, FVector2D Value);
    
    UFUNCTION(BlueprintCallable)
    static void VictorySetCustomConfigVar_Vector(const FString& SectionName, const FString& VariableName, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    static void VictorySetCustomConfigVar_String(const FString& SectionName, const FString& VariableName, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void VictorySetCustomConfigVar_Rotator(const FString& SectionName, const FString& VariableName, FRotator Value);
    
    UFUNCTION(BlueprintCallable)
    static void VictorySetCustomConfigVar_Int(const FString& SectionName, const FString& VariableName, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void VictorySetCustomConfigVar_Float(const FString& SectionName, const FString& VariableName, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void VictorySetCustomConfigVar_Color(const FString& SectionName, const FString& VariableName, FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    static void VictorySetCustomConfigVar_Bool(const FString& SectionName, const FString& VariableName, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void VictoryRemoveAxisKeyBind(FVictoryInputAxis ToRemove);
    
    UFUNCTION(BlueprintCallable)
    static void VictoryRemoveActionKeyBind(FVictoryInput ToRemove);
    
    UFUNCTION(BlueprintCallable)
    static bool VictoryReBindAxisKey(FVictoryInputAxis Original, FVictoryInputAxis NewBinding);
    
    UFUNCTION(BlueprintCallable)
    static bool VictoryReBindActionKey(FVictoryInput Original, FVictoryInput NewBinding);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString VictoryPaths__WindowsNoEditorDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString VictoryPaths__Win64Dir_BinaryLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString VictoryPaths__ScreenShotsDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString VictoryPaths__SavedDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString VictoryPaths__LogsDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString VictoryPaths__GameRootDirectory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString VictoryPaths__ConfigDir();
    
    UFUNCTION(BlueprintCallable)
    static void VictoryIntPlusEquals(UPARAM(Ref) int32& Int, int32 Add, int32& IntOut);
    
    UFUNCTION(BlueprintCallable)
    static void VictoryIntMinusEquals(UPARAM(Ref) int32& Int, int32 Sub, int32& IntOut);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVictoryInputAxis VictoryGetVictoryInputAxis(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVictoryInput VictoryGetVictoryInput(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float VictoryGetSoundVolume(USoundClass* SoundClassObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D VictoryGetCustomConfigVar_Vector2D(const FString& SectionName, const FString& VariableName, bool& IsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector VictoryGetCustomConfigVar_Vector(const FString& SectionName, const FString& VariableName, bool& IsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString VictoryGetCustomConfigVar_String(const FString& SectionName, const FString& VariableName, bool& IsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator VictoryGetCustomConfigVar_Rotator(const FString& SectionName, const FString& VariableName, bool& IsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 VictoryGetCustomConfigVar_Int(const FString& SectionName, const FString& VariableName, bool& IsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float VictoryGetCustomConfigVar_Float(const FString& SectionName, const FString& VariableName, bool& IsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor VictoryGetCustomConfigVar_Color(const FString& SectionName, const FString& VariableName, bool& IsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool VictoryGetCustomConfigVar_Bool(const FString& SectionName, const FString& VariableName, bool& IsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void VictoryGetAllAxisKeyBindings(TArray<FVictoryInputAxis>& Bindings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void VictoryGetAllAxisAndActionMappingsForKey(FKey Key, TArray<FVictoryInput>& ActionBindings, TArray<FVictoryInputAxis>& AxisBindings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void VictoryGetAllActionKeyBindings(TArray<FVictoryInput>& Bindings);
    
    UFUNCTION(BlueprintCallable)
    static void VictoryFloatPlusEquals(UPARAM(Ref) float& float_, float Add, float& FloatOut); // UHT generated "float" as a var name
    
    UFUNCTION(BlueprintCallable)
    static void VictoryFloatMinusEquals(UPARAM(Ref) float& float_, float Sub, float& FloatOut); // UHT generated "float" as a var name
    
    UFUNCTION(BlueprintCallable)
    static void VictoryAppendInline(UPARAM(Ref) FString& String, const FString& ToAppend, FString& Result, bool AppendNewline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Victory_SecondsToHoursMinutesSeconds(float Seconds, bool TrimZeroes);
    
    UFUNCTION(BlueprintCallable)
    static void Victory_SaveStringToOSClipboard(const FString& ToClipboard);
    
    UFUNCTION(BlueprintCallable)
    static bool Victory_SavePixels(const FString& FullFilePath, int32 Width, int32 Height, const TArray<FLinearColor>& ImagePixels, bool SaveAsBMP, bool SRGB, FString& ErrorString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Victory_GetStringFromOSClipboard(FString& FromClipboard);
    
    UFUNCTION(BlueprintCallable)
    static bool Victory_GetPixelsArrayFromT2D(UTexture2D* T2D, int32& TextureWidth, int32& TextureHeight, TArray<FLinearColor>& PixelArray);
    
    UFUNCTION(BlueprintCallable)
    static bool Victory_GetPixelFromT2D(UTexture2D* T2D, int32 X, int32 Y, FLinearColor& PixelColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Victory_Get_Pixel(const TArray<FLinearColor>& Pixels, int32 ImageHeight, int32 X, int32 Y, FLinearColor& FoundColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float VerticalFOV(float NewHorizontalFOV, float AspectRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D Vector2DInterpTo_Constant(FVector2D Current, FVector2D Target, float DeltaTime, float InterpSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D Vector2DInterpTo(FVector2D Current, FVector2D Target, float DeltaTime, float InterpSpeed);
    
    UFUNCTION(BlueprintCallable)
    static void UnloadStreamingLevel(ULevelStreamingDynamic* LevelInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator TransformVectorToActorSpaceAngle(AActor* Actor, const FVector& InVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector TransformVectorToActorSpace(AActor* Actor, const FVector& InVector);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* Traces__CharacterMeshTrace___ClosestSocket(UObject* WorldContextObject, const AActor* TraceOwner, const FVector& TraceStart, const FVector& TraceEnd, FVector& OutImpactPoint, FVector& OutImpactNormal, FName& ClosestSocketName, FVector& SocketLocation, bool& IsValid);
    
    UFUNCTION(BlueprintCallable)
    static AActor* Traces__CharacterMeshTrace___ClosestBone(AActor* TraceOwner, const FVector& TraceStart, const FVector& TraceEnd, FVector& OutImpactPoint, FVector& OutImpactNormal, FName& ClosestBoneName, FVector& ClosestBoneLocation, bool& IsValid);
    
    UFUNCTION(BlueprintCallable)
    static bool TraceData__GetTraceDataFromSkeletalMeshSocket(FVector& TraceStart, FVector& TraceEnd, USkeletalMeshComponent* Mesh, const FRotator& TraceRotation, float TraceLength, FName Socket, bool DrawTraceData, FLinearColor TraceDataColor, float TraceDataThickness);
    
    UFUNCTION(BlueprintCallable)
    static bool TraceData__GetTraceDataFromCharacterSocket(FVector& TraceStart, FVector& TraceEnd, AActor* TheCharacter, const FRotator& TraceRotation, float TraceLength, FName Socket, bool DrawTraceData, FLinearColor TraceDataColor, float TraceDataThickness);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Text_ToInt(const FText& Text, bool UseDotForThousands);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Text_ToFloat(const FText& Text, bool UseDotForThousands);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Text_IsNumeric(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool StringIsEmpty(const FString& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void StringConversion__GetFloatAsStringWithPrecision(float TheFloat, FString& TheString, int32 Precision, bool IncludeLeadingZero);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString String__CombineStrings_Multi(const FString& A, const FString& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString String__CombineStrings(const FString& StringFirst, const FString& StringSecond, const FString& Separator, const FString& StringFirstLabel, const FString& StringSecondLabel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnActorIntoLevel(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FName Level, FVector Location, FRotator Rotation, bool SpawnEvenIfColliding);
    
    UFUNCTION(BlueprintCallable)
    static void SetGenericTeamId(AActor* Target, uint8 NewTeamId);
    
    UFUNCTION(BlueprintCallable)
    static void SetBloomIntensity(APostProcessVolume* PostProcessVolume, float Intensity);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ServerTravel(UObject* WorldContextObject, const FString& MapName, bool bSkipNotifyPlayers);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Selection_SelectionBox(UObject* WorldContextObject, TArray<AActor*>& SelectedActors, FVector2D AnchorPoint, FVector2D DraggedPoint, TSubclassOf<AActor> ClassFilter);
    
    UFUNCTION(BlueprintCallable)
    static void seedRandWithTime();
    
    UFUNCTION(BlueprintCallable)
    static void seedRandWithEntropy();
    
    UFUNCTION(BlueprintCallable)
    static void seedRand(int32 Seed);
    
    UFUNCTION(BlueprintCallable)
    static void Rendering__UnFreezeGameRendering();
    
    UFUNCTION(BlueprintCallable)
    static void Rendering__FreezeGameRendering();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveAllWidgetsOfClass(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void RealWorldTime__GetTimePassedSincePreviousTime(const FString& PreviousTime, float& Milliseconds, float& Seconds, float& Minutes, float& Hours);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void RealWorldTime__GetDifferenceBetweenTimes(const FString& PreviousTime1, const FString& PreviousTime2, float& Milliseconds, float& Seconds, float& Minutes, float& Hours);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString RealWorldTime__GetCurrentOSTime(int32& Milliseconds, int32& Seconds, int32& Minutes, int32& Hours12, int32& Hours24, int32& Day, int32& Month, int32& Year);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 RandInt_uniDis_MT();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 RandInt_uniDis();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 RandInt_MINMAX_uniDis_MT(int32 iMin, int32 iMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 RandInt_MINMAX_uniDis(int32 iMin, int32 iMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float RandFloat_uniDis_MT();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float RandFloat_uniDis();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float RandFloat_MINMAX_uniDis_MT(float iMin, float iMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float RandFloat_MINMAX_uniDis(float iMin, float iMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool RandBool_Bernoulli_MT(float fBias);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool RandBool_Bernoulli(float fBias);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D ProjectWorldToScreenPosition(const FVector& WorldLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void PointDistanceToPlane(const FPlane& Plane, FVector Point, float& Distance);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayerState_GetPlayerID(APlayerController* ThePC, int32& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayerController_GetControllerID(APlayerController* ThePC, int32& ControllerId);
    
    UFUNCTION(BlueprintCallable)
    static bool Physics__UpdateCharacterCameraToRagdollLocation(AActor* TheCharacter, float HeightOffset, float InterpSpeed);
    
    UFUNCTION(BlueprintCallable)
    static bool Physics__LeaveRagDoll(AActor* TheCharacter, bool SetToFallingMovementMode, float HeightAboveRBMesh, const FVector& InitLocation, const FRotator& InitRotation);
    
    UFUNCTION(BlueprintCallable)
    static bool Physics__IsRagDoll(AActor* TheCharacter);
    
    UFUNCTION(BlueprintCallable)
    static bool Physics__InitializeVictoryRagDoll(AActor* TheCharacter, FVector& InitLocation, FRotator& InitRotation);
    
    UFUNCTION(BlueprintCallable)
    static bool Physics__GetLocationofRagDoll(AActor* TheCharacter, FVector& RagdollLocation);
    
    UFUNCTION(BlueprintCallable)
    static bool Physics__EnterRagDoll(AActor* TheCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool OptionsMenu__GetDisplayAdapterScreenResolutions(TArray<int32>& Widths, TArray<int32>& Heights, TArray<int32>& RefreshRates, bool IncludeRefreshRates);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void OperatingSystem__GetCurrentPlatform(bool& Windows_, bool& Mac, bool& Linux, bool& IOS, bool& Android, bool& Android_ARM, bool& PS4, bool& XBoxOne, bool& HTML5, bool& APPLE);
    
    UFUNCTION(BlueprintCallable)
    static void Open_URL_In_Web_Browser(const FString& TheURL);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_Vector2DVector2D(FVector2D A, FVector2D B, float ErrorTolerance);
    
    UFUNCTION(BlueprintCallable)
    static bool Mobility__SetSceneCompMobility(USceneComponent* SceneComp, TEnumAsByte<EComponentMobility::Type> NewMobility);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MinOfIntArray(const TArray<int32>& IntArray, int32& IndexOfMinValue, int32& MinValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MinOfFloatArray(const TArray<float>& FloatArray, int32& IndexOfMinValue, float& MinValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MaxOfIntArray(const TArray<int32>& IntArray, int32& IndexOfMaxValue, int32& MaxValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MaxOfFloatArray(const TArray<float>& FloatArray, int32& IndexOfMaxValue, float& MaxValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
    
    UFUNCTION(BlueprintCallable)
    static void Loops_ResetBPRunawayCounter();
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* LoadTexture2D_FromFileByExtension(const FString& ImagePath, bool& IsValid, int32& OutWidth, int32& OutHeight);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadStringFromFile(FString& Result, const FString& FullFilePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadStringArrayFromFile(TArray<FString>& StringArray, int32& ArraySize, const FString& FullFilePath, bool ExcludeEmptyLines);
    
    UFUNCTION(BlueprintCallable)
    static UObject* LoadObjectFromAssetPath(UClass* ObjectClass, FName Path, bool& IsValid);
    
    UFUNCTION(BlueprintCallable)
    static bool LensFlare__GetLensFlareOffsets(APlayerController* PlayerController, AActor* LightSource, float& PitchOffset, float& YawOffset, float& RollOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void JoyIsKey(const FKeyEvent& KeyEvent, FKey Key, bool& Ctrl, bool& Shift, bool& Alt, bool& Cmd, bool& Match);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool JoyFileIO_GetFilesInRootAndAllSubFolders(TArray<FString>& Files, const FString& RootFolderFullPath, const FString& Ext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsWidgetOfClassInViewport(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsStandalone(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPointOnPlane(const FPlane& Plane, FVector Point, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAlphaNumeric(const FString& String);
    
    UFUNCTION(BlueprintCallable)
    static UPanelSlot* InsertChildAt(UWidget* Parent, int32 Index, UWidget* Content);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float HorizontalFOV(float NewVerticalFOV, float AspectRatio);
    
    UFUNCTION(BlueprintCallable)
    static void HideStreamingLevel(ULevelStreamingDynamic* LevelInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasSubstring(const FString& SearchIn, const FString& Substring, TEnumAsByte<ESearchCase::Type> SearchCase, TEnumAsByte<ESearchDir::Type> SearchDir);
    
    UFUNCTION(BlueprintCallable)
    static void GraphicsSettings__SetFrameRateToBeUnbound();
    
    UFUNCTION(BlueprintCallable)
    static void GraphicsSettings__SetFrameRateCap(float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UWidget* GetWidgetFromName(UUserWidget* ParentUserWidget, const FName& Name);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetViewportPositionHitResultByChannel(UObject* WorldContextObject, const FVector2D& ViewportPosition, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, FHitResult& OutHitResult);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetViewportPosition(UObject* WorldContextObject, const FVector2D& ScreenPosition, FVector2D& OutViewportPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetVectorRelativeLocation(FVector ParentLocation, FRotator ParentRotation, FVector ChildLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetUserDisplayAdapterBrand(bool& IsAMD, bool& IsNvidia, bool& IsIntel, bool& IsUnknown, int32& UnknownId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTimeInPlay(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTimeAlive(const AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetRotatorRelativeRotation(FRotator ParentRotation, FRotator ChildRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerUniqueNetID();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static APlayerStart* GetPlayerStart(UObject* WorldContextObject, const FString& PlayerStartName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetObjectPath(UObject* Obj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetNamesOfLoadedLevels(UObject* WorldContextObject, TArray<FString>& NamesOfLoadedLevels);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetHeadMountedDisplayDeviceType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetGenericTeamId(AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static UUserWidget* GetFirstWidgetOfClass(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass, bool TopLevelOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCreationTime(const AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetComponentRelativeRotation(USceneComponent* ParentComponent, USceneComponent* ChildComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetComponentRelativeLocation(USceneComponent* ParentComponent, USceneComponent* ChildComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AActor* GetClosestActorOfClassInRadiusOfLocation(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FVector Center, float Radius, bool& IsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AActor* GetClosestActorOfClassInRadiusOfActor(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, AActor* ActorCenter, float Radius, bool& IsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetBoxContainingWorldPoints(const TArray<FVector>& Points, FVector& Center, FVector& Extent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllWidgetsOfClass(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass, TArray<UUserWidget*>& FoundWidgets, bool TopLevelOnly);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAllBoneNamesBelowBone(USkeletalMeshComponent* SkeletalMeshComp, FName StartingBoneName, TArray<FName>& BoneNames);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetActorRelativeRotation(AActor* ParentActor, AActor* ChildActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetActorRelativeLocation(AActor* ParentActor, AActor* ChildActor);
    
    UFUNCTION(BlueprintCallable)
    static void FlushPressedKeys(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static bool FileIO__SaveStringTextToFile(const FString& SaveDirectory, const FString& JoyfulFileName, const FString& SaveText, bool AllowOverWriting, bool AllowAppend);
    
    UFUNCTION(BlueprintCallable)
    static bool FileIO__SaveStringArrayToFile(const FString& SaveDirectory, const FString& JoyfulFileName, TArray<FString> SaveText, bool AllowOverWriting, bool AllowAppend);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_Vector2DVector2D(FVector2D A, FVector2D B, float ErrorTolerance);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawCircle(UObject* WorldContextObject, FVector Center, float Radius, int32 NumPoints, float Thickness, FLinearColor LineColor, FVector YAxis, FVector ZAxis, float Duration, bool PersistentLines);
    
    UFUNCTION(BlueprintCallable)
    static void Draw__Thick3DLineFromSocket(USkeletalMeshComponent* Mesh, const FVector& EndPoint, FName Socket, FLinearColor LineColor, float Thickness, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void Draw__Thick3DLineFromCharacterSocket(AActor* TheCharacter, const FVector& EndPoint, FName Socket, FLinearColor LineColor, float Thickness, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void Draw__Thick3DLineBetweenActors(AActor* StartActor, AActor* EndActor, FLinearColor LineColor, float Thickness, float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesMaterialHaveParameter(UMaterialInterface* Mat, FName Parameter);
    
    UFUNCTION(BlueprintCallable)
    static float DistanceToSurface__DistaceOfPointToMeshSurface(AStaticMeshActor* TheSMA, const FVector& TestPoint, FVector& ClosestSurfacePoint);
    
    UFUNCTION(BlueprintCallable)
    static bool Data__GetCharacterBoneLocations(AActor* TheCharacter, TArray<FVector>& BoneLocations);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPrimitiveComponent* CreatePrimitiveComponent(UObject* WorldContextObject, TSubclassOf<UPrimitiveComponent> CompClass, FName Name, FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPlane CreatePlane(FVector Center, FVector Normal);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UObject* CreateObject(UObject* WorldContextObject, UClass* TheObjectClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CountOccurrancesOfSubString(const FString& Source, const FString& Substring, TEnumAsByte<ESearchCase::Type> SearchCase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator Conversions__VectorToRotator(const FVector& TheVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Conversions__StringToVector(const FString& String, FVector& ConvertedVector, bool& IsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Conversions__StringToRotator(const FString& String, FRotator& ConvertedRotator, bool& IsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Conversions__StringToColor(const FString& String, FLinearColor& ConvertedColor, bool& IsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Conversions__RotatorToVector(const FRotator& TheRotator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Conversions__ColorToString(const FLinearColor& Color, FString& ColorAsString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Conversion__FloatToRoundedInteger(float IN_Float);
    
    UFUNCTION(BlueprintCallable)
    static void constructRand();
    
    UFUNCTION(BlueprintCallable)
    static void Component_PrestreamTextures(UMeshComponent* Target, float Seconds, bool bEnableStreaming, int32 CinematicTextureGroups);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AStaticMeshActor* Clone__StaticMeshActor(UObject* WorldContextObject, bool& IsValid, AStaticMeshActor* ToClone, FVector LocationOffset, FRotator RotationOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ClientWindow__GameWindowIsForeGroundInOS();
    
    UFUNCTION(BlueprintCallable)
    static bool CharacterMovement__SetMaxMoveSpeed(ACharacter* TheCharacter, float NewMaxMoveSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator Character__GetControllerRotation(AActor* TheCharacter);
    
    UFUNCTION(BlueprintCallable)
    static bool CaptureComponent2D_SaveImage(USceneCaptureComponent2D* Target, const FString& ImagePath, const FLinearColor ClearColour);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CaptureComponent2D_Project(USceneCaptureComponent2D* Target, FVector Location, FVector2D& OutPixelLocation);
    
    UFUNCTION(BlueprintCallable)
    static bool Capture2D_SaveImage(ASceneCapture2D* Target, const FString& ImagePath, const FLinearColor ClearColour);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Capture2D_Project(ASceneCapture2D* Target, FVector Location, FVector2D& OutPixelLocation);
    
    UFUNCTION(BlueprintCallable)
    static float Calcs__ClosestPointToSourcePoint(const FVector& Source, const TArray<FVector>& OtherPoints, FVector& ClosestPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString AppendMultiple(const FString& A, const FString& B);
    
    UFUNCTION(BlueprintCallable)
    static bool Animation__GetAimOffsetsFromRotation(AActor* AnimBPOwner, const FRotator& TheRotation, float& Pitch, float& Yaw);
    
    UFUNCTION(BlueprintCallable)
    static bool Animation__GetAimOffsets(AActor* AnimBPOwner, float& Pitch, float& Yaw);
    
    UFUNCTION(BlueprintCallable)
    static void AddToActorRotation(AActor* TheActor, FRotator AddRot);
    
    UFUNCTION(BlueprintCallable)
    static void Actor_PrestreamTextures(AActor* Target, float Seconds, bool bEnableStreaming, int32 CinematicTextureGroups);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Actor__TeleportToActor(AActor* ActorToTeleport, AActor* DestinationActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Actor__GetAttachedActors(AActor* ParentActor, TArray<AActor*>& ActorsArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APlayerController* Accessor__GetPlayerController(AActor* TheCharacter, bool& IsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Accessor__GetNameAsString(const UObject* TheObject);
    
    UFUNCTION(BlueprintCallable)
    static USkeletalMeshComponent* Accessor__GetCharacterSkeletalMesh(AActor* TheCharacter, bool& IsValid);
    
};

