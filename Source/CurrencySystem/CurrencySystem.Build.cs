// Copyright 2023 Lê Vương Gia Huân

using UnrealBuildTool;

public class CurrencySystem : ModuleRules
{
	public CurrencySystem(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "Engine"
            }
            );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "DeveloperSettings"
            }
            );
    }
}