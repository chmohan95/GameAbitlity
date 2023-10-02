// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AuraCharacter.generated.h"

UCLASS()
class AURA_API AAuraCharacter : public ACharacter
{
	GENERATED_BODY()

public:

	AAuraCharacter();

protected:
	
	virtual void BeginPlay() override;
	
  UPROPERTY(EditAnywhere,Category="Combact")
  TObjectPtr<USkeletalMeshComponent>Weapon;

	 UPROPERTY(Rep,EditAnywhere,Category="Members")
	int Members;
};
