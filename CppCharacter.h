// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CppCharacter.generated.h"

UCLASS()
class ERDILON_API ACppCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACppCharacter();

	
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	int jumpCounter = 0;

	bool isDone;

	void myDoOnce();

	void resetMyDoOnce();

public:	

	UFUNCTION()
		void StartJump();
	UFUNCTION()
		void StopJump();


	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
