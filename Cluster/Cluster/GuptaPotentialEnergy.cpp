#include "StdAfx.h"
#include "GuptaPotentialEnergy.h"


GuptaPotentialEnergy::GuptaPotentialEnergy(void)
{
}


GuptaPotentialEnergy::~GuptaPotentialEnergy(void)
{

}


double GuptaPotentialEnergy::energyValue(Atom_Type atom,double dis[],int N)
{
	double E = 0;
	for (int i = 0; i < N - 1; i ++)
	{
		for (int j = 0; j < N; j ++)
		{
			
		}
	}

	return E;
}

PE_AtomParamter GuptaPotentialEnergy::returnAtomParameter(Atom_Type atom){ 
	switch (atom)
	{
	case ATOM_Fe:
		return Gupta_AtomParamter(2.553,0.13315,1.6179,10.5,2.6);
		break;
	case ATOM_Pt:
		return Gupta_AtomParamter(2.7746,0.2975,2.695,10.612,4.004);
		break;
	}

	return Gupta_AtomParamter(0,0,0,0,0);
}

PE_AtomParamter GuptaPotentialEnergy::returnAtomParameter(Atom_Type atom1,Atom_Type atom2)
{
	if ( (atom1 == ATOM_Fe && atom2 == ATOM_Pt) || (atom1 == ATOM_Pt && atom2 == ATOM_Fe))
	{
		return Gupta_AtomParamter(2.6638,0.19903,2.0881,10.556,3.302);
	}

	return Gupta_AtomParamter(0,0,0,0,0);
}