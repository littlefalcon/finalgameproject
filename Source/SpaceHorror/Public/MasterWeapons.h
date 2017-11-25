// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MasterWeapons.generated.h"

UCLASS()
class SPACEHORROR_API AMasterWeapons : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMasterWeapons();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// Set Rate of Fire per minute
	UPROPERTY(EditAnywhere)
		int fireRate = 180;
	// Set MagazineCapacity
	UPROPERTY(EditAnywhere)
		int magazineCapacity = 50;


};
