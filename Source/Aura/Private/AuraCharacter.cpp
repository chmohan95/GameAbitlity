
#include "AuraCharacter.h"

// Sets default values
AAuraCharacter::AAuraCharacter()
{
 
	PrimaryActorTick.bCanEverTick = true;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(),FName("WeaponSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision); 
}


void AAuraCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}



