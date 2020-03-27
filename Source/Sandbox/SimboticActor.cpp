#include "SimboticActor.h"


// Sets default values
ASimboticActor::ASimboticActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASimboticActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASimboticActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

