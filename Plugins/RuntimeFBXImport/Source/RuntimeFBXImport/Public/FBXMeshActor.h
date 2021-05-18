// Copyright 2018-2019, Athian Games. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "RuntimeFBXImportBPLibrary.h"
#include "ImportFBXAsync.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/Material.h"
#include "FBXMeshActor.generated.h"


class AFBXImportManager;


/**
 * This class is spawned for every FBX file imported, and contains all the corresponding procedural mesh components
constructed against the given nodes and material sections as read from the source file.
 */
UCLASS()
class AFBXMeshActor : public AActor
{
	GENERATED_BODY()
	

public:	

	AFBXMeshActor();

	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = "FBX")
		float DefaultMeshScale;

	/** A mapping between every node and array of Mesh Components parented by the corresponding node. */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "FBX")
		TMap<int32, FFBXNodeStructure> NodeSectionMap;

	/** Array of all mesh components generated for the given FBX file. */
	UPROPERTY()
		TArray<UProceduralMeshComponent*> ProceduralMeshes;

	/** Array of selected mesh components. */
	UPROPERTY()
		TArray<UProceduralMeshComponent*> CurrentSelectedComponents;

	/** Full file name(with path information) for the given FBX file. */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "FBX")
		FString FullFileName;

	/** Base File name for the given FBX file. */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "FBX")
		FString ActorName;

	/** If the FBX import for this actor is currently being executed. */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "FBX")
		bool IsBusy;

	/**
	* Select a given Node.
	* @param  NodeID  The NodeID for the Node to be Selected.
	* @param  DeSelectRest  If the rest of the nodes to be DeSelected.
	* @returns  Sections corresponding to the Selected Node.
	*/
	UFUNCTION(BlueprintCallable, Category = "FBX")
		TArray<FFBXSectionStructure> SelectNode(int32 NodeID, bool DeSelectRest = true);

	/**
	* Select a given Node Section.
	* @param  NodeID  The NodeID for the Node corresponding to the Section to be Selected.
	* @param  SectionID  The SectionID for the Section to be Selected.
	* @param  DeSelectRest  If the rest of the Sections to be DeSelected.
	*/
	UFUNCTION(BlueprintCallable, Category = "FBX")
		void SelectNodeSection(int32 NodeID, int32 SectionID, bool DeSelectRest = true);

	/**
	* Get Texture parameter of the material for the given Section.
	* @param  ParameterName  The Parameter name.
	* @param  NodeID  The Node ID.
	* @param  SectionID  The Section ID.
	* @param  Texture  The Texture parameter value returned.
	*/
	UFUNCTION(BlueprintPure, Category = "FBX")
		bool GetTextureParamValue(FName ParameterName, int32 NodeID, int32 SectionID, UTexture*& Texture);
	
	/**
	* Get Scalar parameter of the material for the given Section.
	* @param  ParameterName  The Parameter name.
	* @param  NodeID  The Node ID.
	* @param  SectionID  The Section ID.
	* @param  ScalarValue  The Scalar parameter value returned.
	*/
	UFUNCTION(BlueprintPure, Category = "FBX")
		bool GetScalarParamValue(FName ParameterName, int32 NodeID, int32 SectionID, float& ScalarValue);

	/**
	* Get Vector parameter of the material for the given Section.
	* @param  ParameterName  The Parameter name.
	* @param  NodeID  The Node ID.
	* @param  SectionID  The Section ID.
	* @param  Value  The Color parameter value returned.
	*/
	UFUNCTION(BlueprintPure, Category = "FBX")
		bool GetVectorParamValue(FName ParameterName, int32 NodeID, int32 SectionID, FLinearColor& Value);

	/**
	* Update the given Section with New Material.
	* @param  NewMaterial  The material to be applied to the given section.
	* @param  NodeID  The Node ID.
	* @param  SectionID  The Section ID.
	*/
	UFUNCTION(BlueprintCallable, Category = "FBX")
		void UpdateSectionMaterial(UMaterialInterface* NewMaterial, int32 NodeID, int32 SectionID);

	/**
	* Update the given Section material with New Texture parameter.
	* @param  ParameterName  The Parameter name.
	* @param  NewTexture  The Texture parameter to be applied.
	* @param  NodeID  The Node ID.
	* @param  SectionID  The Section ID.
	*/
	UFUNCTION(BlueprintCallable, Category = "FBX")
		void UpdateTextureParam(FName ParameterName, UTexture2D* NewTexture, int32 NodeID, int32 SectionID);

	/**
	* Update the given Section material with New Scalar parameter.
	* @param  ParameterName  The Parameter name.
	* @param  Value  The Section parameter to be applied.
	* @param  NodeID  The Node ID.
	* @param  SectionID  The Section ID.
	*/
	UFUNCTION(BlueprintCallable, Category = "FBX")
		void UpdateScalarParam(FName ParameterName, float Value, int32 NodeID, int32 SectionID);

	/**
	* Update the given Section material with New Vector parameter.
	* @param  ParameterName  The Parameter name.
	* @param  Value  The Section parameter to be applied.
	* @param  NodeID  The Node ID.
	* @param  SectionID  The Section ID.
	*/
	UFUNCTION(BlueprintCallable, Category = "FBX")
		void UpdateVectorParam(FName ParameterName, FLinearColor Value, int32 NodeID, int32 SectionID);


	/**
	* Enable or Disable Isolation for the Selected Components.
	* @param  Isolate  Is Isolation should be enabled or disabled.
	*/
	UFUNCTION(BlueprintCallable, Category = "FBX")
		void ToggleIsolation(bool Isolate);

	/**
	* Hide Selected Components.
	*/
	UFUNCTION(BlueprintCallable, Category = "FBX")
		void HideSelection();

	/**
	* Begin Creating a New node, when a node is being read from the source FBX file.
	* @param  NodeID  The Node ID.
	* @param  NodeName  The Node Name, as read from the source FBX file.
	*/
	void CreateNode(int32 NodeID, FString NodeName);

	/**
	* Begin Creating a New Section, when a Section is being read from the source FBX file.
	* @param  FBXImportManager  The ImportManager is passed here, to execute the Import Complete operations,
								if this is the last section being created.
	* @param  MeshLocation  The world locatiion where the Procedural Mesh should be created.
	* @param  NodeID  The Node ID.
	* @param  SectionID  The Section ID.
	* @param  ProcMeshSection  Mesh Section containing the Vertices, Triangles, Tangents, Normals and UV information
							  for the given section.
	* @param  BaseMaterial  The material whose dynamic instance to be applied on the given section.
	* @param  islastSection  If this is the last section being generated, for the given FBX file.
	* @param  IsCollisionMesh  If the given mesh is just for creating collision.
	*/
	void CreateSection(AFBXImportManager* FBXImportManager, FVector MeshLocation, int32 NodeID, int32 SectionID,
		FProceduralMeshSection ProcMeshSection, UMaterialInterface* BaseMaterial, bool islastSection, bool IsCollisionMesh, EFBXCollisionType CollisionType);
	
	void CreateMeshFromSavedFile(AFBXImportManager* FBXImportManager, TMap<int32, FFBXNodeStructure> LoadedSection);

	/**
	* Select all components for this actor.
	*/
	void SelectAllComponents();

	/**
	* Select specific component for this actor.
	* @param  ComponentToSelect  The component to select.
	* @param  deselectrest  If the rest of the components should be deselected.
	*/
	FFBXSectionStructure SelectSpecificComponent(UProceduralMeshComponent* ComponentToSelect, bool deselectrest = true);

	/**
	* DeSelect  current selected components for this actor.
	*/
	void DeSelectCurrentComponents();

	/**
	* Returns the FBXSection with the given SectionID and NodeID.
	* @param  NodeID  The Node ID.
	* @param  SectionID  The Section ID.
	* @param  FBXSection  The FBXSection being returned.
	*/
	bool GetFBXSection(int32 NodeID, int32 SectionID, FFBXSectionStructure& FBXSection);

	void SetFBXSection(int32 NodeID, int32 SectionID, FFBXSectionStructure FBXSection);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
