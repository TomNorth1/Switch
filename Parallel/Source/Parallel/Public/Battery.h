// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "Battery.generated.h"

/**
 * 
 */
UCLASS()
class PARALLEL_API ABattery : public AInteractable
{
	GENERATED_BODY()
	
public:
	virtual void Interact() override;

};
