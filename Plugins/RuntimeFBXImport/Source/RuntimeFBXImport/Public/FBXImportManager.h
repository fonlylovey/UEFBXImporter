// Copyright 2018-2019, Athian Games. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ImportFBXAsync.h"
#include "ProceduralMeshComponent.h"
#include "FBXMeshImport.h"
#include "FBXMeshActor.h"
#include "RuntimeFBXImportBPLibrary.h"
#include "FBXSaveGame.h"

#include "FBXImportManager.generated.h"

/**
 * This class acts as a manager which handles all the functionalities related to asynchronous FBX Import
 */
UCLASS()
class AFBXImportManager : public AActor
{
	GENERATED_BODY()
	
public:	

	// Sets default values for this actor's properties
	AFBXImportManager();



	/** Current Base Material to be applied for the Procedural mesh component corresponding to the latest FBX file(s) to import. */
	UPROPERTY()
		UMaterialInterface* CurrentBaseMaterial;

	/** Async Task which performs the Asynchronous FBX import. */
	FAsyncTask<ImportFBXAsync>* ImportAsyncTask;

	/**
	* Creates mapping for the current node as read from the current FBX file being imported.
	* @param  NodeIndex  Index of the current Node.
	* @param  NodeName  Node Name.
	*/
	void InitializeNewFBXNode(int32 NodeIndex, FString NodeName);

	/**
	* Creates new Procedural mesh component for the current material section of the FBX Node currently being read. 
	 A new mesh component is created for every section, to enable selection in viewport.
	* @param  FBXFileName  FBX file being imported.
	* @param  ArrayIndex  Current Node Array index.
	* @param  SectionIndex  Current Section Index.
	* @param  ProcMeshSection  Current Section Index.
	* @param  IsCollisionMesh  If the given mesh is just for creating collision.

	*/
	void CreateNewFBXMesh(FString FBXFileName, int32 ArrayIndex, int32 SectionIndex, FProceduralMeshSection ProcMeshSection, 
		bool islastSection, int32 SectionCount, bool IsCollisionMesh);
	
	/**
	*Called after the import of the given file is completed.
	*/
	UFUNCTION()
		void FinishImport();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	TArray<FProceduralMeshSection> ProcMeshSections;
	TMap<int32, AFBXMeshActor*> FBXNodeMap;
	TArray<FBXImportStructure> QueuedFiles;

	/** World Location where the current FBX is being imported*/
	UPROPERTY()
		FVector CurrentImportLocation;

	/** If Playmode is ended*/
	UPROPERTY()
		bool IsPlayEnded;

	/** If FBX operation is currently being executed*/
	UPROPERTY()
		bool IsBusy;

	/** Selected Mesh Actor. */
	UPROPERTY()
		AFBXMeshActor* SelectedActor;

	UPROPERTY()
		EFBXCollisionType CurrentCollisionType;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "FBXImport")
		TSubclassOf<AFBXMeshActor> FBXActorClass;

	/**
	* Delegate event being called when a new FBX Import is started.
	* @param  FBXFileName  FBX file being imported.
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "FBXImport")
		void OnNewFBXImportStarted(const FString& FileName);

	UFUNCTION(BlueprintImplementableEvent, Category = "FBXImport")
		void OnFBXSectionImported(const TMap<int32, FProceduralMeshSection>& ProcMeshSectionMap);

	/**
	* Delegate event being called when a new FBX Node is read and imported, for the current FBX scene.
	* @param  NodeIndex  Node Index .
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "FBXImport")
		void OnFBXNodeProgressChanged(int32 NodeIndex, const FString& NodeName, int32 NodeCount);

	/**
	* Delegate event being called when a new FBX section is read and imported, for the current FBX scene.
	* @param  SectionIndex  Index.
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "FBXImport")
		void OnFBXSectionProgressChanged(int32 SectionIndex, const FString& SectionName, int32 SectionCount);

	/**
	* Delegate event being called when the current FBX scene is completely loaded.
	* @param  CurrentFBXMeshActor  FBXMeshActor generated from the current FBX file, which contains all the 
	corresponding mesh components.
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "FBXImport")
		void OnImportCompleted(AFBXMeshActor* CurrentFBXMeshActor);

	/**
	* Imports an FBX file from the given filepath.
	* @param  FileName  Full file name with path information, for the FBX file to be imported.
	* @param  Location  World location where the meshes from the FBX file would be created.
	* @param  BaseMaterial  Parameterized material that will be applied to the created mesh by default, with the textures
	 and color information as read from the source file, provided the naming convention for the parameters is followed.
	* @param  CollisionType  The Mesh can either have no collision , or custom collision can be read from the source,
	  with the UCX_ prefix used for identification of node with collision
	* @param SpawnFBXActor shold Spawn the actor in the scene, or just import the file and return the imported data for later use
	*/
	UFUNCTION(BlueprintCallable, Category = "FBXImport")
		void ImportFBXFile(FString FileName, FVector Location, UMaterialInterface* BaseMaterial, 
			EFBXCollisionType CollisionType, bool SpawnFBXActor = true);

		

	/**
	* Called and defined in BP, when a new FBX Actor is selected.
	* @param  SelectedActor  The Selected Actor.
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "FBX")
		void OnFBXActorSelected(AFBXMeshActor* SelectedMeshActor);

	/**
	* Select a given Mesh Component.
	* @param  ComponentToSelect  The Mesh Component to Select.
	* @param  SelectActor  If Entire actor to be Selected.
	* @param  IsSection  Returns if a Mesh Section is Selected.
	* @param  Section  Returns Selected Section.
	* @param  SelectedMeshActor  The FBXMesh Actor for the Selected component.
	*/
	UFUNCTION(BlueprintCallable, Category = "FBX")
		void SelectMeshComponent(UPrimitiveComponent* ComponentToSelect, bool SelectActor, bool &IsSection, 
			FFBXSectionStructure& Section, AFBXMeshActor*& SelectedMeshActor);

	/**
	* Deselect All Selected Components.
	* @param  MeshActor  The parent FBXMesh Actor corresponding to the select components
	* @param  ResetSelection  If the SelectedActor will be reset

	*/
	UFUNCTION(BlueprintCallable, Category = "FBX")
		void DeSelectAllComponents(AFBXMeshActor* MeshActor, bool ResetSelection);

	/**
	* Select a given Node.
	* @param  MeshActor  The parent FBXMesh Actor corresponding to the Node to select
	* @param  NodeID  The NodeID for the Node to be Selected.
	* @param  DeSelectRest  If the rest of the nodes to be DeSelected.
	* @returns  Sections corresponding to the Selected Node.
	*/
	UFUNCTION(BlueprintCallable, Category = "FBX")
		TArray<FFBXSectionStructure> SelectNode(AFBXMeshActor* MeshActor, int32 NodeID, bool DeSelectRest = true);

	/**
	* Select a given Node Section.
	* @param  MeshActor  The parent FBXMesh Actor corresponding to the Section to select
	* @param  NodeID  The NodeID for the Node corresponding to the Section to be Selected.
	* @param  SectionID  The SectionID for the Section to be Selected.
	* @param  DeSelectRest  If the rest of the Sections to be DeSelected.
	*/
	UFUNCTION(BlueprintCallable, Category = "FBX")
		void SelectNodeSection(AFBXMeshActor* MeshActor, int32 NodeID, int32 SectionID, bool DeSelectRest = true);

	/**
	* Get Texture parameter of the material for the given Section.
	* @param  MeshActor  The parent FBXMesh Actor corresponding to the Section being addressed here.
	* @param  ParameterName  The Parameter name.
	* @param  NodeID  The Node ID.
	* @param  SectionID  The Section ID.
	* @param  Texture  The Texture parameter value returned.
	*/
	UFUNCTION(BlueprintPure, Category = "FBX")
		bool GetTextureParamValue(AFBXMeshActor* MeshActor, FName ParameterName, int32 NodeID, int32 SectionID, UTexture*& Texture);

	/**
	* Get Scalar parameter of the material for the given Section.
	* @param  MeshActor  The parent FBXMesh Actor corresponding to the Section being addressed here.
	* @param  ParameterName  The Parameter name.
	* @param  NodeID  The Node ID.
	* @param  SectionID  The Section ID.
	* @param  ScalarValue  The Scalar parameter value returned.
	*/
	UFUNCTION(BlueprintPure, Category = "FBX")
		bool GetScalarParamValue(AFBXMeshActor* MeshActor, FName ParameterName, int32 NodeID, int32 SectionID, float& ScalarValue);

	/**
	* Get Vector parameter of the material for the given Section.
	* @param  MeshActor  The parent FBXMesh Actor corresponding to the Section being addressed here.
	* @param  ParameterName  The Parameter name.
	* @param  NodeID  The Node ID.
	* @param  SectionID  The Section ID.
	* @param  Value  The Color parameter value returned.
	*/
	UFUNCTION(BlueprintPure, Category = "FBX")
		bool GetVectorParamValue(AFBXMeshActor* MeshActor, FName ParameterName, int32 NodeID, int32 SectionID, FLinearColor& Value);

	/**
	* Update the given Section with New Material.
	* @param  MeshActor  The parent FBXMesh Actor corresponding to the Section being addressed here.
	* @param  NewMaterial  The material to be applied to the given section.
	* @param  NodeID  The Node ID.
	* @param  SectionID  The Section ID.
	*/
	UFUNCTION(BlueprintCallable, Category = "FBX")
		void UpdateSectionMaterial(AFBXMeshActor* MeshActor, UMaterialInterface* NewMaterial, int32 NodeID, int32 SectionID);

	/**
	* Update the given Section material with New Texture parameter.
	* @param  MeshActor  The parent FBXMesh Actor corresponding to the Section being addressed here.
	* @param  ParameterName  The Parameter name.
	* @param  NewTexture  The Texture parameter to be applied.
	* @param  NodeID  The Node ID.
	* @param  SectionID  The Section ID.
	*/
	UFUNCTION(BlueprintCallable, Category = "FBX")
		void UpdateTextureParam(AFBXMeshActor* MeshActor, FName ParameterName, UTexture2D* NewTexture, int32 NodeID, int32 SectionID);

	/**
	* Update the given Section material with New Scalar parameter.
	* @param  MeshActor  The parent FBXMesh Actor corresponding to the Section being addressed here.
	* @param  ParameterName  The Parameter name.
	* @param  Value  The Section parameter to be applied.
	* @param  NodeID  The Node ID.
	* @param  SectionID  The Section ID.
	*/
	UFUNCTION(BlueprintCallable, Category = "FBX")
		void UpdateScalarParam(AFBXMeshActor* MeshActor, FName ParameterName, float Value, int32 NodeID, int32 SectionID);

	/**
	* Update the given Section material with New Vector parameter.
	* @param  MeshActor  The parent FBXMesh Actor corresponding to the Section being addressed here.
	* @param  ParameterName  The Parameter name.
	* @param  Value  The Section parameter to be applied.
	* @param  NodeID  The Node ID.
	* @param  SectionID  The Section ID.
	*/
	UFUNCTION(BlueprintCallable, Category = "FBX")
		void UpdateVectorParam(AFBXMeshActor* MeshActor, FName ParameterName, FLinearColor Value, int32 NodeID, int32 SectionID);

	/**
	* Isolate Selected Components for the given FBX mesh actor.
	* @param  MeshActor  The parent FBXMesh Actor for the Selected Mesh Components.
	*/
	UFUNCTION(BlueprintCallable, Category = "FBX")
		void IsolateSelection(AFBXMeshActor* MeshActor);

	/**
	* Hide Selected Components.
	* @param  MeshActor  The parent FBXMesh Actor for the Selected Mesh Components.
	*/
	UFUNCTION(BlueprintCallable, Category = "FBX")
		void HideSelection(AFBXMeshActor* MeshActor);

	/**
	* UnHide All Components.
	* @param  MeshActor  The parent FBXMesh Actor for the Selected Mesh Components.
	*/
	UFUNCTION(BlueprintCallable, Category = "FBX")
		void UnHideAll(AFBXMeshActor* MeshActor);


	/**
	* Returns the FBXSection with the given SectionID and NodeID.
	* @param  MeshActor  The parent FBXMesh Actor.
	* @param  NodeID  The Node ID.
	* @param  SectionID  The Section ID.
	* @param  FBXSection  The FBXSection being returned.
	*/
	UFUNCTION(BlueprintCallable, Category = "FBX")
		bool GetFBXSection(AFBXMeshActor* MeshActor, int32 NodeID, int32 SectionID, FFBXSectionStructure& FBXSection);


	UFUNCTION(BlueprintCallable, Category = "FBX")
		void LoadFBXFromSaveGameObject(UFBXSaveGame* SaveGameObject);
};
