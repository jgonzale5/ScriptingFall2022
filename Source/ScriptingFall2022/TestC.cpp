// Fill out your copyright notice in the Description page of Project Settings.


#include "TestC.h"

// Sets default values
ATestC::ATestC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestC::BeginPlay()
{
	Super::BeginPlay();
	counter++;
	
	UE_LOG(LogActor, Warning, TEXT("Testing %s"), *this->GetName());
}

// Called every frame
void ATestC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATestC::Move(FVector direction)
{
	FVector finalPosition = this->GetActorLocation();

	finalPosition += direction;

	this->SetActorLocation(finalPosition);
}

