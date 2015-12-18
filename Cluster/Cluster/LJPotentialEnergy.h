#pragma once
#include "potentialenergy.h"
class LJPotentialEnergy :
	public PotentialEnergy
{
public:
	LJPotentialEnergy(void);
	~LJPotentialEnergy(void);

	 double energyValue(double dis[],int N);
};

