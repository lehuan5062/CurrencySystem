// Copyright 2023 Lê Vương Gia Huân

// CurrencySystem
#include "CurrencySetting.h"

// set category in project settings
UCurrencySetting::UCurrencySetting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer), StartingAmount{}
{
	CategoryName = "Plugins";
}