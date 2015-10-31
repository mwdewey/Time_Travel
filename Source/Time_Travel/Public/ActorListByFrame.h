// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ActorListByFrame.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FActorListRow
{
    GENERATED_USTRUCT_BODY()
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="2D Array")
    TArray<AActor*> Actors;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="2D Array")
    TArray<FTransform> Transforms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "2D Array")
	TArray<FVector> LinearVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "2D Array")
	TArray<FVector> AngularVelocity;
    
    FActorListRow() {
        
    }
    
};

USTRUCT(BlueprintType)
struct FActorListByFrame
{
    GENERATED_USTRUCT_BODY()
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="2D Array")
    TArray<FActorListRow> Rows;
    
    FActorListByFrame() {
        
    }
    
};