// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "JerarquiaActor.generated.h"

UCLASS()
class JERARQUIA_API AJerarquiaActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AJerarquiaActor();

	UPROPERTY(VisibleAnywhere)
			USceneComponent* Root;

	UPROPERTY(VisibleAnywhere)
			USceneComponent* SceneComponenteHijo;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* CajaUno;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* CajaDos;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
