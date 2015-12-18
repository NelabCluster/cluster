#include "StdAfx.h"
#include "LJPotentialEnergy.h"


LJPotentialEnergy::LJPotentialEnergy(void)
{
}


LJPotentialEnergy::~LJPotentialEnergy(void)
{
}

double LJPotentialEnergy::energyValue(double dis[],int N)
{
	double E = 0;
	for (int i = 0; i < N - 1; i ++)
	{
		for (int j = i + 1; i < N; j ++)
		{
			double r = dis[ i * N + j ];
			E += pow(1/r,12) - pow(1/r,6);
		}
	}
	E = 4 * E;
	return E;
}