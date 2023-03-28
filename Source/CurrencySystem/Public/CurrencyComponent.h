// Copyright 2023 Lê Vương Gia Huân

#pragma once

// std
#include <atomic>

// engine
#include "Components/ActorComponent.h"

//
#include "CurrencyComponent.generated.h"

UCLASS()
class CURRENCYSYSTEM_API UCurrencyComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UCurrencyComponent(const FObjectInitializer& ObjectInitializer);

	// set new amount
	// THREAD SAFE
	void set(const int& amount) noexcept;

	// return amount
	// THREAD SAFE
	const int&& get() const noexcept;

	// increase amount
	// THREAD SAFE
	void add(const unsigned int& amount) noexcept;

	// true if 0 < the amount to take <= current amount
	// THREAD SAFE
	bool ShouldTake(const unsigned int& amount) const noexcept;

	// try to decrease amount
	// THREAD SAFE
	void take(const unsigned int& amount) noexcept;

private:
	// THREAD SAFE
	std::atomic_int CurrentAmount;
};