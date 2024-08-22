﻿// Copyright JAA Contributors 2023-2024

#pragma once

#include "Importer.h"

class ULandscapeGrassTypeImporter : public IImporter {
public:
	ULandscapeGrassTypeImporter(const FString& FileName, const FString& FilePath, const TSharedPtr<FJsonObject>& JsonObject, UPackage* Package, UPackage* OutermostPkg):
		IImporter(FileName, FilePath, JsonObject, Package, OutermostPkg) {
	}

	virtual bool ImportData() override;
};
