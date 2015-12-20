#include "StdAfx.h"
#include "GuptaPotentialEnergy.h"


GuptaPotentialEnergy::GuptaPotentialEnergy(void)
{
}


GuptaPotentialEnergy::~GuptaPotentialEnergy(void)
{

}


double GuptaPotentialEnergy::EnergyValue(Clusters& cluster)
{
	return 0;
}

double GuptaPotentialEnergy::ForceValue(Clusters& cluster)
{
	return 0;
}

PE_AtomParamter& GuptaPotentialEnergy::ReturnAtomParameter(ATOM_TYPE atom){ 
	
	switch (atom)
	{
	case ATOM_Fe:
		return GuptaFe;
		break;
	case ATOM_Pt:
		return GuptaPt;
		break;
	}

	return Gupta_AtomParamter(0,0,0,0,0);
}

PE_AtomParamter& GuptaPotentialEnergy::ReturnAtomParameter(ATOM_TYPE atom1,ATOM_TYPE atom2)
{
	if ( (atom1 == ATOM_Fe && atom2 == ATOM_Pt) || (atom1 == ATOM_Pt && atom2 == ATOM_Fe))
	{
		return GuptaFePt;
	}

	return Gupta_AtomParamter(0,0,0,0,0);
}