// Fill out your copyright notice in the Description page of Project Settings.


#include "ParallelCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Interactable.h"
#include "Crate.h"

// Sets default values
AParallelCharacter::AParallelCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MouseSensitivity = 0.45f;

	bBlueWorld = true;

	GetCharacterMovement()->MaxWalkSpeed = 1000;
	
	InteractionDistance = 300.f;
	
	FirstPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCamera->SetupAttachment(RootComponent);

	PhysicsHandle = CreateDefaultSubobject<UPhysicsHandleComponent>(TEXT("PhysicsHandle"));

	bIsHoldingCrate = false;

	NumOfBatteries = 0;
}

// Called when the game starts or when spawned
void AParallelCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AParallelCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AParallelCharacter::MoveRight(float Value) 
{
	if (Value) 
	{
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AParallelCharacter::MoveForward(float Value) 
{
	if (Value) 
	{
		AddMovementInput(GetActorForwardVector(), Value);
	}
}


void AParallelCharacter::LookUp(float Value) 
{
	if (Value) 
	{
		AddControllerPitchInput(Value * MouseSensitivity);
	}
}

void AParallelCharacter::Turn(float Value) 
{
	if (Value) 
	{
		AddControllerYawInput(Value * MouseSensitivity);
	}
}


void AParallelCharacter::SwitchWorlds() 
{
	if (bBlueWorld)
	{
		SetActorLocation(FVector(GetActorLocation().X, GetActorLocation().Y + 22000, GetActorLocation().Z), false);
	}
	else 
	{
		SetActorLocation(FVector(GetActorLocation().X, GetActorLocation().Y - 22000, GetActorLocation().Z), false);
	}

	bBlueWorld = !bBlueWorld;
}

void AParallelCharacter::Interact() 
{
	if (bIsHoldingCrate) 
	{
		Drop();
	}
	else
	{
		FHitResult OutHit;
		FVector Start = FirstPersonCamera->GetComponentLocation();
		FVector End = Start + FirstPersonCamera->GetForwardVector() * InteractionDistance;

		if (GetWorld()->LineTraceSingleByChannel(OutHit, Start, End, ECC_Visibility))
		{
			ACrate* Crate = Cast<ACrate>(OutHit.Actor);
			if (Crate)
			{
				if (!bIsHoldingCrate)
				{
					Grab(OutHit.GetComponent());
				}
			}
			else
			{
				AInteractable* Obj = Cast<AInteractable>(OutHit.Actor);
				if (Obj)
				{
					Obj->Interact();
				}
			}
		}
	}
}

// Called to bind functionality to input
void AParallelCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AParallelCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AParallelCharacter::MoveRight);
	PlayerInputComponent->BindAxis("LookUp", this, &AParallelCharacter::LookUp);
	PlayerInputComponent->BindAxis("Turn", this, &AParallelCharacter::Turn);

	//PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &AParallelCharacter::Interact);	
}

void AParallelCharacter::AddBattery()
{
	NumOfBatteries++;
}

bool AParallelCharacter::RemoveBattery(int32 NumToRemove)
{
	if (NumOfBatteries >= NumToRemove) 
	{
		NumOfBatteries -= NumToRemove;
		return true;
	}
	else 
	{
		return false;
	}
}
