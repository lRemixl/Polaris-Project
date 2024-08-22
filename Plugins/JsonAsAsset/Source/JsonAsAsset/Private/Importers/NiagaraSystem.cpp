// Copyright JAA Contributors 2023-2024

#include "Importers/NiagaraParameterCollectionImporter.h"

#include "Dom/JsonObject.h"
#include "Materials/MaterialParameterCollection.h"


bool UNiagaraSystemImporter::ImportData() {
    try {
        TSharedPtr<FJsonObject> Properties = JsonObject->GetObjectField("Properties");

        UNiagaraParameterCollectionDerived* NiagaraParameterCollection = Cast<UNiagaraParameterCollectionDerived>(
            NewObject<UNiagaraParameterCollection>(Package, UNiagaraParameterCollection::StaticClass(), *FileName, RF_Public | RF_Standalone));

        NiagaraParameterCollection->SetCompileId(FGuid(Properties->GetStringField("CompileId")));

        TObjectPtr<UMaterialParameterCollection> MaterialParameterCollection;
        if (const TSharedPtr<FJsonObject>* SourceMaterialCollection; Properties->TryGetObjectField("SourceMaterialCollection", SourceMaterialCollection))
            LoadObject(SourceMaterialCollection, MaterialParameterCollection);

        NiagaraParameterCollection->SetSourceMaterialCollection(MaterialParameterCollection);

        if (const TArray<TSharedPtr<FJsonValue>>* ParametersPtr; Properties->TryGetArrayField("Parameters", ParametersPtr)) {
            for (const TSharedPtr<FJsonValue> ParameterPtr : *ParametersPtr) {
                TSharedPtr<FJsonObject> ParameterObj = ParameterPtr->AsObject();

                FName Name = FName(*ParameterObj->GetStringField("Name"));
            }
        }

        // Handle edit changes, and add it to the content browser
        SavePackage();
        if (!HandleAssetCreation(NiagaraParameterCollection)) return false;
    }
    catch (const char* Exception) {
        UE_LOG(LogJson, Error, TEXT("%s"), *FString(Exception));
        return false;
    }

    return true;
}