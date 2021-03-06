#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SimboticActor.generated.h"

UCLASS()
class SANDBOX_API ASimboticActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASimboticActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
