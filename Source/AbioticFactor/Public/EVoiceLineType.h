#pragma once
#include "CoreMinimal.h"
#include "EVoiceLineType.generated.h"

UENUM(BlueprintType)
enum class EVoiceLineType : uint8 {
    None,
    SitExhale,
    PainGrunt,
    PainYell,
    PainYellStop,
    Scream,
    Downed,
    Death,
    DeathFalling,
    CallHelp,
    Revived,
    Relief,
    Tired,
    Sleepy,
    Exhausted,
    SleepStart,
    WakeUpBad,
    WakeUpGood,
    DryMouth,
    Thirst,
    Parched,
    BreathingLight,
    BreathingMedium,
    BreathingHeavy,
    Insane,
    Peckish,
    Hungry,
    Starving,
    Eating,
    ToiletSoon,
    ToiletUrgent,
    ToiletRelief,
    Chilly,
    Cold,
    Hypothermia,
    Warm,
    Hot,
    Heatstroke,
    Sick,
    Vomit,
    Curious,
    Crafting,
    ProximityQuestion,
    ProximityAnswer,
    ToiletQuestion,
    ToiletAnswer,
    Continence,
    Fumble,
    LootingOwnCorpse,
    Stunned,
    DeathRattled,
    DeathExplosion,
};

