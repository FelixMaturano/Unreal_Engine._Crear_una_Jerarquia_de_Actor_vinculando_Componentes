// Fill out your copyright notice in the Description page of Project Settings.


#include "JerarquiaActor.h"

// Sets default values
AJerarquiaActor::AJerarquiaActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	Root = CreateDefaultSubobject<USceneComponent>("Root");

	SceneComponenteHijo = CreateDefaultSubobject<USceneComponent>("USceneComponentHijo");

	CajaUno = CreateDefaultSubobject<UStaticMeshComponent>("CajaUno");

	CajaDos = CreateDefaultSubobject<UStaticMeshComponent>("CajaDos");

	//Obtener una referencia al mesh cube
	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube_Chamfer.1M_Cube_Chamfer'"));

	//Dar a ambas cajas un mesh
	if (MeshAsset.Object != nullptr) {

		CajaUno->SetStaticMesh(MeshAsset.Object);
		CajaDos->SetStaticMesh(MeshAsset.Object);
	}

	RootComponent = Root;

	//Configurar la geraquia del objeto
	CajaUno->AttachTo(Root);
	CajaDos->AttachTo(SceneComponenteHijo);
	SceneComponenteHijo->AttachTo(Root);


	// Alejar y escalar el hijo de la raiz
	SceneComponenteHijo->SetRelativeTransform(FTransform(FRotator(0, 0, 0), FVector(250, 0, 0), FVector(0.1f)));


}

// Called when the game starts or when spawned
void AJerarquiaActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJerarquiaActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

