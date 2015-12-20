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

static Gupta_AtomParamter GuptaFe(2.553,0.13315,1.6179,10.5,2.6),
				   GuptaPt(2.7746,0.2975,2.695,10.612,4.004),
				   GuptaFePt(2.6638,0.19903,2.0881,10.556,3.302);

class GuptaPotentialEnergy :
	public PotentialEnergy
{
public:
	GuptaPotentialEnergy(void);
	~GuptaPotentialEnergy(void);


	double EnergyValue(Clusters& cluster);
	double ForceValue(Clusters& cluster);

private:
	PE_AtomParamter& ReturnAtomParameter(ATOM_TYPE atom);
	PE_AtomParamter& ReturnAtomParameter(ATOM_TYPE atom1,ATOM_TYPE atom2);
};

