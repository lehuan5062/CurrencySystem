// Copyright 2023 Lê Vương Gia Huân

// CurrencySystem
#include "CurrencyComponent.h"
#include "CurrencySetting.h"

// default value
UCurrencyComponent::UCurrencyComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, CurrentAmount{ MoveTemp(GetMutableDefault<UCurrencySetting>()->StartingAmount) } {}

// set new amount
// THREAD SAFE
void UCurrencyComponent::set(const int& amount) noexcept { CurrentAmount = amount; }

// return current amount
// THREAD SAFE
const int&& UCurrencyComponent::get() const noexcept { return CurrentAmount; }

// increase amount, must > 0
// THREAD SAFE
void UCurrencyComponent::add(const unsigned int& amount) noexcept { CurrentAmount += amount; }

// true if 0 < the amount to take <= current amount
// THREAD SAFE
bool UCurrencyComponent::ShouldTake(const unsigned int& amount) const noexcept
{
	return (static_cast<int>(amount) <= CurrentAmount);
}

// try to decrease amount
// THREAD SAFE
void UCurrencyComponent::take(const unsigned int& amount) noexcept { CurrentAmount -= amount; }