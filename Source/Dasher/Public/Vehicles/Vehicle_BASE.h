// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehiclePawn.h"
#include "Vehicle_BASE.generated.h"

/**
 * 
 */
UCLASS()
class DASHER_API AVehicle_BASE : public AWheeledVehiclePawn
{
	GENERATED_BODY()

public:
	AVehicle_BASE();

	virtual void BeginPlay() override;
	
};
