// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TrainCar.generated.h"

class UTrainCarData;
UCLASS()
class PROJECT_RAIL_API ATrainCar : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATrainCar();

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	TObjectPtr<UTrainCarData> CarData;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	TObjectPtr<UStaticMeshComponent> TrainCar;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
