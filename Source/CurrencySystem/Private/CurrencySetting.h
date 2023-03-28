// Copyright 2023 Lê Vương Gia Huân

#pragma once

// DeveloperSettings
#include "Engine/DeveloperSettings.h"

//
#include "CurrencySetting.generated.h"

UCLASS(Config = CurrencySystem, DefaultConfig)
class CURRENCYSYSTEM_API UCurrencySetting : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	// set category in project settings
	UCurrencySetting(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(config, EditAnywhere, meta = (ConfigRestartRequired = true), category = CurrencySystem) int StartingAmount;
};