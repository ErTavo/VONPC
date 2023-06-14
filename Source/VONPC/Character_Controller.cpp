
#include "Character_Controller.h"

// Sets default values
ACharacter_Controller::ACharacter_Controller()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACharacter_Controller::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacter_Controller::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacter_Controller::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	InputComponent-＞BindAxis("MoveX", this, &ACharacter_Controller::Vertical_Movement);
 	InputComponent-＞BindAxis("MoveY", this, &ACharacter_Controller::Horizontal_Movement);

 	InputComponent-＞BindAxis("CameraSide", this, &ACharacter_Controller::AddControllerYawInput);
 	InputComponent-＞BindAxis("CameraUp", this, &ACharacter_Controller::AddControllerPitchInput);

}

void ACharacter_Controller::Horizontal_Movement(float axis)
{
 if (axis)
 {
  AddMovementInput(GetActorRightVector(), axis);
 }
}

void ACharacter_Controller::Vertical_Movement(float axis)
{
 if (axis)
 {
  AddMovementInput(GetActorForwardVector(), axis);
 }
}


