// Copyright 2018-2019, Athian Games. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Misc/Paths.h"
#include "PlatformFeatures.h"
#include "Windows/WindowsPlatformProcess.h"


static class DLLManager
{
private:


	static bool ImportMethodOpenFileDialogue();

public:

	/**
	* Loads DLL from the given name.
	* @param  DLLName  The DLL to load.
	* @returns true if the DLL is successfully loaded.
	*/
	static bool LoadDLL(FString DLLName);

	/**
	* UnLoads the currently loaded DLL.
	*/
	static void UnLoadDLL();

	/**
	* Opens the File Open Dialogue Window and returns the array of filenames selected for openiong.
	*
	* @param DialogueTitle  The Title that appears in the titlebar of the File Open Dialogue window.
	* @param FileTypes  The allowed FileTypes for the File Open Dialogue window.
	* @param multiselect  If user can select multiple files.
	*/
	static TArray<FString> GetOpenFileDialogue(FString DialogueTitle, FString FileTypes, bool multiselect);


};

