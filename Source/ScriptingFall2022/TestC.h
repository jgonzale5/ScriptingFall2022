// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestC.generated.h"

UCLASS()
class SCRIPTINGFALL2022_API ATestC : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestC();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	virtual void Move(FVector direction);

	UPROPERTY(EditAnywhere, Category="Integer")
	int counter = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float speed = 0;
};
