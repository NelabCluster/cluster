#include "StdAfx.h"
#include "PotentialEnergy.h"
#include "LJPotentialEnergy.h"
#include "GuptaPotentialEnergy.h"
#include "FSPotentialEnergy.h"

PotentialEnergy* PotentialEnergy::PEWithType(PE_TYPE type)
{
	switch(type)
	{
	case PE_LJ:
		return new LJPotentialEnergy();
	case PE_Gupta:
		return new GuptaPotentialEnergy();
	case PE_FS:
		return new FSPotentialEnergy();
	}
	return nullptr;
}

double PotentialEnergy::energyValue(Clusters& cluster){ return 0; }
double PotentialEnergy::energyValue(double dis[],int N){ return 0; }
double PotentialEnergy::energyValue(Atom_Type atom1,double dis[],int N){ return 0; }
double PotentialEnergy::energyValue(Atom_Type atom1,Atom_Type atom2,double dis[],int note[],int N){ return 0; }
double PotentialEnergy::energyValue(Atom_Type atoms[],int atomsNumber,double dis[],int note[],int N){ return 0; }

double PotentialEnergy::atomEnergyAtIndex(int index){ return 0; }
PE_AtomParamter PotentialEnergy::returnAtomParameter(Atom_Type atom){ return PE_AtomParamter(); }
PE_AtomParamter PotentialEnergy::returnAtomParameter(Atom_Type atom1,Atom_Type atom2){ return PE_AtomParamter(); }