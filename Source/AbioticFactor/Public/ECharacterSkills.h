#pragma once
#include "CoreMinimal.h"
#include "ECharacterSkills.generated.h"

UENUM(BlueprintType)
enum class ECharacterSkills : uint8 {
    NoSkill,
    Sprinting,
    Accuracy,
    Reloading,
    Sneaking,
    SharpMelee,
    BluntMelee,
    Repair,
    Crafting,
    Construction,
    FirstAid,
    Agriculture,
    Cooking,
    Engineering,
    Fortitude,
    Strength,
    Throwing,
    Resilience,
};

