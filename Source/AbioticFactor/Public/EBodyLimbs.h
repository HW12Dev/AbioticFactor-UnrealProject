#pragma once
#include "CoreMinimal.h"
#include "EBodyLimbs.generated.h"

UENUM(BlueprintType)
enum class EBodyLimbs : uint8 {
    AllBones,
    RandomBone,
    RandomBoneExceptHead,
    Head,
    Torso,
    LeftArm,
    RightArm,
    LeftLeg,
    RightLeg,
};

