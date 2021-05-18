// Copyright 2018-2019, Athian Games. All Rights Reserved. 

#include "DLLManager.h"
#include "Interfaces/IPluginManager.h"

static void *v_FBXdllHandle;

typedef char*(*_OpenFileDialogue)(char* DialogueTitle, char* FileTypes, bool multiselect);

_OpenFileDialogue m_OpenFileDialogueFromDll;


bool DLLManager::LoadDLL(FString DLLName)
{
	FString Pluginpath = IPluginManager::Get().FindPlugin(TEXT("RuntimeFBXImport"))->GetBaseDir();
	FString DllPath = FPaths::Combine(*Pluginpath, TEXT("ThirdParty"), DLLName);

	if (FPaths::FileExists(DllPath))
	{
		v_FBXdllHandle = FPlatformProcess::GetDllHandle(*DllPath);
		if (v_FBXdllHandle != NULL)
		{
			return true;
		}
	}
	return false;
}

void DLLManager::UnLoadDLL()
{
	if (v_FBXdllHandle != NULL)
	{
		m_OpenFileDialogueFromDll = NULL;
		FPlatformProcess::FreeDllHandle(v_FBXdllHandle);
		v_FBXdllHandle = NULL;
	}
}

bool DLLManager::ImportMethodOpenFileDialogue()
{
	if (v_FBXdllHandle != NULL)
	{
		m_OpenFileDialogueFromDll = NULL;
		FString procName = "OpenFileDialogue";
		m_OpenFileDialogueFromDll = (_OpenFileDialogue)FPlatformProcess::GetDllExport(v_FBXdllHandle, *procName);
		if (m_OpenFileDialogueFromDll != NULL)
		{
			return true;
		}
	}
	return false;
}


TArray<FString> DLLManager::GetOpenFileDialogue(FString DialogueTitle, FString FileTypes, bool multiselect)
{
	TArray<FString> OpenedFiles;
	if (ImportMethodOpenFileDialogue())
	{

		char* title = TCHAR_TO_ANSI(*DialogueTitle);
		char* filetypes = TCHAR_TO_ANSI(*FileTypes);

		char* openedfilename = m_OpenFileDialogueFromDll(title, filetypes, multiselect);

		FString RString = FString(openedfilename);
		if (!RString.IsEmpty())
		{
			FString LString;
			while (!RString.IsEmpty())
			{
				FString NString = RString;
				RString.Empty();
				if (NString.Contains(","))
				{
					NString.Split(",", &LString, &RString, ESearchCase::CaseSensitive);
				}
				else
				{
					LString = NString;
				}
				if (FPaths::FileExists(LString))
				{
					OpenedFiles.Add(LString);
				}
			}


		}
	}

	return OpenedFiles;
}


