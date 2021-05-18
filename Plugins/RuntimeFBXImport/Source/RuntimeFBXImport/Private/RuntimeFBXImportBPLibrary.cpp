// Copyright 2018-2019, Athian Games. All Rights Reserved. 

#include "RuntimeFBXImportBPLibrary.h"
#include "RuntimeFBXImport.h"
#include "DLLManager.h"
#include "FBXSaveGame.h"
#include "FBXMeshActor.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"
#include "Serialization/MemoryReader.h"
#include "HAL/PlatformFilemanager.h"


static const int UE4_SAVEGAME_FILE_TYPE_TAG = 0x53415647;

IImageWrapperModule* ImageWrapperModule = NULL;

UWorld* URuntimeFBXImportBPLibrary::GetGameWorld()
{
	UGameViewportClient* Viewport = GEngine->GameViewport;

	if (Viewport)
	{
		UWorld* world = NULL;
		FWorldContext* worldcontext = GEngine->GetWorldContextFromGameViewport(Viewport);
		world = worldcontext->World();

		return world;

	}

	return NULL;
}


bool URuntimeFBXImportBPLibrary::GetOpenFileDialogue(TArray<FString>& FileNames, FString DialogueTitle, FString FileTypes, bool multiselect)
{
	if (DLLManager::LoadDLL("RuntimeFBXImportLibrary.dll"))
	{
		FileNames = DLLManager::GetOpenFileDialogue(DialogueTitle, FileTypes, multiselect);
		if (FileNames.Num() > 0)
		{
			DLLManager::UnLoadDLL();
			return true;
		}

	}

	DLLManager::UnLoadDLL();
	return false;

}


void URuntimeFBXImportBPLibrary::CreateImageWrapperModule()
{
	ImageWrapperModule = &FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
}

bool URuntimeFBXImportBPLibrary::LoadTexturefromPath(FString FilePath, UTexture2D* &Texture, float &Width, float &Height)
{

	FString Extension = FPaths::GetExtension(FilePath);
	EImageFormat ImageFormat;

	if (Extension.Equals("jpeg", ESearchCase::IgnoreCase) || Extension.Equals("jpg", ESearchCase::IgnoreCase))
	{
		ImageFormat = EImageFormat::JPEG;
	}
	else if (Extension.Equals("png", ESearchCase::IgnoreCase))
	{
		ImageFormat = EImageFormat::PNG;
	}
	else
	{
		ImageFormat = EImageFormat::BMP;
	}

	if (!ImageWrapperModule)
	{
		CreateImageWrapperModule();
	}

	if (ImageWrapperModule)
	{
		TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule->CreateImageWrapper(ImageFormat);

		TArray<uint8> RawFileData;
		if (!FFileHelper::LoadFileToArray(RawFileData, *FilePath))
		{
			return false;
		}

		if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()))
		{
			TArray<uint8> UncompressedBGRA;
			if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedBGRA))
			{
				Texture = UTexture2D::CreateTransient(ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), PF_B8G8R8A8);

				if (!Texture)
				{
					return false;
				}

				Width = ImageWrapper->GetWidth();
				Height = ImageWrapper->GetHeight();

				void* TextureData = Texture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
				FMemory::Memcpy(TextureData, UncompressedBGRA.GetData(), UncompressedBGRA.Num());
				Texture->PlatformData->Mips[0].BulkData.Unlock();

				Texture->UpdateResource();
			}
		}

		return true;
	}

	return false;
}

bool URuntimeFBXImportBPLibrary::CreateCameraTrace(FVector startlocation, FVector endlocation, FHitResult &OutHit)
{
	UGameViewportClient* Viewport = GEngine->GameViewport;
	UWorld* world = GetGameWorld();
	if (world)
	{
		APlayerController* PlayerController = UGameplayStatics::GetPlayerController(world, 0);

		FCollisionQueryParams RV_TraceParams = FCollisionQueryParams(FName(TEXT("RV_Trace")), true, PlayerController);
		RV_TraceParams.bTraceComplex = true;
		RV_TraceParams.bReturnPhysicalMaterial = false;

		bool linetraceresult = world->LineTraceSingleByChannel(
			OutHit,
			startlocation,
			endlocation,
			ECC_Pawn,
			RV_TraceParams
		);

		return linetraceresult;
	}

	return false;
}



bool URuntimeFBXImportBPLibrary::CheckHitAtCameraLocation(UCameraComponent* CameraComponent, FHitResult &objecthit)
{
	if (CameraComponent)
	{
		FVector v_CamLoc = CameraComponent->GetComponentLocation();
		FRotator v_CamRot = CameraComponent->GetComponentRotation();

		FVector tracedistanceend = v_CamLoc + v_CamRot.Vector() * 5000;
		bool isactorhit = CreateCameraTrace(v_CamLoc, tracedistanceend, objecthit);
		return isactorhit;
	}
	return false;

}

bool URuntimeFBXImportBPLibrary::CheckHitAtMouseCursor(FHitResult &objecthit)
{
	UWorld* world = GetGameWorld();
	if (world)
	{

		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
		ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECC_WorldStatic));
		ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECC_Visibility));
		ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECC_WorldDynamic));

		APlayerController* PlayerController = UGameplayStatics::GetPlayerController(world, 0);
		if (PlayerController)
		{
			PlayerController->HitResultTraceDistance = 10000000;
			bool isactorhit = PlayerController->GetHitResultUnderCursorForObjects(ObjectTypes, true, objecthit);
 			return isactorhit;
		}
	}
	return false;

}

bool URuntimeFBXImportBPLibrary::SaveFBXGame(FString SaveFileName, FString SaveSlotName, UObject* WorldContextObject, AFBXMeshActor* FBXActorToSave,
	bool bOverwrite)
{

	UFBXSaveGame* SaveGameObject = NewObject<UFBXSaveGame>(GetTransientPackage(), UFBXSaveGame::StaticClass());
	if (SaveGameObject)
	{
		if (SaveSlotName.IsEmpty())
		{
			SaveGameObject->SaveSlotName = FPaths::GetBaseFilename(SaveFileName);
		}
		else
		{
			SaveGameObject->SaveSlotName = SaveSlotName;
		}

		SaveGameObject->SaveComponents(FBXActorToSave);

		return SaveGameData(SaveGameObject, SaveFileName);
	}

	return false;
}


bool URuntimeFBXImportBPLibrary::SaveGameData(USaveGame* SaveGameObject, FString FileName)
{
	//Save given savegame object into the given filepath.
	ISaveGameSystem* SaveSystem = IPlatformFeaturesModule::Get().GetSaveGameSystem();
	if (SaveSystem && SaveGameObject && (FileName.Len() > 0))
	{
		TArray<uint8> ObjectBytes;
		FMemoryWriter MemoryWriter(ObjectBytes, true);

		int32 FileTypeTag = UE4_SAVEGAME_FILE_TYPE_TAG;
		MemoryWriter << FileTypeTag;

		int32 SavegameFileVersion = FSaveFBXFileVersion::LatestVersion;
		MemoryWriter << SavegameFileVersion;

		int32 PackageFileUE4Version = GPackageFileUE4Version;
		MemoryWriter << PackageFileUE4Version;
		FEngineVersion SavedEngineVersion = FEngineVersion::Current();
		MemoryWriter << SavedEngineVersion;

		ECustomVersionSerializationFormat::Type const CustomVersionFormat = ECustomVersionSerializationFormat::Latest;
		int32 CustomVersionFormatInt = static_cast<int32>(CustomVersionFormat);
		MemoryWriter << CustomVersionFormatInt;
		FCustomVersionContainer CustomVersions = FCurrentCustomVersions::GetAll();
		CustomVersions.Serialize(MemoryWriter, CustomVersionFormat);

		FString SaveGameClassName = SaveGameObject->GetClass()->GetName();
		MemoryWriter << SaveGameClassName;

		FObjectAndNameAsStringProxyArchive Ar(MemoryWriter, false);
		SaveGameObject->Serialize(Ar);

		//save the bytearray to path.
		return FFileHelper::SaveArrayToFile(ObjectBytes, *FileName);
	}

	return false;
}


TArray<UFBXSaveGame*> URuntimeFBXImportBPLibrary::GetALLFBXSavedFiles(FString BaseDirectory, FString Extension)
{
	TArray<UFBXSaveGame*> FBXSavedFiles;

	TArray<FString> FilenamesOut;


	if (GetFiles(BaseDirectory, true, Extension, FilenamesOut))
	{
		for (auto FileName : FilenamesOut)
		{
			USaveGame* OutSaveGameObject = LoadGameData(FileName);
			if (OutSaveGameObject)
			{
				UFBXSaveGame* FBXSaveGame = Cast<UFBXSaveGame>(OutSaveGameObject);
				if (FBXSaveGame)
				{
					FBXSavedFiles.Add(FBXSaveGame);
				}
			}

		}
	}
	
	return FBXSavedFiles;
}


USaveGame* URuntimeFBXImportBPLibrary::LoadGameData(FString FileName)
{
	USaveGame* OutSaveGameObject = NULL;
	ISaveGameSystem* SaveSystem = IPlatformFeaturesModule::Get().GetSaveGameSystem();

	// If we have a save system and a valid name.
	if (SaveSystem && (FileName.Len() > 0))
	{
		// Load raw data from slot
		TArray<uint8> ObjectBytes;
		bool bSuccess = FFileHelper::LoadFileToArray(ObjectBytes, *FileName);
		if (bSuccess)
		{
			FMemoryReader MemoryReader(ObjectBytes, true);

			int32 FileTypeTag;
			MemoryReader << FileTypeTag;

			int32 SavegameFileVersion;
			if (FileTypeTag != UE4_SAVEGAME_FILE_TYPE_TAG)
			{
				MemoryReader.Seek(0);
				SavegameFileVersion = FSaveFBXFileVersion::InitialVersion;

			}
			else
			{
				MemoryReader << SavegameFileVersion;

				int32 SavedUE4Version;
				MemoryReader << SavedUE4Version;

				FEngineVersion SavedEngineVersion;
				MemoryReader << SavedEngineVersion;

				MemoryReader.SetUE4Ver(SavedUE4Version);
				MemoryReader.SetEngineVer(SavedEngineVersion);

				if (SavegameFileVersion >= FSaveFBXFileVersion::AddedCustomVersions)
				{
					int32 CustomVersionFormat;
					MemoryReader << CustomVersionFormat;

					FCustomVersionContainer CustomVersions;
					CustomVersions.Serialize(MemoryReader, static_cast<ECustomVersionSerializationFormat::Type>(CustomVersionFormat));
					MemoryReader.SetCustomVersions(CustomVersions);
				}
			}

			FString SaveGameClassName;
			MemoryReader << SaveGameClassName;

			UClass* SaveGameClass = FindObject<UClass>(ANY_PACKAGE, *SaveGameClassName);
			if (SaveGameClass == NULL)
			{
				SaveGameClass = LoadObject<UClass>(NULL, *SaveGameClassName);
			}

			if (SaveGameClass != NULL)
			{
				OutSaveGameObject = NewObject<USaveGame>(GetTransientPackage(), SaveGameClass);

				FObjectAndNameAsStringProxyArchive Ar(MemoryReader, true);
				OutSaveGameObject->Serialize(Ar);

			}
		}
	}

	return OutSaveGameObject;

}

template <class FunctorType>
class PlatformFileFunctor : public IPlatformFile::FDirectoryVisitor	//GenericPlatformFile.h
{
public:

	virtual bool Visit(const TCHAR* FilenameOrDirectory, bool bIsDirectory) override
	{
		return Functor(FilenameOrDirectory, bIsDirectory);
	}

	PlatformFileFunctor(FunctorType&& FunctorInstance)
		: Functor(MoveTemp(FunctorInstance))
	{
	}

private:
	FunctorType Functor;
};

template <class Functor>
PlatformFileFunctor<Functor> MakeDirectoryVisitor(Functor&& FunctorInstance)
{
	return PlatformFileFunctor<Functor>(MoveTemp(FunctorInstance));
}


bool URuntimeFBXImportBPLibrary::GetFiles(FString FullPathOfBaseDir, bool Recursive, FString FilterByExtension, TArray<FString>& FilenamesOut)
{
	//Format File Extension, remove the "." if present
	const FString FileExt = FilterByExtension.Replace(TEXT("."), TEXT("")).ToLower();

	FString Str;
	auto FilenamesVisitor = MakeDirectoryVisitor(
		[&](const TCHAR* FilenameOrDirectory, bool bIsDirectory)
	{
		//Files
		if (!bIsDirectory)
		{
			//Filter by Extension
			if (FileExt != "")
			{
				Str = FPaths::GetCleanFilename(FilenameOrDirectory);

				//Filter by Extension
				if (FPaths::GetExtension(Str).ToLower() == FileExt)
				{
					if (Recursive)
					{
						FilenamesOut.Push(FilenameOrDirectory);
					}
					else
					{
						FilenamesOut.Push(FPaths::Combine(FullPathOfBaseDir, Str));
					}
				}
			}

			//Include All Filenames!
			else
			{
				//Just the Directory
				Str = FPaths::GetCleanFilename(FilenameOrDirectory);

				if (Recursive)
				{
					FilenamesOut.Push(FilenameOrDirectory); //need whole path for recursive
				}
				else
				{
					FilenamesOut.Push(Str);
				}
			}
		}
		return true;
	}
	);

	if (Recursive)
	{
		return FPlatformFileManager::Get().GetPlatformFile().IterateDirectoryRecursively(*FullPathOfBaseDir, FilenamesVisitor);
	}
	else
	{
		return FPlatformFileManager::Get().GetPlatformFile().IterateDirectory(*FullPathOfBaseDir, FilenamesVisitor);
	}
}



