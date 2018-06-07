// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenDoor.h"
#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"



// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();
	AActor *owner = GetOwner();
	//FString rot = owner->GetActorTransform().GetRotation().ToString();
	FRotator *NewRotation = new FRotator(0.0f, owner->GetActorRotation().Yaw + 60.0F, 0.0f);
		 
	owner->SetActorRotation(*NewRotation);
	delete NewRotation;
	//UE_LOG(LogTemp, Log, TEXT("Door rotation level %s \n"), *rot);

	// ...
	
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

