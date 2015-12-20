#include "StdAfx.h"
#include "PotentialEnergy.h"
#include "LJPotentialEnergy.h"
#include "GuptaPotentialEnergy.h"
#include "FSPotentialEnergy.h"

PotentialEnergy& PotentialEnergy::PEWithType(PE_TYPE type)
{
	switch(type)
	{
	case PE_LJ:
		return LJPotentialEnergy();
	case PE_Gupta:
		return GuptaPotentialEnergy();
	case PE_FS:
		return FSPotentialEnergy();
	}
	return PotentialEnergy();
}
PotentialEnergy::~PotentialEnergy(){ }

double PotentialEnergy::EnergyValue(Clusters& cluster){ return 0; }

double PotentialEnergy::ForceValue(Clusters& cluster){ return 0; }

//double PotentialEnergy::atomEnergyAtIndex(int index){ return 0; }

PE_AtomParamter& PotentialEnergy::ReturnAtomParameter(ATOM_TYPE atom){ return PE_AtomParamter(); }

PE_AtomParamter& PotentialEnergy::ReturnAtomParameter(ATOM_TYPE atom1,ATOM_TYPE atom2){ return PE_AtomParamter(); }