#pragma once
#include "CoreMinimal.h"
#include "RowHandle.h"
#include "UIKeybindActionRowHandle.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FUIKeybindActionRowHandle : public FRowHandle {
    GENERATED_BODY()
public:
    FUIKeybindActionRowHandle();
};
FORCEINLINE uint32 GetTypeHash(const FUIKeybindActionRowHandle) { return 0; }

