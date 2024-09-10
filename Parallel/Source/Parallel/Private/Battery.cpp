// Fill out your copyright notice in the Description page of Project Settings.



#include "Battery.h"
#include "ParallelCharacter.h"

void ABattery::Interact() 
{
	AParallelCharacter* Character = Cast<AParallelCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());

	Character->AddBattery();
	Mesh->SetVisibility(false, true);
	Destroy();
}
