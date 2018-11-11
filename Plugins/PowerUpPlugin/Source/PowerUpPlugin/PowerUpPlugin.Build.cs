// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PowerUpPlugin : ModuleRules
{
	public PowerUpPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				"PowerUpPlugin/Public"
                // �ʿ��� �ٸ� public include ��θ� ���⿡ �߰��Ѵ�  
			}
            );
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				"PowerUpPlugin/Private",
                // �ʿ��� �ٸ� private include ��θ� ���⿡ �߰��Ѵ�  
			}
            );
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
                "CoreUObject",
                // ... �������� ��ũ�� �ٸ� public ���Ӽ��� �߰��Ѵ� ... 
			}
            );
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
