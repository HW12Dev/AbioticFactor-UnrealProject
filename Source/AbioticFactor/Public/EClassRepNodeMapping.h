#pragma once
#include "CoreMinimal.h"
#include "EClassRepNodeMapping.generated.h"

UENUM()
enum class EClassRepNodeMapping : uint32 {
    NotRouted,
    RelevantAllConnections,
    Spatialize_Static,
    Spatialize_Dynamic,
    Spatialize_Dormancy,
};

