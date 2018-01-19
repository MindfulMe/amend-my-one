// Fill out your copyright notice in the Description page of Project Settings.

#include "CppCharacter.h"
#include "Erdilon.h"

// Sets default values
ACppCharacter::ACppCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACppCharacter::BeginPlay()
{
	Super::BeginPlay();
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("NewCharacter"));
	}
}

// Called every frame
void ACppCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACppCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACppCharacter::StartJump);
 	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACppCharacter::StopJump);
}



void ACppCharacter::StartJump()
{
	bPressedJump = true;
	if (GetCharacterMovement()->IsMovingOnGround() == true)
	{
		resetMyDoOnce();
	}
	if (GetCharacterMovement()->IsMovingOnGround() == true && jumpCounter < 1)
	{
		bPressedJump = true;
	}
	else if (GetCharacterMovement()->IsMovingOnGround() == false && jumpCounter < 1)
	{
		myDoOnce();
	}
}

void ACppCharacter::myDoOnce()
{
	if (isDone == true)
	{
		if (jumpCounter == 0)
			LaunchCharacter(FVector(0, 0, 1) * 500, false, false);
		else
			LaunchCharacter(FVector(0, 0, 1) * 250, false, false);
		jumpCounter++;
		return;
	}
	else
		return;
}

void ACppCharacter::resetMyDoOnce()
{
	isDone = true;
	jumpCounter = 0;
	return;
}



void ACppCharacter::StopJump()
{
	bPressedJump = false;
}


