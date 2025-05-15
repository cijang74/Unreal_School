// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "MyThirdPersonChar.generated.h"

UCLASS()
class MYTHIRDPERSON_API AMyThirdPersonChar : public ACharacter
{
	GENERATED_BODY()

	// 스프링 암 컴포넌트
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MyTPS_Cam, meta = (AllowPrivateAccess = "true")) 
	class USpringArmComponent* CameraBoom;

	// 카메라팔로우
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MyTPS_Cam, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

public:
	// Sets default values for this character's properties
	AMyThirdPersonChar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, Category = Input) 
	class UInputMappingContext* IC_Character;

	UPROPERTY(EditAnywhere, Category = Input)
 	class UInputAction* IA_Jump;

};
