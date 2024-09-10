// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Crate.generated.h"

/**
 * 
 */
UCLASS()
class PARALLEL_API ACrate : public AActor
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere)
	float Weight;
	
};
