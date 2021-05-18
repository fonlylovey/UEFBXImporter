// Copyright 2018-2019, Athian Games. All Rights Reserved. 

#pragma once

#include "Modules/ModuleManager.h"


class FRuntimeFBXImportModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};