#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CharacterEffectData.h"
#include "PolarisCharacterEffectDataAsset.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisCharacterEffectDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FCharacterEffectData> CharacterEffect;
    
    UPolarisCharacterEffectDataAsset();

};

