// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"

UCLASS()
class TOONTANKS_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();

	void HandleDestruction();

protected:
	void RotateTurret(FVector Target);
	void Fire();

private:
	UPROPERTY(EditDefaultsOnly)
	class UCapsuleComponent* CapsuleComp;
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* BaseMesh;
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* TurretMesh;
	UPROPERTY(EditDefaultsOnly)
	USceneComponent* ProjectileSpawnPoint;

	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	TSubclassOf<class AProjectile> ProjectileClass;

	UPROPERTY(EditAnywhere)
	class UParticleSystem* DestroyParticles;

	UPROPERTY(EditAnywhere, Category = "Sounds")
	class USoundBase* DestroySound;

	UPROPERTY(EditAnywhere, Category = "Camera")
	TSubclassOf<UCameraShakeBase> DestroyCameraShake;
};
