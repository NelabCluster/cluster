#pragma once
#include "potentialenergy.h"
class LJPotentialEnergy :
	public PotentialEnergy
{
public:
	LJPotentialEnergy(void);
	~LJPotentialEnergy(void);

	 double EnergyValue(Clusters& cluster);

	 double ForceValue(Clusters& clusters);

};

