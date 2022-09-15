// Fill out your copyright notice in the Description page of Project Settings.


#include "CLevitation.h"

// Sets default values
ACLevitation::ACLevitation()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACLevitation::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogActor, Warning, TEXT("Test message"));

}

// Called every frame
void ACLevitation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	//Gets the location of this actor in the world and stores it in the finalPosition variable
	FVector finalPosition = this->GetActorLocation();

	//Adds to the position in Z the result of speed multiplied by deltaTime
	finalPosition.Z = finalPosition.Z + (DeltaTime * speed);

	//Sets the resulting vector as the new position for the actor
	this->SetActorLocation(finalPosition);
}

