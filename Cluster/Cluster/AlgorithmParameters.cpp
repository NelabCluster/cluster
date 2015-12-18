#include "StdAfx.h"
#include "AlgorithmParameters.h"


AlgorithmParameters::AlgorithmParameters(int N,PE_TYPE pe,Atom_Type atom1,Atom_Type atom2,int atom1N)
{
	
	this->N = N;
	this->PE = PotentialEnergy::PEWithType(pe);

	if ( NULL != atom1 ) this->atomTypes.push_back(atom1);

	if ( NULL != atom2 ) this->atomTypes.push_back(atom2);

	this->atomNumber.push_back(atom1N);

	this->atomNumber.push_back(N-atom1N);
}


AlgorithmParameters::~AlgorithmParameters(void)
{
	delete this->PE;
}
