#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EClassRepNodeMapping.h"
#include "RepGraphActorClassSettings.generated.h"

USTRUCT(BlueprintType)
struct FRepGraphActorClassSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddClassRepInfoToMap;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EClassRepNodeMapping ClassNodeMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddToRPC_Multicast_OpenChannelForClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRPC_Multicast_OpenChannelForClass;
    
    ABIOTICFACTOR_API FRepGraphActorClassSettings();
};

