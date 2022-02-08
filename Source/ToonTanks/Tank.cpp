// Fill out your copyright notice in the Description page of Project Settings.


#include "Tank.h"


ATank::ATank()
{
    SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
}