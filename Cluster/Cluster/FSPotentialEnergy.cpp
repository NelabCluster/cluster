#include "StdAfx.h"
#include "FSPotentialEnergy.h"


FSPotentialEnergy::FSPotentialEnergy(void)
{
}


FSPotentialEnergy::~FSPotentialEnergy(void)
{
}

double FSPotentialEnergy::EnergyValue(Clusters& cluster)
{
	return 0;
}

double FSPotentialEnergy::ForceValue(Clusters& cluster)
{
	return 0;
}

PE_AtomParamter& FSPotentialEnergy::ReturnAtomParameter(ATOM_TYPE atom)
{
	return FS_AtomParamter(0,0,0,0,0,0,0);
}

PE_AtomParamter& FSPotentialEnergy::ReturnAtomParameter(ATOM_TYPE atom1,ATOM_TYPE atom2)
{
	return FS_AtomParamter(0,0,0,0,0,0,0);
}