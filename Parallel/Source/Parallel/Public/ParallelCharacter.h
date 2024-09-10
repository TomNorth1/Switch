// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "ParallelCharacter.generated.h"

UCLASS()
class PARALLEL_API AParallelCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AParallelCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MouseSensitivity;

	UPROPERTY(BlueprintReadWrite)
	bool bBlueWorld;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCameraComponent* FirstPersonCamera;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	float InteractionDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPhysicsHandleComponent*  PhysicsHandle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsHoldingCrate;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void SwitchWorlds();

	void Interact();

	UFUNCTION(BlueprintImplementableEvent)
	void Grab(UPrimitiveComponent* Obj);

	UFUNCTION(BlueprintImplementableEvent)
	void Drop();

	UPROPERTY(BlueprintReadOnly)
	int32 NumOfBatteries;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UFUNCTION(BlueprintCallable)
	void AddBattery();

	UFUNCTION(BlueprintCallable)
	bool RemoveBattery(int32 NumToRemove);

private:
	void MoveForward(float Value);
	void MoveRight(float Value);

	void LookUp(float Value);
	void Turn(float Value);


};
