// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform1.h"

// Sets default values
AMovingPlatform1::AMovingPlatform1() // 이 부분 작성 시 조심히 잘 작성.
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform1::BeginPlay()
{
	Super::BeginPlay();

	pre = GetActorLocation();

}

// Called every frame
void AMovingPlatform1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector newv = GetActorLocation();
	if (MoveDistance < FVector::Dist(pre, newv))
	{
		FVector MoveDirection = PlatformVelocity.GetSafeNormal();
		pre = pre + MoveDirection * MoveDistance;
		SetActorLocation(pre);

		PlatformVelocity = -PlatformVelocity;
	}
	else {
		newv += PlatformVelocity * DeltaTime;
		SetActorLocation(newv);

	}
	FRotator newr = PlatformRotation * DeltaTime;
	AddActorWorldRotation(newr);
}