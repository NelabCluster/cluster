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
	static PotentialEnergy* PEWithType(PE_TYPE type);
	
	virtual double energyValue(Clusters& cluster);
	virtual double energyValue(double dis[],int N);
	virtual double energyValue(Atom_Type atom1,double dis[],int N);
	virtual double energyValue(Atom_Type atom1,Atom_Type atom2,double dis[],int note[],int N);
	virtual double energyValue(Atom_Type atoms[],int atomsNumber,double dis[],int note[],int N);
	virtual double atomEnergyAtIndex(int index);

private:
	virtual PE_AtomParamter returnAtomParameter(Atom_Type atom);
	virtual PE_AtomParamter returnAtomParameter(Atom_Type atom1,Atom_Type atom2);
};