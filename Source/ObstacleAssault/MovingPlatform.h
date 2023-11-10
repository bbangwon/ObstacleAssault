// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//UPROPERTY(EditAnywhere) // EditAnywhere allows us to edit the variable in the editor
	//int32 MyInt = 99;

	//UPROPERTY(EditAnywhere)
	//int32 InputA = 0;

	//UPROPERTY(EditAnywhere)
	//int32 InputB = 0;

	//UPROPERTY(EditAnywhere)
	//int32 APlusB = 0;

	//UPROPERTY(EditAnywhere)
	//float InputFloatA = 0.0f;

	//UPROPERTY(EditAnywhere)
	//float InputFloatB = 0.0f;

	//UPROPERTY(EditAnywhere)
	//float APlusBFloat = 0.0f;

	//UPROPERTY(EditAnywhere)
	//float MyFloat = 5.99f;

	//UPROPERTY(EditAnywhere)
	//bool MyBool = true;

	UPROPERTY(EditAnywhere)
	FVector MyVector = FVector(1, 2, 3);

	UPROPERTY(EditAnywhere)
	float MyX = 0;
};
