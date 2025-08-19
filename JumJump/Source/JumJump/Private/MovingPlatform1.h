// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

//이거보다 다른 include가 위로가 있어야함. generated.h가 사용자가 작성한것을 의미하기 때문.
#include "MovingPlatform1.generated.h"

UCLASS() //언리얼 클래스로 연결해주는 매크로
class AMovingPlatform1 : public AActor
{
	GENERATED_BODY()
	
private:
	FVector pre = FVector(0, 0, 0);
public:
	//언리얼 속성이라고 언리얼 에디터에 알려주는 매크로
	//에디터에서 변경 가능
	UPROPERTY(EditAnywhere,Category = "Moving Platform")
	FVector PlatformVelocity = FVector(0, 0, 0);

	UPROPERTY(EditAnywhere, Category = "Moving Platform")
	float MoveDistance = 0;

	UPROPERTY(EditAnywhere, Category = "Moving Platform")
	FRotator PlatformRotation = FRotator(0, 0, 0);

public:	
	// Sets default values for this actor's properties
	AMovingPlatform1(); //생성자


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
