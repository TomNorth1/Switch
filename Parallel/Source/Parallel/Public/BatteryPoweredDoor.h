// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "BatteryPoweredDoor.generated.h"

/**
 * 
 */
UCLASS()
class PARALLEL_API ABatteryPoweredDoor : public AInteractable
{
	GENERATED_BODY()
public:

	virtual void Interact();

	UPROPERTY(BlueprintReadWrite)
	bool bIsOpen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BatteryCost;

	UFUNCTION(BlueprintImplementableEvent)
	void OpenDoor();
};
