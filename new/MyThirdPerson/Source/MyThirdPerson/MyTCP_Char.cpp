// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTCP_Char.h"
#include "GameFramework/Controller.h"


// Sets default values
AMyTCP_Char::AMyTCP_Char()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyTCP_Char::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void AMyTCP_Char::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyTCP_Char::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
