#pragma once
#include "potentialenergy.h"

struct Gupta_AtomParamter : PE_AtomParamter
{
	double r0;
	double A;
	double Xi;
	double P;
	double q;
	Gupta_AtomParamter(double r0,double A,double Xi,double P,double q)
		:r0(r0),A(A),Xi(Xi),P(P),q(q){ }
};

class GuptaPotentialEnergy :
	public PotentialEnergy
{
public:
	GuptaPotentialEnergy(void);
	~GuptaPotentialEnergy(void);

	//double energyValue(double cood[],int N);
	double energyValue(Atom_Type atom,double dis[],int N);
	//double energyValue(ATOM atom1,ATOM atom2,double cood[],int note[],int N);
	//double energyValue(ATOM atoms[],double cood[],int note[],int N);
private:
	PE_AtomParamter returnAtomParameter(Atom_Type atom);
	PE_AtomParamter returnAtomParameter(Atom_Type atom1,Atom_Type atom2);
};

