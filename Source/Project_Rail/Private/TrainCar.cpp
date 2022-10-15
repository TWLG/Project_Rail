// Fill out your copyright notice in the Description page of Project Settings.


#include "TrainCar.h"

#include "TrainCarData.h"


// Sets default values
ATrainCar::ATrainCar()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	TrainCar = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TrainCar"));
	if(IsValid(CarData) && CarData->TrainCarMesh.IsValid())
	{
		TrainCar->SetStaticMesh(CarData->TrainCarMesh.Get());
	}
}

// Called when the game starts or when spawned
void ATrainCar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATrainCar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

