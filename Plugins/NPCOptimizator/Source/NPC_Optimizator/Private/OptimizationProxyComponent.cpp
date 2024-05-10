#include "OptimizationProxyComponent.h"

UOptimizationProxyComponent::UOptimizationProxyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DistanceToFirstOptimization = 1500.00f;
    this->DistanceToSecondOptimization = 2500.00f;
    this->DistanceToThirdOptimization = 3500.00f;
    this->MaxVisibleDistance = 8000.00f;
    this->OptimizationBasedOn = EOptimizationBaseType::PlayerPawn;
    this->UseOptimizationByTag = false;
    this->OptimizationTag = TEXT("NeedOptimization");
    this->IgnoreOptimizationTag = TEXT("IgnoreOptimization");
    this->DisableMovementWhenNotVisible = false;
    this->IgnoreCameraSight = false;
    this->IgnoreCameraSightOnSmallDistance = false;
    this->DisableSkeletalMeshTickWhenNotVisible = false;
    this->DisableGroomTickWhenNotVisible = false;
    this->HideAllStaticMeshes = true;
    this->bDisableOptimizationOnListenServer = false;
    this->bDisableOptimizationOnDedicatedServer = true;
    this->bDisableOptimizationInSimulationMode = false;
    this->bOptimizeAIController = true;
    this->bOptimizePathFollowComponent = true;
    this->FirstWave_AlwaysCheckFloor = true;
    this->FirstWave_EnablePhysicsInteraction = true;
    this->FirstWave_MaxSimulationTimeStep = 0.03f;
    this->FirstWave_MaxSimulationIterations = 4;
    this->FirstWave_RunPhysicsWithNoController = true;
    this->FirstWave_SweepWhileNavWalking = true;
    this->FirstWave_OptimizatedMovementTick = 0.05f;
    this->FirstWave_OptimizatedMovementTickMin = 0.01f;
    this->FirstWave_OptimizatedMovementTickMax = 0.05f;
    this->FirstWave_UseRandomOptimizationTickForMovement = true;
    this->FirstWave_HideShadows = false;
    this->FirstWaveGroom_HideShadows = true;
    this->FirstWaveGroom_Hide = false;
    this->FirstWave_DisableMeshCollision = false;
    this->FirstWaveGroom_DisableMeshCollision = true;
    this->FirstWave_NeedHideStaticMeshes = false;
    this->FirstWave_UseUpdateRateOptimizations = true;
    this->FirstWave_UsePerBoneMotionBlur = true;
    this->FirstWave_DisableClothSimulation = true;
    this->FirstWave_DisableMorphTarget = true;
    this->FirstWave_SkipKinematicUpdateWhenInterpolating = true;
    this->FirstWave_SkipBoundsUpdateWhenInterpolating = true;
    this->FirstWave_AllowRigidBodyAnimNode = true;
    this->FirstWave_GenerateOverlapEvents = true;
    this->FirstWaveGroom_GenerateOverlapEvents = false;
    this->FirstWave_VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::OnlyTickPoseWhenRendered;
    this->SecondWave_AlwaysCheckFloor = false;
    this->SecondWave_EnablePhysicsInteraction = false;
    this->SecondWave_MaxSimulationTimeStep = 0.04f;
    this->SecondWave_MaxSimulationIterations = 2;
    this->SecondWave_RunPhysicsWithNoController = false;
    this->SecondWave_SweepWhileNavWalking = false;
    this->SecondWave_OptimizatedMovementTick = 0.10f;
    this->SecondWave_OptimizatedMovementTickMin = 0.05f;
    this->SecondWave_OptimizatedMovementTickMax = 0.10f;
    this->SecondWave_UseRandomOptimizationTickForMovement = true;
    this->SecondWave_HideShadows = true;
    this->SecondWaveGroom_HideShadows = true;
    this->SecondWaveGroom_Hide = true;
    this->SecondWave_DisableMeshCollision = true;
    this->SecondWaveGroom_DisableMeshCollision = true;
    this->SecondWave_NeedHideStaticMeshes = true;
    this->SecondWave_UseUpdateRateOptimizations = true;
    this->SecondWave_UsePerBoneMotionBlur = false;
    this->SecondWave_DisableClothSimulation = true;
    this->SecondWave_DisableMorphTarget = true;
    this->SecondWave_SkipKinematicUpdateWhenInterpolating = true;
    this->SecondWave_SkipBoundsUpdateWhenInterpolating = true;
    this->SecondWave_AllowRigidBodyAnimNode = false;
    this->SecondWave_GenerateOverlapEvents = false;
    this->SecondWaveGroom_GenerateOverlapEvents = false;
    this->SecondWave_VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::OnlyTickPoseWhenRendered;
    this->ThirdWave_AlwaysCheckFloor = false;
    this->ThirdWave_EnablePhysicsInteraction = false;
    this->ThirdWave_MaxSimulationTimeStep = 0.05f;
    this->ThirdWave_MaxSimulationIterations = 1;
    this->ThirdWave_RunPhysicsWithNoController = false;
    this->ThirdWave_SweepWhileNavWalking = false;
    this->ThirdWave_OptimizatedMovementTick = 0.20f;
    this->ThirdWave_OptimizatedMovementTickMin = 0.10f;
    this->ThirdWave_OptimizatedMovementTickMax = 0.20f;
    this->ThirdWave_UseRandomOptimizationTickForMovement = true;
    this->ThirdWave_HideShadows = true;
    this->ThirdWaveGroom_HideShadows = true;
    this->ThirdWaveGroom_Hide = true;
    this->ThirdWave_DisableMeshCollision = true;
    this->ThirdWaveGroom_DisableMeshCollision = true;
    this->ThirdWave_NeedHideStaticMeshes = true;
    this->ThirdWave_UseUpdateRateOptimizations = true;
    this->ThirdWave_UsePerBoneMotionBlur = false;
    this->ThirdWave_DisableClothSimulation = true;
    this->ThirdWave_DisableMorphTarget = true;
    this->ThirdWave_SkipKinematicUpdateWhenInterpolating = true;
    this->ThirdWave_SkipBoundsUpdateWhenInterpolating = true;
    this->ThirdWave_AllowRigidBodyAnimNode = false;
    this->ThirdWave_GenerateOverlapEvents = false;
    this->ThirdWaveGroom_GenerateOverlapEvents = false;
    this->ThirdWave_VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::OnlyTickPoseWhenRendered;
    this->Invisible_AlwaysCheckFloor = false;
    this->Invisible_EnablePhysicsInteraction = false;
    this->Invisible_MaxSimulationTimeStep = 0.50f;
    this->Invisible_MaxSimulationIterations = 1;
    this->Invisible_RunPhysicsWithNoController = false;
    this->Invisible_SweepWhileNavWalking = false;
    this->Invisible_OptimizatedMovementTick = 1.00f;
    this->Invisible_OptimizatedMovementTickMin = 1.00f;
    this->Invisible_OptimizatedMovementTickMax = 1.50f;
    this->Invisible_UseRandomOptimizationTickForMovement = true;
    this->Invisible_HideSkeletalMesh = true;
    this->InvisibleGroom_Hide = true;
    this->Invisible_HideShadows = true;
    this->InvisibleGroom_HideShadows = true;
    this->Invisible_DisableMeshCollision = true;
    this->InvisibleGroom_DisableMeshCollision = true;
    this->Invisible_NeedHideStaticMeshes = true;
    this->Invisible_UseUpdateRateOptimizations = true;
    this->Invisible_UsePerBoneMotionBlur = false;
    this->Invisible_DisableClothSimulation = true;
    this->Invisible_DisableMorphTarget = true;
    this->Invisible_SkipKinematicUpdateWhenInterpolating = true;
    this->Invisible_SkipBoundsUpdateWhenInterpolating = true;
    this->Invisible_VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::OnlyTickPoseWhenRendered;
    this->Invisible_AllowRigidBodyAnimNode = false;
    this->Invisible_GenerateOverlapEvents = false;
    this->InvisibleGroom_GenerateOverlapEvents = false;
    this->NoOptimization_DrawDebug = false;
    this->FirstWave_DrawDebug = false;
    this->SecondWave_DrawDebug = false;
    this->ThirdWave_DrawDebug = false;
    this->Invisible_DrawDebug = false;
    this->bIsNPCDisabled = false;
}

void UOptimizationProxyComponent::EnableOptimizations() {
}

void UOptimizationProxyComponent::EnableForceOptimizationWave(EOptimizationWave Wave, bool Enable) {
}

void UOptimizationProxyComponent::DisableAllOptimizations() {
}


