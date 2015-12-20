#pragma once
#include "Atom.h"
#include "Clusters.h"

enum PE_TYPE
{
	PE_LJ,
	PE_Gupta,
	PE_FS
};
struct PE_AtomParamter{ };

class PotentialEnergy
{
public:
	static PotentialEnergy& PEWithType(PE_TYPE type);

	virtual ~PotentialEnergy();
	
	virtual double EnergyValue(Clusters& cluster);

	virtual double ForceValue(Clusters& cluster);

//	virtual double atomEnergyAtIndex(int index);


private:
	virtual PE_AtomParamter& ReturnAtomParameter(ATOM_TYPE atom);
	virtual PE_AtomParamter& ReturnAtomParameter(ATOM_TYPE atom1,ATOM_TYPE atom2);
};