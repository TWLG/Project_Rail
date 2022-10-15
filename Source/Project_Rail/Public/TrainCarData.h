// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"

#include "TrainCarData.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_RAIL_API UTrainCarData : public UDataAsset
{
	GENERATED_BODY()
public:
	//Tags the asset to asset to able to dynamically assign it
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FGameplayTag CarTag;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSoftObjectPtr<UStaticMesh> TrainCarMesh;
	
};
