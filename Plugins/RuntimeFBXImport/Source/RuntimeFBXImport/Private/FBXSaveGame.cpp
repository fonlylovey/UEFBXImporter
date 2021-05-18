// Fill out your copyright notice in the Description page of Project Settings.


#include "FBXSaveGame.h"
#include "RuntimeFBXImportBPLibrary.h"

void UFBXSaveGame::SaveComponents(AFBXMeshActor* FBXActorToSave)
{
	if (FBXActorToSave)
	{
		NodeSectionMap = FBXActorToSave->NodeSectionMap;
		ObjectName = FBXActorToSave->FullFileName;
		ObjectTransform = FBXActorToSave->GetActorTransform();

		FVector Location1 = ObjectTransform.GetLocation();
		FVector Location2 = FBXActorToSave->GetActorLocation();

		int kk = 0;

	}
}