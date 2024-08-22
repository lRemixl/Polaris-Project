#pragma once
// Copyright JAA Contributors 2023-2024

#pragma once

#include "Importer.h"
#include "NiagaraParameterCollectionImporter.h"
#include "NiagaraParameterCollection.h"



class UNiagaraSystemImporter : public IImporter {
public:
    UNiagaraSystemImporter(const FString& FileName, const FString& FilePath, const TSharedPtr<FJsonObject>& JsonObject, UPackage* Package, UPackage* OutermostPkg) :
        IImporter(FileName, FilePath, JsonObject, Package, OutermostPkg) {
    }

    virtual bool ImportData() override;
};