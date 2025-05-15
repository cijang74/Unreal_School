// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTPC.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AMyTPC::AMyTPC()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 콜리전캡슐크기설정
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	// 컨트롤러가회전할때회전하지말고 카메라에만영향을주도록한다.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
	// 캐릭터이동구성
	GetCharacterMovement()->bOrientRotationToMovement = true;

	// 카메라붐생성(충돌이있을경우플레이어쪽으로당겨짐)
	CameraBoom =
		CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f;
	CameraBoom->bUsePawnControlRotation = true;
	// 캐릭터를따라갈카메라를만듭니다.
	FollowCamera =
		CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
		FollowCamera->SetupAttachment(CameraBoom,
			USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

}

// Called when the game starts or when spawned
void AMyTPC::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyTPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyTPC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	UEnhancedInputComponent* EnhancedPlayerInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);

	if (EnhancedPlayerInputComponent != nullptr)
	{
		APlayerController* PlayerController = Cast<APlayerController>(GetController());

		if (PlayerController != nullptr)
		{
			UEnhancedInputLocalPlayerSubsystem* EnhancedSubsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());

			if (EnhancedSubsystem != nullptr)
			{
				EnhancedSubsystem->AddMappingContext(IC_Character, 1);
			}
		}

		EnhancedPlayerInputComponent->BindAction(IA_Move, ETriggerEvent::Triggered, this, &AMyTPC::Move);
		EnhancedPlayerInputComponent->BindAction(IA_Jump, ETriggerEvent::Started, this, &AMyTPC::Jump);
		EnhancedPlayerInputComponent->BindAction(IA_Jump, ETriggerEvent::Completed, this, &AMyTPC::StopJumping);
		EnhancedPlayerInputComponent->BindAction(IA_Look, ETriggerEvent::Triggered, this, &AMyTPC::Look);
		EnhancedPlayerInputComponent->BindAction(IA_Walk, ETriggerEvent::Started, this, &AMyTPC::BeginWalking);
		EnhancedPlayerInputComponent->BindAction(IA_Walk, ETriggerEvent::Completed, this, &AMyTPC::StopWalking);
	}

}

void AMyTPC::Move(const FInputActionValue& Value)
{
	FVector2D InputValue = Value.Get<FVector2D>();

	if (Controller != nullptr && (InputValue.X != 0.0f || InputValue.Y != 0.0f))
	{
		const FRotator YawRotation(0, Controller->GetControlRotation().Yaw, 0);
		if (InputValue.X != 0.0f)
		{
			const FVector RightDirection = UKismetMathLibrary::GetRightVector(YawRotation);
			AddMovementInput(RightDirection, InputValue.X);
		}

		if (InputValue.Y != 0.0f)
		{
			const FVector ForwardDirection = YawRotation.Vector();
			AddMovementInput(ForwardDirection, InputValue.Y);
		}
	}
}

void AMyTPC::Look(const FInputActionValue& Value)
{
	const FVector2D InputValue = Value.Get<FVector2D>();
	if (InputValue.X != 0.0f)
	{
		AddControllerYawInput(InputValue.X);
	}
	if (InputValue.Y != 0.0f)
	{
		AddControllerPitchInput(InputValue.Y);
	}
}

void AMyTPC::BeginWalking()
{
	GetCharacterMovement()->MaxWalkSpeed *= 0.4f;
}

void AMyTPC::StopWalking()
{
	GetCharacterMovement()->MaxWalkSpeed *= 0.4f;
}
