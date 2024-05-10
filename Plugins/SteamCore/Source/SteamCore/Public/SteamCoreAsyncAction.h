#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SteamCoreAsyncAction.generated.h"

class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> m_WorldContextObject;
    
public:
    USteamCoreAsyncAction();

};

