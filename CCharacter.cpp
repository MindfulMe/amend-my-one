//// Fill out your copyright notice in the Description page of Project Settings.
//
//#include "CCharacter.h"
//
//
//// Sets default values
//ACCharacter::ACCharacter()
//{
// 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
//	PrimaryActorTick.bCanEverTick = true;
//
//}
//
//// Called when the game starts or when spawned
//void ACCharacter::BeginPlay()
//{
//	Super::BeginPlay();
//	
//}
//
//// Called every frame
//void ACCharacter::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}
//
//// Called to bind functionality to input
//void ACCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
//{
//	Super::SetupPlayerInputComponent(PlayerInputComponent);
//
//void ACCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
//{
//		OnStartJump();
//}
//
//void ACCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
//{
//		OnStopJump();
//}
//
//
//void ACCharacter::OnStartJump()
//{
//	if (GetCharacterMovement()->IsMovingOnGround() == true)
//	{
//		resetMyDoOnce();
//	}
//	if (GetCharacterMovement()->IsMovingOnGround() == true && jumpCounter < 1)
//	{
//		bPressedJump = true;
//	}
//	else if (GetCharacterMovement()->IsMovingOnGround() == false && jumpCounter < 1)
//	{
//		myDoOnce();
//	}
//}
//void ACCharacter::myDoOnce()
//{
//	if (isDone == true)
//	{
//		if (jumpCounter == 0)
//			LaunchCharacter(FVector(0, 0, 1) * 500, false, false);
//		else
//			LaunchCharacter(FVector(0, 0, 1) * 250, false, false);
//		jumpCounter++;
//		return;
//	}
//	else
//		return;
//}
//
//void ACCharacter::resetMyDoOnce()
//{
//	isDone = true;
//	jumpCounter = 0;
//	return;
//}
//
//void ACCharacter::OnStopJump()
//{
//	bPressedJump = false;
//}
//}
//
