// Copyright 2018-2019, Athian Games. All Rights Reserved. 

using System.IO;
using System;
using UnrealBuildTool;

public class RuntimeFBXImport : ModuleRules
{
    private string ModulePath
    {
        get { return ModuleDirectory; }
    }

    private string ThirdPartyPath
    {
        get { return Path.GetFullPath(Path.Combine(ModulePath, "../../ThirdParty/")); }
    }

    public RuntimeFBXImport(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
                "ProceduralMeshComponent",
                "RenderCore",
                "RHI",
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "AppFramework",
                "UMG",
                "InputCore",
                "ApplicationCore",
                "ImageWrapper"
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
                "AppFramework", "Projects"
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

        PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "FBX/include"));
        PublicAdditionalLibraries.Add(Path.Combine(ThirdPartyPath, "FBX/lib/libfbxsdk-md.lib"));

		RuntimeDependencies.Add(Path.Combine(ThirdPartyPath, "RuntimeFBXImportLibrary.dll"));

		// Definitions
		PublicDefinitions.Add(string.Format("WITH_FBX_BINDING=1"));


    }
}
